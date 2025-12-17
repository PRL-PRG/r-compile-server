#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3227003730_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3227003730_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3227003730_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3227003730_12(SEXP CCP, SEXP RHO);
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
  // r = clos inner3227003730
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3227003730_, RHO, CCP);
  // st `as.POSIXlt.character` = r
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
SEXP Rsh_Fir_user_function_inner3227003730_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3227003730 dynamic dispatch ([x, tz, format, tryFormats, optional, `...`])

  return Rsh_Fir_user_version_inner3227003730_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3227003730_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3227003730 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner3227003730/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_tz;  // tz
  SEXP Rsh_Fir_reg_format;  // format
  SEXP Rsh_Fir_reg_tryFormats;  // tryFormats
  SEXP Rsh_Fir_reg_optional;  // optional
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_tz_isMissing;  // tz_isMissing
  SEXP Rsh_Fir_reg_tz_orDefault;  // tz_orDefault
  SEXP Rsh_Fir_reg_tryFormats_isMissing;  // tryFormats_isMissing
  SEXP Rsh_Fir_reg_tryFormats_orDefault;  // tryFormats_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_optional_isMissing;  // optional_isMissing
  SEXP Rsh_Fir_reg_optional_orDefault;  // optional_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_strptime;  // strptime
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_format1_;  // format1
  SEXP Rsh_Fir_reg_format2_;  // format2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_tz1_;  // tz1
  SEXP Rsh_Fir_reg_tz2_;  // tz2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_tz3_;  // tz3
  SEXP Rsh_Fir_reg_tz4_;  // tz4
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_tz5_;  // tz5
  SEXP Rsh_Fir_reg_tz6_;  // tz6
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_strptime1_;  // strptime1
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_tz8_;  // tz8
  SEXP Rsh_Fir_reg_tz9_;  // tz9
  SEXP Rsh_Fir_reg_nzchar1_;  // nzchar1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_tz10_;  // tz10
  SEXP Rsh_Fir_reg_tz11_;  // tz11
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_res2_;  // res2
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_tryFormats1_;  // tryFormats1
  SEXP Rsh_Fir_reg_tryFormats2_;  // tryFormats2
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_strptime2_;  // strptime2
  SEXP Rsh_Fir_reg_xx2_;  // xx2
  SEXP Rsh_Fir_reg_xx3_;  // xx3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_tz13_;  // tz13
  SEXP Rsh_Fir_reg_tz14_;  // tz14
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_strptime3_;  // strptime3
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_tz15_;  // tz15
  SEXP Rsh_Fir_reg_tz16_;  // tz16
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_tz17_;  // tz17
  SEXP Rsh_Fir_reg_tz18_;  // tz18
  SEXP Rsh_Fir_reg_nzchar2_;  // nzchar2
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_tz19_;  // tz19
  SEXP Rsh_Fir_reg_tz20_;  // tz20
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_attr__2_;  // attr__2
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_res4_;  // res4
  SEXP Rsh_Fir_reg_res5_;  // res5
  SEXP Rsh_Fir_reg_optional1_;  // optional1
  SEXP Rsh_Fir_reg_optional2_;  // optional2
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_as_POSIXlt_character;  // as_POSIXlt_character
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_tz22_;  // tz22
  SEXP Rsh_Fir_reg_tz23_;  // tz23
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r68_;  // r68

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_tz = PARAMS[1];
  Rsh_Fir_reg_format = PARAMS[2];
  Rsh_Fir_reg_tryFormats = PARAMS[3];
  Rsh_Fir_reg_optional = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // tz_isMissing = missing.0(tz)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_tz;
  Rsh_Fir_reg_tz_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if tz_isMissing then L0("") else L0(tz)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tz_isMissing)) {
  // L0("")
    Rsh_Fir_reg_tz_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(tz)
    Rsh_Fir_reg_tz_orDefault = Rsh_Fir_reg_tz;
    goto L0_;
  }

