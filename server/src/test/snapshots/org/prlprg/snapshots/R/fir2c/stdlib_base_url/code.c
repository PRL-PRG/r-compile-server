#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1807238089_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1807238089_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1807238089_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1807238089_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1807238089_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1807238089_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1807238089_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1807238089_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1807238089_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner1807238089
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1807238089_, RHO, CCP);
  // st url = r
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
SEXP Rsh_Fir_user_function_inner1807238089_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1807238089 dynamic dispatch ([description, open, blocking, encoding, method, headers])

  return Rsh_Fir_user_version_inner1807238089_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1807238089_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1807238089 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1807238089/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_description;  // description
  SEXP Rsh_Fir_reg_open;  // open
  SEXP Rsh_Fir_reg_blocking;  // blocking
  SEXP Rsh_Fir_reg_encoding;  // encoding
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_headers;  // headers
  SEXP Rsh_Fir_reg_open_isMissing;  // open_isMissing
  SEXP Rsh_Fir_reg_open_orDefault;  // open_orDefault
  SEXP Rsh_Fir_reg_blocking_isMissing;  // blocking_isMissing
  SEXP Rsh_Fir_reg_blocking_orDefault;  // blocking_orDefault
  SEXP Rsh_Fir_reg_encoding_isMissing;  // encoding_isMissing
  SEXP Rsh_Fir_reg_encoding_orDefault;  // encoding_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_method_isMissing;  // method_isMissing
  SEXP Rsh_Fir_reg_method_orDefault;  // method_orDefault
  SEXP Rsh_Fir_reg_getOption1_;  // getOption1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_headers_isMissing;  // headers_isMissing
  SEXP Rsh_Fir_reg_headers_orDefault;  // headers_orDefault
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_headers1_;  // headers1
  SEXP Rsh_Fir_reg_headers2_;  // headers2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_headers3_;  // headers3
  SEXP Rsh_Fir_reg_headers4_;  // headers4
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_nh;  // nh
  SEXP Rsh_Fir_reg_nh1_;  // nh1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_headers5_;  // headers5
  SEXP Rsh_Fir_reg_headers6_;  // headers6
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_nh2_;  // nh2
  SEXP Rsh_Fir_reg_nh3_;  // nh3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_headers7_;  // headers7
  SEXP Rsh_Fir_reg_headers8_;  // headers8
  SEXP Rsh_Fir_reg_anyNA;  // anyNA
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_nh4_;  // nh4
  SEXP Rsh_Fir_reg_nh5_;  // nh5
  SEXP Rsh_Fir_reg_anyNA1_;  // anyNA1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_nh6_;  // nh6
  SEXP Rsh_Fir_reg_nh7_;  // nh7
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_headers9_;  // headers9
  SEXP Rsh_Fir_reg_headers10_;  // headers10
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_headers11_;  // headers11
  SEXP Rsh_Fir_reg_headers12_;  // headers12
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_headers13_;  // headers13
  SEXP Rsh_Fir_reg_headers14_;  // headers14
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_description1_;  // description1
  SEXP Rsh_Fir_reg_description2_;  // description2
  SEXP Rsh_Fir_reg_open1_;  // open1
  SEXP Rsh_Fir_reg_open2_;  // open2
  SEXP Rsh_Fir_reg_blocking1_;  // blocking1
  SEXP Rsh_Fir_reg_blocking2_;  // blocking2
  SEXP Rsh_Fir_reg_encoding1_;  // encoding1
  SEXP Rsh_Fir_reg_encoding2_;  // encoding2
  SEXP Rsh_Fir_reg_method3_;  // method3
  SEXP Rsh_Fir_reg_method4_;  // method4
  SEXP Rsh_Fir_reg_headers15_;  // headers15
  SEXP Rsh_Fir_reg_headers16_;  // headers16
  SEXP Rsh_Fir_reg_url;  // url
  SEXP Rsh_Fir_reg_r49_;  // r49

  // Bind parameters
  Rsh_Fir_reg_description = PARAMS[0];
  Rsh_Fir_reg_open = PARAMS[1];
  Rsh_Fir_reg_blocking = PARAMS[2];
  Rsh_Fir_reg_encoding = PARAMS[3];
  Rsh_Fir_reg_method = PARAMS[4];
  Rsh_Fir_reg_headers = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st description = description
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_description, RHO);
  (void)(Rsh_Fir_reg_description);
  // open_isMissing = missing.0(open)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_open;
  Rsh_Fir_reg_open_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if open_isMissing then L0("") else L0(open)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_open_isMissing)) {
  // L0("")
    Rsh_Fir_reg_open_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(open)
    Rsh_Fir_reg_open_orDefault = Rsh_Fir_reg_open;
    goto L0_;
  }

