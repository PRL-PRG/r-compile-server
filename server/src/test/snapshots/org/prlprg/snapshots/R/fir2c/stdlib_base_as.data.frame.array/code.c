#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3069603236_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3069603236_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3069603236_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3069603236_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner3069603236
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3069603236_, RHO, CCP);
  // st `as.data.frame.array` = r
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
SEXP Rsh_Fir_user_function_inner3069603236_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3069603236 dynamic dispatch ([x, `row.names`, optional, `...`])

  return Rsh_Fir_user_version_inner3069603236_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3069603236_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3069603236 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3069603236/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_row_names;
  SEXP Rsh_Fir_reg_optional;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_row_names_isMissing;
  SEXP Rsh_Fir_reg_row_names_orDefault;
  SEXP Rsh_Fir_reg_optional_isMissing;
  SEXP Rsh_Fir_reg_optional_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_d;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_as_data_frame_vector;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_optional3_;
  SEXP Rsh_Fir_reg_optional4_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_deparse;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_d2_;
  SEXP Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_as_data_frame_matrix;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_d4_;
  SEXP Rsh_Fir_reg_d5_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_d7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_d8_;
  SEXP Rsh_Fir_reg_d9_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_d11_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_prod;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_dim__;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_dn;
  SEXP Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_dn2_;
  SEXP Rsh_Fir_reg_dn3_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_dn5_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_dn6_;
  SEXP Rsh_Fir_reg_dn7_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_dn9_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_rownames__;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_d12_;
  SEXP Rsh_Fir_reg_d13_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_dn10_;
  SEXP Rsh_Fir_reg_dn11_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_dn13_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_d14_;
  SEXP Rsh_Fir_reg_d15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_d17_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_reg_i24_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_i28_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_i29_;
  SEXP Rsh_Fir_reg_i30_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_i31_;
  SEXP Rsh_Fir_reg_interaction;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_colnames__;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_as_data_frame_matrix1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_reg_r83_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_row_names = PARAMS[1];
  Rsh_Fir_reg_optional = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // row_names_isMissing = missing.0(row_names)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_row_names;
  Rsh_Fir_reg_row_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if row_names_isMissing then L0(NULL) else L0(row_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_row_names_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_row_names_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(row_names)
    Rsh_Fir_reg_row_names_orDefault = Rsh_Fir_reg_row_names;
    goto L0_;
  }

L0_:;
  // st `row.names` = row_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_row_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_row_names_orDefault);
  // optional_isMissing = missing.0(optional)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_optional;
  Rsh_Fir_reg_optional_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if optional_isMissing then L1(FALSE) else L1(optional)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_optional_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_optional_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(optional)
    Rsh_Fir_reg_optional_orDefault = Rsh_Fir_reg_optional;
    goto L1_;
  }

L1_:;
  // st optional = optional_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_optional_orDefault, RHO);
  (void)(Rsh_Fir_reg_optional_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L2_:;
  // st d = r1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L3_:;
  // r6 = `==`(r4, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args4);
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args5);
  // if c then L41() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L41()
    goto L41_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard4 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L5_:;
  // goto L7()
  // L7()
  goto L7_;

L6_:;
  // l = ld value
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L51() else D9()
  // L51()
  goto L51_;

L7_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L54() else D11()
  // L54()
  goto L54_;

L8_:;
  // r27 = `==`(r25, 2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args7);
  // c4 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args8);
  // if c4 then L60() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L60()
    goto L60_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // sym5 = ldf dimnames
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf dimnames in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L10_:;
  // st dn = r33
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard6 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L11_:;
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L82() else D22()
  // L82()
  goto L82_;

L12_:;
  // sym7 = ldf prod
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base7 = ldf prod in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard7 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L13_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r42 = dyn c7(dx4, r39)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L81() else D21()
  // L81()
  goto L81_;

