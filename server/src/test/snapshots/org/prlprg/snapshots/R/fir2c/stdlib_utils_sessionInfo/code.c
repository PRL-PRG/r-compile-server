#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner170925150_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner170925150_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner170925150_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170925150_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner170925150
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner170925150_, RHO, CCP);
  // st sessionInfo = r
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
SEXP Rsh_Fir_user_function_inner170925150_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner170925150 dynamic dispatch ([package])

  return Rsh_Fir_user_version_inner170925150_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner170925150_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner170925150 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner170925150/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_package;  // package
  SEXP Rsh_Fir_reg_package_isMissing;  // package_isMissing
  SEXP Rsh_Fir_reg_package_orDefault;  // package_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_R_Version;  // R_Version
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_z7_;  // z7
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg__Platform4_;  // _Platform4
  SEXP Rsh_Fir_reg__Platform5_;  // _Platform5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg__Platform7_;  // _Platform7
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg__Machine;  // _Machine
  SEXP Rsh_Fir_reg__Machine1_;  // _Machine1
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg__Machine3_;  // _Machine3
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sp;  // sp
  SEXP Rsh_Fir_reg_sp1_;  // sp1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_z8_;  // z8
  SEXP Rsh_Fir_reg_z9_;  // z9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_z11_;  // z11
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sp2_;  // sp2
  SEXP Rsh_Fir_reg_sp3_;  // sp3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_Sys_getlocale;  // Sys_getlocale
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_Sys_timezone;  // Sys_timezone
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_C_tzcode_type;  // C_tzcode_type
  SEXP Rsh_Fir_reg_C_tzcode_type1_;  // C_tzcode_type1
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_osVersion;  // osVersion
  SEXP Rsh_Fir_reg_osVersion1_;  // osVersion1
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_osVersion3_;  // osVersion3
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_RNGkind;  // RNGkind
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_package1_;  // package1
  SEXP Rsh_Fir_reg_package2_;  // package2
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_search;  // search
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_package3_;  // package3
  SEXP Rsh_Fir_reg_package4_;  // package4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg__rmpkg;  // _rmpkg
  SEXP Rsh_Fir_reg_package5_;  // package5
  SEXP Rsh_Fir_reg_package6_;  // package6
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_package8_;  // package8
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_keep;  // keep
  SEXP Rsh_Fir_reg_keep1_;  // keep1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_package9_;  // package9
  SEXP Rsh_Fir_reg_package10_;  // package10
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_packageDescription;  // packageDescription
  SEXP Rsh_Fir_reg_packageDescription1_;  // packageDescription1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_package11_;  // package11
  SEXP Rsh_Fir_reg_package12_;  // package12
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_sapply;  // sapply
  SEXP Rsh_Fir_reg_pkgDesc;  // pkgDesc
  SEXP Rsh_Fir_reg_pkgDesc1_;  // pkgDesc1
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_package13_;  // package13
  SEXP Rsh_Fir_reg_package14_;  // package14
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_package16_;  // package16
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_basePkgs;  // basePkgs
  SEXP Rsh_Fir_reg_basePkgs1_;  // basePkgs1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_l29_;  // l29
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_basePkgs2_;  // basePkgs2
  SEXP Rsh_Fir_reg_basePkgs3_;  // basePkgs3
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_pkgDesc2_;  // pkgDesc2
  SEXP Rsh_Fir_reg_pkgDesc3_;  // pkgDesc3
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_pkgDesc5_;  // pkgDesc5
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_basePkgs4_;  // basePkgs4
  SEXP Rsh_Fir_reg_basePkgs5_;  // basePkgs5
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_l30_;  // l30
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_l32_;  // l32
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_dx55_;  // dx55
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_package17_;  // package17
  SEXP Rsh_Fir_reg_package18_;  // package18
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_package20_;  // package20
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx56_;  // dx56
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_basePkgs6_;  // basePkgs6
  SEXP Rsh_Fir_reg_basePkgs7_;  // basePkgs7
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_l33_;  // l33
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_dx60_;  // dx60
  SEXP Rsh_Fir_reg_l36_;  // l36
  SEXP Rsh_Fir_reg_dx61_;  // dx61
  SEXP Rsh_Fir_reg_l37_;  // l37
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_l39_;  // l39
  SEXP Rsh_Fir_reg_dx66_;  // dx66
  SEXP Rsh_Fir_reg_dx67_;  // dx67
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_dx69_;  // dx69
  SEXP Rsh_Fir_reg_l41_;  // l41
  SEXP Rsh_Fir_reg_dr46_;  // dr46
  SEXP Rsh_Fir_reg_dc23_;  // dc23
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg_dx72_;  // dx72
  SEXP Rsh_Fir_reg_dx73_;  // dx73
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_loadedNamespaces;  // loadedNamespaces
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_loadedOnly;  // loadedOnly
  SEXP Rsh_Fir_reg_loadedOnly1_;  // loadedOnly1
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_loadedOnly3_;  // loadedOnly3
  SEXP Rsh_Fir_reg_dr48_;  // dr48
  SEXP Rsh_Fir_reg_dc24_;  // dc24
  SEXP Rsh_Fir_reg_dx75_;  // dx75
  SEXP Rsh_Fir_reg_dx76_;  // dx76
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_loadedOnly4_;  // loadedOnly4
  SEXP Rsh_Fir_reg_loadedOnly5_;  // loadedOnly5
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_package21_;  // package21
  SEXP Rsh_Fir_reg_package22_;  // package22
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_loadedOnly6_;  // loadedOnly6
  SEXP Rsh_Fir_reg_loadedOnly7_;  // loadedOnly7
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_loadedOnly8_;  // loadedOnly8
  SEXP Rsh_Fir_reg_loadedOnly9_;  // loadedOnly9
  SEXP Rsh_Fir_reg_l42_;  // l42
  SEXP Rsh_Fir_reg_names__1_;  // names__1
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_pkgDesc6_;  // pkgDesc6
  SEXP Rsh_Fir_reg_pkgDesc7_;  // pkgDesc7
  SEXP Rsh_Fir_reg_lapply1_;  // lapply1
  SEXP Rsh_Fir_reg_loadedOnly10_;  // loadedOnly10
  SEXP Rsh_Fir_reg_loadedOnly11_;  // loadedOnly11
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_packageDescription2_;  // packageDescription2
  SEXP Rsh_Fir_reg_packageDescription3_;  // packageDescription3
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_pkgDesc8_;  // pkgDesc8
  SEXP Rsh_Fir_reg_pkgDesc9_;  // pkgDesc9
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_pkgDesc11_;  // pkgDesc11
  SEXP Rsh_Fir_reg_dr50_;  // dr50
  SEXP Rsh_Fir_reg_dc25_;  // dc25
  SEXP Rsh_Fir_reg_dx77_;  // dx77
  SEXP Rsh_Fir_reg_dx78_;  // dx78
  SEXP Rsh_Fir_reg_loadedOnly12_;  // loadedOnly12
  SEXP Rsh_Fir_reg_loadedOnly13_;  // loadedOnly13
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_l43_;  // l43
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_dx80_;  // dx80
  SEXP Rsh_Fir_reg_l45_;  // l45
  SEXP Rsh_Fir_reg_dr52_;  // dr52
  SEXP Rsh_Fir_reg_dc26_;  // dc26
  SEXP Rsh_Fir_reg_dx82_;  // dx82
  SEXP Rsh_Fir_reg_dx83_;  // dx83
  SEXP Rsh_Fir_reg_dx84_;  // dx84
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_l46_;  // l46
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_l48_;  // l48
  SEXP Rsh_Fir_reg_dr54_;  // dr54
  SEXP Rsh_Fir_reg_dc27_;  // dc27
  SEXP Rsh_Fir_reg_dx86_;  // dx86
  SEXP Rsh_Fir_reg_dx87_;  // dx87
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_extSoftVersion;  // extSoftVersion
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_es;  // es
  SEXP Rsh_Fir_reg_es1_;  // es1
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_es3_;  // es3
  SEXP Rsh_Fir_reg_dr56_;  // dr56
  SEXP Rsh_Fir_reg_dc28_;  // dc28
  SEXP Rsh_Fir_reg_dx88_;  // dx88
  SEXP Rsh_Fir_reg_dx89_;  // dx89
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_l49_;  // l49
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_dx91_;  // dx91
  SEXP Rsh_Fir_reg_l51_;  // l51
  SEXP Rsh_Fir_reg_dr58_;  // dr58
  SEXP Rsh_Fir_reg_dc29_;  // dc29
  SEXP Rsh_Fir_reg_dx93_;  // dx93
  SEXP Rsh_Fir_reg_dx95_;  // dx95
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_La_library;  // La_library
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_l52_;  // l52
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_l54_;  // l54
  SEXP Rsh_Fir_reg_dr60_;  // dr60
  SEXP Rsh_Fir_reg_dc30_;  // dc30
  SEXP Rsh_Fir_reg_dx96_;  // dx96
  SEXP Rsh_Fir_reg_dx97_;  // dx97
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_La_version;  // La_version
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_l55_;  // l55
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_l57_;  // l57
  SEXP Rsh_Fir_reg_dr62_;  // dr62
  SEXP Rsh_Fir_reg_dc31_;  // dc31
  SEXP Rsh_Fir_reg_dx98_;  // dx98
  SEXP Rsh_Fir_reg_dx99_;  // dx99
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg_l10n_info;  // l10n_info
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_r155_;  // r155
  SEXP Rsh_Fir_reg_l10n;  // l10n
  SEXP Rsh_Fir_reg_l10n1_;  // l10n1
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_l10n3_;  // l10n3
  SEXP Rsh_Fir_reg_dr64_;  // dr64
  SEXP Rsh_Fir_reg_dc32_;  // dc32
  SEXP Rsh_Fir_reg_dx100_;  // dx100
  SEXP Rsh_Fir_reg_dx101_;  // dx101
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_r157_;  // r157
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_l10n4_;  // l10n4
  SEXP Rsh_Fir_reg_l10n5_;  // l10n5
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_l10n7_;  // l10n7
  SEXP Rsh_Fir_reg_dr66_;  // dr66
  SEXP Rsh_Fir_reg_dc33_;  // dc33
  SEXP Rsh_Fir_reg_dx102_;  // dx102
  SEXP Rsh_Fir_reg_dx103_;  // dx103
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_l58_;  // l58
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_dx105_;  // dx105
  SEXP Rsh_Fir_reg_l60_;  // l60
  SEXP Rsh_Fir_reg_dr68_;  // dr68
  SEXP Rsh_Fir_reg_dc34_;  // dc34
  SEXP Rsh_Fir_reg_dx107_;  // dx107
  SEXP Rsh_Fir_reg_dx108_;  // dx108
  SEXP Rsh_Fir_reg_dx109_;  // dx109
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_l10n8_;  // l10n8
  SEXP Rsh_Fir_reg_l10n9_;  // l10n9
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_l10n11_;  // l10n11
  SEXP Rsh_Fir_reg_dr70_;  // dr70
  SEXP Rsh_Fir_reg_dc35_;  // dc35
  SEXP Rsh_Fir_reg_dx111_;  // dx111
  SEXP Rsh_Fir_reg_dx112_;  // dx112
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_l10n12_;  // l10n12
  SEXP Rsh_Fir_reg_l10n13_;  // l10n13
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_l10n15_;  // l10n15
  SEXP Rsh_Fir_reg_dr72_;  // dr72
  SEXP Rsh_Fir_reg_dc36_;  // dc36
  SEXP Rsh_Fir_reg_dx113_;  // dx113
  SEXP Rsh_Fir_reg_dx114_;  // dx114
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_l61_;  // l61
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_dx116_;  // dx116
  SEXP Rsh_Fir_reg_l63_;  // l63
  SEXP Rsh_Fir_reg_dr74_;  // dr74
  SEXP Rsh_Fir_reg_dc37_;  // dc37
  SEXP Rsh_Fir_reg_dx118_;  // dx118
  SEXP Rsh_Fir_reg_dx119_;  // dx119
  SEXP Rsh_Fir_reg_dx120_;  // dx120
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_l64_;  // l64
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg_z12_;  // z12
  SEXP Rsh_Fir_reg_z13_;  // z13

  // Bind parameters
  Rsh_Fir_reg_package = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // package_isMissing = missing.0(package)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_package;
  Rsh_Fir_reg_package_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if package_isMissing then L0(NULL) else L0(package)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_package_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_package_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(package)
    Rsh_Fir_reg_package_orDefault = Rsh_Fir_reg_package;
    goto L0_;
  }

L0_:;
  // st package = package_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_package_orDefault, RHO);
  (void)(Rsh_Fir_reg_package_orDefault);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L1_:;
  // st z = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // R_Version = ldf `R.Version`
  Rsh_Fir_reg_R_Version = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L41() else D1()
  // L41()
  goto L41_;

