#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3995949200_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3995949200_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3995949200_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3995949200_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner3995949200
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3995949200_, RHO, CCP);
  // st `as.data.frame.list` = r
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
SEXP Rsh_Fir_user_function_inner3995949200_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3995949200 dynamic dispatch ([x, `row.names`, optional, `...`, `cut.names`, `col.names`, `fix.empty.names`, `new.names`, `check.names`, stringsAsFactors])

  return Rsh_Fir_user_version_inner3995949200_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3995949200_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3995949200 version 0 (*, *, *, dots, *, *, *, *, *, * -+> V)

  if (NPARAMS != 10) Rsh_error("FIŘ arity mismatch for inner3995949200/0: expected 10, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_row_names;
  SEXP Rsh_Fir_reg_optional;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_cut_names;
  SEXP Rsh_Fir_reg_col_names;
  SEXP Rsh_Fir_reg_fix_empty_names;
  SEXP Rsh_Fir_reg_new_names;
  SEXP Rsh_Fir_reg_check_names;
  SEXP Rsh_Fir_reg_stringsAsFactors;
  SEXP Rsh_Fir_reg_row_names_isMissing;
  SEXP Rsh_Fir_reg_row_names_orDefault;
  SEXP Rsh_Fir_reg_optional_isMissing;
  SEXP Rsh_Fir_reg_optional_orDefault;
  SEXP Rsh_Fir_reg_cut_names_isMissing;
  SEXP Rsh_Fir_reg_cut_names_orDefault;
  SEXP Rsh_Fir_reg_col_names_isMissing;
  SEXP Rsh_Fir_reg_col_names_orDefault;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_fix_empty_names_isMissing;
  SEXP Rsh_Fir_reg_fix_empty_names_orDefault;
  SEXP Rsh_Fir_reg_new_names_isMissing;
  SEXP Rsh_Fir_reg_new_names_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_check_names_isMissing;
  SEXP Rsh_Fir_reg_check_names_orDefault;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_stringsAsFactors_isMissing;
  SEXP Rsh_Fir_reg_stringsAsFactors_orDefault;
  SEXP Rsh_Fir_reg_cut_names1_;
  SEXP Rsh_Fir_reg_cut_names2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_cut_names3_;
  SEXP Rsh_Fir_reg_cut_names4_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_cut_names5_;
  SEXP Rsh_Fir_reg_cut_names6_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_col_names1_;
  SEXP Rsh_Fir_reg_col_names2_;
  SEXP Rsh_Fir_reg_nchar;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_maxL;
  SEXP Rsh_Fir_reg_maxL1_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_long2_;
  SEXP Rsh_Fir_reg_long3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_formals;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_col_names7_;
  SEXP Rsh_Fir_reg_col_names8_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_m4_;
  SEXP Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_new_names1_;
  SEXP Rsh_Fir_reg_new_names2_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_any_m;
  SEXP Rsh_Fir_reg_any_m1_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_cut_names7_;
  SEXP Rsh_Fir_reg_cut_names8_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_col_names13_;
  SEXP Rsh_Fir_reg_col_names14_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_check_names1_;
  SEXP Rsh_Fir_reg_check_names2_;
  SEXP Rsh_Fir_reg_fix_empty_names1_;
  SEXP Rsh_Fir_reg_fix_empty_names2_;
  SEXP Rsh_Fir_reg_stringsAsFactors1_;
  SEXP Rsh_Fir_reg_stringsAsFactors2_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_row_names1_;
  SEXP Rsh_Fir_reg_row_names2_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_do_call;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_new_names3_;
  SEXP Rsh_Fir_reg_new_names4_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_check_names3_;
  SEXP Rsh_Fir_reg_check_names4_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_col_names16_;
  SEXP Rsh_Fir_reg_col_names17_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_col_names18_;
  SEXP Rsh_Fir_reg_col_names19_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_any2_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_col_names20_;
  SEXP Rsh_Fir_reg_col_names21_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_col_names23_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_naNm;
  SEXP Rsh_Fir_reg_naNm1_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_names3_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_c61_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_naNm2_;
  SEXP Rsh_Fir_reg_naNm3_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_names__1_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_any_m2_;
  SEXP Rsh_Fir_reg_any_m3_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_sub;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_names__2_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_row_names = PARAMS[1];
  Rsh_Fir_reg_optional = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];
  Rsh_Fir_reg_cut_names = PARAMS[4];
  Rsh_Fir_reg_col_names = PARAMS[5];
  Rsh_Fir_reg_fix_empty_names = PARAMS[6];
  Rsh_Fir_reg_new_names = PARAMS[7];
  Rsh_Fir_reg_check_names = PARAMS[8];
  Rsh_Fir_reg_stringsAsFactors = PARAMS[9];

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
  // cut_names_isMissing = missing.0(cut_names)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_cut_names;
  Rsh_Fir_reg_cut_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if cut_names_isMissing then L2(FALSE) else L2(cut_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cut_names_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_cut_names_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(cut_names)
    Rsh_Fir_reg_cut_names_orDefault = Rsh_Fir_reg_cut_names;
    goto L2_;
  }

L2_:;
  // st `cut.names` = cut_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_cut_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_cut_names_orDefault);
  // col_names_isMissing = missing.0(col_names)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_col_names;
  Rsh_Fir_reg_col_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if col_names_isMissing then L3() else L4(col_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_names_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(col_names)
    Rsh_Fir_reg_col_names_orDefault = Rsh_Fir_reg_col_names;
    goto L4_;
  }

L3_:;
  // p = prom<V +>{
  //   sym = ldf names;
  //   base = ldf names in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   names = ldf names in base;
  //   r2 = dyn names(x2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_, 0, NULL, CCP, RHO);
  // goto L4(p)
  // L4(p)
  Rsh_Fir_reg_col_names_orDefault = Rsh_Fir_reg_p;
  goto L4_;

