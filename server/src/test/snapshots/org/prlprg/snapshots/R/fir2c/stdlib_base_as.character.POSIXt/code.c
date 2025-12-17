#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner270580366_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner270580366_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner270580366_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner270580366_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner270580366
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner270580366_, RHO, CCP);
  // st `as.character.POSIXt` = r
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
SEXP Rsh_Fir_user_function_inner270580366_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner270580366 dynamic dispatch ([x, digits, OutDec, `...`])

  return Rsh_Fir_user_version_inner270580366_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner270580366_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner270580366 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner270580366/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_digits;
  SEXP Rsh_Fir_reg_OutDec;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_digits_isMissing;
  SEXP Rsh_Fir_reg_digits_orDefault;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_OutDec_isMissing;
  SEXP Rsh_Fir_reg_OutDec_orDefault;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg____names;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_force;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_digits3_;
  SEXP Rsh_Fir_reg_digits4_;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_balancePOSIXlt;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_s2_;
  SEXP Rsh_Fir_reg_s3_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_s4_;
  SEXP Rsh_Fir_reg_s5_;
  SEXP Rsh_Fir_reg_is_nan;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_time;
  SEXP Rsh_Fir_reg_time1_;
  SEXP Rsh_Fir_reg_is_finite;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_ok2_;
  SEXP Rsh_Fir_reg_ok3_;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_ok4_;
  SEXP Rsh_Fir_reg_ok5_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_isNA;
  SEXP Rsh_Fir_reg_isNA1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_ok6_;
  SEXP Rsh_Fir_reg_ok7_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_isNA2_;
  SEXP Rsh_Fir_reg_isNA3_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_s6_;
  SEXP Rsh_Fir_reg_s7_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_s9_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_ok8_;
  SEXP Rsh_Fir_reg_ok9_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_anyN;
  SEXP Rsh_Fir_reg_anyN1_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_ok10_;
  SEXP Rsh_Fir_reg_ok11_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_time2_;
  SEXP Rsh_Fir_reg_time3_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_time5_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_ok12_;
  SEXP Rsh_Fir_reg_ok13_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_time6_;
  SEXP Rsh_Fir_reg_time7_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_round;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_OutDec1_;
  SEXP Rsh_Fir_reg_OutDec2_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_options;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_on_exit;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_getOption1_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_digits5_;
  SEXP Rsh_Fir_reg_digits6_;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_options1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_on_exit1_;
  SEXP Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r157_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_r159_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dr34_;
  SEXP Rsh_Fir_reg_dc17_;
  SEXP Rsh_Fir_reg_dx43_;
  SEXP Rsh_Fir_reg_r161_;
  SEXP Rsh_Fir_reg_dx44_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r162_;
  SEXP Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_reg_r165_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_r167_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_dr36_;
  SEXP Rsh_Fir_reg_dc18_;
  SEXP Rsh_Fir_reg_dx45_;
  SEXP Rsh_Fir_reg_r169_;
  SEXP Rsh_Fir_reg_dx46_;
  SEXP Rsh_Fir_reg_ok14_;
  SEXP Rsh_Fir_reg_ok15_;
  SEXP Rsh_Fir_reg____3_;
  SEXP Rsh_Fir_reg_r170_;
  SEXP Rsh_Fir_reg_r172_;
  SEXP Rsh_Fir_reg_r173_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_digits = PARAMS[1];
  Rsh_Fir_reg_OutDec = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // digits_isMissing = missing.0(digits)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_digits;
  Rsh_Fir_reg_digits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if digits_isMissing then L0() else L1(digits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_digits_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(digits)
    Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_digits;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf inherits;
  //   base = ldf inherits in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r1):
  //   c = `as.logical`(r1);
  //   if c then L4() else L1();
  // L2():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   inherits = ldf inherits in base;
  //   r2 = dyn inherits(x2, "POSIXlt", FALSE);
  //   goto L0(r2);
  // L3():
  //   r = dyn base(<sym x>, "POSIXlt");
  //   goto L0(r);
  // L1():
  //   return 6;
  // L4():
  //   return 14;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st digits = digits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_digits_orDefault, RHO);
  (void)(Rsh_Fir_reg_digits_orDefault);
  // OutDec_isMissing = missing.0(OutDec)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_OutDec;
  Rsh_Fir_reg_OutDec_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if OutDec_isMissing then L2(".") else L2(OutDec)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_OutDec_isMissing)) {
  // L2(".")
    Rsh_Fir_reg_OutDec_orDefault = Rsh_const(CCP, 8);
    goto L2_;
  } else {
  // L2(OutDec)
    Rsh_Fir_reg_OutDec_orDefault = Rsh_Fir_reg_OutDec;
    goto L2_;
  }

L2_:;
  // st OutDec = OutDec_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_OutDec_orDefault, RHO);
  (void)(Rsh_Fir_reg_OutDec_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L3_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args8);
  // if c1 then L49() else L5(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L49()
    goto L49_;
  } else {
  // L5(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L5_;
  }

L4_:;
  // st dotn = r7
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r9 = dyn length(r7)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L48() else D1()
  // L48()
  goto L48_;

L5_:;
  // c7 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c7 then L53() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L53()
    goto L53_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym3 = ldf missing
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf missing in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard3 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L8_:;
  // c8 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c8 then L59() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L59()
    goto L59_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // sym4 = ldf `is.numeric`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf `is.numeric` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard4 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L10_:;
  // balancePOSIXlt = ldf balancePOSIXlt
  Rsh_Fir_reg_balancePOSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L71() else D12()
  // L71()
  goto L71_;

L11_:;
  // r23 = `!`(r21)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args14);
  // c9 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c9 then L67() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L67()
    goto L67_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L10()
  // L10()
  goto L10_;

L13_:;
  // sym6 = ldf `is.nan`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf `is.nan` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard6 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L14_:;
  // r43 = `!`(r41)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args17);
  // r44 = `&&`(r40, r43)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args18);
  // st isNA = r44
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // sym7 = ldf `is.finite`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base7 = ldf `is.finite` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard7 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L15_:;
  // st ok = r46
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L101() else D24()
  // L101()
  goto L101_;

L16_:;
  // r56 = `!`(r54)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args20);
  // st anyN = r56
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // c13 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c13 then L107() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L107()
    goto L107_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L22()
  // L22()
  goto L22_;

L18_:;
  // st r = dx11
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // ok6 = ld ok
  Rsh_Fir_reg_ok6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L113() else D30()
  // L113()
  goto L113_;

L19_:;
  // l3 = ld r
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c16 = `is.object`(l3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args22);
  // if c16 then L123() else L124(r68, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L123()
    goto L123_;
  } else {
  // L124(r68, l3)
    Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r68_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L124_;
  }

L20_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r70 = dyn as_character(dx13)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L122() else D34()
  // L122()
  goto L122_;

L21_:;
  // st r = dx15
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // sym11 = ldf any
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base11 = ldf any in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard11 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L23_:;
  // c17 = `as.logical`(r78)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c17 then L132() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L132()
    goto L132_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L42()
  // L42()
  goto L42_;

L25_:;
  // goto L28()
  // L28()
  goto L28_;

L26_:;
  // st x = dx17
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // time2 = ld time
  Rsh_Fir_reg_time2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L140() else D41()
  // L140()
  goto L140_;

L27_:;
  // st time = dx19
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // goto L28()
  // L28()
  goto L28_;

L28_:;
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L146() else D43()
  // L146()
  goto L146_;

L29_:;
  // c24 = `as.logical`(r96)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c24 then L152() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L152()
    goto L152_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // goto L40()
  // L40()
  goto L40_;

L31_:;
  // st s = r100
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r100_, RHO);
  (void)(Rsh_Fir_reg_r100_);
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L155() else D47()
  // L155()
  goto L155_;

L32_:;
  // goto L34()
  // L34()
  goto L34_;

L33_:;
  // goto L34()
  // L34()
  goto L34_;

L34_:;
  // getOption1 = ldf getOption
  Rsh_Fir_reg_getOption1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L164() else D52()
  // L164()
  goto L164_;

