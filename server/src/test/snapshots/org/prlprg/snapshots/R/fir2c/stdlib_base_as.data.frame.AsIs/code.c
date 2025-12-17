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
  // st `as.data.frame.AsIs` = r
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
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_as_data_frame_model_matrix;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_row_names3_;
  SEXP Rsh_Fir_reg_row_names4_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_nrows;
  SEXP Rsh_Fir_reg_nrows1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_nrows2_;
  SEXP Rsh_Fir_reg_nrows3_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_anyDuplicated;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg__set_row_names;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_row_names7_;
  SEXP Rsh_Fir_reg_row_names8_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_row_names9_;
  SEXP Rsh_Fir_reg_row_names10_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_row_names11_;
  SEXP Rsh_Fir_reg_row_names12_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_row_names14_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_rn1_;
  SEXP Rsh_Fir_reg_rn2_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_optional3_;
  SEXP Rsh_Fir_reg_optional4_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_nm;
  SEXP Rsh_Fir_reg_nm1_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_row_names15_;
  SEXP Rsh_Fir_reg_row_names16_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_value1_;

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
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L2_:;
  // r6 = `==`(r1, 2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args3);
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c then L32() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L32()
    goto L32_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r5 = dyn length(r3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L31() else D2()
  // L31()
  goto L31_;

L4_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L5_:;
  // st nrows = r12
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L6_:;
  // c2 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c2 then L45() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L45()
    goto L45_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // sym7 = ldf `is.integer`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base7 = ldf `is.integer` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard7 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L8_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L9_:;
  // goto L14()
  // L14()
  goto L14_;

L10_:;
  // nrows2 = ld nrows
  Rsh_Fir_reg_nrows2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

L11_:;
  // st `row.names` = r27
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r29 = dyn length2(r27)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L57() else D15()
  // L57()
  goto L57_;

L12_:;
  // c10 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // if c10 then L63() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L63()
    goto L63_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // st autoRN = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 12), RHO);
  (void)(Rsh_const(CCP, 12));
  // _set_row_names = ldf `.set_row_names`
  Rsh_Fir_reg__set_row_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L65() else D19()
  // L65()
  goto L65_;

L14_:;
  // sym10 = ldf list
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base10 = ldf list in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard10 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L15_:;
  // c12 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c12 then L71() else L16(c12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L71()
    goto L71_;
  } else {
  // L16(c12)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c12_;
    goto L16_;
  }

L16_:;
  // c21 = `as.logical`(c14)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args14);
  // if c21 then L77() else L18(c21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L77()
    goto L77_;
  } else {
  // L18(c21)
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
    goto L18_;
  }

L17_:;
  // r42 = `==`(r40, 2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args15);
  // c18 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // c19 = `&&`(c17, c18)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args17);
  // goto L16(c19)
  // L16(c19)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c19_;
  goto L16_;

L18_:;
  // c35 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c35 then L86() else L21(c35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L86()
    goto L86_;
  } else {
  // L21(c35)
    Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c35_;
    goto L21_;
  }

L19_:;
  // c32 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // c33 = `&&`(c26, c32)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args20);
  // goto L18(c33)
  // L18(c33)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c33_;
  goto L18_;

L20_:;
  // st rn1 = dx1
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r46 = dyn is_na(dx1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L84() else D25()
  // L84()
  goto L84_;

L21_:;
  // st autoRN = c37
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_c37_, RHO);
  (void)(Rsh_Fir_reg_c37_);
  // goto L14()
  // L14()
  goto L14_;

L22_:;
  // st value = r49
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // optional3 = ld optional
  Rsh_Fir_reg_optional3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L93() else D29()
  // L93()
  goto L93_;

L23_:;
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // l1 = ld value
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L99() else D33()
  // L99()
  goto L99_;

L25_:;
  // sym1 = ldf dim
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf dim in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L26_:;
  // r = dyn base(<lang dim(x)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

L27_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D0()
  // L29()
  goto L29_;

L28_:;
  // r2 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

D0_:;
  // deopt 4 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L29_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r4 = dyn dim(x2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L30() else D1()
  // L30()
  goto L30_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L3_;

D2_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L2_;