L0_:;
  // st open = open_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_open_orDefault, RHO);
  (void)(Rsh_Fir_reg_open_orDefault);
  // blocking_isMissing = missing.0(blocking)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_blocking;
  Rsh_Fir_reg_blocking_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if blocking_isMissing then L1(TRUE) else L1(blocking)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_blocking_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_blocking_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(blocking)
    Rsh_Fir_reg_blocking_orDefault = Rsh_Fir_reg_blocking;
    goto L1_;
  }

L1_:;
  // st blocking = blocking_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_blocking_orDefault, RHO);
  (void)(Rsh_Fir_reg_blocking_orDefault);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if encoding_isMissing then L2() else L3(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("encoding");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807238089_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // method_isMissing = missing.0(method)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_method;
  Rsh_Fir_reg_method_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if method_isMissing then L4() else L5(method)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_method_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(method)
    Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_method;
    goto L5_;
  }

L4_:;
  // p1 = prom<V +>{
  //   getOption1 = ldf getOption;
  //   r2 = dyn getOption1("url.method", "default");
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807238089_1, CCP, RHO);
  // goto L5(p1)
  // L5(p1)
  Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_p1_;
  goto L5_;

L5_:;
  // st method = method_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_method_orDefault, RHO);
  (void)(Rsh_Fir_reg_method_orDefault);
  // headers_isMissing = missing.0(headers)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_headers;
  Rsh_Fir_reg_headers_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if headers_isMissing then L6(NULL) else L6(headers)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_headers_isMissing)) {
  // L6(NULL)
    Rsh_Fir_reg_headers_orDefault = Rsh_const(CCP, 12);
    goto L6_;
  } else {
  // L6(headers)
    Rsh_Fir_reg_headers_orDefault = Rsh_Fir_reg_headers;
    goto L6_;
  }

L6_:;
  // st headers = headers_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_headers_orDefault, RHO);
  (void)(Rsh_Fir_reg_headers_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L7_:;
  // r12 = `!`(r11)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c2 then L28() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L28()
    goto L28_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L21()
  // L21()
  goto L21_;

L9_:;
  // st nh = r14
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L10_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard4 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L11_:;
  // r25 = `!=`(r22, r23)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c3 then L12(c3) else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L12(c3)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c3_;
    goto L12_;
  } else {
  // L41()
    goto L41_;
  }

L12_:;
  // c12 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c12 then L14(c12) else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L14(c12)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c12_;
    goto L14_;
  } else {
  // L47()
    goto L47_;
  }

L13_:;
  // c9 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c10 = `||`(c8, c9)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L12(c10)
  // L12(c10)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c10_;
  goto L12_;

L14_:;
  // c21 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c21 then L16(c21) else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L16(c21)
    Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c21_;
    goto L16_;
  } else {
  // L53()
    goto L53_;
  }

L15_:;
  // c18 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c19 = `||`(c17, c18)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L14(c19)
  // L14(c19)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c19_;
  goto L14_;

L16_:;
  // c30 = `as.logical`(c22)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c30 then L59() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L59()
    goto L59_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // c27 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c28 = `||`(c26, c27)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L16(c28)
  // L16(c28)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c28_;
  goto L16_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L63() else D17()
  // L63()
  goto L63_;

