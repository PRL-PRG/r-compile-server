#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner736444261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner736444261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner736444261_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_4(SEXP CCP, SEXP RHO);
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
  // st `.factor` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st levels = r
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r, RHO);
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
  SEXP Rsh_Fir_reg_levels;  // levels
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_unlist;  // unlist
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_value9_;  // value9
  SEXP Rsh_Fir_reg_value10_;  // value10
  SEXP Rsh_Fir_reg_xlevs;  // xlevs
  SEXP Rsh_Fir_reg_xlevs1_;  // xlevs1
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_nlevs;  // nlevs
  SEXP Rsh_Fir_reg_nlevs1_;  // nlevs1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_nlevs3_;  // nlevs3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_xlevs2_;  // xlevs2
  SEXP Rsh_Fir_reg_xlevs3_;  // xlevs3
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_value11_;  // value11
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_value13_;  // value13
  SEXP Rsh_Fir_reg_value14_;  // value14
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_nlevs4_;  // nlevs4
  SEXP Rsh_Fir_reg_nlevs5_;  // nlevs5
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_nlevs7_;  // nlevs7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_nlevs10_;  // nlevs10
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_nlevs11_;  // nlevs11
  SEXP Rsh_Fir_reg_nlevs12_;  // nlevs12
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_nlevs13_;  // nlevs13
  SEXP Rsh_Fir_reg_nlevs14_;  // nlevs14
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_attributes;  // attributes
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_nlevs15_;  // nlevs15
  SEXP Rsh_Fir_reg_nlevs16_;  // nlevs16
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_nlevs18_;  // nlevs18
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_xlevs4_;  // xlevs4
  SEXP Rsh_Fir_reg_xlevs5_;  // xlevs5
  SEXP Rsh_Fir_reg_nlevs21_;  // nlevs21
  SEXP Rsh_Fir_reg_nlevs22_;  // nlevs22
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_at;  // at
  SEXP Rsh_Fir_reg_at1_;  // at1
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_attributes__;  // attributes__
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_value = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // levels = ldf levels
  Rsh_Fir_reg_levels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

L0_:;
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c then L24() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L24()
    goto L24_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard4 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L2_:;
  // st nlevs = r6
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

L3_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

L4_:;
  // st m = r17
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // nlevs = ld nlevs
  Rsh_Fir_reg_nlevs = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L41() else D14()
  // L41()
  goto L41_;

L5_:;
  // l = ld xlevs
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c2 then L46() else L47(dx1, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L46()
    goto L46_;
  } else {
  // L47(dx1, l)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L47_;
  }

L6_:;
  // st xlevs = dx7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L75() else D28()
  // L75()
  goto L75_;

L8_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard5 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L9_:;
  // r31 = `>`(r28, r29)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c3 then L59() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L59()
    goto L59_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym6 = ldf `as.character`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf `as.character` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard6 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L12_:;
  // st xlevs = r35
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // st nlevs = r35
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // nlevs4 = ld nlevs
  Rsh_Fir_reg_nlevs4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L67() else D25()
  // L67()
  goto L67_;

L13_:;
  // st nlevs = dx10
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // goto L7()
  // L7()
  goto L7_;

L14_:;
  // r40 = `!`(r38)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r41 = dyn __1(nlevs10, r40)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_nlevs10_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L13(r41)
  // L13(r41)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r41_;
  goto L13_;

L15_:;
  // st at = r45
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // nlevs15 = ld nlevs
  Rsh_Fir_reg_nlevs15_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L81() else D32()
  // L81()
  goto L81_;

L16_:;
  // c6 = `is.object`(r49)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c6 then L91() else L92(r49)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L91()
    goto L91_;
  } else {
  // L92(r49)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r49_;
    goto L92_;
  }

L17_:;
  // st y = dx14
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx14_, RHO);
  (void)(Rsh_Fir_reg_dx14_);
  // at = ld at
  Rsh_Fir_reg_at = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L95() else D37()
  // L95()
  goto L95_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_, CCP, RHO);
  // r1 = dyn levels(p)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L19_:;
  // st xlevs = r1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `is.list`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf `is.list` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L21_:;
  // r2 = dyn base(<sym value>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 7 [value1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L22_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r4 = dyn is_list(value2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

D3_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L24_:;
  // sym1 = ldf `rep.int`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf `rep.int` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L26_:;
  // r5 = dyn base1(<lang names(value)>, <lang lapply(value, length)>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

