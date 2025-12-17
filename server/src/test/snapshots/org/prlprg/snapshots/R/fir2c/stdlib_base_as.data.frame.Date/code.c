#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner193142209_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner193142209_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner193142209_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner193142209_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner193142209
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner193142209_, RHO, CCP);
  // st `as.data.frame.Date` = r
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
SEXP Rsh_Fir_user_function_inner193142209_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner193142209 dynamic dispatch ([x, `row.names`, optional, `...`, nm])

  return Rsh_Fir_user_version_inner193142209_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner193142209_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner193142209 version 0 (*, *, *, dots, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner193142209/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_row_names;
  SEXP Rsh_Fir_reg_optional;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_nm;
  SEXP Rsh_Fir_reg_row_names_isMissing;
  SEXP Rsh_Fir_reg_row_names_orDefault;
  SEXP Rsh_Fir_reg_optional_isMissing;
  SEXP Rsh_Fir_reg_optional_orDefault;
  SEXP Rsh_Fir_reg_nm_isMissing;
  SEXP Rsh_Fir_reg_nm_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_sys_nframe;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sys_function;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_as_data_frame;
  SEXP Rsh_Fir_reg_as_data_frame1_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg__isMethodsDispatchOn;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_c51_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c54_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg__Deprecated;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_force;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_row_names1_;
  SEXP Rsh_Fir_reg_row_names2_;
  SEXP Rsh_Fir_reg_c58_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_nrows;
  SEXP Rsh_Fir_reg_nrows1_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_nrows2_;
  SEXP Rsh_Fir_reg_nrows3_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c61_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_anyDuplicated;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c64_;
  SEXP Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_reg_c67_;
  SEXP Rsh_Fir_reg__set_row_names;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_row_names5_;
  SEXP Rsh_Fir_reg_row_names6_;
  SEXP Rsh_Fir_reg_c68_;
  SEXP Rsh_Fir_reg_c69_;
  SEXP Rsh_Fir_reg_c70_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c74_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_row_names7_;
  SEXP Rsh_Fir_reg_row_names8_;
  SEXP Rsh_Fir_reg_c75_;
  SEXP Rsh_Fir_reg_c76_;
  SEXP Rsh_Fir_reg_c77_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_c79_;
  SEXP Rsh_Fir_reg_c80_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_c84_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_row_names9_;
  SEXP Rsh_Fir_reg_row_names10_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_nrows6_;
  SEXP Rsh_Fir_reg_nrows7_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c85_;
  SEXP Rsh_Fir_reg_c86_;
  SEXP Rsh_Fir_reg_c88_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_c89_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_c90_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_optional1_;
  SEXP Rsh_Fir_reg_optional2_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_c91_;
  SEXP Rsh_Fir_reg_nm3_;
  SEXP Rsh_Fir_reg_nm4_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_structure1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r82_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_row_names = PARAMS[1];
  Rsh_Fir_reg_optional = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];
  Rsh_Fir_reg_nm = PARAMS[4];

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
  // nm_isMissing = missing.0(nm)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_nm;
  Rsh_Fir_reg_nm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if nm_isMissing then L2() else L3(nm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nm_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(nm)
    Rsh_Fir_reg_nm_orDefault = Rsh_Fir_reg_nm;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   deparse1 = ldf deparse1;
  //   p = prom<V +>{
  //     sym = ldf substitute;
  //     base = ldf substitute in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r1):
  //     return r1;
  //   L1():
  //     substitute = ldf substitute in base;
  //     r2 = dyn substitute(<sym x>);
  //     goto L0(r2);
  //   L2():
  //     r = dyn base(<sym x>);
  //     goto L0(r);
  //   };
  //   r4 = dyn deparse1(p);
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_nm_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st nm = nm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_nm_orDefault, RHO);
  (void)(Rsh_Fir_reg_nm_orDefault);
  // sys_nframe = ldf `sys.nframe`
  Rsh_Fir_reg_sys_nframe = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L36() else D0()
  // L36()
  goto L36_;

