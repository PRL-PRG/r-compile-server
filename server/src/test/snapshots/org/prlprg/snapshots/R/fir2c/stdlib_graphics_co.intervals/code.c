#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3444821629_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3444821629_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3444821629_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3444821629_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3444821629_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3444821629_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3444821629_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3444821629_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner3444821629
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3444821629_, RHO, CCP);
  // st `co.intervals` = r
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
SEXP Rsh_Fir_user_function_inner3444821629_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3444821629 dynamic dispatch ([x, number, overlap])

  return Rsh_Fir_user_version_inner3444821629_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3444821629_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3444821629 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3444821629/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_number;  // number
  SEXP Rsh_Fir_reg_overlap;  // overlap
  SEXP Rsh_Fir_reg_number_isMissing;  // number_isMissing
  SEXP Rsh_Fir_reg_number_orDefault;  // number_orDefault
  SEXP Rsh_Fir_reg_overlap_isMissing;  // overlap_isMissing
  SEXP Rsh_Fir_reg_overlap_orDefault;  // overlap_orDefault
  SEXP Rsh_Fir_reg_sort;  // sort
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_number1_;  // number1
  SEXP Rsh_Fir_reg_number2_;  // number2
  SEXP Rsh_Fir_reg_overlap1_;  // overlap1
  SEXP Rsh_Fir_reg_overlap2_;  // overlap2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_overlap3_;  // overlap3
  SEXP Rsh_Fir_reg_overlap4_;  // overlap4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_number3_;  // number3
  SEXP Rsh_Fir_reg_number4_;  // number4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_overlap5_;  // overlap5
  SEXP Rsh_Fir_reg_overlap6_;  // overlap6
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_round;  // round
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_round1_;  // round1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_diff;  // diff
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_x27_;  // x27
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_diff1_;  // diff1
  SEXP Rsh_Fir_reg_xr;  // xr
  SEXP Rsh_Fir_reg_xr1_;  // xr1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_diff2_;  // diff2
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_j_gt_0_;  // j_gt_0
  SEXP Rsh_Fir_reg_j_gt_1_;  // j_gt_1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_jump;  // jump
  SEXP Rsh_Fir_reg_jump1_;  // jump1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_jump3_;  // jump3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_j_gt_2_;  // j_gt_2
  SEXP Rsh_Fir_reg_j_gt_3_;  // j_gt_3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_cbind;  // cbind
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_x31_;  // x31
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x33_;  // x33
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_keep;  // keep
  SEXP Rsh_Fir_reg_keep1_;  // keep1
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_eps;  // eps
  SEXP Rsh_Fir_reg_eps1_;  // eps1
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_xr2_;  // xr2
  SEXP Rsh_Fir_reg_xr3_;  // xr3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_xr5_;  // xr5
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_keep2_;  // keep2
  SEXP Rsh_Fir_reg_keep3_;  // keep3
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_eps2_;  // eps2
  SEXP Rsh_Fir_reg_eps3_;  // eps3
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r70_;  // r70

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_number = PARAMS[1];
  Rsh_Fir_reg_overlap = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // number_isMissing = missing.0(number)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_number;
  Rsh_Fir_reg_number_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if number_isMissing then L0(6.0) else L0(number)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_number_isMissing)) {
  // L0(6.0)
    Rsh_Fir_reg_number_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(number)
    Rsh_Fir_reg_number_orDefault = Rsh_Fir_reg_number;
    goto L0_;
  }

L0_:;
  // st number = number_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_number_orDefault, RHO);
  (void)(Rsh_Fir_reg_number_orDefault);
  // overlap_isMissing = missing.0(overlap)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_overlap;
  Rsh_Fir_reg_overlap_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if overlap_isMissing then L1(0.5) else L1(overlap)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_overlap_isMissing)) {
  // L1(0.5)
    Rsh_Fir_reg_overlap_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(overlap)
    Rsh_Fir_reg_overlap_orDefault = Rsh_Fir_reg_overlap;
    goto L1_;
  }

L1_:;
  // st overlap = overlap_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_overlap_orDefault, RHO);
  (void)(Rsh_Fir_reg_overlap_orDefault);
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L2_:;
  // st n = r8
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L3_:;
  // st x1 = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D12()
  // L32()
  goto L32_;