L14_:;
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r41 = dyn prod(dx6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L80() else D20()
  // L80()
  goto L80_;

L15_:;
  // r46 = `!`(r45)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args14);
  // c9 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c9 then L87() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L87()
    goto L87_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L32()
  // L32()
  goto L32_;

L17_:;
  // c11 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c11 then L95() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L95()
    goto L95_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r50 = dyn length2(dx8)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L94() else D26()
  // L94()
  goto L94_;

L19_:;
  // goto L21()
  // L21()
  goto L21_;

L20_:;
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // rownames__ = ldf `rownames<-`
  Rsh_Fir_reg_rownames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L100() else D28()
  // L100()
  goto L100_;

L21_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard10 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L22_:;
  // r59 = `:`(r56, r57)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args19);
  // s = toForSeq(r59)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // l3 = length(s)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l3_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args21);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 20);
  // goto L23(i)
  // L23(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L23_;

L23_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // c13 = `<`.1(l3, i2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if c13 then L107() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L107()
    goto L107_;
  } else {
  // L31()
    goto L31_;
  }

L24_:;
  // c16 = `as.logical`(r61)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c16 then L115() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L115()
    goto L115_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // c15 = `==`(dx13, NULL)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args25);
  // goto L24(i11, c15)
  // L24(i11, c15)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_c15_;
  goto L24_;

L26_:;
  // goto L30(i7)
  // L30(i7)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i7_;
  goto L30_;

L27_:;
  // l4 = ld dn
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c18 = `is.object`(l4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args26);
  // if c18 then L123() else L124(i18, r64, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L123()
    goto L123_;
  } else {
  // L124(i18, r64, l4)
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L124_;
  }

L28_:;
  // r66 = seq_len(dx15)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args27);
  // goto L27(i22, r66)
  // L27(i22, r66)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r66_;
  goto L27_;

L29_:;
  // st dn = dx17
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L30(i28)
  // L30(i28)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i28_;
  goto L30_;

L30_:;
  // goto L23(i31)
  // L23(i31)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i31_;
  goto L23_;

L31_:;
  // x9 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_x9_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args28);
  // st i = x9
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_x9_, RHO);
  (void)(Rsh_Fir_reg_x9_);
  // sym11 = ldf `is.null`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base11 = ldf `is.null` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard11 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L32_:;
  // as_data_frame_matrix1 = ldf `as.data.frame.matrix`
  Rsh_Fir_reg_as_data_frame_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L133() else D41()
  // L133()
  goto L133_;

L33_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L35() else D0()
  // L35()
  goto L35_;

L34_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L35_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn dim(x2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L36() else D1()
  // L36()
  goto L36_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L37_:;
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L39() else D2()
  // L39()
  goto L39_;

L38_:;
  // r3 = dyn base1(<sym d>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D2_:;
  // deopt 9 [d]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L39_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r5 = dyn length(d1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L40() else D3()
  // L40()
  goto L40_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L3_;

L41_:;
  // as_data_frame_vector = ldf `as.data.frame.vector`
  Rsh_Fir_reg_as_data_frame_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L42() else D4()
  // L42()
  goto L42_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   c1 = ldf c in base;
  //   r9 = dyn c1(x4);
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base2(<sym x>);
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   row_names1 = ld `row.names`;
  //   row_names2 = force? row_names1;
  //   checkMissing(row_names2);
  //   return row_names2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   optional1 = ld optional;
  //   optional2 = force? optional1;
  //   checkMissing(optional2);
  //   return optional2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_2, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r13 = dyn as_data_frame_vector[, , , `...`](p, p1, p2, ddd1)
  SEXP Rsh_Fir_array_args42[4];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args42[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame_vector, 4, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L43() else D5()
  // L43()
  goto L43_;

D5_:;
  // deopt 21 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L43_:;
  // st value = r13
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // optional3 = ld optional
  Rsh_Fir_reg_optional3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L44() else D6()
  // L44()
  goto L44_;

D6_:;
  // deopt 23 [optional3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_optional3_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L44_:;
  // optional4 = force? optional3
  Rsh_Fir_reg_optional4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional3_);
  // checkMissing(optional4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_optional4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r14 = `!`(optional4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_optional4_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args44);
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c2 then L45() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L45()
    goto L45_;
  } else {
  // L5()
    goto L5_;
  }

L45_:;
  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L46() else D7()
  // L46()
  goto L46_;

