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
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_inner;
  SEXP Rsh_Fir_reg_inner1_;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_inner2_;
  SEXP Rsh_Fir_reg_inner3_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_inner_sum;
  SEXP Rsh_Fir_reg_inner_sum1_;
  SEXP Rsh_Fir_reg_inner4_;
  SEXP Rsh_Fir_reg_inner5_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_outer;
  SEXP Rsh_Fir_reg_outer1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_result;
  SEXP Rsh_Fir_reg_result1_;
  SEXP Rsh_Fir_reg_inner_sum2_;
  SEXP Rsh_Fir_reg_inner_sum3_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_result2_;
  SEXP Rsh_Fir_reg_result3_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st result = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // s = toForSeq(<int 1, 2, 3>)
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
  // result2 = ld result
  Rsh_Fir_reg_result2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

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

L4_:;
  // outer = ld outer
  Rsh_Fir_reg_outer = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L5_:;
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
  // if c1 then L4(i6) else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4(i6)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i6_;
    goto L4_;
  } else {
  // L10()
    goto L10_;
  }

L6_:;
  // inner2 = ld inner
  Rsh_Fir_reg_inner2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L8_:;
  // inner_sum = ld inner_sum
  Rsh_Fir_reg_inner_sum = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L10_:;
  // x1 = `[[`(s1, i8, NULL, TRUE)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args6);
  // st inner = x1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // inner = ld inner
  Rsh_Fir_reg_inner = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L11_:;
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L13_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args7);
  // st outer = x
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st inner_sum = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // s1 = toForSeq(<int 1, 2, 3, 4>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args9);
  // i5 = 0
  Rsh_Fir_reg_i5_ = Rsh_const(CCP, 3);
  // goto L5(i2, i5)
  // L5(i2, i5)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i5_;
  goto L5_;

D0_:;
  // deopt 14 [i6, i8, inner]
  SEXP Rsh_Fir_array_deopt_stack[3];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack[2] = Rsh_Fir_reg_inner;
  Rsh_Fir_deopt(14, 3, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // inner1 = force? inner
  Rsh_Fir_reg_inner1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inner);
  // checkMissing(inner1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_inner1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r = `==`(inner1, 1.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_inner1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args11);
  // c2 = `as.logical`(r)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c2 then L15() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L15()
    goto L15_;
  } else {
  // L6()
    goto L6_;
  }

L15_:;
  // goto L5(i6, i8)
  // L5(i6, i8)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i8_;
  goto L5_;

D1_:;
  // deopt 22 [i6, i8, inner2]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_inner2_;
  Rsh_Fir_deopt(22, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // inner3 = force? inner2
  Rsh_Fir_reg_inner3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inner2_);
  // checkMissing(inner3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_inner3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r2 = `==`(inner3, 4.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_inner3_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 12);
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
  // goto L4(i6)
  // L4(i6)
  Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i6_;
  goto L4_;

D2_:;
  // deopt 30 [i6, i8, inner_sum]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_inner_sum;
  Rsh_Fir_deopt(30, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // inner_sum1 = force? inner_sum
  Rsh_Fir_reg_inner_sum1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inner_sum);
  // checkMissing(inner_sum1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_inner_sum1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // inner4 = ld inner
  Rsh_Fir_reg_inner4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

D3_:;
  // deopt 31 [i6, i8, inner_sum1, inner4]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_inner_sum1_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_inner4_;
  Rsh_Fir_deopt(31, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // inner5 = force? inner4
  Rsh_Fir_reg_inner5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inner4_);
  // checkMissing(inner5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_inner5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r4 = `+`(inner_sum1, inner5)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_inner_sum1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_inner5_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args18);
  // st inner_sum = r4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // goto L5(i6, i8)
  // L5(i6, i8)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i8_;
  goto L5_;

D4_:;
  // deopt 39 [i9, outer]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_outer;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // outer1 = force? outer
  Rsh_Fir_reg_outer1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outer);
  // checkMissing(outer1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_outer1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r5 = `==`(outer1, 3.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_outer1_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args20);
  // c4 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c4 then L25() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L25()
    goto L25_;
  } else {
  // L11()
    goto L11_;
  }

L25_:;
  // goto L1()
  // L1()
  goto L1_;

D5_:;
  // deopt 47 [i9, result]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L28_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // inner_sum2 = ld inner_sum
  Rsh_Fir_reg_inner_sum2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

D6_:;
  // deopt 48 [i9, result1, inner_sum2]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_result1_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_inner_sum2_;
  Rsh_Fir_deopt(48, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L29_:;
  // inner_sum3 = force? inner_sum2
  Rsh_Fir_reg_inner_sum3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inner_sum2_);
  // checkMissing(inner_sum3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_inner_sum3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r7 = `+`(result1, inner_sum3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_result1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_inner_sum3_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args24);
  // st result = r7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // goto L2(i9)
  // L2(i9)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i9_;
  goto L2_;

D7_:;
  // deopt 56 [result2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_result2_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // result3 = force? result2
  Rsh_Fir_reg_result3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result2_);
  // checkMissing(result3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_result3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result3
  return Rsh_Fir_reg_result3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