L32_:;
  // as_data_frame_model_matrix = ldf `as.data.frame.model.matrix`
  Rsh_Fir_reg_as_data_frame_model_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
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
  // r10 = dyn as_data_frame_model_matrix(p, p1, p2)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame_model_matrix, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

D4_:;
  // deopt 17 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L34_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

L36_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

L37_:;
  // r11 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L5_;

D5_:;
  // deopt 20 [x5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L38_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r13 = dyn length1(x6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

D6_:;
  // deopt 23 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L5_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p3 = prom<V +>{
  //   sym3 = ldf substitute;
  //   base3 = ldf substitute in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   substitute = ldf substitute in base;
  //   r16 = dyn substitute(<sym x>);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base3(<sym x>);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_3, 0, NULL, CCP, RHO);
  // r18 = dyn deparse1(p3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

D8_:;
  // deopt 28 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L41_:;
  // st nm = r18
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard4 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // row_names3 = ld `row.names`
  Rsh_Fir_reg_row_names3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

L43_:;
  // r19 = dyn base4(<sym row.names>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L6_;

D9_:;
  // deopt 31 [row_names3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_row_names3_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // row_names4 = force? row_names3
  Rsh_Fir_reg_row_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names3_);
  // checkMissing(row_names4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_row_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c1 = `==`(row_names4, NULL)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_row_names4_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args41);
  // goto L6(c1)
  // L6(c1)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_c1_;
  goto L6_;

L45_:;
  // st autoRN = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // nrows = ld nrows
  Rsh_Fir_reg_nrows = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

D10_:;
  // deopt 37 [nrows]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_nrows;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // nrows1 = force? nrows
  Rsh_Fir_reg_nrows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows);
  // checkMissing(nrows1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_nrows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r21 = `==`(nrows1, 0)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_nrows1_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args43);
  // c3 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c3 then L47() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L47()
    goto L47_;
  } else {
  // L8()
    goto L8_;
  }

L47_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

D11_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // r22 = dyn character()
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

D12_:;
  // deopt 43 [r22]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // st `row.names` = r22
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // goto L9(r22)
  // L9(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L9_;

L51_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard6 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L52_:;
  // r24 = dyn base5(<lang `<-`(row.names, names(x))>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L10_;

L53_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L55() else D13()
  // L55()
  goto L55_;

L54_:;
  // r26 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L11_;

D13_:;
  // deopt 49 [x7]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L55_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r28 = dyn names(x8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

D14_:;
  // deopt 52 [r28]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L11_;

D15_:;
  // deopt 55 [r29]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L10(r29)
  // L10(r29)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r29_;
  goto L10_;

D16_:;
  // deopt 55 [r25, nrows2]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_nrows2_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L58_:;
  // nrows3 = force? nrows2
  Rsh_Fir_reg_nrows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows2_);
  // checkMissing(nrows3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_nrows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r30 = `==`(r25, nrows3)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_nrows3_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args51);
  // c4 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // if c4 then L59() else L12(c4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L59()
    goto L59_;
  } else {
  // L12(c4)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c4_;
    goto L12_;
  }

L59_:;
  // anyDuplicated = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

D17_:;
  // deopt 59 [c4]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L60_:;
  // p4 = prom<V +>{
  //   row_names5 = ld `row.names`;
  //   row_names6 = force? row_names5;
  //   checkMissing(row_names6);
  //   return row_names6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_4, 0, NULL, CCP, RHO);
  // r32 = dyn anyDuplicated(p4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

D18_:;
  // deopt 61 [c4, r32]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L61_:;
  // r33 = `!`(r32)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args55);
  // c7 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // c8 = `&&`(c4, c7)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args57);
  // goto L12(c8)
  // L12(c8)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c8_;
  goto L12_;

L63_:;
  // goto L9(NULL)
  // L9(NULL)
  Rsh_Fir_reg_r23_ = Rsh_const(CCP, 2);
  goto L9_;