L27_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L28_:;
  // r7 = dyn base2(<sym value>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D4_:;
  // deopt 15 [value3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r9 = dyn names(value4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L3_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p1 = prom<V +>{
  //   value5 = ld value;
  //   value6 = force? value5;
  //   checkMissing(value6);
  //   return value6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_1, CCP, RHO);
  // p2 = prom<V +>{
  //   length = ld length;
  //   length1 = force? length;
  //   checkMissing(length1);
  //   return length1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_2, CCP, RHO);
  // r12 = dyn lapply(p1, p2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

D7_:;
  // deopt 23 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r13 = dyn rep_int(r8, r12)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

D8_:;
  // deopt 25 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r13_;
  goto L2_;

D9_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p3 = prom<V +>{
  //   value7 = ld value;
  //   value8 = force? value7;
  //   checkMissing(value8);
  //   return value8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_3, CCP, RHO);
  // r15 = dyn unlist(p3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

D10_:;
  // deopt 30 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // st value = r15
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym3 = ldf match
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf match in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard3 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // value9 = ld value
  Rsh_Fir_reg_value9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

L37_:;
  // r16 = dyn base3[, , nomatch](<sym value>, <sym xlevs>, 0)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L4_;

D11_:;
  // deopt 34 [value9]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_value9_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // value10 = force? value9
  Rsh_Fir_reg_value10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value9_);
  // checkMissing(value10)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_value10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // xlevs = ld xlevs
  Rsh_Fir_reg_xlevs = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

D12_:;
  // deopt 36 [xlevs]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_xlevs;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // xlevs1 = force? xlevs
  Rsh_Fir_reg_xlevs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlevs);
  // checkMissing(xlevs1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_xlevs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r18 = dyn match(value10, xlevs1, 0, NULL)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_value10_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_xlevs1_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

D13_:;
  // deopt 41 [r18]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L4(r18)
  // L4(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L4_;

D14_:;
  // deopt 43 [nlevs]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_nlevs;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L41_:;
  // nlevs1 = force? nlevs
  Rsh_Fir_reg_nlevs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlevs);
  // checkMissing(nlevs1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_nlevs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(nlevs1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_nlevs1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c1 then L42() else L43(nlevs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L42()
    goto L42_;
  } else {
  // L43(nlevs1)
    Rsh_Fir_reg_nlevs3_ = Rsh_Fir_reg_nlevs1_;
    goto L43_;
  }

L42_:;
  // dr = tryDispatchBuiltin.1("[", nlevs1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_nlevs1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L44() else L43(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L44()
    goto L44_;
  } else {
  // L43(dr)
    Rsh_Fir_reg_nlevs3_ = Rsh_Fir_reg_dr;
    goto L43_;
  }

L43_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L45() else D15()
  // L45()
  goto L45_;

L44_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D15_:;
  // deopt 45 [nlevs3, m]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_nlevs3_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L45_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r19 = `>`(m1, 0)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r20 = dyn __(nlevs3, r19)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_nlevs3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L5(r20)
  // L5(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L5_;

L46_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, dx1)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args41);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc1 then L48() else L47(dx1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L48()
    goto L48_;
  } else {
  // L47(dx1, dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L47_;
  }

L47_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L49() else D16()
  // L49()
  goto L49_;

L48_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L6(dx1, dx5)
  // L6(dx1, dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
  goto L6_;

D16_:;
  // deopt 51 [dx3, l2, dx1, m2]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(51, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L49_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r21 = dyn ___(l2, dx1, m3)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args44[2] = Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6(dx3, r21)
  // L6(dx3, r21)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r21_;
  goto L6_;

L51_:;
  // xlevs2 = ld xlevs
  Rsh_Fir_reg_xlevs2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L53() else D17()
  // L53()
  goto L53_;

L52_:;
  // r22 = dyn base4(<sym xlevs>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L8_;

D17_:;
  // deopt 57 [xlevs2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_xlevs2_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // xlevs3 = force? xlevs2
  Rsh_Fir_reg_xlevs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlevs2_);
  // checkMissing(xlevs3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_xlevs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r24 = dyn length2(xlevs3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_xlevs3_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L54() else D18()
  // L54()
  goto L54_;

D18_:;
  // deopt 60 [r24]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L8(r24)
  // L8(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L8_;

L55_:;
  // value11 = ld value
  Rsh_Fir_reg_value11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L57() else D19()
  // L57()
  goto L57_;

L56_:;
  // r27 = dyn base5(<sym value>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L9(r23, r27)
  // L9(r23, r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r27_;
  goto L9_;

D19_:;
  // deopt 62 [r23, value11]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_value11_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L57_:;
  // value12 = force? value11
  Rsh_Fir_reg_value12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value11_);
  // checkMissing(value12)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_value12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r30 = dyn length3(value12)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_value12_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L58() else D20()
  // L58()
  goto L58_;

