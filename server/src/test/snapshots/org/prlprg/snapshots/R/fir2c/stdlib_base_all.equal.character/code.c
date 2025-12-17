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
SEXP Rsh_Fir_user_promise_inner2495938000_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2495938000_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // st `all.equal.character` = r
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
  SEXP Rsh_Fir_reg_check_attributes1_;
  SEXP Rsh_Fir_reg_check_attributes2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_check_attributes3_;
  SEXP Rsh_Fir_reg_check_attributes4_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_attr_all_equal;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_data_class;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_data_class1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_msg2_;
  SEXP Rsh_Fir_reg_msg3_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_target7_;
  SEXP Rsh_Fir_reg_target8_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_current7_;
  SEXP Rsh_Fir_reg_current8_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_lt;
  SEXP Rsh_Fir_reg_lt1_;
  SEXP Rsh_Fir_reg_lc;
  SEXP Rsh_Fir_reg_lc1_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_msg4_;
  SEXP Rsh_Fir_reg_msg5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_msg6_;
  SEXP Rsh_Fir_reg_msg7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_msg9_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_grep;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_msg12_;
  SEXP Rsh_Fir_reg_msg13_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_ll;
  SEXP Rsh_Fir_reg_ll1_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_target9_;
  SEXP Rsh_Fir_reg_target10_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_target12_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_ll2_;
  SEXP Rsh_Fir_reg_ll3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_current9_;
  SEXP Rsh_Fir_reg_current10_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_current12_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_ll4_;
  SEXP Rsh_Fir_reg_ll5_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_target13_;
  SEXP Rsh_Fir_reg_target14_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_current13_;
  SEXP Rsh_Fir_reg_current14_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_nas;
  SEXP Rsh_Fir_reg_nas1_;
  SEXP Rsh_Fir_reg_nasc;
  SEXP Rsh_Fir_reg_nasc1_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_msg14_;
  SEXP Rsh_Fir_reg_msg15_;
  SEXP Rsh_Fir_reg_paste2_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_msg16_;
  SEXP Rsh_Fir_reg_msg17_;
  SEXP Rsh_Fir_reg_nas4_;
  SEXP Rsh_Fir_reg_nas5_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_target15_;
  SEXP Rsh_Fir_reg_target16_;
  SEXP Rsh_Fir_reg_current15_;
  SEXP Rsh_Fir_reg_current16_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_ne;
  SEXP Rsh_Fir_reg_ne1_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_msg18_;
  SEXP Rsh_Fir_reg_msg19_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_ne2_;
  SEXP Rsh_Fir_reg_ne3_;
  SEXP Rsh_Fir_reg_sum2_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_msg20_;
  SEXP Rsh_Fir_reg_msg21_;
  SEXP Rsh_Fir_reg_paste3_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_ne4_;
  SEXP Rsh_Fir_reg_ne5_;
  SEXP Rsh_Fir_reg_sum3_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_msg22_;
  SEXP Rsh_Fir_reg_msg23_;
  SEXP Rsh_Fir_reg_paste4_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_msg24_;
  SEXP Rsh_Fir_reg_msg25_;

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
  // sym = ldf `is.logical`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.logical` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L1_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args2);
  // c1 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c1 then L40() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L40()
    goto L40_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // check_attributes3 = ld `check.attributes`
  Rsh_Fir_reg_check_attributes3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L44() else D3()
  // L44()
  goto L44_;

L4_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r10_ = Rsh_const(CCP, 7);
  goto L5_;

L5_:;
  // st msg = r10
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // data_class = ldf `data.class`
  Rsh_Fir_reg_data_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L49() else D6()
  // L49()
  goto L49_;

L6_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L7_:;
  // st msg = r17
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L60() else D14()
  // L60()
  goto L60_;

L9_:;
  // st lt = r29
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard3 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L10_:;
  // st lc = r32
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // lt = ld lt
  Rsh_Fir_reg_lt = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L71() else D19()
  // L71()
  goto L71_;

L11_:;
  // goto L20()
  // L20()
  goto L20_;

L12_:;
  // r37 = `!`(r36)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args6);
  // c7 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c7 then L77() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L77()
    goto L77_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L15()
  // L15()
  goto L15_;

L14_:;
  // st msg = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard5 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L16_:;
  // st msg = r43
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym7 = ldf seq_len
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf seq_len in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard7 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L17_:;
  // st ll = r53
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // target9 = ld target
  Rsh_Fir_reg_target9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L94() else D30()
  // L94()
  goto L94_;

L18_:;
  // st target = dx4
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // current9 = ld current
  Rsh_Fir_reg_current9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L99() else D32()
  // L99()
  goto L99_;

L19_:;
  // st current = dx6
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard8 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L21_:;
  // st nas = r58
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // sym9 = ldf `is.na`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base9 = ldf `is.na` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard9 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L22_:;
  // st nasc = r61
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // sym10 = ldf any
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base10 = ldf any in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard10 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L23_:;
  // c12 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c12 then L118() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L118()
    goto L118_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // nas4 = ld nas
  Rsh_Fir_reg_nas4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L128() else D46()
  // L128()
  goto L128_;

L25_:;
  // st msg = r68
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r68_, RHO);
  (void)(Rsh_Fir_reg_r68_);
  // msg16 = ld msg
  Rsh_Fir_reg_msg16_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L125() else D45()
  // L125()
  goto L125_;

