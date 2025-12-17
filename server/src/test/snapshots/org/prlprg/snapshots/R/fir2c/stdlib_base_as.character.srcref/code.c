#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner189286523_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner189286523_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner189286523_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner189286523_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner189286523
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner189286523_, RHO, CCP);
  // st `as.character.srcref` = r
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
SEXP Rsh_Fir_user_function_inner189286523_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner189286523 dynamic dispatch ([x, useSource, to, `...`])

  return Rsh_Fir_user_version_inner189286523_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner189286523_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner189286523 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner189286523/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_useSource;
  SEXP Rsh_Fir_reg_to;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_useSource_isMissing;
  SEXP Rsh_Fir_reg_useSource_orDefault;
  SEXP Rsh_Fir_reg_to_isMissing;
  SEXP Rsh_Fir_reg_to_orDefault;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_srcfile;
  SEXP Rsh_Fir_reg_srcfile1_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_to1_;
  SEXP Rsh_Fir_reg_to2_;
  SEXP Rsh_Fir_reg_attr1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_to3_;
  SEXP Rsh_Fir_reg_to4_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_to6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_to9_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_srcfile2_;
  SEXP Rsh_Fir_reg_srcfile3_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_srcfile4_;
  SEXP Rsh_Fir_reg_srcfile5_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_useSource1_;
  SEXP Rsh_Fir_reg_useSource2_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_srcfile8_;
  SEXP Rsh_Fir_reg_srcfile9_;
  SEXP Rsh_Fir_reg_inherits1_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_srcfile10_;
  SEXP Rsh_Fir_reg_srcfile11_;
  SEXP Rsh_Fir_reg_inherits2_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_try;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_try1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_useSource3_;
  SEXP Rsh_Fir_reg_useSource4_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_lines;
  SEXP Rsh_Fir_reg_lines1_;
  SEXP Rsh_Fir_reg_inherits3_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_lines2_;
  SEXP Rsh_Fir_reg_lines3_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_Encoding;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_Encoding__;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_lines6_;
  SEXP Rsh_Fir_reg_lines7_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_x37_;
  SEXP Rsh_Fir_reg_x38_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_x40_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_dx34_;
  SEXP Rsh_Fir_reg___10_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_x41_;
  SEXP Rsh_Fir_reg_x42_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_dx36_;
  SEXP Rsh_Fir_reg_x44_;
  SEXP Rsh_Fir_reg_dr24_;
  SEXP Rsh_Fir_reg_dc12_;
  SEXP Rsh_Fir_reg_dx38_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_dx39_;
  SEXP Rsh_Fir_reg_dx40_;
  SEXP Rsh_Fir_reg___11_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_c51_;
  SEXP Rsh_Fir_reg__Machine;
  SEXP Rsh_Fir_reg__Machine1_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg__Machine3_;
  SEXP Rsh_Fir_reg_dr26_;
  SEXP Rsh_Fir_reg_dc13_;
  SEXP Rsh_Fir_reg_dx41_;
  SEXP Rsh_Fir_reg_dx42_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_c53_;
  SEXP Rsh_Fir_reg_dx44_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_dr28_;
  SEXP Rsh_Fir_reg_dc14_;
  SEXP Rsh_Fir_reg_dx46_;
  SEXP Rsh_Fir_reg_dx47_;
  SEXP Rsh_Fir_reg_dx48_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_substring;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_dr34_;
  SEXP Rsh_Fir_reg_dc17_;
  SEXP Rsh_Fir_reg_dx54_;
  SEXP Rsh_Fir_reg_dx55_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_l16_;
  SEXP Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_lines17_;
  SEXP Rsh_Fir_reg_lines18_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_substring1_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg_l17_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_l19_;
  SEXP Rsh_Fir_reg_dr40_;
  SEXP Rsh_Fir_reg_dc20_;
  SEXP Rsh_Fir_reg_dx60_;
  SEXP Rsh_Fir_reg_dx61_;
  SEXP Rsh_Fir_reg____3_;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_enc;
  SEXP Rsh_Fir_reg_enc1_;
  SEXP Rsh_Fir_reg_l20_;
  SEXP Rsh_Fir_reg_Encoding__1_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_lines23_;
  SEXP Rsh_Fir_reg_lines24_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_useSource = PARAMS[1];
  Rsh_Fir_reg_to = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // useSource_isMissing = missing.0(useSource)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_useSource;
  Rsh_Fir_reg_useSource_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if useSource_isMissing then L0(TRUE) else L0(useSource)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_useSource_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_useSource_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(useSource)
    Rsh_Fir_reg_useSource_orDefault = Rsh_Fir_reg_useSource;
    goto L0_;
  }

L0_:;
  // st useSource = useSource_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_useSource_orDefault, RHO);
  (void)(Rsh_Fir_reg_useSource_orDefault);
  // to_isMissing = missing.0(to)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_to;
  Rsh_Fir_reg_to_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if to_isMissing then L1() else L2(to)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_to_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(to)
    Rsh_Fir_reg_to_orDefault = Rsh_Fir_reg_to;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_to_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st to = to_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_to_orDefault, RHO);
  (void)(Rsh_Fir_reg_to_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L3_:;
  // st srcfile = r2
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L4_:;
  // r7 = `!`(r5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args5);
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args6);
  // if c then L49() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L49()
    goto L49_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L14()
  // L14()
  goto L14_;

L6_:;
  // r14 = `!`(r9)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args7);
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args8);
  // if c1 then L58() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L58()
    goto L58_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r13 = dyn identical(srcfile1, r11, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args9[9];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_srcfile1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[4] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[5] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[6] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args9[7] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[8] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names[9];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L57() else D5()
  // L57()
  goto L57_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // to3 = ld to
  Rsh_Fir_reg_to3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L62() else D8()
  // L62()
  goto L62_;

L10_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args10);
  // if c4 then L69() else L70(dx1, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L69()
    goto L69_;
  } else {
  // L70(dx1, l)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L70_;
  }

L11_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r20 = dyn __(to9, r18)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_to9_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L10_;

L12_:;
  // st x = dx7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L14()
  // L14()
  goto L14_;

L13_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r24 = dyn ___(l5, dx13, r22)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L12(dx12, r24)
  // L12(dx12, r24)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r24_;
  goto L12_;

L14_:;
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard6 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L15_:;
  // r27 = `!`(r26)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args14);
  // c7 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c7 then L79() else L16(c7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L79()
    goto L79_;
  } else {
  // L16(c7)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c7_;
    goto L16_;
  }

L16_:;
  // c16 = `as.logical`(c9)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c16 then L85() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L85()
    goto L85_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // r31 = `!`(r29)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args17);
  // c13 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // c14 = `&&`(c12, c13)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args19);
  // goto L16(c14)
  // L16(c14)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c14_;
  goto L16_;

L18_:;
  // goto L20()
  // L20()
  goto L20_;

L19_:;
  // l6 = ld srcfile
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L93() else D19()
  // L93()
  goto L93_;

L20_:;
  // useSource1 = ld useSource
  Rsh_Fir_reg_useSource1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L96() else D21()
  // L96()
  goto L96_;

L21_:;
  // goto L27()
  // L27()
  goto L27_;

L22_:;
  // c19 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args20);
  // if c19 then L23(c19) else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L23(c19)
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c19_;
    goto L23_;
  } else {
  // L102()
    goto L102_;
  }

L23_:;
  // c28 = `as.logical`(c20)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c28 then L108() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L108()
    goto L108_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // c25 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // c26 = `||`(c24, c25)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args23);
  // goto L23(c26)
  // L23(c26)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c26_;
  goto L23_;

L25_:;
  // try1 = ldf try
  Rsh_Fir_reg_try1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L112() else D28()
  // L112()
  goto L112_;

L26_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // useSource3 = ld useSource
  Rsh_Fir_reg_useSource3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L115() else D30()
  // L115()
  goto L115_;

L28_:;
  // c42 = `as.logical`(c34)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c42 then L122() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L122()
    goto L122_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // c39 = `as.logical`(r70)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // c40 = `||`(c38, c39)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args26);
  // goto L28(c40)
  // L28(c40)
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c40_;
  goto L28_;