L20_:;
  // st headers = r42
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // sym9 = ldf `.Internal`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base9 = ldf `.Internal` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard9 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r48
  return Rsh_Fir_reg_r48_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p2 = prom<V +>{
  //   method1 = ld method;
  //   method2 = force? method1;
  //   checkMissing(method2);
  //   return method2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807238089_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   c = ldf c in base;
  //   r7 = dyn c("default", "internal", "libcurl", "wininet");
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base("default", "internal", "libcurl", "wininet");
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807238089_3, CCP, RHO);
  // r9 = dyn match_arg(p2, p3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 4 [r9]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // st method = r9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // headers1 = ld headers
  Rsh_Fir_reg_headers1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r10 = dyn base1(<sym headers>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L7_;

D2_:;
  // deopt 7 [headers1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_headers1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // headers2 = force? headers1
  Rsh_Fir_reg_headers2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_headers1_);
  // checkMissing(headers2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_headers2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c1 = `==`(headers2, NULL)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_headers2_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L7(c1)
  // L7(c1)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_c1_;
  goto L7_;

L28_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // headers3 = ld headers
  Rsh_Fir_reg_headers3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

L30_:;
  // r13 = dyn base2(<sym headers>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L9(r13)
  // L9(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L9_;

D3_:;
  // deopt 13 [headers3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_headers3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // headers4 = force? headers3
  Rsh_Fir_reg_headers4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_headers3_);
  // checkMissing(headers4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_headers4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r15 = dyn names(headers4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_headers4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

D4_:;
  // deopt 16 [r15]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L9_;

L33_:;
  // nh = ld nh
  Rsh_Fir_reg_nh = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L35() else D5()
  // L35()
  goto L35_;

L34_:;
  // r16 = dyn base3(<sym nh>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L10(r16)
  // L10(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L10_;

D5_:;
  // deopt 20 [nh]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_nh;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L35_:;
  // nh1 = force? nh
  Rsh_Fir_reg_nh1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nh);
  // checkMissing(nh1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_nh1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r18 = dyn length(nh1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_nh1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

D6_:;
  // deopt 23 [r18]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L10(r18)
  // L10(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L10_;

L37_:;
  // headers5 = ld headers
  Rsh_Fir_reg_headers5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

L38_:;
  // r21 = dyn base4(<sym headers>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L11(r17, r21)
  // L11(r17, r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r21_;
  goto L11_;

D7_:;
  // deopt 25 [r17, headers5]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_headers5_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // headers6 = force? headers5
  Rsh_Fir_reg_headers6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_headers5_);
  // checkMissing(headers6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_headers6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r24 = dyn length1(headers6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_headers6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

D8_:;
  // deopt 28 [r17, r24]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L11(r17, r24)
  // L11(r17, r24)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L11_;

L41_:;
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard5 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // nh2 = ld nh
  Rsh_Fir_reg_nh2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

L43_:;
  // r26 = dyn base5(<lang `==`(nh, "")>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L13(c3, r26)
  // L13(c3, r26)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L13_;

D9_:;
  // deopt 32 [c3, nh2]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_nh2_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L44_:;
  // nh3 = force? nh2
  Rsh_Fir_reg_nh3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nh2_);
  // checkMissing(nh3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_nh3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r28 = `==`(nh3, "")
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_nh3_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r29 = dyn any(r28)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

D10_:;
  // deopt 37 [c3, r29]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L13(c3, r29)
  // L13(c3, r29)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r29_;
  goto L13_;

L47_:;
  // sym6 = ldf anyNA
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base6 = ldf anyNA in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard6 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // headers7 = ld headers
  Rsh_Fir_reg_headers7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L50() else D11()
  // L50()
  goto L50_;

L49_:;
  // r30 = dyn base6(<sym headers>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L15(c12, r30)
  // L15(c12, r30)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L15_;