D7_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p3 = prom<V +>{
  //   sym3 = ldf substitute;
  //   base3 = ldf substitute in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   substitute = ldf substitute in base;
  //   r17 = dyn substitute(<sym x>);
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base3(<sym x>);
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_3, 0, NULL, CCP, RHO);
  // r19 = dyn deparse(p3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

D8_:;
  // deopt 29 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // c3 = `is.object`(r19)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args50);
  // if c3 then L48() else L49(r19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L48()
    goto L48_;
  } else {
  // L49(r19)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r19_;
    goto L49_;
  }

L48_:;
  // dr = tryDispatchBuiltin.1("[[", r19)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc then L50() else L49(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L50()
    goto L50_;
  } else {
  // L49(dr)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_dr;
    goto L49_;
  }

L49_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r22 = dyn __(r21, 1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6(r22)
  // L6(r22)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r22_;
  goto L6_;

L50_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D9_:;
  // deopt 34 [dx1, l, dx1]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L51_:;
  // r23 = dyn names__(l, NULL, dx1)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L52() else D10()
  // L52()
  goto L52_;

D10_:;
  // deopt 36 [dx1, r23]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L52_:;
  // st value = r23
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L7()
  // L7()
  goto L7_;

D11_:;
  // deopt 40 [value]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L54_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_;

L56_:;
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L58() else D12()
  // L58()
  goto L58_;

L57_:;
  // r24 = dyn base4(<sym d>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L8(r24)
  // L8(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L8_;

D12_:;
  // deopt 44 [d2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_d2_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L58_:;
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r26 = dyn length1(d3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L59() else D13()
  // L59()
  goto L59_;

D13_:;
  // deopt 47 [r26]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L8(r26)
  // L8(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L8_;

L60_:;
  // as_data_frame_matrix = ldf `as.data.frame.matrix`
  Rsh_Fir_reg_as_data_frame_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L61() else D14()
  // L61()
  goto L61_;

D14_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p4 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   row_names3 = ld `row.names`;
  //   row_names4 = force? row_names3;
  //   checkMissing(row_names4);
  //   return row_names4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   optional5 = ld optional;
  //   optional6 = force? optional5;
  //   checkMissing(optional6);
  //   return optional6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_6, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r31 = dyn as_data_frame_matrix[, , , `...`](p4, p5, p6, ddd2)
  SEXP Rsh_Fir_array_args63[4];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args63[3] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame_matrix, 4, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

D15_:;
  // deopt 56 [r31]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L62_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;

L64_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L66() else D16()
  // L66()
  goto L66_;

L65_:;
  // r32 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(r32)
  // L10(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L10_;

D16_:;
  // deopt 59 [x7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L66_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r34 = dyn dimnames(x8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

D17_:;
  // deopt 62 [r34]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L10(r34)
  // L10(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L10_;

L68_:;
  // d4 = ld d
  Rsh_Fir_reg_d4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L70() else D18()
  // L70()
  goto L70_;

L69_:;
  // r35 = dyn base6(<lang `[`(d, 1)>, <lang prod(`[`(d, `-`(1)))>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(r35)
  // L11(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L11_;

D18_:;
  // deopt 66 [d4]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_d4_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L70_:;
  // d5 = force? d4
  Rsh_Fir_reg_d5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_d5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(d5)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args69);
  // if c5 then L71() else L72(d5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L71()
    goto L71_;
  } else {
  // L72(d5)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_d5_;
    goto L72_;
  }

L71_:;
  // dr2 = tryDispatchBuiltin.1("[", d5)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc1 then L73() else L72(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L73()
    goto L73_;
  } else {
  // L72(dr2)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_dr2_;
    goto L72_;
  }

L72_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r37 = dyn __1(d7, 1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L12(r37)
  // L12(r37)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r37_;
  goto L12_;

L73_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L12(dx3)
  // L12(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L12_;

L74_:;
  // d8 = ld d
  Rsh_Fir_reg_d8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L76() else D19()
  // L76()
  goto L76_;

L75_:;
  // r38 = dyn base7(<lang `[`(d, `-`(1))>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L13(r38)
  // L13(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L13_;

D19_:;
  // deopt 73 [d8]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_d8_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L76_:;
  // d9 = force? d8
  Rsh_Fir_reg_d9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d8_);
  // checkMissing(d9)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_d9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(d9)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_d9_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args76);
  // if c6 then L77() else L78(d9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L77()
    goto L77_;
  } else {
  // L78(d9)
    Rsh_Fir_reg_d11_ = Rsh_Fir_reg_d9_;
    goto L78_;
  }