L30_:;
  // sym12 = ldf length
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base12 = ldf length in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard12 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L31_:;
  // lines23 = ld lines
  Rsh_Fir_reg_lines23_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L175() else D55()
  // L175()
  goto L175_;

L32_:;
  // c48 = `as.logical`(r85)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args28);
  // if c48 then L130() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L130()
    goto L130_;
  } else {
  // L33()
    goto L33_;
  }

L33_:;
  // goto L31()
  // L31()
  goto L31_;

L34_:;
  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L139() else D43()
  // L139()
  goto L139_;

L35_:;
  // x41 = ld x
  Rsh_Fir_reg_x41_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L143() else D44()
  // L143()
  goto L143_;

L36_:;
  // r103 = `-`(dx39, dx40)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_dx40_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args29);
  // r104 = `+`(r103, 1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args30);
  // r105 = `<`(r101, r104)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args31);
  // c51 = `as.logical`(r105)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c51 then L147() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L147()
    goto L147_;
  } else {
  // L37()
    goto L37_;
  }

L37_:;
  // goto L39()
  // L39()
  goto L39_;

L38_:;
  // st x = dx48
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx48_, RHO);
  (void)(Rsh_Fir_reg_dx48_);
  // goto L39()
  // L39()
  goto L39_;

L39_:;
  // substring = ldf substring
  Rsh_Fir_reg_substring = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L157() else D46()
  // L157()
  goto L157_;

L40_:;
  // st lines = dx55
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx55_, RHO);
  (void)(Rsh_Fir_reg_dx55_);
  // substring1 = ldf substring
  Rsh_Fir_reg_substring1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L166() else D50()
  // L166()
  goto L166_;

L41_:;
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r129 = dyn ___2(l16, r126, r127)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r126_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L40(r129)
  // L40(r129)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_r129_;
  goto L40_;

L42_:;
  // st lines = dx61
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx61_, RHO);
  (void)(Rsh_Fir_reg_dx61_);
  // enc = ld enc
  Rsh_Fir_reg_enc = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L171() else D52()
  // L171()
  goto L171_;

L43_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D0()
  // L45()
  goto L45_;

L44_:;
  // r1 = dyn base(<sym x>, "srcfile")
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r1)
  // L3(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L3_;

D0_:;
  // deopt 2 [x3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L45_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r3 = dyn attr(x4, "srcfile")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L46() else D1()
  // L46()
  goto L46_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L3_;

L47_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r6 = dyn missing(<sym to>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L4_;

L48_:;
  // r4 = dyn base1(<sym to>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L4_;

L49_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard2 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L50_:;
  // srcfile = ld srcfile
  Rsh_Fir_reg_srcfile = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L52() else D2()
  // L52()
  goto L52_;

L51_:;
  // r8 = dyn base2(<sym srcfile>, <lang attr(to, "srcfile")>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L6_;

D2_:;
  // deopt 14 [srcfile]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_srcfile;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L52_:;
  // srcfile1 = force? srcfile
  Rsh_Fir_reg_srcfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile);
  // checkMissing(srcfile1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_srcfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L53_:;
  // to1 = ld to
  Rsh_Fir_reg_to1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L55() else D3()
  // L55()
  goto L55_;

L54_:;
  // r10 = dyn base3(<sym to>, "srcfile")
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L7_;

D3_:;
  // deopt 18 [to1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_to1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L55_:;
  // to2 = force? to1
  Rsh_Fir_reg_to2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to1_);
  // checkMissing(to2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_to2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r12 = dyn attr1(to2, "srcfile")
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_to2_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L56() else D4()
  // L56()
  goto L56_;

D4_:;
  // deopt 22 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L7_;

D5_:;
  // deopt 31 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r13_;
  goto L6_;

L58_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L59() else D6()
  // L59()
  goto L59_;

D6_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // r15 = dyn stop("'x' and 'to' must refer to same file")
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L60() else D7()
  // L60()
  goto L60_;

D7_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L9()
  // L9()
  goto L9_;

D8_:;
  // deopt 39 [to3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_to3_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L62_:;
  // to4 = force? to3
  Rsh_Fir_reg_to4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to3_);
  // checkMissing(to4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_to4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(to4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_to4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args48);
  // if c2 then L63() else L64(to4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L63()
    goto L63_;
  } else {
  // L64(to4)
    Rsh_Fir_reg_to6_ = Rsh_Fir_reg_to4_;
    goto L64_;
  }

L63_:;
  // dr = tryDispatchBuiltin.1("[", to4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_to4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc then L65() else L64(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L65()
    goto L65_;
  } else {
  // L64(dr)
    Rsh_Fir_reg_to6_ = Rsh_Fir_reg_dr;
    goto L64_;
  }

L64_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard4 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L65_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L10(dx)
  // L10(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L10_;

L66_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r19 = dyn c3(3, 4, 6, 8)
  SEXP Rsh_Fir_array_args53[4];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args53[3] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 4, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L68() else D9()
  // L68()
  goto L68_;

L67_:;
  // r17 = dyn base4(3, 4, 6, 8)
  SEXP Rsh_Fir_array_args54[4];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args54[3] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 4, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(to6, r17)
  // L11(to6, r17)
  Rsh_Fir_reg_to9_ = Rsh_Fir_reg_to6_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L11_;

D9_:;
  // deopt 48 [to6, r19]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_to6_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L11(to6, r19)
  // L11(to6, r19)
  Rsh_Fir_reg_to9_ = Rsh_Fir_reg_to6_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L11_;

L69_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, dx1)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args55);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc1 then L71() else L70(dx1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L71()
    goto L71_;
  } else {
  // L70(dx1, dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L70_;
  }

L70_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard5 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L71_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L12(dx1, dx5)
  // L12(dx1, dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
  goto L12_;

L72_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r23 = dyn c5(3, 4, 6, 8)
  SEXP Rsh_Fir_array_args59[4];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args59[3] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 4, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L74() else D10()
  // L74()
  goto L74_;

L73_:;
  // r21 = dyn base5(3, 4, 6, 8)
  SEXP Rsh_Fir_array_args60[4];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args60[3] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 4, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L13(dx3, l2, dx1, r21)
  // L13(dx3, l2, dx1, r21)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L13_;

D10_:;
  // deopt 58 [dx3, l2, dx1, r23]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(58, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L13(dx3, l2, dx1, r23)
  // L13(dx3, l2, dx1, r23)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L13_;

L76_:;
  // srcfile2 = ld srcfile
  Rsh_Fir_reg_srcfile2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L78() else D11()
  // L78()
  goto L78_;

L77_:;
  // r25 = dyn base6(<sym srcfile>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r25)
  // L15(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L15_;

D11_:;
  // deopt 64 [srcfile2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_srcfile2_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L78_:;
  // srcfile3 = force? srcfile2
  Rsh_Fir_reg_srcfile3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile2_);
  // checkMissing(srcfile3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_srcfile3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c6 = `==`(srcfile3, NULL)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_srcfile3_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args63);
  // goto L15(c6)
  // L15(c6)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c6_;
  goto L15_;

L79_:;
  // sym7 = ldf inherits
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base7 = ldf inherits in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard7 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L80_:;
  // srcfile4 = ld srcfile
  Rsh_Fir_reg_srcfile4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L82() else D12()
  // L82()
  goto L82_;

L81_:;
  // r28 = dyn base7(<sym srcfile>, "srcfile")
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L17(c7, r28)
  // L17(c7, r28)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L17_;

D12_:;
  // deopt 70 [c7, srcfile4]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_srcfile4_;
  Rsh_Fir_deopt(70, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L82_:;
  // srcfile5 = force? srcfile4
  Rsh_Fir_reg_srcfile5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile4_);
  // checkMissing(srcfile5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_srcfile5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r30 = dyn inherits(srcfile5, "srcfile", FALSE)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_srcfile5_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L83() else D13()
  // L83()
  goto L83_;

