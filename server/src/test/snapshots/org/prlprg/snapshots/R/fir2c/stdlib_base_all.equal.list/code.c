#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3020460942_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3020460942_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3020460942_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3020460942_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner3020460942
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3020460942_, RHO, CCP);
  // st `all.equal.list` = r
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
SEXP Rsh_Fir_user_function_inner3020460942_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3020460942 dynamic dispatch ([target, current, `...`, `check.attributes`, `use.names`])

  return Rsh_Fir_user_version_inner3020460942_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3020460942_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3020460942 version 0 (*, *, dots, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3020460942/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_target;
  SEXP Rsh_Fir_reg_current;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_check_attributes;
  SEXP Rsh_Fir_reg_use_names;
  SEXP Rsh_Fir_reg_check_attributes_isMissing;
  SEXP Rsh_Fir_reg_check_attributes_orDefault;
  SEXP Rsh_Fir_reg_use_names_isMissing;
  SEXP Rsh_Fir_reg_use_names_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_check_attributes1_;
  SEXP Rsh_Fir_reg_check_attributes2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_use_names1_;
  SEXP Rsh_Fir_reg_use_names2_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_check_attributes3_;
  SEXP Rsh_Fir_reg_check_attributes4_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_attr_all_equal;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_target3_;
  SEXP Rsh_Fir_reg_target4_;
  SEXP Rsh_Fir_reg_unclass;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_current3_;
  SEXP Rsh_Fir_reg_current4_;
  SEXP Rsh_Fir_reg_unclass1_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_target5_;
  SEXP Rsh_Fir_reg_target6_;
  SEXP Rsh_Fir_reg_is_list;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_target7_;
  SEXP Rsh_Fir_reg_target8_;
  SEXP Rsh_Fir_reg_is_vector;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_current5_;
  SEXP Rsh_Fir_reg_current6_;
  SEXP Rsh_Fir_reg_is_list1_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_current7_;
  SEXP Rsh_Fir_reg_current8_;
  SEXP Rsh_Fir_reg_is_vector1_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_msg2_;
  SEXP Rsh_Fir_reg_msg3_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_target9_;
  SEXP Rsh_Fir_reg_target10_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_current9_;
  SEXP Rsh_Fir_reg_current10_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_msg4_;
  SEXP Rsh_Fir_reg_msg5_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_msg6_;
  SEXP Rsh_Fir_reg_msg7_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_msg9_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_grep;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_current11_;
  SEXP Rsh_Fir_reg_current12_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_msg12_;
  SEXP Rsh_Fir_reg_msg13_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_use_names3_;
  SEXP Rsh_Fir_reg_use_names4_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_target11_;
  SEXP Rsh_Fir_reg_target12_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_iseq;
  SEXP Rsh_Fir_reg_iseq1_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_current13_;
  SEXP Rsh_Fir_reg_current14_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_iseq2_;
  SEXP Rsh_Fir_reg_iseq3_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_iseq4_;
  SEXP Rsh_Fir_reg_iseq5_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_all_equal;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_mi;
  SEXP Rsh_Fir_reg_mi1_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_msg14_;
  SEXP Rsh_Fir_reg_msg15_;
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_c75_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_msg16_;
  SEXP Rsh_Fir_reg_msg17_;
  SEXP Rsh_Fir_reg_c76_;
  SEXP Rsh_Fir_reg_c77_;
  SEXP Rsh_Fir_reg_msg18_;
  SEXP Rsh_Fir_reg_msg19_;

  // Bind parameters
  Rsh_Fir_reg_target = PARAMS[0];
  Rsh_Fir_reg_current = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_check_attributes = PARAMS[3];
  Rsh_Fir_reg_use_names = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st target = target
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_target, RHO);
  (void)(Rsh_Fir_reg_target);
  // st current = current
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_current, RHO);
  (void)(Rsh_Fir_reg_current);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // check_attributes_isMissing = missing.0(check_attributes)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_check_attributes;
  Rsh_Fir_reg_check_attributes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if check_attributes_isMissing then L0(TRUE) else L0(check_attributes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_check_attributes_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_check_attributes_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(check_attributes)
    Rsh_Fir_reg_check_attributes_orDefault = Rsh_Fir_reg_check_attributes;
    goto L0_;
  }

L0_:;
  // st `check.attributes` = check_attributes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_check_attributes_orDefault, RHO);
  (void)(Rsh_Fir_reg_check_attributes_orDefault);
  // use_names_isMissing = missing.0(use_names)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_use_names;
  Rsh_Fir_reg_use_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if use_names_isMissing then L1(TRUE) else L1(use_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_use_names_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_use_names_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(use_names)
    Rsh_Fir_reg_use_names_orDefault = Rsh_Fir_reg_use_names;
    goto L1_;
  }