L4_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r24 = dyn __1(x18, r22)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r24)
  // L3(r24)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r24_;
  goto L3_;

L5_:;
  // st xr = dx5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard4 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L6_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r28 = dyn __2(x25, r26)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L5(r28)
  // L5(r28)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r28_;
  goto L5_;

L7_:;
  // st keep = r30
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // diff2 = ldf diff
  Rsh_Fir_reg_diff2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L45() else D18()
  // L45()
  goto L45_;

L8_:;
  // c4 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c4 then L51() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L51()
    goto L51_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L12(r45, 0.0)
  // L12(r45, 0.0)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_r62_ = Rsh_const(CCP, 14);
  goto L12_;

L10_:;
  // goto L12(r53, r54)
  // L12(r53, r54)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r54_;
  goto L12_;

L11_:;
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r60 = dyn min(dx7)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L59() else D24()
  // L59()
  goto L59_;

L12_:;
  // r63 = `*`(r61, r62)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st eps = r63
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r63_, RHO);
  (void)(Rsh_Fir_reg_r63_);
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L61() else D25()
  // L61()
  goto L61_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c = `is.object`(x2);
  //   if c then L2() else L3(x2);
  // L0(dx1):
  //   return dx1;
  // L2():
  //   dr = tryDispatchBuiltin.1("[", x2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L4() else L3(dr);
  // L3(x4):
  //   sym = ldf `is.na`;
  //   base = ldf `is.na` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L5() else L6();
  // L1(x7, r1):
  //   r3 = `!`(r1);
  //   __ = ldf `[` in base;
  //   r4 = dyn __(x7, r3);
  //   goto L0(r4);
  // L4():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L5():
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   is_na = ldf `is.na` in base;
  //   r2 = dyn is_na(x9);
  //   goto L1(x4, r2);
  // L6():
  //   r = dyn base(<sym x>);
  //   goto L1(x4, r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3444821629_, CCP, RHO);
  // r6 = dyn sort(p)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 3 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // st x = r6
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

L16_:;
  // r7 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L2_;

D2_:;
  // deopt 7 [x10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L17_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r9 = dyn length(x11)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

D3_:;
  // deopt 10 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;

D4_:;
  // deopt 12 [n]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // number1 = ld number
  Rsh_Fir_reg_number1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

D5_:;
  // deopt 13 [n1, number1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_number1_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // number2 = force? number1
  Rsh_Fir_reg_number2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number1_);
  // checkMissing(number2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_number2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // overlap1 = ld overlap
  Rsh_Fir_reg_overlap1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

D6_:;
  // deopt 15 [n1, number2, 1.0, overlap1]
  SEXP Rsh_Fir_array_deopt_stack5[4];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_number2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_overlap1_;
  Rsh_Fir_deopt(15, 4, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // overlap2 = force? overlap1
  Rsh_Fir_reg_overlap2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_overlap1_);
  // checkMissing(overlap2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_overlap2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r10 = `-`(1.0, overlap2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_overlap2_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // r11 = `*`(number2, r10)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_number2_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // overlap3 = ld overlap
  Rsh_Fir_reg_overlap3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D7_:;
  // deopt 18 [n1, r11, overlap3]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_overlap3_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // overlap4 = force? overlap3
  Rsh_Fir_reg_overlap4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_overlap3_);
  // checkMissing(overlap4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_overlap4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r12 = `+`(r11, overlap4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_overlap4_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // r13 = `/`(n1, r12)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // st r = r13
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // number3 = ld number
  Rsh_Fir_reg_number3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

D8_:;
  // deopt 24 [0.0, number3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_number3_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // number4 = force? number3
  Rsh_Fir_reg_number4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number3_);
  // checkMissing(number4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_number4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // r14 = `-`(number4, 1.0)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_number4_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // r15 = `:`(0.0, r14)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // overlap5 = ld overlap
  Rsh_Fir_reg_overlap5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 29 [r15, 1.0, overlap5]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_overlap5_;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L24_:;
  // overlap6 = force? overlap5
  Rsh_Fir_reg_overlap6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_overlap5_);
  // checkMissing(overlap6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_overlap6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // r16 = `-`(1.0, overlap6)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_overlap6_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // r17 = `*`(r15, r16)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // r18 = ld r
  Rsh_Fir_reg_r18_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 32 [r17, r18]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L25_:;
  // r19 = force? r18
  Rsh_Fir_reg_r19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r18_);
  // checkMissing(r19)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r20 = `*`(r17, r19)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // st ii = r20
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