L2_:;
  // c5 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c5 then L68() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L68()
    goto L68_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L76() else D8()
  // L76()
  goto L76_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // Sys_getlocale = ldf `Sys.getlocale`
  Rsh_Fir_reg_Sys_getlocale = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L90() else D12()
  // L90()
  goto L90_;

L7_:;
  // l18 = ld z
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c15 = `is.object`(l18)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c15 then L106() else L107(r57, l18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L106()
    goto L106_;
  } else {
  // L107(r57, l18)
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r57_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    goto L107_;
  }

L8_:;
  // c19 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c19 then L123() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L123()
    goto L123_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L131() else D27()
  // L131()
  goto L131_;

L11_:;
  // r90 = `==`(r88, 0.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c21 = `as.logical`(r90)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c21 then L137() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L137()
    goto L137_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L141() else D33()
  // L141()
  goto L141_;

L14_:;
  // l27 = ld z
  Rsh_Fir_reg_l27_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c23 = `is.object`(l27)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c23 then L149() else L150(dx41, l27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L149()
    goto L149_;
  } else {
  // L150(dx41, l27)
    Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx41_;
    Rsh_Fir_reg_l29_ = Rsh_Fir_reg_l27_;
    goto L150_;
  }

L15_:;
  // c24 = `as.logical`(r100)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c24 then L156() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L156()
    goto L156_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L19()
  // L19()
  goto L19_;

L17_:;
  // l30 = ld z
  Rsh_Fir_reg_l30_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c26 = `is.object`(l30)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l30_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c26 then L163() else L164(dx49, l30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L163()
    goto L163_;
  } else {
  // L164(dx49, l30)
    Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx49_;
    Rsh_Fir_reg_l32_ = Rsh_Fir_reg_l30_;
    goto L164_;
  }

L18_:;
  // l33 = ld z
  Rsh_Fir_reg_l33_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c28 = `is.object`(l33)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l33_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c28 then L172() else L173(dx57, l33, dx57, l33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L172()
    goto L172_;
  } else {
  // L173(dx57, l33, dx57, l33)
    Rsh_Fir_reg_dx60_ = Rsh_Fir_reg_dx57_;
    Rsh_Fir_reg_l36_ = Rsh_Fir_reg_l33_;
    Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_dx57_;
    Rsh_Fir_reg_l37_ = Rsh_Fir_reg_l33_;
    goto L173_;
  }

L19_:;
  // loadedNamespaces = ldf loadedNamespaces
  Rsh_Fir_reg_loadedNamespaces = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L182() else D45()
  // L182()
  goto L182_;

L20_:;
  // st loadedOnly = dx76
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx76_, RHO);
  (void)(Rsh_Fir_reg_dx76_);
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard6 then L190() else L191()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L190()
    goto L190_;
  } else {
  // L191()
    goto L191_;
  }

L21_:;
  // c31 = `as.logical`(r118)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r118_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c31 then L194() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L194()
    goto L194_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L25()
  // L25()
  goto L25_;

L23_:;
  // st pkgDesc = r122
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r122_, RHO);
  (void)(Rsh_Fir_reg_r122_);
  // pkgDesc8 = ld pkgDesc
  Rsh_Fir_reg_pkgDesc8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L204() else D59()
  // L204()
  goto L204_;

L24_:;
  // l43 = ld z
  Rsh_Fir_reg_l43_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c34 = `is.object`(l43)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l43_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c34 then L210() else L211(dx78, l43)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L210()
    goto L210_;
  } else {
  // L211(dx78, l43)
    Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_dx78_;
    Rsh_Fir_reg_l45_ = Rsh_Fir_reg_l43_;
    goto L211_;
  }

L25_:;
  // sym8 = ldf `as.character`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base8 = ldf `as.character` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard8 then L214() else L215()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L214()
    goto L214_;
  } else {
  // L215()
    goto L215_;
  }

L26_:;
  // l46 = ld z
  Rsh_Fir_reg_l46_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c35 = `is.object`(l46)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l46_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c35 then L220() else L221(r130, l46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L220()
    goto L220_;
  } else {
  // L221(r130, l46)
    Rsh_Fir_reg_r134_ = Rsh_Fir_reg_r130_;
    Rsh_Fir_reg_l48_ = Rsh_Fir_reg_l46_;
    goto L221_;
  }

L27_:;
  // l49 = ld z
  Rsh_Fir_reg_l49_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c37 = `is.object`(l49)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l49_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c37 then L230() else L231(dx89, l49)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L230()
    goto L230_;
  } else {
  // L231(dx89, l49)
    Rsh_Fir_reg_dx91_ = Rsh_Fir_reg_dx89_;
    Rsh_Fir_reg_l51_ = Rsh_Fir_reg_l49_;
    goto L231_;
  }

L28_:;
  // r157 = `!`(r155)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r155_;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c42 = `as.logical`(r157)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r157_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c42 then L253() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L253()
    goto L253_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // c41 = `==`(dx101, NULL)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dx101_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L28(c41)
  // L28(c41)
  Rsh_Fir_reg_r155_ = Rsh_Fir_reg_c41_;
  goto L28_;

L30_:;
  // goto L32()
  // L32()
  goto L32_;

L31_:;
  // l58 = ld z
  Rsh_Fir_reg_l58_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c44 = `is.object`(l58)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l58_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c44 then L259() else L260(dx103, l58)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L259()
    goto L259_;
  } else {
  // L260(dx103, l58)
    Rsh_Fir_reg_dx105_ = Rsh_Fir_reg_dx103_;
    Rsh_Fir_reg_l60_ = Rsh_Fir_reg_l58_;
    goto L260_;
  }

L32_:;
  // sym10 = ldf `is.null`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base10 = ldf `is.null` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard10 then L263() else L264()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L263()
    goto L263_;
  } else {
  // L264()
    goto L264_;
  }

L33_:;
  // r163 = `!`(r161)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c47 = `as.logical`(r163)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r163_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c47 then L269() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L269()
    goto L269_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // c46 = `==`(dx112, NULL)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx112_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L33(c46)
  // L33(c46)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_c46_;
  goto L33_;

L35_:;
  // goto L37()
  // L37()
  goto L37_;

L36_:;
  // l61 = ld z
  Rsh_Fir_reg_l61_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c49 = `is.object`(l61)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l61_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c49 then L275() else L276(dx114, l61)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L275()
    goto L275_;
  } else {
  // L276(dx114, l61)
    Rsh_Fir_reg_dx116_ = Rsh_Fir_reg_dx114_;
    Rsh_Fir_reg_l63_ = Rsh_Fir_reg_l61_;
    goto L276_;
  }

L37_:;
  // l64 = ld z
  Rsh_Fir_reg_l64_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L279() else D77()
  // L279()
  goto L279_;

L38_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L40() else D0()
  // L40()
  goto L40_;

L39_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

D1_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // r3 = dyn R_Version()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_Version, 0, NULL, NULL, CCP, RHO);
  // check L42() else D2()
  // L42()
  goto L42_;

D2_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L42_:;
  // l = ld z
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c then L44() else L45(r3, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L44()
    goto L44_;
  } else {
  // L45(r3, l)
    Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L45_;
  }

L43_:;
  // st z = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L47() else D3()
  // L47()
  goto L47_;

L44_:;
  // dr = tryDispatchBuiltin.0("$<-", l, r3)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args27);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc then L46() else L45(r3, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L46()
    goto L46_;
  } else {
  // L45(r3, dr)
    Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L45_;
  }

L45_:;
  // r8 = `$<-`(l2, <sym R.version>, r3)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L43(r8)
  // L43(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L43_;

L46_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L43(dx)
  // L43(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L43_;

D3_:;
  // deopt 11 [z]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L47_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(z1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c1 then L49() else L50(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L49()
    goto L49_;
  } else {
  // L50(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L50_;
  }

L48_:;
  // c2 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c2 then L53() else L54(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L53()
    goto L53_;
  } else {
  // L54(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L54_;
  }

L49_:;
  // dr2 = tryDispatchBuiltin.1("$", z1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc1 then L51() else L50(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L51()
    goto L51_;
  } else {
  // L50(dr2)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr2_;
    goto L50_;
  }

L50_:;
  // r9 = `$`(z3, <sym R.version>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L48(r9)
  // L48(r9)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r9_;
  goto L48_;

L51_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L48(dx2)
  // L48(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L48_;

L52_:;
  // l3 = ld z
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c3 = `is.object`(l3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c3 then L57() else L58(dx7, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L57()
    goto L57_;
  } else {
  // L58(dx7, l3)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L58_;
  }

L53_:;
  // dr4 = tryDispatchBuiltin.1("$", dx3)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc2 then L55() else L54(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L55()
    goto L55_;
  } else {
  // L54(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L54_;
  }

L54_:;
  // r10 = `$`(dx5, <sym platform>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L52(r10)
  // L52(r10)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r10_;
  goto L52_;

L55_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L52(dx6)
  // L52(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L52_;

L56_:;
  // st z = dx13
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // sym1 = ldf nzchar
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base1 = ldf nzchar in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard1 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L57_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l3, dx7)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args44[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args44);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc3 then L59() else L58(dx7, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L59()
    goto L59_;
  } else {
  // L58(dx7, dr6)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L58_;
  }

L58_:;
  // r11 = `$<-`(l5, <sym platform>, dx7)
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args46[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L56(r11)
  // L56(r11)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r11_;
  goto L56_;

L59_:;
  // dx11 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L56(dx11)
  // L56(dx11)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
  goto L56_;

L60_:;
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L62() else D4()
  // L62()
  goto L62_;

L61_:;
  // r12 = dyn base1(<lang `$`(.Platform, r_arch)>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L2_;

D4_:;
  // deopt 20 [_Platform]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L62_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c4 then L64() else L65(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L64()
    goto L64_;
  } else {
  // L65(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L65_;
  }

L63_:;
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r15 = dyn nzchar(dx15)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L67() else D5()
  // L67()
  goto L67_;

L64_:;
  // dr8 = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc4 then L66() else L65(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L66()
    goto L66_;
  } else {
  // L65(dr8)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr8_;
    goto L65_;
  }

L65_:;
  // r14 = `$`(_Platform3, <sym r_arch>)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L63(r14)
  // L63(r14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r14_;
  goto L63_;

L66_:;
  // dx14 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L63(dx14)
  // L63(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L63_;

D5_:;
  // deopt 24 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L2(r15)
  // L2(r15)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L2_;

L68_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L69() else D6()
  // L69()
  goto L69_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // p = prom<V +>{
  //   z4 = ld z;
  //   z5 = force? z4;
  //   checkMissing(z5);
  //   c6 = `is.object`(z5);
  //   if c6 then L1() else L2(z5);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", z5);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(z7):
  //   r16 = `$`(z7, <sym platform>);
  //   goto L0(r16);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_, CCP, RHO);
  // p1 = prom<V +>{
  //   _Platform4 = ld `.Platform`;
  //   _Platform5 = force? _Platform4;
  //   checkMissing(_Platform5);
  //   c7 = `is.object`(_Platform5);
  //   if c7 then L1() else L2(_Platform5);
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("$", _Platform5);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(_Platform7):
  //   r18 = `$`(_Platform7, <sym r_arch>);
  //   goto L0(r18);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_1, CCP, RHO);
  // r20 = dyn paste[, , sep](p, p1, "/")
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args68[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L70() else D7()
  // L70()
  goto L70_;

D7_:;
  // deopt 31 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L70_:;
  // l6 = ld z
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c8 = `is.object`(l6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c8 then L72() else L73(r20, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L72()
    goto L72_;
  } else {
  // L73(r20, l6)
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L73_;
  }

L71_:;
  // st z = dx21
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L4()
  // L4()
  goto L4_;

L72_:;
  // dr14 = tryDispatchBuiltin.0("$<-", l6, r20)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args70);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc7 then L74() else L73(r20, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L74()
    goto L74_;
  } else {
  // L73(r20, dr14)
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr14_;
    goto L73_;
  }

L73_:;
  // r25 = `$<-`(l8, <sym platform>, r20)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L71(r22, r25)
  // L71(r22, r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r25_;
  goto L71_;

L74_:;
  // dx20 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L71(r20, dx20)
  // L71(r20, dx20)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L71_;

D8_:;
  // deopt 38 [8.0, _Machine]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg__Machine;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L76_:;
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if c9 then L78() else L79(8.0, _Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L78()
    goto L78_;
  } else {
  // L79(8.0, _Machine1)
    Rsh_Fir_reg_r28_ = Rsh_const(CCP, 29);
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L79_;
  }

L77_:;
  // r32 = `*`(r30, dx23)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // st sp = r32
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sp = ld sp
  Rsh_Fir_reg_sp = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L81() else D9()
  // L81()
  goto L81_;

L78_:;
  // dr16 = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc8 then L80() else L79(8.0, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L80()
    goto L80_;
  } else {
  // L79(8.0, dr16)
    Rsh_Fir_reg_r28_ = Rsh_const(CCP, 29);
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr16_;
    goto L79_;
  }