D13_:;
  // deopt 75 [c7, r30]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L17(c7, r30)
  // L17(c7, r30)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L17_;

L85_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L86() else D14()
  // L86()
  goto L86_;

D14_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L86_:;
  // r32 = dyn cat("forcing class on")
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L87() else D15()
  // L87()
  goto L87_;

D15_:;
  // deopt 81 [r32]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L87_:;
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L88() else D16()
  // L88()
  goto L88_;

D16_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L88_:;
  // p2 = prom<V +>{
  //   __1 = ldf `::`;
  //   r33 = dyn __1("utils", "str");
  //   checkFun.0(r33);
  //   r34 = r33 as cls;
  //   p1 = prom<V +>{
  //     srcfile6 = ld srcfile;
  //     srcfile7 = force? srcfile6;
  //     checkMissing(srcfile7);
  //     return srcfile7;
  //   };
  //   r36 = dyn r34(p1);
  //   return r36;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_1, 0, NULL, CCP, RHO);
  // r38 = dyn print(p2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L89() else D17()
  // L89()
  goto L89_;

D17_:;
  // deopt 85 [r38]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L89_:;
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard8 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L90_:;
  // c17 = ldf c in base
  Rsh_Fir_reg_c17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r41 = dyn c17("srcfilealias", "srcfile")
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c17_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L92() else D18()
  // L92()
  goto L92_;

L91_:;
  // r39 = dyn base8("srcfilealias", "srcfile")
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L19(r39)
  // L19(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L19_;

D18_:;
  // deopt 91 [r41]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L19(r41)
  // L19(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L19_;

D19_:;
  // deopt 93 [r40, l6, r40]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(93, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L93_:;
  // r42 = dyn class__(l6, NULL, r40)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L94() else D20()
  // L94()
  goto L94_;

D20_:;
  // deopt 95 [r40, r42]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L94_:;
  // st srcfile = r42
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // goto L20()
  // L20()
  goto L20_;

D21_:;
  // deopt 99 [useSource1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_useSource1_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L96_:;
  // useSource2 = force? useSource1
  Rsh_Fir_reg_useSource2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useSource1_);
  // checkMissing(useSource2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_useSource2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c18 = `as.logical`(useSource2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_useSource2_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args79);
  // if c18 then L97() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L97()
    goto L97_;
  } else {
  // L21()
    goto L21_;
  }

L97_:;
  // sym9 = ldf inherits
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base9 = ldf inherits in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard9 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L98_:;
  // srcfile8 = ld srcfile
  Rsh_Fir_reg_srcfile8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L100() else D22()
  // L100()
  goto L100_;

L99_:;
  // r44 = dyn base9(<sym srcfile>, "srcfilecopy")
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L22(r44)
  // L22(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L22_;

D22_:;
  // deopt 103 [srcfile8]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_srcfile8_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L100_:;
  // srcfile9 = force? srcfile8
  Rsh_Fir_reg_srcfile9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile8_);
  // checkMissing(srcfile9)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_srcfile9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r46 = dyn inherits1(srcfile9, "srcfilecopy", FALSE)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_srcfile9_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L101() else D23()
  // L101()
  goto L101_;

D23_:;
  // deopt 108 [r46]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L22(r46)
  // L22(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L22_;

L102_:;
  // sym10 = ldf inherits
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base10 = ldf inherits in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard10 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L103_:;
  // srcfile10 = ld srcfile
  Rsh_Fir_reg_srcfile10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L105() else D24()
  // L105()
  goto L105_;

L104_:;
  // r47 = dyn base10(<sym srcfile>, "srcfilealias")
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L24(c19, r47)
  // L24(c19, r47)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L24_;

D24_:;
  // deopt 111 [c19, srcfile10]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_srcfile10_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L105_:;
  // srcfile11 = force? srcfile10
  Rsh_Fir_reg_srcfile11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile10_);
  // checkMissing(srcfile11)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_srcfile11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // inherits2 = ldf inherits in base
  Rsh_Fir_reg_inherits2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r49 = dyn inherits2(srcfile11, "srcfilealias", FALSE)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_srcfile11_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args87[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits2_, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L106() else D25()
  // L106()
  goto L106_;

D25_:;
  // deopt 116 [c19, r49]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L24(c19, r49)
  // L24(c19, r49)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L24_;

L108_:;
  // try = ldf try
  Rsh_Fir_reg_try = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L109() else D26()
  // L109()
  goto L109_;

D26_:;
  // deopt 119 []
  Rsh_Fir_deopt(119, 0, NULL, CCP, RHO);
  return R_NilValue;

L109_:;
  // p6 = prom<V +>{
  //   getSrcLines = ldf getSrcLines;
  //   p3 = prom<V +>{
  //     srcfile12 = ld srcfile;
  //     srcfile13 = force? srcfile12;
  //     checkMissing(srcfile13);
  //     return srcfile13;
  //   };
  //   p4 = prom<V +>{
  //     x5 = ld x;
  //     x6 = force? x5;
  //     checkMissing(x6);
  //     c29 = `is.object`(x6);
  //     if c29 then L1() else L2(x6);
  //   L0(dx16):
  //     return dx16;
  //   L1():
  //     dr4 = tryDispatchBuiltin.1("[", x6);
  //     dc2 = getTryDispatchBuiltinDispatched(dr4);
  //     if dc2 then L3() else L2(dr4);
  //   L2(x8):
  //     __2 = ldf `[` in base;
  //     r51 = dyn __2(x8, 7);
  //     goto L0(r51);
  //   L3():
  //     dx15 = getTryDispatchBuiltinValue(dr4);
  //     goto L0(dx15);
  //   };
  //   p5 = prom<V +>{
  //     x9 = ld x;
  //     x10 = force? x9;
  //     checkMissing(x10);
  //     c30 = `is.object`(x10);
  //     if c30 then L1() else L2(x10);
  //   L0(dx18):
  //     return dx18;
  //   L1():
  //     dr6 = tryDispatchBuiltin.1("[", x10);
  //     dc3 = getTryDispatchBuiltinDispatched(dr6);
  //     if dc3 then L3() else L2(dr6);
  //   L2(x12):
  //     __3 = ldf `[` in base;
  //     r53 = dyn __3(x12, 8);
  //     goto L0(r53);
  //   L3():
  //     dx17 = getTryDispatchBuiltinValue(dr6);
  //     goto L0(dx17);
  //   };
  //   r55 = dyn getSrcLines(p3, p4, p5);
  //   return r55;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_3, 0, NULL, CCP, RHO);
  // r57 = dyn try(p6, TRUE)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L110() else D27()
  // L110()
  goto L110_;

D27_:;
  // deopt 122 [r57]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L110_:;
  // st lines = r57
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // goto L26(r57)
  // L26(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L26_;

D28_:;
  // deopt 125 []
  Rsh_Fir_deopt(125, 0, NULL, CCP, RHO);
  return R_NilValue;

L112_:;
  // p10 = prom<V +>{
  //   getSrcLines1 = ldf getSrcLines;
  //   p7 = prom<V +>{
  //     srcfile14 = ld srcfile;
  //     srcfile15 = force? srcfile14;
  //     checkMissing(srcfile15);
  //     return srcfile15;
  //   };
  //   p8 = prom<V +>{
  //     x13 = ld x;
  //     x14 = force? x13;
  //     checkMissing(x14);
  //     c31 = `is.object`(x14);
  //     if c31 then L1() else L2(x14);
  //   L0(dx20):
  //     return dx20;
  //   L1():
  //     dr8 = tryDispatchBuiltin.1("[", x14);
  //     dc4 = getTryDispatchBuiltinDispatched(dr8);
  //     if dc4 then L3() else L2(dr8);
  //   L2(x16):
  //     __4 = ldf `[` in base;
  //     r60 = dyn __4(x16, 1);
  //     goto L0(r60);
  //   L3():
  //     dx19 = getTryDispatchBuiltinValue(dr8);
  //     goto L0(dx19);
  //   };
  //   p9 = prom<V +>{
  //     x17 = ld x;
  //     x18 = force? x17;
  //     checkMissing(x18);
  //     c32 = `is.object`(x18);
  //     if c32 then L1() else L2(x18);
  //   L0(dx22):
  //     return dx22;
  //   L1():
  //     dr10 = tryDispatchBuiltin.1("[", x18);
  //     dc5 = getTryDispatchBuiltinDispatched(dr10);
  //     if dc5 then L3() else L2(dr10);
  //   L2(x20):
  //     __5 = ldf `[` in base;
  //     r62 = dyn __5(x20, 3);
  //     goto L0(r62);
  //   L3():
  //     dx21 = getTryDispatchBuiltinValue(dr10);
  //     goto L0(dx21);
  //   };
  //   r64 = dyn getSrcLines1(p7, p8, p9);
  //   return r64;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_7, 0, NULL, CCP, RHO);
  // r66 = dyn try1(p10, TRUE)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try1_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L113() else D29()
  // L113()
  goto L113_;

D29_:;
  // deopt 128 [r66]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L113_:;
  // st lines = r66
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // goto L26(r66)
  // L26(r66)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r66_;
  goto L26_;

D30_:;
  // deopt 132 [useSource3]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_useSource3_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L115_:;
  // useSource4 = force? useSource3
  Rsh_Fir_reg_useSource4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useSource3_);
  // checkMissing(useSource4)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_useSource4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // r68 = `!`(useSource4)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_useSource4_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args119);
  // c33 = `as.logical`(r68)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args120);
  // if c33 then L28(c33) else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L28(c33)
    Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c33_;
    goto L28_;
  } else {
  // L116()
    goto L116_;
  }