L35_:;
  // r117 = `<=`(r114, r115)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r114_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args27);
  // c26 = `as.logical`(r117)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args28);
  // if c26 then L170() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L170()
    goto L170_;
  } else {
  // L36()
    goto L36_;
  }

L36_:;
  // goto L38()
  // L38()
  goto L38_;

L37_:;
  // goto L38()
  // L38()
  goto L38_;

L38_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L176() else D58()
  // L176()
  goto L176_;

L39_:;
  // st r1 = dx44
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_dx44_, RHO);
  (void)(Rsh_Fir_reg_dx44_);
  // goto L40()
  // L40()
  goto L40_;

L40_:;
  // r164 = ld r1
  Rsh_Fir_reg_r164_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L185() else D63()
  // L185()
  goto L185_;

L41_:;
  // st r = dx46
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx46_, RHO);
  (void)(Rsh_Fir_reg_dx46_);
  // goto L42()
  // L42()
  goto L42_;

L42_:;
  // r172 = ld r
  Rsh_Fir_reg_r172_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L191() else D65()
  // L191()
  goto L191_;

L43_:;
  // sym2 = ldf `...names`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base2 = ldf `...names` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard2 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L44_:;
  // r4 = dyn base1(<lang `<-`(dotn, ...names())>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L3_;

L45_:;
  // ___names = ldf `...names` in base
  Rsh_Fir_reg____names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r8 = dyn ___names()
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____names, 0, NULL, NULL, CCP, RHO);
  // check L47() else D0()
  // L47()
  goto L47_;

L46_:;
  // r6 = dyn base2()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 0, NULL, NULL, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L4_;

D0_:;
  // deopt 5 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L4_;

D1_:;
  // deopt 8 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r9_;
  goto L3_;

L49_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L50() else D2()
  // L50()
  goto L50_;

D2_:;
  // deopt 10 [c1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L50_:;
  // p1 = prom<V +>{
  //   dotn = ld dotn;
  //   dotn1 = force? dotn;
  //   checkMissing(dotn1);
  //   return dotn1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_1, 0, NULL, CCP, RHO);
  // r11 = dyn _in_("format", p1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L51() else D3()
  // L51()
  goto L51_;

D3_:;
  // deopt 13 [c1, r11]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L51_:;
  // c4 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // c5 = `&&`(c1, c4)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args34);
  // goto L5(c5)
  // L5(c5)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c5_;
  goto L5_;

L53_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L54() else D4()
  // L54()
  goto L54_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // r12 = dyn warning("as.character(td, ..) no longer obeys a 'format' argument; use format(td, ..) ?")
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L55() else D5()
  // L55()
  goto L55_;

D5_:;
  // deopt 18 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L7()
  // L7()
  goto L7_;

L57_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r16 = dyn missing(<sym digits>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L8_;

L58_:;
  // r14 = dyn base3(<sym digits>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L8(r14)
  // L8(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L8_;

L59_:;
  // force = ldf force
  Rsh_Fir_reg_force = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L60() else D6()
  // L60()
  goto L60_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p2 = prom<V +>{
  //   digits1 = ld digits;
  //   digits2 = force? digits1;
  //   checkMissing(digits2);
  //   return digits2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_2, 0, NULL, CCP, RHO);
  // r18 = dyn force(p2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_force, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L61() else D7()
  // L61()
  goto L61_;

D7_:;
  // deopt 27 [r18]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L10()
  // L10()
  goto L10_;

L63_:;
  // digits3 = ld digits
  Rsh_Fir_reg_digits3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L65() else D8()
  // L65()
  goto L65_;

L64_:;
  // r20 = dyn base4(<sym digits>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L11_;

D8_:;
  // deopt 30 [digits3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_digits3_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L65_:;
  // digits4 = force? digits3
  Rsh_Fir_reg_digits4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits3_);
  // checkMissing(digits4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_digits4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r22 = dyn is_numeric(digits4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_digits4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L66() else D9()
  // L66()
  goto L66_;

D9_:;
  // deopt 33 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L11_;

L67_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L68() else D10()
  // L68()
  goto L68_;

D10_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // r24 = dyn stop("'digits' must be numeric, integer valued")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L69() else D11()
  // L69()
  goto L69_;

D11_:;
  // deopt 38 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L10()
  // L10()
  goto L10_;

D12_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L71_:;
  // p4 = prom<V +>{
  //   as_POSIXlt = ldf `as.POSIXlt`;
  //   p3 = prom<V +>{
  //     x3 = ld x;
  //     x4 = force? x3;
  //     checkMissing(x4);
  //     return x4;
  //   };
  //   r26 = dyn as_POSIXlt(p3);
  //   return r26;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_3, 0, NULL, CCP, RHO);
  // r28 = dyn balancePOSIXlt(p4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_balancePOSIXlt, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L72() else D13()
  // L72()
  goto L72_;

D13_:;
  // deopt 44 [r28]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L72_:;
  // st x = r28
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L73() else D14()
  // L73()
  goto L73_;

D14_:;
  // deopt 46 [x5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L73_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(x6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args48);
  // if c10 then L75() else L76(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L75()
    goto L75_;
  } else {
  // L76(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L76_;
  }

L74_:;
  // st s = dx1
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L78() else D15()
  // L78()
  goto L78_;

L75_:;
  // dr = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc then L77() else L76(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L77()
    goto L77_;
  } else {
  // L76(dr)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr;
    goto L76_;
  }

L76_:;
  // r29 = `$`(x8, <sym sec>)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args51);
  // goto L74(r29)
  // L74(r29)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r29_;
  goto L74_;

L77_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L74(dx)
  // L74(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L74_;

D15_:;
  // deopt 50 [x9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L78_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(x10)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args54);
  // if c11 then L80() else L81(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L80()
    goto L80_;
  } else {
  // L81(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L81_;
  }

L79_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L83() else D16()
  // L83()
  goto L83_;

L80_:;
  // dr2 = tryDispatchBuiltin.1("$", x10)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc1 then L82() else L81(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L82()
    goto L82_;
  } else {
  // L81(dr2)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr2_;
    goto L81_;
  }

L81_:;
  // r30 = `$`(x12, <sym hour>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args57);
  // goto L79(r30)
  // L79(r30)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r30_;
  goto L79_;

L82_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L79(dx2)
  // L79(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L79_;

D16_:;
  // deopt 52 [dx3, x13]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L83_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(x14)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args60);
  // if c12 then L85() else L86(dx3, x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L85()
    goto L85_;
  } else {
  // L86(dx3, x14)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L86_;
  }

L84_:;
  // r32 = `+`(dx8, dx9)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args61);
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L88() else D17()
  // L88()
  goto L88_;

L85_:;
  // dr4 = tryDispatchBuiltin.1("$", x14)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args62);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc2 then L87() else L86(dx3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L87()
    goto L87_;
  } else {
  // L86(dx3, dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr4_;
    goto L86_;
  }

L86_:;
  // r31 = `$`(x16, <sym min>)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args64);
  // goto L84(dx5, r31)
  // L84(dx5, r31)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r31_;
  goto L84_;

L87_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L84(dx3, dx7)
  // L84(dx3, dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
  goto L84_;

D17_:;
  // deopt 55 [r32, s]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L88_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // r33 = `+`(r32, s1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args67);
  // st time = r33
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard5 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L89_:;
  // s2 = ld s
  Rsh_Fir_reg_s2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L91() else D18()
  // L91()
  goto L91_;

L90_:;
  // r34 = dyn base5(<sym s>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L13(r34)
  // L13(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L13_;

D18_:;
  // deopt 61 [s2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L91_:;
  // s3 = force? s2
  Rsh_Fir_reg_s3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s2_);
  // checkMissing(s3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_s3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r36 = dyn is_na(s3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_s3_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L92() else D19()
  // L92()
  goto L92_;

D19_:;
  // deopt 64 [r36]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L13(r36)
  // L13(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L13_;

L93_:;
  // s4 = ld s
  Rsh_Fir_reg_s4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L95() else D20()
  // L95()
  goto L95_;