L27_:;
  // r87 = `!`(r85)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args14);
  // c14 = `as.logical`(r87)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c14 then L135() else L28(c14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L135()
    goto L135_;
  } else {
  // L28(c14)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c14_;
    goto L28_;
  }

L28_:;
  // c24 = `as.logical`(c16)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c24 then L140() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L140()
    goto L140_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // c21 = `as.logical`(r89)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // c22 = `&&`(c19, c21)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args18);
  // goto L28(c22)
  // L28(c22)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c22_;
  goto L28_;

L30_:;
  // sym16 = ldf sum
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base16 = ldf sum in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard16 then L142() else L143()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L142()
    goto L142_;
  } else {
  // L143()
    goto L143_;
  }

L31_:;
  // r93 = `==`(r91, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args20);
  // c25 = `as.logical`(r93)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c25 then L146() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L146()
    goto L146_;
  } else {
  // L32()
    goto L32_;
  }

L32_:;
  // sym18 = ldf sum
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base18 = ldf sum in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard18 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L33_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r95
  return Rsh_Fir_reg_r95_;

L34_:;
  // r101 = `>`(r99, 1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args23);
  // c27 = `as.logical`(r101)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c27 then L158() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L158()
    goto L158_;
  } else {
  // L35()
    goto L35_;
  }

L35_:;
  // msg24 = ld msg
  Rsh_Fir_reg_msg24_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L166() else D64()
  // L166()
  goto L166_;

L36_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r103
  return Rsh_Fir_reg_r103_;

L37_:;
  // check_attributes1 = ld `check.attributes`
  Rsh_Fir_reg_check_attributes1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L39() else D0()
  // L39()
  goto L39_;

L38_:;
  // r = dyn base(<sym check.attributes>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [check_attributes1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_check_attributes1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L39_:;
  // check_attributes2 = force? check_attributes1
  Rsh_Fir_reg_check_attributes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_attributes1_);
  // checkMissing(check_attributes2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_check_attributes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c = `is.logical`(check_attributes2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_check_attributes2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args27);
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L1_;

L40_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L41() else D1()
  // L41()
  goto L41_;

D1_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p = prom<V +>{
  //   gettextf = ldf gettextf;
  //   r3 = dyn gettextf("'%s' must be logical", "check.attributes");
  //   return r3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_, 0, NULL, CCP, RHO);
  // r5 = dyn stop[, domain](p, NA_LGL)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L42() else D2()
  // L42()
  goto L42_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L3()
  // L3()
  goto L3_;

D3_:;
  // deopt 13 [check_attributes3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_check_attributes3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L44_:;
  // check_attributes4 = force? check_attributes3
  Rsh_Fir_reg_check_attributes4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_attributes3_);
  // checkMissing(check_attributes4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_check_attributes4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(check_attributes4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_check_attributes4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c2 then L45() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L45()
    goto L45_;
  } else {
  // L4()
    goto L4_;
  }

L45_:;
  // attr_all_equal = ldf `attr.all.equal`
  Rsh_Fir_reg_attr_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L46() else D4()
  // L46()
  goto L46_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p1 = prom<V +>{
  //   target1 = ld target;
  //   target2 = force? target1;
  //   checkMissing(target2);
  //   return target2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   current1 = ld current;
  //   current2 = force? current1;
  //   checkMissing(current2);
  //   return current2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_2, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r9 = dyn attr_all_equal[, , `...`](p1, p2, ddd1)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr_all_equal, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L47() else D5()
  // L47()
  goto L47_;

D5_:;
  // deopt 20 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p3 = prom<V +>{
  //   target3 = ld target;
  //   target4 = force? target3;
  //   checkMissing(target4);
  //   return target4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_3, 0, NULL, CCP, RHO);
  // r12 = dyn data_class(p3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_class, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L50() else D7()
  // L50()
  goto L50_;

D7_:;
  // deopt 27 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L50_:;
  // data_class1 = ldf `data.class`
  Rsh_Fir_reg_data_class1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L51() else D8()
  // L51()
  goto L51_;

D8_:;
  // deopt 28 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L51_:;
  // p4 = prom<V +>{
  //   current3 = ld current;
  //   current4 = force? current3;
  //   checkMissing(current4);
  //   return current4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_4, 0, NULL, CCP, RHO);
  // r14 = dyn data_class1(p4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_class1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L52() else D9()
  // L52()
  goto L52_;

D9_:;
  // deopt 30 [r12, r14]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L52_:;
  // r15 = `!=`(r12, r14)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args39);
  // c3 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c3 then L53() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L53()
    goto L53_;
  } else {
  // L6()
    goto L6_;
  }

L53_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard1 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L56() else D10()
  // L56()
  goto L56_;

L55_:;
  // r16 = dyn base1(<sym msg>, <lang paste0("target is ", data.class(target), ", current is ", data.class(current))>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L7_;

D10_:;
  // deopt 34 [msg]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_msg;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L56_:;
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L57() else D11()
  // L57()
  goto L57_;