L77_:;
  // dr4 = tryDispatchBuiltin.1("[", d9)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_d9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc2 then L79() else L78(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L79()
    goto L79_;
  } else {
  // L78(dr4)
    Rsh_Fir_reg_d11_ = Rsh_Fir_reg_dr4_;
    goto L78_;
  }

L78_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r40 = dyn __2(d11, -1)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_d11_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L14(r40)
  // L14(r40)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r40_;
  goto L14_;

L79_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L14(dx5)
  // L14(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L14_;

D20_:;
  // deopt 79 [r41]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L13(r41)
  // L13(r41)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r41_;
  goto L13_;

D21_:;
  // deopt 81 [r42]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L81_:;
  // goto L11(r42)
  // L11(r42)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r42_;
  goto L11_;

D22_:;
  // deopt 83 [r36, l1, r36]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(83, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L82_:;
  // r43 = dyn dim__(l1, NULL, r36)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L83() else D23()
  // L83()
  goto L83_;

D23_:;
  // deopt 85 [r36, r43]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L83_:;
  // st x = r43
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard8 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L86() else D24()
  // L86()
  goto L86_;

L85_:;
  // r44 = dyn base8(<sym dn>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L15(r44)
  // L15(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L15_;

D24_:;
  // deopt 88 [dn]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L86_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c8 = `==`(dn1, NULL)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args85);
  // goto L15(c8)
  // L15(c8)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_c8_;
  goto L15_;

L87_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard9 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L88_:;
  // dn2 = ld dn
  Rsh_Fir_reg_dn2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L90() else D25()
  // L90()
  goto L90_;

L89_:;
  // r47 = dyn base9(<lang `[[`(dn, 1)>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L17(r47)
  // L17(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L17_;

D25_:;
  // deopt 94 [dn2]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_dn2_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L90_:;
  // dn3 = force? dn2
  Rsh_Fir_reg_dn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn2_);
  // checkMissing(dn3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(dn3)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args89);
  // if c10 then L91() else L92(dn3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L91()
    goto L91_;
  } else {
  // L92(dn3)
    Rsh_Fir_reg_dn5_ = Rsh_Fir_reg_dn3_;
    goto L92_;
  }

L91_:;
  // dr6 = tryDispatchBuiltin.1("[[", dn3)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc3 then L93() else L92(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L93()
    goto L93_;
  } else {
  // L92(dr6)
    Rsh_Fir_reg_dn5_ = Rsh_Fir_reg_dr6_;
    goto L92_;
  }

L92_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r49 = dyn __3(dn5, 1)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L18(r49)
  // L18(r49)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r49_;
  goto L18_;

L93_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L18(dx7)
  // L18(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L18_;

D26_:;
  // deopt 100 [r50]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L17(r50)
  // L17(r50)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r50_;
  goto L17_;

L95_:;
  // dn6 = ld dn
  Rsh_Fir_reg_dn6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L96() else D27()
  // L96()
  goto L96_;

D27_:;
  // deopt 101 [dn6]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_dn6_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L96_:;
  // dn7 = force? dn6
  Rsh_Fir_reg_dn7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn6_);
  // checkMissing(dn7)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dn7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(dn7)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dn7_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args95);
  // if c12 then L97() else L98(dn7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L97()
    goto L97_;
  } else {
  // L98(dn7)
    Rsh_Fir_reg_dn9_ = Rsh_Fir_reg_dn7_;
    goto L98_;
  }

L97_:;
  // dr8 = tryDispatchBuiltin.1("[[", dn7)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_dn7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc4 then L99() else L98(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L99()
    goto L99_;
  } else {
  // L98(dr8)
    Rsh_Fir_reg_dn9_ = Rsh_Fir_reg_dr8_;
    goto L98_;
  }

L98_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r51 = dyn __4(dn9, 1)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dn9_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L20(r51)
  // L20(r51)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r51_;
  goto L20_;