L94_:;
  // r39 = dyn base6(<sym s>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r35, r39)
  // L14(r35, r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
  goto L14_;

D20_:;
  // deopt 66 [r35, s4]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_s4_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L95_:;
  // s5 = force? s4
  Rsh_Fir_reg_s5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s4_);
  // checkMissing(s5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_s5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // is_nan = ldf `is.nan` in base
  Rsh_Fir_reg_is_nan = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r42 = dyn is_nan(s5)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_s5_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_nan, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L96() else D21()
  // L96()
  goto L96_;

D21_:;
  // deopt 69 [r35, r42]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L14(r35, r42)
  // L14(r35, r42)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L14_;

L97_:;
  // time = ld time
  Rsh_Fir_reg_time = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L99() else D22()
  // L99()
  goto L99_;

L98_:;
  // r45 = dyn base7(<sym time>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(r45)
  // L15(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L15_;

D22_:;
  // deopt 75 [time]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_time;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L99_:;
  // time1 = force? time
  Rsh_Fir_reg_time1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_time);
  // checkMissing(time1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_time1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r47 = dyn is_finite(time1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_time1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L100() else D23()
  // L100()
  goto L100_;

D23_:;
  // deopt 78 [r47]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L15(r47)
  // L15(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L15_;

D24_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L101_:;
  // p5 = prom<V +>{
  //   sym8 = ldf length;
  //   base8 = ldf length in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r49):
  //   return r49;
  // L1():
  //   ok = ld ok;
  //   ok1 = force? ok;
  //   checkMissing(ok1);
  //   length1 = ldf length in base;
  //   r50 = dyn length1(ok1);
  //   goto L0(r50);
  // L2():
  //   r48 = dyn base8(<sym ok>);
  //   goto L0(r48);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_5, 0, NULL, CCP, RHO);
  // r52 = dyn character(p5)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L102() else D25()
  // L102()
  goto L102_;

D25_:;
  // deopt 83 [r52]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L102_:;
  // st r = r52
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // sym9 = ldf all
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base9 = ldf all in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard9 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L103_:;
  // ok2 = ld ok
  Rsh_Fir_reg_ok2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L105() else D26()
  // L105()
  goto L105_;

L104_:;
  // r53 = dyn base9(<sym ok>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L16(r53)
  // L16(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L16_;

D26_:;
  // deopt 87 [ok2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_ok2_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L105_:;
  // ok3 = force? ok2
  Rsh_Fir_reg_ok3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok2_);
  // checkMissing(ok3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_ok3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r55 = dyn all(ok3)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_ok3_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L106() else D27()
  // L106()
  goto L106_;

D27_:;
  // deopt 90 [r55]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L16(r55)
  // L16(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L16_;

L107_:;
  // l = ld r
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c14 = `is.object`(l)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args87);
  // if c14 then L108() else L109(NA_LGL, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L108()
    goto L108_;
  } else {
  // L109(NA_LGL, l)
    Rsh_Fir_reg_r58_ = Rsh_const(CCP, 47);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L109_;
  }

L108_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l, NA_LGL)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args88[2] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args88);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc3 then L110() else L109(NA_LGL, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L110()
    goto L110_;
  } else {
  // L109(NA_LGL, dr6)
    Rsh_Fir_reg_r58_ = Rsh_const(CCP, 47);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L109_;
  }

L109_:;
  // ok4 = ld ok
  Rsh_Fir_reg_ok4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L111() else D28()
  // L111()
  goto L111_;

L110_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L18(dx10)
  // L18(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L18_;

D28_:;
  // deopt 96 [r58, l2, NA_LGL, ok4]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_const(CCP, 47);
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_ok4_;
  Rsh_Fir_deopt(96, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L111_:;
  // ok5 = force? ok4
  Rsh_Fir_reg_ok5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok4_);
  // checkMissing(ok5)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_ok5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r61 = `!`(ok5)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_ok5_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args92);
  // isNA = ld isNA
  Rsh_Fir_reg_isNA = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L112() else D29()
  // L112()
  goto L112_;

D29_:;
  // deopt 98 [r58, l2, NA_LGL, r61, isNA]
  SEXP Rsh_Fir_array_deopt_stack24[5];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_const(CCP, 47);
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_isNA;
  Rsh_Fir_deopt(98, 5, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L112_:;
  // isNA1 = force? isNA
  Rsh_Fir_reg_isNA1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isNA);
  // checkMissing(isNA1)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_isNA1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // r62 = `&&`(r61, isNA1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_isNA1_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args94);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r63 = dyn ___(l2, NA_LGL, r62)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args95[2] = Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L18(r63)
  // L18(r63)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r63_;
  goto L18_;

D30_:;
  // deopt 103 [ok6]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_ok6_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L113_:;
  // ok7 = force? ok6
  Rsh_Fir_reg_ok7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok6_);
  // checkMissing(ok7)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_ok7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // r64 = `!`(ok7)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_ok7_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args97);
  // isNA2 = ld isNA
  Rsh_Fir_reg_isNA2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L114() else D31()
  // L114()
  goto L114_;

D31_:;
  // deopt 105 [r64, isNA2]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_isNA2_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L114_:;
  // isNA3 = force? isNA2
  Rsh_Fir_reg_isNA3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isNA2_);
  // checkMissing(isNA3)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_isNA3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // r65 = `!`(isNA3)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_isNA3_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args99);
  // r66 = `&&`(r64, r65)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args100);
  // st i = r66
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // sym10 = ldf `as.character`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base10 = ldf `as.character` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard10 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L115_:;
  // s6 = ld s
  Rsh_Fir_reg_s6_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L117() else D32()
  // L117()
  goto L117_;

L116_:;
  // r67 = dyn base10(<lang `[`(s, i)>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L19(r67)
  // L19(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L19_;

D32_:;
  // deopt 112 [s6]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_s6_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L117_:;
  // s7 = force? s6
  Rsh_Fir_reg_s7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s6_);
  // checkMissing(s7)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_s7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(s7)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_s7_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args104);
  // if c15 then L118() else L119(s7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L118()
    goto L118_;
  } else {
  // L119(s7)
    Rsh_Fir_reg_s9_ = Rsh_Fir_reg_s7_;
    goto L119_;
  }

L118_:;
  // dr8 = tryDispatchBuiltin.1("[", s7)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_s7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc4 then L120() else L119(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L120()
    goto L120_;
  } else {
  // L119(dr8)
    Rsh_Fir_reg_s9_ = Rsh_Fir_reg_dr8_;
    goto L119_;
  }

L119_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L121() else D33()
  // L121()
  goto L121_;

L120_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L20(dx12)
  // L20(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L20_;

D33_:;
  // deopt 114 [s9, i]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_s9_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L121_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r69 = dyn __(s9, i1)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_s9_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L20(r69)
  // L20(r69)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r69_;
  goto L20_;

D34_:;
  // deopt 118 [r70]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L19(r70)
  // L19(r70)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r70_;
  goto L19_;

L123_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l3, r68)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args109);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if dc5 then L125() else L124(r68, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L125()
    goto L125_;
  } else {
  // L124(r68, dr10)
    Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r68_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr10_;
    goto L124_;
  }

L124_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L126() else D35()
  // L126()
  goto L126_;

L125_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L21(r68, dx14)
  // L21(r68, dx14)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L21_;

D35_:;
  // deopt 120 [r72, l5, r68, i2]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(120, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L126_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r75 = dyn ___1(l5, r68, i3)
  SEXP Rsh_Fir_array_args112[3];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args112[2] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L21(r72, r75)
  // L21(r72, r75)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r75_;
  goto L21_;

L128_:;
  // ok8 = ld ok
  Rsh_Fir_reg_ok8_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L130() else D36()
  // L130()
  goto L130_;

L129_:;
  // r77 = dyn base11(<sym ok>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L23(r77)
  // L23(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L23_;

D36_:;
  // deopt 128 [ok8]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_ok8_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L130_:;
  // ok9 = force? ok8
  Rsh_Fir_reg_ok9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok8_);
  // checkMissing(ok9)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_ok9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r79 = dyn any(ok9)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_ok9_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L131() else D37()
  // L131()
  goto L131_;

