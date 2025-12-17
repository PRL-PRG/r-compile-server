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
SEXP Rsh_Fir_user_promise_inner736444261_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_20(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_21(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_22(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_23(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_24(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_25(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_26(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_27(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_28(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_29(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_30(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner736444261_31(SEXP CCP, SEXP RHO);
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
  // st assignInMyNamespace = r
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
  SEXP Rsh_Fir_reg_sys_function;  // sys_function
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg_isS4_;  // isS4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_isNamespace;  // isNamespace
  SEXP Rsh_Fir_reg_ns;  // ns
  SEXP Rsh_Fir_reg_ns1_;  // ns1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_parent_env;  // parent_env
  SEXP Rsh_Fir_reg_ns2_;  // ns2
  SEXP Rsh_Fir_reg_ns3_;  // ns3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_bindingIsLocked;  // bindingIsLocked
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_ns4_;  // ns4
  SEXP Rsh_Fir_reg_ns5_;  // ns5
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_unlockBinding;  // unlockBinding
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_ns6_;  // ns6
  SEXP Rsh_Fir_reg_ns7_;  // ns7
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_ns8_;  // ns8
  SEXP Rsh_Fir_reg_ns9_;  // ns9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_options1_;  // options1
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_lockBinding;  // lockBinding
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_ns10_;  // ns10
  SEXP Rsh_Fir_reg_ns11_;  // ns11
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_assign1_;  // assign1
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_ns12_;  // ns12
  SEXP Rsh_Fir_reg_ns13_;  // ns13
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_isBaseNamespace;  // isBaseNamespace
  SEXP Rsh_Fir_reg_ns14_;  // ns14
  SEXP Rsh_Fir_reg_ns15_;  // ns15
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_getNamespaceInfo;  // getNamespaceInfo
  SEXP Rsh_Fir_reg_ns16_;  // ns16
  SEXP Rsh_Fir_reg_ns17_;  // ns17
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_S3_;  // S3
  SEXP Rsh_Fir_reg_S4_;  // S4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_S5_;  // S5
  SEXP Rsh_Fir_reg_S6_;  // S6
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_S3names;  // S3names
  SEXP Rsh_Fir_reg_S3names1_;  // S3names1
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_S3names2_;  // S3names2
  SEXP Rsh_Fir_reg_S3names3_;  // S3names3
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg_S9_;  // S9
  SEXP Rsh_Fir_reg_S10_;  // S10
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_S12_;  // S12
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_p22_;  // p22
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg__isMethodsDispatchOn;  // _isMethodsDispatchOn
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_genfun;  // genfun
  SEXP Rsh_Fir_reg_genfun1_;  // genfun1
  SEXP Rsh_Fir_reg_p23_;  // p23
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg__defenv_for_S3_registry;  // _defenv_for_S3_registry
  SEXP Rsh_Fir_reg_genfun2_;  // genfun2
  SEXP Rsh_Fir_reg_genfun3_;  // genfun3
  SEXP Rsh_Fir_reg_p24_;  // p24
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_defenv;  // defenv
  SEXP Rsh_Fir_reg_defenv1_;  // defenv1
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_defenv3_;  // defenv3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_S13_;  // S13
  SEXP Rsh_Fir_reg_S14_;  // S14
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_S16_;  // S16
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_p25_;  // p25
  SEXP Rsh_Fir_reg_S17_;  // S17
  SEXP Rsh_Fir_reg_S18_;  // S18
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_S20_;  // S20
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_p26_;  // p26
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_exists;  // exists
  SEXP Rsh_Fir_reg_remappedName;  // remappedName
  SEXP Rsh_Fir_reg_remappedName1_;  // remappedName1
  SEXP Rsh_Fir_reg_p27_;  // p27
  SEXP Rsh_Fir_reg_S3Table;  // S3Table
  SEXP Rsh_Fir_reg_S3Table1_;  // S3Table1
  SEXP Rsh_Fir_reg_p28_;  // p28
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_assign2_;  // assign2
  SEXP Rsh_Fir_reg_remappedName2_;  // remappedName2
  SEXP Rsh_Fir_reg_remappedName3_;  // remappedName3
  SEXP Rsh_Fir_reg_p29_;  // p29
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_p30_;  // p30
  SEXP Rsh_Fir_reg_S3Table2_;  // S3Table2
  SEXP Rsh_Fir_reg_S3Table3_;  // S3Table3
  SEXP Rsh_Fir_reg_p31_;  // p31
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_invisible1_;  // invisible1
  SEXP Rsh_Fir_reg_r94_;  // r94

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
  // sys_function = ldf `sys.function`
  Rsh_Fir_reg_sys_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L26() else D0()
  // L26()
  goto L26_;

L0_:;
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c then L34() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L34()
    goto L34_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L4()
  // L4()
  goto L4_;

L2_:;
  // goto L4()
  // L4()
  goto L4_;

L3_:;
  // isNamespace = ldf isNamespace
  Rsh_Fir_reg_isNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

L4_:;
  // bindingIsLocked = ldf bindingIsLocked
  Rsh_Fir_reg_bindingIsLocked = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L42() else D10()
  // L42()
  goto L42_;

L5_:;
  // assign1 = ldf assign
  Rsh_Fir_reg_assign1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L58() else D22()
  // L58()
  goto L58_;

L6_:;
  // options1 = ldf options
  Rsh_Fir_reg_options1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L53() else D18()
  // L53()
  goto L53_;

L7_:;
  // isBaseNamespace = ldf isBaseNamespace
  Rsh_Fir_reg_isBaseNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L60() else D24()
  // L60()
  goto L60_;

L8_:;
  // goto L24()
  // L24()
  goto L24_;

L9_:;
  // r45 = `!`(r43)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c4 then L69() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L69()
    goto L69_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // S5 = ld S3
  Rsh_Fir_reg_S5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L75() else D31()
  // L75()
  goto L75_;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r47
  return Rsh_Fir_reg_r47_;

L13_:;
  // st S3names = dx1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L79() else D32()
  // L79()
  goto L79_;

L14_:;
  // goto L23(NULL)
  // L23(NULL)
  Rsh_Fir_reg_r90_ = Rsh_const(CCP, 12);
  goto L23_;

L15_:;
  // st i = r56
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L87() else D37()
  // L87()
  goto L87_;

L16_:;
  // c8 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c8 then L92() else L17(c8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L92()
    goto L92_;
  } else {
  // L17(c8)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c8_;
    goto L17_;
  }

L17_:;
  // c14 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c14 then L97() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L97()
    goto L97_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // _defenv_for_S3_registry = ldf `.defenv_for_S3_registry`
  Rsh_Fir_reg__defenv_for_S3_registry = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L103() else D43()
  // L103()
  goto L103_;

L20_:;
  // st S3Table = dx8
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L109() else D46()
  // L109()
  goto L109_;

L21_:;
  // goto L22(NULL)
  // L22(NULL)
  Rsh_Fir_reg_r89_ = Rsh_const(CCP, 12);
  goto L22_;

L22_:;
  // goto L23(r89)
  // L23(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L23_;

L23_:;
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // sym6 = ldf invisible
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base6 = ldf invisible in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard6 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r93
  return Rsh_Fir_reg_r93_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p = prom<V +>{
  //   return -1.0;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_, CCP, RHO);
  // r1 = dyn sys_function(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L27() else D1()
  // L27()
  goto L27_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L27_:;
  // st f = r1
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L28() else D2()
  // L28()
  goto L28_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p1 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_1, CCP, RHO);
  // r3 = dyn environment(p1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L29_:;
  // st ns = r3
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym = ldf isS4
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base = ldf isS4 in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

L31_:;
  // r4 = dyn base(<sym f>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;

D4_:;
  // deopt 12 [f2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_f2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L32_:;
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // isS4 = ldf isS4 in base
  Rsh_Fir_reg_isS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r6 = dyn isS4(f3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_f3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isS4_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

D5_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L34_:;
  // goto L3()
  // L3()
  goto L3_;

D6_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p2 = prom<V +>{
  //   ns = ld ns;
  //   ns1 = force? ns;
  //   checkMissing(ns1);
  //   return ns1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_2, CCP, RHO);
  // r8 = dyn isNamespace(p2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isNamespace, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

D7_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L36_:;
  // r9 = `!`(r8)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c1 then L37() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L37()
    goto L37_;
  } else {
  // L2()
    goto L2_;
  }

L37_:;
  // parent_env = ldf `parent.env`
  Rsh_Fir_reg_parent_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

D8_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p3 = prom<V +>{
  //   ns2 = ld ns;
  //   ns3 = force? ns2;
  //   checkMissing(ns3);
  //   return ns3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_3, CCP, RHO);
  // r11 = dyn parent_env(p3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_env, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

D9_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L39_:;
  // st ns = r11
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // goto L3()
  // L3()
  goto L3_;

D10_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p4 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_4, CCP, RHO);
  // p5 = prom<V +>{
  //   ns4 = ld ns;
  //   ns5 = force? ns4;
  //   checkMissing(ns5);
  //   return ns5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_5, CCP, RHO);
  // r15 = dyn bindingIsLocked(p4, p5)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bindingIsLocked, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

D11_:;
  // deopt 35 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L43_:;
  // c2 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L44() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L44()
    goto L44_;
  } else {
  // L5()
    goto L5_;
  }

L44_:;
  // unlockBinding = ldf unlockBinding
  Rsh_Fir_reg_unlockBinding = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L45() else D12()
  // L45()
  goto L45_;

D12_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p6 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_6, CCP, RHO);
  // p7 = prom<V +>{
  //   ns6 = ld ns;
  //   ns7 = force? ns6;
  //   checkMissing(ns7);
  //   return ns7;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_7, CCP, RHO);
  // r18 = dyn unlockBinding(p6, p7)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlockBinding, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L46() else D13()
  // L46()
  goto L46_;

D13_:;
  // deopt 40 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L46_:;
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L47() else D14()
  // L47()
  goto L47_;

D14_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p8 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_8, CCP, RHO);
  // p9 = prom<V +>{
  //   value1 = ld value;
  //   value2 = force? value1;
  //   checkMissing(value2);
  //   return value2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_9, CCP, RHO);
  // p10 = prom<V +>{
  //   ns8 = ld ns;
  //   ns9 = force? ns8;
  //   checkMissing(ns9);
  //   return ns9;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_10, CCP, RHO);
  // r22 = dyn assign[, , envir, inherits](p8, p9, p10, FALSE)
  SEXP Rsh_Fir_array_args29[4];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names8[3] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 4, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L48() else D15()
  // L48()
  goto L48_;

D15_:;
  // deopt 49 [r22]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L48_:;
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L49() else D16()
  // L49()
  goto L49_;

D16_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // r23 = dyn options("warn")
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L50() else D17()
  // L50()
  goto L50_;

D17_:;
  // deopt 53 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L50_:;
  // st w = r23
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sym1 = ldf `on.exit`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf `on.exit` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L51_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r26 = dyn on_exit(<lang options(w)>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

L52_:;
  // r24 = dyn base1(<lang options(w)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

D18_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p11 = prom<V +>{
  //   return -1.0;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_11, CCP, RHO);
  // r28 = dyn options1[warn](p11)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L54() else D19()
  // L54()
  goto L54_;

D19_:;
  // deopt 62 [r28]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L54_:;
  // lockBinding = ldf lockBinding
  Rsh_Fir_reg_lockBinding = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L55() else D20()
  // L55()
  goto L55_;

D20_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p12 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_12, CCP, RHO);
  // p13 = prom<V +>{
  //   ns10 = ld ns;
  //   ns11 = force? ns10;
  //   checkMissing(ns11);
  //   return ns11;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_13, CCP, RHO);
  // r31 = dyn lockBinding(p12, p13)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lockBinding, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L56() else D21()
  // L56()
  goto L56_;

D21_:;
  // deopt 67 [r31]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L7()
  // L7()
  goto L7_;

D22_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p14 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_14, CCP, RHO);
  // p15 = prom<V +>{
  //   value3 = ld value;
  //   value4 = force? value3;
  //   checkMissing(value4);
  //   return value4;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_15, CCP, RHO);
  // p16 = prom<V +>{
  //   ns12 = ld ns;
  //   ns13 = force? ns12;
  //   checkMissing(ns13);
  //   return ns13;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_16, CCP, RHO);
  // r36 = dyn assign1[, , envir, inherits](p14, p15, p16, FALSE)
  SEXP Rsh_Fir_array_args41[4];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names14[3] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign1_, 4, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L59() else D23()
  // L59()
  goto L59_;

D23_:;
  // deopt 76 [r36]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L7()
  // L7()
  goto L7_;

D24_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p17 = prom<V +>{
  //   ns14 = ld ns;
  //   ns15 = force? ns14;
  //   checkMissing(ns15);
  //   return ns15;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_17, CCP, RHO);
  // r38 = dyn isBaseNamespace(p17)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isBaseNamespace, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L61() else D25()
  // L61()
  goto L61_;

D25_:;
  // deopt 80 [r38]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L61_:;
  // r39 = `!`(r38)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c3 then L62() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L62()
    goto L62_;
  } else {
  // L8()
    goto L8_;
  }

L62_:;
  // getNamespaceInfo = ldf getNamespaceInfo
  Rsh_Fir_reg_getNamespaceInfo = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L63() else D26()
  // L63()
  goto L63_;

D26_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // p18 = prom<V +>{
  //   ns16 = ld ns;
  //   ns17 = force? ns16;
  //   checkMissing(ns17);
  //   return ns17;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_18, CCP, RHO);
  // r41 = dyn getNamespaceInfo(p18, "S3methods")
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getNamespaceInfo, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L64() else D27()
  // L64()
  goto L64_;

D27_:;
  // deopt 86 [r41]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L64_:;
  // st S3 = r41
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard2 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L65_:;
  // S3 = ld S3
  Rsh_Fir_reg_S3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L67() else D28()
  // L67()
  goto L67_;

L66_:;
  // r42 = dyn base2(<sym S3>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L9(r42)
  // L9(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L9_;

D28_:;
  // deopt 90 [S3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_S3_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L67_:;
  // S4 = force? S3
  Rsh_Fir_reg_S4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3_);
  // checkMissing(S4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_S4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r44 = dyn length(S4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_S4_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L68() else D29()
  // L68()
  goto L68_;

D29_:;
  // deopt 93 [r44]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L9(r44)
  // L9(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L9_;

L69_:;
  // sym3 = ldf invisible
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf invisible in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard3 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L70_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r48 = dyn invisible(NULL)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L72() else D30()
  // L72()
  goto L72_;

L71_:;
  // r46 = dyn base3(NULL)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(r46)
  // L11(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L11_;

D30_:;
  // deopt 99 [r48]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L11(r48)
  // L11(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L11_;

D31_:;
  // deopt 103 [S5]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_S5_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L75_:;
  // S6 = force? S5
  Rsh_Fir_reg_S6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S5_);
  // checkMissing(S6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_S6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(S6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_S6_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c5 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L76_:;
  // dr = tryDispatchBuiltin.1("[", S6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_S6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc then L78() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L78()
    goto L78_;
  } else {
  // L77()
    goto L77_;
  }

L77_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r51 = dyn __(S6, <missing>, 3)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_S6_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L13(r51)
  // L13(r51)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r51_;
  goto L13_;

L78_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L13(dx)
  // L13(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L13_;

D32_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p19 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_19, CCP, RHO);
  // p20 = prom<V +>{
  //   S3names = ld S3names;
  //   S3names1 = force? S3names;
  //   checkMissing(S3names1);
  //   return S3names1;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_20, CCP, RHO);
  // r54 = dyn _in_(p19, p20)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L80() else D33()
  // L80()
  goto L80_;

D33_:;
  // deopt 114 [r54]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L80_:;
  // c6 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c6 then L81() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L81()
    goto L81_;
  } else {
  // L14()
    goto L14_;
  }

L81_:;
  // sym4 = ldf match
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base4 = ldf match in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard4 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L82_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L84() else D34()
  // L84()
  goto L84_;

L83_:;
  // r55 = dyn base4(<sym x>, <sym S3names>)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L15(r55)
  // L15(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L15_;

D34_:;
  // deopt 117 [x13]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L84_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // S3names2 = ld S3names
  Rsh_Fir_reg_S3names2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L85() else D35()
  // L85()
  goto L85_;

D35_:;
  // deopt 119 [S3names2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_S3names2_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L85_:;
  // S3names3 = force? S3names2
  Rsh_Fir_reg_S3names3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3names2_);
  // checkMissing(S3names3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_S3names3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r57 = dyn match(x14, S3names3, NA_INT, NULL)
  SEXP Rsh_Fir_array_args69[4];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_S3names3_;
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args69[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L86() else D36()
  // L86()
  goto L86_;

D36_:;
  // deopt 124 [r57]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L15(r57)
  // L15(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L15_;

D37_:;
  // deopt 127 []
  Rsh_Fir_deopt(127, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // p21 = prom<V +>{
  //   S9 = ld S3;
  //   S10 = force? S9;
  //   checkMissing(S10);
  //   c7 = `is.object`(S10);
  //   if c7 then L1() else L2(S10);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", S10);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(S12):
  //   i = ld i;
  //   i1 = force? i;
  //   __1 = ldf `[` in base;
  //   r58 = dyn __1(S12, i1, 1);
  //   goto L0(r58);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_21, CCP, RHO);
  // p22 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r60 = dyn parent_frame();
  //   return r60;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_22, CCP, RHO);
  // r62 = dyn get[, mode, envir](p21, "function", p22)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L88() else D38()
  // L88()
  goto L88_;

D38_:;
  // deopt 133 [r62]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L88_:;
  // st genfun = r62
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // sym5 = ldf `.isMethodsDispatchOn`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base5 = ldf `.isMethodsDispatchOn` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard5 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L89_:;
  // _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base
  Rsh_Fir_reg__isMethodsDispatchOn = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r65 = dyn _isMethodsDispatchOn()
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__isMethodsDispatchOn, 0, NULL, NULL, CCP, RHO);
  // check L91() else D39()
  // L91()
  goto L91_;

L90_:;
  // r63 = dyn base5()
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 0, NULL, NULL, CCP, RHO);
  // goto L16(r63)
  // L16(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L16_;

D39_:;
  // deopt 138 [r65]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L16(r65)
  // L16(r65)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L16_;

L92_:;
  // __2 = ldf `::`
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L93() else D40()
  // L93()
  goto L93_;

D40_:;
  // deopt 140 [c8]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L93_:;
  // r66 = dyn __2("methods", "is")
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L94() else D41()
  // L94()
  goto L94_;

D41_:;
  // deopt 143 [c8, r66]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(143, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L94_:;
  // checkFun.0(r66)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r66_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args79));
  // r67 = r66 as cls
  Rsh_Fir_reg_r67_ = Rsh_Fir_cast(Rsh_Fir_reg_r66_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p23 = prom<V +>{
  //   genfun = ld genfun;
  //   genfun1 = force? genfun;
  //   checkMissing(genfun1);
  //   return genfun1;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_23, CCP, RHO);
  // r69 = dyn r67(p23, "genericFunction")
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r67_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L95() else D42()
  // L95()
  goto L95_;

D42_:;
  // deopt 147 [c8, r69]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L95_:;
  // c11 = `as.logical`(r69)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // c12 = `&&`(c8, c11)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L17(c12)
  // L17(c12)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c12_;
  goto L17_;

L97_:;
  // __3 = ldf `@` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r70 = dyn __3(<lang `::`(methods, slot)(genfun, "default")>, <sym methods>)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names29, CCP, RHO);
  // c15 = `is.object`(r70)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c15 then L99() else L100(r70)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L99()
    goto L99_;
  } else {
  // L100(r70)
    Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r70_;
    goto L100_;
  }

L98_:;
  // st genfun = dx5
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L19()
  // L19()
  goto L19_;

L99_:;
  // dr4 = tryDispatchBuiltin.1("$", r70)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc2 then L101() else L100(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L101()
    goto L101_;
  } else {
  // L100(dr4)
    Rsh_Fir_reg_r72_ = Rsh_Fir_reg_dr4_;
    goto L100_;
  }

L100_:;
  // r73 = `$`(r72, <sym ANY>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L98(r73)
  // L98(r73)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r73_;
  goto L98_;

L101_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L98(dx4)
  // L98(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L98_;

D43_:;
  // deopt 156 []
  Rsh_Fir_deopt(156, 0, NULL, CCP, RHO);
  return R_NilValue;

L103_:;
  // p24 = prom<V +>{
  //   genfun2 = ld genfun;
  //   genfun3 = force? genfun2;
  //   checkMissing(genfun3);
  //   return genfun3;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_24, CCP, RHO);
  // r75 = dyn _defenv_for_S3_registry(p24)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__defenv_for_S3_registry, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L104() else D44()
  // L104()
  goto L104_;

D44_:;
  // deopt 158 [r75]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L104_:;
  // st defenv = r75
  Rsh_Fir_store(Rsh_const(CCP, 59), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // defenv = ld defenv
  Rsh_Fir_reg_defenv = Rsh_Fir_load(Rsh_const(CCP, 59), RHO);
  // check L105() else D45()
  // L105()
  goto L105_;

D45_:;
  // deopt 160 [defenv]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_defenv;
  Rsh_Fir_deopt(160, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L105_:;
  // defenv1 = force? defenv
  Rsh_Fir_reg_defenv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defenv);
  // checkMissing(defenv1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_defenv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(defenv1)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_defenv1_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if c16 then L106() else L107(defenv1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L106()
    goto L106_;
  } else {
  // L107(defenv1)
    Rsh_Fir_reg_defenv3_ = Rsh_Fir_reg_defenv1_;
    goto L107_;
  }

L106_:;
  // dr6 = tryDispatchBuiltin.1("[[", defenv1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_defenv1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc3 then L108() else L107(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L108()
    goto L108_;
  } else {
  // L107(dr6)
    Rsh_Fir_reg_defenv3_ = Rsh_Fir_reg_dr6_;
    goto L107_;
  }

L107_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r76 = dyn __4(defenv3, ".__S3MethodsTable__.")
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_defenv3_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L20(r76)
  // L20(r76)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r76_;
  goto L20_;

L108_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L20(dx7)
  // L20(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L20_;

D46_:;
  // deopt 167 []
  Rsh_Fir_deopt(167, 0, NULL, CCP, RHO);
  return R_NilValue;

L109_:;
  // p25 = prom<V +>{
  //   S13 = ld S3;
  //   S14 = force? S13;
  //   checkMissing(S14);
  //   c17 = `is.object`(S14);
  //   if c17 then L1() else L2(S14);
  // L0(dx10):
  //   return dx10;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", S14);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(S16):
  //   i2 = ld i;
  //   i3 = force? i2;
  //   __5 = ldf `[` in base;
  //   r77 = dyn __5(S16, i3, 1);
  //   goto L0(r77);
  // L3():
  //   dx9 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx9);
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_25, CCP, RHO);
  // p26 = prom<V +>{
  //   S17 = ld S3;
  //   S18 = force? S17;
  //   checkMissing(S18);
  //   c18 = `is.object`(S18);
  //   if c18 then L1() else L2(S18);
  // L0(dx12):
  //   return dx12;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", S18);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(S20):
  //   i4 = ld i;
  //   i5 = force? i4;
  //   __6 = ldf `[` in base;
  //   r79 = dyn __6(S20, i5, 2);
  //   goto L0(r79);
  // L3():
  //   dx11 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx11);
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_26, CCP, RHO);
  // r81 = dyn paste[, , sep](p25, p26, ".")
  SEXP Rsh_Fir_array_args110[3];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_p25_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_p26_;
  Rsh_Fir_array_args110[2] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L110() else D47()
  // L110()
  goto L110_;