L4_:;
  // st `col.names` = col_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_col_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_names_orDefault);
  // fix_empty_names_isMissing = missing.0(fix_empty_names)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_fix_empty_names;
  Rsh_Fir_reg_fix_empty_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if fix_empty_names_isMissing then L5(TRUE) else L5(fix_empty_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fix_empty_names_isMissing)) {
  // L5(TRUE)
    Rsh_Fir_reg_fix_empty_names_orDefault = Rsh_const(CCP, 10);
    goto L5_;
  } else {
  // L5(fix_empty_names)
    Rsh_Fir_reg_fix_empty_names_orDefault = Rsh_Fir_reg_fix_empty_names;
    goto L5_;
  }

L5_:;
  // st `fix.empty.names` = fix_empty_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_fix_empty_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_fix_empty_names_orDefault);
  // new_names_isMissing = missing.0(new_names)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_new_names;
  Rsh_Fir_reg_new_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if new_names_isMissing then L6() else L7(new_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_new_names_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(new_names)
    Rsh_Fir_reg_new_names_orDefault = Rsh_Fir_reg_new_names;
    goto L7_;
  }

L6_:;
  // p1 = prom<V +>{
  //   sym1 = ldf missing;
  //   base1 = ldf missing in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   r7 = `!`(r5);
  //   return r7;
  // L1():
  //   missing = ldf missing in base;
  //   r6 = dyn missing(<sym col.names>);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym col.names>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_1, 0, NULL, CCP, RHO);
  // goto L7(p1)
  // L7(p1)
  Rsh_Fir_reg_new_names_orDefault = Rsh_Fir_reg_p1_;
  goto L7_;

L7_:;
  // st `new.names` = new_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_new_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_new_names_orDefault);
  // check_names_isMissing = missing.0(check_names)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_check_names;
  Rsh_Fir_reg_check_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if check_names_isMissing then L8() else L9(check_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_check_names_isMissing)) {
  // L8()
    goto L8_;
  } else {
  // L9(check_names)
    Rsh_Fir_reg_check_names_orDefault = Rsh_Fir_reg_check_names;
    goto L9_;
  }

L8_:;
  // p2 = prom<V +>{
  //   optional1 = ld optional;
  //   optional2 = force? optional1;
  //   checkMissing(optional2);
  //   r9 = `!`(optional2);
  //   return r9;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_2, 0, NULL, CCP, RHO);
  // goto L9(p2)
  // L9(p2)
  Rsh_Fir_reg_check_names_orDefault = Rsh_Fir_reg_p2_;
  goto L9_;

L9_:;
  // st `check.names` = check_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_check_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_check_names_orDefault);
  // stringsAsFactors_isMissing = missing.0(stringsAsFactors)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_stringsAsFactors;
  Rsh_Fir_reg_stringsAsFactors_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if stringsAsFactors_isMissing then L10(FALSE) else L10(stringsAsFactors)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_stringsAsFactors_isMissing)) {
  // L10(FALSE)
    Rsh_Fir_reg_stringsAsFactors_orDefault = Rsh_const(CCP, 4);
    goto L10_;
  } else {
  // L10(stringsAsFactors)
    Rsh_Fir_reg_stringsAsFactors_orDefault = Rsh_Fir_reg_stringsAsFactors;
    goto L10_;
  }

L10_:;
  // st stringsAsFactors = stringsAsFactors_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_stringsAsFactors_orDefault, RHO);
  (void)(Rsh_Fir_reg_stringsAsFactors_orDefault);
  // cut_names1 = ld `cut.names`
  Rsh_Fir_reg_cut_names1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L52() else D0()
  // L52()
  goto L52_;

L11_:;
  // goto L20()
  // L20()
  goto L20_;

L12_:;
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c2 then L57() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L57()
    goto L57_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L14_:;
  // st maxL = r13
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard4 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L15_:;
  // c3 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c3 then L71() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L71()
    goto L71_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // maxL = ld maxL
  Rsh_Fir_reg_maxL = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L69() else D6()
  // L69()
  goto L69_;

L17_:;
  // st `cut.names` = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // goto L19(FALSE)
  // L19(FALSE)
  Rsh_Fir_reg_r35_ = Rsh_const(CCP, 4);
  goto L19_;

L18_:;
  // st `col.names` = dx3
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L19(r33)
  // L19(r33)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r33_;
  goto L19_;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym6 = ldf match
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base6 = ldf match in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard6 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L21_:;
  // st m = r38
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym8 = ldf any
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base8 = ldf any in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard8 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L22_:;
  // c6 = `is.object`(r40)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args24);
  // if c6 then L87() else L88(r40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L87()
    goto L87_;
  } else {
  // L88(r40)
    Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r40_;
    goto L88_;
  }

L23_:;
  // col_names7 = ld `col.names`
  Rsh_Fir_reg_col_names7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L90() else D14()
  // L90()
  goto L90_;

L24_:;
  // st `any.m` = r49
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // c7 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c7 then L96() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L96()
    goto L96_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // goto L27()
  // L27()
  goto L27_;

L26_:;
  // st `col.names` = dx9
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // new_names1 = ld `new.names`
  Rsh_Fir_reg_new_names1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L104() else D21()
  // L104()
  goto L104_;

L28_:;
  // c16 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c16 then L29(c16) else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L29(c16)
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c16_;
    goto L29_;
  } else {
  // L108()
    goto L108_;
  }

L29_:;
  // c22 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c22 then L111() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L111()
    goto L111_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard9 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L32_:;
  // st alis = r62
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L133() else D34()
  // L133()
  goto L133_;

L33_:;
  // sym11 = ldf missing
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base11 = ldf missing in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard11 then L124() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L124()
    goto L124_;
  } else {
  // L125()
    goto L125_;
  }

L34_:;
  // r69 = `!`(r67)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args30);
  // c23 = `as.logical`(r69)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c23 then L126() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L126()
    goto L126_;
  } else {
  // L35()
    goto L35_;
  }

L35_:;
  // goto L37(NULL)
  // L37(NULL)
  Rsh_Fir_reg_r73_ = Rsh_const(CCP, 2);
  goto L37_;

L36_:;
  // goto L37(r71)
  // L37(r71)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r71_;
  goto L37_;

L37_:;
  // c24 = ldf c in base
  Rsh_Fir_reg_c24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r74 = dyn c24(r64, r73)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c24_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L132() else D33()
  // L132()
  goto L132_;

