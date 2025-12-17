#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // s = toForSeq(<int 1, 2>)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 3);
  // goto L0(i)
  // L0(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L0_;

L0_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c then L14() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L13()
    goto L13_;
  }

L2_:;
  // goto L0(i9)
  // L0(i9)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i9_;
  goto L0_;

L3_:;
  // i8 = `+`.1(i7, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_i8_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // c1 = `<`.1(l1, i8)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if c1 then L2(i6) else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L2(i6)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i6_;
    goto L2_;
  } else {
  // L12()
    goto L12_;
  }

L5_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L6_:;
  // i17 = `+`.1(i16, 1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_i17_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // c2 = `<`.1(l2, i17)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if c2 then L5(i14, i15) else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L5(i14, i15)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i15_;
    goto L5_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

L9_:;
  // x2 = `[[`(s2, i17, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x2_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st k = x2
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_x2_, RHO);
  (void)(Rsh_Fir_reg_x2_);
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L10_:;
  // goto L3(i18, i19)
  // L3(i18, i19)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i19_;
  goto L3_;

L12_:;
  // x1 = `[[`(s1, i8, NULL, TRUE)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // st j = x1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // s2 = toForSeq(<int 1, 2, 3>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_s2_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // l2 = length(s2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_l2_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // i13 = 0
  Rsh_Fir_reg_i13_ = Rsh_const(CCP, 3);
  // goto L6(i6, i8, i13)
  // L6(i6, i8, i13)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i13_;
  goto L6_;

L13_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // s1 = toForSeq(<int 1, 2>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // i5 = 0
  Rsh_Fir_reg_i5_ = Rsh_const(CCP, 3);
  // goto L3(i2, i5)
  // L3(i2, i5)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i5_;
  goto L3_;

L14_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

D0_:;
  // deopt 13 [i14, i15, i17, k]
  SEXP Rsh_Fir_array_deopt_stack[4];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack[2] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack[3] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(13, 4, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r = `==`(k1, 2.0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c3 then L16() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L16()
    goto L16_;
  } else {
  // L7()
    goto L7_;
  }

L16_:;
  // goto L5(i14, i15)
  // L5(i14, i15)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i15_;
  goto L5_;

D1_:;
  // deopt 21 [i14, i15, i17, x3]
  SEXP Rsh_Fir_array_deopt_stack1[4];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack1[3] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(21, 4, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r2 = `+`(x4, 1.0)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // st x = r2
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // goto L6(i14, i15, i17)
  // L6(i14, i15, i17)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i17_;
  goto L6_;

D2_:;
  // deopt 30 [i18, i19, j]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(30, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // checkMissing(j1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_j1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r3 = `==`(j1, 2.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_j1_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c4 then L21() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L21()
    goto L21_;
  } else {
  // L10()
    goto L10_;
  }

L21_:;
  // goto L2(i18)
  // L2(i18)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i18_;
  goto L2_;

D3_:;
  // deopt 45 [x5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