L79_:;
  // r31 = `$`(_Machine3, <sym sizeof.pointer>)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L77(r28, r31)
  // L77(r28, r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r31_;
  goto L77_;

L80_:;
  // dx22 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L77(8.0, dx22)
  // L77(8.0, dx22)
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 29);
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L77_;

D9_:;
  // deopt 43 [sp]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_sp;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L81_:;
  // sp1 = force? sp
  Rsh_Fir_reg_sp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sp);
  // checkMissing(sp1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // r33 = `!=`(sp1, 64.0)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sp1_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c10 then L82() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L82()
    goto L82_;
  } else {
  // L5()
    goto L5_;
  }

L82_:;
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L83() else D10()
  // L83()
  goto L83_;

D10_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // p2 = prom<V +>{
  //   z8 = ld z;
  //   z9 = force? z8;
  //   checkMissing(z9);
  //   c11 = `is.object`(z9);
  //   if c11 then L1() else L2(z9);
  // L0(dx25):
  //   return dx25;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("$", z9);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(z11):
  //   r34 = `$`(z11, <sym platform>);
  //   goto L0(r34);
  // L3():
  //   dx24 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx24);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sp2 = ld sp;
  //   sp3 = force? sp2;
  //   checkMissing(sp3);
  //   return sp3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_3, CCP, RHO);
  // r37 = dyn paste1(p2, " (", p3, "-bit)")
  SEXP Rsh_Fir_array_args91[4];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args91[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args91[3] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 4, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L84() else D11()
  // L84()
  goto L84_;

D11_:;
  // deopt 53 [r37]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L84_:;
  // l9 = ld z
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c12 = `is.object`(l9)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c12 then L86() else L87(r37, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L86()
    goto L86_;
  } else {
  // L87(r37, l9)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L87_;
  }

L85_:;
  // st z = dx27
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // goto L6()
  // L6()
  goto L6_;

L86_:;
  // dr20 = tryDispatchBuiltin.0("$<-", l9, r37)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args93);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc10 then L88() else L87(r37, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L88()
    goto L88_;
  } else {
  // L87(r37, dr20)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr20_;
    goto L87_;
  }

L87_:;
  // r42 = `$<-`(l11, <sym platform>, r37)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args95[2] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L85(r39, r42)
  // L85(r39, r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r42_;
  goto L85_;

L88_:;
  // dx26 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L85(r37, dx26)
  // L85(r37, dx26)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L85_;

D12_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L90_:;
  // r44 = dyn Sys_getlocale()
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getlocale, 0, NULL, NULL, CCP, RHO);
  // check L91() else D13()
  // L91()
  goto L91_;

D13_:;
  // deopt 61 [r44]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L91_:;
  // l12 = ld z
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c13 = `is.object`(l12)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c13 then L93() else L94(r44, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L93()
    goto L93_;
  } else {
  // L94(r44, l12)
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L94_;
  }

L92_:;
  // st z = dx29
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // Sys_timezone = ldf `Sys.timezone`
  Rsh_Fir_reg_Sys_timezone = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L96() else D14()
  // L96()
  goto L96_;

L93_:;
  // dr22 = tryDispatchBuiltin.0("$<-", l12, r44)
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args98[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args98);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc11 then L95() else L94(r44, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L95()
    goto L95_;
  } else {
  // L94(r44, dr22)
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr22_;
    goto L94_;
  }

L94_:;
  // r49 = `$<-`(l14, <sym locale>, r44)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args100[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L92(r49)
  // L92(r49)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r49_;
  goto L92_;

L95_:;
  // dx28 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L92(dx28)
  // L92(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L92_;

D14_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L96_:;
  // r50 = dyn Sys_timezone()
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_timezone, 0, NULL, NULL, CCP, RHO);
  // check L97() else D15()
  // L97()
  goto L97_;

D15_:;
  // deopt 67 [r50]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L97_:;
  // l15 = ld z
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c14 = `is.object`(l15)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c14 then L99() else L100(r50, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L99()
    goto L99_;
  } else {
  // L100(r50, l15)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L100_;
  }

L98_:;
  // st z = dx31
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // sym2 = ldf `.Call`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base2 = ldf `.Call` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard2 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L99_:;
  // dr24 = tryDispatchBuiltin.0("$<-", l15, r50)
  SEXP Rsh_Fir_array_args104[3];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args104[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args104);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc12 then L101() else L100(r50, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L101()
    goto L101_;
  } else {
  // L100(r50, dr24)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr24_;
    goto L100_;
  }

L100_:;
  // r55 = `$<-`(l17, <sym tzone>, r50)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L98(r55)
  // L98(r55)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r55_;
  goto L98_;

L101_:;
  // dx30 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L98(dx30)
  // L98(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L98_;

L102_:;
  // C_tzcode_type = ld C_tzcode_type
  Rsh_Fir_reg_C_tzcode_type = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L104() else D16()
  // L104()
  goto L104_;

L103_:;
  // r56 = dyn base2(<sym C_tzcode_type>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L7(r56)
  // L7(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L7_;

D16_:;
  // deopt 72 [C_tzcode_type]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_C_tzcode_type;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L104_:;
  // C_tzcode_type1 = force? C_tzcode_type
  Rsh_Fir_reg_C_tzcode_type1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_tzcode_type);
  // checkMissing(C_tzcode_type1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_C_tzcode_type1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // vargs = dots[]
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 0, NULL, NULL);
  // r58 = `.Call`(C_tzcode_type1, vargs, <missing>)
  SEXP Rsh_Fir_array_args110[3];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_C_tzcode_type1_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args110[2] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L7(r58)
  // L7(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L7_;

L105_:;
  // st z = dx33
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx33_, RHO);
  (void)(Rsh_Fir_reg_dx33_);
  // osVersion = ld osVersion
  Rsh_Fir_reg_osVersion = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L109() else D17()
  // L109()
  goto L109_;

L106_:;
  // dr26 = tryDispatchBuiltin.0("$<-", l18, r57)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args111[2] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args111);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc13 then L108() else L107(r57, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L108()
    goto L108_;
  } else {
  // L107(r57, dr26)
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r57_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_dr26_;
    goto L107_;
  }

L107_:;
  // r63 = `$<-`(l20, <sym tzcode_type>, r57)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args113[2] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L105(r63)
  // L105(r63)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r63_;
  goto L105_;

L108_:;
  // dx32 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L105(dx32)
  // L105(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L105_;

D17_:;
  // deopt 78 [osVersion]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_osVersion;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L109_:;
  // osVersion1 = force? osVersion
  Rsh_Fir_reg_osVersion1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_osVersion);
  // checkMissing(osVersion1)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_osVersion1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // l21 = ld z
  Rsh_Fir_reg_l21_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c16 = `is.object`(l21)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c16 then L111() else L112(osVersion1, l21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L111()
    goto L111_;
  } else {
  // L112(osVersion1, l21)
    Rsh_Fir_reg_osVersion3_ = Rsh_Fir_reg_osVersion1_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l21_;
    goto L112_;
  }

L110_:;
  // st z = dx35
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx35_, RHO);
  (void)(Rsh_Fir_reg_dx35_);
  // RNGkind = ldf RNGkind
  Rsh_Fir_reg_RNGkind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L114() else D18()
  // L114()
  goto L114_;

L111_:;
  // dr28 = tryDispatchBuiltin.0("$<-", l21, osVersion1)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_osVersion1_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args117);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc14 then L113() else L112(osVersion1, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L113()
    goto L113_;
  } else {
  // L112(osVersion1, dr28)
    Rsh_Fir_reg_osVersion3_ = Rsh_Fir_reg_osVersion1_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_dr28_;
    goto L112_;
  }

L112_:;
  // r64 = `$<-`(l23, <sym running>, osVersion1)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_osVersion1_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L110(r64)
  // L110(r64)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r64_;
  goto L110_;

L113_:;
  // dx34 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L110(dx34)
  // L110(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L110_;

D18_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L114_:;
  // r65 = dyn RNGkind()
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_RNGkind, 0, NULL, NULL, CCP, RHO);
  // check L115() else D19()
  // L115()
  goto L115_;

D19_:;
  // deopt 85 [r65]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L115_:;
  // l24 = ld z
  Rsh_Fir_reg_l24_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c17 = `is.object`(l24)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if c17 then L117() else L118(r65, l24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L117()
    goto L117_;
  } else {
  // L118(r65, l24)
    Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r65_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l24_;
    goto L118_;
  }

L116_:;
  // st z = dx37
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx37_, RHO);
  (void)(Rsh_Fir_reg_dx37_);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard3 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L117_:;
  // dr30 = tryDispatchBuiltin.0("$<-", l24, r65)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args123[2] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args123);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // if dc15 then L119() else L118(r65, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L119()
    goto L119_;
  } else {
  // L118(r65, dr30)
    Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r65_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_dr30_;
    goto L118_;
  }

L118_:;
  // r70 = `$<-`(l26, <sym RNGkind>, r65)
  SEXP Rsh_Fir_array_args125[3];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args125[2] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // goto L116(r70)
  // L116(r70)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r70_;
  goto L116_;

L119_:;
  // dx36 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // goto L116(dx36)
  // L116(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L116_;

L120_:;
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L122() else D20()
  // L122()
  goto L122_;

L121_:;
  // r71 = dyn base3(<sym package>)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L8(r71)
  // L8(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L8_;

D20_:;
  // deopt 90 [package1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_package1_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L122_:;
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c18 = `==`(package2, NULL)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_package2_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L8(c18)
  // L8(c18)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_c18_;
  goto L8_;

L123_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L124() else D21()
  // L124()
  goto L124_;

D21_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L124_:;
  // p4 = prom<V +>{
  //   search = ldf search;
  //   r73 = dyn search();
  //   return r73;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_4, CCP, RHO);
  // r75 = dyn grep[, , value]("^package:", p4, TRUE)
  SEXP Rsh_Fir_array_args130[3];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args130[2] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 3, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L125() else D22()
  // L125()
  goto L125_;

D22_:;
  // deopt 99 [r75]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L125_:;
  // st package = r75
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L126() else D23()
  // L126()
  goto L126_;

D23_:;
  // deopt 102 []
  Rsh_Fir_deopt(102, 0, NULL, CCP, RHO);
  return R_NilValue;

L126_:;
  // p5 = prom<V +>{
  //   package3 = ld package;
  //   package4 = force? package3;
  //   checkMissing(package4);
  //   return package4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_5, CCP, RHO);
  // p6 = prom<V +>{
  //   r77 = clos inner2501545716;
  //   return r77;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_6, CCP, RHO);
  // r79 = dyn vapply(p5, p6, NA_LGL)
  SEXP Rsh_Fir_array_args132[3];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args132[2] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L127() else D24()
  // L127()
  goto L127_;

D24_:;
  // deopt 106 [r79]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L127_:;
  // st keep = r79
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // _rmpkg = ldf `.rmpkg`
  Rsh_Fir_reg__rmpkg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L128() else D25()
  // L128()
  goto L128_;

D25_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

L128_:;
  // p7 = prom<V +>{
  //   package5 = ld package;
  //   package6 = force? package5;
  //   checkMissing(package6);
  //   c20 = `is.object`(package6);
  //   if c20 then L1() else L2(package6);
  // L0(dx39):
  //   return dx39;
  // L1():
  //   dr32 = tryDispatchBuiltin.1("[", package6);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L3() else L2(dr32);
  // L2(package8):
  //   keep = ld keep;
  //   keep1 = force? keep;
  //   __ = ldf `[` in base;
  //   r80 = dyn __(package8, keep1);
  //   goto L0(r80);
  // L3():
  //   dx38 = getTryDispatchBuiltinValue(dr32);
  //   goto L0(dx38);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_7, CCP, RHO);
  // r82 = dyn _rmpkg(p7)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__rmpkg, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L129() else D26()
  // L129()
  goto L129_;

D26_:;
  // deopt 111 [r82]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L129_:;
  // st package = r82
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // goto L10()
  // L10()
  goto L10_;

D27_:;
  // deopt 116 []
  Rsh_Fir_deopt(116, 0, NULL, CCP, RHO);
  return R_NilValue;

L131_:;
  // p8 = prom<V +>{
  //   package9 = ld package;
  //   package10 = force? package9;
  //   checkMissing(package10);
  //   return package10;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_8, CCP, RHO);
  // p9 = prom<V +>{
  //   packageDescription = ld packageDescription;
  //   packageDescription1 = force? packageDescription;
  //   checkMissing(packageDescription1);
  //   return packageDescription1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_9, CCP, RHO);
  // r86 = dyn lapply[, , encoding](p8, p9, NA_LGL)
  SEXP Rsh_Fir_array_args142[3];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args142[2] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 3, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L132() else D28()
  // L132()
  goto L132_;