L38_:;
  // c32 = `as.logical`(c28)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c32 then L139() else L39(c32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L139()
    goto L139_;
  } else {
  // L39(c32)
    Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c32_;
    goto L39_;
  }

L39_:;
  // c47 = `as.logical`(c34)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c47 then L152() else L43(c47)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L152()
    goto L152_;
  } else {
  // L43(c47)
    Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c47_;
    goto L43_;
  }

L40_:;
  // sym16 = ldf length
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base16 = ldf length in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard16 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L41_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r87 = dyn length(r85)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L146() else D40()
  // L146()
  goto L146_;

L42_:;
  // r94 = `==`(r91, r92)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args37);
  // c44 = `as.logical`(r94)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // c45 = `&&`(c43, c44)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c43_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args39);
  // goto L39(c45)
  // L39(c45)
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c45_;
  goto L39_;

L43_:;
  // c59 = `as.logical`(c49)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c59 then L161() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L161()
    goto L161_;
  } else {
  // L46()
    goto L46_;
  }

L44_:;
  // c56 = `as.logical`(r96)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // c57 = `&&`(c52, c56)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_c52_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args42);
  // goto L43(c57)
  // L43(c57)
  Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c57_;
  goto L43_;

L45_:;
  // st naNm = r98
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r98_, RHO);
  (void)(Rsh_Fir_reg_r98_);
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r100 = dyn any2(r98)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L159() else D45()
  // L159()
  goto L159_;

L46_:;
  // goto L49()
  // L49()
  goto L49_;

L47_:;
  // l7 = ld x
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names3 = ldf names
  Rsh_Fir_reg_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L167() else D48()
  // L167()
  goto L167_;

L48_:;
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L173() else D51()
  // L173()
  goto L173_;

L49_:;
  // any_m2 = ld `any.m`
  Rsh_Fir_reg_any_m2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L176() else D53()
  // L176()
  goto L176_;

L50_:;
  // goto L51()
  // L51()
  goto L51_;

L51_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L183() else D58()
  // L183()
  goto L183_;

D0_:;
  // deopt 0 [cut_names1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_cut_names1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L52_:;
  // cut_names2 = force? cut_names1
  Rsh_Fir_reg_cut_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cut_names1_);
  // checkMissing(cut_names2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_cut_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(cut_names2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_cut_names2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c then L53() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L53()
    goto L53_;
  } else {
  // L11()
    goto L11_;
  }

L53_:;
  // sym2 = ldf `is.logical`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base2 = ldf `is.logical` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard2 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // cut_names3 = ld `cut.names`
  Rsh_Fir_reg_cut_names3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L56() else D1()
  // L56()
  goto L56_;

L55_:;
  // r11 = dyn base2(<sym cut.names>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L12(r11)
  // L12(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L12_;

D1_:;
  // deopt 3 [cut_names3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_cut_names3_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L56_:;
  // cut_names4 = force? cut_names3
  Rsh_Fir_reg_cut_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cut_names3_);
  // checkMissing(cut_names4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_cut_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c1 = `is.logical`(cut_names4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_cut_names4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args49);
  // goto L12(c1)
  // L12(c1)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_c1_;
  goto L12_;

L57_:;
  // goto L14(256)
  // L14(256)
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 29);
  goto L14_;

L59_:;
  // cut_names5 = ld `cut.names`
  Rsh_Fir_reg_cut_names5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L61() else D2()
  // L61()
  goto L61_;

L60_:;
  // r14 = dyn base3(<sym cut.names>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L14(r14)
  // L14(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L14_;

D2_:;
  // deopt 10 [cut_names5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_cut_names5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L61_:;
  // cut_names6 = force? cut_names5
  Rsh_Fir_reg_cut_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cut_names5_);
  // checkMissing(cut_names6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_cut_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r15 = dyn as_integer(cut_names6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_cut_names6_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L62() else D3()
  // L62()
  goto L62_;

D3_:;
  // deopt 13 [r15]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L14(r15)
  // L14(r15)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L14_;

L63_:;
  // sym5 = ldf nchar
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base5 = ldf nchar in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard5 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L64_:;
  // r16 = dyn base4(<lang `<-`(long, `>`(nchar(col.names, "bytes", keepNA=FALSE), maxL))>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L15(r16)
  // L15(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L15_;

L65_:;
  // col_names1 = ld `col.names`
  Rsh_Fir_reg_col_names1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L67() else D4()
  // L67()
  goto L67_;

L66_:;
  // r18 = dyn base5[, , keepNA](<sym col.names>, "bytes", FALSE)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args55[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L16(r18)
  // L16(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L16_;

D4_:;
  // deopt 19 [col_names1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_col_names1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L67_:;
  // col_names2 = force? col_names1
  Rsh_Fir_reg_col_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_names1_);
  // checkMissing(col_names2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_col_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r20 = dyn nchar(col_names2, "bytes", FALSE, FALSE)
  SEXP Rsh_Fir_array_args57[4];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_col_names2_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args57[3] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L68() else D5()
  // L68()
  goto L68_;

D5_:;
  // deopt 25 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L16(r20)
  // L16(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L16_;

D6_:;
  // deopt 25 [r19, maxL]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_maxL;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L69_:;
  // maxL1 = force? maxL
  Rsh_Fir_reg_maxL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxL);
  // checkMissing(maxL1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_maxL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r21 = `>`(r19, maxL1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_maxL1_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args59);
  // st long = r21
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r22 = dyn any(r21)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L70() else D7()
  // L70()
  goto L70_;

D7_:;
  // deopt 30 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L15(r22)
  // L15(r22)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r22_;
  goto L15_;

L71_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L72() else D8()
  // L72()
  goto L72_;