L0_:;
  // st tz = tz_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_tz_orDefault, RHO);
  (void)(Rsh_Fir_reg_tz_orDefault);
  // st format = format
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_format, RHO);
  (void)(Rsh_Fir_reg_format);
  // tryFormats_isMissing = missing.0(tryFormats)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_tryFormats;
  Rsh_Fir_reg_tryFormats_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if tryFormats_isMissing then L1() else L2(tryFormats)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tryFormats_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(tryFormats)
    Rsh_Fir_reg_tryFormats_orDefault = Rsh_Fir_reg_tryFormats;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("%Y-%m-%d %H:%M:%OS", "%Y/%m/%d %H:%M:%OS", "%Y-%m-%d %H:%M", "%Y/%m/%d %H:%M", "%Y-%m-%d", "%Y/%m/%d");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("%Y-%m-%d %H:%M:%OS", "%Y/%m/%d %H:%M:%OS", "%Y-%m-%d %H:%M", "%Y/%m/%d %H:%M", "%Y-%m-%d", "%Y/%m/%d");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_tryFormats_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st tryFormats = tryFormats_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_tryFormats_orDefault, RHO);
  (void)(Rsh_Fir_reg_tryFormats_orDefault);
  // optional_isMissing = missing.0(optional)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_optional;
  Rsh_Fir_reg_optional_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if optional_isMissing then L3(FALSE) else L3(optional)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_optional_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_optional_orDefault = Rsh_const(CCP, 13);
    goto L3_;
  } else {
  // L3(optional)
    Rsh_Fir_reg_optional_orDefault = Rsh_Fir_reg_optional;
    goto L3_;
  }

L3_:;
  // st optional = optional_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_optional_orDefault, RHO);
  (void)(Rsh_Fir_reg_optional_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym1 = ldf unclass
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf unclass in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L4_:;
  // st x = r5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L5_:;
  // r10 = `!`(r8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c1 then L35() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

L7_:;
  // c2 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c2 then L42() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L42()
    goto L42_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L47() else D9()
  // L47()
  goto L47_;

L11_:;
  // st xx = dx1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard5 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L12_:;
  // r24 = `!`(r22)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r25 = dyn __(x11, r24)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r25_;
  goto L11_;

L13_:;
  // r29 = `!`(r27)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c4 then L62() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L62()
    goto L62_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // tryFormats1 = ld tryFormats
  Rsh_Fir_reg_tryFormats1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L77() else D23()
  // L77()
  goto L77_;

L15_:;
  // c5 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c5 then L69() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L69()
    goto L69_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // res2 = ld res
  Rsh_Fir_reg_res2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L74() else D22()
  // L74()
  goto L74_;

L19_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // c6 = `<`.1(l2, i2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if c6 then L78() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L78()
    goto L78_;
  } else {
  // L27()
    goto L27_;
  }

L20_:;
  // c7 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c7 then L87() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L87()
    goto L87_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // r47 = `!`(r41)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r48 = dyn all(r47)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L86() else D27()
  // L86()
  goto L86_;

L22_:;
  // goto L19(i7)
  // L19(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L19_;

L23_:;
  // c8 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c8 then L94() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L94()
    goto L94_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L25(i15)
  // L25(i15)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i15_;
  goto L25_;

L25_:;
  // res4 = ld res
  Rsh_Fir_reg_res4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L99() else D35()
  // L99()
  goto L99_;

L27_:;
  // x16 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_x16_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // st f = x16
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x16_, RHO);
  (void)(Rsh_Fir_reg_x16_);
  // sym7 = ldf all
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base7 = ldf all in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard7 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L28_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L107() else D39()
  // L107()
  goto L107_;

L29_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D0()
  // L31()
  goto L31_;

L30_:;
  // r4 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L4_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L31_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r6 = dyn unclass(x2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L4_;

L33_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r9 = dyn missing(<sym format>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L5_;

L34_:;
  // r7 = dyn base2(<sym format>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L5_;

L35_:;
  // strptime = ldf strptime
  Rsh_Fir_reg_strptime = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L36() else D2()
  // L36()
  goto L36_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_1, CCP, RHO);
  // p2 = prom<V +>{
  //   format1 = ld format;
  //   format2 = force? format1;
  //   checkMissing(format2);
  //   return format2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_2, CCP, RHO);
  // p3 = prom<V +>{
  //   tz1 = ld tz;
  //   tz2 = force? tz1;
  //   checkMissing(tz2);
  //   return tz2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_3, CCP, RHO);
  // r14 = dyn strptime[, , tz](p1, p2, p3)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strptime, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L37() else D3()
  // L37()
  goto L37_;

