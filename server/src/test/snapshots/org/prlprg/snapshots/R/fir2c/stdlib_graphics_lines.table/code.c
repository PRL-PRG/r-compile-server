#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2311038814_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2311038814_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2311038814_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2311038814_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2311038814_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2311038814_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2311038814_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2311038814
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2311038814_, RHO, CCP);
  // st `lines.table` = r
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
SEXP Rsh_Fir_user_function_inner2311038814_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2311038814 dynamic dispatch ([x, y, type, lwd, `...`])

  return Rsh_Fir_user_version_inner2311038814_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2311038814_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2311038814 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2311038814/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_lwd;  // lwd
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_y_isMissing;  // y_isMissing
  SEXP Rsh_Fir_reg_y_orDefault;  // y_orDefault
  SEXP Rsh_Fir_reg_type_isMissing;  // type_isMissing
  SEXP Rsh_Fir_reg_type_orDefault;  // type_orDefault
  SEXP Rsh_Fir_reg_lwd_isMissing;  // lwd_isMissing
  SEXP Rsh_Fir_reg_lwd_orDefault;  // lwd_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_suppressWarnings;  // suppressWarnings
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_nx;  // nx
  SEXP Rsh_Fir_reg_nx1_;  // nx1
  SEXP Rsh_Fir_reg_as_numeric;  // as_numeric
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_is_num;  // is_num
  SEXP Rsh_Fir_reg_is_num1_;  // is_num1
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_xx2_;  // xx2
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_lines;  // lines
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_lwd1_;  // lwd1
  SEXP Rsh_Fir_reg_lwd2_;  // lwd2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r37_;  // r37

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_type = PARAMS[2];
  Rsh_Fir_reg_lwd = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // y_isMissing = missing.0(y)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_y;
  Rsh_Fir_reg_y_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if y_isMissing then L0(NULL) else L0(y)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_y_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_y_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(y)
    Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_y;
    goto L0_;
  }

L0_:;
  // st y = y_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_y_orDefault, RHO);
  (void)(Rsh_Fir_reg_y_orDefault);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if type_isMissing then L1("h") else L1(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L1("h")
    Rsh_Fir_reg_type_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L1_;
  }

L1_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // lwd_isMissing = missing.0(lwd)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_lwd;
  Rsh_Fir_reg_lwd_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if lwd_isMissing then L2(2.0) else L2(lwd)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lwd_isMissing)) {
  // L2(2.0)
    Rsh_Fir_reg_lwd_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(lwd)
    Rsh_Fir_reg_lwd_orDefault = Rsh_Fir_reg_lwd;
    goto L2_;
  }

L2_:;
  // st lwd = lwd_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_lwd_orDefault, RHO);
  (void)(Rsh_Fir_reg_lwd_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L3_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L15() else L4(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L15()
    goto L15_;
  } else {
  // L4(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L4_;
  }

L4_:;
  // c13 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c13 then L24() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L24()
    goto L24_;
  } else {
  // L7()
    goto L7_;
  }

L5_:;
  // r8 = `==`(r3, 1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c11 = `&&`(c6, c10)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L4(c11)
  // L4(c11)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c11_;
  goto L4_;

L6_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r7 = dyn length(r5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L22() else D3()
  // L22()
  goto L22_;

L7_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L44() else D13()
  // L44()
  goto L44_;

L8_:;
  // c14 = `is.object`(r10)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c14 then L29() else L30(r10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L29()
    goto L29_;
  } else {
  // L30(r10)
    Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r10_;
    goto L30_;
  }

L9_:;
  // st nx = dx1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // suppressWarnings = ldf suppressWarnings
  Rsh_Fir_reg_suppressWarnings = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L10_:;
  // sym7 = ldf seq_along
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base7 = ldf seq_along in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard7 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L11_:;
  // st x0 = xx2
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_xx2_, RHO);
  (void)(Rsh_Fir_reg_xx2_);
  // lines = ldf lines
  Rsh_Fir_reg_lines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

L12_:;
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L13_:;
  // r = dyn base(<sym y>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 1 [y1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `==`(y2, NULL)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L3(c)
  // L3(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L3_;

L15_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // sym2 = ldf dim
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base2 = ldf dim in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L17_:;
  // r2 = dyn base1(<lang dim(x)>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(c1, r2)
  // L5(c1, r2)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L5_;

L18_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D1()
  // L20()
  goto L20_;

L19_:;
  // r4 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(c1, r4)
  // L6(c1, r4)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L6_;

D1_:;
  // deopt 8 [c1, x1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r6 = dyn dim(x2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L21() else D2()
  // L21()
  goto L21_;

D2_:;
  // deopt 11 [c1, r6]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L6(c1, r6)
  // L6(c1, r6)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L6_;

D3_:;
  // deopt 13 [c9, r7]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L5(c9, r7)
  // L5(c9, r7)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r7_;
  goto L5_;

L24_:;
  // sym3 = ldf dimnames
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf dimnames in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

L26_:;
  // r9 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L8(r9)
  // L8(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L8_;

D4_:;
  // deopt 19 [x3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r11 = dyn dimnames(x4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

D5_:;
  // deopt 22 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L8(r11)
  // L8(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L8_;

L29_:;
  // dr = tryDispatchBuiltin.1("[[", r10)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc then L31() else L30(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr)
    Rsh_Fir_reg_r13_ = Rsh_Fir_reg_dr;
    goto L30_;
  }