D8_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L72_:;
  // p5 = prom<V +>{
  //   substr = ldf substr;
  //   p3 = prom<V +>{
  //     col_names3 = ld `col.names`;
  //     col_names4 = force? col_names3;
  //     checkMissing(col_names4);
  //     c4 = `is.object`(col_names4);
  //     if c4 then L1() else L2(col_names4);
  //   L0(dx1):
  //     return dx1;
  //   L1():
  //     dr = tryDispatchBuiltin.1("[", col_names4);
  //     dc = getTryDispatchBuiltinDispatched(dr);
  //     if dc then L3() else L2(dr);
  //   L2(col_names6):
  //     long = ld long;
  //     long1 = force? long;
  //     __ = ldf `[` in base;
  //     r23 = dyn __(col_names6, long1);
  //     goto L0(r23);
  //   L3():
  //     dx = getTryDispatchBuiltinValue(dr);
  //     goto L0(dx);
  //   };
  //   p4 = prom<V +>{
  //     maxL2 = ld maxL;
  //     maxL3 = force? maxL2;
  //     checkMissing(maxL3);
  //     r25 = `-`(maxL3, 6);
  //     return r25;
  //   };
  //   r27 = dyn substr(p3, 1, p4);
  //   return r27;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_3, 0, NULL, CCP, RHO);
  // r29 = dyn paste(p5, "...")
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L73() else D9()
  // L73()
  goto L73_;

D9_:;
  // deopt 35 [r29]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L73_:;
  // l = ld `col.names`
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c5 = `is.object`(l)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args71);
  // if c5 then L74() else L75(r29, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L74()
    goto L74_;
  } else {
  // L75(r29, l)
    Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r29_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L75_;
  }

L74_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, r29)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args72);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc1 then L76() else L75(r29, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L76()
    goto L76_;
  } else {
  // L75(r29, dr2)
    Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r29_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L75_;
  }

L75_:;
  // long2 = ld long
  Rsh_Fir_reg_long2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L77() else D10()
  // L77()
  goto L77_;

L76_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L18(r29, dx2)
  // L18(r29, dx2)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L18_;

D10_:;
  // deopt 37 [r31, l2, r29, long2]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_long2_;
  Rsh_Fir_deopt(37, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L77_:;
  // long3 = force? long2
  Rsh_Fir_reg_long3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_long2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r34 = dyn ___(l2, r29, long3)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_long3_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L18(r31, r34)
  // L18(r31, r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r34_;
  goto L18_;

L80_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard7 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L81_:;
  // r37 = dyn base6(<lang `[`(names(formals(data.frame)), `-`(1))>, <sym col.names>, 0)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L21(r37)
  // L21(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L21_;

L82_:;
  // formals = ldf formals
  Rsh_Fir_reg_formals = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L84() else D11()
  // L84()
  goto L84_;

L83_:;
  // r39 = dyn base7(<lang formals(data.frame)>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L22(r39)
  // L22(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L22_;

D11_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L84_:;
  // p6 = prom<V +>{
  //   data_frame = ld `data.frame`;
  //   data_frame1 = force? data_frame;
  //   checkMissing(data_frame1);
  //   return data_frame1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_6, 0, NULL, CCP, RHO);
  // r42 = dyn formals(p6)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L85() else D12()
  // L85()
  goto L85_;

D12_:;
  // deopt 53 [r42]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L85_:;
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r43 = dyn names1(r42)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L86() else D13()
  // L86()
  goto L86_;

D13_:;
  // deopt 55 [r43]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L22(r43)
  // L22(r43)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r43_;
  goto L22_;

L87_:;
  // dr4 = tryDispatchBuiltin.1("[", r40)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args82);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if dc2 then L89() else L88(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L89()
    goto L89_;
  } else {
  // L88(dr4)
    Rsh_Fir_reg_r45_ = Rsh_Fir_reg_dr4_;
    goto L88_;
  }

L88_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r46 = dyn __1(r45, -1)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L23(r46)
  // L23(r46)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r46_;
  goto L23_;

L89_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L23(dx4)
  // L23(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L23_;

D14_:;
  // deopt 59 [col_names7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_col_names7_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L90_:;
  // col_names8 = force? col_names7
  Rsh_Fir_reg_col_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_names7_);
  // checkMissing(col_names8)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_col_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r47 = dyn match(dx5, col_names8, 0, NULL)
  SEXP Rsh_Fir_array_args87[4];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_col_names8_;
  Rsh_Fir_array_args87[2] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args87[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L91() else D15()
  // L91()
  goto L91_;

D15_:;
  // deopt 64 [r47]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L21(r47)
  // L21(r47)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r47_;
  goto L21_;

L92_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L94() else D16()
  // L94()
  goto L94_;

L93_:;
  // r48 = dyn base8(<sym m>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L24(r48)
  // L24(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L24_;

D16_:;
  // deopt 68 [m]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L94_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r50 = dyn any1(m1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L95() else D17()
  // L95()
  goto L95_;

D17_:;
  // deopt 71 [r50]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L24(r50)
  // L24(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L24_;

L96_:;
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L97() else D18()
  // L97()
  goto L97_;

D18_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // p7 = prom<V +>{
  //   col_names9 = ld `col.names`;
  //   col_names10 = force? col_names9;
  //   checkMissing(col_names10);
  //   c8 = `is.object`(col_names10);
  //   if c8 then L1() else L2(col_names10);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", col_names10);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(col_names12):
  //   m2 = ld m;
  //   m3 = force? m2;
  //   __2 = ldf `[` in base;
  //   r51 = dyn __2(col_names12, m3);
  //   goto L0(r51);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_7, 0, NULL, CCP, RHO);
  // r53 = dyn paste1("..adfl.", p7)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L98() else D19()
  // L98()
  goto L98_;

D19_:;
  // deopt 77 [r53]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L98_:;
  // l3 = ld `col.names`
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c9 = `is.object`(l3)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args98);
  // if c9 then L99() else L100(r53, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L99()
    goto L99_;
  } else {
  // L100(r53, l3)
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r53_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L100_;
  }

L99_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l3, r53)
  SEXP Rsh_Fir_array_args99[3];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args99[2] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args99);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if dc4 then L101() else L100(r53, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L101()
    goto L101_;
  } else {
  // L100(r53, dr8)
    Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r53_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr8_;
    goto L100_;
  }

L100_:;
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L102() else D20()
  // L102()
  goto L102_;

L101_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L26(r53, dx8)
  // L26(r53, dx8)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L26_;

