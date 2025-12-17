#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1594863638_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1594863638_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1594863638_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1594863638_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1594863638_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1594863638_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1594863638_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1594863638_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1594863638_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner4224539485_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4224539485_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3150295176_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3150295176_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1594863638
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1594863638_, RHO, CCP);
  // st `.selectSuperClasses` = r
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
SEXP Rsh_Fir_user_function_inner1594863638_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1594863638 dynamic dispatch ([ext, dropVirtual, namesOnly, directOnly, simpleOnly])

  return Rsh_Fir_user_version_inner1594863638_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1594863638_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1594863638 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1594863638/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ext;  // ext
  SEXP Rsh_Fir_reg_dropVirtual;  // dropVirtual
  SEXP Rsh_Fir_reg_namesOnly;  // namesOnly
  SEXP Rsh_Fir_reg_directOnly;  // directOnly
  SEXP Rsh_Fir_reg_simpleOnly;  // simpleOnly
  SEXP Rsh_Fir_reg_dropVirtual_isMissing;  // dropVirtual_isMissing
  SEXP Rsh_Fir_reg_dropVirtual_orDefault;  // dropVirtual_orDefault
  SEXP Rsh_Fir_reg_namesOnly_isMissing;  // namesOnly_isMissing
  SEXP Rsh_Fir_reg_namesOnly_orDefault;  // namesOnly_orDefault
  SEXP Rsh_Fir_reg_directOnly_isMissing;  // directOnly_isMissing
  SEXP Rsh_Fir_reg_directOnly_orDefault;  // directOnly_orDefault
  SEXP Rsh_Fir_reg_simpleOnly_isMissing;  // simpleOnly_isMissing
  SEXP Rsh_Fir_reg_simpleOnly_orDefault;  // simpleOnly_orDefault
  SEXP Rsh_Fir_reg_directOnly1_;  // directOnly1
  SEXP Rsh_Fir_reg_directOnly2_;  // directOnly2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_dropVirtual1_;  // dropVirtual1
  SEXP Rsh_Fir_reg_dropVirtual2_;  // dropVirtual2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_expression;  // expression
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_directOnly3_;  // directOnly3
  SEXP Rsh_Fir_reg_directOnly4_;  // directOnly4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_addCond;  // addCond
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_quote1_;  // quote1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_C;  // C
  SEXP Rsh_Fir_reg_C1_;  // C1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_simpleOnly1_;  // simpleOnly1
  SEXP Rsh_Fir_reg_simpleOnly2_;  // simpleOnly2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_addCond1_;  // addCond1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_quote2_;  // quote2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_C2_;  // C2
  SEXP Rsh_Fir_reg_C3_;  // C3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_C4_;  // C4
  SEXP Rsh_Fir_reg_C5_;  // C5
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_C6_;  // C6
  SEXP Rsh_Fir_reg_C7_;  // C7
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_body__;  // body__
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_namesOnly1_;  // namesOnly1
  SEXP Rsh_Fir_reg_namesOnly2_;  // namesOnly2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_ext1_;  // ext1
  SEXP Rsh_Fir_reg_ext2_;  // ext2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_ext3_;  // ext3
  SEXP Rsh_Fir_reg_ext4_;  // ext4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_ext5_;  // ext5
  SEXP Rsh_Fir_reg_ext6_;  // ext6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_F;  // F
  SEXP Rsh_Fir_reg_F1_;  // F1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_namesOnly3_;  // namesOnly3
  SEXP Rsh_Fir_reg_namesOnly4_;  // namesOnly4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_ext7_;  // ext7
  SEXP Rsh_Fir_reg_ext8_;  // ext8
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_ext9_;  // ext9
  SEXP Rsh_Fir_reg_ext10_;  // ext10

  // Bind parameters
  Rsh_Fir_reg_ext = PARAMS[0];
  Rsh_Fir_reg_dropVirtual = PARAMS[1];
  Rsh_Fir_reg_namesOnly = PARAMS[2];
  Rsh_Fir_reg_directOnly = PARAMS[3];
  Rsh_Fir_reg_simpleOnly = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ext = ext
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ext, RHO);
  (void)(Rsh_Fir_reg_ext);
  // dropVirtual_isMissing = missing.0(dropVirtual)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_dropVirtual;
  Rsh_Fir_reg_dropVirtual_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if dropVirtual_isMissing then L0(FALSE) else L0(dropVirtual)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dropVirtual_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_dropVirtual_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(dropVirtual)
    Rsh_Fir_reg_dropVirtual_orDefault = Rsh_Fir_reg_dropVirtual;
    goto L0_;
  }