D3_:;
  // deopt 17 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L37_:;
  // st res = r14
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym3 = ldf nzchar
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base3 = ldf nzchar in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard3 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // tz3 = ld tz
  Rsh_Fir_reg_tz3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L40() else D4()
  // L40()
  goto L40_;

L39_:;
  // r15 = dyn base3(<sym tz>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L7_;

D4_:;
  // deopt 21 [tz3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_tz3_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L40_:;
  // tz4 = force? tz3
  Rsh_Fir_reg_tz4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz3_);
  // checkMissing(tz4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_tz4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r17 = dyn nzchar(tz4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_tz4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L41() else D5()
  // L41()
  goto L41_;

D5_:;
  // deopt 24 [r17]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L7_;

L42_:;
  // tz5 = ld tz
  Rsh_Fir_reg_tz5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L43() else D6()
  // L43()
  goto L43_;

D6_:;
  // deopt 25 [tz5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_tz5_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L43_:;
  // tz6 = force? tz5
  Rsh_Fir_reg_tz6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz5_);
  // checkMissing(tz6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_tz6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // l = ld res
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

D7_:;
  // deopt 28 [tz6, l, tz6]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_tz6_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_tz6_;
  Rsh_Fir_deopt(28, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L44_:;
  // r18 = dyn attr__(l, NULL, "tzone", tz6)
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args39[3] = Rsh_Fir_reg_tz6_;
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

D8_:;
  // deopt 31 [tz6, r18]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_tz6_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L45_:;
  // st res = r18
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // goto L9()
  // L9()
  goto L9_;

D9_:;
  // deopt 35 [res]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L47_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res1
  return Rsh_Fir_reg_res1_;

D10_:;
  // deopt 40 [x5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L50_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(x6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c3 then L51() else L52(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L51()
    goto L51_;
  } else {
  // L52(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L52_;
  }

L51_:;
  // dr = tryDispatchBuiltin.1("[", x6)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc then L53() else L52(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr;
    goto L52_;
  }

L52_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard4 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L53_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

L54_:;
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L56() else D11()
  // L56()
  goto L56_;

L55_:;
  // r21 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(x8, r21)
  // L12(x8, r21)
  Rsh_Fir_reg_x11_ = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L12_;

D11_:;
  // deopt 44 [x8, x12]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L56_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r23 = dyn is_na(x13)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L57() else D12()
  // L57()
  goto L57_;

D12_:;
  // deopt 47 [x8, r23]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L12(x8, r23)
  // L12(x8, r23)
  Rsh_Fir_reg_x11_ = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L12_;

L58_:;
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L60() else D13()
  // L60()
  goto L60_;

L59_:;
  // r26 = dyn base5(<sym xx>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(r26)
  // L13(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L13_;

D13_:;
  // deopt 53 [xx]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_xx;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L60_:;
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r28 = dyn length(xx1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_xx1_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L61() else D14()
  // L61()
  goto L61_;

D14_:;
  // deopt 56 [r28]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L13(r28)
  // L13(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L13_;

L62_:;
  // strptime1 = ldf strptime
  Rsh_Fir_reg_strptime1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L63() else D15()
  // L63()
  goto L63_;

D15_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // p4 = prom<V +>{
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   return x15;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_4, CCP, RHO);
  // r31 = dyn strptime1(p4, "%Y/%m/%d")
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strptime1_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L64() else D16()
  // L64()
  goto L64_;

D16_:;
  // deopt 62 [r31]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L64_:;
  // st res = r31
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym6 = ldf nzchar
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base6 = ldf nzchar in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard6 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L65_:;
  // tz8 = ld tz
  Rsh_Fir_reg_tz8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

L66_:;
  // r32 = dyn base6(<sym tz>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L15_;

D17_:;
  // deopt 66 [tz8]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_tz8_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L67_:;
  // tz9 = force? tz8
  Rsh_Fir_reg_tz9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz8_);
  // checkMissing(tz9)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_tz9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // nzchar1 = ldf nzchar in base
  Rsh_Fir_reg_nzchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r34 = dyn nzchar1(tz9)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_tz9_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

D18_:;
  // deopt 69 [r34]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L15_;

L69_:;
  // tz10 = ld tz
  Rsh_Fir_reg_tz10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L70() else D19()
  // L70()
  goto L70_;