D11_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // p6 = prom<V +>{
  //   data_class2 = ldf `data.class`;
  //   p5 = prom<V +>{
  //     target5 = ld target;
  //     target6 = force? target5;
  //     checkMissing(target6);
  //     return target6;
  //   };
  //   r19 = dyn data_class2(p5);
  //   return r19;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_5, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   data_class3 = ldf `data.class`;
  //   p7 = prom<V +>{
  //     current5 = ld current;
  //     current6 = force? current5;
  //     checkMissing(current6);
  //     return current6;
  //   };
  //   r22 = dyn data_class3(p7);
  //   return r22;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_7, 0, NULL, CCP, RHO);
  // r24 = dyn paste0("target is ", p6, ", current is ", p8)
  SEXP Rsh_Fir_array_args48[4];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args48[3] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 4, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L58() else D12()
  // L58()
  goto L58_;

D12_:;
  // deopt 42 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L58_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r25 = dyn c4(msg1, r24)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_msg1_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L59() else D13()
  // L59()
  goto L59_;

D13_:;
  // deopt 44 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L7(r25)
  // L7(r25)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r25_;
  goto L7_;

D14_:;
  // deopt 46 [msg2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L60_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return msg3
  return Rsh_Fir_reg_msg3_;

L63_:;
  // target7 = ld target
  Rsh_Fir_reg_target7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L65() else D15()
  // L65()
  goto L65_;

L64_:;
  // r28 = dyn base2(<sym target>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(r28)
  // L9(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L9_;

D15_:;
  // deopt 53 [target7]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_target7_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L65_:;
  // target8 = force? target7
  Rsh_Fir_reg_target8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target7_);
  // checkMissing(target8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_target8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r30 = dyn length(target8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_target8_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L66() else D16()
  // L66()
  goto L66_;

D16_:;
  // deopt 56 [r30]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L9(r30)
  // L9(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L9_;

L67_:;
  // current7 = ld current
  Rsh_Fir_reg_current7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L69() else D17()
  // L69()
  goto L69_;

L68_:;
  // r31 = dyn base3(<sym current>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(r31)
  // L10(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L10_;

D17_:;
  // deopt 60 [current7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_current7_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L69_:;
  // current8 = force? current7
  Rsh_Fir_reg_current8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current7_);
  // checkMissing(current8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_current8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r33 = dyn length1(current8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_current8_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L70() else D18()
  // L70()
  goto L70_;

D18_:;
  // deopt 63 [r33]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L10(r33)
  // L10(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L10_;

D19_:;
  // deopt 65 [lt]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_lt;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L71_:;
  // lt1 = force? lt
  Rsh_Fir_reg_lt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lt);
  // checkMissing(lt1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_lt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // lc = ld lc
  Rsh_Fir_reg_lc = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L72() else D20()
  // L72()
  goto L72_;

D20_:;
  // deopt 66 [lt1, lc]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_lt1_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_lc;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L72_:;
  // lc1 = force? lc
  Rsh_Fir_reg_lc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lc);
  // checkMissing(lc1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_lc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r34 = `!=`(lt1, lc1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_lt1_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_lc1_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args59);
  // c5 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args60);
  // if c5 then L73() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L73()
    goto L73_;
  } else {
  // L11()
    goto L11_;
  }

L73_:;
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard4 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L74_:;
  // msg4 = ld msg
  Rsh_Fir_reg_msg4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L76() else D21()
  // L76()
  goto L76_;

L75_:;
  // r35 = dyn base4(<sym msg>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L12_;

D21_:;
  // deopt 70 [msg4]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_msg4_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L76_:;
  // msg5 = force? msg4
  Rsh_Fir_reg_msg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg4_);
  // checkMissing(msg5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_msg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c6 = `==`(msg5, NULL)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_msg5_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args64);
  // goto L12(c6)
  // L12(c6)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_c6_;
  goto L12_;

L77_:;
  // msg6 = ld msg
  Rsh_Fir_reg_msg6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L78() else D22()
  // L78()
  goto L78_;

D22_:;
  // deopt 74 [msg6]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_msg6_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L78_:;
  // msg7 = force? msg6
  Rsh_Fir_reg_msg7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg6_);
  // checkMissing(msg7)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_msg7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(msg7)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_msg7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args66);
  // if c8 then L79() else L80(msg7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L79()
    goto L79_;
  } else {
  // L80(msg7)
    Rsh_Fir_reg_msg9_ = Rsh_Fir_reg_msg7_;
    goto L80_;
  }

L79_:;
  // dr = tryDispatchBuiltin.1("[", msg7)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_msg7_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc then L81() else L80(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L81()
    goto L81_;
  } else {
  // L80(dr)
    Rsh_Fir_reg_msg9_ = Rsh_Fir_reg_dr;
    goto L80_;
  }

L80_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L82() else D23()
  // L82()
  goto L82_;

L81_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L14(dx)
  // L14(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L14_;

D23_:;
  // deopt 77 [msg9]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_msg9_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L82_:;
  // p9 = prom<V +>{
  //   msg10 = ld msg;
  //   msg11 = force? msg10;
  //   checkMissing(msg11);
  //   return msg11;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_9, 0, NULL, CCP, RHO);
  // r39 = dyn grep("\\bLengths\\b", p9)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L83() else D24()
  // L83()
  goto L83_;