L0_:;
  // st dropVirtual = dropVirtual_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dropVirtual_orDefault, RHO);
  (void)(Rsh_Fir_reg_dropVirtual_orDefault);
  // namesOnly_isMissing = missing.0(namesOnly)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_namesOnly;
  Rsh_Fir_reg_namesOnly_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if namesOnly_isMissing then L1(TRUE) else L1(namesOnly)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_namesOnly_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_namesOnly_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(namesOnly)
    Rsh_Fir_reg_namesOnly_orDefault = Rsh_Fir_reg_namesOnly;
    goto L1_;
  }

L1_:;
  // st namesOnly = namesOnly_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_namesOnly_orDefault, RHO);
  (void)(Rsh_Fir_reg_namesOnly_orDefault);
  // directOnly_isMissing = missing.0(directOnly)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_directOnly;
  Rsh_Fir_reg_directOnly_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if directOnly_isMissing then L2(TRUE) else L2(directOnly)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_directOnly_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_directOnly_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(directOnly)
    Rsh_Fir_reg_directOnly_orDefault = Rsh_Fir_reg_directOnly;
    goto L2_;
  }

L2_:;
  // st directOnly = directOnly_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_directOnly_orDefault, RHO);
  (void)(Rsh_Fir_reg_directOnly_orDefault);
  // simpleOnly_isMissing = missing.0(simpleOnly)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_simpleOnly;
  Rsh_Fir_reg_simpleOnly_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if simpleOnly_isMissing then L3() else L4(simpleOnly)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_simpleOnly_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(simpleOnly)
    Rsh_Fir_reg_simpleOnly_orDefault = Rsh_Fir_reg_simpleOnly;
    goto L4_;
  }

L3_:;
  // p = prom<V +>{
  //   directOnly1 = ld directOnly;
  //   directOnly2 = force? directOnly1;
  //   checkMissing(directOnly2);
  //   return directOnly2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1594863638_, CCP, RHO);
  // goto L4(p)
  // L4(p)
  Rsh_Fir_reg_simpleOnly_orDefault = Rsh_Fir_reg_p;
  goto L4_;

L4_:;
  // st simpleOnly = simpleOnly_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_simpleOnly_orDefault, RHO);
  (void)(Rsh_Fir_reg_simpleOnly_orDefault);
  // r1 = clos inner4224539485
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4224539485_, RHO, CCP);
  // st addCond = r1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // dropVirtual1 = ld dropVirtual
  Rsh_Fir_reg_dropVirtual1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L5_:;
  // sym1 = ldf expression
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf expression in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L6_:;
  // goto L7(r4)
  // L7(r4)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r4_;
  goto L7_;

L7_:;
  // st C = r6
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // directOnly3 = ld directOnly
  Rsh_Fir_reg_directOnly3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L27() else D1()
  // L27()
  goto L27_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // simpleOnly1 = ld simpleOnly
  Rsh_Fir_reg_simpleOnly1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard4 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L12_:;
  // c3 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c3 then L41() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L41()
    goto L41_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // namesOnly3 = ld namesOnly
  Rsh_Fir_reg_namesOnly3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L59() else D18()
  // L59()
  goto L59_;

L14_:;
  // ext3 = ld ext
  Rsh_Fir_reg_ext3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D15()
  // L52()
  goto L52_;

L15_:;
  // goto L16(r29)
  // L16(r29)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r29_;
  goto L16_;

L16_:;
  // c5 = `is.object`(r31)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c5 then L53() else L54(r31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L53()
    goto L53_;
  } else {
  // L54(r31)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r31_;
    goto L54_;
  }

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L18_:;
  // ext9 = ld ext
  Rsh_Fir_reg_ext9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L66() else D21()
  // L66()
  goto L66_;

L19_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r39
  return Rsh_Fir_reg_r39_;

D0_:;
  // deopt 3 [dropVirtual1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_dropVirtual1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L20_:;
  // dropVirtual2 = force? dropVirtual1
  Rsh_Fir_reg_dropVirtual2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dropVirtual1_);
  // checkMissing(dropVirtual2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dropVirtual2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(dropVirtual2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dropVirtual2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L21() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L5()
    goto L5_;
  }

