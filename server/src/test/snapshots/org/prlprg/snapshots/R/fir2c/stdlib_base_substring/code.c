#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner658033673_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner658033673_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner658033673
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner658033673_, RHO, CCP);
  // st substring = r
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
SEXP Rsh_Fir_user_function_inner658033673_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner658033673 dynamic dispatch ([text, first, last])

  return Rsh_Fir_user_version_inner658033673_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner658033673_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner658033673 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner658033673/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_text;  // text
  SEXP Rsh_Fir_reg_first;  // first
  SEXP Rsh_Fir_reg_last;  // last
  SEXP Rsh_Fir_reg_last_isMissing;  // last_isMissing
  SEXP Rsh_Fir_reg_last_orDefault;  // last_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_text1_;  // text1
  SEXP Rsh_Fir_reg_text2_;  // text2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_text3_;  // text3
  SEXP Rsh_Fir_reg_text4_;  // text4
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_text5_;  // text5
  SEXP Rsh_Fir_reg_text6_;  // text6
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_first1_;  // first1
  SEXP Rsh_Fir_reg_first2_;  // first2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_last1_;  // last1
  SEXP Rsh_Fir_reg_last2_;  // last2
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_lt;  // lt
  SEXP Rsh_Fir_reg_lt1_;  // lt1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_lt2_;  // lt2
  SEXP Rsh_Fir_reg_lt3_;  // lt3
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_text7_;  // text7
  SEXP Rsh_Fir_reg_text8_;  // text8
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_text9_;  // text9
  SEXP Rsh_Fir_reg_text10_;  // text10
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_first3_;  // first3
  SEXP Rsh_Fir_reg_first4_;  // first4
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_last3_;  // last3
  SEXP Rsh_Fir_reg_last4_;  // last4
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_substr;  // substr
  SEXP Rsh_Fir_reg_r32_;  // r32

  // Bind parameters
  Rsh_Fir_reg_text = PARAMS[0];
  Rsh_Fir_reg_first = PARAMS[1];
  Rsh_Fir_reg_last = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st text = text
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_text, RHO);
  (void)(Rsh_Fir_reg_text);
  // st first = first
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_first, RHO);
  (void)(Rsh_Fir_reg_first);
  // last_isMissing = missing.0(last)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_last;
  Rsh_Fir_reg_last_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if last_isMissing then L0(1000000) else L0(last)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_last_isMissing)) {
  // L0(1000000)
    Rsh_Fir_reg_last_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(last)
    Rsh_Fir_reg_last_orDefault = Rsh_Fir_reg_last;
    goto L0_;
  }

L0_:;
  // st last = last_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_last_orDefault, RHO);
  (void)(Rsh_Fir_reg_last_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L1_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L4()
  // L4()
  goto L4_;

L3_:;
  // st text = r4
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym2 = ldf max
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf max in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L5_:;
  // st n = r8
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // lt = ld lt
  Rsh_Fir_reg_lt = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

L6_:;
  // st lt = r10
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L7_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard5 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L8_:;
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r18 = dyn max(r10, r13, r16)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

L9_:;
  // c8 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c8 then L45() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L45()
    goto L45_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L12()
  // L12()
  goto L12_;

L11_:;
  // st text = r21
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym7 = ldf `.Internal`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base7 = ldf `.Internal` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard7 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;

L14_:;
  // sym9 = ldf `as.integer`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base9 = ldf `as.integer` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard9 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L15_:;
  // substr = ldf substr in base
  Rsh_Fir_reg_substr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r32 = dyn substr(text10, r27, r30)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_text10_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L63() else D21()
  // L63()
  goto L63_;

L16_:;
  // text1 = ld text
  Rsh_Fir_reg_text1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

L17_:;
  // r = dyn base(<sym text>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [text1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_text1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L18_:;
  // text2 = force? text1
  Rsh_Fir_reg_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1_);
  // checkMissing(text2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `is.character`(text2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_text2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L1_;

L19_:;
  // sym1 = ldf `as.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf `as.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // text3 = ld text
  Rsh_Fir_reg_text3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

L21_:;
  // r3 = dyn base1(<sym text>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D1_:;
  // deopt 7 [text3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_text3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L22_:;
  // text4 = force? text3
  Rsh_Fir_reg_text4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text3_);
  // checkMissing(text4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_text4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r5 = dyn as_character(text4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_text4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L3_;

L25_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L26_:;
  // r7 = dyn base2(<lang `<-`(lt, length(text))>, <lang length(first)>, <lang length(last)>)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L5_;

L27_:;
  // text5 = ld text
  Rsh_Fir_reg_text5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

L28_:;
  // r9 = dyn base3(<sym text>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L6_;