L4_:;
  // c57 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c57 then L63() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L63()
    goto L63_;
  } else {
  // L11()
    goto L11_;
  }

L5_:;
  // c6 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args8);
  // if c6 then L6(c5, c6) else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L6(c5, c6)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L6_;
  } else {
  // L45()
    goto L45_;
  }

L6_:;
  // r27 = `!`(c8)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args9);
  // c54 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // c55 = `||`(c7, c54)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c54_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args11);
  // goto L4(c55)
  // L4(c55)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c55_;
  goto L4_;

L7_:;
  // c17 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c17 then L49() else L8(c15, c16, c17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L49()
    goto L49_;
  } else {
  // L8(c15, c16, c17)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c15_;
    Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c16_;
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c17_;
    goto L8_;
  }

L8_:;
  // c29 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c29 then L54() else L9(c21, c22, c29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L54()
    goto L54_;
  } else {
  // L9(c21, c22, c29)
    Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c21_;
    Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c22_;
    Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c29_;
    goto L9_;
  }

L9_:;
  // c50 = `as.logical`(c35)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args14);
  // c51 = `||`(c34, c50)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args15);
  // goto L6(c33, c51)
  // L6(c33, c51)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c51_;
  goto L6_;

L10_:;
  // c45 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // c46 = `&&`(c44, c45)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c44_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args17);
  // goto L9(c42, c43, c46)
  // L9(c42, c43, c46)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c43_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c46_;
  goto L9_;

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // force = ldf force
  Rsh_Fir_reg_force = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L67() else D15()
  // L67()
  goto L67_;

L13_:;
  // st nrows = r35
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard5 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L14_:;
  // c59 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // if c59 then L76() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L76()
    goto L76_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // sym8 = ldf `is.character`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base8 = ldf `is.character` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard8 then L99() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L99()
    goto L99_;
  } else {
  // L100()
    goto L100_;
  }

L16_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard6 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L17_:;
  // goto L22()
  // L22()
  goto L22_;

L18_:;
  // nrows2 = ld nrows
  Rsh_Fir_reg_nrows2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L89() else D26()
  // L89()
  goto L89_;

L19_:;
  // st `row.names` = r45
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r47 = dyn length1(r45)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L88() else D25()
  // L88()
  goto L88_;

L20_:;
  // c67 = `as.logical`(c62)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c62_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args23);
  // if c67 then L94() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c67_)) {
  // L94()
    goto L94_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L17(NULL)
  // L17(NULL)
  Rsh_Fir_reg_r41_ = Rsh_const(CCP, 2);
  goto L17_;

L22_:;
  // sym11 = ldf `is.null`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base11 = ldf `is.null` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard11 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L23_:;
  // c69 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c69 then L24(c69) else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L24(c69)
    Rsh_Fir_reg_c70_ = Rsh_Fir_reg_c69_;
    goto L24_;
  } else {
  // L102()
    goto L102_;
  }

L24_:;
  // r58 = `!`(c70)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c70_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args26);
  // c79 = `as.logical`(r58)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_c79_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c79 then L26(c79) else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c79_)) {
  // L26(c79)
    Rsh_Fir_reg_c80_ = Rsh_Fir_reg_c79_;
    goto L26_;
  } else {
  // L107()
    goto L107_;
  }

L25_:;
  // c76 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args28);
  // c77 = `||`(c74, c76)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c74_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_c76_;
  Rsh_Fir_reg_c77_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args29);
  // goto L24(c77)
  // L24(c77)
  Rsh_Fir_reg_c70_ = Rsh_Fir_reg_c77_;
  goto L24_;

L26_:;
  // c88 = `as.logical`(c80)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c80_;
  Rsh_Fir_reg_c88_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // if c88 then L114() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c88_)) {
  // L114()
    goto L114_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // nrows6 = ld nrows
  Rsh_Fir_reg_nrows6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L112() else D35()
  // L112()
  goto L112_;

L28_:;
  // goto L22()
  // L22()
  goto L22_;

