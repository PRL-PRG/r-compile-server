#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner736444261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner736444261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // st `.data.frame` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st dimnames = r
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
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_value9_;  // value9
  SEXP Rsh_Fir_reg_value10_;  // value10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_as_character1_;  // as_character1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_value13_;  // value13
  SEXP Rsh_Fir_reg_value14_;  // value14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_value16_;  // value16
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_d4_;  // d4
  SEXP Rsh_Fir_reg_d5_;  // d5
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_d7_;  // d7
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_value17_;  // value17
  SEXP Rsh_Fir_reg_value18_;  // value18
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_value20_;  // value20
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_value21_;  // value21
  SEXP Rsh_Fir_reg_value22_;  // value22
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_value24_;  // value24
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_row_names__;  // row_names__
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_value25_;  // value25
  SEXP Rsh_Fir_reg_value26_;  // value26
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_value28_;  // value28
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4

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
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L0_:;
  // st d = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf `is.list`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf `is.list` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L1_:;
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L2(c) else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L2_;
  } else {
  // L31()
    goto L31_;
  }

L2_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c9 then L37() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L37()
    goto L37_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // r10 = `!=`(r8, 2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L2(c7)
  // L2(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L2_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym3 = ldf `as.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf `as.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard3 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L6_:;
  // l = ld value
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // c11 = `is.object`(l)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c11 then L48() else L49(r14, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L48()
    goto L48_;
  } else {
  // L49(r14, l)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r14_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L49_;
  }

L7_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r16 = dyn as_character(dx1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L47() else D9()
  // L47()
  goto L47_;

L8_:;
  // st value = dx3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym4 = ldf `as.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf `as.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard4 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L9_:;
  // l3 = ld value
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // c13 = `is.object`(l3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c13 then L58() else L59(r23, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L58()
    goto L58_;
  } else {
  // L59(r23, l3)
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L59_;
  }

L10_:;
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r25 = dyn as_character1(dx5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L57() else D11()
  // L57()
  goto L57_;

L11_:;
  // st value = dx7
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L61() else D12()
  // L61()
  goto L61_;

L12_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard5 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L13_:;
  // r36 = `!=`(dx12, r33)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c16 then L15(c16) else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L15(c16)
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c16_;
    goto L15_;
  } else {
  // L72()
    goto L72_;
  }

L14_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r35 = dyn length1(dx18)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L71() else D14()
  // L71()
  goto L71_;

L15_:;
  // c35 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c35 then L85() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L85()
    goto L85_;
  } else {
  // L19()
    goto L19_;
  }

L16_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard6 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L17_:;
  // r42 = `!=`(dx23, r39)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c32 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c33 = `||`(c26, c32)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L15(c33)
  // L15(c33)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c33_;
  goto L15_;

L18_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r41 = dyn length2(dx29)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L83() else D17()
  // L83()
  goto L83_;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // value21 = ld value
  Rsh_Fir_reg_value21_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L89() else D20()
  // L89()
  goto L89_;

L21_:;
  // l6 = ld x
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // row_names__ = ldf `row.names<-`
  Rsh_Fir_reg_row_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L93() else D21()
  // L93()
  goto L93_;

L22_:;
  // l7 = ld x
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L99() else D24()
  // L99()
  goto L99_;

L23_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D0()
  // L25()
  goto L25_;

L24_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L25_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn dim(x2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L26() else D1()
  // L26()
  goto L26_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L27_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

L28_:;
  // r3 = dyn base1(<sym value>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [value1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L29_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r5 = dyn is_list(value2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L31_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L32_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

L33_:;
  // r7 = dyn base2(<sym value>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(c, r7)
  // L3(c, r7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D4_:;
  // deopt 16 [c, value3]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L34_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r9 = dyn length(value4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L35() else D5()
  // L35()
  goto L35_;

D5_:;
  // deopt 19 [c, r9]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L3(c, r9)
  // L3(c, r9)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L3_;

L37_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // r11 = dyn stop("invalid 'dimnames' given for data frame")
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

D7_:;
  // deopt 26 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L5()
  // L5()
  goto L5_;

L41_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

L42_:;
  // r13 = dyn base3(<lang `[[`(value, 1)>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L6_;

D8_:;
  // deopt 31 [value5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_value5_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L43_:;
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(value6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_value6_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c10 then L44() else L45(value6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L44()
    goto L44_;
  } else {
  // L45(value6)
    Rsh_Fir_reg_value8_ = Rsh_Fir_reg_value6_;
    goto L45_;
  }

L44_:;
  // dr = tryDispatchBuiltin.1("[[", value6)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_value6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L46() else L45(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr)
    Rsh_Fir_reg_value8_ = Rsh_Fir_reg_dr;
    goto L45_;
  }

L45_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r15 = dyn __(value8, 1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_value8_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r15_;
  goto L7_;

L46_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L7(dx)
  // L7(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D9_:;
  // deopt 37 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r16_;
  goto L6_;

L48_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l, r14)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args42);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc1 then L50() else L49(r14, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L50()
    goto L50_;
  } else {
  // L49(r14, dr2)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r14_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L49_;
  }