L99_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L20(dx9)
  // L20(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L20_;

D28_:;
  // deopt 107 [dx10, l2, dx10]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_deopt(107, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L100_:;
  // r52 = dyn rownames__(l2, NULL, dx10)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args100[2] = Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames__, 3, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L101() else D29()
  // L101()
  goto L101_;

D29_:;
  // deopt 109 [dx10, r52]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L101_:;
  // st x = r52
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // goto L21()
  // L21()
  goto L21_;

L103_:;
  // d12 = ld d
  Rsh_Fir_reg_d12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L105() else D30()
  // L105()
  goto L105_;

L104_:;
  // r55 = dyn base10(<sym d>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L22(2, r55)
  // L22(2, r55)
  Rsh_Fir_reg_r56_ = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
  goto L22_;

D30_:;
  // deopt 116 [2, d12]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_d12_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L105_:;
  // d13 = force? d12
  Rsh_Fir_reg_d13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d12_);
  // checkMissing(d13)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_d13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r58 = dyn length3(d13)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_d13_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L106() else D31()
  // L106()
  goto L106_;

D31_:;
  // deopt 119 [2, r58]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L22(2, r58)
  // L22(2, r58)
  Rsh_Fir_reg_r56_ = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L22_;

L107_:;
  // interaction = ldf interaction
  Rsh_Fir_reg_interaction = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L128() else D37()
  // L128()
  goto L128_;

L108_:;
  // dn10 = ld dn
  Rsh_Fir_reg_dn10_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L110() else D32()
  // L110()
  goto L110_;

L109_:;
  // r60 = dyn base11(<lang `[[`(dn, i)>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L24(i2, r60)
  // L24(i2, r60)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L24_;

D32_:;
  // deopt 122 [i2, dn10]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_dn10_;
  Rsh_Fir_deopt(122, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L110_:;
  // dn11 = force? dn10
  Rsh_Fir_reg_dn11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn10_);
  // checkMissing(dn11)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dn11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(dn11)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dn11_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args106);
  // if c14 then L111() else L112(i2, dn11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L111()
    goto L111_;
  } else {
  // L112(i2, dn11)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_dn13_ = Rsh_Fir_reg_dn11_;
    goto L112_;
  }

L111_:;
  // dr10 = tryDispatchBuiltin.1("[[", dn11)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_dn11_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc5 then L113() else L112(i2, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L113()
    goto L113_;
  } else {
  // L112(i2, dr10)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_dn13_ = Rsh_Fir_reg_dr10_;
    goto L112_;
  }

L112_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L114() else D33()
  // L114()
  goto L114_;

L113_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L25(i2, dx12)
  // L25(i2, dx12)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L25_;

D33_:;
  // deopt 124 [i9, dn13, i12]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_dn13_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(124, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L114_:;
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r62 = dyn __5(dn13, i13)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dn13_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L25(i9, r62)
  // L25(i9, r62)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r62_;
  goto L25_;

L115_:;
  // sym12 = ldf seq_len
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base12 = ldf seq_len in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard12 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L116_:;
  // d14 = ld d
  Rsh_Fir_reg_d14_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L118() else D34()
  // L118()
  goto L118_;

L117_:;
  // r63 = dyn base12(<lang `[`(d, i)>)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L27(i7, r63)
  // L27(i7, r63)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L27_;

D34_:;
  // deopt 129 [i7, d14]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_d14_;
  Rsh_Fir_deopt(129, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L118_:;
  // d15 = force? d14
  Rsh_Fir_reg_d15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d14_);
  // checkMissing(d15)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_d15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(d15)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_d15_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args114);
  // if c17 then L119() else L120(i7, d15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L119()
    goto L119_;
  } else {
  // L120(i7, d15)
    Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_d17_ = Rsh_Fir_reg_d15_;
    goto L120_;
  }

L119_:;
  // dr12 = tryDispatchBuiltin.1("[", d15)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_d15_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args115);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if dc6 then L121() else L120(i7, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L121()
    goto L121_;
  } else {
  // L120(i7, dr12)
    Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_d17_ = Rsh_Fir_reg_dr12_;
    goto L120_;
  }