D20_:;
  // deopt 65 [r23, r30]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L9(r23, r30)
  // L9(r23, r30)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L9_;

L59_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L60() else D21()
  // L60()
  goto L60_;

D21_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // r32 = dyn stop("number of levels differs")
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L61() else D22()
  // L61()
  goto L61_;

D22_:;
  // deopt 70 [r32]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L11()
  // L11()
  goto L11_;

L63_:;
  // value13 = ld value
  Rsh_Fir_reg_value13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L65() else D23()
  // L65()
  goto L65_;

L64_:;
  // r34 = dyn base6(<sym value>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r34)
  // L12(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L12_;

D23_:;
  // deopt 75 [value13]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_value13_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L65_:;
  // value14 = force? value13
  Rsh_Fir_reg_value14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value13_);
  // checkMissing(value14)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_value14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r36 = dyn as_character(value14)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_value14_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L66() else D24()
  // L66()
  goto L66_;

D24_:;
  // deopt 78 [r36]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L12(r36)
  // L12(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L12_;

D25_:;
  // deopt 81 [nlevs4]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_nlevs4_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L67_:;
  // nlevs5 = force? nlevs4
  Rsh_Fir_reg_nlevs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlevs4_);
  // checkMissing(nlevs5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_nlevs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(nlevs5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_nlevs5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c4 then L68() else L69(nlevs5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L68()
    goto L68_;
  } else {
  // L69(nlevs5)
    Rsh_Fir_reg_nlevs7_ = Rsh_Fir_reg_nlevs5_;
    goto L69_;
  }

L68_:;
  // dr4 = tryDispatchBuiltin.1("[", nlevs5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_nlevs5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc2 then L70() else L69(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L70()
    goto L70_;
  } else {
  // L69(dr4)
    Rsh_Fir_reg_nlevs7_ = Rsh_Fir_reg_dr4_;
    goto L69_;
  }

L69_:;
  // sym7 = ldf `is.na`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base7 = ldf `is.na` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard7 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L70_:;
  // dx9 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L13(dx9)
  // L13(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L13_;

L71_:;
  // nlevs11 = ld nlevs
  Rsh_Fir_reg_nlevs11_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L73() else D26()
  // L73()
  goto L73_;

L72_:;
  // r37 = dyn base7(<sym nlevs>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L14(nlevs7, r37)
  // L14(nlevs7, r37)
  Rsh_Fir_reg_nlevs10_ = Rsh_Fir_reg_nlevs7_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L14_;

D26_:;
  // deopt 85 [nlevs7, nlevs11]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_nlevs7_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_nlevs11_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L73_:;
  // nlevs12 = force? nlevs11
  Rsh_Fir_reg_nlevs12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlevs11_);
  // checkMissing(nlevs12)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_nlevs12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r39 = dyn is_na(nlevs12)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_nlevs12_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L74() else D27()
  // L74()
  goto L74_;

D27_:;
  // deopt 88 [nlevs7, r39]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_nlevs7_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L14(nlevs7, r39)
  // L14(nlevs7, r39)
  Rsh_Fir_reg_nlevs10_ = Rsh_Fir_reg_nlevs7_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L14_;

D28_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p4 = prom<V +>{
  //   nlevs13 = ld nlevs;
  //   nlevs14 = force? nlevs13;
  //   checkMissing(nlevs14);
  //   return nlevs14;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_4, CCP, RHO);
  // r43 = dyn unique(p4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L76() else D29()
  // L76()
  goto L76_;

D29_:;
  // deopt 95 [r43]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L76_:;
  // st nlevs = r43
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym8 = ldf attributes
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base8 = ldf attributes in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard8 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L77_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L79() else D30()
  // L79()
  goto L79_;

L78_:;
  // r44 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L15(r44)
  // L15(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L15_;

D30_:;
  // deopt 99 [x3]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L79_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r46 = dyn attributes(x4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L80() else D31()
  // L80()
  goto L80_;

D31_:;
  // deopt 102 [r46]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L15(r46)
  // L15(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L15_;

D32_:;
  // deopt 104 [nlevs15]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_nlevs15_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L81_:;
  // nlevs16 = force? nlevs15
  Rsh_Fir_reg_nlevs16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlevs15_);
  // checkMissing(nlevs16)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_nlevs16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // l3 = ld at
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c5 = `is.object`(l3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c5 then L83() else L84(nlevs16, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L83()
    goto L83_;
  } else {
  // L84(nlevs16, l3)
    Rsh_Fir_reg_nlevs18_ = Rsh_Fir_reg_nlevs16_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L84_;
  }

L82_:;
  // st at = dx12
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx12_, RHO);
  (void)(Rsh_Fir_reg_dx12_);
  // sym9 = ldf match
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base9 = ldf match in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard9 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L83_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l3, nlevs16)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_nlevs16_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args73);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc3 then L85() else L84(nlevs16, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L85()
    goto L85_;
  } else {
  // L84(nlevs16, dr6)
    Rsh_Fir_reg_nlevs18_ = Rsh_Fir_reg_nlevs16_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L84_;
  }