D28_:;
  // deopt 121 [r86]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L132_:;
  // st pkgDesc = r86
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r86_, RHO);
  (void)(Rsh_Fir_reg_r86_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args143);
  // if guard4 then L133() else L134()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L133()
    goto L133_;
  } else {
  // L134()
    goto L134_;
  }

L133_:;
  // package11 = ld package
  Rsh_Fir_reg_package11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L135() else D29()
  // L135()
  goto L135_;

L134_:;
  // r87 = dyn base4(<sym package>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L11(r87)
  // L11(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L11_;

D29_:;
  // deopt 125 [package11]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_package11_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L135_:;
  // package12 = force? package11
  Rsh_Fir_reg_package12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package11_);
  // checkMissing(package12)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_package12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r89 = dyn length(package12)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_package12_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L136() else D30()
  // L136()
  goto L136_;

D30_:;
  // deopt 128 [r89]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L136_:;
  // goto L11(r89)
  // L11(r89)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r89_;
  goto L11_;

L137_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L138() else D31()
  // L138()
  goto L138_;

D31_:;
  // deopt 132 []
  Rsh_Fir_deopt(132, 0, NULL, CCP, RHO);
  return R_NilValue;

L138_:;
  // r91 = dyn stop("no valid packages were specified")
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L139() else D32()
  // L139()
  goto L139_;

D32_:;
  // deopt 134 [r91]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L139_:;
  // goto L13()
  // L13()
  goto L13_;

D33_:;
  // deopt 138 []
  Rsh_Fir_deopt(138, 0, NULL, CCP, RHO);
  return R_NilValue;

L141_:;
  // p10 = prom<V +>{
  //   pkgDesc = ld pkgDesc;
  //   pkgDesc1 = force? pkgDesc;
  //   checkMissing(pkgDesc1);
  //   return pkgDesc1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_10, CCP, RHO);
  // p11 = prom<V +>{
  //   r94 = clos inner2501545716;
  //   return r94;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_11, CCP, RHO);
  // r96 = dyn sapply(p10, p11)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L142() else D34()
  // L142()
  goto L142_;

D34_:;
  // deopt 141 [r96]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L142_:;
  // st basePkgs = r96
  Rsh_Fir_store(Rsh_const(CCP, 61), Rsh_Fir_reg_r96_, RHO);
  (void)(Rsh_Fir_reg_r96_);
  // package13 = ld package
  Rsh_Fir_reg_package13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L143() else D35()
  // L143()
  goto L143_;

D35_:;
  // deopt 143 [package13]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_package13_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L143_:;
  // package14 = force? package13
  Rsh_Fir_reg_package14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package13_);
  // checkMissing(package14)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_package14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(package14)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_package14_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if c22 then L144() else L145(package14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L144()
    goto L144_;
  } else {
  // L145(package14)
    Rsh_Fir_reg_package16_ = Rsh_Fir_reg_package14_;
    goto L145_;
  }

L144_:;
  // dr34 = tryDispatchBuiltin.1("[", package14)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_package14_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args152);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc17 then L146() else L145(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L146()
    goto L146_;
  } else {
  // L145(dr34)
    Rsh_Fir_reg_package16_ = Rsh_Fir_reg_dr34_;
    goto L145_;
  }

L145_:;
  // basePkgs = ld basePkgs
  Rsh_Fir_reg_basePkgs = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // check L147() else D36()
  // L147()
  goto L147_;

L146_:;
  // dx40 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L14(dx40)
  // L14(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L14_;

D36_:;
  // deopt 145 [package16, basePkgs]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_package16_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_basePkgs;
  Rsh_Fir_deopt(145, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L147_:;
  // basePkgs1 = force? basePkgs
  Rsh_Fir_reg_basePkgs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_basePkgs);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r97 = dyn __1(package16, basePkgs1)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_package16_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_basePkgs1_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L14(r97)
  // L14(r97)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r97_;
  goto L14_;

L148_:;
  // st z = dx47
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx47_, RHO);
  (void)(Rsh_Fir_reg_dx47_);
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 62), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args156);
  // if guard5 then L152() else L153()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L152()
    goto L152_;
  } else {
  // L153()
    goto L153_;
  }

L149_:;
  // dr36 = tryDispatchBuiltin.0("$<-", l27, dx41)
  SEXP Rsh_Fir_array_args157[3];
  Rsh_Fir_array_args157[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_args157[2] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args157);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // if dc18 then L151() else L150(dx41, dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L151()
    goto L151_;
  } else {
  // L150(dx41, dr36)
    Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx41_;
    Rsh_Fir_reg_l29_ = Rsh_Fir_reg_dr36_;
    goto L150_;
  }

L150_:;
  // r98 = `$<-`(l29, <sym basePkgs>, dx41)
  SEXP Rsh_Fir_array_args159[3];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args159[2] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // goto L148(r98)
  // L148(r98)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r98_;
  goto L148_;

L151_:;
  // dx45 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // goto L148(dx45)
  // L148(dx45)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx45_;
  goto L148_;

L152_:;
  // basePkgs2 = ld basePkgs
  Rsh_Fir_reg_basePkgs2_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // check L154() else D37()
  // L154()
  goto L154_;

L153_:;
  // r99 = dyn base5(<lang `!`(basePkgs)>)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r99)
  // L15(r99)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L15_;

D37_:;
  // deopt 153 [basePkgs2]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_basePkgs2_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L154_:;
  // basePkgs3 = force? basePkgs2
  Rsh_Fir_reg_basePkgs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_basePkgs2_);
  // checkMissing(basePkgs3)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_basePkgs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // r101 = `!`(basePkgs3)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_basePkgs3_;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 62), RHO);
  // r102 = dyn any(r101)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L155() else D38()
  // L155()
  goto L155_;

D38_:;
  // deopt 157 [r102]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L155_:;
  // goto L15(r102)
  // L15(r102)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r102_;
  goto L15_;

L156_:;
  // pkgDesc2 = ld pkgDesc
  Rsh_Fir_reg_pkgDesc2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L157() else D39()
  // L157()
  goto L157_;

D39_:;
  // deopt 158 [pkgDesc2]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_pkgDesc2_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L157_:;
  // pkgDesc3 = force? pkgDesc2
  Rsh_Fir_reg_pkgDesc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgDesc2_);
  // checkMissing(pkgDesc3)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_pkgDesc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(pkgDesc3)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_pkgDesc3_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if c25 then L158() else L159(pkgDesc3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L158()
    goto L158_;
  } else {
  // L159(pkgDesc3)
    Rsh_Fir_reg_pkgDesc5_ = Rsh_Fir_reg_pkgDesc3_;
    goto L159_;
  }

L158_:;
  // dr38 = tryDispatchBuiltin.1("[", pkgDesc3)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_pkgDesc3_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args167);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // if dc19 then L160() else L159(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L160()
    goto L160_;
  } else {
  // L159(dr38)
    Rsh_Fir_reg_pkgDesc5_ = Rsh_Fir_reg_dr38_;
    goto L159_;
  }

L159_:;
  // basePkgs4 = ld basePkgs
  Rsh_Fir_reg_basePkgs4_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // check L161() else D40()
  // L161()
  goto L161_;

L160_:;
  // dx48 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L17(dx48)
  // L17(dx48)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx48_;
  goto L17_;

D40_:;
  // deopt 160 [pkgDesc5, basePkgs4]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_pkgDesc5_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_basePkgs4_;
  Rsh_Fir_deopt(160, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L161_:;
  // basePkgs5 = force? basePkgs4
  Rsh_Fir_reg_basePkgs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_basePkgs4_);
  // checkMissing(basePkgs5)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_basePkgs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // r103 = `!`(basePkgs5)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_basePkgs5_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r104 = dyn __2(pkgDesc5, r103)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_pkgDesc5_;
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L17(r104)
  // L17(r104)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r104_;
  goto L17_;

L162_:;
  // st z = dx55
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx55_, RHO);
  (void)(Rsh_Fir_reg_dx55_);
  // package17 = ld package
  Rsh_Fir_reg_package17_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L166() else D41()
  // L166()
  goto L166_;

L163_:;
  // dr40 = tryDispatchBuiltin.0("$<-", l30, dx49)
  SEXP Rsh_Fir_array_args173[3];
  Rsh_Fir_array_args173[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_args173[2] = Rsh_Fir_reg_dx49_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args173);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // if dc20 then L165() else L164(dx49, dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L165()
    goto L165_;
  } else {
  // L164(dx49, dr40)
    Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx49_;
    Rsh_Fir_reg_l32_ = Rsh_Fir_reg_dr40_;
    goto L164_;
  }

L164_:;
  // r105 = `$<-`(l32, <sym otherPkgs>, dx49)
  SEXP Rsh_Fir_array_args175[3];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_l32_;
  Rsh_Fir_array_args175[1] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args175[2] = Rsh_Fir_reg_dx49_;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // goto L162(r105)
  // L162(r105)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_r105_;
  goto L162_;

L165_:;
  // dx53 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // goto L162(dx53)
  // L162(dx53)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx53_;
  goto L162_;

D41_:;
  // deopt 167 [package17]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_package17_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L166_:;
  // package18 = force? package17
  Rsh_Fir_reg_package18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package17_);
  // checkMissing(package18)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_package18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(package18)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_package18_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // if c27 then L167() else L168(package18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L167()
    goto L167_;
  } else {
  // L168(package18)
    Rsh_Fir_reg_package20_ = Rsh_Fir_reg_package18_;
    goto L168_;
  }

L167_:;
  // dr42 = tryDispatchBuiltin.1("[", package18)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_package18_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args179);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // if dc21 then L169() else L168(dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L169()
    goto L169_;
  } else {
  // L168(dr42)
    Rsh_Fir_reg_package20_ = Rsh_Fir_reg_dr42_;
    goto L168_;
  }

L168_:;
  // basePkgs6 = ld basePkgs
  Rsh_Fir_reg_basePkgs6_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // check L170() else D42()
  // L170()
  goto L170_;

L169_:;
  // dx56 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx56_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // goto L18(dx56)
  // L18(dx56)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx56_;
  goto L18_;

D42_:;
  // deopt 169 [package20, basePkgs6]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_package20_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_basePkgs6_;
  Rsh_Fir_deopt(169, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L170_:;
  // basePkgs7 = force? basePkgs6
  Rsh_Fir_reg_basePkgs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_basePkgs6_);
  // checkMissing(basePkgs7)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_basePkgs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty()));
  // r106 = `!`(basePkgs7)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_basePkgs7_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r107 = dyn __3(package20, r106)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_package20_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L18(r107)
  // L18(r107)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_r107_;
  goto L18_;

L171_:;
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L175() else D43()
  // L175()
  goto L175_;

L172_:;
  // dr44 = tryDispatchBuiltin.1("$", l33)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_l33_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args185);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if dc22 then L174() else L173(dx57, l33, dx57, dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L174()
    goto L174_;
  } else {
  // L173(dx57, l33, dx57, dr44)
    Rsh_Fir_reg_dx60_ = Rsh_Fir_reg_dx57_;
    Rsh_Fir_reg_l36_ = Rsh_Fir_reg_l33_;
    Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_dx57_;
    Rsh_Fir_reg_l37_ = Rsh_Fir_reg_dr44_;
    goto L173_;
  }

L173_:;
  // r108 = `$`(l37, <sym otherPkgs>)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_l37_;
  Rsh_Fir_array_args187[1] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // goto L171(dx60, l36, dx61, r108)
  // L171(dx60, l36, dx61, r108)
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx60_;
  Rsh_Fir_reg_l39_ = Rsh_Fir_reg_l36_;
  Rsh_Fir_reg_dx66_ = Rsh_Fir_reg_dx61_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_r108_;
  goto L171_;

L174_:;
  // dx64 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx64_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // goto L171(dx57, l33, dx57, dx64)
  // L171(dx57, l33, dx57, dx64)
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx57_;
  Rsh_Fir_reg_l39_ = Rsh_Fir_reg_l33_;
  Rsh_Fir_reg_dx66_ = Rsh_Fir_reg_dx57_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_dx64_;
  goto L171_;

D43_:;
  // deopt 177 [dx65, l39, dx67, dx66]
  SEXP Rsh_Fir_array_deopt_stack31[4];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_dx65_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l39_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_dx67_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_dx66_;
  Rsh_Fir_deopt(177, 4, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L175_:;
  // r109 = dyn names__(dx67, NULL, dx66)
  SEXP Rsh_Fir_array_args189[3];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_dx67_;
  Rsh_Fir_array_args189[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args189[2] = Rsh_Fir_reg_dx66_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L176() else D44()
  // L176()
  goto L176_;

D44_:;
  // deopt 179 [dx65, l39, r109]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_dx65_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l39_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(179, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L176_:;
  // c29 = `is.object`(l39)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_l39_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if c29 then L178() else L179(dx65, l39)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L178()
    goto L178_;
  } else {
  // L179(dx65, l39)
    Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_dx65_;
    Rsh_Fir_reg_l41_ = Rsh_Fir_reg_l39_;
    goto L179_;
  }

L177_:;
  // st z = dx73
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx73_, RHO);
  (void)(Rsh_Fir_reg_dx73_);
  // goto L19()
  // L19()
  goto L19_;