D47_:;
  // deopt 172 [r81]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L110_:;
  // st remappedName = r81
  Rsh_Fir_store(Rsh_const(CCP, 66), Rsh_Fir_reg_r81_, RHO);
  (void)(Rsh_Fir_reg_r81_);
  // exists = ldf exists
  Rsh_Fir_reg_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // check L111() else D48()
  // L111()
  goto L111_;

D48_:;
  // deopt 175 []
  Rsh_Fir_deopt(175, 0, NULL, CCP, RHO);
  return R_NilValue;

L111_:;
  // p27 = prom<V +>{
  //   remappedName = ld remappedName;
  //   remappedName1 = force? remappedName;
  //   checkMissing(remappedName1);
  //   return remappedName1;
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_27, CCP, RHO);
  // p28 = prom<V +>{
  //   S3Table = ld S3Table;
  //   S3Table1 = force? S3Table;
  //   checkMissing(S3Table1);
  //   return S3Table1;
  // }
  Rsh_Fir_reg_p28_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_28, CCP, RHO);
  // r84 = dyn exists[, envir, inherits](p27, p28, FALSE)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_p27_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_p28_;
  Rsh_Fir_array_args113[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names35[2] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_exists, 3, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L112() else D49()
  // L112()
  goto L112_;

D49_:;
  // deopt 181 [r84]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L112_:;
  // c19 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c19 then L113() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L113()
    goto L113_;
  } else {
  // L21()
    goto L21_;
  }