D11_:;
  // deopt 36 [x12]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L26_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x13)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c1 then L27() else L28(x13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L27()
    goto L27_;
  } else {
  // L28(x13)
    Rsh_Fir_reg_x15_ = Rsh_Fir_reg_x13_;
    goto L28_;
  }

L27_:;
  // dr2 = tryDispatchBuiltin.1("[", x13)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_x13_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc1 then L29() else L28(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr2)
    Rsh_Fir_reg_x15_ = Rsh_Fir_reg_dr2_;
    goto L28_;
  }

L28_:;
  // sym2 = ldf round
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base2 = ldf round in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L29_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

L30_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r23 = dyn round(<lang `+`(1.0, ii)>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(x15, r23)
  // L4(x15, r23)
  Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x15_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L4_;

L31_:;
  // r21 = dyn base2(<lang `+`(1.0, ii)>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(x15, r21)
  // L4(x15, r21)
  Rsh_Fir_reg_x18_ = Rsh_Fir_reg_x15_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L4_;

D12_:;
  // deopt 43 [x19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x20)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c2 then L33() else L34(x20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L33()
    goto L33_;
  } else {
  // L34(x20)
    Rsh_Fir_reg_x22_ = Rsh_Fir_reg_x20_;
    goto L34_;
  }

L33_:;
  // dr4 = tryDispatchBuiltin.1("[", x20)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_x20_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc2 then L35() else L34(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr4)
    Rsh_Fir_reg_x22_ = Rsh_Fir_reg_dr4_;
    goto L34_;
  }

L34_:;
  // sym3 = ldf round
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base3 = ldf round in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard3 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L35_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L5(dx4)
  // L5(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L5_;

L36_:;
  // round1 = ldf round in base
  Rsh_Fir_reg_round1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r27 = dyn round1(<lang `+`(r, ii)>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(x22, r27)
  // L6(x22, r27)
  Rsh_Fir_reg_x25_ = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L6_;

L37_:;
  // r25 = dyn base3(<lang `+`(r, ii)>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L6(x22, r25)
  // L6(x22, r25)
  Rsh_Fir_reg_x25_ = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L6_;

L38_:;
  // diff = ldf diff
  Rsh_Fir_reg_diff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

L39_:;
  // r29 = dyn base4(TRUE, <lang `|`(`>`(diff(x1), 0.0), `>`(diff(xr), 0.0))>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L7(r29)
  // L7(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L7_;

D13_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p1 = prom<V +>{
  //   x26 = ld x1;
  //   x27 = force? x26;
  //   checkMissing(x27);
  //   return x27;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3444821629_1, CCP, RHO);
  // r32 = dyn diff(p1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diff, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L41() else D14()
  // L41()
  goto L41_;

D14_:;
  // deopt 56 [r32]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L41_:;
  // r33 = `>`(r32, 0.0)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // diff1 = ldf diff
  Rsh_Fir_reg_diff1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L42() else D15()
  // L42()
  goto L42_;

D15_:;
  // deopt 59 [r33]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L42_:;
  // p2 = prom<V +>{
  //   xr = ld xr;
  //   xr1 = force? xr;
  //   checkMissing(xr1);
  //   return xr1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3444821629_2, CCP, RHO);
  // r35 = dyn diff1(p2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diff1_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L43() else D16()
  // L43()
  goto L43_;

D16_:;
  // deopt 61 [r33, r35]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L43_:;
  // r36 = `>`(r35, 0.0)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // r37 = `||`(r33, r36)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r38 = dyn c3(TRUE, r37)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L44() else D17()
  // L44()
  goto L44_;

D17_:;
  // deopt 66 [r38]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L7(r38)
  // L7(r38)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r38_;
  goto L7_;

D18_:;
  // deopt 70 [0.0]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_const(CCP, 14);
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L45_:;
  // p3 = prom<V +>{
  //   x28 = ld x;
  //   x29 = force? x28;
  //   checkMissing(x29);
  //   return x29;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3444821629_3, CCP, RHO);
  // r40 = dyn diff2(p3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diff2_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L46() else D19()
  // L46()
  goto L46_;

D19_:;
  // deopt 72 [0.0, r40]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L46_:;
  // st jump = r40
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // r41 = `<`(0.0, r40)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // st `j.gt.0` = r41
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard5 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L47_:;
  // j_gt_0 = ld `j.gt.0`
  Rsh_Fir_reg_j_gt_0_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L49() else D20()
  // L49()
  goto L49_;

L48_:;
  // r44 = dyn base5(<sym j.gt.0>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L8(0.5, r44)
  // L8(0.5, r44)
  Rsh_Fir_reg_r45_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
  goto L8_;

D20_:;
  // deopt 79 [0.5, j_gt_0]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_j_gt_0_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L49_:;
  // j_gt_1 = force? j_gt_0
  Rsh_Fir_reg_j_gt_1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j_gt_0_);
  // checkMissing(j_gt_1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_j_gt_1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r47 = dyn any(j_gt_1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_j_gt_1_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L50() else D21()
  // L50()
  goto L50_;

D21_:;
  // deopt 82 [0.5, r47]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L8(0.5, r47)
  // L8(0.5, r47)
  Rsh_Fir_reg_r45_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L8_;

L51_:;
  // sym6 = ldf min
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf min in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard6 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L52_:;
  // jump = ld jump
  Rsh_Fir_reg_jump = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L54() else D22()
  // L54()
  goto L54_;

L53_:;
  // r52 = dyn base6(<lang `[`(jump, j.gt.0)>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L10(r45, r52)
  // L10(r45, r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r52_;
  goto L10_;

D22_:;
  // deopt 85 [r45, jump]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_jump;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L54_:;
  // jump1 = force? jump
  Rsh_Fir_reg_jump1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jump);
  // checkMissing(jump1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_jump1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(jump1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_jump1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if c5 then L55() else L56(r45, jump1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L55()
    goto L55_;
  } else {
  // L56(r45, jump1)
    Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r45_;
    Rsh_Fir_reg_jump3_ = Rsh_Fir_reg_jump1_;
    goto L56_;
  }