D20_:;
  // deopt 79 [r55, l5, r53, m4]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_m4_;
  Rsh_Fir_deopt(79, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L102_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r58 = dyn ___1(l5, r53, m5)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L26(r55, r58)
  // L26(r55, r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r58_;
  goto L26_;

D21_:;
  // deopt 85 [new_names1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_new_names1_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L104_:;
  // new_names2 = force? new_names1
  Rsh_Fir_reg_new_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_names1_);
  // checkMissing(new_names2)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_new_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c10 = `as.logical`(new_names2)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_new_names2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args104);
  // if c10 then L28(c10) else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L28(c10)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c10_;
    goto L28_;
  } else {
  // L105()
    goto L105_;
  }

L105_:;
  // any_m = ld `any.m`
  Rsh_Fir_reg_any_m = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L106() else D22()
  // L106()
  goto L106_;

D22_:;
  // deopt 87 [c10, any_m]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_any_m;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L106_:;
  // any_m1 = force? any_m
  Rsh_Fir_reg_any_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_any_m);
  // checkMissing(any_m1)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_any_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c13 = `as.logical`(any_m1)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_any_m1_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args106);
  // c14 = `||`(c10, c13)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args107);
  // goto L28(c14)
  // L28(c14)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c14_;
  goto L28_;

L108_:;
  // cut_names7 = ld `cut.names`
  Rsh_Fir_reg_cut_names7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L109() else D23()
  // L109()
  goto L109_;

D23_:;
  // deopt 90 [c16, cut_names7]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_cut_names7_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L109_:;
  // cut_names8 = force? cut_names7
  Rsh_Fir_reg_cut_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cut_names7_);
  // checkMissing(cut_names8)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_cut_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // c19 = `as.logical`(cut_names8)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_cut_names8_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args109);
  // c20 = `||`(c16, c19)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args110);
  // goto L29(c20)
  // L29(c20)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c20_;
  goto L29_;

L111_:;
  // col_names13 = ld `col.names`
  Rsh_Fir_reg_col_names13_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L112() else D24()
  // L112()
  goto L112_;

D24_:;
  // deopt 93 [col_names13]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_col_names13_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L112_:;
  // col_names14 = force? col_names13
  Rsh_Fir_reg_col_names14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_names13_);
  // checkMissing(col_names14)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_col_names14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // l6 = ld x
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L113() else D25()
  // L113()
  goto L113_;

D25_:;
  // deopt 96 [col_names14, l6, col_names14]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_col_names14_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_col_names14_;
  Rsh_Fir_deopt(96, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L113_:;
  // r60 = dyn names__(l6, NULL, col_names14)
  SEXP Rsh_Fir_array_args112[3];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args112[2] = Rsh_Fir_reg_col_names14_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L114() else D26()
  // L114()
  goto L114_;

D26_:;
  // deopt 98 [col_names14, r60]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_col_names14_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L114_:;
  // st x = r60
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // goto L31()
  // L31()
  goto L31_;

L116_:;
  // sym10 = ldf list
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base10 = ldf list in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard10 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L117_:;
  // r61 = dyn base9(<lang list(check.names=check.names, fix.empty.names=fix.empty.names, stringsAsFactors=stringsAsFactors)>, <lang if(`!`(missing(row.names)), list(row.names=row.names))>)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L32(r61)
  // L32(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L32_;

L118_:;
  // check_names1 = ld `check.names`
  Rsh_Fir_reg_check_names1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L120() else D27()
  // L120()
  goto L120_;

L119_:;
  // r63 = dyn base10[`check.names`, `fix.empty.names`, stringsAsFactors](<sym check.names>, <sym fix.empty.names>, <sym stringsAsFactors>)
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args115[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names31[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names31[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L33(r63)
  // L33(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L33_;

D27_:;
  // deopt 106 [check_names1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_check_names1_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L120_:;
  // check_names2 = force? check_names1
  Rsh_Fir_reg_check_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_names1_);
  // checkMissing(check_names2)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_check_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // fix_empty_names1 = ld `fix.empty.names`
  Rsh_Fir_reg_fix_empty_names1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L121() else D28()
  // L121()
  goto L121_;

D28_:;
  // deopt 109 [fix_empty_names1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_fix_empty_names1_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L121_:;
  // fix_empty_names2 = force? fix_empty_names1
  Rsh_Fir_reg_fix_empty_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fix_empty_names1_);
  // checkMissing(fix_empty_names2)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_fix_empty_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // stringsAsFactors1 = ld stringsAsFactors
  Rsh_Fir_reg_stringsAsFactors1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L122() else D29()
  // L122()
  goto L122_;

D29_:;
  // deopt 112 [stringsAsFactors1]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_stringsAsFactors1_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L122_:;
  // stringsAsFactors2 = force? stringsAsFactors1
  Rsh_Fir_reg_stringsAsFactors2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stringsAsFactors1_);
  // checkMissing(stringsAsFactors2)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_stringsAsFactors2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r65 = dyn list(check_names2, fix_empty_names2, stringsAsFactors2)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_check_names2_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_fix_empty_names2_;
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_stringsAsFactors2_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 3, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L123() else D30()
  // L123()
  goto L123_;

D30_:;
  // deopt 116 [r65]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L33(r65)
  // L33(r65)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L33_;

L124_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r68 = dyn missing1(<sym row.names>)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L34(r68)
  // L34(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L34_;

L125_:;
  // r66 = dyn base11(<sym row.names>)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L34(r66)
  // L34(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L34_;

L126_:;
  // sym12 = ldf list
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base12 = ldf list in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard12 then L127() else L128()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L127()
    goto L127_;
  } else {
  // L128()
    goto L128_;
  }

L127_:;
  // row_names1 = ld `row.names`
  Rsh_Fir_reg_row_names1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L129() else D31()
  // L129()
  goto L129_;

L128_:;
  // r70 = dyn base12[`row.names`](<sym row.names>)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L36(r70)
  // L36(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L36_;

D31_:;
  // deopt 123 [row_names1]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_row_names1_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L129_:;
  // row_names2 = force? row_names1
  Rsh_Fir_reg_row_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names1_);
  // checkMissing(row_names2)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_row_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r72 = dyn list1(row_names2)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_row_names2_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L130() else D32()
  // L130()
  goto L130_;

D32_:;
  // deopt 127 [r72]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L130_:;
  // goto L36(r72)
  // L36(r72)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r72_;
  goto L36_;