L21_:;
  // r2 = clos inner2501545716
  Rsh_Fir_reg_r2_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st isVirtualExt = r2
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf quote
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf quote in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L22_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r5 = dyn quote(<lang `!`(isVirtualExt(exti))>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L6(r5)
  // L6(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L6_;

L23_:;
  // r3 = dyn base(<lang `!`(isVirtualExt(exti))>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L6(r3)
  // L6(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L6_;

L25_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r8 = dyn expression()
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 0, NULL, NULL, CCP, RHO);
  // goto L7(r8)
  // L7(r8)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r8_;
  goto L7_;

L26_:;
  // r7 = dyn base1()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L7_;

D1_:;
  // deopt 15 [directOnly3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_directOnly3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // directOnly4 = force? directOnly3
  Rsh_Fir_reg_directOnly4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_directOnly3_);
  // checkMissing(directOnly4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_directOnly4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(directOnly4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_directOnly4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c1 then L28() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L28()
    goto L28_;
  } else {
  // L8()
    goto L8_;
  }

L28_:;
  // addCond = ldf addCond
  Rsh_Fir_reg_addCond = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

D2_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p1 = prom<V +>{
  //   sym2 = ldf quote;
  //   base2 = ldf quote in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   quote1 = ldf quote in base;
  //   r11 = dyn quote1(<lang `==`(length(`@`(exti, by)), 0.0)>);
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base2(<lang `==`(length(`@`(exti, by)), 0.0)>);
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1594863638_1, CCP, RHO);
  // p2 = prom<V +>{
  //   C = ld C;
  //   C1 = force? C;
  //   checkMissing(C1);
  //   return C1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1594863638_2, CCP, RHO);
  // r14 = dyn addCond(p1, p2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_addCond, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

D3_:;
  // deopt 21 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L30_:;
  // st C = r14
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // goto L9()
  // L9()
  goto L9_;

D4_:;
  // deopt 25 [simpleOnly1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_simpleOnly1_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L32_:;
  // simpleOnly2 = force? simpleOnly1
  Rsh_Fir_reg_simpleOnly2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_simpleOnly1_);
  // checkMissing(simpleOnly2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_simpleOnly2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(simpleOnly2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_simpleOnly2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L33() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L33()
    goto L33_;
  } else {
  // L10()
    goto L10_;
  }

L33_:;
  // addCond1 = ldf addCond
  Rsh_Fir_reg_addCond1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

D5_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p3 = prom<V +>{
  //   sym3 = ldf quote;
  //   base3 = ldf quote in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   quote2 = ldf quote in base;
  //   r18 = dyn quote2(<lang `@`(exti, simple)>);
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base3(<lang `@`(exti, simple)>);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1594863638_3, CCP, RHO);
  // p4 = prom<V +>{
  //   C2 = ld C;
  //   C3 = force? C2;
  //   checkMissing(C3);
  //   return C3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1594863638_4, CCP, RHO);
  // r21 = dyn addCond1(p3, p4)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_addCond1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

D6_:;
  // deopt 31 [r21]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L35_:;
  // st C = r21
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L11()
  // L11()
  goto L11_;

L37_:;
  // C4 = ld C
  Rsh_Fir_reg_C4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

L38_:;
  // r23 = dyn base4(<sym C>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L12_;

D7_:;
  // deopt 37 [C4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C4_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L39_:;
  // C5 = force? C4
  Rsh_Fir_reg_C5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C4_);
  // checkMissing(C5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_C5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r25 = dyn length(C5)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_C5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

D8_:;
  // deopt 40 [r25]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L12_;

L41_:;
  // r26 = clos inner3150295176
  Rsh_Fir_reg_r26_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3150295176_, RHO, CCP);
  // st F = r26
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // C6 = ld C
  Rsh_Fir_reg_C6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

D9_:;
  // deopt 44 [C6]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C6_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L42_:;
  // C7 = force? C6
  Rsh_Fir_reg_C7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C6_);
  // checkMissing(C7)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_C7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // l = ld F
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // body__ = ldf `body<-`
  Rsh_Fir_reg_body__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L43() else D10()
  // L43()
  goto L43_;

D10_:;
  // deopt 47 [C7, l, C7]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C7_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_C7_;
  Rsh_Fir_deopt(47, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // r27 = dyn body__(l, NULL, C7)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args32[2] = Rsh_Fir_reg_C7_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_body__, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L44() else D11()
  // L44()
  goto L44_;

D11_:;
  // deopt 49 [C7, r27]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C7_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(49, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L44_:;
  // st F = r27
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // namesOnly1 = ld namesOnly
  Rsh_Fir_reg_namesOnly1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L45() else D12()
  // L45()
  goto L45_;

D12_:;
  // deopt 51 [namesOnly1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_namesOnly1_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L45_:;
  // namesOnly2 = force? namesOnly1
  Rsh_Fir_reg_namesOnly2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_namesOnly1_);
  // checkMissing(namesOnly2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_namesOnly2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(namesOnly2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_namesOnly2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c4 then L46() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L46()
    goto L46_;
  } else {
  // L14()
    goto L14_;
  }

