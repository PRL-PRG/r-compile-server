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

  // Declare locals
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_j;
  SEXP Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_j2_;
  SEXP Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_reg_i36_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // s = toForSeq(<int 1, 2, 3, 4>)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args1);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 3);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L1_:;
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L2_:;
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
  // if c then L1() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L13()
    goto L13_;
  }

L3_:;
  // s1 = toForSeq(<int 1, 2, 3, 4>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args5);
  // i11 = 0
  Rsh_Fir_reg_i11_ = Rsh_const(CCP, 3);
  // goto L7(i2, i11)
  // L7(i2, i11)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
  goto L7_;

L6_:;
  // goto L2(i15)
  // L2(i15)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i15_;
  goto L2_;

L7_:;
  // i14 = `+`.1(i13, 1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_i14_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // c2 = `<`.1(l1, i14)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if c2 then L6(i12) else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L6(i12)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i12_;
    goto L6_;
  } else {
  // L12()
    goto L12_;
  }

L8_:;
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L10_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

L12_:;
  // x1 = `[[`(s1, i14, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args8);
  // st j = x1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L13_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args9);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

D0_:;
  // deopt 7 [i2, i5]
  SEXP Rsh_Fir_array_deopt_stack[2];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r = `==`(i6, 4.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args11);
  // c1 = `as.logical`(r)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c1 then L15() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L15()
    goto L15_;
  } else {
  // L3()
    goto L3_;
  }

L15_:;
  // goto L1()
  // L1()
  goto L1_;

D1_:;
  // deopt 19 [i12, i14, j]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(19, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // checkMissing(j1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_j1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r2 = `==`(j1, 2.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_j1_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args14);
  // c3 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c3 then L19() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L19()
    goto L19_;
  } else {
  // L8()
    goto L8_;
  }

L19_:;
  // goto L7(i12, i14)
  // L7(i12, i14)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i14_;
  goto L7_;

D2_:;
  // deopt 27 [i12, i14, j2]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // checkMissing(j3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_j3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // r4 = `==`(j3, 4.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_j3_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args17);
  // c4 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c4 then L23() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L23()
    goto L23_;
  } else {
  // L10()
    goto L10_;
  }

L23_:;
  // goto L6(i12)
  // L6(i12)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i12_;
  goto L6_;

D3_:;
  // deopt 35 [i12, i14, x2]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L26_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // i35 = ld i
  Rsh_Fir_reg_i35_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

D4_:;
  // deopt 36 [i12, i14, x3, i35]
  SEXP Rsh_Fir_array_deopt_stack4[4];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_i35_;
  Rsh_Fir_deopt(36, 4, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // i36 = force? i35
  Rsh_Fir_reg_i36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i35_);
  // checkMissing(i36)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_i36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r6 = `*`(i36, 10.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args21);
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

D5_:;
  // deopt 39 [i12, i14, x3, r6, j4]
  SEXP Rsh_Fir_array_deopt_stack5[5];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack5[4] = Rsh_Fir_reg_j4_;
  Rsh_Fir_deopt(39, 5, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L28_:;
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // checkMissing(j5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_j5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // r7 = `+`(r6, j5)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_j5_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args23);
  // r8 = `+`(x3, r7)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args24);
  // st x = r8
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L7(i12, i14)
  // L7(i12, i14)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i14_;
  goto L7_;

D6_:;
  // deopt 52 [x4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