L1_:;
  // st `use.names` = use_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_use_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_use_names_orDefault);
  // sym = ldf `is.logical`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.logical` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L2_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args3);
  // c1 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c1 then L56() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L56()
    goto L56_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym1 = ldf `is.logical`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.logical` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L5_:;
  // r9 = `!`(r8)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args6);
  // c3 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c3 then L63() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L63()
    goto L63_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // check_attributes3 = ld `check.attributes`
  Rsh_Fir_reg_check_attributes3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L67() else D6()
  // L67()
  goto L67_;

L8_:;
  // goto L9(NULL)
  // L9(NULL)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 8);
  goto L9_;

L9_:;
  // st msg = r17
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym2 = ldf unclass
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf unclass in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L10_:;
  // st target = r19
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym3 = ldf unclass
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf unclass in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L11_:;
  // st current = r22
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym4 = ldf `is.list`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf `is.list` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard4 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L12_:;
  // r27 = `!`(r25)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args11);
  // c5 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c5 then L84() else L13(c5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L84()
    goto L84_;
  } else {
  // L13(c5)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
    goto L13_;
  }

L13_:;
  // c14 = `as.logical`(c7)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c14 then L90() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L90()
    goto L90_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // r31 = `!`(r29)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args14);
  // c11 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // c12 = `&&`(c10, c11)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args16);
  // goto L13(c12)
  // L13(c12)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c12_;
  goto L13_;

L15_:;
  // sym7 = ldf `is.list`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base7 = ldf `is.list` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard7 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r33
  return Rsh_Fir_reg_r33_;

L18_:;
  // r40 = `!`(r38)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args18);
  // c16 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // if c16 then L101() else L19(c16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L101()
    goto L101_;
  } else {
  // L19(c16)
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c16_;
    goto L19_;
  }

L19_:;
  // c25 = `as.logical`(c18)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args20);
  // if c25 then L107() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L107()
    goto L107_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // r44 = `!`(r42)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args21);
  // c22 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // c23 = `&&`(c21, c22)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args23);
  // goto L19(c23)
  // L19(c23)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c23_;
  goto L19_;

L21_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard10 then L114() else L115()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L114()
    goto L114_;
  } else {
  // L115()
    goto L115_;
  }

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r46
  return Rsh_Fir_reg_r46_;

L24_:;
  // st n = r51
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // sym11 = ldf length
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base11 = ldf length in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard11 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L25_:;
  // r59 = `!=`(r56, r57)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args26);
  // c27 = `as.logical`(r59)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c27 then L122() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L122()
    goto L122_;
  } else {
  // L26()
    goto L26_;
  }

L26_:;
  // goto L34()
  // L34()
  goto L34_;

L27_:;
  // r62 = `!`(r61)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args28);
  // c29 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // if c29 then L126() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L126()
    goto L126_;
  } else {
  // L28()
    goto L28_;
  }

L28_:;
  // goto L30()
  // L30()
  goto L30_;

L29_:;
  // st msg = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L30()
  // L30()
  goto L30_;

L30_:;
  // sym13 = ldf min
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base13 = ldf min in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard13 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L31_:;
  // st n = r68
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r68_, RHO);
  (void)(Rsh_Fir_reg_r68_);
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard15 then L142() else L143()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L142()
    goto L142_;
  } else {
  // L143()
    goto L143_;
  }

L32_:;
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r72 = dyn min(n1, r70)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L141() else D36()
  // L141()
  goto L141_;

L33_:;
  // st msg = r74
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // goto L34()
  // L34()
  goto L34_;

L34_:;
  // sym16 = ldf seq_len
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base16 = ldf seq_len in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard16 then L149() else L150()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L149()
    goto L149_;
  } else {
  // L150()
    goto L150_;
  }

L35_:;
  // st iseq = r80
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // use_names3 = ld `use.names`
  Rsh_Fir_reg_use_names3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L152() else D42()
  // L152()
  goto L152_;

L36_:;
  // goto L44()
  // L44()
  goto L44_;

L37_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L165() else D47()
  // L165()
  goto L165_;

L38_:;
  // c33 = `is.object`(r85)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args34);
  // if c33 then L160() else L161(r85)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L160()
    goto L160_;
  } else {
  // L161(r85)
    Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r85_;
    goto L161_;
  }

L39_:;
  // st nt = dx4
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r90 = dyn length3(dx4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L164() else D46()
  // L164()
  goto L164_;

L40_:;
  // st `use.names` = c36
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_c36_, RHO);
  (void)(Rsh_Fir_reg_c36_);
  // goto L44()
  // L44()
  goto L44_;

L41_:;
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L178() else D52()
  // L178()
  goto L178_;

L42_:;
  // c43 = `is.object`(r95)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args36);
  // if c43 then L173() else L174(c42, r95)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L173()
    goto L173_;
  } else {
  // L174(c42, r95)
    Rsh_Fir_reg_c45_ = Rsh_Fir_reg_c42_;
    Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r95_;
    goto L174_;
  }

L43_:;
  // st nc = dx6
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r100 = dyn length4(dx6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L177() else D51()
  // L177()
  goto L177_;

L44_:;
  // iseq4 = ld iseq
  Rsh_Fir_reg_iseq4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L181() else D53()
  // L181()
  goto L181_;

L45_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // c52 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if c52 then L182() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c52_)) {
  // L182()
    goto L182_;
  } else {
  // L50()
    goto L50_;
  }

L46_:;
  // c56 = `as.logical`(r110)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c56 then L188() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L188()
    goto L188_;
  } else {
  // L47()
    goto L47_;
  }

L47_:;
  // goto L49(i11)
  // L49(i11)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i11_;
  goto L49_;

L48_:;
  // st msg = r112
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r112_, RHO);
  (void)(Rsh_Fir_reg_r112_);
  // goto L49(i16)
  // L49(i16)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i16_;
  goto L49_;

L49_:;
  // goto L45(i25)
  // L45(i25)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i25_;
  goto L45_;

L50_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args41[4];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args41);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // all_equal = ldf `all.equal`
  Rsh_Fir_reg_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L183() else D54()
  // L183()
  goto L183_;

L51_:;
  // c77 = `as.logical`(r125)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_reg_c77_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c77 then L199() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c77_)) {
  // L199()
    goto L199_;
  } else {
  // L52()
    goto L52_;
  }

L52_:;
  // msg18 = ld msg
  Rsh_Fir_reg_msg18_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L201() else D62()
  // L201()
  goto L201_;

L53_:;
  // check_attributes1 = ld `check.attributes`
  Rsh_Fir_reg_check_attributes1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L55() else D0()
  // L55()
  goto L55_;

L54_:;
  // r = dyn base(<sym check.attributes>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 1 [check_attributes1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_check_attributes1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L55_:;
  // check_attributes2 = force? check_attributes1
  Rsh_Fir_reg_check_attributes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_attributes1_);
  // checkMissing(check_attributes2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_check_attributes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c = `is.logical`(check_attributes2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_check_attributes2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args45);
  // goto L2(c)
  // L2(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L2_;

L56_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L57() else D1()
  // L57()
  goto L57_;

D1_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // p = prom<V +>{
  //   gettextf = ldf gettextf;
  //   r3 = dyn gettextf("'%s' must be logical", "check.attributes");
  //   return r3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_, 0, NULL, CCP, RHO);
  // r5 = dyn stop[, domain](p, NA_LGL)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L58() else D2()
  // L58()
  goto L58_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L4()
  // L4()
  goto L4_;

L60_:;
  // use_names1 = ld `use.names`
  Rsh_Fir_reg_use_names1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L62() else D3()
  // L62()
  goto L62_;

L61_:;
  // r7 = dyn base1(<sym use.names>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L5_;

D3_:;
  // deopt 14 [use_names1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_use_names1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L62_:;
  // use_names2 = force? use_names1
  Rsh_Fir_reg_use_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_use_names1_);
  // checkMissing(use_names2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_use_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c2 = `is.logical`(use_names2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_use_names2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args50);
  // goto L5(c2)
  // L5(c2)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_c2_;
  goto L5_;

L63_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L64() else D4()
  // L64()
  goto L64_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L64_:;
  // p1 = prom<V +>{
  //   gettextf1 = ldf gettextf;
  //   r10 = dyn gettextf1("'%s' must be logical", "use.names");
  //   return r10;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_1, 0, NULL, CCP, RHO);
  // r12 = dyn stop1[, domain](p1, NA_LGL)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L65() else D5()
  // L65()
  goto L65_;

D5_:;
  // deopt 23 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L7()
  // L7()
  goto L7_;

D6_:;
  // deopt 26 [check_attributes3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_check_attributes3_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L67_:;
  // check_attributes4 = force? check_attributes3
  Rsh_Fir_reg_check_attributes4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_attributes3_);
  // checkMissing(check_attributes4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_check_attributes4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(check_attributes4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_check_attributes4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args54);
  // if c4 then L68() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L68()
    goto L68_;
  } else {
  // L8()
    goto L8_;
  }

L68_:;
  // attr_all_equal = ldf `attr.all.equal`
  Rsh_Fir_reg_attr_all_equal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L69() else D7()
  // L69()
  goto L69_;

D7_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // p2 = prom<V +>{
  //   target1 = ld target;
  //   target2 = force? target1;
  //   checkMissing(target2);
  //   return target2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   current1 = ld current;
  //   current2 = force? current1;
  //   checkMissing(current2);
  //   return current2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_3, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r16 = dyn attr_all_equal[, , `...`](p2, p3, ddd1)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr_all_equal, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L70() else D8()
  // L70()
  goto L70_;

D8_:;
  // deopt 33 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L9(r16)
  // L9(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L9_;

L72_:;
  // target3 = ld target
  Rsh_Fir_reg_target3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L74() else D9()
  // L74()
  goto L74_;

L73_:;
  // r18 = dyn base2(<sym target>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(r18)
  // L10(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L10_;

D9_:;
  // deopt 39 [target3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_target3_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L74_:;
  // target4 = force? target3
  Rsh_Fir_reg_target4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target3_);
  // checkMissing(target4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_target4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r20 = dyn unclass(target4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_target4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L75() else D10()
  // L75()
  goto L75_;

D10_:;
  // deopt 42 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L10_;

L76_:;
  // current3 = ld current
  Rsh_Fir_reg_current3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L78() else D11()
  // L78()
  goto L78_;

L77_:;
  // r21 = dyn base3(<sym current>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L11_;

D11_:;
  // deopt 46 [current3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_current3_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L78_:;
  // current4 = force? current3
  Rsh_Fir_reg_current4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current3_);
  // checkMissing(current4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_current4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // unclass1 = ldf unclass in base
  Rsh_Fir_reg_unclass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r23 = dyn unclass1(current4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_current4_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass1_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L79() else D12()
  // L79()
  goto L79_;

D12_:;
  // deopt 49 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L11_;

L80_:;
  // target5 = ld target
  Rsh_Fir_reg_target5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L82() else D13()
  // L82()
  goto L82_;

L81_:;
  // r24 = dyn base4(<sym target>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(r24)
  // L12(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L12_;

D13_:;
  // deopt 53 [target5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_target5_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L82_:;
  // target6 = force? target5
  Rsh_Fir_reg_target6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target5_);
  // checkMissing(target6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_target6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r26 = dyn is_list(target6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_target6_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L83() else D14()
  // L83()
  goto L83_;

D14_:;
  // deopt 56 [r26]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L12(r26)
  // L12(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L12_;

L84_:;
  // sym5 = ldf `is.vector`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base5 = ldf `is.vector` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard5 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L85_:;
  // target7 = ld target
  Rsh_Fir_reg_target7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L87() else D15()
  // L87()
  goto L87_;

L86_:;
  // r28 = dyn base5(<sym target>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L14(c5, r28)
  // L14(c5, r28)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L14_;

D15_:;
  // deopt 60 [c5, target7]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_target7_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L87_:;
  // target8 = force? target7
  Rsh_Fir_reg_target8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target7_);
  // checkMissing(target8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_target8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // is_vector = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r30 = dyn is_vector(target8, "any")
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_target8_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L88() else D16()
  // L88()
  goto L88_;

D16_:;
  // deopt 64 [c5, r30]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L14(c5, r30)
  // L14(c5, r30)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L14_;

L90_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard6 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L91_:;
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L93() else D17()
  // L93()
  goto L93_;

L92_:;
  // r32 = dyn base6(<sym msg>, "target is not list-like")
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L16(r32)
  // L16(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L16_;

D17_:;
  // deopt 69 [msg]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_msg;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L93_:;
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r34 = dyn c15(msg1, "target is not list-like")
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_msg1_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L94() else D18()
  // L94()
  goto L94_;

D18_:;
  // deopt 73 [r34]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L16(r34)
  // L16(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L16_;

L97_:;
  // current5 = ld current
  Rsh_Fir_reg_current5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L99() else D19()
  // L99()
  goto L99_;

L98_:;
  // r37 = dyn base7(<sym current>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L18(r37)
  // L18(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L18_;

D19_:;
  // deopt 79 [current5]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_current5_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L99_:;
  // current6 = force? current5
  Rsh_Fir_reg_current6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current5_);
  // checkMissing(current6)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_current6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // is_list1 = ldf `is.list` in base
  Rsh_Fir_reg_is_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r39 = dyn is_list1(current6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_current6_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list1_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L100() else D20()
  // L100()
  goto L100_;

D20_:;
  // deopt 82 [r39]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L18(r39)
  // L18(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L18_;

L101_:;
  // sym8 = ldf `is.vector`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base8 = ldf `is.vector` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard8 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L102_:;
  // current7 = ld current
  Rsh_Fir_reg_current7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L104() else D21()
  // L104()
  goto L104_;

L103_:;
  // r41 = dyn base8(<sym current>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L20(c16, r41)
  // L20(c16, r41)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L20_;

D21_:;
  // deopt 86 [c16, current7]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_current7_;
  Rsh_Fir_deopt(86, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L104_:;
  // current8 = force? current7
  Rsh_Fir_reg_current8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current7_);
  // checkMissing(current8)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_current8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // is_vector1 = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r43 = dyn is_vector1(current8, "any")
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_current8_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector1_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L105() else D22()
  // L105()
  goto L105_;

D22_:;
  // deopt 90 [c16, r43]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L20(c16, r43)
  // L20(c16, r43)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L20_;

L107_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard9 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L108_:;
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L110() else D23()
  // L110()
  goto L110_;

L109_:;
  // r45 = dyn base9(<sym msg>, "current is not list-like")
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L22(r45)
  // L22(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L22_;

D23_:;
  // deopt 95 [msg2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L110_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c26 = ldf c in base
  Rsh_Fir_reg_c26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r47 = dyn c26(msg3, "current is not list-like")
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c26_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L111() else D24()
  // L111()
  goto L111_;

D24_:;
  // deopt 99 [r47]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L22(r47)
  // L22(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L22_;

L114_:;
  // target9 = ld target
  Rsh_Fir_reg_target9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L116() else D25()
  // L116()
  goto L116_;

L115_:;
  // r50 = dyn base10(<sym target>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L24(r50)
  // L24(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L24_;

D25_:;
  // deopt 105 [target9]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_target9_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L116_:;
  // target10 = force? target9
  Rsh_Fir_reg_target10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target9_);
  // checkMissing(target10)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_target10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r52 = dyn length(target10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_target10_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L117() else D26()
  // L117()
  goto L117_;

D26_:;
  // deopt 108 [r52]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L24(r52)
  // L24(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L24_;

L118_:;
  // current9 = ld current
  Rsh_Fir_reg_current9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L120() else D27()
  // L120()
  goto L120_;

L119_:;
  // r55 = dyn base11(<sym current>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L25(r51, r55)
  // L25(r51, r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r55_;
  goto L25_;

D27_:;
  // deopt 111 [r51, current9]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_current9_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L120_:;
  // current10 = force? current9
  Rsh_Fir_reg_current10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current9_);
  // checkMissing(current10)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_current10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r58 = dyn length1(current10)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_current10_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L121() else D28()
  // L121()
  goto L121_;

D28_:;
  // deopt 114 [r51, r58]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(114, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L121_:;
  // goto L25(r51, r58)
  // L25(r51, r58)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L25_;

L122_:;
  // sym12 = ldf `is.null`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base12 = ldf `is.null` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard12 then L123() else L124()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L123()
    goto L123_;
  } else {
  // L124()
    goto L124_;
  }

L123_:;
  // msg4 = ld msg
  Rsh_Fir_reg_msg4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L125() else D29()
  // L125()
  goto L125_;

L124_:;
  // r60 = dyn base12(<sym msg>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L27(r60)
  // L27(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L27_;

D29_:;
  // deopt 117 [msg4]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_msg4_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L125_:;
  // msg5 = force? msg4
  Rsh_Fir_reg_msg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg4_);
  // checkMissing(msg5)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_msg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c28 = `==`(msg5, NULL)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_msg5_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args95);
  // goto L27(c28)
  // L27(c28)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_c28_;
  goto L27_;

L126_:;
  // msg6 = ld msg
  Rsh_Fir_reg_msg6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L127() else D30()
  // L127()
  goto L127_;

D30_:;
  // deopt 121 [msg6]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_msg6_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L127_:;
  // msg7 = force? msg6
  Rsh_Fir_reg_msg7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg6_);
  // checkMissing(msg7)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_msg7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(msg7)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_msg7_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args97);
  // if c30 then L128() else L129(msg7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L128()
    goto L128_;
  } else {
  // L129(msg7)
    Rsh_Fir_reg_msg9_ = Rsh_Fir_reg_msg7_;
    goto L129_;
  }

L128_:;
  // dr = tryDispatchBuiltin.1("[", msg7)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_msg7_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc then L130() else L129(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L130()
    goto L130_;
  } else {
  // L129(dr)
    Rsh_Fir_reg_msg9_ = Rsh_Fir_reg_dr;
    goto L129_;
  }

L129_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L131() else D31()
  // L131()
  goto L131_;

L130_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L29(dx)
  // L29(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L29_;

D31_:;
  // deopt 124 [msg9]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_msg9_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L131_:;
  // p4 = prom<V +>{
  //   msg10 = ld msg;
  //   msg11 = force? msg10;
  //   checkMissing(msg11);
  //   return msg11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_4, 0, NULL, CCP, RHO);
  // r64 = dyn grep("\\bLengths\\b", p4)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L132() else D32()
  // L132()
  goto L132_;

D32_:;
  // deopt 127 [msg9, r64]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_msg9_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(127, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L132_:;
  // r65 = `-`(<missing>, r64)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args103);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r66 = dyn __(msg9, r65)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_msg9_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L29(r66)
  // L29(r66)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r66_;
  goto L29_;

L134_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L136() else D33()
  // L136()
  goto L136_;

L135_:;
  // r67 = dyn base13(<sym n>, <lang length(current)>)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L31(r67)
  // L31(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L31_;

D33_:;
  // deopt 135 [n]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L136_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // sym14 = ldf length
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base14 = ldf length in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard14 then L137() else L138()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L137()
    goto L137_;
  } else {
  // L138()
    goto L138_;
  }

L137_:;
  // current11 = ld current
  Rsh_Fir_reg_current11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L139() else D34()
  // L139()
  goto L139_;

L138_:;
  // r69 = dyn base14(<sym current>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L32(r69)
  // L32(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L32_;

D34_:;
  // deopt 139 [current11]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_current11_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L139_:;
  // current12 = force? current11
  Rsh_Fir_reg_current12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current11_);
  // checkMissing(current12)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_current12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r71 = dyn length2(current12)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_current12_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L140() else D35()
  // L140()
  goto L140_;

D35_:;
  // deopt 142 [r71]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L140_:;
  // goto L32(r71)
  // L32(r71)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L32_;

D36_:;
  // deopt 144 [r72]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L141_:;
  // goto L31(r72)
  // L31(r72)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r72_;
  goto L31_;

L142_:;
  // msg12 = ld msg
  Rsh_Fir_reg_msg12_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L144() else D37()
  // L144()
  goto L144_;

L143_:;
  // r73 = dyn base15(<sym msg>, <lang paste("Length mismatch: comparison on first", n, "components")>)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L33(r73)
  // L33(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L33_;

D37_:;
  // deopt 148 [msg12]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_msg12_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L144_:;
  // msg13 = force? msg12
  Rsh_Fir_reg_msg13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg12_);
  // checkMissing(msg13)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_msg13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L145() else D38()
  // L145()
  goto L145_;

D38_:;
  // deopt 151 []
  Rsh_Fir_deopt(151, 0, NULL, CCP, RHO);
  return R_NilValue;

L145_:;
  // p5 = prom<V +>{
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   return n3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_5, 0, NULL, CCP, RHO);
  // r76 = dyn paste("Length mismatch: comparison on first", p5, "components")
  SEXP Rsh_Fir_array_args114[3];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args114[2] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L146() else D39()
  // L146()
  goto L146_;

D39_:;
  // deopt 155 [r76]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L146_:;
  // c31 = ldf c in base
  Rsh_Fir_reg_c31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r77 = dyn c31(msg13, r76)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_msg13_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c31_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L147() else D40()
  // L147()
  goto L147_;

D40_:;
  // deopt 157 [r77]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L147_:;
  // goto L33(r77)
  // L33(r77)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r77_;
  goto L33_;

L149_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L151() else D41()
  // L151()
  goto L151_;

L150_:;
  // r79 = dyn base16(<sym n>)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L35(r79)
  // L35(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L35_;

D41_:;
  // deopt 162 [n4]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L151_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // r81 = seq_len(n5)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args118);
  // goto L35(r81)
  // L35(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L35_;

D42_:;
  // deopt 166 [use_names3]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_use_names3_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L152_:;
  // use_names4 = force? use_names3
  Rsh_Fir_reg_use_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_use_names3_);
  // checkMissing(use_names4)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_use_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // c32 = `as.logical`(use_names4)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_use_names4_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args120);
  // if c32 then L153() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L153()
    goto L153_;
  } else {
  // L36()
    goto L36_;
  }

L153_:;
  // sym17 = ldf length
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base17 = ldf length in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args121);
  // if guard17 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L154_:;
  // sym18 = ldf names
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base18 = ldf names in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard18 then L156() else L157()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L156()
    goto L156_;
  } else {
  // L157()
    goto L157_;
  }

L155_:;
  // r82 = dyn base17(<lang `<-`(nt, `[`(names(target), iseq))>)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L37(r82)
  // L37(r82)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L37_;

L156_:;
  // target11 = ld target
  Rsh_Fir_reg_target11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L158() else D43()
  // L158()
  goto L158_;

L157_:;
  // r84 = dyn base18(<sym target>)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L38(r84)
  // L38(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L38_;

D43_:;
  // deopt 172 [target11]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_target11_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L158_:;
  // target12 = force? target11
  Rsh_Fir_reg_target12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target11_);
  // checkMissing(target12)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_target12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r86 = dyn names(target12)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_target12_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L159() else D44()
  // L159()
  goto L159_;

D44_:;
  // deopt 175 [r86]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L159_:;
  // goto L38(r86)
  // L38(r86)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r86_;
  goto L38_;

L160_:;
  // dr2 = tryDispatchBuiltin.1("[", r85)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args127);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc1 then L162() else L161(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L162()
    goto L162_;
  } else {
  // L161(dr2)
    Rsh_Fir_reg_r88_ = Rsh_Fir_reg_dr2_;
    goto L161_;
  }

L161_:;
  // iseq = ld iseq
  Rsh_Fir_reg_iseq = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L163() else D45()
  // L163()
  goto L163_;

L162_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L39(dx3)
  // L39(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L39_;

D45_:;
  // deopt 176 [r88, iseq]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_iseq;
  Rsh_Fir_deopt(176, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L163_:;
  // iseq1 = force? iseq
  Rsh_Fir_reg_iseq1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iseq);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r89 = dyn __1(r88, iseq1)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_iseq1_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L39(r89)
  // L39(r89)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r89_;
  goto L39_;

D46_:;
  // deopt 181 [r90]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L164_:;
  // goto L37(r90)
  // L37(r90)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r90_;
  goto L37_;

D47_:;
  // deopt 181 [r83, n6]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(181, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L165_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // r91 = `==`(r83, n7)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args132);
  // c34 = `as.logical`(r91)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args133);
  // if c34 then L166() else L40(c34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L166()
    goto L166_;
  } else {
  // L40(c34)
    Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c34_;
    goto L40_;
  }

L166_:;
  // sym19 = ldf length
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base19 = ldf length in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args134);
  // if guard19 then L167() else L168()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L167()
    goto L167_;
  } else {
  // L168()
    goto L168_;
  }

L167_:;
  // sym20 = ldf names
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base20 = ldf names in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args135);
  // if guard20 then L169() else L170()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L169()
    goto L169_;
  } else {
  // L170()
    goto L170_;
  }

L168_:;
  // r92 = dyn base19(<lang `<-`(nc, `[`(names(current), iseq))>)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L41(c34, r92)
  // L41(c34, r92)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r92_;
  goto L41_;

L169_:;
  // current13 = ld current
  Rsh_Fir_reg_current13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L171() else D48()
  // L171()
  goto L171_;

L170_:;
  // r94 = dyn base20(<sym current>)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L42(c34, r94)
  // L42(c34, r94)
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L42_;

D48_:;
  // deopt 188 [c34, current13]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_current13_;
  Rsh_Fir_deopt(188, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L171_:;
  // current14 = force? current13
  Rsh_Fir_reg_current14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current13_);
  // checkMissing(current14)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_current14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r96 = dyn names1(current14)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_current14_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L172() else D49()
  // L172()
  goto L172_;

D49_:;
  // deopt 191 [c34, r96]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(191, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L172_:;
  // goto L42(c34, r96)
  // L42(c34, r96)
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r96_;
  goto L42_;

L173_:;
  // dr4 = tryDispatchBuiltin.1("[", r95)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args140);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if dc2 then L175() else L174(c42, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L175()
    goto L175_;
  } else {
  // L174(c42, dr4)
    Rsh_Fir_reg_c45_ = Rsh_Fir_reg_c42_;
    Rsh_Fir_reg_r98_ = Rsh_Fir_reg_dr4_;
    goto L174_;
  }

L174_:;
  // iseq2 = ld iseq
  Rsh_Fir_reg_iseq2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L176() else D50()
  // L176()
  goto L176_;

L175_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // goto L43(c42, dx5)
  // L43(c42, dx5)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L43_;

D50_:;
  // deopt 192 [c45, r98, iseq2]
  SEXP Rsh_Fir_array_deopt_stack46[3];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_iseq2_;
  Rsh_Fir_deopt(192, 3, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L176_:;
  // iseq3 = force? iseq2
  Rsh_Fir_reg_iseq3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iseq2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r99 = dyn __2(r98, iseq3)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_iseq3_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L43(c45, r99)
  // L43(c45, r99)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r99_;
  goto L43_;

D51_:;
  // deopt 197 [c47, r100]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(197, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L177_:;
  // goto L41(c47, r100)
  // L41(c47, r100)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r100_;
  goto L41_;

D52_:;
  // deopt 197 [c39, r93, n8]
  SEXP Rsh_Fir_array_deopt_stack48[3];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_r93_;
  Rsh_Fir_array_deopt_stack48[2] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(197, 3, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L178_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // r101 = `==`(r93, n9)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_n9_;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args145);
  // c48 = `as.logical`(r101)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args146);
  // c49 = `&&`(c39, c48)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args147);
  // goto L40(c49)
  // L40(c49)
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c49_;
  goto L40_;

D53_:;
  // deopt 204 [iseq4]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_iseq4_;
  Rsh_Fir_deopt(204, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L181_:;
  // iseq5 = force? iseq4
  Rsh_Fir_reg_iseq5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iseq4_);
  // checkMissing(iseq5)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_iseq5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // s = toForSeq(iseq5)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_iseq5_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args150);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 49);
  // goto L45(i)
  // L45(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L45_;

L182_:;
  // sym23 = ldf `is.null`
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base23 = ldf `is.null` in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args151);
  // if guard23 then L196() else L197()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L196()
    goto L196_;
  } else {
  // L197()
    goto L197_;
  }

D54_:;
  // deopt 207 [i2]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L183_:;
  // p6 = prom<V +>{
  //   target13 = ld target;
  //   target14 = force? target13;
  //   checkMissing(target14);
  //   c53 = `is.object`(target14);
  //   if c53 then L1() else L2(target14);
  // L0(dx8):
  //   return dx8;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", target14);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(target16):
  //   i5 = ld i;
  //   i6 = force? i5;
  //   __3 = ldf `[[` in base;
  //   r102 = dyn __3(target16, i6);
  //   goto L0(r102);
  // L3():
  //   dx7 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx7);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   current15 = ld current;
  //   current16 = force? current15;
  //   checkMissing(current16);
  //   c54 = `is.object`(current16);
  //   if c54 then L1() else L2(current16);
  // L0(dx10):
  //   return dx10;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[[", current16);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(current18):
  //   i7 = ld i;
  //   i8 = force? i7;
  //   __4 = ldf `[[` in base;
  //   r104 = dyn __4(current18, i8);
  //   goto L0(r104);
  // L3():
  //   dx9 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx9);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   check_attributes5 = ld `check.attributes`;
  //   check_attributes6 = force? check_attributes5;
  //   checkMissing(check_attributes6);
  //   return check_attributes6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   use_names5 = ld `use.names`;
  //   use_names6 = force? use_names5;
  //   checkMissing(use_names6);
  //   return use_names6;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_9, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // r108 = dyn all_equal[, , `check.attributes`, `use.names`, `...`](p6, p7, p8, p9, ddd2)
  SEXP Rsh_Fir_array_args166[5];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args166[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args166[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args166[4] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names50[5];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names50[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names50[4] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal, 5, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L184() else D55()
  // L184()
  goto L184_;

D55_:;
  // deopt 215 [i2, r108]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(215, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L184_:;
  // st mi = r108
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r108_, RHO);
  (void)(Rsh_Fir_reg_r108_);
  // sym21 = ldf `is.character`
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base21 = ldf `is.character` in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args167);
  // if guard21 then L185() else L186()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L185()
    goto L185_;
  } else {
  // L186()
    goto L186_;
  }

L185_:;
  // mi = ld mi
  Rsh_Fir_reg_mi = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L187() else D56()
  // L187()
  goto L187_;

L186_:;
  // r109 = dyn base21(<sym mi>)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L46(i2, r109)
  // L46(i2, r109)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L46_;

D56_:;
  // deopt 218 [i2, mi]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_mi;
  Rsh_Fir_deopt(218, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L187_:;
  // mi1 = force? mi
  Rsh_Fir_reg_mi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mi);
  // checkMissing(mi1)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_mi1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // c55 = `is.character`(mi1)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_mi1_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args170);
  // goto L46(i2, c55)
  // L46(i2, c55)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_c55_;
  goto L46_;

L188_:;
  // sym22 = ldf c
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base22 = ldf c in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args171);
  // if guard22 then L189() else L190()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L189()
    goto L189_;
  } else {
  // L190()
    goto L190_;
  }

L189_:;
  // msg14 = ld msg
  Rsh_Fir_reg_msg14_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L191() else D57()
  // L191()
  goto L191_;

L190_:;
  // r111 = dyn base22(<sym msg>, <lang paste0("Component ", if(`&&`(use.names, `==`(`[`(nt, i), `[`(nc, i))), dQuote(`[`(nt, i)), i), ": ", mi)>)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args172[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 2, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L48(i11, r111)
  // L48(i11, r111)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r111_;
  goto L48_;

D57_:;
  // deopt 223 [i11, msg14]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_msg14_;
  Rsh_Fir_deopt(223, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L191_:;
  // msg15 = force? msg14
  Rsh_Fir_reg_msg15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg14_);
  // checkMissing(msg15)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_msg15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L192() else D58()
  // L192()
  goto L192_;

D58_:;
  // deopt 226 [i11]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L192_:;
  // p11 = prom<V +>{
  //   use_names7 = ld `use.names`;
  //   use_names8 = force? use_names7;
  //   checkMissing(use_names8);
  //   c57 = `as.logical`(use_names8);
  //   if c57 then L4() else L0(c57);
  // L0(c59):
  //   c73 = `as.logical`(c59);
  //   if c73 then L12() else L3();
  // L4():
  //   nt = ld nt;
  //   nt1 = force? nt;
  //   checkMissing(nt1);
  //   c60 = `is.object`(nt1);
  //   if c60 then L5() else L6(c57, nt1);
  // L1(c64, dx12):
  //   nc = ld nc;
  //   nc1 = force? nc;
  //   checkMissing(nc1);
  //   c65 = `is.object`(nc1);
  //   if c65 then L8() else L9(c64, dx12, nc1);
  // L3():
  //   i23 = ld i;
  //   i24 = force? i23;
  //   checkMissing(i24);
  //   return i24;
  // L5():
  //   dr10 = tryDispatchBuiltin.1("[", nt1);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L7() else L6(c57, dr10);
  // L6(c62, nt3):
  //   i17 = ld i;
  //   i18 = force? i17;
  //   __5 = ldf `[` in base;
  //   r113 = dyn __5(nt3, i18);
  //   goto L1(c62, r113);
  // L12():
  //   dQuote = ldf dQuote;
  //   p10 = prom<V +>{
  //     nt4 = ld nt;
  //     nt5 = force? nt4;
  //     checkMissing(nt5);
  //     c74 = `is.object`(nt5);
  //     if c74 then L1() else L2(nt5);
  //   L0(dx20):
  //     return dx20;
  //   L1():
  //     dr14 = tryDispatchBuiltin.1("[", nt5);
  //     dc7 = getTryDispatchBuiltinDispatched(dr14);
  //     if dc7 then L3() else L2(dr14);
  //   L2(nt7):
  //     i21 = ld i;
  //     i22 = force? i21;
  //     __7 = ldf `[` in base;
  //     r116 = dyn __7(nt7, i22);
  //     goto L0(r116);
  //   L3():
  //     dx19 = getTryDispatchBuiltinValue(dr14);
  //     goto L0(dx19);
  //   };
  //   r118 = dyn dQuote(p10);
  //   return r118;
  // L2(c69, dx17, dx18):
  //   r115 = `==`(dx17, dx18);
  //   c70 = `as.logical`(r115);
  //   c71 = `&&`(c69, c70);
  //   goto L0(c71);
  // L7():
  //   dx11 = getTryDispatchBuiltinValue(dr10);
  //   goto L1(c57, dx11);
  // L8():
  //   dr12 = tryDispatchBuiltin.1("[", nc1);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L10() else L9(c64, dx12, dr12);
  // L9(c67, dx14, nc3):
  //   i19 = ld i;
  //   i20 = force? i19;
  //   __6 = ldf `[` in base;
  //   r114 = dyn __6(nc3, i20);
  //   goto L2(c67, dx14, r114);
  // L10():
  //   dx16 = getTryDispatchBuiltinValue(dr12);
  //   goto L2(c64, dx12, dx16);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_10, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   mi2 = ld mi;
  //   mi3 = force? mi2;
  //   checkMissing(mi3);
  //   return mi3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_12, 0, NULL, CCP, RHO);
  // r121 = dyn paste1("Component ", p11, ": ", p12)
  SEXP Rsh_Fir_array_args201[4];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args201[2] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args201[3] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names57[4];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_array_arg_names57[2] = R_MissingArg;
  Rsh_Fir_array_arg_names57[3] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 4, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L193() else D59()
  // L193()
  goto L193_;

D59_:;
  // deopt 231 [i11, r121]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(231, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L193_:;
  // c75 = ldf c in base
  Rsh_Fir_reg_c75_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r122 = dyn c75(msg15, r121)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_msg15_;
  Rsh_Fir_array_args202[1] = Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c75_, 2, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L194() else D60()
  // L194()
  goto L194_;

D60_:;
  // deopt 233 [i11, r122]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(233, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L194_:;
  // goto L48(i11, r122)
  // L48(i11, r122)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r122_;
  goto L48_;

L196_:;
  // msg16 = ld msg
  Rsh_Fir_reg_msg16_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L198() else D61()
  // L198()
  goto L198_;

L197_:;
  // r124 = dyn base23(<sym msg>)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args203, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L51(r124)
  // L51(r124)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r124_;
  goto L51_;

D61_:;
  // deopt 241 [msg16]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_msg16_;
  Rsh_Fir_deopt(241, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L198_:;
  // msg17 = force? msg16
  Rsh_Fir_reg_msg17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg16_);
  // checkMissing(msg17)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_msg17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // c76 = `==`(msg17, NULL)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_msg17_;
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args205);
  // goto L51(c76)
  // L51(c76)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_c76_;
  goto L51_;

L199_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 4);

D62_:;
  // deopt 246 [msg18]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_msg18_;
  Rsh_Fir_deopt(246, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L201_:;
  // msg19 = force? msg18
  Rsh_Fir_reg_msg19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg18_);
  // checkMissing(msg19)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_msg19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return msg19
  return Rsh_Fir_reg_msg19_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // r3 = dyn gettextf("'%s' must be logical", "check.attributes")
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf1_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // r10 = dyn gettextf1("'%s' must be logical", "use.names")
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target1_;
  SEXP Rsh_Fir_reg_target2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // target1 = ld target
  Rsh_Fir_reg_target1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target2 = force? target1
  Rsh_Fir_reg_target2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target1_);
  // checkMissing(target2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_target2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return target2
  return Rsh_Fir_reg_target2_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current1_;
  SEXP Rsh_Fir_reg_current2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // current1 = ld current
  Rsh_Fir_reg_current1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current2 = force? current1
  Rsh_Fir_reg_current2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current1_);
  // checkMissing(current2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_current2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return current2
  return Rsh_Fir_reg_current2_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_msg10_;
  SEXP Rsh_Fir_reg_msg11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // msg10 = ld msg
  Rsh_Fir_reg_msg10_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // msg11 = force? msg10
  Rsh_Fir_reg_msg11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg10_);
  // checkMissing(msg11)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_msg11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // return msg11
  return Rsh_Fir_reg_msg11_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // return n3
  return Rsh_Fir_reg_n3_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target13_;
  SEXP Rsh_Fir_reg_target14_;
  SEXP Rsh_Fir_reg_c53_;
  SEXP Rsh_Fir_reg_target16_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r102_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // target13 = ld target
  Rsh_Fir_reg_target13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target14 = force? target13
  Rsh_Fir_reg_target14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target13_);
  // checkMissing(target14)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_target14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // c53 = `is.object`(target14)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_target14_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args153);
  // if c53 then L1() else L2(target14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L1()
    goto L1_;
  } else {
  // L2(target14)
    Rsh_Fir_reg_target16_ = Rsh_Fir_reg_target14_;
    goto L2_;
  }

L0_:;
  // return dx8
  return Rsh_Fir_reg_dx8_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", target14)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_target14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args154);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_target16_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r102 = dyn __3(target16, i6)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_target16_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r102)
  // L0(r102)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r102_;
  goto L0_;

L3_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L0(dx7)
  // L0(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current15_;
  SEXP Rsh_Fir_reg_current16_;
  SEXP Rsh_Fir_reg_c54_;
  SEXP Rsh_Fir_reg_current18_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r104_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // current15 = ld current
  Rsh_Fir_reg_current15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current16 = force? current15
  Rsh_Fir_reg_current16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current15_);
  // checkMissing(current16)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_current16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // c54 = `is.object`(current16)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_current16_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args159);
  // if c54 then L1() else L2(current16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L1()
    goto L1_;
  } else {
  // L2(current16)
    Rsh_Fir_reg_current18_ = Rsh_Fir_reg_current16_;
    goto L2_;
  }

L0_:;
  // return dx10
  return Rsh_Fir_reg_dx10_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[[", current16)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_current16_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args160);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_current18_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r104 = dyn __4(current18, i8)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_current18_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L0(r104)
  // L0(r104)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r104_;
  goto L0_;

L3_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // goto L0(dx9)
  // L0(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_check_attributes5_;
  SEXP Rsh_Fir_reg_check_attributes6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // check_attributes5 = ld `check.attributes`
  Rsh_Fir_reg_check_attributes5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check_attributes6 = force? check_attributes5
  Rsh_Fir_reg_check_attributes6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_attributes5_);
  // checkMissing(check_attributes6)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_check_attributes6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // return check_attributes6
  return Rsh_Fir_reg_check_attributes6_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_use_names5_;
  SEXP Rsh_Fir_reg_use_names6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // use_names5 = ld `use.names`
  Rsh_Fir_reg_use_names5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // use_names6 = force? use_names5
  Rsh_Fir_reg_use_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_use_names5_);
  // checkMissing(use_names6)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_use_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // return use_names6
  return Rsh_Fir_reg_use_names6_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_use_names7_;
  SEXP Rsh_Fir_reg_use_names8_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_nt;
  SEXP Rsh_Fir_reg_nt1_;
  SEXP Rsh_Fir_reg_c60_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_nt3_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_c64_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_nc;
  SEXP Rsh_Fir_reg_nc1_;
  SEXP Rsh_Fir_reg_c65_;
  SEXP Rsh_Fir_reg_c67_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_nc3_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_c69_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_c70_;
  SEXP Rsh_Fir_reg_c71_;
  SEXP Rsh_Fir_reg_c73_;
  SEXP Rsh_Fir_reg_dQuote;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_reg_i24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // use_names7 = ld `use.names`
  Rsh_Fir_reg_use_names7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // use_names8 = force? use_names7
  Rsh_Fir_reg_use_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_use_names7_);
  // checkMissing(use_names8)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_use_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty()));
  // c57 = `as.logical`(use_names8)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_use_names8_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args175);
  // if c57 then L4() else L0(c57)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L4()
    goto L4_;
  } else {
  // L0(c57)
    Rsh_Fir_reg_c59_ = Rsh_Fir_reg_c57_;
    goto L0_;
  }

L0_:;
  // c73 = `as.logical`(c59)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args176);
  // if c73 then L12() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c73_)) {
  // L12()
    goto L12_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // c65 = `is.object`(nc1)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args178);
  // if c65 then L8() else L9(c64, dx12, nc1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c65_)) {
  // L8()
    goto L8_;
  } else {
  // L9(c64, dx12, nc1)
    Rsh_Fir_reg_c67_ = Rsh_Fir_reg_c64_;
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx12_;
    Rsh_Fir_reg_nc3_ = Rsh_Fir_reg_nc1_;
    goto L9_;
  }

L2_:;
  // r115 = `==`(dx17, dx18)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args179);
  // c70 = `as.logical`(r115)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args180);
  // c71 = `&&`(c69, c70)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_c69_;
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg_c70_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args181);
  // goto L0(c71)
  // L0(c71)
  Rsh_Fir_reg_c59_ = Rsh_Fir_reg_c71_;
  goto L0_;

L3_:;
  // i23 = ld i
  Rsh_Fir_reg_i23_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i24 = force? i23
  Rsh_Fir_reg_i24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i23_);
  // checkMissing(i24)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_i24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty()));
  // return i24
  return Rsh_Fir_reg_i24_;

L4_:;
  // nt = ld nt
  Rsh_Fir_reg_nt = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // nt1 = force? nt
  Rsh_Fir_reg_nt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt);
  // checkMissing(nt1)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_nt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // c60 = `is.object`(nt1)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_nt1_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args184);
  // if c60 then L5() else L6(c57, nt1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L5()
    goto L5_;
  } else {
  // L6(c57, nt1)
    Rsh_Fir_reg_c62_ = Rsh_Fir_reg_c57_;
    Rsh_Fir_reg_nt3_ = Rsh_Fir_reg_nt1_;
    goto L6_;
  }

L5_:;
  // dr10 = tryDispatchBuiltin.1("[", nt1)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_nt1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args185);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if dc5 then L7() else L6(c57, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L7()
    goto L7_;
  } else {
  // L6(c57, dr10)
    Rsh_Fir_reg_c62_ = Rsh_Fir_reg_c57_;
    Rsh_Fir_reg_nt3_ = Rsh_Fir_reg_dr10_;
    goto L6_;
  }

L6_:;
  // i17 = ld i
  Rsh_Fir_reg_i17_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i18 = force? i17
  Rsh_Fir_reg_i18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i17_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r113 = dyn __5(nt3, i18)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_nt3_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L1(c62, r113)
  // L1(c62, r113)
  Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c62_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r113_;
  goto L1_;

L7_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // goto L1(c57, dx11)
  // L1(c57, dx11)
  Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c57_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L1_;

L8_:;
  // dr12 = tryDispatchBuiltin.1("[", nc1)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args189);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if dc6 then L10() else L9(c64, dx12, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L10()
    goto L10_;
  } else {
  // L9(c64, dx12, dr12)
    Rsh_Fir_reg_c67_ = Rsh_Fir_reg_c64_;
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx12_;
    Rsh_Fir_reg_nc3_ = Rsh_Fir_reg_dr12_;
    goto L9_;
  }

L9_:;
  // i19 = ld i
  Rsh_Fir_reg_i19_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i20 = force? i19
  Rsh_Fir_reg_i20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i19_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r114 = dyn __6(nc3, i20)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_nc3_;
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L2(c67, dx14, r114)
  // L2(c67, dx14, r114)
  Rsh_Fir_reg_c69_ = Rsh_Fir_reg_c67_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r114_;
  goto L2_;

L10_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // goto L2(c64, dx12, dx16)
  // L2(c64, dx12, dx16)
  Rsh_Fir_reg_c69_ = Rsh_Fir_reg_c64_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx16_;
  goto L2_;

L12_:;
  // dQuote = ldf dQuote
  Rsh_Fir_reg_dQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // p10 = prom<V +>{
  //   nt4 = ld nt;
  //   nt5 = force? nt4;
  //   checkMissing(nt5);
  //   c74 = `is.object`(nt5);
  //   if c74 then L1() else L2(nt5);
  // L0(dx20):
  //   return dx20;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[", nt5);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(nt7):
  //   i21 = ld i;
  //   i22 = force? i21;
  //   __7 = ldf `[` in base;
  //   r116 = dyn __7(nt7, i22);
  //   goto L0(r116);
  // L3():
  //   dx19 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx19);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3020460942_11, 0, NULL, CCP, RHO);
  // r118 = dyn dQuote(p10)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote, 1, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names56, CCP, RHO);
  // return r118
  return Rsh_Fir_reg_r118_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nt4_;
  SEXP Rsh_Fir_reg_nt5_;
  SEXP Rsh_Fir_reg_c74_;
  SEXP Rsh_Fir_reg_nt7_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r116_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // nt4 = ld nt
  Rsh_Fir_reg_nt4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // nt5 = force? nt4
  Rsh_Fir_reg_nt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt4_);
  // checkMissing(nt5)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_nt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // c74 = `is.object`(nt5)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_nt5_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args194);
  // if c74 then L1() else L2(nt5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c74_)) {
  // L1()
    goto L1_;
  } else {
  // L2(nt5)
    Rsh_Fir_reg_nt7_ = Rsh_Fir_reg_nt5_;
    goto L2_;
  }

L0_:;
  // return dx20
  return Rsh_Fir_reg_dx20_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[", nt5)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_nt5_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args195);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_nt7_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r116 = dyn __7(nt7, i22)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_nt7_;
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L0(r116)
  // L0(r116)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r116_;
  goto L0_;

L3_:;
  // dx19 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // goto L0(dx19)
  // L0(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3020460942_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mi2_;
  SEXP Rsh_Fir_reg_mi3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3020460942/0: expected 0, got %d", NCAPTURES);

  // mi2 = ld mi
  Rsh_Fir_reg_mi2_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // mi3 = force? mi2
  Rsh_Fir_reg_mi3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mi2_);
  // checkMissing(mi3)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_mi3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // return mi3
  return Rsh_Fir_reg_mi3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