L116_:;
  // sym11 = ldf inherits
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base11 = ldf inherits in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args121);
  // if guard11 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L117_:;
  // lines = ld lines
  Rsh_Fir_reg_lines = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L119() else D31()
  // L119()
  goto L119_;

L118_:;
  // r69 = dyn base11(<sym lines>, "try-error")
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L29(c33, r69)
  // L29(c33, r69)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L29_;

D31_:;
  // deopt 137 [c33, lines]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_lines;
  Rsh_Fir_deopt(137, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L119_:;
  // lines1 = force? lines
  Rsh_Fir_reg_lines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines);
  // checkMissing(lines1)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_lines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // inherits3 = ldf inherits in base
  Rsh_Fir_reg_inherits3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r71 = dyn inherits3(lines1, "try-error", FALSE)
  SEXP Rsh_Fir_array_args124[3];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_lines1_;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args124[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits3_, 3, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L120() else D32()
  // L120()
  goto L120_;

D32_:;
  // deopt 142 [c33, r71]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(142, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L29(c33, r71)
  // L29(c33, r71)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L29_;

L122_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L123() else D33()
  // L123()
  goto L123_;

D33_:;
  // deopt 145 []
  Rsh_Fir_deopt(145, 0, NULL, CCP, RHO);
  return R_NilValue;

L123_:;
  // p11 = prom<V +>{
  //   srcfile16 = ld srcfile;
  //   srcfile17 = force? srcfile16;
  //   checkMissing(srcfile17);
  //   c43 = `is.object`(srcfile17);
  //   if c43 then L1() else L2(srcfile17);
  // L0(dx24):
  //   return dx24;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("$", srcfile17);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(srcfile19):
  //   r72 = `$`(srcfile19, <sym filename>);
  //   goto L0(r72);
  // L3():
  //   dx23 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx23);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_11, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   c44 = `is.object`(x22);
  //   if c44 then L1() else L2(x22);
  // L0(dx26):
  //   return dx26;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[", x22);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(x24):
  //   __6 = ldf `[` in base;
  //   r74 = dyn __6(x24, 1);
  //   goto L0(r74);
  // L3():
  //   dx25 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx25);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_12, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   x25 = ld x;
  //   x26 = force? x25;
  //   checkMissing(x26);
  //   c45 = `is.object`(x26);
  //   if c45 then L1() else L2(x26);
  // L0(dx28):
  //   return dx28;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", x26);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(x28):
  //   __7 = ldf `[` in base;
  //   r76 = dyn __7(x28, 5);
  //   goto L0(r76);
  // L3():
  //   dx27 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx27);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   c46 = `is.object`(x30);
  //   if c46 then L1() else L2(x30);
  // L0(dx30):
  //   return dx30;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", x30);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(x32):
  //   __8 = ldf `[` in base;
  //   r78 = dyn __8(x32, 3);
  //   goto L0(r78);
  // L3():
  //   dx29 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx29);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   x33 = ld x;
  //   x34 = force? x33;
  //   checkMissing(x34);
  //   c47 = `is.object`(x34);
  //   if c47 then L1() else L2(x34);
  // L0(dx32):
  //   return dx32;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("[", x34);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(x36):
  //   __9 = ldf `[` in base;
  //   r80 = dyn __9(x36, 6);
  //   goto L0(r80);
  // L3():
  //   dx31 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx31);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_15, 0, NULL, CCP, RHO);
  // r82 = dyn paste0("<srcref: file \"", p11, "\" chars ", p12, ":", p13, " to ", p14, ":", p15, ">")
  SEXP Rsh_Fir_array_args155[11];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args155[2] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args155[3] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args155[4] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args155[5] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args155[6] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args155[7] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args155[8] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args155[9] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args155[10] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names44[11];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_array_arg_names44[3] = R_MissingArg;
  Rsh_Fir_array_arg_names44[4] = R_MissingArg;
  Rsh_Fir_array_arg_names44[5] = R_MissingArg;
  Rsh_Fir_array_arg_names44[6] = R_MissingArg;
  Rsh_Fir_array_arg_names44[7] = R_MissingArg;
  Rsh_Fir_array_arg_names44[8] = R_MissingArg;
  Rsh_Fir_array_arg_names44[9] = R_MissingArg;
  Rsh_Fir_array_arg_names44[10] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 11, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L124() else D34()
  // L124()
  goto L124_;

D34_:;
  // deopt 157 [r82]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L124_:;
  // st lines = r82
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // goto L31()
  // L31()
  goto L31_;

L126_:;
  // lines2 = ld lines
  Rsh_Fir_reg_lines2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L128() else D35()
  // L128()
  goto L128_;

L127_:;
  // r84 = dyn base12(<sym lines>)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L32(r84)
  // L32(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L32_;

D35_:;
  // deopt 161 [lines2]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_lines2_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L128_:;
  // lines3 = force? lines2
  Rsh_Fir_reg_lines3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines2_);
  // checkMissing(lines3)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_lines3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r86 = dyn length(lines3)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_lines3_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L129() else D36()
  // L129()
  goto L129_;

D36_:;
  // deopt 164 [r86]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L129_:;
  // goto L32(r86)
  // L32(r86)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r86_;
  goto L32_;

L130_:;
  // Encoding = ldf Encoding
  Rsh_Fir_reg_Encoding = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L131() else D37()
  // L131()
  goto L131_;

D37_:;
  // deopt 166 []
  Rsh_Fir_deopt(166, 0, NULL, CCP, RHO);
  return R_NilValue;

L131_:;
  // p16 = prom<V +>{
  //   lines4 = ld lines;
  //   lines5 = force? lines4;
  //   checkMissing(lines5);
  //   return lines5;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_16, 0, NULL, CCP, RHO);
  // r88 = dyn Encoding(p16)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Encoding, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L132() else D38()
  // L132()
  goto L132_;

D38_:;
  // deopt 168 [r88]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(168, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L132_:;
  // st enc = r88
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r88_, RHO);
  (void)(Rsh_Fir_reg_r88_);
  // l7 = ld lines
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // Encoding__ = ldf `Encoding<-`
  Rsh_Fir_reg_Encoding__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L133() else D39()
  // L133()
  goto L133_;

