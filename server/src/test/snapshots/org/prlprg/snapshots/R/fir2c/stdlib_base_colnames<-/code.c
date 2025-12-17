#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner736444261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner736444261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner736444261_(SEXP CCP, SEXP RHO);
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
  // r = clos inner736444261
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner736444261_, RHO, CCP);
  // st `colnames<-` = r
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
SEXP Rsh_Fir_user_function_inner736444261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner736444261 dynamic dispatch ([x, value])

  return Rsh_Fir_user_version_inner736444261_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner736444261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner736444261 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner736444261/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_is_data_frame;  // is_data_frame
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dn;  // dn
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_nd;  // nd
  SEXP Rsh_Fir_reg_nd1_;  // nd1
  SEXP Rsh_Fir_reg_vector;  // vector
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_dn2_;  // dn2
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_value9_;  // value9
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_value11_;  // value11
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_value13_;  // value13
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_dn4_;  // dn4
  SEXP Rsh_Fir_reg_dn5_;  // dn5
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_value = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L0_:;
  // sym = ldf dimnames
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf dimnames in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L1_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L87() else D27()
  // L87()
  goto L87_;

L2_:;
  // st dn = r4
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L3_:;
  // c2 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c2 then L37() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L37()
    goto L37_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L13()
  // L13()
  goto L13_;

L5_:;
  // c4 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c4 then L41() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L41()
    goto L41_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L8_:;
  // st nd = r13
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // r18 = `<`(r13, 2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c5 then L52() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L52()
    goto L52_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r17 = dyn length(r15)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L51() else D12()
  // L51()
  goto L51_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym5 = ldf vector
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base5 = ldf vector in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard5 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L12_:;
  // st dn = r22
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard6 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L14_:;
  // r28 = `<`(r26, 2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c6 then L65() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L65()
    goto L65_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard7 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L17_:;
  // c8 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c8 then L72() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L72()
    goto L72_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // value8 = ld value
  Rsh_Fir_reg_value8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L80() else D23()
  // L80()
  goto L80_;

L19_:;
  // l1 = ld dn
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c9 = `is.object`(l1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c9 then L76() else L77(r34, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L76()
    goto L76_;
  } else {
  // L77(r34, l1)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L77_;
  }

L20_:;
  // st dn = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // dn4 = ld dn
  Rsh_Fir_reg_dn4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L84() else D24()
  // L84()
  goto L84_;

L22_:;
  // st dn = dx3
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L21()
  // L21()
  goto L21_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_, CCP, RHO);
  // r1 = dyn is_data_frame(p)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L24_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c then L25() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L25()
    goto L25_;
  } else {
  // L0()
    goto L0_;
  }

L25_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

D2_:;
  // deopt 4 [value1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L26_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 7 [value2, l, value2]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_value2_;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L27_:;
  // r2 = dyn names__(l, NULL, value2)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

D4_:;
  // deopt 9 [value2, r2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // st x = r2
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // goto L1()
  // L1()
  goto L1_;

L30_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

L31_:;
  // r3 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D5_:;
  // deopt 13 [x3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L32_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r5 = dyn dimnames(x4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

D6_:;
  // deopt 16 [r5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

L34_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

L35_:;
  // r6 = dyn base1(<sym dn>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D7_:;
  // deopt 19 [dn]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c1 = `==`(dn1, NULL)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L3(c1)
  // L3(c1)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c1_;
  goto L3_;

L37_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // value4 = ld value
  Rsh_Fir_reg_value4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

L39_:;
  // r8 = dyn base2(<sym value>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L5_;

D8_:;
  // deopt 23 [value4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // value5 = force? value4
  Rsh_Fir_reg_value5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value4_);
  // checkMissing(value5)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_value5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c3 = `==`(value5, NULL)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_value5_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L5(c3)
  // L5(c3)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c3_;
  goto L5_;

L41_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

D9_:;
  // deopt 26 [x5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L42_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x6
  return Rsh_Fir_reg_x6_;

L45_:;
  // sym4 = ldf dim
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base4 = ldf dim in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard4 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L46_:;
  // r12 = dyn base3(<lang dim(x)>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L8(r12)
  // L8(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L8_;

L47_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D10()
  // L49()
  goto L49_;

L48_:;
  // r14 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(r14)
  // L9(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L9_;

D10_:;
  // deopt 35 [x7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r16 = dyn dim(x8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L50() else D11()
  // L50()
  goto L50_;

D11_:;
  // deopt 38 [r16]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L9(r16)
  // L9(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L9_;

D12_:;
  // deopt 40 [r17]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r17_;
  goto L8_;

L52_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

D13_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // r19 = dyn stop("attempt to set 'colnames' on an object with less than two dimensions")
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

D14_:;
  // deopt 47 [r19]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L11()
  // L11()
  goto L11_;