D19_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p5 = prom<V +>{
  //   nrows4 = ld nrows;
  //   nrows5 = force? nrows4;
  //   checkMissing(nrows5);
  //   return nrows5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3069603236_5, 0, NULL, CCP, RHO);
  // r35 = dyn _set_row_names(p5)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__set_row_names, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L66() else D20()
  // L66()
  goto L66_;

D20_:;
  // deopt 72 [r35]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L66_:;
  // st `row.names` = r35
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // goto L9(r35)
  // L9(r35)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r35_;
  goto L9_;

L68_:;
  // row_names7 = ld `row.names`
  Rsh_Fir_reg_row_names7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L70() else D21()
  // L70()
  goto L70_;

L69_:;
  // r37 = dyn base7(<sym row.names>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(r37)
  // L15(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L15_;

D21_:;
  // deopt 75 [row_names7]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_row_names7_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L70_:;
  // row_names8 = force? row_names7
  Rsh_Fir_reg_row_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names7_);
  // checkMissing(row_names8)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_row_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c11 = `is.integer`(row_names8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_row_names8_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(386, RHO, 1, Rsh_Fir_array_args62);
  // goto L15(c11)
  // L15(c11)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_c11_;
  goto L15_;

L71_:;
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard8 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L72_:;
  // row_names9 = ld `row.names`
  Rsh_Fir_reg_row_names9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L74() else D22()
  // L74()
  goto L74_;

L73_:;
  // r39 = dyn base8(<sym row.names>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L17(c12, r39)
  // L17(c12, r39)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L17_;

D22_:;
  // deopt 80 [c12, row_names9]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_row_names9_;
  Rsh_Fir_deopt(80, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L74_:;
  // row_names10 = force? row_names9
  Rsh_Fir_reg_row_names10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names9_);
  // checkMissing(row_names10)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_row_names10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r41 = dyn length3(row_names10)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_row_names10_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L75() else D23()
  // L75()
  goto L75_;

D23_:;
  // deopt 83 [c12, r41]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L17(c12, r41)
  // L17(c12, r41)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L17_;

L77_:;
  // sym9 = ldf `is.na`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base9 = ldf `is.na` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard9 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L78_:;
  // row_names11 = ld `row.names`
  Rsh_Fir_reg_row_names11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L80() else D24()
  // L80()
  goto L80_;

L79_:;
  // r43 = dyn base9(<lang `<-`(rn1, `[[`(row.names, 1))>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L19(c21, r43)
  // L19(c21, r43)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L19_;

D24_:;
  // deopt 89 [c21, row_names11]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_row_names11_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L80_:;
  // row_names12 = force? row_names11
  Rsh_Fir_reg_row_names12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names11_);
  // checkMissing(row_names12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_row_names12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(row_names12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_row_names12_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args70);
  // if c27 then L81() else L82(c21, row_names12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L81()
    goto L81_;
  } else {
  // L82(c21, row_names12)
    Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c21_;
    Rsh_Fir_reg_row_names14_ = Rsh_Fir_reg_row_names12_;
    goto L82_;
  }

L81_:;
  // dr = tryDispatchBuiltin.1("[[", row_names12)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_row_names12_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc then L83() else L82(c21, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L83()
    goto L83_;
  } else {
  // L82(c21, dr)
    Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c21_;
    Rsh_Fir_reg_row_names14_ = Rsh_Fir_reg_dr;
    goto L82_;
  }

L82_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r45 = dyn __(row_names14, 1)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_row_names14_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L20(c29, r45)
  // L20(c29, r45)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r45_;
  goto L20_;

L83_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L20(c21, dx)
  // L20(c21, dx)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L20_;

D25_:;
  // deopt 96 [c31, r46]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L19(c31, r46)
  // L19(c31, r46)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r46_;
  goto L19_;

L86_:;
  // rn1 = ld rn1
  Rsh_Fir_reg_rn1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L87() else D26()
  // L87()
  goto L87_;

D26_:;
  // deopt 98 [c35, rn1]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_rn1_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L87_:;
  // rn2 = force? rn1
  Rsh_Fir_reg_rn2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rn1_);
  // checkMissing(rn2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_rn2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // r47 = `<`(rn2, 0.0)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_rn2_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args76);
  // c38 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args77);
  // c39 = `&&`(c35, c38)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args78);
  // goto L21(c39)
  // L21(c39)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c39_;
  goto L21_;