D39_:;
  // deopt 173 ["bytes", l7, "bytes"]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_const(CCP, 56);
  Rsh_Fir_deopt(173, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L133_:;
  // r89 = dyn Encoding__(l7, NULL, "bytes")
  SEXP Rsh_Fir_array_args161[3];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args161[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args161[2] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names48[3];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_array_arg_names48[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Encoding__, 3, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L134() else D40()
  // L134()
  goto L134_;

D40_:;
  // deopt 175 ["bytes", r89]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(175, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L134_:;
  // st lines = r89
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r89_, RHO);
  (void)(Rsh_Fir_reg_r89_);
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args162);
  // if guard13 then L135() else L136()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L135()
    goto L135_;
  } else {
  // L136()
    goto L136_;
  }

L135_:;
  // lines6 = ld lines
  Rsh_Fir_reg_lines6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L137() else D41()
  // L137()
  goto L137_;

L136_:;
  // r90 = dyn base13(<sym lines>)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L34(r90)
  // L34(r90)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r90_;
  goto L34_;

D41_:;
  // deopt 179 [lines6]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_lines6_;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L137_:;
  // lines7 = force? lines6
  Rsh_Fir_reg_lines7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines6_);
  // checkMissing(lines7)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_lines7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r92 = dyn length1(lines7)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_lines7_;
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L138() else D42()
  // L138()
  goto L138_;

D42_:;
  // deopt 182 [r92]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L34(r92)
  // L34(r92)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r92_;
  goto L34_;

D43_:;
  // deopt 182 [r91, x37]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_x37_;
  Rsh_Fir_deopt(182, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L139_:;
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // c49 = `is.object`(x38)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args167);
  // if c49 then L140() else L141(r91, x38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L140()
    goto L140_;
  } else {
  // L141(r91, x38)
    Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r91_;
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_x38_;
    goto L141_;
  }

L140_:;
  // dr22 = tryDispatchBuiltin.1("[", x38)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args168);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if dc11 then L142() else L141(r91, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L142()
    goto L142_;
  } else {
  // L141(r91, dr22)
    Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r91_;
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_dr22_;
    goto L141_;
  }

L141_:;
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r97 = dyn __10(x40, 3)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_x40_;
  Rsh_Fir_array_args170[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L35(r94, r97)
  // L35(r94, r97)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_r97_;
  goto L35_;

L142_:;
  // dx33 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // goto L35(r91, dx33)
  // L35(r91, dx33)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx33_;
  goto L35_;

D44_:;
  // deopt 186 [r96, dx34, x41]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_dx34_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_x41_;
  Rsh_Fir_deopt(186, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L143_:;
  // x42 = force? x41
  Rsh_Fir_reg_x42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x41_);
  // checkMissing(x42)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_x42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(x42)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args173);
  // if c50 then L144() else L145(r96, dx34, x42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L144()
    goto L144_;
  } else {
  // L145(r96, dx34, x42)
    Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r96_;
    Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx34_;
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_x42_;
    goto L145_;
  }

L144_:;
  // dr24 = tryDispatchBuiltin.1("[", x42)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args174);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if dc12 then L146() else L145(r96, dx34, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L146()
    goto L146_;
  } else {
  // L145(r96, dx34, dr24)
    Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r96_;
    Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx34_;
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_dr24_;
    goto L145_;
  }

L145_:;
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r102 = dyn __11(x44, 1)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_x44_;
  Rsh_Fir_array_args176[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L36(r99, dx36, r102)
  // L36(r99, dx36, r102)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx36_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_r102_;
  goto L36_;

L146_:;
  // dx38 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L36(r96, dx34, dx38)
  // L36(r96, dx34, dx38)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx34_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx38_;
  goto L36_;

L147_:;
  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L148() else D45()
  // L148()
  goto L148_;

D45_:;
  // deopt 195 [_Machine]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg__Machine;
  Rsh_Fir_deopt(195, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L148_:;
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // c52 = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args179);
  // if c52 then L150() else L151(_Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c52_)) {
  // L150()
    goto L150_;
  } else {
  // L151(_Machine1)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L151_;
  }

L149_:;
  // l8 = ld x
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c53 = `is.object`(l8)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args180);
  // if c53 then L153() else L154(dx42, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L153()
    goto L153_;
  } else {
  // L154(dx42, l8)
    Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx42_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L154_;
  }

L150_:;
  // dr26 = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args181);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if dc13 then L152() else L151(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L152()
    goto L152_;
  } else {
  // L151(dr26)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr26_;
    goto L151_;
  }

L151_:;
  // r106 = `$`(_Machine3, <sym integer.max>)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args183[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args183);
  // goto L149(r106)
  // L149(r106)
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_r106_;
  goto L149_;

L152_:;
  // dx41 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // goto L149(dx41)
  // L149(dx41)
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx41_;
  goto L149_;

L153_:;
  // dr28 = tryDispatchBuiltin.0("[<-", l8, dx42)
  SEXP Rsh_Fir_array_args185[3];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args185[2] = Rsh_Fir_reg_dx42_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args185);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if dc14 then L155() else L154(dx42, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L155()
    goto L155_;
  } else {
  // L154(dx42, dr28)
    Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx42_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr28_;
    goto L154_;
  }

L154_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r107 = dyn ___1(l10, dx42, 4)
  SEXP Rsh_Fir_array_args187[3];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_dx42_;
  Rsh_Fir_array_args187[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names53[3];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L38(dx44, r107)
  // L38(dx44, r107)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx44_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_r107_;
  goto L38_;

L155_:;
  // dx46 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // goto L38(dx42, dx46)
  // L38(dx42, dx46)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx42_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_dx46_;
  goto L38_;

D46_:;
  // deopt 206 []
  Rsh_Fir_deopt(206, 0, NULL, CCP, RHO);
  return R_NilValue;

L157_:;
  // p17 = prom<V +>{
  //   lines8 = ld lines;
  //   lines9 = force? lines8;
  //   checkMissing(lines9);
  //   c54 = `is.object`(lines9);
  //   if c54 then L2() else L3(lines9);
  // L0(dx51):
  //   return dx51;
  // L2():
  //   dr30 = tryDispatchBuiltin.1("[", lines9);
  //   dc15 = getTryDispatchBuiltinDispatched(dr30);
  //   if dc15 then L4() else L3(dr30);
  // L3(lines11):
  //   sym14 = ldf length;
  //   base14 = ldf length in base;
  //   guard14 = `==`.4(sym14, base14);
  //   if guard14 then L5() else L6();
  // L1(lines14, r109):
  //   __12 = ldf `[` in base;
  //   r111 = dyn __12(lines14, r109);
  //   goto L0(r111);
  // L4():
  //   dx50 = getTryDispatchBuiltinValue(dr30);
  //   goto L0(dx50);
  // L5():
  //   lines15 = ld lines;
  //   lines16 = force? lines15;
  //   checkMissing(lines16);
  //   length2 = ldf length in base;
  //   r110 = dyn length2(lines16);
  //   goto L1(lines11, r110);
  // L6():
  //   r108 = dyn base14(<sym lines>);
  //   goto L1(lines11, r108);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_17, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   x45 = ld x;
  //   x46 = force? x45;
  //   checkMissing(x46);
  //   c55 = `is.object`(x46);
  //   if c55 then L1() else L2(x46);
  // L0(dx53):
  //   return dx53;
  // L1():
  //   dr32 = tryDispatchBuiltin.1("[", x46);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L3() else L2(dr32);
  // L2(x48):
  //   __13 = ldf `[` in base;
  //   r113 = dyn __13(x48, 4);
  //   goto L0(r113);
  // L3():
  //   dx52 = getTryDispatchBuiltinValue(dr32);
  //   goto L0(dx52);
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_18, 0, NULL, CCP, RHO);
  // r115 = dyn substring(p17, 1, p18)
  SEXP Rsh_Fir_array_args205[3];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args205[2] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names58[3];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_array_arg_names58[2] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substring, 3, Rsh_Fir_array_args205, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L158() else D47()
  // L158()
  goto L158_;

D47_:;
  // deopt 210 [r115]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_deopt(210, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L158_:;
  // l11 = ld lines
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c56 = `is.object`(l11)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args206);
  // if c56 then L159() else L160(r115, l11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L159()
    goto L159_;
  } else {
  // L160(r115, l11)
    Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r115_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l11_;
    goto L160_;
  }