L84_:;
  // r47 = `$<-`(l5, <sym levels>, nlevs16)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_nlevs16_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L82(r47)
  // L82(r47)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r47_;
  goto L82_;

L85_:;
  // dx11 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L82(dx11)
  // L82(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L82_;

L86_:;
  // xlevs4 = ld xlevs
  Rsh_Fir_reg_xlevs4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L88() else D33()
  // L88()
  goto L88_;

L87_:;
  // r48 = dyn base9(<sym xlevs>, <sym nlevs>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L16(r48)
  // L16(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L16_;

D33_:;
  // deopt 111 [xlevs4]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_xlevs4_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L88_:;
  // xlevs5 = force? xlevs4
  Rsh_Fir_reg_xlevs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlevs4_);
  // checkMissing(xlevs5)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_xlevs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // nlevs21 = ld nlevs
  Rsh_Fir_reg_nlevs21_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L89() else D34()
  // L89()
  goto L89_;

D34_:;
  // deopt 113 [nlevs21]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_nlevs21_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L89_:;
  // nlevs22 = force? nlevs21
  Rsh_Fir_reg_nlevs22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlevs21_);
  // checkMissing(nlevs22)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_nlevs22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r50 = dyn match1(xlevs5, nlevs22, NA_INT, NULL)
  SEXP Rsh_Fir_array_args80[4];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_xlevs5_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_nlevs22_;
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args80[3] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L90() else D35()
  // L90()
  goto L90_;

D35_:;
  // deopt 118 [r50]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L16(r50)
  // L16(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L16_;

L91_:;
  // dr8 = tryDispatchBuiltin.1("[", r49)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args81);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc4 then L93() else L92(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L93()
    goto L93_;
  } else {
  // L92(dr8)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_dr8_;
    goto L92_;
  }

L92_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L94() else D36()
  // L94()
  goto L94_;

L93_:;
  // dx13 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L17(dx13)
  // L17(dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L17_;

D36_:;
  // deopt 119 [r52, x5]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L94_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r53 = dyn __2(r52, x6)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L17(r53)
  // L17(r53)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r53_;
  goto L17_;

D37_:;
  // deopt 123 [at]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_at;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L95_:;
  // at1 = force? at
  Rsh_Fir_reg_at1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at);
  // checkMissing(at1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_at1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // l6 = ld y
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // attributes__ = ldf `attributes<-`
  Rsh_Fir_reg_attributes__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L96() else D38()
  // L96()
  goto L96_;

D38_:;
  // deopt 126 [at1, l6, at1]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_at1_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_at1_;
  Rsh_Fir_deopt(126, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L96_:;
  // r54 = dyn attributes__(l6, NULL, at1)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_at1_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes__, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L97() else D39()
  // L97()
  goto L97_;

D39_:;
  // deopt 128 [at1, r54]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_at1_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(128, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L97_:;
  // st y = r54
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L98() else D40()
  // L98()
  goto L98_;

D40_:;
  // deopt 130 [y]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L98_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_inner736444261_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner736444261_1(SEXP CCP, SEXP RHO) {
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return value6
  return Rsh_Fir_reg_value6_;
}
SEXP Rsh_Fir_user_promise_inner736444261_2(SEXP CCP, SEXP RHO) {
  // length = ld length
  Rsh_Fir_reg_length = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // length1 = force? length
  Rsh_Fir_reg_length1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length);
  // checkMissing(length1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_length1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return length1
  return Rsh_Fir_reg_length1_;
}
SEXP Rsh_Fir_user_promise_inner736444261_3(SEXP CCP, SEXP RHO) {
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return value8
  return Rsh_Fir_reg_value8_;
}
SEXP Rsh_Fir_user_promise_inner736444261_4(SEXP CCP, SEXP RHO) {
  // nlevs13 = ld nlevs
  Rsh_Fir_reg_nlevs13_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // nlevs14 = force? nlevs13
  Rsh_Fir_reg_nlevs14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nlevs13_);
  // checkMissing(nlevs14)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_nlevs14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return nlevs14
  return Rsh_Fir_reg_nlevs14_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