D37_:;
  // deopt 131 [r79]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L23(r79)
  // L23(r79)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r79_;
  goto L23_;

L132_:;
  // anyN = ld anyN
  Rsh_Fir_reg_anyN = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L133() else D38()
  // L133()
  goto L133_;

D38_:;
  // deopt 132 [anyN]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_anyN;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L133_:;
  // anyN1 = force? anyN
  Rsh_Fir_reg_anyN1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_anyN);
  // checkMissing(anyN1)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_anyN1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // c18 = `as.logical`(anyN1)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_anyN1_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args117);
  // if c18 then L134() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L134()
    goto L134_;
  } else {
  // L25()
    goto L25_;
  }

L134_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L135() else D39()
  // L135()
  goto L135_;

D39_:;
  // deopt 134 [x17]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L135_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(x18)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args119);
  // if c19 then L136() else L137(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L136()
    goto L136_;
  } else {
  // L137(x18)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L137_;
  }

L136_:;
  // dr12 = tryDispatchBuiltin.1("[", x18)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc6 then L138() else L137(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L138()
    goto L138_;
  } else {
  // L137(dr12)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr12_;
    goto L137_;
  }

L137_:;
  // ok10 = ld ok
  Rsh_Fir_reg_ok10_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L139() else D40()
  // L139()
  goto L139_;

L138_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L26(dx16)
  // L26(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L26_;

D40_:;
  // deopt 136 [x20, ok10]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_ok10_;
  Rsh_Fir_deopt(136, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L139_:;
  // ok11 = force? ok10
  Rsh_Fir_reg_ok11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok10_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r80 = dyn __1(x20, ok11)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_ok11_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L26(r80)
  // L26(r80)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r80_;
  goto L26_;

D41_:;
  // deopt 140 [time2]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_time2_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L140_:;
  // time3 = force? time2
  Rsh_Fir_reg_time3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_time2_);
  // checkMissing(time3)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_time3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(time3)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_time3_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args125);
  // if c20 then L141() else L142(time3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L141()
    goto L141_;
  } else {
  // L142(time3)
    Rsh_Fir_reg_time5_ = Rsh_Fir_reg_time3_;
    goto L142_;
  }

L141_:;
  // dr14 = tryDispatchBuiltin.1("[", time3)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_time3_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args126);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if dc7 then L143() else L142(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L143()
    goto L143_;
  } else {
  // L142(dr14)
    Rsh_Fir_reg_time5_ = Rsh_Fir_reg_dr14_;
    goto L142_;
  }

L142_:;
  // ok12 = ld ok
  Rsh_Fir_reg_ok12_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L144() else D42()
  // L144()
  goto L144_;

L143_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L27(dx18)
  // L27(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L27_;

D42_:;
  // deopt 142 [time5, ok12]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_time5_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_ok12_;
  Rsh_Fir_deopt(142, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L144_:;
  // ok13 = force? ok12
  Rsh_Fir_reg_ok13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok12_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r81 = dyn __2(time5, ok13)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_time5_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_ok13_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L27(r81)
  // L27(r81)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r81_;
  goto L27_;

D43_:;
  // deopt 149 []
  Rsh_Fir_deopt(149, 0, NULL, CCP, RHO);
  return R_NilValue;

L146_:;
  // p6 = prom<V +>{
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   c21 = `is.object`(x22);
  //   if c21 then L1() else L2(1900.0, x22);
  // L0(r85, dx22):
  //   r87 = `+`(r85, dx22);
  //   return r87;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("$", x22);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(1900.0, dr16);
  // L2(r83, x24):
  //   r86 = `$`(x24, <sym year>);
  //   goto L0(r83, r86);
  // L3():
  //   dx21 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(1900.0, dx21);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   x25 = ld x;
  //   x26 = force? x25;
  //   checkMissing(x26);
  //   c22 = `is.object`(x26);
  //   if c22 then L1() else L2(x26);
  // L0(dx24):
  //   r90 = `+`(dx24, 1);
  //   return r90;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("$", x26);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(x28):
  //   r89 = `$`(x28, <sym mon>);
  //   goto L0(r89);
  // L3():
  //   dx23 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx23);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   c23 = `is.object`(x30);
  //   if c23 then L1() else L2(x30);
  // L0(dx26):
  //   return dx26;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("$", x30);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(x32):
  //   r92 = `$`(x32, <sym mday>);
  //   goto L0(r92);
  // L3():
  //   dx25 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx25);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_8, 0, NULL, CCP, RHO);
  // r94 = dyn sprintf("%d-%02d-%02d", p6, p7, p8)
  SEXP Rsh_Fir_array_args150[4];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args150[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args150[3] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names34[4];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 4, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L147() else D44()
  // L147()
  goto L147_;

D44_:;
  // deopt 154 [r94]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L147_:;
  // st r1 = r94
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r94_, RHO);
  (void)(Rsh_Fir_reg_r94_);
  // sym12 = ldf any
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base12 = ldf any in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args151);
  // if guard12 then L148() else L149()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L148()
    goto L148_;
  } else {
  // L149()
    goto L149_;
  }

L148_:;
  // time6 = ld time
  Rsh_Fir_reg_time6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L150() else D45()
  // L150()
  goto L150_;

L149_:;
  // r95 = dyn base12(<lang `<-`(n0, `!=`(time, 0.0))>)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L29(r95)
  // L29(r95)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L29_;

D45_:;
  // deopt 158 [time6]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_time6_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L150_:;
  // time7 = force? time6
  Rsh_Fir_reg_time7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_time6_);
  // checkMissing(time7)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_time7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // r97 = `!=`(time7, 0.0)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_time7_;
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args154);
  // st n0 = r97
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_r97_, RHO);
  (void)(Rsh_Fir_reg_r97_);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r98 = dyn any1(r97)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L151() else D46()
  // L151()
  goto L151_;

D46_:;
  // deopt 164 [r98]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L151_:;
  // goto L29(r98)
  // L29(r98)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r98_;
  goto L29_;

L152_:;
  // sym13 = ldf round
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base13 = ldf round in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args156);
  // if guard13 then L153() else L154()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L153()
    goto L153_;
  } else {
  // L154()
    goto L154_;
  }

L153_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r101 = dyn round(<lang `[`(`$`(x, sec), n0)>, <sym digits>)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 2, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L31(r101)
  // L31(r101)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r101_;
  goto L31_;

L154_:;
  // r99 = dyn base13(<lang `[`(`$`(x, sec), n0)>, <sym digits>)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args158[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L31(r99)
  // L31(r99)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L31_;

D47_:;
  // deopt 170 []
  Rsh_Fir_deopt(170, 0, NULL, CCP, RHO);
  return R_NilValue;

L155_:;
  // r102 = dyn getOption("OutDec")
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L156() else D48()
  // L156()
  goto L156_;

D48_:;
  // deopt 172 [r102]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L156_:;
  // OutDec1 = ld OutDec
  Rsh_Fir_reg_OutDec1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L157() else D49()
  // L157()
  goto L157_;

D49_:;
  // deopt 172 [r102, OutDec1]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_OutDec1_;
  Rsh_Fir_deopt(172, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L157_:;
  // OutDec2 = force? OutDec1
  Rsh_Fir_reg_OutDec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OutDec1_);
  // checkMissing(OutDec2)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_OutDec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // r103 = `!=`(r102, OutDec2)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_OutDec2_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args161);
  // c25 = `as.logical`(r103)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args162);
  // if c25 then L158() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L158()
    goto L158_;
  } else {
  // L32()
    goto L32_;
  }

L158_:;
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // check L159() else D50()
  // L159()
  goto L159_;

D50_:;
  // deopt 176 []
  Rsh_Fir_deopt(176, 0, NULL, CCP, RHO);
  return R_NilValue;

L159_:;
  // p9 = prom<V +>{
  //   OutDec3 = ld OutDec;
  //   OutDec4 = force? OutDec3;
  //   checkMissing(OutDec4);
  //   return OutDec4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_9, 0, NULL, CCP, RHO);
  // r105 = dyn options[OutDec](p9)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L160() else D51()
  // L160()
  goto L160_;