D33_:;
  // deopt 131 [r74]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L132_:;
  // goto L32(r74)
  // L32(r74)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r74_;
  goto L32_;

D34_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L133_:;
  // p8 = prom<V +>{
  //   data_frame2 = ld `data.frame`;
  //   data_frame3 = force? data_frame2;
  //   checkMissing(data_frame3);
  //   return data_frame3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym13 = ldf c;
  //   base13 = ldf c in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r77):
  //   return r77;
  // L1():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   alis = ld alis;
  //   alis1 = force? alis;
  //   checkMissing(alis1);
  //   c25 = ldf c in base;
  //   r78 = dyn c25(x4, alis1);
  //   goto L0(r78);
  // L2():
  //   r76 = dyn base13(<sym x>, <sym alis>);
  //   goto L0(r76);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_9, 0, NULL, CCP, RHO);
  // r80 = dyn do_call(p8, p9)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L134() else D35()
  // L134()
  goto L134_;

D35_:;
  // deopt 137 [r80]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L134_:;
  // st x = r80
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // new_names3 = ld `new.names`
  Rsh_Fir_reg_new_names3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L135() else D36()
  // L135()
  goto L135_;

D36_:;
  // deopt 139 [new_names3]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_new_names3_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L135_:;
  // new_names4 = force? new_names3
  Rsh_Fir_reg_new_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_names3_);
  // checkMissing(new_names4)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_new_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c26 = `as.logical`(new_names4)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_new_names4_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args134);
  // if c26 then L136() else L38(c26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L136()
    goto L136_;
  } else {
  // L38(c26)
    Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c26_;
    goto L38_;
  }

L136_:;
  // check_names3 = ld `check.names`
  Rsh_Fir_reg_check_names3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L137() else D37()
  // L137()
  goto L137_;

D37_:;
  // deopt 141 [c26, check_names3]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_check_names3_;
  Rsh_Fir_deopt(141, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L137_:;
  // check_names4 = force? check_names3
  Rsh_Fir_reg_check_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_names3_);
  // checkMissing(check_names4)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_check_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // r81 = `!`(check_names4)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_check_names4_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args136);
  // c29 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args137);
  // c30 = `&&`(c26, c29)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args138);
  // goto L38(c30)
  // L38(c30)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c30_;
  goto L38_;

L139_:;
  // sym14 = ldf length
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base14 = ldf length in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args139);
  // if guard14 then L140() else L141()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L140()
    goto L140_;
  } else {
  // L141()
    goto L141_;
  }

L140_:;
  // sym15 = ldf names
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base15 = ldf names in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args140);
  // if guard15 then L142() else L143()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L142()
    goto L142_;
  } else {
  // L143()
    goto L143_;
  }

L141_:;
  // r82 = dyn base14(<lang names(x)>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L40(c32, r82)
  // L40(c32, r82)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L40_;

L142_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L144() else D38()
  // L144()
  goto L144_;

L143_:;
  // r84 = dyn base15(<sym x>)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L41(c32, r84)
  // L41(c32, r84)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L41_;

D38_:;
  // deopt 149 [c32, x5]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(149, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L144_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r86 = dyn names2(x6)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L145() else D39()
  // L145()
  goto L145_;

D39_:;
  // deopt 152 [c32, r86]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(152, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L145_:;
  // goto L41(c32, r86)
  // L41(c32, r86)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r86_;
  goto L41_;

D40_:;
  // deopt 154 [c40, r87]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_c40_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(154, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L146_:;
  // goto L40(c40, r87)
  // L40(c40, r87)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r87_;
  goto L40_;

L147_:;
  // col_names16 = ld `col.names`
  Rsh_Fir_reg_col_names16_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L149() else D41()
  // L149()
  goto L149_;

L148_:;
  // r90 = dyn base16(<sym col.names>)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L42(c37, r83, r90)
  // L42(c37, r83, r90)
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r90_;
  goto L42_;

D41_:;
  // deopt 156 [c37, r83, col_names16]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_col_names16_;
  Rsh_Fir_deopt(156, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L149_:;
  // col_names17 = force? col_names16
  Rsh_Fir_reg_col_names17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_names16_);
  // checkMissing(col_names17)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_col_names17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r93 = dyn length1(col_names17)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_col_names17_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L150() else D42()
  // L150()
  goto L150_;

D42_:;
  // deopt 159 [c37, r83, r93]
  SEXP Rsh_Fir_array_deopt_stack38[3];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(159, 3, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L150_:;
  // goto L42(c37, r83, r93)
  // L42(c37, r83, r93)
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r93_;
  goto L42_;

L152_:;
  // sym17 = ldf any
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base17 = ldf any in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args148);
  // if guard17 then L153() else L154()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L153()
    goto L153_;
  } else {
  // L154()
    goto L154_;
  }

L153_:;
  // sym18 = ldf `is.na`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // base18 = ldf `is.na` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args149);
  // if guard18 then L155() else L156()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L155()
    goto L155_;
  } else {
  // L156()
    goto L156_;
  }

L154_:;
  // r95 = dyn base17(<lang `<-`(naNm, is.na(col.names))>)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L44(c47, r95)
  // L44(c47, r95)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L44_;

L155_:;
  // col_names18 = ld `col.names`
  Rsh_Fir_reg_col_names18_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L157() else D43()
  // L157()
  goto L157_;

L156_:;
  // r97 = dyn base18(<sym col.names>)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L45(c47, r97)
  // L45(c47, r97)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r97_;
  goto L45_;

D43_:;
  // deopt 166 [c47, col_names18]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_col_names18_;
  Rsh_Fir_deopt(166, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L157_:;
  // col_names19 = force? col_names18
  Rsh_Fir_reg_col_names19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_names18_);
  // checkMissing(col_names19)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_col_names19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r99 = dyn is_na(col_names19)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_col_names19_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L158() else D44()
  // L158()
  goto L158_;

D44_:;
  // deopt 169 [c47, r99]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(169, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L158_:;
  // goto L45(c47, r99)
  // L45(c47, r99)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r99_;
  goto L45_;