L178_:;
  // dr46 = tryDispatchBuiltin.0("$<-", l39, r109)
  SEXP Rsh_Fir_array_args191[3];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_l39_;
  Rsh_Fir_array_args191[2] = Rsh_Fir_reg_r109_;
  Rsh_Fir_reg_dr46_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args191);
  // dc23 = getTryDispatchBuiltinDispatched(dr46)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dc23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // if dc23 then L180() else L179(dx65, dr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc23_)) {
  // L180()
    goto L180_;
  } else {
  // L179(dx65, dr46)
    Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_dx65_;
    Rsh_Fir_reg_l41_ = Rsh_Fir_reg_dr46_;
    goto L179_;
  }

L179_:;
  // r110 = `$<-`(l41, <sym otherPkgs>, r109)
  SEXP Rsh_Fir_array_args193[3];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_l41_;
  Rsh_Fir_array_args193[1] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args193[2] = Rsh_Fir_reg_r109_;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // goto L177(dx69, r110)
  // L177(dx69, r110)
  Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_dx69_;
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_r110_;
  goto L177_;

L180_:;
  // dx71 = getTryDispatchBuiltinValue(dr46)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // goto L177(dx65, dx71)
  // L177(dx65, dx71)
  Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_dx65_;
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx71_;
  goto L177_;

D45_:;
  // deopt 185 []
  Rsh_Fir_deopt(185, 0, NULL, CCP, RHO);
  return R_NilValue;

L182_:;
  // r111 = dyn loadedNamespaces()
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_loadedNamespaces, 0, NULL, NULL, CCP, RHO);
  // check L183() else D46()
  // L183()
  goto L183_;

D46_:;
  // deopt 186 [r111]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L183_:;
  // st loadedOnly = r111
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r111_, RHO);
  (void)(Rsh_Fir_reg_r111_);
  // loadedOnly = ld loadedOnly
  Rsh_Fir_reg_loadedOnly = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L184() else D47()
  // L184()
  goto L184_;

D47_:;
  // deopt 188 [loadedOnly]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_loadedOnly;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L184_:;
  // loadedOnly1 = force? loadedOnly
  Rsh_Fir_reg_loadedOnly1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loadedOnly);
  // checkMissing(loadedOnly1)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_loadedOnly1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(loadedOnly1)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_loadedOnly1_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // if c30 then L185() else L186(loadedOnly1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L185()
    goto L185_;
  } else {
  // L186(loadedOnly1)
    Rsh_Fir_reg_loadedOnly3_ = Rsh_Fir_reg_loadedOnly1_;
    goto L186_;
  }

L185_:;
  // dr48 = tryDispatchBuiltin.1("[", loadedOnly1)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_loadedOnly1_;
  Rsh_Fir_reg_dr48_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args197);
  // dc24 = getTryDispatchBuiltinDispatched(dr48)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dc24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // if dc24 then L187() else L186(dr48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc24_)) {
  // L187()
    goto L187_;
  } else {
  // L186(dr48)
    Rsh_Fir_reg_loadedOnly3_ = Rsh_Fir_reg_dr48_;
    goto L186_;
  }

L186_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // check L188() else D48()
  // L188()
  goto L188_;

L187_:;
  // dx75 = getTryDispatchBuiltinValue(dr48)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dx75_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty());
  // goto L20(dx75)
  // L20(dx75)
  Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_dx75_;
  goto L20_;

D48_:;
  // deopt 191 [loadedOnly3]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_loadedOnly3_;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L188_:;
  // p12 = prom<V +>{
  //   loadedOnly4 = ld loadedOnly;
  //   loadedOnly5 = force? loadedOnly4;
  //   checkMissing(loadedOnly5);
  //   return loadedOnly5;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_12, CCP, RHO);
  // p13 = prom<V +>{
  //   package21 = ld package;
  //   package22 = force? package21;
  //   checkMissing(package22);
  //   return package22;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_13, CCP, RHO);
  // r114 = dyn _in_(p12, p13)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args202[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L189() else D49()
  // L189()
  goto L189_;

D49_:;
  // deopt 194 [loadedOnly3, r114]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_loadedOnly3_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r114_;
  Rsh_Fir_deopt(194, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L189_:;
  // r115 = `!`(r114)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_r114_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r116 = dyn __4(loadedOnly3, r115)
  SEXP Rsh_Fir_array_args204[2];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_loadedOnly3_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L20(r116)
  // L20(r116)
  Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_r116_;
  goto L20_;

L190_:;
  // loadedOnly6 = ld loadedOnly
  Rsh_Fir_reg_loadedOnly6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L192() else D50()
  // L192()
  goto L192_;

L191_:;
  // r117 = dyn base6(<sym loadedOnly>)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args205, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(r117)
  // L21(r117)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r117_;
  goto L21_;

D50_:;
  // deopt 200 [loadedOnly6]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_loadedOnly6_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L192_:;
  // loadedOnly7 = force? loadedOnly6
  Rsh_Fir_reg_loadedOnly7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loadedOnly6_);
  // checkMissing(loadedOnly7)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_loadedOnly7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r119 = dyn length1(loadedOnly7)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_loadedOnly7_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L193() else D51()
  // L193()
  goto L193_;

D51_:;
  // deopt 203 [r119]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L193_:;
  // goto L21(r119)
  // L21(r119)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r119_;
  goto L21_;

L194_:;
  // loadedOnly8 = ld loadedOnly
  Rsh_Fir_reg_loadedOnly8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L195() else D52()
  // L195()
  goto L195_;

D52_:;
  // deopt 204 [loadedOnly8]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_loadedOnly8_;
  Rsh_Fir_deopt(204, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L195_:;
  // loadedOnly9 = force? loadedOnly8
  Rsh_Fir_reg_loadedOnly9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loadedOnly8_);
  // checkMissing(loadedOnly9)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_loadedOnly9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // l42 = ld loadedOnly
  Rsh_Fir_reg_l42_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L196() else D53()
  // L196()
  goto L196_;

D53_:;
  // deopt 207 [loadedOnly9, l42, loadedOnly9]
  SEXP Rsh_Fir_array_deopt_stack40[3];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_loadedOnly9_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l42_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_loadedOnly9_;
  Rsh_Fir_deopt(207, 3, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L196_:;
  // r120 = dyn names__1(l42, NULL, loadedOnly9)
  SEXP Rsh_Fir_array_args209[3];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_l42_;
  Rsh_Fir_array_args209[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args209[2] = Rsh_Fir_reg_loadedOnly9_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args209, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L197() else D54()
  // L197()
  goto L197_;

D54_:;
  // deopt 209 [loadedOnly9, r120]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_loadedOnly9_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r120_;
  Rsh_Fir_deopt(209, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L197_:;
  // st loadedOnly = r120
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r120_, RHO);
  (void)(Rsh_Fir_reg_r120_);
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args210);
  // if guard7 then L198() else L199()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L198()
    goto L198_;
  } else {
  // L199()
    goto L199_;
  }

L198_:;
  // pkgDesc6 = ld pkgDesc
  Rsh_Fir_reg_pkgDesc6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L200() else D55()
  // L200()
  goto L200_;

L199_:;
  // r121 = dyn base7(<sym pkgDesc>, <lang lapply(loadedOnly, packageDescription, encoding=NA_LGL)>)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args211[1] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L23(r121)
  // L23(r121)
  Rsh_Fir_reg_r122_ = Rsh_Fir_reg_r121_;
  goto L23_;

D55_:;
  // deopt 213 [pkgDesc6]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_pkgDesc6_;
  Rsh_Fir_deopt(213, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L200_:;
  // pkgDesc7 = force? pkgDesc6
  Rsh_Fir_reg_pkgDesc7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgDesc6_);
  // checkMissing(pkgDesc7)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_pkgDesc7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty()));
  // lapply1 = ldf lapply
  Rsh_Fir_reg_lapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L201() else D56()
  // L201()
  goto L201_;

D56_:;
  // deopt 216 []
  Rsh_Fir_deopt(216, 0, NULL, CCP, RHO);
  return R_NilValue;

L201_:;
  // p14 = prom<V +>{
  //   loadedOnly10 = ld loadedOnly;
  //   loadedOnly11 = force? loadedOnly10;
  //   checkMissing(loadedOnly11);
  //   return loadedOnly11;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_14, CCP, RHO);
  // p15 = prom<V +>{
  //   packageDescription2 = ld packageDescription;
  //   packageDescription3 = force? packageDescription2;
  //   checkMissing(packageDescription3);
  //   return packageDescription3;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170925150_15, CCP, RHO);
  // r125 = dyn lapply1[, , encoding](p14, p15, NA_LGL)
  SEXP Rsh_Fir_array_args215[3];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args215[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args215[2] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply1_, 3, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L202() else D57()
  // L202()
  goto L202_;

D57_:;
  // deopt 221 [r125]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_deopt(221, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L202_:;
  // c32 = ldf c in base
  Rsh_Fir_reg_c32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r126 = dyn c32(pkgDesc7, r125)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_pkgDesc7_;
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c32_, 2, Rsh_Fir_array_args216, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L203() else D58()
  // L203()
  goto L203_;

D58_:;
  // deopt 223 [r126]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_deopt(223, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L203_:;
  // goto L23(r126)
  // L23(r126)
  Rsh_Fir_reg_r122_ = Rsh_Fir_reg_r126_;
  goto L23_;

D59_:;
  // deopt 225 [pkgDesc8]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_pkgDesc8_;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L204_:;
  // pkgDesc9 = force? pkgDesc8
  Rsh_Fir_reg_pkgDesc9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgDesc8_);
  // checkMissing(pkgDesc9)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_pkgDesc9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty()));
  // c33 = `is.object`(pkgDesc9)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_pkgDesc9_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // if c33 then L205() else L206(pkgDesc9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L205()
    goto L205_;
  } else {
  // L206(pkgDesc9)
    Rsh_Fir_reg_pkgDesc11_ = Rsh_Fir_reg_pkgDesc9_;
    goto L206_;
  }

L205_:;
  // dr50 = tryDispatchBuiltin.1("[", pkgDesc9)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_pkgDesc9_;
  Rsh_Fir_reg_dr50_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args219);
  // dc25 = getTryDispatchBuiltinDispatched(dr50)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dc25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // if dc25 then L207() else L206(dr50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc25_)) {
  // L207()
    goto L207_;
  } else {
  // L206(dr50)
    Rsh_Fir_reg_pkgDesc11_ = Rsh_Fir_reg_dr50_;
    goto L206_;
  }

L206_:;
  // loadedOnly12 = ld loadedOnly
  Rsh_Fir_reg_loadedOnly12_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L208() else D60()
  // L208()
  goto L208_;

L207_:;
  // dx77 = getTryDispatchBuiltinValue(dr50)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dx77_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty());
  // goto L24(dx77)
  // L24(dx77)
  Rsh_Fir_reg_dx78_ = Rsh_Fir_reg_dx77_;
  goto L24_;

D60_:;
  // deopt 227 [pkgDesc11, loadedOnly12]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_pkgDesc11_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_loadedOnly12_;
  Rsh_Fir_deopt(227, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L208_:;
  // loadedOnly13 = force? loadedOnly12
  Rsh_Fir_reg_loadedOnly13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loadedOnly12_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r127 = dyn __5(pkgDesc11, loadedOnly13)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_pkgDesc11_;
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_loadedOnly13_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args222, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L24(r127)
  // L24(r127)
  Rsh_Fir_reg_dx78_ = Rsh_Fir_reg_r127_;
  goto L24_;

L209_:;
  // st z = dx84
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx84_, RHO);
  (void)(Rsh_Fir_reg_dx84_);
  // goto L25()
  // L25()
  goto L25_;

L210_:;
  // dr52 = tryDispatchBuiltin.0("$<-", l43, dx78)
  SEXP Rsh_Fir_array_args223[3];
  Rsh_Fir_array_args223[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_l43_;
  Rsh_Fir_array_args223[2] = Rsh_Fir_reg_dx78_;
  Rsh_Fir_reg_dr52_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args223);
  // dc26 = getTryDispatchBuiltinDispatched(dr52)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dc26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty());
  // if dc26 then L212() else L211(dx78, dr52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc26_)) {
  // L212()
    goto L212_;
  } else {
  // L211(dx78, dr52)
    Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_dx78_;
    Rsh_Fir_reg_l45_ = Rsh_Fir_reg_dr52_;
    goto L211_;
  }