D19_:;
  // deopt 70 [tz10]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_tz10_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L70_:;
  // tz11 = force? tz10
  Rsh_Fir_reg_tz11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz10_);
  // checkMissing(tz11)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_tz11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // l1 = ld res
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L71() else D20()
  // L71()
  goto L71_;

D20_:;
  // deopt 73 [tz11, l1, tz11]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_tz11_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_tz11_;
  Rsh_Fir_deopt(73, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L71_:;
  // r35 = dyn attr__1(l1, NULL, "tzone", tz11)
  SEXP Rsh_Fir_array_args60[4];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args60[3] = Rsh_Fir_reg_tz11_;
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L72() else D21()
  // L72()
  goto L72_;

D21_:;
  // deopt 76 [tz11, r35]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_tz11_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L72_:;
  // st res = r35
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // goto L17()
  // L17()
  goto L17_;

D22_:;
  // deopt 80 [res2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_res2_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L74_:;
  // res3 = force? res2
  Rsh_Fir_reg_res3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res2_);
  // checkMissing(res3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_res3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res3
  return Rsh_Fir_reg_res3_;

D23_:;
  // deopt 83 [tryFormats1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_tryFormats1_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L77_:;
  // tryFormats2 = force? tryFormats1
  Rsh_Fir_reg_tryFormats2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tryFormats1_);
  // checkMissing(tryFormats2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_tryFormats2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // s = toForSeq(tryFormats2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_tryFormats2_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // l2 = length(s)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l2_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 34);
  // goto L19(i)
  // L19(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L19_;

L78_:;
  // optional1 = ld optional
  Rsh_Fir_reg_optional1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L102() else D36()
  // L102()
  goto L102_;

L79_:;
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard8 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L80_:;
  // r38 = dyn base7(<lang `!`(is.na(strptime(xx, f, tz=tz)))>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L20(i2, r38)
  // L20(i2, r38)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L20_;

L81_:;
  // strptime2 = ldf strptime
  Rsh_Fir_reg_strptime2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L83() else D24()
  // L83()
  goto L83_;

L82_:;
  // r40 = dyn base8(<lang strptime(xx, f, tz=tz)>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L21(i2, r40)
  // L21(i2, r40)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L21_;

D24_:;
  // deopt 90 [i2]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L83_:;
  // p5 = prom<V +>{
  //   xx2 = ld xx;
  //   xx3 = force? xx2;
  //   checkMissing(xx3);
  //   return xx3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_5, CCP, RHO);
  // p6 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_6, CCP, RHO);
  // p7 = prom<V +>{
  //   tz13 = ld tz;
  //   tz14 = force? tz13;
  //   checkMissing(tz14);
  //   return tz14;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_7, CCP, RHO);
  // r45 = dyn strptime2[, , tz](p5, p6, p7)
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args71[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strptime2_, 3, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L84() else D25()
  // L84()
  goto L84_;

D25_:;
  // deopt 95 [i2, r45]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L84_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r46 = dyn is_na1(r45)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L85() else D26()
  // L85()
  goto L85_;

D26_:;
  // deopt 97 [i2, r46]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L21(i2, r46)
  // L21(i2, r46)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r46_;
  goto L21_;

D27_:;
  // deopt 100 [i10, r48]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L20(i10, r48)
  // L20(i10, r48)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r48_;
  goto L20_;

L87_:;
  // strptime3 = ldf strptime
  Rsh_Fir_reg_strptime3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L88() else D28()
  // L88()
  goto L88_;

D28_:;
  // deopt 102 [i7]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L88_:;
  // p8 = prom<V +>{
  //   x17 = ld x;
  //   x18 = force? x17;
  //   checkMissing(x18);
  //   return x18;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_8, CCP, RHO);
  // p9 = prom<V +>{
  //   f2 = ld f;
  //   f3 = force? f2;
  //   checkMissing(f3);
  //   return f3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_9, CCP, RHO);
  // p10 = prom<V +>{
  //   tz15 = ld tz;
  //   tz16 = force? tz15;
  //   checkMissing(tz16);
  //   return tz16;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_10, CCP, RHO);
  // r52 = dyn strptime3[, , tz](p8, p9, p10)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strptime3_, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L89() else D29()
  // L89()
  goto L89_;

D29_:;
  // deopt 107 [i7, r52]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(107, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L89_:;
  // st res = r52
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // sym9 = ldf nzchar
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base9 = ldf nzchar in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard9 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L90_:;
  // tz17 = ld tz
  Rsh_Fir_reg_tz17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L92() else D30()
  // L92()
  goto L92_;

L91_:;
  // r53 = dyn base9(<sym tz>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L23(i7, r53)
  // L23(i7, r53)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L23_;

D30_:;
  // deopt 111 [i7, tz17]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_tz17_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L92_:;
  // tz18 = force? tz17
  Rsh_Fir_reg_tz18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz17_);
  // checkMissing(tz18)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_tz18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // nzchar2 = ldf nzchar in base
  Rsh_Fir_reg_nzchar2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r55 = dyn nzchar2(tz18)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_tz18_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar2_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L93() else D31()
  // L93()
  goto L93_;