L113_:;
  // assign2 = ldf assign
  Rsh_Fir_reg_assign2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L114() else D50()
  // L114()
  goto L114_;

D50_:;
  // deopt 183 []
  Rsh_Fir_deopt(183, 0, NULL, CCP, RHO);
  return R_NilValue;

L114_:;
  // p29 = prom<V +>{
  //   remappedName2 = ld remappedName;
  //   remappedName3 = force? remappedName2;
  //   checkMissing(remappedName3);
  //   return remappedName3;
  // }
  Rsh_Fir_reg_p29_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_29, CCP, RHO);
  // p30 = prom<V +>{
  //   value5 = ld value;
  //   value6 = force? value5;
  //   checkMissing(value6);
  //   return value6;
  // }
  Rsh_Fir_reg_p30_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_30, CCP, RHO);
  // p31 = prom<V +>{
  //   S3Table2 = ld S3Table;
  //   S3Table3 = force? S3Table2;
  //   checkMissing(S3Table3);
  //   return S3Table3;
  // }
  Rsh_Fir_reg_p31_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_31, CCP, RHO);
  // r88 = dyn assign2(p29, p30, p31)
  SEXP Rsh_Fir_array_args118[3];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_p29_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_p30_;
  Rsh_Fir_array_args118[2] = Rsh_Fir_reg_p31_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign2_, 3, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L115() else D51()
  // L115()
  goto L115_;