D3_:;
  // deopt 18 [text5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_text5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // text6 = force? text5
  Rsh_Fir_reg_text6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text5_);
  // checkMissing(text6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_text6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r11 = dyn length(text6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_text6_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

D4_:;
  // deopt 21 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L6_;

L31_:;
  // first1 = ld first
  Rsh_Fir_reg_first1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

L32_:;
  // r12 = dyn base4(<sym first>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L7_;

D5_:;
  // deopt 25 [first1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_first1_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // first2 = force? first1
  Rsh_Fir_reg_first2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first1_);
  // checkMissing(first2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_first2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r14 = dyn length1(first2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_first2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L34() else D6()
  // L34()
  goto L34_;

D6_:;
  // deopt 28 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L7_;

L35_:;
  // last1 = ld last
  Rsh_Fir_reg_last1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

L36_:;
  // r15 = dyn base5(<sym last>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L8_;

D7_:;
  // deopt 31 [last1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_last1_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // last2 = force? last1
  Rsh_Fir_reg_last2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_last1_);
  // checkMissing(last2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_last2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r17 = dyn length2(last2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_last2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

D8_:;
  // deopt 34 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L8_;

D9_:;
  // deopt 36 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L5(r18)
  // L5(r18)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r18_;
  goto L5_;

D10_:;
  // deopt 38 [lt]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_lt;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L40_:;
  // lt1 = force? lt
  Rsh_Fir_reg_lt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lt);
  // checkMissing(lt1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_lt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(lt1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_lt1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c2 then L41() else L9(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L41()
    goto L41_;
  } else {
  // L9(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L9_;
  }

L41_:;
  // lt2 = ld lt
  Rsh_Fir_reg_lt2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

D11_:;
  // deopt 40 [c2, lt2]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_lt2_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L42_:;
  // lt3 = force? lt2
  Rsh_Fir_reg_lt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lt2_);
  // checkMissing(lt3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_lt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L43() else D12()
  // L43()
  goto L43_;

D12_:;
  // deopt 41 [c2, lt3, n]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_lt3_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L43_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // r19 = `<`(lt3, n1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_lt3_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // c6 = `&&`(c2, c5)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L9(c6)
  // L9(c6)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c6_;
  goto L9_;

L45_:;
  // sym6 = ldf rep_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base6 = ldf rep_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard6 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // text7 = ld text
  Rsh_Fir_reg_text7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L48() else D13()
  // L48()
  goto L48_;

L47_:;
  // r20 = dyn base6[, `length.out`](<sym text>, <sym n>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L11_;

D13_:;
  // deopt 47 [text7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_text7_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L48_:;
  // text8 = force? text7
  Rsh_Fir_reg_text8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text7_);
  // checkMissing(text8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_text8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

D14_:;
  // deopt 49 [n2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L49_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r22 = dyn rep_len(text8, n3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_text8_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

D15_:;
  // deopt 52 [r22]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L11_;

L52_:;
  // text9 = ld text
  Rsh_Fir_reg_text9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L54() else D16()
  // L54()
  goto L54_;

L53_:;
  // r24 = dyn base7(<lang substr(text, as.integer(first), as.integer(last))>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(r24)
  // L13(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L13_;

D16_:;
  // deopt 58 [text9]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_text9_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L54_:;
  // text10 = force? text9
  Rsh_Fir_reg_text10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text9_);
  // checkMissing(text10)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_text10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // sym8 = ldf `as.integer`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base8 = ldf `as.integer` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard8 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // first3 = ld first
  Rsh_Fir_reg_first3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L57() else D17()
  // L57()
  goto L57_;

L56_:;
  // r26 = dyn base8(<sym first>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L14(r26)
  // L14(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L14_;

D17_:;
  // deopt 62 [first3]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_first3_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L57_:;
  // first4 = force? first3
  Rsh_Fir_reg_first4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first3_);
  // checkMissing(first4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_first4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r28 = dyn as_integer(first4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_first4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L58() else D18()
  // L58()
  goto L58_;

D18_:;
  // deopt 65 [r28]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L14(r28)
  // L14(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L14_;

L59_:;
  // last3 = ld last
  Rsh_Fir_reg_last3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L61() else D19()
  // L61()
  goto L61_;

L60_:;
  // r29 = dyn base9(<sym last>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L15(r29)
  // L15(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L15_;

D19_:;
  // deopt 68 [last3]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_last3_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L61_:;
  // last4 = force? last3
  Rsh_Fir_reg_last4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_last3_);
  // checkMissing(last4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_last4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r31 = dyn as_integer1(last4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_last4_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L62() else D20()
  // L62()
  goto L62_;

D20_:;
  // deopt 71 [r31]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L15(r31)
  // L15(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L15_;

D21_:;
  // deopt 73 [r32]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L13(r32)
  // L13(r32)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r32_;
  goto L13_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