L46_:;
  // sym5 = ldf names
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf names in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard5 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L47_:;
  // ext1 = ld ext
  Rsh_Fir_reg_ext1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

L48_:;
  // r28 = dyn base5(<sym ext>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L15(r28)
  // L15(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L15_;

D13_:;
  // deopt 55 [ext1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_ext1_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L49_:;
  // ext2 = force? ext1
  Rsh_Fir_reg_ext2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ext1_);
  // checkMissing(ext2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_ext2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r30 = dyn names(ext2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_ext2_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L50() else D14()
  // L50()
  goto L50_;

D14_:;
  // deopt 58 [r30]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L15(r30)
  // L15(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L15_;

D15_:;
  // deopt 59 [ext3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_ext3_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L52_:;
  // ext4 = force? ext3
  Rsh_Fir_reg_ext4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ext3_);
  // checkMissing(ext4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_ext4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // goto L16(ext4)
  // L16(ext4)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_ext4_;
  goto L16_;

L53_:;
  // dr = tryDispatchBuiltin.1("[", r31)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc then L55() else L54(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L55()
    goto L55_;
  } else {
  // L54(dr)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_dr;
    goto L54_;
  }

L54_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L56() else D16()
  // L56()
  goto L56_;

L55_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L17(dx)
  // L17(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L17_;

D16_:;
  // deopt 62 [r33]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L56_:;
  // p5 = prom<V +>{
  //   ext5 = ld ext;
  //   ext6 = force? ext5;
  //   checkMissing(ext6);
  //   return ext6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1594863638_5, CCP, RHO);
  // p6 = prom<V +>{
  //   F = ld F;
  //   F1 = force? F;
  //   checkMissing(F1);
  //   return F1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1594863638_6, CCP, RHO);
  // r36 = dyn vapply[, , , `USE.NAMES`](p5, p6, NA_LGL, FALSE)
  SEXP Rsh_Fir_array_args45[4];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args45[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 4, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

D17_:;
  // deopt 68 [r33, r36]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L57_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r37 = dyn __(r33, r36)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L17(r37)
  // L17(r37)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r37_;
  goto L17_;

D18_:;
  // deopt 70 [namesOnly3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_namesOnly3_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L59_:;
  // namesOnly4 = force? namesOnly3
  Rsh_Fir_reg_namesOnly4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_namesOnly3_);
  // checkMissing(namesOnly4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_namesOnly4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c6 = `as.logical`(namesOnly4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_namesOnly4_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c6 then L60() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L60()
    goto L60_;
  } else {
  // L18()
    goto L18_;
  }

L60_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard6 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L61_:;
  // ext7 = ld ext
  Rsh_Fir_reg_ext7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L63() else D19()
  // L63()
  goto L63_;

L62_:;
  // r38 = dyn base6(<sym ext>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L19(r38)
  // L19(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L19_;

D19_:;
  // deopt 74 [ext7]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_ext7_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L63_:;
  // ext8 = force? ext7
  Rsh_Fir_reg_ext8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ext7_);
  // checkMissing(ext8)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_ext8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r40 = dyn names1(ext8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_ext8_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L64() else D20()
  // L64()
  goto L64_;

D20_:;
  // deopt 77 [r40]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L19(r40)
  // L19(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L19_;

D21_:;
  // deopt 78 [ext9]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_ext9_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L66_:;
  // ext10 = force? ext9
  Rsh_Fir_reg_ext10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ext9_);
  // checkMissing(ext10)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_ext10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ext10
  return Rsh_Fir_reg_ext10_;
}
SEXP Rsh_Fir_user_promise_inner1594863638_(SEXP CCP, SEXP RHO) {
  // directOnly1 = ld directOnly
  Rsh_Fir_reg_directOnly1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // directOnly2 = force? directOnly1
  Rsh_Fir_reg_directOnly2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_directOnly1_);
  // checkMissing(directOnly2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_directOnly2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return directOnly2
  return Rsh_Fir_reg_directOnly2_;
}
SEXP Rsh_Fir_user_promise_inner1594863638_1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf quote
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf quote in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_;