D24_:;
  // deopt 80 [msg9, r39]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_msg9_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(80, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L83_:;
  // r40 = `-`(<missing>, r39)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args72);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r41 = dyn __(msg9, r40)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_msg9_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r41)
  // L14(r41)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r41_;
  goto L14_;

L85_:;
  // msg12 = ld msg
  Rsh_Fir_reg_msg12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L87() else D25()
  // L87()
  goto L87_;

L86_:;
  // r42 = dyn base5(<sym msg>, <lang paste0("Lengths (", lt, ", ", lc, ") differ (string compare on first ", `<-`(ll, min(lt, lc)), ")")>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L16(r42)
  // L16(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L16_;

D25_:;
  // deopt 88 [msg12]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_msg12_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L87_:;
  // msg13 = force? msg12
  Rsh_Fir_reg_msg13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg12_);
  // checkMissing(msg13)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_msg13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L88() else D26()
  // L88()
  goto L88_;

D26_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L88_:;
  // p10 = prom<V +>{
  //   lt2 = ld lt;
  //   lt3 = force? lt2;
  //   checkMissing(lt3);
  //   return lt3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   lc2 = ld lc;
  //   lc3 = force? lc2;
  //   checkMissing(lc3);
  //   return lc3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   sym6 = ldf min;
  //   base6 = ldf min in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r47):
  //   st ll = r47;
  //   setInvisible.0();
  //   return r47;
  // L1():
  //   lt4 = ld lt;
  //   lt5 = force? lt4;
  //   checkMissing(lt5);
  //   lc4 = ld lc;
  //   lc5 = force? lc4;
  //   checkMissing(lc5);
  //   min = ldf min in base;
  //   r48 = dyn min(lt5, lc5);
  //   goto L0(r48);
  // L2():
  //   r46 = dyn base6(<sym lt>, <sym lc>);
  //   goto L0(r46);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_12, 0, NULL, CCP, RHO);
  // r50 = dyn paste1("Lengths (", p10, ", ", p11, ") differ (string compare on first ", p12, ")")
  SEXP Rsh_Fir_array_args83[7];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args83[3] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args83[4] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args83[5] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args83[6] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names21[7];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_array_arg_names21[5] = R_MissingArg;
  Rsh_Fir_array_arg_names21[6] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 7, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L89() else D27()
  // L89()
  goto L89_;

D27_:;
  // deopt 99 [r50]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L89_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r51 = dyn c9(msg13, r50)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_msg13_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L90() else D28()
  // L90()
  goto L90_;

D28_:;
  // deopt 101 [r51]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L16(r51)
  // L16(r51)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r51_;
  goto L16_;

L91_:;
  // ll = ld ll
  Rsh_Fir_reg_ll = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L93() else D29()
  // L93()
  goto L93_;

L92_:;
  // r52 = dyn base7(<sym ll>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L17(r52)
  // L17(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L17_;

D29_:;
  // deopt 104 [ll]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_ll;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L93_:;
  // ll1 = force? ll
  Rsh_Fir_reg_ll1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll);
  // checkMissing(ll1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_ll1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // r54 = seq_len(ll1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_ll1_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args87);
  // goto L17(r54)
  // L17(r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L17_;

D30_:;
  // deopt 108 [target9]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_target9_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L94_:;
  // target10 = force? target9
  Rsh_Fir_reg_target10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target9_);
  // checkMissing(target10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_target10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(target10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_target10_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args89);
  // if c10 then L95() else L96(target10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L95()
    goto L95_;
  } else {
  // L96(target10)
    Rsh_Fir_reg_target12_ = Rsh_Fir_reg_target10_;
    goto L96_;
  }

L95_:;
  // dr2 = tryDispatchBuiltin.1("[", target10)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_target10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc1 then L97() else L96(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L97()
    goto L97_;
  } else {
  // L96(dr2)
    Rsh_Fir_reg_target12_ = Rsh_Fir_reg_dr2_;
    goto L96_;
  }

L96_:;
  // ll2 = ld ll
  Rsh_Fir_reg_ll2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L98() else D31()
  // L98()
  goto L98_;

L97_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L18(dx3)
  // L18(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L18_;

D31_:;
  // deopt 110 [target12, ll2]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_target12_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_ll2_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L98_:;
  // ll3 = force? ll2
  Rsh_Fir_reg_ll3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r55 = dyn __1(target12, ll3)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_target12_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_ll3_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L18(r55)
  // L18(r55)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r55_;
  goto L18_;

D32_:;
  // deopt 114 [current9]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_current9_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L99_:;
  // current10 = force? current9
  Rsh_Fir_reg_current10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current9_);
  // checkMissing(current10)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_current10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(current10)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_current10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args95);
  // if c11 then L100() else L101(current10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L100()
    goto L100_;
  } else {
  // L101(current10)
    Rsh_Fir_reg_current12_ = Rsh_Fir_reg_current10_;
    goto L101_;
  }

L100_:;
  // dr4 = tryDispatchBuiltin.1("[", current10)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_current10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc2 then L102() else L101(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L102()
    goto L102_;
  } else {
  // L101(dr4)
    Rsh_Fir_reg_current12_ = Rsh_Fir_reg_dr4_;
    goto L101_;
  }

L101_:;
  // ll4 = ld ll
  Rsh_Fir_reg_ll4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L103() else D33()
  // L103()
  goto L103_;