D11_:;
  // deopt 41 [c12, headers7]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_headers7_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L50_:;
  // headers8 = force? headers7
  Rsh_Fir_reg_headers8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_headers7_);
  // checkMissing(headers8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_headers8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r32 = dyn anyNA(headers8)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_headers8_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L51() else D12()
  // L51()
  goto L51_;

D12_:;
  // deopt 44 [c12, r32]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L15(c12, r32)
  // L15(c12, r32)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L15_;

L53_:;
  // sym7 = ldf anyNA
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base7 = ldf anyNA in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard7 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // nh4 = ld nh
  Rsh_Fir_reg_nh4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L56() else D13()
  // L56()
  goto L56_;

L55_:;
  // r33 = dyn base7(<sym nh>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L17(c21, r33)
  // L17(c21, r33)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L17_;

D13_:;
  // deopt 48 [c21, nh4]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_nh4_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L56_:;
  // nh5 = force? nh4
  Rsh_Fir_reg_nh5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nh4_);
  // checkMissing(nh5)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_nh5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // anyNA1 = ldf anyNA in base
  Rsh_Fir_reg_anyNA1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r35 = dyn anyNA1(nh5)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_nh5_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L57() else D14()
  // L57()
  goto L57_;

D14_:;
  // deopt 51 [c21, r35]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L17(c21, r35)
  // L17(c21, r35)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L17_;

L59_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L60() else D15()
  // L60()
  goto L60_;

D15_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // r36 = dyn stop("'headers' must have names and must not be NA")
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L61() else D16()
  // L61()
  goto L61_;

D16_:;
  // deopt 56 [r36]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L19()
  // L19()
  goto L19_;

D17_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // p4 = prom<V +>{
  //   nh6 = ld nh;
  //   nh7 = force? nh6;
  //   checkMissing(nh7);
  //   return nh7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807238089_4, CCP, RHO);
  // p5 = prom<V +>{
  //   headers9 = ld headers;
  //   headers10 = force? headers9;
  //   checkMissing(headers10);
  //   return headers10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807238089_5, CCP, RHO);
  // r40 = dyn paste0(p4, ": ", p5)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L64() else D18()
  // L64()
  goto L64_;

D18_:;
  // deopt 64 [r40]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L64_:;
  // st headers = r40
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym8 = ldf list
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base8 = ldf list in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard8 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L65_:;
  // headers11 = ld headers
  Rsh_Fir_reg_headers11_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L67() else D19()
  // L67()
  goto L67_;

L66_:;
  // r41 = dyn base8(<sym headers>, <lang paste0(headers, "\r\n", collapse="")>)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L20(r41)
  // L20(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L20_;

D19_:;
  // deopt 68 [headers11]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_headers11_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L67_:;
  // headers12 = force? headers11
  Rsh_Fir_reg_headers12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_headers11_);
  // checkMissing(headers12)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_headers12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L68() else D20()
  // L68()
  goto L68_;

D20_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // p6 = prom<V +>{
  //   headers13 = ld headers;
  //   headers14 = force? headers13;
  //   checkMissing(headers14);
  //   return headers14;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1807238089_6, CCP, RHO);
  // r44 = dyn paste1[, , collapse](p6, "\r\n", "")
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L69() else D21()
  // L69()
  goto L69_;

D21_:;
  // deopt 76 [r44]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L69_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r45 = dyn list(headers12, r44)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_headers12_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L70() else D22()
  // L70()
  goto L70_;

D22_:;
  // deopt 78 [r45]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L20(r45)
  // L20(r45)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r45_;
  goto L20_;

L72_:;
  // description1 = ld description
  Rsh_Fir_reg_description1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L74() else D23()
  // L74()
  goto L74_;

L73_:;
  // r47 = dyn base9(<lang url(description, open, blocking, encoding, method, headers)>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L22(r47)
  // L22(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L22_;

D23_:;
  // deopt 84 [description1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_description1_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L74_:;
  // description2 = force? description1
  Rsh_Fir_reg_description2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_description1_);
  // checkMissing(description2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_description2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // open1 = ld open
  Rsh_Fir_reg_open1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