D51_:;
  // deopt 179 [r105]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L160_:;
  // st op = r105
  Rsh_Fir_store(Rsh_const(CCP, 67), Rsh_Fir_reg_r105_, RHO);
  (void)(Rsh_Fir_reg_r105_);
  // sym14 = ldf `on.exit`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // base14 = ldf `on.exit` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 68), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args165);
  // if guard14 then L161() else L162()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L161()
    goto L161_;
  } else {
  // L162()
    goto L162_;
  }

L161_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 68), RHO);
  // r108 = dyn on_exit(<lang options(op)>)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L33(r108)
  // L33(r108)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r108_;
  goto L33_;

L162_:;
  // r106 = dyn base14(<lang options(op)>)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L33(r106)
  // L33(r106)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r106_;
  goto L33_;

D52_:;
  // deopt 187 []
  Rsh_Fir_deopt(187, 0, NULL, CCP, RHO);
  return R_NilValue;

L164_:;
  // r110 = dyn getOption1("scipen")
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption1_, 1, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L165() else D53()
  // L165()
  goto L165_;

D53_:;
  // deopt 189 [r110]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L165_:;
  // sym15 = ldf min
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base15 = ldf min in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args169);
  // if guard15 then L166() else L167()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L166()
    goto L166_;
  } else {
  // L167()
    goto L167_;
  }

L166_:;
  // digits5 = ld digits
  Rsh_Fir_reg_digits5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L168() else D54()
  // L168()
  goto L168_;

L167_:;
  // r113 = dyn base15(<sym digits>)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L35(r110, r113)
  // L35(r110, r113)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r110_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r113_;
  goto L35_;

D54_:;
  // deopt 191 [r110, digits5]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_digits5_;
  Rsh_Fir_deopt(191, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L168_:;
  // digits6 = force? digits5
  Rsh_Fir_reg_digits6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits5_);
  // checkMissing(digits6)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_digits6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r116 = dyn min(digits6)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_digits6_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L169() else D55()
  // L169()
  goto L169_;

D55_:;
  // deopt 194 [r110, r116]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(194, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L169_:;
  // goto L35(r110, r116)
  // L35(r110, r116)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r110_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r116_;
  goto L35_;

L170_:;
  // options1 = ldf options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // check L171() else D56()
  // L171()
  goto L171_;

D56_:;
  // deopt 197 []
  Rsh_Fir_deopt(197, 0, NULL, CCP, RHO);
  return R_NilValue;

L171_:;
  // p10 = prom<V +>{
  //   sym16 = ldf max;
  //   base16 = ldf max in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L1() else L2();
  // L0(r119):
  //   r121 = `+`(r119, 1);
  //   return r121;
  // L1():
  //   digits7 = ld digits;
  //   digits8 = force? digits7;
  //   checkMissing(digits8);
  //   max = ldf max in base;
  //   r120 = dyn max(digits8);
  //   goto L0(r120);
  // L2():
  //   r118 = dyn base16(<sym digits>);
  //   goto L0(r118);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_10, 0, NULL, CCP, RHO);
  // r123 = dyn options1[scipen](p10)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = Rsh_const(CCP, 72);
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options1_, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L172() else D57()
  // L172()
  goto L172_;

D57_:;
  // deopt 200 [r123]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L172_:;
  // st o2 = r123
  Rsh_Fir_store(Rsh_const(CCP, 73), Rsh_Fir_reg_r123_, RHO);
  (void)(Rsh_Fir_reg_r123_);
  // sym17 = ldf `on.exit`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // base17 = ldf `on.exit` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 68), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args179);
  // if guard17 then L173() else L174()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L173()
    goto L173_;
  } else {
  // L174()
    goto L174_;
  }

L173_:;
  // on_exit1 = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 68), RHO);
  // r126 = dyn on_exit1(<lang options(o2)>, TRUE)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args180[1] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit1_, 2, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L37(r126)
  // L37(r126)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r126_;
  goto L37_;

L174_:;
  // r124 = dyn base17[, add](<lang options(o2)>, TRUE)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args181[1] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = Rsh_const(CCP, 76);
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L37(r124)
  // L37(r124)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r124_;
  goto L37_;

D58_:;
  // deopt 208 []
  Rsh_Fir_deopt(208, 0, NULL, CCP, RHO);
  return R_NilValue;

L176_:;
  // p11 = prom<V +>{
  //   sym18 = ldf c;
  //   base18 = ldf c in base;
  //   guard18 = `==`.4(sym18, base18);
  //   if guard18 then L2() else L3();
  // L0(r129):
  //   c28 = `is.object`(r129);
  //   if c28 then L4() else L5(r129);
  // L2():
  //   c27 = ldf c in base;
  //   r130 = dyn c27("", "0");
  //   goto L0(r130);
  // L3():
  //   r128 = dyn base18("", "0");
  //   goto L0(r128);
  // L1(dx28):
  //   return dx28;
  // L4():
  //   dr22 = tryDispatchBuiltin.1("[", r129);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L6() else L5(dr22);
  // L5(r132):
  //   s10 = ld s;
  //   s11 = force? s10;
  //   checkMissing(s11);
  //   r133 = `<`(s11, 10.0);
  //   r134 = `+`(r133, 1);
  //   __3 = ldf `[` in base;
  //   r135 = dyn __3(r132, r134);
  //   goto L1(r135);
  // L6():
  //   dx27 = getTryDispatchBuiltinValue(dr22);
  //   goto L1(dx27);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   sym19 = ldf `as.character`;
  //   base19 = ldf `as.character` in base;
  //   guard19 = `==`.4(sym19, base19);
  //   if guard19 then L1() else L2();
  // L0(r138):
  //   return r138;
  // L1():
  //   s12 = ld s;
  //   s13 = force? s12;
  //   checkMissing(s13);
  //   as_character1 = ldf `as.character` in base;
  //   r139 = dyn as_character1(s13);
  //   goto L0(r139);
  // L2():
  //   r137 = dyn base19(<sym s>);
  //   goto L0(r137);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_12, 0, NULL, CCP, RHO);
  // r141 = dyn paste0(p11, p12)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L177() else D59()
  // L177()
  goto L177_;

D59_:;
  // deopt 211 [r141]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(211, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L177_:;
  // st sch = r141
  Rsh_Fir_store(Rsh_const(CCP, 81), Rsh_Fir_reg_r141_, RHO);
  (void)(Rsh_Fir_reg_r141_);
  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // check L178() else D60()
  // L178()
  goto L178_;

D60_:;
  // deopt 214 []
  Rsh_Fir_deopt(214, 0, NULL, CCP, RHO);
  return R_NilValue;