L102_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L19(dx5)
  // L19(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L19_;

D33_:;
  // deopt 116 [current12, ll4]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_current12_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_ll4_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L103_:;
  // ll5 = force? ll4
  Rsh_Fir_reg_ll5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll4_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r56 = dyn __2(current12, ll5)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_current12_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_ll5_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L19(r56)
  // L19(r56)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r56_;
  goto L19_;

L105_:;
  // target13 = ld target
  Rsh_Fir_reg_target13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L107() else D34()
  // L107()
  goto L107_;

L106_:;
  // r57 = dyn base8(<sym target>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L21(r57)
  // L21(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L21_;

D34_:;
  // deopt 124 [target13]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_target13_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L107_:;
  // target14 = force? target13
  Rsh_Fir_reg_target14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target13_);
  // checkMissing(target14)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_target14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r59 = dyn is_na(target14)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_target14_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L108() else D35()
  // L108()
  goto L108_;

D35_:;
  // deopt 127 [r59]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L21(r59)
  // L21(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L21_;

L109_:;
  // current13 = ld current
  Rsh_Fir_reg_current13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L111() else D36()
  // L111()
  goto L111_;

L110_:;
  // r60 = dyn base9(<sym current>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L22(r60)
  // L22(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L22_;

D36_:;
  // deopt 131 [current13]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_current13_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L111_:;
  // current14 = force? current13
  Rsh_Fir_reg_current14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current13_);
  // checkMissing(current14)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_current14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r62 = dyn is_na1(current14)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_current14_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L112() else D37()
  // L112()
  goto L112_;

D37_:;
  // deopt 134 [r62]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L112_:;
  // goto L22(r62)
  // L22(r62)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L22_;

L113_:;
  // nas = ld nas
  Rsh_Fir_reg_nas = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L115() else D38()
  // L115()
  goto L115_;

L114_:;
  // r63 = dyn base10(<lang `!=`(nas, nasc)>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L23(r63)
  // L23(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L23_;

D38_:;
  // deopt 138 [nas]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_nas;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L115_:;
  // nas1 = force? nas
  Rsh_Fir_reg_nas1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas);
  // checkMissing(nas1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_nas1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // nasc = ld nasc
  Rsh_Fir_reg_nasc = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L116() else D39()
  // L116()
  goto L116_;

D39_:;
  // deopt 139 [nas1, nasc]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_nas1_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_nasc;
  Rsh_Fir_deopt(139, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L116_:;
  // nasc1 = force? nasc
  Rsh_Fir_reg_nasc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nasc);
  // checkMissing(nasc1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_nasc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // r65 = `!=`(nas1, nasc1)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_nas1_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_nasc1_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args109);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r66 = dyn any(r65)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L117() else D40()
  // L117()
  goto L117_;

D40_:;
  // deopt 143 [r66]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L23(r66)
  // L23(r66)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r66_;
  goto L23_;

L118_:;
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard11 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

L119_:;
  // msg14 = ld msg
  Rsh_Fir_reg_msg14_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L121() else D41()
  // L121()
  goto L121_;

L120_:;
  // r67 = dyn base11(<sym msg>, <lang paste("'is.NA' value mismatch:", sum(nasc), "in current", sum(nas), "in target")>)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L25(r67)
  // L25(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L25_;

D41_:;
  // deopt 146 [msg14]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_msg14_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L121_:;
  // msg15 = force? msg14
  Rsh_Fir_reg_msg15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg14_);
  // checkMissing(msg15)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_msg15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // paste2 = ldf paste
  Rsh_Fir_reg_paste2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L122() else D42()
  // L122()
  goto L122_;

D42_:;
  // deopt 149 []
  Rsh_Fir_deopt(149, 0, NULL, CCP, RHO);
  return R_NilValue;

L122_:;
  // p13 = prom<V +>{
  //   sym12 = ldf sum;
  //   base12 = ldf sum in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L1() else L2();
  // L0(r70):
  //   return r70;
  // L1():
  //   nasc2 = ld nasc;
  //   nasc3 = force? nasc2;
  //   checkMissing(nasc3);
  //   sum = ldf sum in base;
  //   r71 = dyn sum(nasc3);
  //   goto L0(r71);
  // L2():
  //   r69 = dyn base12(<sym nasc>);
  //   goto L0(r69);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   sym13 = ldf sum;
  //   base13 = ldf sum in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r74):
  //   return r74;
  // L1():
  //   nas2 = ld nas;
  //   nas3 = force? nas2;
  //   checkMissing(nas3);
  //   sum1 = ldf sum in base;
  //   r75 = dyn sum1(nas3);
  //   goto L0(r75);
  // L2():
  //   r73 = dyn base13(<sym nas>);
  //   goto L0(r73);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_14, 0, NULL, CCP, RHO);
  // r77 = dyn paste2("'is.NA' value mismatch:", p13, "in current", p14, "in target")
  SEXP Rsh_Fir_array_args122[5];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args122[2] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args122[3] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args122[4] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names37[5];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_array_arg_names37[3] = R_MissingArg;
  Rsh_Fir_array_arg_names37[4] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste2_, 5, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L123() else D43()
  // L123()
  goto L123_;

D43_:;
  // deopt 155 [r77]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L123_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r78 = dyn c13(msg15, r77)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_msg15_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L124() else D44()
  // L124()
  goto L124_;