L29_:;
  // r72 = `!`(r68)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args31);
  // c90 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c90_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c90 then L124() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c90_)) {
  // L124()
    goto L124_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // c89 = `==`(r70, NULL)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c89_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args33);
  // goto L29(c89)
  // L29(c89)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_c89_;
  goto L29_;

L31_:;
  // goto L32()
  // L32()
  goto L32_;

L32_:;
  // sym13 = ldf list
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base13 = ldf list in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard13 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L33_:;
  // st value = r76
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // optional1 = ld optional
  Rsh_Fir_reg_optional1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L132() else D44()
  // L132()
  goto L132_;

L34_:;
  // goto L35()
  // L35()
  goto L35_;

L35_:;
  // structure1 = ldf structure
  Rsh_Fir_reg_structure1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L138() else D48()
  // L138()
  goto L138_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r6 = dyn sys_nframe()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_nframe, 0, NULL, NULL, CCP, RHO);
  // check L37() else D1()
  // L37()
  goto L37_;

D1_:;
  // deopt 2 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L37_:;
  // r7 = `<=`(r6, 1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args35);
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c then L4(c) else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L4_;
  } else {
  // L38()
    goto L38_;
  }

L38_:;
  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard1 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // sys_function = ldf `sys.function`
  Rsh_Fir_reg_sys_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L41() else D2()
  // L41()
  goto L41_;

L40_:;
  // r8 = dyn base1(<lang sys.function(`-`(1))>, <sym as.data.frame>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(c, r8)
  // L5(c, r8)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L5_;

D2_:;
  // deopt 8 [c]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L41_:;
  // p2 = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_2, 0, NULL, CCP, RHO);
  // r11 = dyn sys_function(p2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L42() else D3()
  // L42()
  goto L42_;

D3_:;
  // deopt 10 [c, r11]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L42_:;
  // as_data_frame = ld `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L43() else D4()
  // L43()
  goto L43_;

D4_:;
  // deopt 11 [c, as_data_frame]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_as_data_frame;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L43_:;
  // as_data_frame1 = force? as_data_frame
  Rsh_Fir_reg_as_data_frame1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_as_data_frame);
  // checkMissing(as_data_frame1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_as_data_frame1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r12 = dyn identical(r11, as_data_frame1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args41[9];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_as_data_frame1_;
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args41[4] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args41[5] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args41[6] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args41[7] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args41[8] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[9];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_array_arg_names6[6] = R_MissingArg;
  Rsh_Fir_array_arg_names6[7] = R_MissingArg;
  Rsh_Fir_array_arg_names6[8] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L44() else D5()
  // L44()
  goto L44_;

D5_:;
  // deopt 21 [c, r12]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L5(c, r12)
  // L5(c, r12)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r12_;
  goto L5_;

L45_:;
  // sym2 = ldf `.isMethodsDispatchOn`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base2 = ldf `.isMethodsDispatchOn` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard2 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base
  Rsh_Fir_reg__isMethodsDispatchOn = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r15 = dyn _isMethodsDispatchOn()
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__isMethodsDispatchOn, 0, NULL, NULL, CCP, RHO);
  // check L48() else D6()
  // L48()
  goto L48_;

L47_:;
  // r13 = dyn base2()
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 0, NULL, NULL, CCP, RHO);
  // goto L7(c5, c6, r13)
  // L7(c5, c6, r13)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D6_:;
  // deopt 25 [c5, c6, r15]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(25, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L7(c5, c6, r15)
  // L7(c5, c6, r15)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

L49_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L50() else D7()
  // L50()
  goto L50_;

D7_:;
  // deopt 27 [c15, c16, c17]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_c17_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L50_:;
  // r16 = dyn __("methods", "is")
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L51() else D8()
  // L51()
  goto L51_;