D51_:;
  // deopt 187 [r88]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L115_:;
  // goto L22(r88)
  // L22(r88)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L22_;

L119_:;
  // invisible1 = ldf invisible in base
  Rsh_Fir_reg_invisible1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r94 = dyn invisible1(NULL)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible1_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L121() else D52()
  // L121()
  goto L121_;

L120_:;
  // r92 = dyn base6(NULL)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L25(r92)
  // L25(r92)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r92_;
  goto L25_;

D52_:;
  // deopt 198 [r94]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L121_:;
  // goto L25(r94)
  // L25(r94)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r94_;
  goto L25_;
}
SEXP Rsh_Fir_user_promise_inner736444261_(SEXP CCP, SEXP RHO) {
  // return -1.0
  return Rsh_const(CCP, 19);
}
SEXP Rsh_Fir_user_promise_inner736444261_1(SEXP CCP, SEXP RHO) {
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_inner736444261_2(SEXP CCP, SEXP RHO) {
  // ns = ld ns
  Rsh_Fir_reg_ns = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ns1 = force? ns
  Rsh_Fir_reg_ns1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns);
  // checkMissing(ns1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ns1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return ns1
  return Rsh_Fir_reg_ns1_;
}
SEXP Rsh_Fir_user_promise_inner736444261_3(SEXP CCP, SEXP RHO) {
  // ns2 = ld ns
  Rsh_Fir_reg_ns2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ns3 = force? ns2
  Rsh_Fir_reg_ns3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns2_);
  // checkMissing(ns3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_ns3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return ns3
  return Rsh_Fir_reg_ns3_;
}
SEXP Rsh_Fir_user_promise_inner736444261_4(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner736444261_5(SEXP CCP, SEXP RHO) {
  // ns4 = ld ns
  Rsh_Fir_reg_ns4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ns5 = force? ns4
  Rsh_Fir_reg_ns5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns4_);
  // checkMissing(ns5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ns5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return ns5
  return Rsh_Fir_reg_ns5_;
}
SEXP Rsh_Fir_user_promise_inner736444261_6(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner736444261_7(SEXP CCP, SEXP RHO) {
  // ns6 = ld ns
  Rsh_Fir_reg_ns6_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ns7 = force? ns6
  Rsh_Fir_reg_ns7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns6_);
  // checkMissing(ns7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_ns7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return ns7
  return Rsh_Fir_reg_ns7_;
}
SEXP Rsh_Fir_user_promise_inner736444261_8(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner736444261_9(SEXP CCP, SEXP RHO) {
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return value2
  return Rsh_Fir_reg_value2_;
}
SEXP Rsh_Fir_user_promise_inner736444261_10(SEXP CCP, SEXP RHO) {
  // ns8 = ld ns
  Rsh_Fir_reg_ns8_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ns9 = force? ns8
  Rsh_Fir_reg_ns9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns8_);
  // checkMissing(ns9)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_ns9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return ns9
  return Rsh_Fir_reg_ns9_;
}
SEXP Rsh_Fir_user_promise_inner736444261_11(SEXP CCP, SEXP RHO) {
  // return -1.0
  return Rsh_const(CCP, 19);
}
SEXP Rsh_Fir_user_promise_inner736444261_12(SEXP CCP, SEXP RHO) {
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner736444261_13(SEXP CCP, SEXP RHO) {
  // ns10 = ld ns
  Rsh_Fir_reg_ns10_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ns11 = force? ns10
  Rsh_Fir_reg_ns11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns10_);
  // checkMissing(ns11)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_ns11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return ns11
  return Rsh_Fir_reg_ns11_;
}
SEXP Rsh_Fir_user_promise_inner736444261_14(SEXP CCP, SEXP RHO) {
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner736444261_15(SEXP CCP, SEXP RHO) {
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return value4
  return Rsh_Fir_reg_value4_;
}
SEXP Rsh_Fir_user_promise_inner736444261_16(SEXP CCP, SEXP RHO) {
  // ns12 = ld ns
  Rsh_Fir_reg_ns12_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ns13 = force? ns12
  Rsh_Fir_reg_ns13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns12_);
  // checkMissing(ns13)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ns13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return ns13
  return Rsh_Fir_reg_ns13_;
}
SEXP Rsh_Fir_user_promise_inner736444261_17(SEXP CCP, SEXP RHO) {
  // ns14 = ld ns
  Rsh_Fir_reg_ns14_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ns15 = force? ns14
  Rsh_Fir_reg_ns15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns14_);
  // checkMissing(ns15)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_ns15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return ns15
  return Rsh_Fir_reg_ns15_;
}
SEXP Rsh_Fir_user_promise_inner736444261_18(SEXP CCP, SEXP RHO) {
  // ns16 = ld ns
  Rsh_Fir_reg_ns16_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ns17 = force? ns16
  Rsh_Fir_reg_ns17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns16_);
  // checkMissing(ns17)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_ns17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return ns17
  return Rsh_Fir_reg_ns17_;
}
SEXP Rsh_Fir_user_promise_inner736444261_19(SEXP CCP, SEXP RHO) {
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner736444261_20(SEXP CCP, SEXP RHO) {
  // S3names = ld S3names
  Rsh_Fir_reg_S3names = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // S3names1 = force? S3names
  Rsh_Fir_reg_S3names1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3names);
  // checkMissing(S3names1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_S3names1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return S3names1
  return Rsh_Fir_reg_S3names1_;
}
SEXP Rsh_Fir_user_promise_inner736444261_21(SEXP CCP, SEXP RHO) {
  // S9 = ld S3
  Rsh_Fir_reg_S9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // S10 = force? S9
  Rsh_Fir_reg_S10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S9_);
  // checkMissing(S10)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_S10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(S10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_S10_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c7 then L1() else L2(S10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L1()
    goto L1_;
  } else {
  // L2(S10)
    Rsh_Fir_reg_S12_ = Rsh_Fir_reg_S10_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", S10)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_S10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_S12_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r58 = dyn __1(S12, i1, 1)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_S12_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args74[2] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r58)
  // L0(r58)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r58_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner736444261_22(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // r60 = dyn parent_frame()
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r60
  return Rsh_Fir_reg_r60_;
}
SEXP Rsh_Fir_user_promise_inner736444261_23(SEXP CCP, SEXP RHO) {
  // genfun = ld genfun
  Rsh_Fir_reg_genfun = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // genfun1 = force? genfun
  Rsh_Fir_reg_genfun1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_genfun);
  // checkMissing(genfun1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_genfun1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return genfun1
  return Rsh_Fir_reg_genfun1_;
}
SEXP Rsh_Fir_user_promise_inner736444261_24(SEXP CCP, SEXP RHO) {
  // genfun2 = ld genfun
  Rsh_Fir_reg_genfun2_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // genfun3 = force? genfun2
  Rsh_Fir_reg_genfun3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_genfun2_);
  // checkMissing(genfun3)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_genfun3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return genfun3
  return Rsh_Fir_reg_genfun3_;
}
SEXP Rsh_Fir_user_promise_inner736444261_25(SEXP CCP, SEXP RHO) {
  // S13 = ld S3
  Rsh_Fir_reg_S13_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // S14 = force? S13
  Rsh_Fir_reg_S14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S13_);
  // checkMissing(S14)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_S14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(S14)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_S14_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c17 then L1() else L2(S14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L1()
    goto L1_;
  } else {
  // L2(S14)
    Rsh_Fir_reg_S16_ = Rsh_Fir_reg_S14_;
    goto L2_;
  }