L159_:;
  // dr34 = tryDispatchBuiltin.0("[<-", l11, r115)
  SEXP Rsh_Fir_array_args207[3];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args207[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args207[2] = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args207);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // if dc17 then L161() else L160(r115, dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L161()
    goto L161_;
  } else {
  // L160(r115, dr34)
    Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r115_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_dr34_;
    goto L160_;
  }

L160_:;
  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args209);
  // if guard15 then L162() else L163()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L162()
    goto L162_;
  } else {
  // L163()
    goto L163_;
  }

L161_:;
  // dx54 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx54_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty());
  // goto L40(dx54)
  // L40(dx54)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx54_;
  goto L40_;

L162_:;
  // lines17 = ld lines
  Rsh_Fir_reg_lines17_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L164() else D48()
  // L164()
  goto L164_;

L163_:;
  // r124 = dyn base15(<sym lines>)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L41(r117, l13, r115, r124)
  // L41(r117, l13, r115, r124)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r117_;
  Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_r127_ = Rsh_Fir_reg_r124_;
  goto L41_;

D48_:;
  // deopt 214 [r117, l13, r115, lines17]
  SEXP Rsh_Fir_array_deopt_stack40[4];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_r115_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_lines17_;
  Rsh_Fir_deopt(214, 4, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L164_:;
  // lines18 = force? lines17
  Rsh_Fir_reg_lines18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines17_);
  // checkMissing(lines18)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_lines18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r128 = dyn length3(lines18)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_lines18_;
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args213, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L165() else D49()
  // L165()
  goto L165_;

D49_:;
  // deopt 217 [r117, l13, r115, r128]
  SEXP Rsh_Fir_array_deopt_stack41[4];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_r115_;
  Rsh_Fir_array_deopt_stack41[3] = Rsh_Fir_reg_r128_;
  Rsh_Fir_deopt(217, 4, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L165_:;
  // goto L41(r117, l13, r115, r128)
  // L41(r117, l13, r115, r128)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r117_;
  Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_r127_ = Rsh_Fir_reg_r128_;
  goto L41_;

D50_:;
  // deopt 221 []
  Rsh_Fir_deopt(221, 0, NULL, CCP, RHO);
  return R_NilValue;

L166_:;
  // p19 = prom<V +>{
  //   lines19 = ld lines;
  //   lines20 = force? lines19;
  //   checkMissing(lines20);
  //   c57 = `is.object`(lines20);
  //   if c57 then L1() else L2(lines20);
  // L0(dx57):
  //   return dx57;
  // L1():
  //   dr36 = tryDispatchBuiltin.1("[", lines20);
  //   dc18 = getTryDispatchBuiltinDispatched(dr36);
  //   if dc18 then L3() else L2(dr36);
  // L2(lines22):
  //   __14 = ldf `[` in base;
  //   r130 = dyn __14(lines22, 1);
  //   goto L0(r130);
  // L3():
  //   dx56 = getTryDispatchBuiltinValue(dr36);
  //   goto L0(dx56);
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_19, 0, NULL, CCP, RHO);
  // p20 = prom<V +>{
  //   x49 = ld x;
  //   x50 = force? x49;
  //   checkMissing(x50);
  //   c58 = `is.object`(x50);
  //   if c58 then L1() else L2(x50);
  // L0(dx59):
  //   return dx59;
  // L1():
  //   dr38 = tryDispatchBuiltin.1("[", x50);
  //   dc19 = getTryDispatchBuiltinDispatched(dr38);
  //   if dc19 then L3() else L2(dr38);
  // L2(x52):
  //   __15 = ldf `[` in base;
  //   r132 = dyn __15(x52, 2);
  //   goto L0(r132);
  // L3():
  //   dx58 = getTryDispatchBuiltinValue(dr38);
  //   goto L0(dx58);
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_20, 0, NULL, CCP, RHO);
  // r134 = dyn substring1(p19, p20)
  SEXP Rsh_Fir_array_args226[2];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args226[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substring1_, 2, Rsh_Fir_array_args226, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L167() else D51()
  // L167()
  goto L167_;

D51_:;
  // deopt 224 [r134]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r134_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L167_:;
  // l17 = ld lines
  Rsh_Fir_reg_l17_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c59 = `is.object`(l17)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args227);
  // if c59 then L168() else L169(r134, l17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L168()
    goto L168_;
  } else {
  // L169(r134, l17)
    Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r134_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l17_;
    goto L169_;
  }

L168_:;
  // dr40 = tryDispatchBuiltin.0("[<-", l17, r134)
  SEXP Rsh_Fir_array_args228[3];
  Rsh_Fir_array_args228[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args228[2] = Rsh_Fir_reg_r134_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args228);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // if dc20 then L170() else L169(r134, dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L170()
    goto L170_;
  } else {
  // L169(r134, dr40)
    Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r134_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_dr40_;
    goto L169_;
  }

L169_:;
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r139 = dyn ___3(l19, r134, 1)
  SEXP Rsh_Fir_array_args230[3];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_r134_;
  Rsh_Fir_array_args230[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names64[3];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args230, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L42(r139)
  // L42(r139)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_r139_;
  goto L42_;

L170_:;
  // dx60 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx60_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // goto L42(dx60)
  // L42(dx60)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_dx60_;
  goto L42_;

D52_:;
  // deopt 230 [enc]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_enc;
  Rsh_Fir_deopt(230, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L171_:;
  // enc1 = force? enc
  Rsh_Fir_reg_enc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_enc);
  // checkMissing(enc1)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_enc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty()));
  // l20 = ld lines
  Rsh_Fir_reg_l20_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // Encoding__1 = ldf `Encoding<-`
  Rsh_Fir_reg_Encoding__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L172() else D53()
  // L172()
  goto L172_;

D53_:;
  // deopt 233 [enc1, l20, enc1]
  SEXP Rsh_Fir_array_deopt_stack44[3];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_enc1_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_enc1_;
  Rsh_Fir_deopt(233, 3, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L172_:;
  // r140 = dyn Encoding__1(l20, NULL, enc1)
  SEXP Rsh_Fir_array_args233[3];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args233[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args233[2] = Rsh_Fir_reg_enc1_;
  SEXP Rsh_Fir_array_arg_names65[3];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_array_arg_names65[2] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Encoding__1_, 3, Rsh_Fir_array_args233, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L173() else D54()
  // L173()
  goto L173_;

D54_:;
  // deopt 235 [enc1, r140]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_enc1_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r140_;
  Rsh_Fir_deopt(235, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L173_:;
  // st lines = r140
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r140_, RHO);
  (void)(Rsh_Fir_reg_r140_);
  // goto L31()
  // L31()
  goto L31_;

D55_:;
  // deopt 239 [lines23]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_lines23_;
  Rsh_Fir_deopt(239, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L175_:;
  // lines24 = force? lines23
  Rsh_Fir_reg_lines24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines23_);
  // checkMissing(lines24)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_lines24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return lines24
  return Rsh_Fir_reg_lines24_;
}
SEXP Rsh_Fir_user_promise_inner189286523_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner189286523_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // r33 = dyn __1("utils", "str")
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names20, CCP, RHO);
  // checkFun.0(r33)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r33_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args70));
  // r34 = r33 as cls
  Rsh_Fir_reg_r34_ = Rsh_Fir_cast(Rsh_Fir_reg_r33_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p1 = prom<V +>{
  //   srcfile6 = ld srcfile;
  //   srcfile7 = force? srcfile6;
  //   checkMissing(srcfile7);
  //   return srcfile7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_2, 0, NULL, CCP, RHO);
  // r36 = dyn r34(p1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r34_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names21, CCP, RHO);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_user_promise_inner189286523_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_srcfile6_;
  SEXP Rsh_Fir_reg_srcfile7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // srcfile6 = ld srcfile
  Rsh_Fir_reg_srcfile6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // srcfile7 = force? srcfile6
  Rsh_Fir_reg_srcfile7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile6_);
  // checkMissing(srcfile7)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_srcfile7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return srcfile7
  return Rsh_Fir_reg_srcfile7_;
}
SEXP Rsh_Fir_user_promise_inner189286523_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getSrcLines;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r55_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // getSrcLines = ldf getSrcLines
  Rsh_Fir_reg_getSrcLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // p3 = prom<V +>{
  //   srcfile12 = ld srcfile;
  //   srcfile13 = force? srcfile12;
  //   checkMissing(srcfile13);
  //   return srcfile13;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_4, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   c29 = `is.object`(x6);
  //   if c29 then L1() else L2(x6);
  // L0(dx16):
  //   return dx16;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", x6);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(x8):
  //   __2 = ldf `[` in base;
  //   r51 = dyn __2(x8, 7);
  //   goto L0(r51);
  // L3():
  //   dx15 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx15);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_5, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   c30 = `is.object`(x10);
  //   if c30 then L1() else L2(x10);
  // L0(dx18):
  //   return dx18;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", x10);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(x12):
  //   __3 = ldf `[` in base;
  //   r53 = dyn __3(x12, 8);
  //   goto L0(r53);
  // L3():
  //   dx17 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx17);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_6, 0, NULL, CCP, RHO);
  // r55 = dyn getSrcLines(p3, p4, p5)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args101[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getSrcLines, 3, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names32, CCP, RHO);
  // return r55
  return Rsh_Fir_reg_r55_;
}
SEXP Rsh_Fir_user_promise_inner189286523_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_srcfile12_;
  SEXP Rsh_Fir_reg_srcfile13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // srcfile12 = ld srcfile
  Rsh_Fir_reg_srcfile12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // srcfile13 = force? srcfile12
  Rsh_Fir_reg_srcfile13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile12_);
  // checkMissing(srcfile13)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_srcfile13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // return srcfile13
  return Rsh_Fir_reg_srcfile13_;
}
SEXP Rsh_Fir_user_promise_inner189286523_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r51_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(x6)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args90);
  // if c29 then L1() else L2(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L2_;
  }