D8_:;
  // deopt 30 [c15, c16, c17, r16]
  SEXP Rsh_Fir_array_deopt_stack7[4];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(30, 4, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L51_:;
  // checkFun.0(r16)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r16_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args44));
  // r17 = r16 as cls
  Rsh_Fir_reg_r17_ = Rsh_Fir_cast(Rsh_Fir_reg_r16_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p4 = prom<V +>{
  //   sys_function1 = ldf `sys.function`;
  //   p3 = prom<V +>{
  //     return -1;
  //   };
  //   r19 = dyn sys_function1(p3);
  //   return r19;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_3, 0, NULL, CCP, RHO);
  // r21 = dyn r17(p4, "derivedDefaultMethod")
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r17_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L52() else D9()
  // L52()
  goto L52_;

D9_:;
  // deopt 34 [c15, c16, c17, r21]
  SEXP Rsh_Fir_array_deopt_stack8[4];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(34, 4, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L52_:;
  // c24 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args47);
  // c25 = `&&`(c17, c24)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args48);
  // goto L8(c15, c16, c25)
  // L8(c15, c16, c25)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c25_;
  goto L8_;

L54_:;
  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard3 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r24 = dyn __1(<lang sys.function(`-`(1))>, <sym generic>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names10, CCP, RHO);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L57() else D10()
  // L57()
  goto L57_;

L56_:;
  // r22 = dyn base3(<lang `@`(sys.function(`-`(1)), generic)>, <lang structure("as.data.frame", package="base")>)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(c21, c22, c29, r22)
  // L10(c21, c22, c29, r22)
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L10_;

D10_:;
  // deopt 41 [c21, c22, c29]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_c29_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L57_:;
  // r25 = dyn structure[, package]("as.data.frame", "base")
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L58() else D11()
  // L58()
  goto L58_;

D11_:;
  // deopt 45 [c21, c22, c29, r25]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_c29_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(45, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L58_:;
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r26 = dyn identical1(r24, r25, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args53[9];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args53[3] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args53[4] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args53[5] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args53[6] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args53[7] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args53[8] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names13[9];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_array_arg_names13[6] = R_MissingArg;
  Rsh_Fir_array_arg_names13[7] = R_MissingArg;
  Rsh_Fir_array_arg_names13[8] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L59() else D12()
  // L59()
  goto L59_;

D12_:;
  // deopt 54 [c21, c22, c29, r26]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_c29_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(54, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L10(c21, c22, c29, r26)
  // L10(c21, c22, c29, r26)
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r26_;
  goto L10_;

L63_:;
  // _Deprecated = ldf `.Deprecated`
  Rsh_Fir_reg__Deprecated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L64() else D13()
  // L64()
  goto L64_;

D13_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L64_:;
  // p5 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   r28 = dyn gettextf("Direct call of '%s()' is deprecated.  Use '%s()' or '%s()' instead", "as.data.frame.Date", "as.data.frame.vector", "as.data.frame");
  //   return r28;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_5, 0, NULL, CCP, RHO);
  // r30 = dyn _Deprecated[msg](p5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Deprecated, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L65() else D14()
  // L65()
  goto L65_;

D14_:;
  // deopt 63 [r30]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L12()
  // L12()
  goto L12_;

D15_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // p6 = prom<V +>{
  //   nm1 = ld nm;
  //   nm2 = force? nm1;
  //   checkMissing(nm2);
  //   return nm2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_6, 0, NULL, CCP, RHO);
  // r33 = dyn force(p6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_force, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L68() else D16()
  // L68()
  goto L68_;

D16_:;
  // deopt 69 [r33]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L68_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard4 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L69_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L71() else D17()
  // L71()
  goto L71_;

L70_:;
  // r34 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L13(r34)
  // L13(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L13_;

D17_:;
  // deopt 72 [x1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L71_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r36 = dyn length(x2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L72() else D18()
  // L72()
  goto L72_;

D18_:;
  // deopt 75 [r36]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L13(r36)
  // L13(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L13_;

L73_:;
  // row_names1 = ld `row.names`
  Rsh_Fir_reg_row_names1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L75() else D19()
  // L75()
  goto L75_;

L74_:;
  // r37 = dyn base5(<sym row.names>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L14(r37)
  // L14(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L14_;

D19_:;
  // deopt 78 [row_names1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_row_names1_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L75_:;
  // row_names2 = force? row_names1
  Rsh_Fir_reg_row_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names1_);
  // checkMissing(row_names2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_row_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c58 = `==`(row_names2, NULL)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_row_names2_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args64);
  // goto L14(c58)
  // L14(c58)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_c58_;
  goto L14_;

L76_:;
  // nrows = ld nrows
  Rsh_Fir_reg_nrows = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L77() else D20()
  // L77()
  goto L77_;

D20_:;
  // deopt 81 [nrows]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_nrows;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L77_:;
  // nrows1 = force? nrows
  Rsh_Fir_reg_nrows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows);
  // checkMissing(nrows1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_nrows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r39 = `==`(nrows1, 0)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_nrows1_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args66);
  // c60 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args67);
  // if c60 then L78() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L78()
    goto L78_;
  } else {
  // L16()
    goto L16_;
  }

L78_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L79() else D21()
  // L79()
  goto L79_;

D21_:;
  // deopt 86 []
  Rsh_Fir_deopt(86, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // r40 = dyn character()
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L80() else D22()
  // L80()
  goto L80_;

D22_:;
  // deopt 87 [r40]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L80_:;
  // st `row.names` = r40
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L17(r40)
  // L17(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L17_;

L82_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard7 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L83_:;
  // r42 = dyn base6(<lang `<-`(row.names, names(x))>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L18(r42)
  // L18(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L18_;

L84_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L86() else D23()
  // L86()
  goto L86_;

L85_:;
  // r44 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L19(r44)
  // L19(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L19_;

D23_:;
  // deopt 93 [x3]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L86_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r46 = dyn names(x4)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L87() else D24()
  // L87()
  goto L87_;

D24_:;
  // deopt 96 [r46]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L19(r46)
  // L19(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L19_;

D25_:;
  // deopt 99 [r47]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L18(r47)
  // L18(r47)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r47_;
  goto L18_;

D26_:;
  // deopt 99 [r43, nrows2]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_nrows2_;
  Rsh_Fir_deopt(99, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L89_:;
  // nrows3 = force? nrows2
  Rsh_Fir_reg_nrows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows2_);
  // checkMissing(nrows3)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_nrows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // r48 = `!=`(r43, nrows3)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_nrows3_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args74);
  // c61 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args75);
  // if c61 then L20(c61) else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L20(c61)
    Rsh_Fir_reg_c62_ = Rsh_Fir_reg_c61_;
    goto L20_;
  } else {
  // L90()
    goto L90_;
  }

L90_:;
  // anyDuplicated = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L91() else D27()
  // L91()
  goto L91_;

D27_:;
  // deopt 103 [c61]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_c61_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L91_:;
  // p7 = prom<V +>{
  //   row_names3 = ld `row.names`;
  //   row_names4 = force? row_names3;
  //   checkMissing(row_names4);
  //   return row_names4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_7, 0, NULL, CCP, RHO);
  // r50 = dyn anyDuplicated(p7)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L92() else D28()
  // L92()
  goto L92_;

D28_:;
  // deopt 105 [c61, r50]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c61_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L92_:;
  // c64 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args78);
  // c65 = `||`(c61, c64)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_c61_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_c64_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args79);
  // goto L20(c65)
  // L20(c65)
  Rsh_Fir_reg_c62_ = Rsh_Fir_reg_c65_;
  goto L20_;

L94_:;
  // _set_row_names = ldf `.set_row_names`
  Rsh_Fir_reg__set_row_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L95() else D29()
  // L95()
  goto L95_;

D29_:;
  // deopt 108 []
  Rsh_Fir_deopt(108, 0, NULL, CCP, RHO);
  return R_NilValue;

L95_:;
  // p8 = prom<V +>{
  //   nrows4 = ld nrows;
  //   nrows5 = force? nrows4;
  //   checkMissing(nrows5);
  //   return nrows5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_8, 0, NULL, CCP, RHO);
  // r52 = dyn _set_row_names(p8)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__set_row_names, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L96() else D30()
  // L96()
  goto L96_;

D30_:;
  // deopt 110 [r52]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L96_:;
  // st `row.names` = r52
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // goto L17(r52)
  // L17(r52)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r52_;
  goto L17_;

L99_:;
  // row_names5 = ld `row.names`
  Rsh_Fir_reg_row_names5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L101() else D31()
  // L101()
  goto L101_;

L100_:;
  // r54 = dyn base8(<sym row.names>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L23(r54)
  // L23(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L23_;

D31_:;
  // deopt 115 [row_names5]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_row_names5_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L101_:;
  // row_names6 = force? row_names5
  Rsh_Fir_reg_row_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names5_);
  // checkMissing(row_names6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_row_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // c68 = `is.character`(row_names6)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_row_names6_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args84);
  // goto L23(c68)
  // L23(c68)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_c68_;
  goto L23_;

L102_:;
  // sym9 = ldf `is.integer`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base9 = ldf `is.integer` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard9 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L103_:;
  // row_names7 = ld `row.names`
  Rsh_Fir_reg_row_names7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L105() else D32()
  // L105()
  goto L105_;

L104_:;
  // r56 = dyn base9(<sym row.names>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L25(c69, r56)
  // L25(c69, r56)
  Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c69_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L25_;

D32_:;
  // deopt 119 [c69, row_names7]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_c69_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_row_names7_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L105_:;
  // row_names8 = force? row_names7
  Rsh_Fir_reg_row_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names7_);
  // checkMissing(row_names8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_row_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // c75 = `is.integer`(row_names8)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_row_names8_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_call_builtin(386, RHO, 1, Rsh_Fir_array_args88);
  // goto L25(c69, c75)
  // L25(c69, c75)
  Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c69_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_c75_;
  goto L25_;