D44_:;
  // deopt 157 [r78]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L25(r78)
  // L25(r78)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r78_;
  goto L25_;

D45_:;
  // deopt 159 [msg16]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_msg16_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L125_:;
  // msg17 = force? msg16
  Rsh_Fir_reg_msg17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg16_);
  // checkMissing(msg17)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_msg17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return msg17
  return Rsh_Fir_reg_msg17_;

D46_:;
  // deopt 164 [nas4]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_nas4_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L128_:;
  // nas5 = force? nas4
  Rsh_Fir_reg_nas5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas4_);
  // checkMissing(nas5)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_nas5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // r81 = `!`(nas5)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_nas5_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args126);
  // target15 = ld target
  Rsh_Fir_reg_target15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L129() else D47()
  // L129()
  goto L129_;

D47_:;
  // deopt 166 [r81, target15]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_target15_;
  Rsh_Fir_deopt(166, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L129_:;
  // target16 = force? target15
  Rsh_Fir_reg_target16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target15_);
  // checkMissing(target16)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_target16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // current15 = ld current
  Rsh_Fir_reg_current15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L130() else D48()
  // L130()
  goto L130_;

D48_:;
  // deopt 167 [r81, target16, current15]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_target16_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_current15_;
  Rsh_Fir_deopt(167, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L130_:;
  // current16 = force? current15
  Rsh_Fir_reg_current16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current15_);
  // checkMissing(current16)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_current16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // r82 = `!=`(target16, current16)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_target16_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_current16_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args129);
  // r83 = `&&`(r81, r82)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args130);
  // st ne = r83
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r83_, RHO);
  (void)(Rsh_Fir_reg_r83_);
  // sym14 = ldf any
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base14 = ldf any in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args131);
  // if guard14 then L131() else L132()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L131()
    goto L131_;
  } else {
  // L132()
    goto L132_;
  }

L131_:;
  // ne = ld ne
  Rsh_Fir_reg_ne = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L133() else D49()
  // L133()
  goto L133_;

L132_:;
  // r84 = dyn base14(<sym ne>)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L27(r84)
  // L27(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L27_;

D49_:;
  // deopt 174 [ne]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_ne;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L133_:;
  // ne1 = force? ne
  Rsh_Fir_reg_ne1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ne);
  // checkMissing(ne1)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_ne1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r86 = dyn any1(ne1)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_ne1_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L134() else D50()
  // L134()
  goto L134_;

D50_:;
  // deopt 177 [r86]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(177, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L134_:;
  // goto L27(r86)
  // L27(r86)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r86_;
  goto L27_;

L135_:;
  // sym15 = ldf `is.null`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base15 = ldf `is.null` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args135);
  // if guard15 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L136_:;
  // msg18 = ld msg
  Rsh_Fir_reg_msg18_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L138() else D51()
  // L138()
  goto L138_;

L137_:;
  // r88 = dyn base15(<sym msg>)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L29(c14, r88)
  // L29(c14, r88)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L29_;

D51_:;
  // deopt 180 [c14, msg18]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_msg18_;
  Rsh_Fir_deopt(180, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L138_:;
  // msg19 = force? msg18
  Rsh_Fir_reg_msg19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg18_);
  // checkMissing(msg19)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_msg19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // c20 = `==`(msg19, NULL)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_msg19_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args138);
  // goto L29(c14, c20)
  // L29(c14, c20)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_c20_;
  goto L29_;

L140_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 4);

L142_:;
  // ne2 = ld ne
  Rsh_Fir_reg_ne2_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L144() else D52()
  // L144()
  goto L144_;

L143_:;
  // r90 = dyn base16(<sym ne>)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L31(r90)
  // L31(r90)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r90_;
  goto L31_;

D52_:;
  // deopt 188 [ne2]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_ne2_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L144_:;
  // ne3 = force? ne2
  Rsh_Fir_reg_ne3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ne2_);
  // checkMissing(ne3)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_ne3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r92 = dyn sum2(ne3)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_ne3_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L145() else D53()
  // L145()
  goto L145_;

D53_:;
  // deopt 191 [r92]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L145_:;
  // goto L31(r92)
  // L31(r92)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r92_;
  goto L31_;

L146_:;
  // sym17 = ldf c
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base17 = ldf c in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args142);
  // if guard17 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L147_:;
  // msg20 = ld msg
  Rsh_Fir_reg_msg20_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L149() else D54()
  // L149()
  goto L149_;

L148_:;
  // r94 = dyn base17(<sym msg>, <lang paste("1 string mismatch")>)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L33(r94)
  // L33(r94)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L33_;

D54_:;
  // deopt 196 [msg20]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_msg20_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L149_:;
  // msg21 = force? msg20
  Rsh_Fir_reg_msg21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg20_);
  // checkMissing(msg21)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_msg21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // paste3 = ldf paste
  Rsh_Fir_reg_paste3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L150() else D55()
  // L150()
  goto L150_;

D55_:;
  // deopt 199 []
  Rsh_Fir_deopt(199, 0, NULL, CCP, RHO);
  return R_NilValue;

L150_:;
  // r96 = dyn paste3("1 string mismatch")
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste3_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L151() else D56()
  // L151()
  goto L151_;