L211_:;
  // r128 = `$<-`(l45, <sym loadedOnly>, dx78)
  SEXP Rsh_Fir_array_args225[3];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_l45_;
  Rsh_Fir_array_args225[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args225[2] = Rsh_Fir_reg_dx78_;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L209(dx80, r128)
  // L209(dx80, r128)
  Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_dx80_;
  Rsh_Fir_reg_dx84_ = Rsh_Fir_reg_r128_;
  goto L209_;

L212_:;
  // dx82 = getTryDispatchBuiltinValue(dr52)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dx82_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // goto L209(dx78, dx82)
  // L209(dx78, dx82)
  Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_dx78_;
  Rsh_Fir_reg_dx84_ = Rsh_Fir_reg_dx82_;
  goto L209_;

L214_:;
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L216() else D61()
  // L216()
  goto L216_;

L215_:;
  // r129 = dyn base8(<lang options("matprod")>)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L26(r129)
  // L26(r129)
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r129_;
  goto L26_;

D61_:;
  // deopt 238 []
  Rsh_Fir_deopt(238, 0, NULL, CCP, RHO);
  return R_NilValue;

L216_:;
  // r131 = dyn options("matprod")
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args228, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L217() else D62()
  // L217()
  goto L217_;

D62_:;
  // deopt 240 [r131]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r131_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L217_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r132 = dyn as_character(r131)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args229, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L218() else D63()
  // L218()
  goto L218_;

D63_:;
  // deopt 242 [r132]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_deopt(242, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L218_:;
  // goto L26(r132)
  // L26(r132)
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r132_;
  goto L26_;

L219_:;
  // st z = dx87
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx87_, RHO);
  (void)(Rsh_Fir_reg_dx87_);
  // extSoftVersion = ldf extSoftVersion
  Rsh_Fir_reg_extSoftVersion = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // check L223() else D64()
  // L223()
  goto L223_;

L220_:;
  // dr54 = tryDispatchBuiltin.0("$<-", l46, r130)
  SEXP Rsh_Fir_array_args230[3];
  Rsh_Fir_array_args230[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_l46_;
  Rsh_Fir_array_args230[2] = Rsh_Fir_reg_r130_;
  Rsh_Fir_reg_dr54_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args230);
  // dc27 = getTryDispatchBuiltinDispatched(dr54)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dc27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if dc27 then L222() else L221(r130, dr54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc27_)) {
  // L222()
    goto L222_;
  } else {
  // L221(r130, dr54)
    Rsh_Fir_reg_r134_ = Rsh_Fir_reg_r130_;
    Rsh_Fir_reg_l48_ = Rsh_Fir_reg_dr54_;
    goto L221_;
  }

L221_:;
  // r137 = `$<-`(l48, <sym matprod>, r130)
  SEXP Rsh_Fir_array_args232[3];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_l48_;
  Rsh_Fir_array_args232[1] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args232[2] = Rsh_Fir_reg_r130_;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // goto L219(r137)
  // L219(r137)
  Rsh_Fir_reg_dx87_ = Rsh_Fir_reg_r137_;
  goto L219_;

L222_:;
  // dx86 = getTryDispatchBuiltinValue(dr54)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dx86_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // goto L219(dx86)
  // L219(dx86)
  Rsh_Fir_reg_dx87_ = Rsh_Fir_reg_dx86_;
  goto L219_;

D64_:;
  // deopt 247 []
  Rsh_Fir_deopt(247, 0, NULL, CCP, RHO);
  return R_NilValue;

L223_:;
  // r138 = dyn extSoftVersion()
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_extSoftVersion, 0, NULL, NULL, CCP, RHO);
  // check L224() else D65()
  // L224()
  goto L224_;

D65_:;
  // deopt 248 [r138]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_deopt(248, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L224_:;
  // st es = r138
  Rsh_Fir_store(Rsh_const(CCP, 74), Rsh_Fir_reg_r138_, RHO);
  (void)(Rsh_Fir_reg_r138_);
  // es = ld es
  Rsh_Fir_reg_es = Rsh_Fir_load(Rsh_const(CCP, 74), RHO);
  // check L225() else D66()
  // L225()
  goto L225_;

D66_:;
  // deopt 250 [es]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_es;
  Rsh_Fir_deopt(250, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L225_:;
  // es1 = force? es
  Rsh_Fir_reg_es1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_es);
  // checkMissing(es1)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_es1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(es1)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_es1_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // if c36 then L226() else L227(es1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L226()
    goto L226_;
  } else {
  // L227(es1)
    Rsh_Fir_reg_es3_ = Rsh_Fir_reg_es1_;
    goto L227_;
  }

L226_:;
  // dr56 = tryDispatchBuiltin.1("[[", es1)
  SEXP Rsh_Fir_array_args236[2];
  Rsh_Fir_array_args236[0] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args236[1] = Rsh_Fir_reg_es1_;
  Rsh_Fir_reg_dr56_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args236);
  // dc28 = getTryDispatchBuiltinDispatched(dr56)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dc28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty());
  // if dc28 then L228() else L227(dr56)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc28_)) {
  // L228()
    goto L228_;
  } else {
  // L227(dr56)
    Rsh_Fir_reg_es3_ = Rsh_Fir_reg_dr56_;
    goto L227_;
  }

L227_:;
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r139 = dyn __6(es3, "BLAS")
  SEXP Rsh_Fir_array_args238[2];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_es3_;
  Rsh_Fir_array_args238[1] = Rsh_const(CCP, 77);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L27(r139)
  // L27(r139)
  Rsh_Fir_reg_dx89_ = Rsh_Fir_reg_r139_;
  goto L27_;

L228_:;
  // dx88 = getTryDispatchBuiltinValue(dr56)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dx88_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty());
  // goto L27(dx88)
  // L27(dx88)
  Rsh_Fir_reg_dx89_ = Rsh_Fir_reg_dx88_;
  goto L27_;

L229_:;
  // st z = dx95
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx95_, RHO);
  (void)(Rsh_Fir_reg_dx95_);
  // La_library = ldf La_library
  Rsh_Fir_reg_La_library = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 78), RHO);
  // check L233() else D67()
  // L233()
  goto L233_;

L230_:;
  // dr58 = tryDispatchBuiltin.0("$<-", l49, dx89)
  SEXP Rsh_Fir_array_args240[3];
  Rsh_Fir_array_args240[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args240[1] = Rsh_Fir_reg_l49_;
  Rsh_Fir_array_args240[2] = Rsh_Fir_reg_dx89_;
  Rsh_Fir_reg_dr58_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args240);
  // dc29 = getTryDispatchBuiltinDispatched(dr58)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dc29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty());
  // if dc29 then L232() else L231(dx89, dr58)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc29_)) {
  // L232()
    goto L232_;
  } else {
  // L231(dx89, dr58)
    Rsh_Fir_reg_dx91_ = Rsh_Fir_reg_dx89_;
    Rsh_Fir_reg_l51_ = Rsh_Fir_reg_dr58_;
    goto L231_;
  }

L231_:;
  // r140 = `$<-`(l51, <sym BLAS>, dx89)
  SEXP Rsh_Fir_array_args242[3];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_l51_;
  Rsh_Fir_array_args242[1] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args242[2] = Rsh_Fir_reg_dx89_;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty());
  // goto L229(r140)
  // L229(r140)
  Rsh_Fir_reg_dx95_ = Rsh_Fir_reg_r140_;
  goto L229_;

L232_:;
  // dx93 = getTryDispatchBuiltinValue(dr58)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dx93_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args243, Rsh_Fir_param_types_empty());
  // goto L229(dx93)
  // L229(dx93)
  Rsh_Fir_reg_dx95_ = Rsh_Fir_reg_dx93_;
  goto L229_;

D67_:;
  // deopt 259 []
  Rsh_Fir_deopt(259, 0, NULL, CCP, RHO);
  return R_NilValue;

L233_:;
  // r141 = dyn La_library()
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_library, 0, NULL, NULL, CCP, RHO);
  // check L234() else D68()
  // L234()
  goto L234_;

D68_:;
  // deopt 260 [r141]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(260, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L234_:;
  // l52 = ld z
  Rsh_Fir_reg_l52_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c38 = `is.object`(l52)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_l52_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty());
  // if c38 then L236() else L237(r141, l52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L236()
    goto L236_;
  } else {
  // L237(r141, l52)
    Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r141_;
    Rsh_Fir_reg_l54_ = Rsh_Fir_reg_l52_;
    goto L237_;
  }

L235_:;
  // st z = dx97
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx97_, RHO);
  (void)(Rsh_Fir_reg_dx97_);
  // La_version = ldf La_version
  Rsh_Fir_reg_La_version = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // check L239() else D69()
  // L239()
  goto L239_;

L236_:;
  // dr60 = tryDispatchBuiltin.0("$<-", l52, r141)
  SEXP Rsh_Fir_array_args245[3];
  Rsh_Fir_array_args245[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args245[1] = Rsh_Fir_reg_l52_;
  Rsh_Fir_array_args245[2] = Rsh_Fir_reg_r141_;
  Rsh_Fir_reg_dr60_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args245);
  // dc30 = getTryDispatchBuiltinDispatched(dr60)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_dr60_;
  Rsh_Fir_reg_dc30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty());
  // if dc30 then L238() else L237(r141, dr60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc30_)) {
  // L238()
    goto L238_;
  } else {
  // L237(r141, dr60)
    Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r141_;
    Rsh_Fir_reg_l54_ = Rsh_Fir_reg_dr60_;
    goto L237_;
  }

L237_:;
  // r146 = `$<-`(l54, <sym LAPACK>, r141)
  SEXP Rsh_Fir_array_args247[3];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_l54_;
  Rsh_Fir_array_args247[1] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args247[2] = Rsh_Fir_reg_r141_;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty());
  // goto L235(r146)
  // L235(r146)
  Rsh_Fir_reg_dx97_ = Rsh_Fir_reg_r146_;
  goto L235_;

L238_:;
  // dx96 = getTryDispatchBuiltinValue(dr60)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_dr60_;
  Rsh_Fir_reg_dx96_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty());
  // goto L235(dx96)
  // L235(dx96)
  Rsh_Fir_reg_dx97_ = Rsh_Fir_reg_dx96_;
  goto L235_;

D69_:;
  // deopt 265 []
  Rsh_Fir_deopt(265, 0, NULL, CCP, RHO);
  return R_NilValue;

L239_:;
  // r147 = dyn La_version()
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_version, 0, NULL, NULL, CCP, RHO);
  // check L240() else D70()
  // L240()
  goto L240_;

D70_:;
  // deopt 266 [r147]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r147_;
  Rsh_Fir_deopt(266, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L240_:;
  // l55 = ld z
  Rsh_Fir_reg_l55_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c39 = `is.object`(l55)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_l55_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty());
  // if c39 then L242() else L243(r147, l55)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L242()
    goto L242_;
  } else {
  // L243(r147, l55)
    Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r147_;
    Rsh_Fir_reg_l57_ = Rsh_Fir_reg_l55_;
    goto L243_;
  }

L241_:;
  // st z = dx99
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx99_, RHO);
  (void)(Rsh_Fir_reg_dx99_);
  // l10n_info = ldf l10n_info
  Rsh_Fir_reg_l10n_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // check L245() else D71()
  // L245()
  goto L245_;

L242_:;
  // dr62 = tryDispatchBuiltin.0("$<-", l55, r147)
  SEXP Rsh_Fir_array_args250[3];
  Rsh_Fir_array_args250[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args250[1] = Rsh_Fir_reg_l55_;
  Rsh_Fir_array_args250[2] = Rsh_Fir_reg_r147_;
  Rsh_Fir_reg_dr62_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args250);
  // dc31 = getTryDispatchBuiltinDispatched(dr62)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_dr62_;
  Rsh_Fir_reg_dc31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty());
  // if dc31 then L244() else L243(r147, dr62)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc31_)) {
  // L244()
    goto L244_;
  } else {
  // L243(r147, dr62)
    Rsh_Fir_reg_r149_ = Rsh_Fir_reg_r147_;
    Rsh_Fir_reg_l57_ = Rsh_Fir_reg_dr62_;
    goto L243_;
  }

L243_:;
  // r152 = `$<-`(l57, <sym LA_version>, r147)
  SEXP Rsh_Fir_array_args252[3];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_l57_;
  Rsh_Fir_array_args252[1] = Rsh_const(CCP, 83);
  Rsh_Fir_array_args252[2] = Rsh_Fir_reg_r147_;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty());
  // goto L241(r152)
  // L241(r152)
  Rsh_Fir_reg_dx99_ = Rsh_Fir_reg_r152_;
  goto L241_;

L244_:;
  // dx98 = getTryDispatchBuiltinValue(dr62)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_dr62_;
  Rsh_Fir_reg_dx98_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty());
  // goto L241(dx98)
  // L241(dx98)
  Rsh_Fir_reg_dx99_ = Rsh_Fir_reg_dx98_;
  goto L241_;