L0_:;
  // return dx10
  return Rsh_Fir_reg_dx10_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", S14)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_S14_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_S16_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r77 = dyn __5(S16, i3, 1)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_S16_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_array_args102[2] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r77)
  // L0(r77)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r77_;
  goto L0_;

L3_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L0(dx9)
  // L0(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner736444261_26(SEXP CCP, SEXP RHO) {
  // S17 = ld S3
  Rsh_Fir_reg_S17_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // S18 = force? S17
  Rsh_Fir_reg_S18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S17_);
  // checkMissing(S18)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_S18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(S18)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_S18_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if c18 then L1() else L2(S18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L1()
    goto L1_;
  } else {
  // L2(S18)
    Rsh_Fir_reg_S20_ = Rsh_Fir_reg_S18_;
    goto L2_;
  }

L0_:;
  // return dx12
  return Rsh_Fir_reg_dx12_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", S18)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_S18_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_S20_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // i4 = ld i
  Rsh_Fir_reg_i4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // i5 = force? i4
  Rsh_Fir_reg_i5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i4_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r79 = dyn __6(S20, i5, 2)
  SEXP Rsh_Fir_array_args108[3];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_S20_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_i5_;
  Rsh_Fir_array_args108[2] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 3, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r79)
  // L0(r79)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r79_;
  goto L0_;