L107_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard10 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L108_:;
  // row_names9 = ld `row.names`
  Rsh_Fir_reg_row_names9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L110() else D33()
  // L110()
  goto L110_;

L109_:;
  // r59 = dyn base10(<sym row.names>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L27(c79, r59)
  // L27(c79, r59)
  Rsh_Fir_reg_c84_ = Rsh_Fir_reg_c79_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L27_;

D33_:;
  // deopt 126 [c79, row_names9]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_c79_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_row_names9_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L110_:;
  // row_names10 = force? row_names9
  Rsh_Fir_reg_row_names10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names9_);
  // checkMissing(row_names10)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_row_names10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r61 = dyn length2(row_names10)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_row_names10_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L111() else D34()
  // L111()
  goto L111_;

D34_:;
  // deopt 129 [c79, r61]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_c79_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(129, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L27(c79, r61)
  // L27(c79, r61)
  Rsh_Fir_reg_c84_ = Rsh_Fir_reg_c79_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L27_;

D35_:;
  // deopt 129 [c84, r60, nrows6]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c84_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_nrows6_;
  Rsh_Fir_deopt(129, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L112_:;
  // nrows7 = force? nrows6
  Rsh_Fir_reg_nrows7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows6_);
  // checkMissing(nrows7)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_nrows7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // r62 = `!=`(r60, nrows7)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_nrows7_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args94);
  // c85 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c85_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args95);
  // c86 = `||`(c84, c85)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_c84_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_c85_;
  Rsh_Fir_reg_c86_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args96);
  // goto L26(c86)
  // L26(c86)
  Rsh_Fir_reg_c80_ = Rsh_Fir_reg_c86_;
  goto L26_;