D71_:;
  // deopt 271 []
  Rsh_Fir_deopt(271, 0, NULL, CCP, RHO);
  return R_NilValue;

L245_:;
  // r153 = dyn l10n_info()
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_l10n_info, 0, NULL, NULL, CCP, RHO);
  // check L246() else D72()
  // L246()
  goto L246_;

D72_:;
  // deopt 272 [r153]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r153_;
  Rsh_Fir_deopt(272, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L246_:;
  // st l10n = r153
  Rsh_Fir_store(Rsh_const(CCP, 84), Rsh_Fir_reg_r153_, RHO);
  (void)(Rsh_Fir_reg_r153_);
  // sym9 = ldf `is.null`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base9 = ldf `is.null` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args254[2];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args254[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args254);
  // if guard9 then L247() else L248()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L247()
    goto L247_;
  } else {
  // L248()
    goto L248_;
  }

L247_:;
  // l10n = ld l10n
  Rsh_Fir_reg_l10n = Rsh_Fir_load(Rsh_const(CCP, 84), RHO);
  // check L249() else D73()
  // L249()
  goto L249_;

L248_:;
  // r154 = dyn base9(<lang `[[`(l10n, "system.codepage")>)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args255, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L28(r154)
  // L28(r154)
  Rsh_Fir_reg_r155_ = Rsh_Fir_reg_r154_;
  goto L28_;

D73_:;
  // deopt 275 [l10n]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_l10n;
  Rsh_Fir_deopt(275, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L249_:;
  // l10n1 = force? l10n
  Rsh_Fir_reg_l10n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l10n);
  // checkMissing(l10n1)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_l10n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty()));
  // c40 = `is.object`(l10n1)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_l10n1_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty());
  // if c40 then L250() else L251(l10n1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L250()
    goto L250_;
  } else {
  // L251(l10n1)
    Rsh_Fir_reg_l10n3_ = Rsh_Fir_reg_l10n1_;
    goto L251_;
  }

L250_:;
  // dr64 = tryDispatchBuiltin.1("[[", l10n1)
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args258[1] = Rsh_Fir_reg_l10n1_;
  Rsh_Fir_reg_dr64_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args258);
  // dc32 = getTryDispatchBuiltinDispatched(dr64)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_dr64_;
  Rsh_Fir_reg_dc32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty());
  // if dc32 then L252() else L251(dr64)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc32_)) {
  // L252()
    goto L252_;
  } else {
  // L251(dr64)
    Rsh_Fir_reg_l10n3_ = Rsh_Fir_reg_dr64_;
    goto L251_;
  }

L251_:;
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r156 = dyn __7(l10n3, "system.codepage")
  SEXP Rsh_Fir_array_args260[2];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_l10n3_;
  Rsh_Fir_array_args260[1] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args260, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L29(r156)
  // L29(r156)
  Rsh_Fir_reg_dx101_ = Rsh_Fir_reg_r156_;
  goto L29_;

L252_:;
  // dx100 = getTryDispatchBuiltinValue(dr64)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_dr64_;
  Rsh_Fir_reg_dx100_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty());
  // goto L29(dx100)
  // L29(dx100)
  Rsh_Fir_reg_dx101_ = Rsh_Fir_reg_dx100_;
  goto L29_;

L253_:;
  // l10n4 = ld l10n
  Rsh_Fir_reg_l10n4_ = Rsh_Fir_load(Rsh_const(CCP, 84), RHO);
  // check L254() else D74()
  // L254()
  goto L254_;

D74_:;
  // deopt 282 [l10n4]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_l10n4_;
  Rsh_Fir_deopt(282, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L254_:;
  // l10n5 = force? l10n4
  Rsh_Fir_reg_l10n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l10n4_);
  // checkMissing(l10n5)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_l10n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args262, Rsh_Fir_param_types_empty()));
  // c43 = `is.object`(l10n5)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_l10n5_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty());
  // if c43 then L255() else L256(l10n5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L255()
    goto L255_;
  } else {
  // L256(l10n5)
    Rsh_Fir_reg_l10n7_ = Rsh_Fir_reg_l10n5_;
    goto L256_;
  }

L255_:;
  // dr66 = tryDispatchBuiltin.1("[[", l10n5)
  SEXP Rsh_Fir_array_args264[2];
  Rsh_Fir_array_args264[0] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args264[1] = Rsh_Fir_reg_l10n5_;
  Rsh_Fir_reg_dr66_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args264);
  // dc33 = getTryDispatchBuiltinDispatched(dr66)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_dr66_;
  Rsh_Fir_reg_dc33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty());
  // if dc33 then L257() else L256(dr66)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc33_)) {
  // L257()
    goto L257_;
  } else {
  // L256(dr66)
    Rsh_Fir_reg_l10n7_ = Rsh_Fir_reg_dr66_;
    goto L256_;
  }

L256_:;
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r158 = dyn __8(l10n7, "system.codepage")
  SEXP Rsh_Fir_array_args266[2];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_l10n7_;
  Rsh_Fir_array_args266[1] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r158_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args266, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L31(r158)
  // L31(r158)
  Rsh_Fir_reg_dx103_ = Rsh_Fir_reg_r158_;
  goto L31_;

L257_:;
  // dx102 = getTryDispatchBuiltinValue(dr66)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_dr66_;
  Rsh_Fir_reg_dx102_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty());
  // goto L31(dx102)
  // L31(dx102)
  Rsh_Fir_reg_dx103_ = Rsh_Fir_reg_dx102_;
  goto L31_;

L258_:;
  // st z = dx109
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx109_, RHO);
  (void)(Rsh_Fir_reg_dx109_);
  // goto L32()
  // L32()
  goto L32_;

L259_:;
  // dr68 = tryDispatchBuiltin.0("$<-", l58, dx103)
  SEXP Rsh_Fir_array_args268[3];
  Rsh_Fir_array_args268[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args268[1] = Rsh_Fir_reg_l58_;
  Rsh_Fir_array_args268[2] = Rsh_Fir_reg_dx103_;
  Rsh_Fir_reg_dr68_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args268);
  // dc34 = getTryDispatchBuiltinDispatched(dr68)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_dr68_;
  Rsh_Fir_reg_dc34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty());
  // if dc34 then L261() else L260(dx103, dr68)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc34_)) {
  // L261()
    goto L261_;
  } else {
  // L260(dx103, dr68)
    Rsh_Fir_reg_dx105_ = Rsh_Fir_reg_dx103_;
    Rsh_Fir_reg_l60_ = Rsh_Fir_reg_dr68_;
    goto L260_;
  }

L260_:;
  // r159 = `$<-`(l60, <sym system.codepage>, dx103)
  SEXP Rsh_Fir_array_args270[3];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_l60_;
  Rsh_Fir_array_args270[1] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args270[2] = Rsh_Fir_reg_dx103_;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty());
  // goto L258(dx105, r159)
  // L258(dx105, r159)
  Rsh_Fir_reg_dx108_ = Rsh_Fir_reg_dx105_;
  Rsh_Fir_reg_dx109_ = Rsh_Fir_reg_r159_;
  goto L258_;

L261_:;
  // dx107 = getTryDispatchBuiltinValue(dr68)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_dr68_;
  Rsh_Fir_reg_dx107_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args271, Rsh_Fir_param_types_empty());
  // goto L258(dx103, dx107)
  // L258(dx103, dx107)
  Rsh_Fir_reg_dx108_ = Rsh_Fir_reg_dx103_;
  Rsh_Fir_reg_dx109_ = Rsh_Fir_reg_dx107_;
  goto L258_;

L263_:;
  // l10n8 = ld l10n
  Rsh_Fir_reg_l10n8_ = Rsh_Fir_load(Rsh_const(CCP, 84), RHO);
  // check L265() else D75()
  // L265()
  goto L265_;

L264_:;
  // r160 = dyn base10(<lang `[[`(l10n, "codepage")>)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args272, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L33(r160)
  // L33(r160)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r160_;
  goto L33_;

D75_:;
  // deopt 293 [l10n8]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_l10n8_;
  Rsh_Fir_deopt(293, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L265_:;
  // l10n9 = force? l10n8
  Rsh_Fir_reg_l10n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l10n8_);
  // checkMissing(l10n9)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_l10n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(l10n9)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_l10n9_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty());
  // if c45 then L266() else L267(l10n9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L266()
    goto L266_;
  } else {
  // L267(l10n9)
    Rsh_Fir_reg_l10n11_ = Rsh_Fir_reg_l10n9_;
    goto L267_;
  }

L266_:;
  // dr70 = tryDispatchBuiltin.1("[[", l10n9)
  SEXP Rsh_Fir_array_args275[2];
  Rsh_Fir_array_args275[0] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args275[1] = Rsh_Fir_reg_l10n9_;
  Rsh_Fir_reg_dr70_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args275);
  // dc35 = getTryDispatchBuiltinDispatched(dr70)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_dr70_;
  Rsh_Fir_reg_dc35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty());
  // if dc35 then L268() else L267(dr70)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc35_)) {
  // L268()
    goto L268_;
  } else {
  // L267(dr70)
    Rsh_Fir_reg_l10n11_ = Rsh_Fir_reg_dr70_;
    goto L267_;
  }

L267_:;
  // __9 = ldf `[[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r162 = dyn __9(l10n11, "codepage")
  SEXP Rsh_Fir_array_args277[2];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_l10n11_;
  Rsh_Fir_array_args277[1] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L34(r162)
  // L34(r162)
  Rsh_Fir_reg_dx112_ = Rsh_Fir_reg_r162_;
  goto L34_;

L268_:;
  // dx111 = getTryDispatchBuiltinValue(dr70)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_dr70_;
  Rsh_Fir_reg_dx111_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty());
  // goto L34(dx111)
  // L34(dx111)
  Rsh_Fir_reg_dx112_ = Rsh_Fir_reg_dx111_;
  goto L34_;

L269_:;
  // l10n12 = ld l10n
  Rsh_Fir_reg_l10n12_ = Rsh_Fir_load(Rsh_const(CCP, 84), RHO);
  // check L270() else D76()
  // L270()
  goto L270_;

D76_:;
  // deopt 300 [l10n12]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_l10n12_;
  Rsh_Fir_deopt(300, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L270_:;
  // l10n13 = force? l10n12
  Rsh_Fir_reg_l10n13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l10n12_);
  // checkMissing(l10n13)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_l10n13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty()));
  // c48 = `is.object`(l10n13)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_l10n13_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty());
  // if c48 then L271() else L272(l10n13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L271()
    goto L271_;
  } else {
  // L272(l10n13)
    Rsh_Fir_reg_l10n15_ = Rsh_Fir_reg_l10n13_;
    goto L272_;
  }

L271_:;
  // dr72 = tryDispatchBuiltin.1("[[", l10n13)
  SEXP Rsh_Fir_array_args281[2];
  Rsh_Fir_array_args281[0] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args281[1] = Rsh_Fir_reg_l10n13_;
  Rsh_Fir_reg_dr72_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args281);
  // dc36 = getTryDispatchBuiltinDispatched(dr72)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_dr72_;
  Rsh_Fir_reg_dc36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty());
  // if dc36 then L273() else L272(dr72)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc36_)) {
  // L273()
    goto L273_;
  } else {
  // L272(dr72)
    Rsh_Fir_reg_l10n15_ = Rsh_Fir_reg_dr72_;
    goto L272_;
  }

L272_:;
  // __10 = ldf `[[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r164 = dyn __10(l10n15, "codepage")
  SEXP Rsh_Fir_array_args283[2];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_l10n15_;
  Rsh_Fir_array_args283[1] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args283, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L36(r164)
  // L36(r164)
  Rsh_Fir_reg_dx114_ = Rsh_Fir_reg_r164_;
  goto L36_;

L273_:;
  // dx113 = getTryDispatchBuiltinValue(dr72)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_dr72_;
  Rsh_Fir_reg_dx113_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty());
  // goto L36(dx113)
  // L36(dx113)
  Rsh_Fir_reg_dx114_ = Rsh_Fir_reg_dx113_;
  goto L36_;

L274_:;
  // st z = dx120
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx120_, RHO);
  (void)(Rsh_Fir_reg_dx120_);
  // goto L37()
  // L37()
  goto L37_;

L275_:;
  // dr74 = tryDispatchBuiltin.0("$<-", l61, dx114)
  SEXP Rsh_Fir_array_args285[3];
  Rsh_Fir_array_args285[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args285[1] = Rsh_Fir_reg_l61_;
  Rsh_Fir_array_args285[2] = Rsh_Fir_reg_dx114_;
  Rsh_Fir_reg_dr74_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args285);
  // dc37 = getTryDispatchBuiltinDispatched(dr74)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_dr74_;
  Rsh_Fir_reg_dc37_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args286, Rsh_Fir_param_types_empty());
  // if dc37 then L277() else L276(dx114, dr74)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc37_)) {
  // L277()
    goto L277_;
  } else {
  // L276(dx114, dr74)
    Rsh_Fir_reg_dx116_ = Rsh_Fir_reg_dx114_;
    Rsh_Fir_reg_l63_ = Rsh_Fir_reg_dr74_;
    goto L276_;
  }