D45_:;
  // deopt 172 [c55, r100]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_c55_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(172, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L159_:;
  // goto L44(c55, r100)
  // L44(c55, r100)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c55_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r100_;
  goto L44_;

L161_:;
  // col_names20 = ld `col.names`
  Rsh_Fir_reg_col_names20_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L162() else D46()
  // L162()
  goto L162_;

D46_:;
  // deopt 174 [col_names20]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_col_names20_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L162_:;
  // col_names21 = force? col_names20
  Rsh_Fir_reg_col_names21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_names20_);
  // checkMissing(col_names21)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_col_names21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // c60 = `is.object`(col_names21)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_col_names21_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args155);
  // if c60 then L163() else L164(col_names21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L163()
    goto L163_;
  } else {
  // L164(col_names21)
    Rsh_Fir_reg_col_names23_ = Rsh_Fir_reg_col_names21_;
    goto L164_;
  }

L163_:;
  // dr10 = tryDispatchBuiltin.1("[", col_names21)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_col_names21_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args156);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // if dc5 then L165() else L164(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L165()
    goto L165_;
  } else {
  // L164(dr10)
    Rsh_Fir_reg_col_names23_ = Rsh_Fir_reg_dr10_;
    goto L164_;
  }

L164_:;
  // naNm = ld naNm
  Rsh_Fir_reg_naNm = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L166() else D47()
  // L166()
  goto L166_;

L165_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // goto L47(dx10)
  // L47(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L47_;

D47_:;
  // deopt 176 [col_names23, naNm]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_col_names23_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_naNm;
  Rsh_Fir_deopt(176, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L166_:;
  // naNm1 = force? naNm
  Rsh_Fir_reg_naNm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_naNm);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r101 = dyn __3(col_names23, naNm1)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_col_names23_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_naNm1_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L47(r101)
  // L47(r101)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r101_;
  goto L47_;