D56_:;
  // deopt 201 [r96]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L151_:;
  // c26 = ldf c in base
  Rsh_Fir_reg_c26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r97 = dyn c26(msg21, r96)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_msg21_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c26_, 2, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L152() else D57()
  // L152()
  goto L152_;

D57_:;
  // deopt 203 [r97]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L152_:;
  // goto L33(r97)
  // L33(r97)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r97_;
  goto L33_;

L154_:;
  // ne4 = ld ne
  Rsh_Fir_reg_ne4_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L156() else D58()
  // L156()
  goto L156_;

L155_:;
  // r98 = dyn base18(<sym ne>)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L34(r98)
  // L34(r98)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L34_;

D58_:;
  // deopt 206 [ne4]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_ne4_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L156_:;
  // ne5 = force? ne4
  Rsh_Fir_reg_ne5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ne4_);
  // checkMissing(ne5)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_ne5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // sum3 = ldf sum in base
  Rsh_Fir_reg_sum3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r100 = dyn sum3(ne5)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_ne5_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum3_, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L157() else D59()
  // L157()
  goto L157_;

D59_:;
  // deopt 209 [r100]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(209, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L157_:;
  // goto L34(r100)
  // L34(r100)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r100_;
  goto L34_;

L158_:;
  // sym19 = ldf c
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base19 = ldf c in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args150);
  // if guard19 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L159_:;
  // msg22 = ld msg
  Rsh_Fir_reg_msg22_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L161() else D60()
  // L161()
  goto L161_;

L160_:;
  // r102 = dyn base19(<sym msg>, <lang paste(sum(ne), "string mismatches")>)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args151[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 2, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L36(r102)
  // L36(r102)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L36_;

D60_:;
  // deopt 214 [msg22]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_msg22_;
  Rsh_Fir_deopt(214, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L161_:;
  // msg23 = force? msg22
  Rsh_Fir_reg_msg23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg22_);
  // checkMissing(msg23)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_msg23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // paste4 = ldf paste
  Rsh_Fir_reg_paste4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L162() else D61()
  // L162()
  goto L162_;

D61_:;
  // deopt 217 []
  Rsh_Fir_deopt(217, 0, NULL, CCP, RHO);
  return R_NilValue;

L162_:;
  // p15 = prom<V +>{
  //   sym20 = ldf sum;
  //   base20 = ldf sum in base;
  //   guard20 = `==`.4(sym20, base20);
  //   if guard20 then L1() else L2();
  // L0(r105):
  //   return r105;
  // L1():
  //   ne6 = ld ne;
  //   ne7 = force? ne6;
  //   checkMissing(ne7);
  //   sum4 = ldf sum in base;
  //   r106 = dyn sum4(ne7);
  //   goto L0(r106);
  // L2():
  //   r104 = dyn base20(<sym ne>);
  //   goto L0(r104);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_15, 0, NULL, CCP, RHO);
  // r108 = dyn paste4(p15, "string mismatches")
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste4_, 2, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L163() else D62()
  // L163()
  goto L163_;

D62_:;
  // deopt 220 [r108]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L163_:;
  // c28 = ldf c in base
  Rsh_Fir_reg_c28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r109 = dyn c28(msg23, r108)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_msg23_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c28_, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L164() else D63()
  // L164()
  goto L164_;

D63_:;
  // deopt 222 [r109]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(222, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L164_:;
  // goto L36(r109)
  // L36(r109)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r109_;
  goto L36_;