L178_:;
  // p13 = prom<V +>{
  //   r142 = ld r1;
  //   r143 = force? r142;
  //   checkMissing(r143);
  //   c29 = `is.object`(r143);
  //   if c29 then L1() else L2(r143);
  // L0(dx30):
  //   return dx30;
  // L1():
  //   dr24 = tryDispatchBuiltin.1("[", r143);
  //   dc12 = getTryDispatchBuiltinDispatched(dr24);
  //   if dc12 then L3() else L2(dr24);
  // L2(r145):
  //   n0 = ld n0;
  //   n1 = force? n0;
  //   __4 = ldf `[` in base;
  //   r146 = dyn __4(r145, n1);
  //   goto L0(r146);
  // L3():
  //   dx29 = getTryDispatchBuiltinValue(dr24);
  //   goto L0(dx29);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_13, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   sprintf1 = ldf sprintf;
  //   p14 = prom<V +>{
  //     x33 = ld x;
  //     x34 = force? x33;
  //     checkMissing(x34);
  //     c30 = `is.object`(x34);
  //     if c30 then L2() else L3(x34);
  //   L1(dx32):
  //     c31 = `is.object`(dx32);
  //     if c31 then L5() else L6(dx32);
  //   L2():
  //     dr26 = tryDispatchBuiltin.1("$", x34);
  //     dc13 = getTryDispatchBuiltinDispatched(dr26);
  //     if dc13 then L4() else L3(dr26);
  //   L3(x36):
  //     r148 = `$`(x36, <sym hour>);
  //     goto L1(r148);
  //   L0(dx36):
  //     return dx36;
  //   L4():
  //     dx31 = getTryDispatchBuiltinValue(dr26);
  //     goto L1(dx31);
  //   L5():
  //     dr28 = tryDispatchBuiltin.1("[", dx32);
  //     dc14 = getTryDispatchBuiltinDispatched(dr28);
  //     if dc14 then L7() else L6(dr28);
  //   L6(dx34):
  //     n2 = ld n0;
  //     n3 = force? n2;
  //     __5 = ldf `[` in base;
  //     r149 = dyn __5(dx34, n3);
  //     goto L0(r149);
  //   L7():
  //     dx35 = getTryDispatchBuiltinValue(dr28);
  //     goto L0(dx35);
  //   };
  //   p15 = prom<V +>{
  //     x37 = ld x;
  //     x38 = force? x37;
  //     checkMissing(x38);
  //     c32 = `is.object`(x38);
  //     if c32 then L2() else L3(x38);
  //   L1(dx38):
  //     c33 = `is.object`(dx38);
  //     if c33 then L5() else L6(dx38);
  //   L2():
  //     dr30 = tryDispatchBuiltin.1("$", x38);
  //     dc15 = getTryDispatchBuiltinDispatched(dr30);
  //     if dc15 then L4() else L3(dr30);
  //   L3(x40):
  //     r151 = `$`(x40, <sym min>);
  //     goto L1(r151);
  //   L0(dx42):
  //     return dx42;
  //   L4():
  //     dx37 = getTryDispatchBuiltinValue(dr30);
  //     goto L1(dx37);
  //   L5():
  //     dr32 = tryDispatchBuiltin.1("[", dx38);
  //     dc16 = getTryDispatchBuiltinDispatched(dr32);
  //     if dc16 then L7() else L6(dr32);
  //   L6(dx40):
  //     n4 = ld n0;
  //     n5 = force? n4;
  //     __6 = ldf `[` in base;
  //     r152 = dyn __6(dx40, n5);
  //     goto L0(r152);
  //   L7():
  //     dx41 = getTryDispatchBuiltinValue(dr32);
  //     goto L0(dx41);
  //   };
  //   p16 = prom<V +>{
  //     sch = ld sch;
  //     sch1 = force? sch;
  //     checkMissing(sch1);
  //     return sch1;
  //   };
  //   r155 = dyn sprintf1("%02d:%02d:%s", p14, p15, p16);
  //   return r155;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_14, 0, NULL, CCP, RHO);
  // r157 = dyn paste1(p13, p17)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args228, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L179() else D61()
  // L179()
  goto L179_;

D61_:;
  // deopt 217 [r157]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r157_;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L179_:;
  // l6 = ld r1
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // c34 = `is.object`(l6)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args229);
  // if c34 then L180() else L181(r157, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L180()
    goto L180_;
  } else {
  // L181(r157, l6)
    Rsh_Fir_reg_r159_ = Rsh_Fir_reg_r157_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L181_;
  }

L180_:;
  // dr34 = tryDispatchBuiltin.0("[<-", l6, r157)
  SEXP Rsh_Fir_array_args230[3];
  Rsh_Fir_array_args230[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args230[2] = Rsh_Fir_reg_r157_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args230);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if dc17 then L182() else L181(r157, dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L182()
    goto L182_;
  } else {
  // L181(r157, dr34)
    Rsh_Fir_reg_r159_ = Rsh_Fir_reg_r157_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr34_;
    goto L181_;
  }

L181_:;
  // n6 = ld n0
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L183() else D62()
  // L183()
  goto L183_;

L182_:;
  // dx43 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // goto L39(r157, dx43)
  // L39(r157, dx43)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r157_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx43_;
  goto L39_;

D62_:;
  // deopt 219 [r159, l8, r157, n6]
  SEXP Rsh_Fir_array_deopt_stack50[4];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r159_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_r157_;
  Rsh_Fir_array_deopt_stack50[3] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(219, 4, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L183_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r162 = dyn ___2(l8, r157, n7)
  SEXP Rsh_Fir_array_args233[3];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args233[1] = Rsh_Fir_reg_r157_;
  Rsh_Fir_array_args233[2] = Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_array_arg_names62[3];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_array_arg_names62[2] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args233, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L39(r159, r162)
  // L39(r159, r162)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r159_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_r162_;
  goto L39_;

D63_:;
  // deopt 225 [r164]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r164_;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L185_:;
  // r165 = force? r164
  Rsh_Fir_reg_r165_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r164_);
  // checkMissing(r165)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_r165_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty()));
  // l9 = ld r
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c35 = `is.object`(l9)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args235);
  // if c35 then L186() else L187(r165, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L186()
    goto L186_;
  } else {
  // L187(r165, l9)
    Rsh_Fir_reg_r167_ = Rsh_Fir_reg_r165_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L187_;
  }

L186_:;
  // dr36 = tryDispatchBuiltin.0("[<-", l9, r165)
  SEXP Rsh_Fir_array_args236[3];
  Rsh_Fir_array_args236[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args236[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args236[2] = Rsh_Fir_reg_r165_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args236);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty());
  // if dc18 then L188() else L187(r165, dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L188()
    goto L188_;
  } else {
  // L187(r165, dr36)
    Rsh_Fir_reg_r167_ = Rsh_Fir_reg_r165_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr36_;
    goto L187_;
  }

L187_:;
  // ok14 = ld ok
  Rsh_Fir_reg_ok14_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L189() else D64()
  // L189()
  goto L189_;

L188_:;
  // dx45 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // goto L41(r165, dx45)
  // L41(r165, dx45)
  Rsh_Fir_reg_r169_ = Rsh_Fir_reg_r165_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx45_;
  goto L41_;

D64_:;
  // deopt 228 [r167, l11, r165, ok14]
  SEXP Rsh_Fir_array_deopt_stack52[4];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r167_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_r165_;
  Rsh_Fir_array_deopt_stack52[3] = Rsh_Fir_reg_ok14_;
  Rsh_Fir_deopt(228, 4, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L189_:;
  // ok15 = force? ok14
  Rsh_Fir_reg_ok15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok14_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r170 = dyn ___3(l11, r165, ok15)
  SEXP Rsh_Fir_array_args239[3];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args239[1] = Rsh_Fir_reg_r165_;
  Rsh_Fir_array_args239[2] = Rsh_Fir_reg_ok15_;
  SEXP Rsh_Fir_array_arg_names63[3];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_array_arg_names63[2] = R_MissingArg;
  Rsh_Fir_reg_r170_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L41(r167, r170)
  // L41(r167, r170)
  Rsh_Fir_reg_r169_ = Rsh_Fir_reg_r167_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_r170_;
  goto L41_;

D65_:;
  // deopt 234 [r172]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r172_;
  Rsh_Fir_deopt(234, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L191_:;
  // r173 = force? r172
  Rsh_Fir_reg_r173_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r172_);
  // checkMissing(r173)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_r173_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r173
  return Rsh_Fir_reg_r173_;
}
SEXP Rsh_Fir_user_promise_inner270580366_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // return 6
  return Rsh_const(CCP, 3);

L2_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn inherits(x2, "POSIXlt", FALSE)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L3_:;
  // r = dyn base(<sym x>, "POSIXlt")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L4_:;
  // return 14
  return Rsh_const(CCP, 6);
}
SEXP Rsh_Fir_user_promise_inner270580366_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dotn;
  SEXP Rsh_Fir_reg_dotn1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // dotn = ld dotn
  Rsh_Fir_reg_dotn = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // dotn1 = force? dotn
  Rsh_Fir_reg_dotn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dotn);
  // checkMissing(dotn1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dotn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return dotn1
  return Rsh_Fir_reg_dotn1_;
}
SEXP Rsh_Fir_user_promise_inner270580366_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_digits1_;
  SEXP Rsh_Fir_reg_digits2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // digits1 = ld digits
  Rsh_Fir_reg_digits1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // digits2 = force? digits1
  Rsh_Fir_reg_digits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits1_);
  // checkMissing(digits2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_digits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return digits2
  return Rsh_Fir_reg_digits2_;
}
SEXP Rsh_Fir_user_promise_inner270580366_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_POSIXlt;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // as_POSIXlt = ldf `as.POSIXlt`
  Rsh_Fir_reg_as_POSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // p3 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_4, 0, NULL, CCP, RHO);
  // r26 = dyn as_POSIXlt(p3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXlt, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_inner270580366_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner270580366_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_ok;
  SEXP Rsh_Fir_reg_ok1_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r50_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r49
  return Rsh_Fir_reg_r49_;