L55_:;
  // dr6 = tryDispatchBuiltin.1("[", jump1)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_jump1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args76);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if dc3 then L57() else L56(r45, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L57()
    goto L57_;
  } else {
  // L56(r45, dr6)
    Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r45_;
    Rsh_Fir_reg_jump3_ = Rsh_Fir_reg_dr6_;
    goto L56_;
  }

L56_:;
  // j_gt_2 = ld `j.gt.0`
  Rsh_Fir_reg_j_gt_2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L58() else D23()
  // L58()
  goto L58_;

L57_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L11(r45, dx6)
  // L11(r45, dx6)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L11_;

D23_:;
  // deopt 87 [r56, jump3, j_gt_2]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_jump3_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_j_gt_2_;
  Rsh_Fir_deopt(87, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L58_:;
  // j_gt_3 = force? j_gt_2
  Rsh_Fir_reg_j_gt_3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j_gt_2_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r59 = dyn __3(jump3, j_gt_3)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_jump3_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_j_gt_3_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L11(r56, r59)
  // L11(r56, r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r59_;
  goto L11_;

D24_:;
  // deopt 91 [r58, r60]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(91, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L10(r58, r60)
  // L10(r58, r60)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r60_;
  goto L10_;

D25_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p4 = prom<V +>{
  //   x30 = ld x1;
  //   x31 = force? x30;
  //   checkMissing(x31);
  //   c6 = `is.object`(x31);
  //   if c6 then L1() else L2(x31);
  // L0(dx9):
  //   eps = ld eps;
  //   eps1 = force? eps;
  //   checkMissing(eps1);
  //   r65 = `-`(dx9, eps1);
  //   return r65;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", x31);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(x33):
  //   keep = ld keep;
  //   keep1 = force? keep;
  //   __4 = ldf `[` in base;
  //   r64 = dyn __4(x33, keep1);
  //   goto L0(r64);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3444821629_4, CCP, RHO);
  // p5 = prom<V +>{
  //   xr2 = ld xr;
  //   xr3 = force? xr2;
  //   checkMissing(xr3);
  //   c7 = `is.object`(xr3);
  //   if c7 then L1() else L2(xr3);
  // L0(dx11):
  //   eps2 = ld eps;
  //   eps3 = force? eps2;
  //   checkMissing(eps3);
  //   r68 = `+`(dx11, eps3);
  //   return r68;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", xr3);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(xr5):
  //   keep2 = ld keep;
  //   keep3 = force? keep2;
  //   __5 = ldf `[` in base;
  //   r67 = dyn __5(xr5, keep3);
  //   goto L0(r67);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3444821629_5, CCP, RHO);
  // r70 = dyn cbind(p4, p5)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L62() else D26()
  // L62()
  goto L62_;

D26_:;
  // deopt 100 [r70]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L62_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r70
  return Rsh_Fir_reg_r70_;
}
SEXP Rsh_Fir_user_promise_inner3444821629_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c then L2() else L3(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2()
    goto L2_;
  } else {
  // L3(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L3_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r4 = dyn __(x7, r3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // dr = tryDispatchBuiltin.1("[", x2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L3_;
  }

L3_:;
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L5_:;
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r2 = dyn is_na(x9)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(x4, r2)
  // L1(x4, r2)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L6_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(x4, r)
  // L1(x4, r)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3444821629_1(SEXP CCP, SEXP RHO) {
  // x26 = ld x1
  Rsh_Fir_reg_x26_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // x27 = force? x26
  Rsh_Fir_reg_x27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x26_);
  // checkMissing(x27)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return x27
  return Rsh_Fir_reg_x27_;
}
SEXP Rsh_Fir_user_promise_inner3444821629_2(SEXP CCP, SEXP RHO) {
  // xr = ld xr
  Rsh_Fir_reg_xr = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // xr1 = force? xr
  Rsh_Fir_reg_xr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xr);
  // checkMissing(xr1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_xr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return xr1
  return Rsh_Fir_reg_xr1_;
}
SEXP Rsh_Fir_user_promise_inner3444821629_3(SEXP CCP, SEXP RHO) {
  // x28 = ld x
  Rsh_Fir_reg_x28_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x29 = force? x28
  Rsh_Fir_reg_x29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x28_);
  // checkMissing(x29)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return x29
  return Rsh_Fir_reg_x29_;
}
SEXP Rsh_Fir_user_promise_inner3444821629_4(SEXP CCP, SEXP RHO) {
  // x30 = ld x1
  Rsh_Fir_reg_x30_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // x31 = force? x30
  Rsh_Fir_reg_x31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x30_);
  // checkMissing(x31)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(x31)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x31_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(x31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x31)
    Rsh_Fir_reg_x33_ = Rsh_Fir_reg_x31_;
    goto L2_;
  }