L56_:;
  // nd = ld nd
  Rsh_Fir_reg_nd = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

L57_:;
  // r21 = dyn base5("list", <sym nd>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L12(r21)
  // L12(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L12_;

D15_:;
  // deopt 53 [nd]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_nd;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L58_:;
  // nd1 = force? nd
  Rsh_Fir_reg_nd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nd);
  // checkMissing(nd1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_nd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r23 = dyn vector("list", nd1)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_nd1_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

D16_:;
  // deopt 56 [r23]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L12_;

L61_:;
  // dn2 = ld dn
  Rsh_Fir_reg_dn2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L63() else D17()
  // L63()
  goto L63_;

L62_:;
  // r25 = dyn base6(<sym dn>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L14(r25)
  // L14(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L14_;

D17_:;
  // deopt 62 [dn2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_dn2_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L63_:;
  // dn3 = force? dn2
  Rsh_Fir_reg_dn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn2_);
  // checkMissing(dn3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r27 = dyn length1(dn3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dn3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L64() else D18()
  // L64()
  goto L64_;

D18_:;
  // deopt 65 [r27]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L14(r27)
  // L14(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L14_;

L65_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L66() else D19()
  // L66()
  goto L66_;

D19_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // r29 = dyn stop1("attempt to set 'colnames' on an object with less than two dimensions")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L67() else D20()
  // L67()
  goto L67_;

D20_:;
  // deopt 71 [r29]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L16()
  // L16()
  goto L16_;

L69_:;
  // value6 = ld value
  Rsh_Fir_reg_value6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L71() else D21()
  // L71()
  goto L71_;

L70_:;
  // r31 = dyn base7(<sym value>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L17(r31)
  // L17(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L17_;

D21_:;
  // deopt 75 [value6]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_value6_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L71_:;
  // value7 = force? value6
  Rsh_Fir_reg_value7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value6_);
  // checkMissing(value7)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_value7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c7 = `==`(value7, NULL)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_value7_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L17(c7)
  // L17(c7)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_c7_;
  goto L17_;

L72_:;
  // sym8 = ldf list
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base8 = ldf list in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard8 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L73_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r35 = dyn list(NULL)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L75() else D22()
  // L75()
  goto L75_;

L74_:;
  // r33 = dyn base8(NULL)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L19(r33)
  // L19(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L19_;

D22_:;
  // deopt 82 [r35]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L19(r35)
  // L19(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L19_;

L76_:;
  // dr = tryDispatchBuiltin.0("[<-", l1, r34)
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args50[2] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args50);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc then L78() else L77(r34, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L78()
    goto L78_;
  } else {
  // L77(r34, dr)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L77_;
  }

L77_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r40 = dyn ___(l3, r34, 2)
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L20(r37, r40)
  // L20(r37, r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r40_;
  goto L20_;

L78_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L20(r34, dx)
  // L20(r34, dx)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L20_;

D23_:;
  // deopt 88 [value8]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_value8_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L80_:;
  // value9 = force? value8
  Rsh_Fir_reg_value9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value8_);
  // checkMissing(value9)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_value9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // l4 = ld dn
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c10 = `is.object`(l4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c10 then L81() else L82(value9, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L81()
    goto L81_;
  } else {
  // L82(value9, l4)
    Rsh_Fir_reg_value11_ = Rsh_Fir_reg_value9_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L82_;
  }

L81_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l4, value9)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_value9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args56);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc1 then L83() else L82(value9, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L83()
    goto L83_;
  } else {
  // L82(value9, dr2)
    Rsh_Fir_reg_value11_ = Rsh_Fir_reg_value9_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr2_;
    goto L82_;
  }

L82_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r42 = dyn ____(l6, value9, 2)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_value9_;
  Rsh_Fir_array_args58[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L22(value11, r42)
  // L22(value11, r42)
  Rsh_Fir_reg_value13_ = Rsh_Fir_reg_value11_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r42_;
  goto L22_;

L83_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L22(value9, dx2)
  // L22(value9, dx2)
  Rsh_Fir_reg_value13_ = Rsh_Fir_reg_value9_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L22_;

D24_:;
  // deopt 95 [dn4]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_dn4_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L84_:;
  // dn5 = force? dn4
  Rsh_Fir_reg_dn5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn4_);
  // checkMissing(dn5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dn5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // l7 = ld x
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L85() else D25()
  // L85()
  goto L85_;

D25_:;
  // deopt 98 [dn5, l7, dn5]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_deopt(98, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L85_:;
  // r43 = dyn dimnames__(l7, NULL, dn5)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_dn5_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L86() else D26()
  // L86()
  goto L86_;

D26_:;
  // deopt 100 [dn5, r43]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L86_:;
  // st x = r43
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // goto L1()
  // L1()
  goto L1_;

D27_:;
  // deopt 102 [x9]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L87_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner736444261_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