L30_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r14 = dyn __(r13, 1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L9(r14)
  // L9(r14)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L9_;

L31_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L9(dx)
  // L9(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L9_;

D6_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p = prom<V +>{
  //   sym4 = ldf any;
  //   base4 = ldf any in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L3() else L4();
  // L0(r16):
  //   r24 = `!`(r16);
  //   return r24;
  // L3():
  //   sym5 = ldf `is.na`;
  //   base5 = ldf `is.na` in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L5() else L6();
  // L4():
  //   r15 = dyn base4(<lang is.na(`<-`(xx, as.numeric(nx)))>);
  //   goto L0(r15);
  // L1(r18):
  //   any = ldf any in base;
  //   r23 = dyn any(r18);
  //   goto L0(r23);
  // L5():
  //   sym6 = ldf `as.numeric`;
  //   base6 = ldf `as.numeric` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L7() else L8();
  // L6():
  //   r17 = dyn base5(<lang `<-`(xx, as.numeric(nx))>);
  //   goto L1(r17);
  // L2(r20):
  //   st xx = r20;
  //   is_na = ldf `is.na` in base;
  //   r22 = dyn is_na(r20);
  //   goto L1(r22);
  // L7():
  //   nx = ld nx;
  //   nx1 = force? nx;
  //   checkMissing(nx1);
  //   as_numeric = ldf `as.numeric` in base;
  //   r21 = dyn as_numeric(nx1);
  //   goto L2(r21);
  // L8():
  //   r19 = dyn base6(<sym nx>);
  //   goto L2(r19);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2311038814_, CCP, RHO);
  // r26 = dyn suppressWarnings(p)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_suppressWarnings, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

D7_:;
  // deopt 30 [r26]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // st `is.num` = r26
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // is_num = ld `is.num`
  Rsh_Fir_reg_is_num = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

D8_:;
  // deopt 32 [is_num]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_is_num;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L34_:;
  // is_num1 = force? is_num
  Rsh_Fir_reg_is_num1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is_num);
  // checkMissing(is_num1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_is_num1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c15 = `as.logical`(is_num1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_is_num1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c15 then L35() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L35()
    goto L35_;
  } else {
  // L10()
    goto L10_;
  }

L35_:;
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

D9_:;
  // deopt 34 [xx]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_xx;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // goto L11(xx1)
  // L11(xx1)
  Rsh_Fir_reg_xx2_ = Rsh_Fir_reg_xx1_;
  goto L11_;

L38_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

L39_:;
  // r27 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r27)
  // L11(r27)
  Rsh_Fir_reg_xx2_ = Rsh_Fir_reg_r27_;
  goto L11_;

D10_:;
  // deopt 37 [x5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L40_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r28 = seq_along(x6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_xx2_ = Rsh_Fir_reg_r28_;
  goto L11_;

D11_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p1 = prom<V +>{
  //   x7 = ld x0;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2311038814_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym8 = ldf unclass;
  //   base8 = ldf unclass in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r31):
  //   return r31;
  // L1():
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   unclass = ldf unclass in base;
  //   r32 = dyn unclass(x10);
  //   goto L0(r32);
  // L2():
  //   r30 = dyn base8(<sym x>);
  //   goto L0(r30);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2311038814_2, CCP, RHO);
  // p3 = prom<V +>{
  //   type1 = ld type;
  //   type2 = force? type1;
  //   checkMissing(type2);
  //   return type2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2311038814_3, CCP, RHO);
  // p4 = prom<V +>{
  //   lwd1 = ld lwd;
  //   lwd2 = force? lwd1;
  //   checkMissing(lwd2);
  //   return lwd2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2311038814_4, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // r36 = dyn lines[, , type, lwd, `...`](p1, p2, p3, p4, ddd1)
  SEXP Rsh_Fir_array_args54[5];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args54[3] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args54[4] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names18[5];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names18[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names18[4] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lines, 5, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

D12_:;
  // deopt 50 [r36]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L42_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r36
  return Rsh_Fir_reg_r36_;

D13_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // r37 = dyn stop("only for 1-D table")
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L45() else D14()
  // L45()
  goto L45_;

D14_:;
  // deopt 54 [r37]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L45_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_inner2311038814_(SEXP CCP, SEXP RHO) {
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard4 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // r24 = `!`(r16)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // return r24
  return Rsh_Fir_reg_r24_;

L1_:;
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r23 = dyn any(r18)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // st xx = r20
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r22 = dyn is_na(r20)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(r22)
  // L1(r22)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r22_;
  goto L1_;

L3_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard5 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r15 = dyn base4(<lang is.na(`<-`(xx, as.numeric(nx)))>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;

L5_:;
  // sym6 = ldf `as.numeric`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base6 = ldf `as.numeric` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard6 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // r17 = dyn base5(<lang `<-`(xx, as.numeric(nx))>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L1_;

L7_:;
  // nx = ld nx
  Rsh_Fir_reg_nx = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // nx1 = force? nx
  Rsh_Fir_reg_nx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nx);
  // checkMissing(nx1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_nx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r21 = dyn as_numeric(nx1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_nx1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r21)
  // L2(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L2_;

L8_:;
  // r19 = dyn base6(<sym nx>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L2(r19)
  // L2(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner2311038814_1(SEXP CCP, SEXP RHO) {
  // x7 = ld x0
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner2311038814_2(SEXP CCP, SEXP RHO) {
  // sym8 = ldf unclass
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base8 = ldf unclass in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r31
  return Rsh_Fir_reg_r31_;

L1_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r32 = dyn unclass(x10)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L0_;

L2_:;
  // r30 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2311038814_3(SEXP CCP, SEXP RHO) {
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return type2
  return Rsh_Fir_reg_type2_;
}
SEXP Rsh_Fir_user_promise_inner2311038814_4(SEXP CCP, SEXP RHO) {
  // lwd1 = ld lwd
  Rsh_Fir_reg_lwd1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // lwd2 = force? lwd1
  Rsh_Fir_reg_lwd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lwd1_);
  // checkMissing(lwd2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_lwd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return lwd2
  return Rsh_Fir_reg_lwd2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