L0_:;
  // return dx16
  return Rsh_Fir_reg_dx16_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", x6)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args91);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r51 = dyn __2(x8, 7)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r51)
  // L0(r51)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r51_;
  goto L0_;

L3_:;
  // dx15 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L0(dx15)
  // L0(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r53_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(x10)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args96);
  // if c30 then L1() else L2(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L2_;
  }

L0_:;
  // return dx18
  return Rsh_Fir_reg_dx18_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", x10)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args97);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r53 = dyn __3(x12, 8)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r53)
  // L0(r53)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r53_;
  goto L0_;

L3_:;
  // dx17 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L0(dx17)
  // L0(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getSrcLines1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r64_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // getSrcLines1 = ldf getSrcLines
  Rsh_Fir_reg_getSrcLines1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // p7 = prom<V +>{
  //   srcfile14 = ld srcfile;
  //   srcfile15 = force? srcfile14;
  //   checkMissing(srcfile15);
  //   return srcfile15;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_8, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   c31 = `is.object`(x14);
  //   if c31 then L1() else L2(x14);
  // L0(dx20):
  //   return dx20;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", x14);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(x16):
  //   __4 = ldf `[` in base;
  //   r60 = dyn __4(x16, 1);
  //   goto L0(r60);
  // L3():
  //   dx19 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx19);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_9, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   x17 = ld x;
  //   x18 = force? x17;
  //   checkMissing(x18);
  //   c32 = `is.object`(x18);
  //   if c32 then L1() else L2(x18);
  // L0(dx22):
  //   return dx22;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", x18);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(x20):
  //   __5 = ldf `[` in base;
  //   r62 = dyn __5(x20, 3);
  //   goto L0(r62);
  // L3():
  //   dx21 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx21);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner189286523_10, 0, NULL, CCP, RHO);
  // r64 = dyn getSrcLines1(p7, p8, p9)
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args116[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getSrcLines1_, 3, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names36, CCP, RHO);
  // return r64
  return Rsh_Fir_reg_r64_;
}
SEXP Rsh_Fir_user_promise_inner189286523_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_srcfile14_;
  SEXP Rsh_Fir_reg_srcfile15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // srcfile14 = ld srcfile
  Rsh_Fir_reg_srcfile14_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // srcfile15 = force? srcfile14
  Rsh_Fir_reg_srcfile15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile14_);
  // checkMissing(srcfile15)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_srcfile15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // return srcfile15
  return Rsh_Fir_reg_srcfile15_;
}
SEXP Rsh_Fir_user_promise_inner189286523_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r60_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(x14)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args105);
  // if c31 then L1() else L2(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L2_;
  }

L0_:;
  // return dx20
  return Rsh_Fir_reg_dx20_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", x14)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r60 = dyn __4(x16, 1)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r60_;
  goto L0_;

L3_:;
  // dx19 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L0(dx19)
  // L0(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r62_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(x18)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args111);
  // if c32 then L1() else L2(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x18)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L2_;
  }

L0_:;
  // return dx22
  return Rsh_Fir_reg_dx22_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", x18)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args112);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r62 = dyn __5(x20, 3)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r62)
  // L0(r62)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r62_;
  goto L0_;

L3_:;
  // dx21 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L0(dx21)
  // L0(dx21)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_srcfile16_;
  SEXP Rsh_Fir_reg_srcfile17_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_srcfile19_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_r72_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // srcfile16 = ld srcfile
  Rsh_Fir_reg_srcfile16_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // srcfile17 = force? srcfile16
  Rsh_Fir_reg_srcfile17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile16_);
  // checkMissing(srcfile17)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_srcfile17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // c43 = `is.object`(srcfile17)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_srcfile17_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args126);
  // if c43 then L1() else L2(srcfile17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L1()
    goto L1_;
  } else {
  // L2(srcfile17)
    Rsh_Fir_reg_srcfile19_ = Rsh_Fir_reg_srcfile17_;
    goto L2_;
  }

L0_:;
  // return dx24
  return Rsh_Fir_reg_dx24_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("$", srcfile17)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_srcfile17_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args127);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_srcfile19_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // r72 = `$`(srcfile19, <sym filename>)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_srcfile19_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args129);
  // goto L0(r72)
  // L0(r72)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r72_;
  goto L0_;

L3_:;
  // dx23 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L0(dx23)
  // L0(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r74_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c44 = `is.object`(x22)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args132);
  // if c44 then L1() else L2(x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x22)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L2_;
  }

L0_:;
  // return dx26
  return Rsh_Fir_reg_dx26_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[", x22)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r74 = dyn __6(x24, 1)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L0(r74)
  // L0(r74)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r74_;
  goto L0_;

L3_:;
  // dx25 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L0(dx25)
  // L0(dx25)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r76_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(x26)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args138);
  // if c45 then L1() else L2(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L2_;
  }

L0_:;
  // return dx28
  return Rsh_Fir_reg_dx28_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", x26)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args139);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r76 = dyn __7(x28, 5)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args141[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L0(r76)
  // L0(r76)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r76_;
  goto L0_;

L3_:;
  // dx27 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // goto L0(dx27)
  // L0(dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_x30_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_reg_dx30_;
  SEXP Rsh_Fir_reg___8_;
  SEXP Rsh_Fir_reg_r78_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(x30)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args144);
  // if c46 then L1() else L2(x30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x30)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_x30_;
    goto L2_;
  }

L0_:;
  // return dx30
  return Rsh_Fir_reg_dx30_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", x30)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args145);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r78 = dyn __8(x32, 3)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args147[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L0(r78)
  // L0(r78)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_r78_;
  goto L0_;

L3_:;
  // dx29 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L0(dx29)
  // L0(dx29)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx29_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_x34_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_x36_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_reg_dx32_;
  SEXP Rsh_Fir_reg___9_;
  SEXP Rsh_Fir_reg_r80_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x33 = ld x
  Rsh_Fir_reg_x33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x34 = force? x33
  Rsh_Fir_reg_x34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x33_);
  // checkMissing(x34)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_x34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // c47 = `is.object`(x34)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args150);
  // if c47 then L1() else L2(x34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x34)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_x34_;
    goto L2_;
  }