L120_:;
  // i23 = ld i
  Rsh_Fir_reg_i23_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L122() else D35()
  // L122()
  goto L122_;

L121_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // goto L28(i7, dx14)
  // L28(i7, dx14)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L28_;

D35_:;
  // deopt 131 [i20, d17, i23]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_d17_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_i23_;
  Rsh_Fir_deopt(131, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L122_:;
  // i24 = force? i23
  Rsh_Fir_reg_i24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i23_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r65 = dyn __6(d17, i24)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_d17_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_i24_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L28(i20, r65)
  // L28(i20, r65)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r65_;
  goto L28_;

L123_:;
  // dr14 = tryDispatchBuiltin.0("[[<-", l4, r64)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args119);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if dc7 then L125() else L124(i18, r64, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L125()
    goto L125_;
  } else {
  // L124(i18, r64, dr14)
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr14_;
    goto L124_;
  }

L124_:;
  // i29 = ld i
  Rsh_Fir_reg_i29_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L126() else D36()
  // L126()
  goto L126_;

L125_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L29(i18, r64, dx16)
  // L29(i18, r64, dx16)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L29_;

D36_:;
  // deopt 136 [i26, r68, l6, r64, i29]
  SEXP Rsh_Fir_array_deopt_stack33[5];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack33[4] = Rsh_Fir_reg_i29_;
  Rsh_Fir_deopt(136, 5, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L126_:;
  // i30 = force? i29
  Rsh_Fir_reg_i30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i29_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r71 = dyn ____(l6, r64, i30)
  SEXP Rsh_Fir_array_args122[3];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args122[2] = Rsh_Fir_reg_i30_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L29(i26, r68, r71)
  // L29(i26, r68, r71)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r71_;
  goto L29_;

D37_:;
  // deopt 146 []
  Rsh_Fir_deopt(146, 0, NULL, CCP, RHO);
  return R_NilValue;

L128_:;
  // p8 = prom<V +>{
  //   expand_grid = ldf `expand.grid`;
  //   p7 = prom<V +>{
  //     dn14 = ld dn;
  //     dn15 = force? dn14;
  //     checkMissing(dn15);
  //     c19 = `is.object`(dn15);
  //     if c19 then L1() else L2(dn15);
  //   L0(dx19):
  //     return dx19;
  //   L1():
  //     dr16 = tryDispatchBuiltin.1("[", dn15);
  //     dc8 = getTryDispatchBuiltinDispatched(dr16);
  //     if dc8 then L3() else L2(dr16);
  //   L2(dn17):
  //     __7 = ldf `[` in base;
  //     r73 = dyn __7(dn17, -1);
  //     goto L0(r73);
  //   L3():
  //     dx18 = getTryDispatchBuiltinValue(dr16);
  //     goto L0(dx18);
  //   };
  //   r75 = dyn expand_grid(p7);
  //   return r75;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_7, 0, NULL, CCP, RHO);
  // r77 = dyn interaction(p8)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_interaction, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L129() else D38()
  // L129()
  goto L129_;

D38_:;
  // deopt 148 [r77]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L129_:;
  // l7 = ld x
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L130() else D39()
  // L130()
  goto L130_;

D39_:;
  // deopt 150 [r77, l7, r77]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(150, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L130_:;
  // r78 = dyn colnames__(l7, NULL, r77)
  SEXP Rsh_Fir_array_args131[3];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args131[2] = Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L131() else D40()
  // L131()
  goto L131_;

D40_:;
  // deopt 152 [r77, r78]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(152, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L131_:;
  // st x = r78
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // goto L32()
  // L32()
  goto L32_;

D41_:;
  // deopt 157 []
  Rsh_Fir_deopt(157, 0, NULL, CCP, RHO);
  return R_NilValue;

L133_:;
  // p9 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   return x11;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   row_names5 = ld `row.names`;
  //   row_names6 = force? row_names5;
  //   checkMissing(row_names6);
  //   return row_names6;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   optional7 = ld optional;
  //   optional8 = force? optional7;
  //   checkMissing(optional8);
  //   return optional8;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_11, 0, NULL, CCP, RHO);
  // ddd3 = ld `...`
  Rsh_Fir_reg_ddd3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r83 = dyn as_data_frame_matrix1[, , , `...`](p9, p10, p11, ddd3)
  SEXP Rsh_Fir_array_args135[4];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args135[2] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args135[3] = Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_array_arg_names41[4];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_array_arg_names41[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame_matrix1_, 4, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L134() else D42()
  // L134()
  goto L134_;

D42_:;
  // deopt 162 [r83]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L134_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r83
  return Rsh_Fir_reg_r83_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r9 = dyn c1(x4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row_names1_;
  SEXP Rsh_Fir_reg_row_names2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // row_names1 = ld `row.names`
  Rsh_Fir_reg_row_names1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // row_names2 = force? row_names1
  Rsh_Fir_reg_row_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names1_);
  // checkMissing(row_names2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_row_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return row_names2
  return Rsh_Fir_reg_row_names2_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_optional1_;
  SEXP Rsh_Fir_reg_optional2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // optional1 = ld optional
  Rsh_Fir_reg_optional1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // optional2 = force? optional1
  Rsh_Fir_reg_optional2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional1_);
  // checkMissing(optional2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_optional2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return optional2
  return Rsh_Fir_reg_optional2_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf substitute
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf substitute in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r17 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r15 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row_names3_;
  SEXP Rsh_Fir_reg_row_names4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // row_names3 = ld `row.names`
  Rsh_Fir_reg_row_names3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // row_names4 = force? row_names3
  Rsh_Fir_reg_row_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names3_);
  // checkMissing(row_names4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_row_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return row_names4
  return Rsh_Fir_reg_row_names4_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_optional5_;
  SEXP Rsh_Fir_reg_optional6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // optional5 = ld optional
  Rsh_Fir_reg_optional5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // optional6 = force? optional5
  Rsh_Fir_reg_optional6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional5_);
  // checkMissing(optional6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_optional6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return optional6
  return Rsh_Fir_reg_optional6_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_expand_grid;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r75_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // expand_grid = ldf `expand.grid`
  Rsh_Fir_reg_expand_grid = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // p7 = prom<V +>{
  //   dn14 = ld dn;
  //   dn15 = force? dn14;
  //   checkMissing(dn15);
  //   c19 = `is.object`(dn15);
  //   if c19 then L1() else L2(dn15);
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", dn15);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(dn17):
  //   __7 = ldf `[` in base;
  //   r73 = dyn __7(dn17, -1);
  //   goto L0(r73);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_8, 0, NULL, CCP, RHO);
  // r75 = dyn expand_grid(p7)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expand_grid, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names38, CCP, RHO);
  // return r75
  return Rsh_Fir_reg_r75_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dn14_;
  SEXP Rsh_Fir_reg_dn15_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_dn17_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r73_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // dn14 = ld dn
  Rsh_Fir_reg_dn14_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // dn15 = force? dn14
  Rsh_Fir_reg_dn15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn14_);
  // checkMissing(dn15)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dn15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(dn15)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dn15_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args124);
  // if c19 then L1() else L2(dn15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L1()
    goto L1_;
  } else {
  // L2(dn15)
    Rsh_Fir_reg_dn17_ = Rsh_Fir_reg_dn15_;
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", dn15)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_dn15_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args125);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_dn17_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r73 = dyn __7(dn17, -1)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dn17_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r73)
  // L0(r73)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r73_;
  goto L0_;

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // return x11
  return Rsh_Fir_reg_x11_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row_names5_;
  SEXP Rsh_Fir_reg_row_names6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // row_names5 = ld `row.names`
  Rsh_Fir_reg_row_names5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // row_names6 = force? row_names5
  Rsh_Fir_reg_row_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names5_);
  // checkMissing(row_names6)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_row_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // return row_names6
  return Rsh_Fir_reg_row_names6_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_optional7_;
  SEXP Rsh_Fir_reg_optional8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // optional7 = ld optional
  Rsh_Fir_reg_optional7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // optional8 = force? optional7
  Rsh_Fir_reg_optional8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional7_);
  // checkMissing(optional8)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_optional8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // return optional8
  return Rsh_Fir_reg_optional8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