L1_:;
  // ok = ld ok
  Rsh_Fir_reg_ok = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // ok1 = force? ok
  Rsh_Fir_reg_ok1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok);
  // checkMissing(ok1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_ok1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r50 = dyn length1(ok1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_ok1_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L0_;

L2_:;
  // r48 = dyn base8(<sym ok>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner270580366_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_r87_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(x22)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args131);
  // if c21 then L1() else L2(1900.0, x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L1()
    goto L1_;
  } else {
  // L2(1900.0, x22)
    Rsh_Fir_reg_r83_ = Rsh_const(CCP, 54);
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L2_;
  }

L0_:;
  // r87 = `+`(r85, dx22)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args132);
  // return r87
  return Rsh_Fir_reg_r87_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("$", x22)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(1900.0, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(1900.0, dr16)
    Rsh_Fir_reg_r83_ = Rsh_const(CCP, 54);
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // r86 = `$`(x24, <sym year>)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args135);
  // goto L0(r83, r86)
  // L0(r83, r86)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r86_;
  goto L0_;

L3_:;
  // dx21 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L0(1900.0, dx21)
  // L0(1900.0, dx21)
  Rsh_Fir_reg_r85_ = Rsh_const(CCP, 54);
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner270580366_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(x26)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args138);
  // if c22 then L1() else L2(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L2_;
  }

L0_:;
  // r90 = `+`(dx24, 1)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_args139[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args139);
  // return r90
  return Rsh_Fir_reg_r90_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("$", x26)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args140);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // r89 = `$`(x28, <sym mon>)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args142[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args142);
  // goto L0(r89)
  // L0(r89)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r89_;
  goto L0_;

L3_:;
  // dx23 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // goto L0(dx23)
  // L0(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner270580366_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_x30_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_r92_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(x30)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args145);
  // if c23 then L1() else L2(x30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x30)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_x30_;
    goto L2_;
  }

L0_:;
  // return dx26
  return Rsh_Fir_reg_dx26_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("$", x30)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args146);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // r92 = `$`(x32, <sym mday>)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args148[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args148);
  // goto L0(r92)
  // L0(r92)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r92_;
  goto L0_;

L3_:;
  // dx25 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // goto L0(dx25)
  // L0(dx25)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner270580366_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_OutDec3_;
  SEXP Rsh_Fir_reg_OutDec4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // OutDec3 = ld OutDec
  Rsh_Fir_reg_OutDec3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // OutDec4 = force? OutDec3
  Rsh_Fir_reg_OutDec4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_OutDec3_);
  // checkMissing(OutDec4)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_OutDec4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // return OutDec4
  return Rsh_Fir_reg_OutDec4_;
}
SEXP Rsh_Fir_user_promise_inner270580366_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_digits7_;
  SEXP Rsh_Fir_reg_digits8_;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_r121_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // sym16 = ldf max
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // base16 = ldf max in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args173);
  // if guard16 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r121 = `+`(r119, 1)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_array_args174[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args174);
  // return r121
  return Rsh_Fir_reg_r121_;

L1_:;
  // digits7 = ld digits
  Rsh_Fir_reg_digits7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // digits8 = force? digits7
  Rsh_Fir_reg_digits8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits7_);
  // checkMissing(digits8)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_digits8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r120 = dyn max(digits8)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_digits8_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r120)
  // L0(r120)
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r120_;
  goto L0_;

L2_:;
  // r118 = dyn base16(<sym digits>)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r118)
  // L0(r118)
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r118_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner270580366_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r132_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_s10_;
  SEXP Rsh_Fir_reg_s11_;
  SEXP Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r135_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // sym18 = ldf c
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // base18 = ldf c in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args182);
  // if guard18 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c28 = `is.object`(r129)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_r129_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args183);
  // if c28 then L4() else L5(r129)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L4()
    goto L4_;
  } else {
  // L5(r129)
    Rsh_Fir_reg_r132_ = Rsh_Fir_reg_r129_;
    goto L5_;
  }

L1_:;
  // return dx28
  return Rsh_Fir_reg_dx28_;

L2_:;
  // c27 = ldf c in base
  Rsh_Fir_reg_c27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r130 = dyn c27("", "0")
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args184[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c27_, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L0(r130)
  // L0(r130)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r130_;
  goto L0_;

L3_:;
  // r128 = dyn base18("", "0")
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args185[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 2, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L0(r128)
  // L0(r128)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r128_;
  goto L0_;

L4_:;
  // dr22 = tryDispatchBuiltin.1("[", r129)
  SEXP Rsh_Fir_array_args186[2];
  Rsh_Fir_array_args186[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_r129_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args186);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // if dc11 then L6() else L5(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr22)
    Rsh_Fir_reg_r132_ = Rsh_Fir_reg_dr22_;
    goto L5_;
  }

L5_:;
  // s10 = ld s
  Rsh_Fir_reg_s10_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // s11 = force? s10
  Rsh_Fir_reg_s11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s10_);
  // checkMissing(s11)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_s11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // r133 = `<`(s11, 10.0)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_s11_;
  Rsh_Fir_array_args189[1] = Rsh_const(CCP, 80);
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args189);
  // r134 = `+`(r133, 1)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_r133_;
  Rsh_Fir_array_args190[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args190);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r135 = dyn __3(r132, r134)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L1(r135)
  // L1(r135)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r135_;
  goto L1_;

L6_:;
  // dx27 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // goto L1(dx27)
  // L1(dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner270580366_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_reg_s12_;
  SEXP Rsh_Fir_reg_s13_;
  SEXP Rsh_Fir_reg_as_character1_;
  SEXP Rsh_Fir_reg_r139_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // sym19 = ldf `as.character`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base19 = ldf `as.character` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args193);
  // if guard19 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r138
  return Rsh_Fir_reg_r138_;

L1_:;
  // s12 = ld s
  Rsh_Fir_reg_s12_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // s13 = force? s12
  Rsh_Fir_reg_s13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s12_);
  // checkMissing(s13)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_s13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty()));
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r139 = dyn as_character1(s13)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_s13_;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L0(r139)
  // L0(r139)
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r139_;
  goto L0_;

L2_:;
  // r137 = dyn base19(<sym s>)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L0(r137)
  // L0(r137)
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r137_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner270580366_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_r145_;
  SEXP Rsh_Fir_reg_dr24_;
  SEXP Rsh_Fir_reg_dc12_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg_n0_;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r146_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // r142 = ld r1
  Rsh_Fir_reg_r142_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // r143 = force? r142
  Rsh_Fir_reg_r143_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r142_);
  // checkMissing(r143)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_r143_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(r143)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_r143_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args199);
  // if c29 then L1() else L2(r143)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L1()
    goto L1_;
  } else {
  // L2(r143)
    Rsh_Fir_reg_r145_ = Rsh_Fir_reg_r143_;
    goto L2_;
  }

L0_:;
  // return dx30
  return Rsh_Fir_reg_dx30_;

L1_:;
  // dr24 = tryDispatchBuiltin.1("[", r143)
  SEXP Rsh_Fir_array_args200[2];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_r143_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args200);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // if dc12 then L3() else L2(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr24)
    Rsh_Fir_reg_r145_ = Rsh_Fir_reg_dr24_;
    goto L2_;
  }

L2_:;
  // n0 = ld n0
  Rsh_Fir_reg_n0_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // n1 = force? n0
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n0_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r146 = dyn __4(r145, n1)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_r145_;
  Rsh_Fir_array_args202[1] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L0(r146)
  // L0(r146)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_r146_;
  goto L0_;