L0_:;
  // eps = ld eps
  Rsh_Fir_reg_eps = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // eps1 = force? eps
  Rsh_Fir_reg_eps1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eps);
  // checkMissing(eps1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_eps1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r65 = `-`(dx9, eps1)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_eps1_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // return r65
  return Rsh_Fir_reg_r65_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", x31)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_x31_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_x33_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // keep = ld keep
  Rsh_Fir_reg_keep = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // keep1 = force? keep
  Rsh_Fir_reg_keep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r64 = dyn __4(x33, keep1)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x33_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_keep1_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r64)
  // L0(r64)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r64_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3444821629_5(SEXP CCP, SEXP RHO) {
  // xr2 = ld xr
  Rsh_Fir_reg_xr2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // xr3 = force? xr2
  Rsh_Fir_reg_xr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xr2_);
  // checkMissing(xr3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_xr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(xr3)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_xr3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c7 then L1() else L2(xr3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xr3)
    Rsh_Fir_reg_xr5_ = Rsh_Fir_reg_xr3_;
    goto L2_;
  }

L0_:;
  // eps2 = ld eps
  Rsh_Fir_reg_eps2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // eps3 = force? eps2
  Rsh_Fir_reg_eps3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eps2_);
  // checkMissing(eps3)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_eps3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // r68 = `+`(dx11, eps3)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_eps3_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // return r68
  return Rsh_Fir_reg_r68_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", xr3)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_xr3_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_xr5_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // keep2 = ld keep
  Rsh_Fir_reg_keep2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // keep3 = force? keep2
  Rsh_Fir_reg_keep3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep2_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r67 = dyn __5(xr5, keep3)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_xr5_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_keep3_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r67)
  // L0(r67)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r67_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