L114_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L115() else D36()
  // L115()
  goto L115_;

D36_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L115_:;
  // p10 = prom<V +>{
  //   gettextf1 = ldf gettextf;
  //   p9 = prom<V +>{
  //     nrows8 = ld nrows;
  //     nrows9 = force? nrows8;
  //     checkMissing(nrows9);
  //     return nrows9;
  //   };
  //   r64 = dyn gettextf1("'row.names' is not a character or integer vector of length %d", p9);
  //   return r64;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_9, 0, NULL, CCP, RHO);
  // r66 = dyn stop[, domain](p10, NA_LGL)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L116() else D37()
  // L116()
  goto L116_;

D37_:;
  // deopt 138 [r66]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L22()
  // L22()
  goto L22_;

L118_:;
  // sym12 = ldf names
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base12 = ldf names in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard12 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L119_:;
  // r67 = dyn base11(<lang names(x)>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L29(r67)
  // L29(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L29_;

L120_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L122() else D38()
  // L122()
  goto L122_;

L121_:;
  // r69 = dyn base12(<sym x>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L30(r69)
  // L30(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L30_;

D38_:;
  // deopt 144 [x5]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L122_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r71 = dyn names1(x6)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L123() else D39()
  // L123()
  goto L123_;

D39_:;
  // deopt 147 [r71]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L30(r71)
  // L30(r71)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L30_;