L3_:;
  // dx29 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // goto L0(dx29)
  // L0(dx29)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx29_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner270580366_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf1_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r155_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // sprintf1 = ldf sprintf
  Rsh_Fir_reg_sprintf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p14 = prom<V +>{
  //   x33 = ld x;
  //   x34 = force? x33;
  //   checkMissing(x34);
  //   c30 = `is.object`(x34);
  //   if c30 then L2() else L3(x34);
  // L1(dx32):
  //   c31 = `is.object`(dx32);
  //   if c31 then L5() else L6(dx32);
  // L2():
  //   dr26 = tryDispatchBuiltin.1("$", x34);
  //   dc13 = getTryDispatchBuiltinDispatched(dr26);
  //   if dc13 then L4() else L3(dr26);
  // L3(x36):
  //   r148 = `$`(x36, <sym hour>);
  //   goto L1(r148);
  // L0(dx36):
  //   return dx36;
  // L4():
  //   dx31 = getTryDispatchBuiltinValue(dr26);
  //   goto L1(dx31);
  // L5():
  //   dr28 = tryDispatchBuiltin.1("[", dx32);
  //   dc14 = getTryDispatchBuiltinDispatched(dr28);
  //   if dc14 then L7() else L6(dr28);
  // L6(dx34):
  //   n2 = ld n0;
  //   n3 = force? n2;
  //   __5 = ldf `[` in base;
  //   r149 = dyn __5(dx34, n3);
  //   goto L0(r149);
  // L7():
  //   dx35 = getTryDispatchBuiltinValue(dr28);
  //   goto L0(dx35);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_15, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   x37 = ld x;
  //   x38 = force? x37;
  //   checkMissing(x38);
  //   c32 = `is.object`(x38);
  //   if c32 then L2() else L3(x38);
  // L1(dx38):
  //   c33 = `is.object`(dx38);
  //   if c33 then L5() else L6(dx38);
  // L2():
  //   dr30 = tryDispatchBuiltin.1("$", x38);
  //   dc15 = getTryDispatchBuiltinDispatched(dr30);
  //   if dc15 then L4() else L3(dr30);
  // L3(x40):
  //   r151 = `$`(x40, <sym min>);
  //   goto L1(r151);
  // L0(dx42):
  //   return dx42;
  // L4():
  //   dx37 = getTryDispatchBuiltinValue(dr30);
  //   goto L1(dx37);
  // L5():
  //   dr32 = tryDispatchBuiltin.1("[", dx38);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L7() else L6(dr32);
  // L6(dx40):
  //   n4 = ld n0;
  //   n5 = force? n4;
  //   __6 = ldf `[` in base;
  //   r152 = dyn __6(dx40, n5);
  //   goto L0(r152);
  // L7():
  //   dx41 = getTryDispatchBuiltinValue(dr32);
  //   goto L0(dx41);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_16, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   sch = ld sch;
  //   sch1 = force? sch;
  //   checkMissing(sch1);
  //   return sch1;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270580366_17, 0, NULL, CCP, RHO);
  // r155 = dyn sprintf1("%02d:%02d:%s", p14, p15, p16)
  SEXP Rsh_Fir_array_args227[4];
  Rsh_Fir_array_args227[0] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args227[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args227[2] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args227[3] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names60[4];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_array_arg_names60[2] = R_MissingArg;
  Rsh_Fir_array_arg_names60[3] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf1_, 4, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names60, CCP, RHO);
  // return r155
  return Rsh_Fir_reg_r155_;
}
SEXP Rsh_Fir_user_promise_inner270580366_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_x34_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_x36_;
  SEXP Rsh_Fir_reg_dr26_;
  SEXP Rsh_Fir_reg_dc13_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg_dx32_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_dx34_;
  SEXP Rsh_Fir_reg_dr28_;
  SEXP Rsh_Fir_reg_dc14_;
  SEXP Rsh_Fir_reg_dx35_;
  SEXP Rsh_Fir_reg_dx36_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r149_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // x33 = ld x
  Rsh_Fir_reg_x33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x34 = force? x33
  Rsh_Fir_reg_x34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x33_);
  // checkMissing(x34)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_x34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(x34)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args205);
  // if c30 then L2() else L3(x34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L2()
    goto L2_;
  } else {
  // L3(x34)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_x34_;
    goto L3_;
  }

L0_:;
  // return dx36
  return Rsh_Fir_reg_dx36_;

L1_:;
  // c31 = `is.object`(dx32)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_dx32_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args206);
  // if c31 then L5() else L6(dx32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx32)
    Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx32_;
    goto L6_;
  }

L2_:;
  // dr26 = tryDispatchBuiltin.1("$", x34)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args207[1] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args207);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // if dc13 then L4() else L3(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr26)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_dr26_;
    goto L3_;
  }

L3_:;
  // r148 = `$`(x36, <sym hour>)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_args209[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args209);
  // goto L1(r148)
  // L1(r148)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_r148_;
  goto L1_;

L4_:;
  // dx31 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty());
  // goto L1(dx31)
  // L1(dx31)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx31_;
  goto L1_;

L5_:;
  // dr28 = tryDispatchBuiltin.1("[", dx32)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_dx32_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args211);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // if dc14 then L7() else L6(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr28)
    Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dr28_;
    goto L6_;
  }

L6_:;
  // n2 = ld n0
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r149 = dyn __5(dx34, n3)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dx34_;
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args213, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L0(r149)
  // L0(r149)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_r149_;
  goto L0_;

L7_:;
  // dx35 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // goto L0(dx35)
  // L0(dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx35_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner270580366_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x37_;
  SEXP Rsh_Fir_reg_x38_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_x40_;
  SEXP Rsh_Fir_reg_dr30_;
  SEXP Rsh_Fir_reg_dc15_;
  SEXP Rsh_Fir_reg_dx37_;
  SEXP Rsh_Fir_reg_dx38_;
  SEXP Rsh_Fir_reg_r151_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_dx40_;
  SEXP Rsh_Fir_reg_dr32_;
  SEXP Rsh_Fir_reg_dc16_;
  SEXP Rsh_Fir_reg_dx41_;
  SEXP Rsh_Fir_reg_dx42_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r152_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(x38)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args216);
  // if c32 then L2() else L3(x38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L2()
    goto L2_;
  } else {
  // L3(x38)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_x38_;
    goto L3_;
  }

L0_:;
  // return dx42
  return Rsh_Fir_reg_dx42_;

L1_:;
  // c33 = `is.object`(dx38)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args217);
  // if c33 then L5() else L6(dx38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx38)
    Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx38_;
    goto L6_;
  }

L2_:;
  // dr30 = tryDispatchBuiltin.1("$", x38)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args218);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // if dc15 then L4() else L3(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr30)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_dr30_;
    goto L3_;
  }

L3_:;
  // r151 = `$`(x40, <sym min>)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_x40_;
  Rsh_Fir_array_args220[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args220);
  // goto L1(r151)
  // L1(r151)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_r151_;
  goto L1_;

L4_:;
  // dx37 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty());
  // goto L1(dx37)
  // L1(dx37)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx37_;
  goto L1_;

L5_:;
  // dr32 = tryDispatchBuiltin.1("[", dx38)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args222);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // if dc16 then L7() else L6(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr32)
    Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dr32_;
    goto L6_;
  }

L6_:;
  // n4 = ld n0
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r152 = dyn __6(dx40, n5)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dx40_;
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L0(r152)
  // L0(r152)
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_r152_;
  goto L0_;

L7_:;
  // dx41 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L0(dx41)
  // L0(dx41)
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx41_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner270580366_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sch;
  SEXP Rsh_Fir_reg_sch1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner270580366/0: expected 0, got %d", NCAPTURES);

  // sch = ld sch
  Rsh_Fir_reg_sch = Rsh_Fir_load(Rsh_const(CCP, 81), RHO);
  // sch1 = force? sch
  Rsh_Fir_reg_sch1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sch);
  // checkMissing(sch1)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_sch1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // return sch1
  return Rsh_Fir_reg_sch1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