L276_:;
  // r165 = `$<-`(l63, <sym codepage>, dx114)
  SEXP Rsh_Fir_array_args287[3];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_l63_;
  Rsh_Fir_array_args287[1] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args287[2] = Rsh_Fir_reg_dx114_;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty());
  // goto L274(dx116, r165)
  // L274(dx116, r165)
  Rsh_Fir_reg_dx119_ = Rsh_Fir_reg_dx116_;
  Rsh_Fir_reg_dx120_ = Rsh_Fir_reg_r165_;
  goto L274_;

L277_:;
  // dx118 = getTryDispatchBuiltinValue(dr74)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_dr74_;
  Rsh_Fir_reg_dx118_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args288, Rsh_Fir_param_types_empty());
  // goto L274(dx114, dx118)
  // L274(dx114, dx118)
  Rsh_Fir_reg_dx119_ = Rsh_Fir_reg_dx114_;
  Rsh_Fir_reg_dx120_ = Rsh_Fir_reg_dx118_;
  goto L274_;

D77_:;
  // deopt 313 ["sessionInfo", l64, "sessionInfo"]
  SEXP Rsh_Fir_array_deopt_stack58[3];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_l64_;
  Rsh_Fir_array_deopt_stack58[2] = Rsh_const(CCP, 91);
  Rsh_Fir_deopt(313, 3, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L279_:;
  // r166 = dyn class__(l64, NULL, "sessionInfo")
  SEXP Rsh_Fir_array_args289[3];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_l64_;
  Rsh_Fir_array_args289[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args289[2] = Rsh_const(CCP, 91);
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args289, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L280() else D78()
  // L280()
  goto L280_;

D78_:;
  // deopt 315 ["sessionInfo", r166]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_r166_;
  Rsh_Fir_deopt(315, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L280_:;
  // st z = r166
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r166_, RHO);
  (void)(Rsh_Fir_reg_r166_);
  // z12 = ld z
  Rsh_Fir_reg_z12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L281() else D79()
  // L281()
  goto L281_;

D79_:;
  // deopt 317 [z12]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_z12_;
  Rsh_Fir_deopt(317, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L281_:;
  // z13 = force? z12
  Rsh_Fir_reg_z13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z12_);
  // checkMissing(z13)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_z13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z13
  return Rsh_Fir_reg_z13_;
}
SEXP Rsh_Fir_user_promise_inner170925150_(SEXP CCP, SEXP RHO) {
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(z5)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(z5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(z5)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_z5_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", z5)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // r16 = `$`(z7, <sym platform>)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r16_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner170925150_1(SEXP CCP, SEXP RHO) {
  // _Platform4 = ld `.Platform`
  Rsh_Fir_reg__Platform4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // _Platform5 = force? _Platform4
  Rsh_Fir_reg__Platform5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform4_);
  // checkMissing(_Platform5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg__Platform5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(_Platform5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg__Platform5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c7 then L1() else L2(_Platform5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L1()
    goto L1_;
  } else {
  // L2(_Platform5)
    Rsh_Fir_reg__Platform7_ = Rsh_Fir_reg__Platform5_;
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("$", _Platform5)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg__Platform5_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg__Platform7_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // r18 = `$`(_Platform7, <sym r_arch>)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg__Platform7_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r18_;
  goto L0_;

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner170925150_2(SEXP CCP, SEXP RHO) {
  // z8 = ld z
  Rsh_Fir_reg_z8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // z9 = force? z8
  Rsh_Fir_reg_z9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z8_);
  // checkMissing(z9)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_z9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(z9)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c11 then L1() else L2(z9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(z9)
    Rsh_Fir_reg_z11_ = Rsh_Fir_reg_z9_;
    goto L2_;
  }

L0_:;
  // return dx25
  return Rsh_Fir_reg_dx25_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("$", z9)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_z11_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // r34 = `$`(z11, <sym platform>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_z11_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r34_;
  goto L0_;

L3_:;
  // dx24 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L0(dx24)
  // L0(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner170925150_3(SEXP CCP, SEXP RHO) {
  // sp2 = ld sp
  Rsh_Fir_reg_sp2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // sp3 = force? sp2
  Rsh_Fir_reg_sp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sp2_);
  // checkMissing(sp3)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return sp3
  return Rsh_Fir_reg_sp3_;
}
SEXP Rsh_Fir_user_promise_inner170925150_4(SEXP CCP, SEXP RHO) {
  // search = ldf search
  Rsh_Fir_reg_search = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // r73 = dyn search()
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search, 0, NULL, NULL, CCP, RHO);
  // return r73
  return Rsh_Fir_reg_r73_;
}
SEXP Rsh_Fir_user_promise_inner170925150_5(SEXP CCP, SEXP RHO) {
  // package3 = ld package
  Rsh_Fir_reg_package3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // package4 = force? package3
  Rsh_Fir_reg_package4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package3_);
  // checkMissing(package4)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_package4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // return package4
  return Rsh_Fir_reg_package4_;
}
SEXP Rsh_Fir_user_promise_inner170925150_6(SEXP CCP, SEXP RHO) {
  // r77 = clos inner2501545716
  Rsh_Fir_reg_r77_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // return r77
  return Rsh_Fir_reg_r77_;
}
SEXP Rsh_Fir_user_promise_inner170925150_7(SEXP CCP, SEXP RHO) {
  // package5 = ld package
  Rsh_Fir_reg_package5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // package6 = force? package5
  Rsh_Fir_reg_package6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package5_);
  // checkMissing(package6)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_package6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(package6)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_package6_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if c20 then L1() else L2(package6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L1()
    goto L1_;
  } else {
  // L2(package6)
    Rsh_Fir_reg_package8_ = Rsh_Fir_reg_package6_;
    goto L2_;
  }

L0_:;
  // return dx39
  return Rsh_Fir_reg_dx39_;

L1_:;
  // dr32 = tryDispatchBuiltin.1("[", package6)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_package6_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc16 then L3() else L2(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr32)
    Rsh_Fir_reg_package8_ = Rsh_Fir_reg_dr32_;
    goto L2_;
  }

L2_:;
  // keep = ld keep
  Rsh_Fir_reg_keep = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // keep1 = force? keep
  Rsh_Fir_reg_keep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r80 = dyn __(package8, keep1)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_package8_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_keep1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r80)
  // L0(r80)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r80_;
  goto L0_;

L3_:;
  // dx38 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L0(dx38)
  // L0(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner170925150_8(SEXP CCP, SEXP RHO) {
  // package9 = ld package
  Rsh_Fir_reg_package9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // package10 = force? package9
  Rsh_Fir_reg_package10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package9_);
  // checkMissing(package10)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_package10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // return package10
  return Rsh_Fir_reg_package10_;
}
SEXP Rsh_Fir_user_promise_inner170925150_9(SEXP CCP, SEXP RHO) {
  // packageDescription = ld packageDescription
  Rsh_Fir_reg_packageDescription = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // packageDescription1 = force? packageDescription
  Rsh_Fir_reg_packageDescription1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packageDescription);
  // checkMissing(packageDescription1)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_packageDescription1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // return packageDescription1
  return Rsh_Fir_reg_packageDescription1_;
}
SEXP Rsh_Fir_user_promise_inner170925150_10(SEXP CCP, SEXP RHO) {
  // pkgDesc = ld pkgDesc
  Rsh_Fir_reg_pkgDesc = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // pkgDesc1 = force? pkgDesc
  Rsh_Fir_reg_pkgDesc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgDesc);
  // checkMissing(pkgDesc1)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_pkgDesc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return pkgDesc1
  return Rsh_Fir_reg_pkgDesc1_;
}
SEXP Rsh_Fir_user_promise_inner170925150_11(SEXP CCP, SEXP RHO) {
  // r94 = clos inner2501545716
  Rsh_Fir_reg_r94_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // return r94
  return Rsh_Fir_reg_r94_;
}
SEXP Rsh_Fir_user_promise_inner170925150_12(SEXP CCP, SEXP RHO) {
  // loadedOnly4 = ld loadedOnly
  Rsh_Fir_reg_loadedOnly4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // loadedOnly5 = force? loadedOnly4
  Rsh_Fir_reg_loadedOnly5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loadedOnly4_);
  // checkMissing(loadedOnly5)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_loadedOnly5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // return loadedOnly5
  return Rsh_Fir_reg_loadedOnly5_;
}
SEXP Rsh_Fir_user_promise_inner170925150_13(SEXP CCP, SEXP RHO) {
  // package21 = ld package
  Rsh_Fir_reg_package21_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // package22 = force? package21
  Rsh_Fir_reg_package22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package21_);
  // checkMissing(package22)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_package22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // return package22
  return Rsh_Fir_reg_package22_;
}
SEXP Rsh_Fir_user_promise_inner170925150_14(SEXP CCP, SEXP RHO) {
  // loadedOnly10 = ld loadedOnly
  Rsh_Fir_reg_loadedOnly10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // loadedOnly11 = force? loadedOnly10
  Rsh_Fir_reg_loadedOnly11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loadedOnly10_);
  // checkMissing(loadedOnly11)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_loadedOnly11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty()));
  // return loadedOnly11
  return Rsh_Fir_reg_loadedOnly11_;
}
SEXP Rsh_Fir_user_promise_inner170925150_15(SEXP CCP, SEXP RHO) {
  // packageDescription2 = ld packageDescription
  Rsh_Fir_reg_packageDescription2_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // packageDescription3 = force? packageDescription2
  Rsh_Fir_reg_packageDescription3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_packageDescription2_);
  // checkMissing(packageDescription3)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_packageDescription3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // return packageDescription3
  return Rsh_Fir_reg_packageDescription3_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_c5_1;  // c5
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_c8_1;  // c8
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_c11_1;  // c11
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_as_environment;  // as_environment
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_c12_1;  // c12
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_c13_1;  // c13
  SEXP Rsh_Fir_reg_c14_1;  // c14

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 92), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 92), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c1
  return Rsh_Fir_reg_c1_1;

L1_:;
  // r9 = `!`(r2)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_c13_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty());
  // c14 = `||`(c5, c13)
  SEXP Rsh_Fir_array_args293[2];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_c5_1;
  Rsh_Fir_array_args293[1] = Rsh_Fir_reg_c13_1;
  Rsh_Fir_reg_c14_1 = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty());
  // goto L0(c14)
  // L0(c14)
  Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c14_1;
  goto L0_;

L2_:;
  // c12 = `==`(r4, NULL)
  SEXP Rsh_Fir_array_args294[2];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args294[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c12_1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty());
  // goto L1(c8, c12)
  // L1(c8, c12)
  Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c8_1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_c12_1;
  goto L1_;

L3_:;
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 93), RHO);
  // r8 = dyn attr(r6, "path")
  SEXP Rsh_Fir_array_args295[2];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args295[1] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args295, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L4_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args296[1];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args296, Rsh_Fir_param_types_empty()));
  // r = `==`(x2, "package:base")
  SEXP Rsh_Fir_array_args297[2];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args297[1] = Rsh_const(CCP, 95);
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty());
  // if c then L0(c) else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L0(c)
    Rsh_Fir_reg_c1_1 = Rsh_Fir_reg_c1;
    goto L0_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args299[2];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args299[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args299);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 93), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args300[2];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args300[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args300);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // r1 = dyn base(<lang attr(as.environment(x), "path")>)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_const(CCP, 96);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args301, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L1(c, r1)
  // L1(c, r1)
  Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_1;
  goto L1_;

L8_:;
  // sym2 = ldf `as.environment`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 97), RHO);
  // base2 = ldf `as.environment` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args302[2];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args302[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args302);
  // if guard2 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L9_:;
  // r3 = dyn base1(<lang as.environment(x)>, "path")
  SEXP Rsh_Fir_array_args303[2];
  Rsh_Fir_array_args303[0] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args303[1] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args303, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L2(c, r3)
  // L2(c, r3)
  Rsh_Fir_reg_c8_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_1;
  goto L2_;

L10_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 92), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

L11_:;
  // r5 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_const(CCP, 92);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args304, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L3(c, r5)
  // L3(c, r5)
  Rsh_Fir_reg_c11_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_1;
  goto L3_;

D1_:;
  // deopt 9 [c, x3]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L12_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // r7 = dyn as_environment(x4)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args306, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 12 [c, r7]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L3(c, r7)
  // L3(c, r7)
  Rsh_Fir_reg_c11_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

D3_:;
  // deopt 15 [c11, r8]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_c11_1;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L2(c11, r8)
  // L2(c11, r8)
  Rsh_Fir_reg_c8_1 = Rsh_Fir_reg_c11_1;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r8_1;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