D48_:;
  // deopt 180 [dx11, l7, dx11]
  SEXP Rsh_Fir_array_deopt_stack44[3];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_deopt(180, 3, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L167_:;
  // r102 = dyn names3(dx11, NULL)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names3_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L168() else D49()
  // L168()
  goto L168_;

D49_:;
  // deopt 182 [dx11, l7, dx11, r102]
  SEXP Rsh_Fir_array_deopt_stack45[4];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack45[3] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(182, 4, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L168_:;
  // c61 = `is.object`(r102)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args161);
  // if c61 then L169() else L170(dx11, l7, r102)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L169()
    goto L169_;
  } else {
  // L170(dx11, l7, r102)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r102_;
    goto L170_;
  }

L169_:;
  // dr12 = tryDispatchBuiltin.0("[<-", r102, dx11)
  SEXP Rsh_Fir_array_args162[3];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_args162[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args162);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if dc6 then L171() else L170(dx11, l7, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L171()
    goto L171_;
  } else {
  // L170(dx11, l7, dr12)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    Rsh_Fir_reg_r104_ = Rsh_Fir_reg_dr12_;
    goto L170_;
  }

L170_:;
  // naNm2 = ld naNm
  Rsh_Fir_reg_naNm2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L172() else D50()
  // L172()
  goto L172_;

L171_:;
  // dx15 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // goto L48(dx11, l7, dx15)
  // L48(dx11, l7, dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
  goto L48_;

D50_:;
  // deopt 184 [dx13, l9, r104, dx11, naNm2]
  SEXP Rsh_Fir_array_deopt_stack46[5];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_deopt_stack46[3] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack46[4] = Rsh_Fir_reg_naNm2_;
  Rsh_Fir_deopt(184, 5, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L172_:;
  // naNm3 = force? naNm2
  Rsh_Fir_reg_naNm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_naNm2_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r105 = dyn ___2(r104, dx11, naNm3)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args165[2] = Rsh_Fir_reg_naNm3_;
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L48(dx13, l9, r105)
  // L48(dx13, l9, r105)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r105_;
  goto L48_;

D51_:;
  // deopt 187 [dx16, l11, dx17]
  SEXP Rsh_Fir_array_deopt_stack47[3];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack47[2] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_deopt(187, 3, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L173_:;
  // r106 = dyn names__1(l11, NULL, dx17)
  SEXP Rsh_Fir_array_args166[3];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args166[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args166[2] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names51[3];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L174() else D52()
  // L174()
  goto L174_;

D52_:;
  // deopt 189 [dx16, r106]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(189, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L174_:;
  // st x = r106
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r106_, RHO);
  (void)(Rsh_Fir_reg_r106_);
  // goto L49()
  // L49()
  goto L49_;

D53_:;
  // deopt 193 [any_m2]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_any_m2_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L176_:;
  // any_m3 = force? any_m2
  Rsh_Fir_reg_any_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_any_m2_);
  // checkMissing(any_m3)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_any_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // c62 = `as.logical`(any_m3)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_any_m3_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args168);
  // if c62 then L177() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L177()
    goto L177_;
  } else {
  // L50()
    goto L50_;
  }

L177_:;
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L178() else D54()
  // L178()
  goto L178_;

D54_:;
  // deopt 196 []
  Rsh_Fir_deopt(196, 0, NULL, CCP, RHO);
  return R_NilValue;

L178_:;
  // p10 = prom<V +>{
  //   sym19 = ldf names;
  //   base19 = ldf names in base;
  //   guard19 = `==`.4(sym19, base19);
  //   if guard19 then L1() else L2();
  // L0(r108):
  //   return r108;
  // L1():
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   names4 = ldf names in base;
  //   r109 = dyn names4(x8);
  //   goto L0(r109);
  // L2():
  //   r107 = dyn base19(<sym x>);
  //   goto L0(r107);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_10, 0, NULL, CCP, RHO);
  // r111 = dyn sub("^\\.\\.adfl\\.", "", p10)
  SEXP Rsh_Fir_array_args173[3];
  Rsh_Fir_array_args173[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args173[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args173[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names54[3];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_array_arg_names54[2] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L179() else D55()
  // L179()
  goto L179_;

D55_:;
  // deopt 200 [r111]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L179_:;
  // l12 = ld x
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names__2 = ldf `names<-`
  Rsh_Fir_reg_names__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L180() else D56()
  // L180()
  goto L180_;

D56_:;
  // deopt 202 [r111, l12, r111]
  SEXP Rsh_Fir_array_deopt_stack51[3];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(202, 3, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L180_:;
  // r112 = dyn names__2(l12, NULL, r111)
  SEXP Rsh_Fir_array_args174[3];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args174[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args174[2] = Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_array_arg_names55[3];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__2_, 3, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L181() else D57()
  // L181()
  goto L181_;

D57_:;
  // deopt 204 [r111, r112]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(204, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L181_:;
  // st x = r112
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r112_, RHO);
  (void)(Rsh_Fir_reg_r112_);
  // goto L51()
  // L51()
  goto L51_;

D58_:;
  // deopt 208 [x9]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L183_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
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
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn names(x2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r7 = `!`(r5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args11);
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r6 = dyn missing(<sym col.names>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym col.names>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_optional1_;
  SEXP Rsh_Fir_reg_optional2_;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // optional1 = ld optional
  Rsh_Fir_reg_optional1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // optional2 = force? optional1
  Rsh_Fir_reg_optional2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional1_);
  // checkMissing(optional2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_optional2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r9 = `!`(optional2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_optional2_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args16);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_substr;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // substr = ldf substr
  Rsh_Fir_reg_substr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // p3 = prom<V +>{
  //   col_names3 = ld `col.names`;
  //   col_names4 = force? col_names3;
  //   checkMissing(col_names4);
  //   c4 = `is.object`(col_names4);
  //   if c4 then L1() else L2(col_names4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", col_names4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(col_names6):
  //   long = ld long;
  //   long1 = force? long;
  //   __ = ldf `[` in base;
  //   r23 = dyn __(col_names6, long1);
  //   goto L0(r23);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_4, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   maxL2 = ld maxL;
  //   maxL3 = force? maxL2;
  //   checkMissing(maxL3);
  //   r25 = `-`(maxL3, 6);
  //   return r25;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3995949200_5, 0, NULL, CCP, RHO);
  // r27 = dyn substr(p3, 1, p4)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr, 3, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names15, CCP, RHO);
  // return r27
  return Rsh_Fir_reg_r27_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_col_names3_;
  SEXP Rsh_Fir_reg_col_names4_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_col_names6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_long;
  SEXP Rsh_Fir_reg_long1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // col_names3 = ld `col.names`
  Rsh_Fir_reg_col_names3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // col_names4 = force? col_names3
  Rsh_Fir_reg_col_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_names3_);
  // checkMissing(col_names4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_col_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(col_names4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_col_names4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args62);
  // if c4 then L1() else L2(col_names4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L1()
    goto L1_;
  } else {
  // L2(col_names4)
    Rsh_Fir_reg_col_names6_ = Rsh_Fir_reg_col_names4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", col_names4)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_col_names4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_col_names6_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // long = ld long
  Rsh_Fir_reg_long = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // long1 = force? long
  Rsh_Fir_reg_long1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_long);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r23 = dyn __(col_names6, long1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_col_names6_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_long1_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r23_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_maxL2_;
  SEXP Rsh_Fir_reg_maxL3_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // maxL2 = ld maxL
  Rsh_Fir_reg_maxL2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // maxL3 = force? maxL2
  Rsh_Fir_reg_maxL3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxL2_);
  // checkMissing(maxL3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_maxL3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r25 = `-`(maxL3, 6)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_maxL3_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args68);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data_frame;
  SEXP Rsh_Fir_reg_data_frame1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // data_frame = ld `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // data_frame1 = force? data_frame
  Rsh_Fir_reg_data_frame1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data_frame);
  // checkMissing(data_frame1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_data_frame1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return data_frame1
  return Rsh_Fir_reg_data_frame1_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_col_names9_;
  SEXP Rsh_Fir_reg_col_names10_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_col_names12_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r51_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // col_names9 = ld `col.names`
  Rsh_Fir_reg_col_names9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // col_names10 = force? col_names9
  Rsh_Fir_reg_col_names10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_names9_);
  // checkMissing(col_names10)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_col_names10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(col_names10)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_col_names10_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args92);
  // if c8 then L1() else L2(col_names10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(col_names10)
    Rsh_Fir_reg_col_names12_ = Rsh_Fir_reg_col_names10_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", col_names10)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_col_names10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_col_names12_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r51 = dyn __2(col_names12, m3)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_col_names12_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r51)
  // L0(r51)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r51_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data_frame2_;
  SEXP Rsh_Fir_reg_data_frame3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // data_frame2 = ld `data.frame`
  Rsh_Fir_reg_data_frame2_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // data_frame3 = force? data_frame2
  Rsh_Fir_reg_data_frame3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data_frame2_);
  // checkMissing(data_frame3)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_data_frame3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // return data_frame3
  return Rsh_Fir_reg_data_frame3_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_alis;
  SEXP Rsh_Fir_reg_alis1_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_r78_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // sym13 = ldf c
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base13 = ldf c in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args127);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r77
  return Rsh_Fir_reg_r77_;

L1_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // alis = ld alis
  Rsh_Fir_reg_alis = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // alis1 = force? alis
  Rsh_Fir_reg_alis1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alis);
  // checkMissing(alis1)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_alis1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // c25 = ldf c in base
  Rsh_Fir_reg_c25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r78 = dyn c25(x4, alis1)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_alis1_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c25_, 2, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r78)
  // L0(r78)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r78_;
  goto L0_;

L2_:;
  // r76 = dyn base13(<sym x>, <sym alis>)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r76)
  // L0(r76)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r76_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3995949200_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_names4_;
  SEXP Rsh_Fir_reg_r109_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3995949200/0: expected 0, got %d", NCAPTURES);

  // sym19 = ldf names
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base19 = ldf names in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args169);
  // if guard19 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r108
  return Rsh_Fir_reg_r108_;

L1_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // names4 = ldf names in base
  Rsh_Fir_reg_names4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r109 = dyn names4(x8)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names4_, 1, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L0(r109)
  // L0(r109)
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r109_;
  goto L0_;

L2_:;
  // r107 = dyn base19(<sym x>)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L0(r107)
  // L0(r107)
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r107_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