D64_:;
  // deopt 223 [msg24]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_msg24_;
  Rsh_Fir_deopt(223, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L166_:;
  // msg25 = force? msg24
  Rsh_Fir_reg_msg25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg24_);
  // checkMissing(msg25)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_msg25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return msg25
  return Rsh_Fir_reg_msg25_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // r3 = dyn gettextf("'%s' must be logical", "check.attributes")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target1_;
  SEXP Rsh_Fir_reg_target2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // target1 = ld target
  Rsh_Fir_reg_target1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target2 = force? target1
  Rsh_Fir_reg_target2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target1_);
  // checkMissing(target2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_target2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return target2
  return Rsh_Fir_reg_target2_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current1_;
  SEXP Rsh_Fir_reg_current2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // current1 = ld current
  Rsh_Fir_reg_current1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current2 = force? current1
  Rsh_Fir_reg_current2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current1_);
  // checkMissing(current2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_current2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return current2
  return Rsh_Fir_reg_current2_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target3_;
  SEXP Rsh_Fir_reg_target4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // target3 = ld target
  Rsh_Fir_reg_target3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target4 = force? target3
  Rsh_Fir_reg_target4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target3_);
  // checkMissing(target4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_target4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return target4
  return Rsh_Fir_reg_target4_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current3_;
  SEXP Rsh_Fir_reg_current4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // current3 = ld current
  Rsh_Fir_reg_current3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current4 = force? current3
  Rsh_Fir_reg_current4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current3_);
  // checkMissing(current4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_current4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return current4
  return Rsh_Fir_reg_current4_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data_class2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // data_class2 = ldf `data.class`
  Rsh_Fir_reg_data_class2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // p5 = prom<V +>{
  //   target5 = ld target;
  //   target6 = force? target5;
  //   checkMissing(target6);
  //   return target6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_6, 0, NULL, CCP, RHO);
  // r19 = dyn data_class2(p5)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_class2_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target5_;
  SEXP Rsh_Fir_reg_target6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // target5 = ld target
  Rsh_Fir_reg_target5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target6 = force? target5
  Rsh_Fir_reg_target6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target5_);
  // checkMissing(target6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_target6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return target6
  return Rsh_Fir_reg_target6_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data_class3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // data_class3 = ldf `data.class`
  Rsh_Fir_reg_data_class3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // p7 = prom<V +>{
  //   current5 = ld current;
  //   current6 = force? current5;
  //   checkMissing(current6);
  //   return current6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2495938000_8, 0, NULL, CCP, RHO);
  // r22 = dyn data_class3(p7)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_class3_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current5_;
  SEXP Rsh_Fir_reg_current6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // current5 = ld current
  Rsh_Fir_reg_current5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current6 = force? current5
  Rsh_Fir_reg_current6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current5_);
  // checkMissing(current6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_current6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return current6
  return Rsh_Fir_reg_current6_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_msg10_;
  SEXP Rsh_Fir_reg_msg11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // msg10 = ld msg
  Rsh_Fir_reg_msg10_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // msg11 = force? msg10
  Rsh_Fir_reg_msg11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg10_);
  // checkMissing(msg11)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_msg11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return msg11
  return Rsh_Fir_reg_msg11_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lt2_;
  SEXP Rsh_Fir_reg_lt3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // lt2 = ld lt
  Rsh_Fir_reg_lt2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // lt3 = force? lt2
  Rsh_Fir_reg_lt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lt2_);
  // checkMissing(lt3)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_lt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return lt3
  return Rsh_Fir_reg_lt3_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lc2_;
  SEXP Rsh_Fir_reg_lc3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // lc2 = ld lc
  Rsh_Fir_reg_lc2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // lc3 = force? lc2
  Rsh_Fir_reg_lc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lc2_);
  // checkMissing(lc3)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_lc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return lc3
  return Rsh_Fir_reg_lc3_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_lt4_;
  SEXP Rsh_Fir_reg_lt5_;
  SEXP Rsh_Fir_reg_lc4_;
  SEXP Rsh_Fir_reg_lc5_;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf min
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base6 = ldf min in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // st ll = r47
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // return r47
  return Rsh_Fir_reg_r47_;

L1_:;
  // lt4 = ld lt
  Rsh_Fir_reg_lt4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // lt5 = force? lt4
  Rsh_Fir_reg_lt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lt4_);
  // checkMissing(lt5)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_lt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // lc4 = ld lc
  Rsh_Fir_reg_lc4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // lc5 = force? lc4
  Rsh_Fir_reg_lc5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lc4_);
  // checkMissing(lc5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_lc5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r48 = dyn min(lt5, lc5)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_lt5_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_lc5_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L0_;

L2_:;
  // r46 = dyn base6(<sym lt>, <sym lc>)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_nasc2_;
  SEXP Rsh_Fir_reg_nasc3_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r71_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // sym12 = ldf sum
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base12 = ldf sum in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args114);
  // if guard12 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r70
  return Rsh_Fir_reg_r70_;

L1_:;
  // nasc2 = ld nasc
  Rsh_Fir_reg_nasc2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // nasc3 = force? nasc2
  Rsh_Fir_reg_nasc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nasc2_);
  // checkMissing(nasc3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_nasc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r71 = dyn sum(nasc3)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_nasc3_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r71)
  // L0(r71)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L0_;

L2_:;
  // r69 = dyn base12(<sym nasc>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r69)
  // L0(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_nas2_;
  SEXP Rsh_Fir_reg_nas3_;
  SEXP Rsh_Fir_reg_sum1_;
  SEXP Rsh_Fir_reg_r75_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // sym13 = ldf sum
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base13 = ldf sum in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r74
  return Rsh_Fir_reg_r74_;

L1_:;
  // nas2 = ld nas
  Rsh_Fir_reg_nas2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // nas3 = force? nas2
  Rsh_Fir_reg_nas3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas2_);
  // checkMissing(nas3)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_nas3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r75 = dyn sum1(nas3)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_nas3_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r75)
  // L0(r75)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r75_;
  goto L0_;

L2_:;
  // r73 = dyn base13(<sym nas>)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r73)
  // L0(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2495938000_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_ne6_;
  SEXP Rsh_Fir_reg_ne7_;
  SEXP Rsh_Fir_reg_sum4_;
  SEXP Rsh_Fir_reg_r106_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2495938000/0: expected 0, got %d", NCAPTURES);

  // sym20 = ldf sum
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base20 = ldf sum in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args153);
  // if guard20 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r105
  return Rsh_Fir_reg_r105_;

L1_:;
  // ne6 = ld ne
  Rsh_Fir_reg_ne6_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // ne7 = force? ne6
  Rsh_Fir_reg_ne7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ne6_);
  // checkMissing(ne7)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_ne7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // sum4 = ldf sum in base
  Rsh_Fir_reg_sum4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r106 = dyn sum4(ne7)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_ne7_;
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum4_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r106)
  // L0(r106)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r106_;
  goto L0_;

L2_:;
  // r104 = dyn base20(<sym ne>)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L0(r104)
  // L0(r104)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r104_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