D31_:;
  // deopt 114 [i7, r55]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L23(i7, r55)
  // L23(i7, r55)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L23_;

L94_:;
  // tz19 = ld tz
  Rsh_Fir_reg_tz19_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L95() else D32()
  // L95()
  goto L95_;

D32_:;
  // deopt 115 [i15, tz19]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_tz19_;
  Rsh_Fir_deopt(115, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L95_:;
  // tz20 = force? tz19
  Rsh_Fir_reg_tz20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz19_);
  // checkMissing(tz20)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_tz20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // l3 = ld res
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // attr__2 = ldf `attr<-`
  Rsh_Fir_reg_attr__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L96() else D33()
  // L96()
  goto L96_;

D33_:;
  // deopt 118 [i15, tz20, l3, tz20]
  SEXP Rsh_Fir_array_deopt_stack31[4];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_tz20_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_tz20_;
  Rsh_Fir_deopt(118, 4, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L96_:;
  // r56 = dyn attr__2(l3, NULL, "tzone", tz20)
  SEXP Rsh_Fir_array_args82[4];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args82[3] = Rsh_Fir_reg_tz20_;
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__2_, 4, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L97() else D34()
  // L97()
  goto L97_;

D34_:;
  // deopt 121 [i15, tz20, r56]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_tz20_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(121, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L97_:;
  // st res = r56
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // goto L25(i15)
  // L25(i15)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i15_;
  goto L25_;

D35_:;
  // deopt 125 [i18, res4]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_res4_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L99_:;
  // res5 = force? res4
  Rsh_Fir_reg_res5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res4_);
  // checkMissing(res5)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_res5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res5
  return Rsh_Fir_reg_res5_;

D36_:;
  // deopt 133 [optional1]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_optional1_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L102_:;
  // optional2 = force? optional1
  Rsh_Fir_reg_optional2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional1_);
  // checkMissing(optional2)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_optional2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(optional2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_optional2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c9 then L103() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L103()
    goto L103_;
  } else {
  // L28()
    goto L28_;
  }

L103_:;
  // as_POSIXlt_character = ldf `as.POSIXlt.character`
  Rsh_Fir_reg_as_POSIXlt_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L104() else D37()
  // L104()
  goto L104_;

D37_:;
  // deopt 136 []
  Rsh_Fir_deopt(136, 0, NULL, CCP, RHO);
  return R_NilValue;

L104_:;
  // p11 = prom<V +>{
  //   sym10 = ldf `rep.int`;
  //   base10 = ldf `rep.int` in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L2() else L3();
  // L0(r60):
  //   return r60;
  // L2():
  //   sym11 = ldf length;
  //   base11 = ldf length in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L4() else L5();
  // L3():
  //   r59 = dyn base10(NA_STR, <lang length(x)>);
  //   goto L0(r59);
  // L1(r62):
  //   rep_int = ldf `rep.int` in base;
  //   r64 = dyn rep_int(NA_STR, r62);
  //   goto L0(r64);
  // L4():
  //   x19 = ld x;
  //   x20 = force? x19;
  //   checkMissing(x20);
  //   length1 = ldf length in base;
  //   r63 = dyn length1(x20);
  //   goto L1(r63);
  // L5():
  //   r61 = dyn base11(<sym x>);
  //   goto L1(r61);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_11, CCP, RHO);
  // p12 = prom<V +>{
  //   tz22 = ld tz;
  //   tz23 = force? tz22;
  //   checkMissing(tz23);
  //   return tz23;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3227003730_12, CCP, RHO);
  // r67 = dyn as_POSIXlt_character[, tz](p11, p12)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXlt_character, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L105() else D38()
  // L105()
  goto L105_;