L49_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r21 = dyn ____(l2, r14, 1)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r21_;
  goto L8_;

L50_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L8(dx2)
  // L8(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L51_:;
  // value9 = ld value
  Rsh_Fir_reg_value9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L53() else D10()
  // L53()
  goto L53_;

L52_:;
  // r22 = dyn base4(<lang `[[`(value, 2)>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(r22)
  // L9(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L9_;

D10_:;
  // deopt 45 [value9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_value9_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L53_:;
  // value10 = force? value9
  Rsh_Fir_reg_value10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value9_);
  // checkMissing(value10)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_value10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(value10)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_value10_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c12 then L54() else L55(value10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L54()
    goto L54_;
  } else {
  // L55(value10)
    Rsh_Fir_reg_value12_ = Rsh_Fir_reg_value10_;
    goto L55_;
  }

L54_:;
  // dr4 = tryDispatchBuiltin.1("[[", value10)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_value10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc2 then L56() else L55(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L56()
    goto L56_;
  } else {
  // L55(dr4)
    Rsh_Fir_reg_value12_ = Rsh_Fir_reg_dr4_;
    goto L55_;
  }

L55_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r24 = dyn __1(value12, 2)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_value12_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r24_;
  goto L10_;

L56_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L10(dx4)
  // L10(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

D11_:;
  // deopt 51 [r25]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L9_;

L58_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l3, r23)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args53[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args53);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc3 then L60() else L59(r23, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L60()
    goto L60_;
  } else {
  // L59(r23, dr6)
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L59_;
  }

L59_:;
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r30 = dyn ____1(l5, r23, 2)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args55[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(r30)
  // L11(r30)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r30_;
  goto L11_;

L60_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L11(dx6)
  // L11(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L11_;

D12_:;
  // deopt 57 [d]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L61_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(d1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c14 then L62() else L63(d1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L62()
    goto L62_;
  } else {
  // L63(d1)
    Rsh_Fir_reg_d3_ = Rsh_Fir_reg_d1_;
    goto L63_;
  }

L62_:;
  // dr8 = tryDispatchBuiltin.1("[[", d1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc4 then L64() else L63(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L64()
    goto L64_;
  } else {
  // L63(dr8)
    Rsh_Fir_reg_d3_ = Rsh_Fir_reg_dr8_;
    goto L63_;
  }

L63_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r31 = dyn __2(d3, 1)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L12(r31)
  // L12(r31)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r31_;
  goto L12_;

L64_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L12(dx8)
  // L12(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L12_;

L65_:;
  // value13 = ld value
  Rsh_Fir_reg_value13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L67() else D13()
  // L67()
  goto L67_;

L66_:;
  // r32 = dyn base5(<lang `[[`(value, 1)>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L13(dx9, r32)
  // L13(dx9, r32)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L13_;

D13_:;
  // deopt 63 [dx9, value13]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_value13_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L67_:;
  // value14 = force? value13
  Rsh_Fir_reg_value14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value13_);
  // checkMissing(value14)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_value14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(value14)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_value14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c15 then L68() else L69(dx9, value14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L68()
    goto L68_;
  } else {
  // L69(dx9, value14)
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_value16_ = Rsh_Fir_reg_value14_;
    goto L69_;
  }

L68_:;
  // dr10 = tryDispatchBuiltin.1("[[", value14)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_value14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc5 then L70() else L69(dx9, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L70()
    goto L70_;
  } else {
  // L69(dx9, dr10)
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_value16_ = Rsh_Fir_reg_dr10_;
    goto L69_;
  }

L69_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r34 = dyn __3(value16, 1)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_value16_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L14(dx14, r34)
  // L14(dx14, r34)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r34_;
  goto L14_;

L70_:;
  // dx16 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L14(dx9, dx16)
  // L14(dx9, dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx16_;
  goto L14_;

D14_:;
  // deopt 69 [dx17, r35]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L13(dx17, r35)
  // L13(dx17, r35)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r35_;
  goto L13_;

L72_:;
  // d4 = ld d
  Rsh_Fir_reg_d4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L73() else D15()
  // L73()
  goto L73_;

D15_:;
  // deopt 71 [c16, d4]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_d4_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L73_:;
  // d5 = force? d4
  Rsh_Fir_reg_d5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_d5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(d5)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c19 then L74() else L75(c16, d5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L74()
    goto L74_;
  } else {
  // L75(c16, d5)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c16_;
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_d5_;
    goto L75_;
  }

L74_:;
  // dr12 = tryDispatchBuiltin.1("[[", d5)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc6 then L76() else L75(c16, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L76()
    goto L76_;
  } else {
  // L75(c16, dr12)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c16_;
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_dr12_;
    goto L75_;
  }

L75_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r37 = dyn __4(d7, 2)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L16(c21, r37)
  // L16(c21, r37)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r37_;
  goto L16_;

L76_:;
  // dx19 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L16(c16, dx19)
  // L16(c16, dx19)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L16_;