L124_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L125() else D40()
  // L125()
  goto L125_;

D40_:;
  // deopt 153 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_const(CCP, 2);
  Rsh_Fir_deopt(153, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L125_:;
  // r73 = dyn names__(l, NULL, NULL)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args105[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L126() else D41()
  // L126()
  goto L126_;

D41_:;
  // deopt 155 [NULL, r73]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(155, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L126_:;
  // st x = r73
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // goto L32()
  // L32()
  goto L32_;

L128_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L130() else D42()
  // L130()
  goto L130_;

L129_:;
  // r75 = dyn base13(<sym x>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L33(r75)
  // L33(r75)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r75_;
  goto L33_;

D42_:;
  // deopt 161 [x7]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L130_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r77 = dyn list(x8)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L131() else D43()
  // L131()
  goto L131_;

D43_:;
  // deopt 164 [r77]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L33(r77)
  // L33(r77)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r77_;
  goto L33_;

D44_:;
  // deopt 166 [optional1]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_optional1_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L132_:;
  // optional2 = force? optional1
  Rsh_Fir_reg_optional2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional1_);
  // checkMissing(optional2)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_optional2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // r78 = `!`(optional2)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_optional2_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args110);
  // c91 = `as.logical`(r78)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c91_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args111);
  // if c91 then L133() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c91_)) {
  // L133()
    goto L133_;
  } else {
  // L34()
    goto L34_;
  }

L133_:;
  // nm3 = ld nm
  Rsh_Fir_reg_nm3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L134() else D45()
  // L134()
  goto L134_;

D45_:;
  // deopt 169 [nm3]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_nm3_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L134_:;
  // nm4 = force? nm3
  Rsh_Fir_reg_nm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm3_);
  // checkMissing(nm4)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_nm4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // l1 = ld value
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L135() else D46()
  // L135()
  goto L135_;