L1_:;
  // quote1 = ldf quote in base
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r11 = dyn quote1(<lang `==`(length(`@`(exti, by)), 0.0)>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base2(<lang `==`(length(`@`(exti, by)), 0.0)>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1594863638_2(SEXP CCP, SEXP RHO) {
  // C = ld C
  Rsh_Fir_reg_C = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // C1 = force? C
  Rsh_Fir_reg_C1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C);
  // checkMissing(C1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_C1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return C1
  return Rsh_Fir_reg_C1_;
}
SEXP Rsh_Fir_user_promise_inner1594863638_3(SEXP CCP, SEXP RHO) {
  // sym3 = ldf quote
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf quote in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r17
  return Rsh_Fir_reg_r17_;

L1_:;
  // quote2 = ldf quote in base
  Rsh_Fir_reg_quote2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r18 = dyn quote2(<lang `@`(exti, simple)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base3(<lang `@`(exti, simple)>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1594863638_4(SEXP CCP, SEXP RHO) {
  // C2 = ld C
  Rsh_Fir_reg_C2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // C3 = force? C2
  Rsh_Fir_reg_C3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C2_);
  // checkMissing(C3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_C3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return C3
  return Rsh_Fir_reg_C3_;
}
SEXP Rsh_Fir_user_promise_inner1594863638_5(SEXP CCP, SEXP RHO) {
  // ext5 = ld ext
  Rsh_Fir_reg_ext5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ext6 = force? ext5
  Rsh_Fir_reg_ext6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ext5_);
  // checkMissing(ext6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_ext6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return ext6
  return Rsh_Fir_reg_ext6_;
}
SEXP Rsh_Fir_user_promise_inner1594863638_6(SEXP CCP, SEXP RHO) {
  // F = ld F
  Rsh_Fir_reg_F = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // F1 = force? F
  Rsh_Fir_reg_F1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_F);
  // checkMissing(F1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_F1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return F1
  return Rsh_Fir_reg_F1_;
}
SEXP Rsh_Fir_user_function_inner4224539485_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4224539485 dynamic dispatch ([xpr, prev])

  return Rsh_Fir_user_version_inner4224539485_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4224539485_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4224539485 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4224539485/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_xpr;  // xpr
  SEXP Rsh_Fir_reg_prev;  // prev
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_prev1_;  // prev1
  SEXP Rsh_Fir_reg_prev2_;  // prev2
  SEXP Rsh_Fir_reg_length1;  // length
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_xpr1_;  // xpr1
  SEXP Rsh_Fir_reg_xpr2_;  // xpr2

  // Bind parameters
  Rsh_Fir_reg_xpr = PARAMS[0];
  Rsh_Fir_reg_prev = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st xpr = xpr
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_xpr, RHO);
  (void)(Rsh_Fir_reg_xpr);
  // st prev = prev
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_prev, RHO);
  (void)(Rsh_Fir_reg_prev);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c then L7() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L7()
    goto L7_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // xpr1 = ld xpr
  Rsh_Fir_reg_xpr1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_1;

L3_:;
  // prev1 = ld prev
  Rsh_Fir_reg_prev1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r = dyn base(<sym prev>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [prev1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_prev1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L5_:;
  // prev2 = force? prev1
  Rsh_Fir_reg_prev2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev1_);
  // checkMissing(prev2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_prev2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r2 = dyn length(prev2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_prev2_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L7_:;
  // sym1 = ldf substitute
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base1 = ldf substitute in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r5 = dyn substitute(<lang `&&`(P, N)>, <lang list(P=prev, N=xpr)>)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L2_;

L9_:;
  // r3 = dyn base1(<lang `&&`(P, N)>, <lang list(P=prev, N=xpr)>)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L2_;

D2_:;
  // deopt 9 [xpr1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_xpr1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L11_:;
  // xpr2 = force? xpr1
  Rsh_Fir_reg_xpr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xpr1_);
  // checkMissing(xpr2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_xpr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return xpr2
  return Rsh_Fir_reg_xpr2_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r2;  // r

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // __ = ldf `@` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r = dyn __(<lang getClassDef(`@`(x, superClass), package=packageSlot(x))>, <sym virtual>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names21, CCP, RHO);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_user_function_inner3150295176_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3150295176 dynamic dispatch ([exti])

  return Rsh_Fir_user_version_inner3150295176_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3150295176_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3150295176 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3150295176/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_exti;  // exti

  // Bind parameters
  Rsh_Fir_reg_exti = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st exti = exti
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_exti, RHO);
  (void)(Rsh_Fir_reg_exti);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 19);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