L77_:;
  // value17 = ld value
  Rsh_Fir_reg_value17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L79() else D16()
  // L79()
  goto L79_;

L78_:;
  // r38 = dyn base6(<lang `[[`(value, 2)>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L17(c23, dx20, r38)
  // L17(c23, dx20, r38)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L17_;

D16_:;
  // deopt 77 [c23, dx20, value17]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_value17_;
  Rsh_Fir_deopt(77, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L79_:;
  // value18 = force? value17
  Rsh_Fir_reg_value18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value17_);
  // checkMissing(value18)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_value18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(value18)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_value18_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c27 then L80() else L81(c23, dx20, value18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L80()
    goto L80_;
  } else {
  // L81(c23, dx20, value18)
    Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx20_;
    Rsh_Fir_reg_value20_ = Rsh_Fir_reg_value18_;
    goto L81_;
  }

L80_:;
  // dr14 = tryDispatchBuiltin.1("[[", value18)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_value18_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc7 then L82() else L81(c23, dx20, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L82()
    goto L82_;
  } else {
  // L81(c23, dx20, dr14)
    Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c23_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx20_;
    Rsh_Fir_reg_value20_ = Rsh_Fir_reg_dr14_;
    goto L81_;
  }

L81_:;
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r40 = dyn __5(value20, 2)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_value20_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L18(c29, dx25, r40)
  // L18(c29, dx25, r40)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r40_;
  goto L18_;

L82_:;
  // dx27 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L18(c23, dx20, dx27)
  // L18(c23, dx20, dx27)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
  goto L18_;

D17_:;
  // deopt 83 [c31, dx28, r41]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_dx28_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(83, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L17(c31, dx28, r41)
  // L17(c31, dx28, r41)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx28_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r41_;
  goto L17_;

L85_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L86() else D18()
  // L86()
  goto L86_;

D18_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L86_:;
  // r43 = dyn stop1("invalid 'dimnames' given for data frame")
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L87() else D19()
  // L87()
  goto L87_;

D19_:;
  // deopt 89 [r43]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L20()
  // L20()
  goto L20_;

D20_:;
  // deopt 92 [value21]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_value21_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L89_:;
  // value22 = force? value21
  Rsh_Fir_reg_value22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value21_);
  // checkMissing(value22)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_value22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(value22)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c36 then L90() else L91(value22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L90()
    goto L90_;
  } else {
  // L91(value22)
    Rsh_Fir_reg_value24_ = Rsh_Fir_reg_value22_;
    goto L91_;
  }

L90_:;
  // dr16 = tryDispatchBuiltin.1("[[", value22)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc8 then L92() else L91(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L92()
    goto L92_;
  } else {
  // L91(dr16)
    Rsh_Fir_reg_value24_ = Rsh_Fir_reg_dr16_;
    goto L91_;
  }

L91_:;
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r45 = dyn __6(value24, 1)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_value24_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L21(r45)
  // L21(r45)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r45_;
  goto L21_;

L92_:;
  // dx30 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L21(dx30)
  // L21(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L21_;

D21_:;
  // deopt 98 [dx31, l6, dx31]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_deopt(98, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L93_:;
  // r46 = dyn row_names__(l6, NULL, dx31)
  SEXP Rsh_Fir_array_args90[3];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args90[2] = Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row_names__, 3, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L94() else D22()
  // L94()
  goto L94_;

D22_:;
  // deopt 100 [dx31, r46]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L94_:;
  // st x = r46
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // value25 = ld value
  Rsh_Fir_reg_value25_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L95() else D23()
  // L95()
  goto L95_;

D23_:;
  // deopt 102 [value25]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_value25_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L95_:;
  // value26 = force? value25
  Rsh_Fir_reg_value26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value25_);
  // checkMissing(value26)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_value26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(value26)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_value26_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c37 then L96() else L97(value26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L96()
    goto L96_;
  } else {
  // L97(value26)
    Rsh_Fir_reg_value28_ = Rsh_Fir_reg_value26_;
    goto L97_;
  }

L96_:;
  // dr18 = tryDispatchBuiltin.1("[[", value26)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_value26_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc9 then L98() else L97(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L98()
    goto L98_;
  } else {
  // L97(dr18)
    Rsh_Fir_reg_value28_ = Rsh_Fir_reg_dr18_;
    goto L97_;
  }

L97_:;
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r47 = dyn __7(value28, 2)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_value28_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L22(r47)
  // L22(r47)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r47_;
  goto L22_;

L98_:;
  // dx32 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L22(dx32)
  // L22(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L22_;

D24_:;
  // deopt 108 [dx33, l7, dx33]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_deopt(108, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L99_:;
  // r48 = dyn names__(l7, NULL, dx33)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L100() else D25()
  // L100()
  goto L100_;

D25_:;
  // deopt 110 [dx33, r48]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L100_:;
  // st x = r48
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L101() else D26()
  // L101()
  goto L101_;

D26_:;
  // deopt 112 [x3]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L101_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