L0_:;
  // return dx32
  return Rsh_Fir_reg_dx32_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("[", x34)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args151);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r80 = dyn __9(x36, 6)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r80)
  // L0(r80)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_r80_;
  goto L0_;

L3_:;
  // dx31 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L0(dx31)
  // L0(dx31)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lines4_;
  SEXP Rsh_Fir_reg_lines5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // lines4 = ld lines
  Rsh_Fir_reg_lines4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // lines5 = force? lines4
  Rsh_Fir_reg_lines5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines4_);
  // checkMissing(lines5)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_lines5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // return lines5
  return Rsh_Fir_reg_lines5_;
}
SEXP Rsh_Fir_user_promise_inner189286523_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lines8_;
  SEXP Rsh_Fir_reg_lines9_;
  SEXP Rsh_Fir_reg_c54_;
  SEXP Rsh_Fir_reg_lines11_;
  SEXP Rsh_Fir_reg_dr30_;
  SEXP Rsh_Fir_reg_dc15_;
  SEXP Rsh_Fir_reg_dx50_;
  SEXP Rsh_Fir_reg_dx51_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_lines14_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_lines15_;
  SEXP Rsh_Fir_reg_lines16_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg___12_;
  SEXP Rsh_Fir_reg_r111_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // lines8 = ld lines
  Rsh_Fir_reg_lines8_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // lines9 = force? lines8
  Rsh_Fir_reg_lines9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines8_);
  // checkMissing(lines9)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_lines9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // c54 = `is.object`(lines9)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_lines9_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args190);
  // if c54 then L2() else L3(lines9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L2()
    goto L2_;
  } else {
  // L3(lines9)
    Rsh_Fir_reg_lines11_ = Rsh_Fir_reg_lines9_;
    goto L3_;
  }

L0_:;
  // return dx51
  return Rsh_Fir_reg_dx51_;

L1_:;
  // __12 = ldf `[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r111 = dyn __12(lines14, r109)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_lines14_;
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 2, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L0(r111)
  // L0(r111)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_r111_;
  goto L0_;

L2_:;
  // dr30 = tryDispatchBuiltin.1("[", lines9)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_lines9_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args192);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if dc15 then L4() else L3(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr30)
    Rsh_Fir_reg_lines11_ = Rsh_Fir_reg_dr30_;
    goto L3_;
  }

L3_:;
  // sym14 = ldf length
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base14 = ldf length in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args194);
  // if guard14 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx50 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // goto L0(dx50)
  // L0(dx50)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx50_;
  goto L0_;

L5_:;
  // lines15 = ld lines
  Rsh_Fir_reg_lines15_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // lines16 = force? lines15
  Rsh_Fir_reg_lines16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines15_);
  // checkMissing(lines16)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_lines16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r110 = dyn length2(lines16)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_lines16_;
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L1(lines11, r110)
  // L1(lines11, r110)
  Rsh_Fir_reg_lines14_ = Rsh_Fir_reg_lines11_;
  Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r110_;
  goto L1_;

L6_:;
  // r108 = dyn base14(<sym lines>)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L1(lines11, r108)
  // L1(lines11, r108)
  Rsh_Fir_reg_lines14_ = Rsh_Fir_reg_lines11_;
  Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r108_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner189286523_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x45_;
  SEXP Rsh_Fir_reg_x46_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_x48_;
  SEXP Rsh_Fir_reg_dr32_;
  SEXP Rsh_Fir_reg_dc16_;
  SEXP Rsh_Fir_reg_dx52_;
  SEXP Rsh_Fir_reg_dx53_;
  SEXP Rsh_Fir_reg___13_;
  SEXP Rsh_Fir_reg_r113_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x45 = ld x
  Rsh_Fir_reg_x45_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x46 = force? x45
  Rsh_Fir_reg_x46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x45_);
  // checkMissing(x46)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_x46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // c55 = `is.object`(x46)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_x46_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args200);
  // if c55 then L1() else L2(x46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x46)
    Rsh_Fir_reg_x48_ = Rsh_Fir_reg_x46_;
    goto L2_;
  }

L0_:;
  // return dx53
  return Rsh_Fir_reg_dx53_;

L1_:;
  // dr32 = tryDispatchBuiltin.1("[", x46)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_x46_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args201);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // if dc16 then L3() else L2(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr32)
    Rsh_Fir_reg_x48_ = Rsh_Fir_reg_dr32_;
    goto L2_;
  }

L2_:;
  // __13 = ldf `[` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r113 = dyn __13(x48, 4)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_x48_;
  Rsh_Fir_array_args203[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 2, Rsh_Fir_array_args203, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L0(r113)
  // L0(r113)
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_r113_;
  goto L0_;

L3_:;
  // dx52 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // goto L0(dx52)
  // L0(dx52)
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx52_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lines19_;
  SEXP Rsh_Fir_reg_lines20_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_lines22_;
  SEXP Rsh_Fir_reg_dr36_;
  SEXP Rsh_Fir_reg_dc18_;
  SEXP Rsh_Fir_reg_dx56_;
  SEXP Rsh_Fir_reg_dx57_;
  SEXP Rsh_Fir_reg___14_;
  SEXP Rsh_Fir_reg_r130_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // lines19 = ld lines
  Rsh_Fir_reg_lines19_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // lines20 = force? lines19
  Rsh_Fir_reg_lines20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines19_);
  // checkMissing(lines20)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_lines20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // c57 = `is.object`(lines20)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_lines20_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args215);
  // if c57 then L1() else L2(lines20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L1()
    goto L1_;
  } else {
  // L2(lines20)
    Rsh_Fir_reg_lines22_ = Rsh_Fir_reg_lines20_;
    goto L2_;
  }

L0_:;
  // return dx57
  return Rsh_Fir_reg_dx57_;

L1_:;
  // dr36 = tryDispatchBuiltin.1("[", lines20)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_lines20_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args216);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // if dc18 then L3() else L2(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr36)
    Rsh_Fir_reg_lines22_ = Rsh_Fir_reg_dr36_;
    goto L2_;
  }

L2_:;
  // __14 = ldf `[` in base
  Rsh_Fir_reg___14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r130 = dyn __14(lines22, 1)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_lines22_;
  Rsh_Fir_array_args218[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___14_, 2, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L0(r130)
  // L0(r130)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_r130_;
  goto L0_;

L3_:;
  // dx56 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx56_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // goto L0(dx56)
  // L0(dx56)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx56_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner189286523_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x49_;
  SEXP Rsh_Fir_reg_x50_;
  SEXP Rsh_Fir_reg_c58_;
  SEXP Rsh_Fir_reg_x52_;
  SEXP Rsh_Fir_reg_dr38_;
  SEXP Rsh_Fir_reg_dc19_;
  SEXP Rsh_Fir_reg_dx58_;
  SEXP Rsh_Fir_reg_dx59_;
  SEXP Rsh_Fir_reg___15_;
  SEXP Rsh_Fir_reg_r132_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner189286523/0: expected 0, got %d", NCAPTURES);

  // x49 = ld x
  Rsh_Fir_reg_x49_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x50 = force? x49
  Rsh_Fir_reg_x50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x49_);
  // checkMissing(x50)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_x50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty()));
  // c58 = `is.object`(x50)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_x50_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args221);
  // if c58 then L1() else L2(x50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x50)
    Rsh_Fir_reg_x52_ = Rsh_Fir_reg_x50_;
    goto L2_;
  }

L0_:;
  // return dx59
  return Rsh_Fir_reg_dx59_;

L1_:;
  // dr38 = tryDispatchBuiltin.1("[", x50)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_x50_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args222);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // if dc19 then L3() else L2(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr38)
    Rsh_Fir_reg_x52_ = Rsh_Fir_reg_dr38_;
    goto L2_;
  }

L2_:;
  // __15 = ldf `[` in base
  Rsh_Fir_reg___15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r132 = dyn __15(x52, 2)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_x52_;
  Rsh_Fir_array_args224[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___15_, 2, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L0(r132)
  // L0(r132)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_r132_;
  goto L0_;

L3_:;
  // dx58 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx58_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L0(dx58)
  // L0(dx58)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx58_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