D24_:;
  // deopt 86 [open1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_open1_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L75_:;
  // open2 = force? open1
  Rsh_Fir_reg_open2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_open1_);
  // checkMissing(open2)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_open2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // blocking1 = ld blocking
  Rsh_Fir_reg_blocking1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L76() else D25()
  // L76()
  goto L76_;

D25_:;
  // deopt 88 [blocking1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_blocking1_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L76_:;
  // blocking2 = force? blocking1
  Rsh_Fir_reg_blocking2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_blocking1_);
  // checkMissing(blocking2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_blocking2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L77() else D26()
  // L77()
  goto L77_;

D26_:;
  // deopt 90 [encoding1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_encoding1_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L77_:;
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // method3 = ld method
  Rsh_Fir_reg_method3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L78() else D27()
  // L78()
  goto L78_;

D27_:;
  // deopt 92 [method3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_method3_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L78_:;
  // method4 = force? method3
  Rsh_Fir_reg_method4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method3_);
  // checkMissing(method4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_method4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // headers15 = ld headers
  Rsh_Fir_reg_headers15_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L79() else D28()
  // L79()
  goto L79_;

D28_:;
  // deopt 94 [headers15]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_headers15_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L79_:;
  // headers16 = force? headers15
  Rsh_Fir_reg_headers16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_headers15_);
  // checkMissing(headers16)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_headers16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // url = ldf url in base
  Rsh_Fir_reg_url = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r49 = dyn url(description2, open2, blocking2, encoding2, method4, headers16)
  SEXP Rsh_Fir_array_args72[6];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_description2_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_open2_;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_blocking2_;
  Rsh_Fir_array_args72[3] = Rsh_Fir_reg_encoding2_;
  Rsh_Fir_array_args72[4] = Rsh_Fir_reg_method4_;
  Rsh_Fir_array_args72[5] = Rsh_Fir_reg_headers16_;
  SEXP Rsh_Fir_array_arg_names24[6];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_url, 6, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L80() else D29()
  // L80()
  goto L80_;

D29_:;
  // deopt 97 [r49]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L22(r49)
  // L22(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L22_;
}
SEXP Rsh_Fir_user_promise_inner1807238089_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r = dyn getOption("encoding")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1807238089_1(SEXP CCP, SEXP RHO) {
  // getOption1 = ldf getOption
  Rsh_Fir_reg_getOption1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r2 = dyn getOption1("url.method", "default")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner1807238089_2(SEXP CCP, SEXP RHO) {
  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return method2
  return Rsh_Fir_reg_method2_;
}
SEXP Rsh_Fir_user_promise_inner1807238089_3(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r7 = dyn c("default", "internal", "libcurl", "wininet")
  SEXP Rsh_Fir_array_args25[4];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args25[3] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base("default", "internal", "libcurl", "wininet")
  SEXP Rsh_Fir_array_args26[4];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1807238089_4(SEXP CCP, SEXP RHO) {
  // nh6 = ld nh
  Rsh_Fir_reg_nh6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // nh7 = force? nh6
  Rsh_Fir_reg_nh7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nh6_);
  // checkMissing(nh7)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_nh7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return nh7
  return Rsh_Fir_reg_nh7_;
}
SEXP Rsh_Fir_user_promise_inner1807238089_5(SEXP CCP, SEXP RHO) {
  // headers9 = ld headers
  Rsh_Fir_reg_headers9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // headers10 = force? headers9
  Rsh_Fir_reg_headers10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_headers9_);
  // checkMissing(headers10)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_headers10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return headers10
  return Rsh_Fir_reg_headers10_;
}
SEXP Rsh_Fir_user_promise_inner1807238089_6(SEXP CCP, SEXP RHO) {
  // headers13 = ld headers
  Rsh_Fir_reg_headers13_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // headers14 = force? headers13
  Rsh_Fir_reg_headers14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_headers13_);
  // checkMissing(headers14)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_headers14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return headers14
  return Rsh_Fir_reg_headers14_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