L3_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L0(dx11)
  // L0(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner736444261_27(SEXP CCP, SEXP RHO) {
  // remappedName = ld remappedName
  Rsh_Fir_reg_remappedName = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // remappedName1 = force? remappedName
  Rsh_Fir_reg_remappedName1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_remappedName);
  // checkMissing(remappedName1)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_remappedName1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // return remappedName1
  return Rsh_Fir_reg_remappedName1_;
}
SEXP Rsh_Fir_user_promise_inner736444261_28(SEXP CCP, SEXP RHO) {
  // S3Table = ld S3Table
  Rsh_Fir_reg_S3Table = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // S3Table1 = force? S3Table
  Rsh_Fir_reg_S3Table1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3Table);
  // checkMissing(S3Table1)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_S3Table1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // return S3Table1
  return Rsh_Fir_reg_S3Table1_;
}
SEXP Rsh_Fir_user_promise_inner736444261_29(SEXP CCP, SEXP RHO) {
  // remappedName2 = ld remappedName
  Rsh_Fir_reg_remappedName2_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // remappedName3 = force? remappedName2
  Rsh_Fir_reg_remappedName3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_remappedName2_);
  // checkMissing(remappedName3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_remappedName3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // return remappedName3
  return Rsh_Fir_reg_remappedName3_;
}
SEXP Rsh_Fir_user_promise_inner736444261_30(SEXP CCP, SEXP RHO) {
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // return value6
  return Rsh_Fir_reg_value6_;
}
SEXP Rsh_Fir_user_promise_inner736444261_31(SEXP CCP, SEXP RHO) {
  // S3Table2 = ld S3Table
  Rsh_Fir_reg_S3Table2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // S3Table3 = force? S3Table2
  Rsh_Fir_reg_S3Table3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S3Table2_);
  // checkMissing(S3Table3)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_S3Table3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // return S3Table3
  return Rsh_Fir_reg_S3Table3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