D38_:;
  // deopt 140 [r67]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L105_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r67
  return Rsh_Fir_reg_r67_;

D39_:;
  // deopt 142 []
  Rsh_Fir_deopt(142, 0, NULL, CCP, RHO);
  return R_NilValue;

L107_:;
  // r68 = dyn stop("character string is not in a standard unambiguous format")
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L108() else D40()
  // L108()
  goto L108_;

D40_:;
  // deopt 144 [r68]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L108_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r68
  return Rsh_Fir_reg_r68_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn c("%Y-%m-%d %H:%M:%OS", "%Y/%m/%d %H:%M:%OS", "%Y-%m-%d %H:%M", "%Y/%m/%d %H:%M", "%Y-%m-%d", "%Y/%m/%d")
  SEXP Rsh_Fir_array_args3[6];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args3[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args3[5] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names[6];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 6, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("%Y-%m-%d %H:%M:%OS", "%Y/%m/%d %H:%M:%OS", "%Y-%m-%d %H:%M", "%Y/%m/%d %H:%M", "%Y-%m-%d", "%Y/%m/%d")
  SEXP Rsh_Fir_array_args4[6];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args4[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[5] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[6];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 6, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_1(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_2(SEXP CCP, SEXP RHO) {
  // format1 = ld format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // format2 = force? format1
  Rsh_Fir_reg_format2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_format1_);
  // checkMissing(format2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_format2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return format2
  return Rsh_Fir_reg_format2_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_3(SEXP CCP, SEXP RHO) {
  // tz1 = ld tz
  Rsh_Fir_reg_tz1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // tz2 = force? tz1
  Rsh_Fir_reg_tz2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz1_);
  // checkMissing(tz2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_tz2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return tz2
  return Rsh_Fir_reg_tz2_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_4(SEXP CCP, SEXP RHO) {
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_5(SEXP CCP, SEXP RHO) {
  // xx2 = ld xx
  Rsh_Fir_reg_xx2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // xx3 = force? xx2
  Rsh_Fir_reg_xx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx2_);
  // checkMissing(xx3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_xx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return xx3
  return Rsh_Fir_reg_xx3_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_6(SEXP CCP, SEXP RHO) {
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_7(SEXP CCP, SEXP RHO) {
  // tz13 = ld tz
  Rsh_Fir_reg_tz13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // tz14 = force? tz13
  Rsh_Fir_reg_tz14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz13_);
  // checkMissing(tz14)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_tz14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return tz14
  return Rsh_Fir_reg_tz14_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_8(SEXP CCP, SEXP RHO) {
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return x18
  return Rsh_Fir_reg_x18_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_9(SEXP CCP, SEXP RHO) {
  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return f3
  return Rsh_Fir_reg_f3_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_10(SEXP CCP, SEXP RHO) {
  // tz15 = ld tz
  Rsh_Fir_reg_tz15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // tz16 = force? tz15
  Rsh_Fir_reg_tz16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz15_);
  // checkMissing(tz16)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_tz16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return tz16
  return Rsh_Fir_reg_tz16_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_11(SEXP CCP, SEXP RHO) {
  // sym10 = ldf `rep.int`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base10 = ldf `rep.int` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard10 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r60
  return Rsh_Fir_reg_r60_;

L1_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r64 = dyn rep_int(NA_STR, r62)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r64)
  // L0(r64)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r64_;
  goto L0_;

L2_:;
  // sym11 = ldf length
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base11 = ldf length in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard11 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r59 = dyn base10(NA_STR, <lang length(x)>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r59)
  // L0(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L0_;

L4_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r63 = dyn length1(x20)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L1(r63)
  // L1(r63)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L1_;

L5_:;
  // r61 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L1(r61)
  // L1(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3227003730_12(SEXP CCP, SEXP RHO) {
  // tz22 = ld tz
  Rsh_Fir_reg_tz22_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // tz23 = force? tz22
  Rsh_Fir_reg_tz23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz22_);
  // checkMissing(tz23)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_tz23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // return tz23
  return Rsh_Fir_reg_tz23_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