L89_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L91() else D27()
  // L91()
  goto L91_;

L90_:;
  // r48 = dyn base10(<sym x>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L22(r48)
  // L22(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L22_;

D27_:;
  // deopt 106 [x9]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L91_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r50 = dyn list(x10)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L92() else D28()
  // L92()
  goto L92_;

D28_:;
  // deopt 109 [r50]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L22(r50)
  // L22(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L22_;

D29_:;
  // deopt 111 [optional3]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_optional3_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L93_:;
  // optional4 = force? optional3
  Rsh_Fir_reg_optional4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional3_);
  // checkMissing(optional4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_optional4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r51 = `!`(optional4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_optional4_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args83);
  // c41 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args84);
  // if c41 then L94() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L94()
    goto L94_;
  } else {
  // L23()
    goto L23_;
  }

L94_:;
  // nm = ld nm
  Rsh_Fir_reg_nm = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L95() else D30()
  // L95()
  goto L95_;

D30_:;
  // deopt 114 [nm]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_nm;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L95_:;
  // nm1 = force? nm
  Rsh_Fir_reg_nm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm);
  // checkMissing(nm1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_nm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // l = ld value
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L96() else D31()
  // L96()
  goto L96_;

D31_:;
  // deopt 117 [nm1, l, nm1]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_nm1_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_nm1_;
  Rsh_Fir_deopt(117, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L96_:;
  // r52 = dyn names__(l, NULL, nm1)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_nm1_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L97() else D32()
  // L97()
  goto L97_;

D32_:;
  // deopt 119 [nm1, r52]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_nm1_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L97_:;
  // st value = r52
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // goto L24()
  // L24()
  goto L24_;

D33_:;
  // deopt 126 ["data.frame", l1, "data.frame"]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_const(CCP, 37);
  Rsh_Fir_deopt(126, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L99_:;
  // r53 = dyn class__(l1, NULL, "data.frame")
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args87[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L100() else D34()
  // L100()
  goto L100_;

D34_:;
  // deopt 128 ["data.frame", r53]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(128, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L100_:;
  // st value = r53
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // row_names15 = ld `row.names`
  Rsh_Fir_reg_row_names15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L101() else D35()
  // L101()
  goto L101_;

D35_:;
  // deopt 130 [row_names15]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_row_names15_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L101_:;
  // row_names16 = force? row_names15
  Rsh_Fir_reg_row_names16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names15_);
  // checkMissing(row_names16)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_row_names16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // l2 = ld value
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L102() else D36()
  // L102()
  goto L102_;

D36_:;
  // deopt 133 [row_names16, l2, row_names16]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_row_names16_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_row_names16_;
  Rsh_Fir_deopt(133, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L102_:;
  // r54 = dyn attr__(l2, NULL, "row.names", row_names16)
  SEXP Rsh_Fir_array_args89[4];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args89[2] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args89[3] = Rsh_Fir_reg_row_names16_;
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L103() else D37()
  // L103()
  goto L103_;

D37_:;
  // deopt 136 [row_names16, r54]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_row_names16_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(136, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L103_:;
  // st value = r54
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L104() else D38()
  // L104()
  goto L104_;

D38_:;
  // deopt 138 [value]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L104_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
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
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_row_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
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
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_optional2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return optional2
  return Rsh_Fir_reg_optional2_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf substitute
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf substitute in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r16 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row_names5_;
  SEXP Rsh_Fir_reg_row_names6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // row_names5 = ld `row.names`
  Rsh_Fir_reg_row_names5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // row_names6 = force? row_names5
  Rsh_Fir_reg_row_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names5_);
  // checkMissing(row_names6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_row_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return row_names6
  return Rsh_Fir_reg_row_names6_;
}
SEXP Rsh_Fir_user_promise_inner3069603236_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrows4_;
  SEXP Rsh_Fir_reg_nrows5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3069603236/0: expected 0, got %d", NCAPTURES);

  // nrows4 = ld nrows
  Rsh_Fir_reg_nrows4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // nrows5 = force? nrows4
  Rsh_Fir_reg_nrows5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows4_);
  // checkMissing(nrows5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_nrows5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return nrows5
  return Rsh_Fir_reg_nrows5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