D46_:;
  // deopt 172 [nm4, l1, nm4]
  SEXP Rsh_Fir_array_deopt_stack40[3];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_nm4_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_nm4_;
  Rsh_Fir_deopt(172, 3, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L135_:;
  // r79 = dyn names__1(l1, NULL, nm4)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args113[2] = Rsh_Fir_reg_nm4_;
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L136() else D47()
  // L136()
  goto L136_;

D47_:;
  // deopt 174 [nm4, r79]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_nm4_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(174, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L136_:;
  // st value = r79
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // goto L35()
  // L35()
  goto L35_;

D48_:;
  // deopt 179 []
  Rsh_Fir_deopt(179, 0, NULL, CCP, RHO);
  return R_NilValue;

L138_:;
  // p11 = prom<V +>{
  //   value = ld value;
  //   value1 = force? value;
  //   checkMissing(value1);
  //   return value1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   row_names11 = ld `row.names`;
  //   row_names12 = force? row_names11;
  //   checkMissing(row_names12);
  //   return row_names12;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_12, 0, NULL, CCP, RHO);
  // r82 = dyn structure1[, `row.names`, class](p11, p12, "data.frame")
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args116[2] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names38[2] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure1_, 3, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L139() else D49()
  // L139()
  goto L139_;

D49_:;
  // deopt 185 [r82]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L139_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r82
  return Rsh_Fir_reg_r82_;
}
SEXP Rsh_Fir_user_promise_inner193142209_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // p = prom<V +>{
  //   sym = ldf substitute;
  //   base = ldf substitute in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   substitute = ldf substitute in base;
  //   r2 = dyn substitute(<sym x>);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_1, 0, NULL, CCP, RHO);
  // r4 = dyn deparse1(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner193142209_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // sym = ldf substitute
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf substitute in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
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
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner193142209_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // return -1
  return Rsh_const(CCP, 24);
}
SEXP Rsh_Fir_user_promise_inner193142209_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_function1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // sys_function1 = ldf `sys.function`
  Rsh_Fir_reg_sys_function1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // p3 = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_4, 0, NULL, CCP, RHO);
  // r19 = dyn sys_function1(p3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function1_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_inner193142209_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // return -1
  return Rsh_const(CCP, 24);
}
SEXP Rsh_Fir_user_promise_inner193142209_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // r28 = dyn gettextf("Direct call of '%s()' is deprecated.  Use '%s()' or '%s()' instead", "as.data.frame.Date", "as.data.frame.vector", "as.data.frame")
  SEXP Rsh_Fir_array_args54[4];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args54[3] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 4, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_inner193142209_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nm1_;
  SEXP Rsh_Fir_reg_nm2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // nm1 = ld nm
  Rsh_Fir_reg_nm1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // nm2 = force? nm1
  Rsh_Fir_reg_nm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm1_);
  // checkMissing(nm2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_nm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return nm2
  return Rsh_Fir_reg_nm2_;
}
SEXP Rsh_Fir_user_promise_inner193142209_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row_names3_;
  SEXP Rsh_Fir_reg_row_names4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // row_names3 = ld `row.names`
  Rsh_Fir_reg_row_names3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // row_names4 = force? row_names3
  Rsh_Fir_reg_row_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names3_);
  // checkMissing(row_names4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_row_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return row_names4
  return Rsh_Fir_reg_row_names4_;
}
SEXP Rsh_Fir_user_promise_inner193142209_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrows4_;
  SEXP Rsh_Fir_reg_nrows5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // nrows4 = ld nrows
  Rsh_Fir_reg_nrows4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nrows5 = force? nrows4
  Rsh_Fir_reg_nrows5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows4_);
  // checkMissing(nrows5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_nrows5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return nrows5
  return Rsh_Fir_reg_nrows5_;
}
SEXP Rsh_Fir_user_promise_inner193142209_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r64_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // p9 = prom<V +>{
  //   nrows8 = ld nrows;
  //   nrows9 = force? nrows8;
  //   checkMissing(nrows9);
  //   return nrows9;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner193142209_10, 0, NULL, CCP, RHO);
  // r64 = dyn gettextf1("'row.names' is not a character or integer vector of length %d", p9)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names29, CCP, RHO);
  // return r64
  return Rsh_Fir_reg_r64_;
}
SEXP Rsh_Fir_user_promise_inner193142209_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nrows8_;
  SEXP Rsh_Fir_reg_nrows9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // nrows8 = ld nrows
  Rsh_Fir_reg_nrows8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nrows9 = force? nrows8
  Rsh_Fir_reg_nrows9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows8_);
  // checkMissing(nrows9)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_nrows9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return nrows9
  return Rsh_Fir_reg_nrows9_;
}
SEXP Rsh_Fir_user_promise_inner193142209_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_value1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner193142209_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_row_names11_;
  SEXP Rsh_Fir_reg_row_names12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner193142209/0: expected 0, got %d", NCAPTURES);

  // row_names11 = ld `row.names`
  Rsh_Fir_reg_row_names11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // row_names12 = force? row_names11
  Rsh_Fir_reg_row_names12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names11_);
  // checkMissing(row_names12)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_row_names12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // return row_names12
  return Rsh_Fir_reg_row_names12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
