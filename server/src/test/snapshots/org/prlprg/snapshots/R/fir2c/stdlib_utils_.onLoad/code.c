#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4001578419_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4001578419_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4001578419_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4001578419_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner4001578419
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4001578419_, RHO, CCP);
  // st `.onLoad` = r
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
SEXP Rsh_Fir_user_function_inner4001578419_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4001578419 dynamic dispatch ([libname, pkgname])

  return Rsh_Fir_user_version_inner4001578419_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4001578419_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4001578419 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4001578419/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_libname;  // libname
  SEXP Rsh_Fir_reg_pkgname;  // pkgname
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_Sys_getenv;  // Sys_getenv
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_tryCatch;  // tryCatch
  SEXP Rsh_Fir_reg__get_repositories;  // _get_repositories
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_identity;  // identity
  SEXP Rsh_Fir_reg_identity1_;  // identity1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_reposdf;  // reposdf
  SEXP Rsh_Fir_reg_reposdf1_;  // reposdf1
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_character1_;  // character1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_reposdf2_;  // reposdf2
  SEXP Rsh_Fir_reg_reposdf3_;  // reposdf3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_reposdf5_;  // reposdf5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_reposdf6_;  // reposdf6
  SEXP Rsh_Fir_reg_reposdf7_;  // reposdf7
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_reposdf10_;  // reposdf10
  SEXP Rsh_Fir_reg_reposdf11_;  // reposdf11
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_reposdf14_;  // reposdf14
  SEXP Rsh_Fir_reg_reposdf15_;  // reposdf15
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_reposdf17_;  // reposdf17
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_row_names;  // row_names
  SEXP Rsh_Fir_reg_reposdf18_;  // reposdf18
  SEXP Rsh_Fir_reg_reposdf19_;  // reposdf19
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_repos;  // repos
  SEXP Rsh_Fir_reg_repos1_;  // repos1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_repos2_;  // repos2
  SEXP Rsh_Fir_reg_repos3_;  // repos3
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_strOptions;  // strOptions
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_defaultUserAgent;  // defaultUserAgent
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_repos4_;  // repos4
  SEXP Rsh_Fir_reg_repos5_;  // repos5
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg__Platform4_;  // _Platform4
  SEXP Rsh_Fir_reg__Platform5_;  // _Platform5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg__Platform7_;  // _Platform7
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_Sys_getenv1_;  // Sys_getenv1
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg__Platform8_;  // _Platform8
  SEXP Rsh_Fir_reg__Platform9_;  // _Platform9
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg__Platform11_;  // _Platform11
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_commandArgs;  // commandArgs
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg__Platform12_;  // _Platform12
  SEXP Rsh_Fir_reg__Platform13_;  // _Platform13
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg__Platform15_;  // _Platform15
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_askYesNoWinDialog;  // askYesNoWinDialog
  SEXP Rsh_Fir_reg_askYesNoWinDialog1_;  // askYesNoWinDialog1
  SEXP Rsh_Fir_reg_askYesNoWinDialog2_;  // askYesNoWinDialog2
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_Sys_getenv2_;  // Sys_getenv2
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_Sys_getenv3_;  // Sys_getenv3
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_list2_;  // list2
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_op_utils;  // op_utils
  SEXP Rsh_Fir_reg_op_utils1_;  // op_utils1
  SEXP Rsh_Fir_reg_extra;  // extra
  SEXP Rsh_Fir_reg_extra1_;  // extra1
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_op_utils2_;  // op_utils2
  SEXP Rsh_Fir_reg_op_utils3_;  // op_utils3
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg__Options;  // _Options
  SEXP Rsh_Fir_reg__Options1_;  // _Options1
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_toset;  // toset
  SEXP Rsh_Fir_reg_toset1_;  // toset1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_op_utils4_;  // op_utils4
  SEXP Rsh_Fir_reg_op_utils5_;  // op_utils5
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_op_utils7_;  // op_utils7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_toset2_;  // toset2
  SEXP Rsh_Fir_reg_toset3_;  // toset3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_sys_function;  // sys_function
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_assign;  // assign
  SEXP Rsh_Fir_reg__osVersion;  // _osVersion
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_ns;  // ns
  SEXP Rsh_Fir_reg_ns1_;  // ns1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r98_;  // r98

  // Bind parameters
  Rsh_Fir_reg_libname = PARAMS[0];
  Rsh_Fir_reg_pkgname = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st libname = libname
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_libname, RHO);
  (void)(Rsh_Fir_reg_libname);
  // st pkgname = pkgname
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_pkgname, RHO);
  (void)(Rsh_Fir_reg_pkgname);
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L36() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L36()
    goto L36_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // tryCatch = ldf tryCatch
  Rsh_Fir_reg_tryCatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L40() else D5()
  // L40()
  goto L40_;

L2_:;
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard6 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L3_:;
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L46() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L46()
    goto L46_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // reposdf2 = ld reposdf
  Rsh_Fir_reg_reposdf2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L50() else D11()
  // L50()
  goto L50_;

L5_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L6_:;
  // st reposdf = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // reposdf14 = ld reposdf
  Rsh_Fir_reg_reposdf14_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L59() else D13()
  // L59()
  goto L59_;

L7_:;
  // c5 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c5 then L78() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L78()
    goto L78_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r29 = dyn is_na(r24)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L77() else D21()
  // L77()
  goto L77_;

L9_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r28 = dyn match("CRAN", r26, NA_INT, NULL)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L76() else D20()
  // L76()
  goto L76_;

L10_:;
  // goto L2()
  // L2()
  goto L2_;

L11_:;
  // st repos = r31
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // goto L2()
  // L2()
  goto L2_;

L12_:;
  // st `op.utils` = r34
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // _Platform4 = ld `.Platform`
  Rsh_Fir_reg__Platform4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L102() else D32()
  // L102()
  goto L102_;

L13_:;
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L89() else D25()
  // L89()
  goto L89_;

L14_:;
  // goto L15("source")
  // L15("source")
  Rsh_Fir_reg_r40_ = Rsh_const(CCP, 15);
  goto L15_;

L15_:;
  // strOptions = ldf strOptions
  Rsh_Fir_reg_strOptions = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L96() else D26()
  // L96()
  goto L96_;

L16_:;
  // goto L18()
  // L18()
  goto L18_;

L17_:;
  // st `op.utils` = dx11
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // _Platform8 = ld `.Platform`
  Rsh_Fir_reg__Platform8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L114() else D35()
  // L114()
  goto L114_;

L19_:;
  // sym10 = ldf list
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base10 = ldf list in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard10 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L20_:;
  // goto L26(r56)
  // L26(r56)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r56_;
  goto L26_;

L21_:;
  // c15 = `as.logical`(r58)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c15 then L127() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L127()
    goto L127_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L23("notepad")
  // L23("notepad")
  Rsh_Fir_reg_r63_ = Rsh_const(CCP, 17);
  goto L23_;

L23_:;
  // _Platform12 = ld `.Platform`
  Rsh_Fir_reg__Platform12_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L129() else D39()
  // L129()
  goto L129_;

L24_:;
  // goto L25(NULL)
  // L25(NULL)
  Rsh_Fir_reg_askYesNoWinDialog2_ = Rsh_const(CCP, 11);
  goto L25_;

L25_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r66 = dyn list1("internal", r63, askYesNoWinDialog2)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_askYesNoWinDialog2_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L137() else D41()
  // L137()
  goto L137_;

L26_:;
  // st extra = r67
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard11 then L146() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L146()
    goto L146_;
  } else {
  // L147()
    goto L147_;
  }

L27_:;
  // st `op.utils` = r73
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L151() else D50()
  // L151()
  goto L151_;

L28_:;
  // c19 = `as.logical`(r86)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c19 then L157() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L157()
    goto L157_;
  } else {
  // L29()
    goto L29_;
  }

L29_:;
  // goto L30()
  // L30()
  goto L30_;

L30_:;
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L161() else D56()
  // L161()
  goto L161_;

L31_:;
  // Sys_getenv = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L33() else D0()
  // L33()
  goto L33_;

L32_:;
  // r = dyn base(<lang Sys.getenv("R_REPOSITORIES")>, "NULL")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r2 = dyn Sys_getenv("R_REPOSITORIES")
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L34() else D1()
  // L34()
  goto L34_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L34_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r3 = dyn identical(r2, "NULL", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args15[9];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args15[6] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args15[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args15[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names5[9];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

D2_:;
  // deopt 15 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L36_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L37() else D3()
  // L37()
  goto L37_;

D3_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // r4 = dyn character()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L38() else D4()
  // L38()
  goto L38_;

D4_:;
  // deopt 18 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L38_:;
  // st repos = r4
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // goto L2()
  // L2()
  goto L2_;

D5_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p = prom<V +>{
  //   _get_repositories = ldf `.get_repositories`;
  //   r6 = dyn _get_repositories();
  //   return r6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_, CCP, RHO);
  // p1 = prom<V +>{
  //   identity = ld identity;
  //   identity1 = force? identity;
  //   checkMissing(identity1);
  //   return identity1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_1, CCP, RHO);
  // r9 = dyn tryCatch[, error](p, p1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tryCatch, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

D6_:;
  // deopt 25 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L41_:;
  // st reposdf = r9
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // reposdf = ld reposdf
  Rsh_Fir_reg_reposdf = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

L43_:;
  // r10 = dyn base1(<sym reposdf>, "error")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L3_;

D7_:;
  // deopt 29 [reposdf]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_reposdf;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L44_:;
  // reposdf1 = force? reposdf
  Rsh_Fir_reg_reposdf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reposdf);
  // checkMissing(reposdf1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_reposdf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r12 = dyn inherits(reposdf1, "error", FALSE)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_reposdf1_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

D8_:;
  // deopt 34 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L3_;

L46_:;
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L47() else D9()
  // L47()
  goto L47_;

D9_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // r13 = dyn character1()
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 0, NULL, NULL, CCP, RHO);
  // check L48() else D10()
  // L48()
  goto L48_;

D10_:;
  // deopt 37 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L48_:;
  // st repos = r13
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // goto L5()
  // L5()
  goto L5_;

D11_:;
  // deopt 39 [reposdf2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_reposdf2_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L50_:;
  // reposdf3 = force? reposdf2
  Rsh_Fir_reg_reposdf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reposdf2_);
  // checkMissing(reposdf3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_reposdf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(reposdf3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_reposdf3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c2 then L51() else L52(reposdf3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L51()
    goto L51_;
  } else {
  // L52(reposdf3)
    Rsh_Fir_reg_reposdf5_ = Rsh_Fir_reg_reposdf3_;
    goto L52_;
  }

L51_:;
  // dr = tryDispatchBuiltin.1("[", reposdf3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_reposdf3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L53() else L52(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr)
    Rsh_Fir_reg_reposdf5_ = Rsh_Fir_reg_dr;
    goto L52_;
  }

L52_:;
  // reposdf6 = ld reposdf
  Rsh_Fir_reg_reposdf6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L54() else D12()
  // L54()
  goto L54_;

L53_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D12_:;
  // deopt 41 [reposdf5, reposdf6]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_reposdf5_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_reposdf6_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L54_:;
  // reposdf7 = force? reposdf6
  Rsh_Fir_reg_reposdf7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reposdf6_);
  // checkMissing(reposdf7)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_reposdf7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(reposdf7)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_reposdf7_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c3 then L56() else L57(reposdf5, reposdf7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L56()
    goto L56_;
  } else {
  // L57(reposdf5, reposdf7)
    Rsh_Fir_reg_reposdf10_ = Rsh_Fir_reg_reposdf5_;
    Rsh_Fir_reg_reposdf11_ = Rsh_Fir_reg_reposdf7_;
    goto L57_;
  }

L55_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r16 = dyn __(reposdf3, dx3, <missing>)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_reposdf3_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L6_;

L56_:;
  // dr2 = tryDispatchBuiltin.1("$", reposdf7)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_reposdf7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc1 then L58() else L57(reposdf5, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L58()
    goto L58_;
  } else {
  // L57(reposdf5, dr2)
    Rsh_Fir_reg_reposdf10_ = Rsh_Fir_reg_reposdf5_;
    Rsh_Fir_reg_reposdf11_ = Rsh_Fir_reg_dr2_;
    goto L57_;
  }

L57_:;
  // r15 = `$`(reposdf11, <sym default>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_reposdf11_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L55(r15)
  // L55(r15)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L55_;

L58_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L55(dx2)
  // L55(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L55_;

D13_:;
  // deopt 48 [reposdf14]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_reposdf14_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L59_:;
  // reposdf15 = force? reposdf14
  Rsh_Fir_reg_reposdf15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reposdf14_);
  // checkMissing(reposdf15)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_reposdf15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(reposdf15)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_reposdf15_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c4 then L61() else L62(reposdf15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L61()
    goto L61_;
  } else {
  // L62(reposdf15)
    Rsh_Fir_reg_reposdf17_ = Rsh_Fir_reg_reposdf15_;
    goto L62_;
  }

L60_:;
  // st repos = dx5
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // row_names = ldf `row.names`
  Rsh_Fir_reg_row_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L64() else D14()
  // L64()
  goto L64_;

L61_:;
  // dr4 = tryDispatchBuiltin.1("$", reposdf15)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_reposdf15_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc2 then L63() else L62(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L63()
    goto L63_;
  } else {
  // L62(dr4)
    Rsh_Fir_reg_reposdf17_ = Rsh_Fir_reg_dr4_;
    goto L62_;
  }

L62_:;
  // r17 = `$`(reposdf17, <sym URL>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_reposdf17_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L60(r17)
  // L60(r17)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r17_;
  goto L60_;

L63_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L60(dx4)
  // L60(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L60_;

D14_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L64_:;
  // p2 = prom<V +>{
  //   reposdf18 = ld reposdf;
  //   reposdf19 = force? reposdf18;
  //   checkMissing(reposdf19);
  //   return reposdf19;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_2, CCP, RHO);
  // r19 = dyn row_names(p2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_row_names, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L65() else D15()
  // L65()
  goto L65_;

D15_:;
  // deopt 55 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L65_:;
  // l = ld repos
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L66() else D16()
  // L66()
  goto L66_;

D16_:;
  // deopt 57 [r19, l, r19]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(57, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L66_:;
  // r20 = dyn names__(l, NULL, r19)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

D17_:;
  // deopt 59 [r19, r20]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L67_:;
  // st repos = r20
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // goto L5()
  // L5()
  goto L5_;

L68_:;
  // sym3 = ldf match
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf match in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard3 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L69_:;
  // r21 = dyn base2(<lang match("CRAN", names(repos))>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L7_;

L70_:;
  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard4 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L71_:;
  // r23 = dyn base3("CRAN", <lang names(repos)>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L8_;

L72_:;
  // repos = ld repos
  Rsh_Fir_reg_repos = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L74() else D18()
  // L74()
  goto L74_;

L73_:;
  // r25 = dyn base4(<sym repos>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L9_;

D18_:;
  // deopt 68 [repos]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_repos;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L74_:;
  // repos1 = force? repos
  Rsh_Fir_reg_repos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repos);
  // checkMissing(repos1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_repos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r27 = dyn names(repos1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_repos1_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L75() else D19()
  // L75()
  goto L75_;

D19_:;
  // deopt 71 [r27]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L9(r27)
  // L9(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L9_;

D20_:;
  // deopt 75 [r28]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L8(r28)
  // L8(r28)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r28_;
  goto L8_;

D21_:;
  // deopt 77 [r29]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L7(r29)
  // L7(r29)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r29_;
  goto L7_;

L78_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard5 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L79_:;
  // repos2 = ld repos
  Rsh_Fir_reg_repos2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L81() else D22()
  // L81()
  goto L81_;

L80_:;
  // r30 = dyn base5[CRAN, ]("@CRAN@", <sym repos>)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(r30)
  // L11(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L11_;

D22_:;
  // deopt 82 [repos2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_repos2_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L81_:;
  // repos3 = force? repos2
  Rsh_Fir_reg_repos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repos2_);
  // checkMissing(repos3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_repos3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r32 = dyn c6("@CRAN@", repos3)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_repos3_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L82() else D23()
  // L82()
  goto L82_;

D23_:;
  // deopt 85 [r32]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L11(r32)
  // L11(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L11_;

L84_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard7 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L85_:;
  // r33 = dyn base6[`help.try.all.packages`, `help.search.types`, `citation.bibtex.max`, `internet.info`, pkgType, str, `demo.ask`, `example.ask`, HTTPUserAgent, `menu.graphics`, mailer, repos](FALSE, <lang c("vignette", "demo", "help")>, 1, 2, <lang if(`!=`(`$`(.Platform, pkgType), "source"), "both", "source")>, <lang strOptions()>, "default", "default", <lang defaultUserAgent()>, TRUE, "mailto", <sym repos>)
  SEXP Rsh_Fir_array_args55[12];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args55[2] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args55[3] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args55[4] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args55[5] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args55[6] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args55[7] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args55[8] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args55[9] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args55[10] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args55[11] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names18[12];
  Rsh_Fir_array_arg_names18[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 57);
  Rsh_Fir_array_arg_names18[2] = Rsh_const(CCP, 58);
  Rsh_Fir_array_arg_names18[3] = Rsh_const(CCP, 59);
  Rsh_Fir_array_arg_names18[4] = Rsh_const(CCP, 60);
  Rsh_Fir_array_arg_names18[5] = Rsh_const(CCP, 61);
  Rsh_Fir_array_arg_names18[6] = Rsh_const(CCP, 62);
  Rsh_Fir_array_arg_names18[7] = Rsh_const(CCP, 63);
  Rsh_Fir_array_arg_names18[8] = Rsh_const(CCP, 64);
  Rsh_Fir_array_arg_names18[9] = Rsh_const(CCP, 65);
  Rsh_Fir_array_arg_names18[10] = Rsh_const(CCP, 66);
  Rsh_Fir_array_arg_names18[11] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 12, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L12_;

L86_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r37 = dyn c7("vignette", "demo", "help")
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 3, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L88() else D24()
  // L88()
  goto L88_;

L87_:;
  // r35 = dyn base7("vignette", "demo", "help")
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L13(r35)
  // L13(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L13_;

D24_:;
  // deopt 99 [r37]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L13(r37)
  // L13(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L13_;

D25_:;
  // deopt 105 [_Platform]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L89_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c8 then L91() else L92(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L91()
    goto L91_;
  } else {
  // L92(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L92_;
  }

L90_:;
  // r39 = `!=`(dx7, "source")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c9 then L94() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L94()
    goto L94_;
  } else {
  // L14()
    goto L14_;
  }

L91_:;
  // dr6 = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args62);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc3 then L93() else L92(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L93()
    goto L93_;
  } else {
  // L92(dr6)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr6_;
    goto L92_;
  }

L92_:;
  // r38 = `$`(_Platform3, <sym pkgType>)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L90(r38)
  // L90(r38)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r38_;
  goto L90_;

L93_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L90(dx6)
  // L90(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L90_;

L94_:;
  // goto L15("both")
  // L15("both")
  Rsh_Fir_reg_r40_ = Rsh_const(CCP, 70);
  goto L15_;

D26_:;
  // deopt 116 []
  Rsh_Fir_deopt(116, 0, NULL, CCP, RHO);
  return R_NilValue;

L96_:;
  // r41 = dyn strOptions()
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strOptions, 0, NULL, NULL, CCP, RHO);
  // check L97() else D27()
  // L97()
  goto L97_;

D27_:;
  // deopt 117 [r41]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L97_:;
  // defaultUserAgent = ldf defaultUserAgent
  Rsh_Fir_reg_defaultUserAgent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // check L98() else D28()
  // L98()
  goto L98_;

D28_:;
  // deopt 124 []
  Rsh_Fir_deopt(124, 0, NULL, CCP, RHO);
  return R_NilValue;

L98_:;
  // r42 = dyn defaultUserAgent()
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_defaultUserAgent, 0, NULL, NULL, CCP, RHO);
  // check L99() else D29()
  // L99()
  goto L99_;

D29_:;
  // deopt 125 [r42]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L99_:;
  // repos4 = ld repos
  Rsh_Fir_reg_repos4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L100() else D30()
  // L100()
  goto L100_;

D30_:;
  // deopt 131 [repos4]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_repos4_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L100_:;
  // repos5 = force? repos4
  Rsh_Fir_reg_repos5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repos4_);
  // checkMissing(repos5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_repos5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r43 = dyn list(FALSE, r36, 1, 2, r40, r41, "default", "default", r42, TRUE, "mailto", repos5)
  SEXP Rsh_Fir_array_args67[12];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args67[3] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args67[4] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args67[5] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args67[6] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args67[7] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args67[8] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args67[9] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args67[10] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args67[11] = Rsh_Fir_reg_repos5_;
  SEXP Rsh_Fir_array_arg_names21[12];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_array_arg_names21[5] = R_MissingArg;
  Rsh_Fir_array_arg_names21[6] = R_MissingArg;
  Rsh_Fir_array_arg_names21[7] = R_MissingArg;
  Rsh_Fir_array_arg_names21[8] = R_MissingArg;
  Rsh_Fir_array_arg_names21[9] = R_MissingArg;
  Rsh_Fir_array_arg_names21[10] = R_MissingArg;
  Rsh_Fir_array_arg_names21[11] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 12, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L101() else D31()
  // L101()
  goto L101_;

D31_:;
  // deopt 135 [r43]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L12(r43)
  // L12(r43)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r43_;
  goto L12_;

D32_:;
  // deopt 137 [_Platform4]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg__Platform4_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L102_:;
  // _Platform5 = force? _Platform4
  Rsh_Fir_reg__Platform5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform4_);
  // checkMissing(_Platform5)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg__Platform5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(_Platform5)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg__Platform5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c10 then L104() else L105(_Platform5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L104()
    goto L104_;
  } else {
  // L105(_Platform5)
    Rsh_Fir_reg__Platform7_ = Rsh_Fir_reg__Platform5_;
    goto L105_;
  }

L103_:;
  // r45 = `!=`(dx9, "source")
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c11 then L107() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L107()
    goto L107_;
  } else {
  // L16()
    goto L16_;
  }

L104_:;
  // dr8 = tryDispatchBuiltin.1("$", _Platform5)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg__Platform5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc4 then L106() else L105(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L106()
    goto L106_;
  } else {
  // L105(dr8)
    Rsh_Fir_reg__Platform7_ = Rsh_Fir_reg_dr8_;
    goto L105_;
  }

L105_:;
  // r44 = `$`(_Platform7, <sym pkgType>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg__Platform7_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L103(r44)
  // L103(r44)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r44_;
  goto L103_;

L106_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L103(dx8)
  // L103(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L103_;

L107_:;
  // Sys_getenv1 = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L108() else D33()
  // L108()
  goto L108_;

D33_:;
  // deopt 143 []
  Rsh_Fir_deopt(143, 0, NULL, CCP, RHO);
  return R_NilValue;

L108_:;
  // r46 = dyn Sys_getenv1("R_COMPILE_AND_INSTALL_PACKAGES", "interactive")
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 73);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv1_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L109() else D34()
  // L109()
  goto L109_;

D34_:;
  // deopt 146 [r46]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L109_:;
  // l1 = ld `op.utils`
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c12 = `is.object`(l1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c12 then L110() else L111(r46, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L110()
    goto L110_;
  } else {
  // L111(r46, l1)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r46_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L111_;
  }

L110_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", l1, r46)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args78);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc5 then L112() else L111(r46, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L112()
    goto L112_;
  } else {
  // L111(r46, dr10)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r46_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr10_;
    goto L111_;
  }

L111_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 75), RHO);
  // r51 = dyn ____(l3, r46, "install.packages.compile.from.source")
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L17(r48, r51)
  // L17(r48, r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r51_;
  goto L17_;

L112_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L17(r46, dx10)
  // L17(r46, dx10)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L17_;

D35_:;
  // deopt 154 [_Platform8]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg__Platform8_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L114_:;
  // _Platform9 = force? _Platform8
  Rsh_Fir_reg__Platform9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform8_);
  // checkMissing(_Platform9)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg__Platform9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(_Platform9)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg__Platform9_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c13 then L116() else L117(_Platform9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L116()
    goto L116_;
  } else {
  // L117(_Platform9)
    Rsh_Fir_reg__Platform11_ = Rsh_Fir_reg__Platform9_;
    goto L117_;
  }

L115_:;
  // r54 = `==`(dx13, "windows")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c14 then L119() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L119()
    goto L119_;
  } else {
  // L19()
    goto L19_;
  }

L116_:;
  // dr12 = tryDispatchBuiltin.1("$", _Platform9)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg__Platform9_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc6 then L118() else L117(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L118()
    goto L118_;
  } else {
  // L117(dr12)
    Rsh_Fir_reg__Platform11_ = Rsh_Fir_reg_dr12_;
    goto L117_;
  }

L117_:;
  // r53 = `$`(_Platform11, <sym OS.type>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg__Platform11_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 78);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L115(r53)
  // L115(r53)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r53_;
  goto L115_;

L118_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L115(dx12)
  // L115(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L115_;

L119_:;
  // sym8 = ldf list
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base8 = ldf list in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard8 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L120_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 79), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard9 then L122() else L123()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L122()
    goto L122_;
  } else {
  // L123()
    goto L123_;
  }

L121_:;
  // r55 = dyn base8[unzip, editor, askYesNo]("internal", <lang if(length(grep("Rgui", commandArgs(), TRUE)), "internal", "notepad")>, <lang if(`==`(`$`(.Platform, GUI), "Rgui"), askYesNoWinDialog)>)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args92[2] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = Rsh_const(CCP, 82);
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 83);
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 84);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L20(r55)
  // L20(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L20_;

L122_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 85), RHO);
  // check L124() else D36()
  // L124()
  goto L124_;

L123_:;
  // r57 = dyn base9(<lang grep("Rgui", commandArgs(), TRUE)>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L21(r57)
  // L21(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L21_;

D36_:;
  // deopt 166 []
  Rsh_Fir_deopt(166, 0, NULL, CCP, RHO);
  return R_NilValue;

L124_:;
  // p3 = prom<V +>{
  //   commandArgs = ldf commandArgs;
  //   r59 = dyn commandArgs();
  //   return r59;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_3, CCP, RHO);
  // r61 = dyn grep("Rgui", p3, TRUE)
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 3, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L125() else D37()
  // L125()
  goto L125_;

D37_:;
  // deopt 170 [r61]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(170, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L125_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r62 = dyn length(r61)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L126() else D38()
  // L126()
  goto L126_;

D38_:;
  // deopt 172 [r62]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L126_:;
  // goto L21(r62)
  // L21(r62)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r62_;
  goto L21_;

L127_:;
  // goto L23("internal")
  // L23("internal")
  Rsh_Fir_reg_r63_ = Rsh_const(CCP, 18);
  goto L23_;

D39_:;
  // deopt 178 [_Platform12]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg__Platform12_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L129_:;
  // _Platform13 = force? _Platform12
  Rsh_Fir_reg__Platform13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform12_);
  // checkMissing(_Platform13)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg__Platform13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(_Platform13)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg__Platform13_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c16 then L131() else L132(_Platform13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L131()
    goto L131_;
  } else {
  // L132(_Platform13)
    Rsh_Fir_reg__Platform15_ = Rsh_Fir_reg__Platform13_;
    goto L132_;
  }

L130_:;
  // r65 = `==`(dx15, "Rgui")
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 88);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r65)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c17 then L134() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L134()
    goto L134_;
  } else {
  // L24()
    goto L24_;
  }

L131_:;
  // dr14 = tryDispatchBuiltin.1("$", _Platform13)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg__Platform13_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc7 then L133() else L132(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L133()
    goto L133_;
  } else {
  // L132(dr14)
    Rsh_Fir_reg__Platform15_ = Rsh_Fir_reg_dr14_;
    goto L132_;
  }

L132_:;
  // r64 = `$`(_Platform15, <sym GUI>)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg__Platform15_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 89);
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L130(r64)
  // L130(r64)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r64_;
  goto L130_;

L133_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L130(dx14)
  // L130(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L130_;

L134_:;
  // askYesNoWinDialog = ld askYesNoWinDialog
  Rsh_Fir_reg_askYesNoWinDialog = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L135() else D40()
  // L135()
  goto L135_;

D40_:;
  // deopt 183 [askYesNoWinDialog]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_askYesNoWinDialog;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L135_:;
  // askYesNoWinDialog1 = force? askYesNoWinDialog
  Rsh_Fir_reg_askYesNoWinDialog1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_askYesNoWinDialog);
  // checkMissing(askYesNoWinDialog1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_askYesNoWinDialog1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // goto L25(askYesNoWinDialog1)
  // L25(askYesNoWinDialog1)
  Rsh_Fir_reg_askYesNoWinDialog2_ = Rsh_Fir_reg_askYesNoWinDialog1_;
  goto L25_;

D41_:;
  // deopt 189 [r66]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L137_:;
  // goto L20(r66)
  // L20(r66)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r66_;
  goto L20_;

L139_:;
  // Sys_getenv2 = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L141() else D42()
  // L141()
  goto L141_;

L140_:;
  // r68 = dyn base10[unzip, editor](<lang Sys.getenv("R_UNZIPCMD")>, <lang Sys.getenv("EDITOR")>)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 92);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = Rsh_const(CCP, 82);
  Rsh_Fir_array_arg_names28[1] = Rsh_const(CCP, 83);
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L26(r68)
  // L26(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L26_;

D42_:;
  // deopt 193 []
  Rsh_Fir_deopt(193, 0, NULL, CCP, RHO);
  return R_NilValue;

L141_:;
  // r69 = dyn Sys_getenv2("R_UNZIPCMD")
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv2_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L142() else D43()
  // L142()
  goto L142_;

D43_:;
  // deopt 195 [r69]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(195, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L142_:;
  // Sys_getenv3 = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L143() else D44()
  // L143()
  goto L143_;

D44_:;
  // deopt 198 []
  Rsh_Fir_deopt(198, 0, NULL, CCP, RHO);
  return R_NilValue;

L143_:;
  // r70 = dyn Sys_getenv3("EDITOR")
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv3_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L144() else D45()
  // L144()
  goto L144_;

D45_:;
  // deopt 200 [r70]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L144_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r71 = dyn list2(r69, r70)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L145() else D46()
  // L145()
  goto L145_;

D46_:;
  // deopt 203 [r71]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L145_:;
  // goto L26(r71)
  // L26(r71)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r71_;
  goto L26_;

L146_:;
  // op_utils = ld `op.utils`
  Rsh_Fir_reg_op_utils = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L148() else D47()
  // L148()
  goto L148_;

L147_:;
  // r72 = dyn base11(<sym op.utils>, <sym extra>)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L27(r72)
  // L27(r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r72_;
  goto L27_;

D47_:;
  // deopt 207 [op_utils]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_op_utils;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L148_:;
  // op_utils1 = force? op_utils
  Rsh_Fir_reg_op_utils1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op_utils);
  // checkMissing(op_utils1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_op_utils1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // extra = ld extra
  Rsh_Fir_reg_extra = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L149() else D48()
  // L149()
  goto L149_;

D48_:;
  // deopt 209 [extra]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_extra;
  Rsh_Fir_deopt(209, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L149_:;
  // extra1 = force? extra
  Rsh_Fir_reg_extra1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extra);
  // checkMissing(extra1)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_extra1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r74 = dyn c18(op_utils1, extra1)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_op_utils1_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_extra1_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L150() else D49()
  // L150()
  goto L150_;

D49_:;
  // deopt 212 [r74]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(212, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L150_:;
  // goto L27(r74)
  // L27(r74)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r74_;
  goto L27_;

D50_:;
  // deopt 215 []
  Rsh_Fir_deopt(215, 0, NULL, CCP, RHO);
  return R_NilValue;

L151_:;
  // p4 = prom<V +>{
  //   sym12 = ldf names;
  //   base12 = ldf names in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L1() else L2();
  // L0(r76):
  //   return r76;
  // L1():
  //   op_utils2 = ld `op.utils`;
  //   op_utils3 = force? op_utils2;
  //   checkMissing(op_utils3);
  //   names1 = ldf names in base;
  //   r77 = dyn names1(op_utils3);
  //   goto L0(r77);
  // L2():
  //   r75 = dyn base12(<sym op.utils>);
  //   goto L0(r75);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_4, CCP, RHO);
  // p5 = prom<V +>{
  //   sym13 = ldf names;
  //   base13 = ldf names in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r80):
  //   return r80;
  // L1():
  //   _Options = ld `.Options`;
  //   _Options1 = force? _Options;
  //   checkMissing(_Options1);
  //   names2 = ldf names in base;
  //   r81 = dyn names2(_Options1);
  //   goto L0(r81);
  // L2():
  //   r79 = dyn base13(<sym .Options>);
  //   goto L0(r79);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_5, CCP, RHO);
  // r83 = dyn _in_(p4, p5)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L152() else D51()
  // L152()
  goto L152_;

D51_:;
  // deopt 218 [r83]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(218, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L152_:;
  // r84 = `!`(r83)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // st toset = r84
  Rsh_Fir_store(Rsh_const(CCP, 96), Rsh_Fir_reg_r84_, RHO);
  (void)(Rsh_Fir_reg_r84_);
  // sym14 = ldf any
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 97), RHO);
  // base14 = ldf any in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args123);
  // if guard14 then L153() else L154()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L153()
    goto L153_;
  } else {
  // L154()
    goto L154_;
  }

L153_:;
  // toset = ld toset
  Rsh_Fir_reg_toset = Rsh_Fir_load(Rsh_const(CCP, 96), RHO);
  // check L155() else D52()
  // L155()
  goto L155_;

L154_:;
  // r85 = dyn base14(<sym toset>)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 96);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L28(r85)
  // L28(r85)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r85_;
  goto L28_;

D52_:;
  // deopt 223 [toset]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_toset;
  Rsh_Fir_deopt(223, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L155_:;
  // toset1 = force? toset
  Rsh_Fir_reg_toset1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_toset);
  // checkMissing(toset1)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_toset1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // r87 = dyn any(toset1)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_toset1_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L156() else D53()
  // L156()
  goto L156_;

D53_:;
  // deopt 226 [r87]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L156_:;
  // goto L28(r87)
  // L28(r87)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r87_;
  goto L28_;

L157_:;
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 98), RHO);
  // check L158() else D54()
  // L158()
  goto L158_;

D54_:;
  // deopt 228 []
  Rsh_Fir_deopt(228, 0, NULL, CCP, RHO);
  return R_NilValue;

L158_:;
  // p6 = prom<V +>{
  //   op_utils4 = ld `op.utils`;
  //   op_utils5 = force? op_utils4;
  //   checkMissing(op_utils5);
  //   c20 = `is.object`(op_utils5);
  //   if c20 then L1() else L2(op_utils5);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", op_utils5);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(op_utils7):
  //   toset2 = ld toset;
  //   toset3 = force? toset2;
  //   __1 = ldf `[` in base;
  //   r88 = dyn __1(op_utils7, toset3);
  //   goto L0(r88);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_6, CCP, RHO);
  // r90 = dyn options(p6)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L159() else D55()
  // L159()
  goto L159_;

D55_:;
  // deopt 230 [r90]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(230, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L159_:;
  // goto L30()
  // L30()
  goto L30_;

D56_:;
  // deopt 234 []
  Rsh_Fir_deopt(234, 0, NULL, CCP, RHO);
  return R_NilValue;

L161_:;
  // p7 = prom<V +>{
  //   sys_function = ldf `sys.function`;
  //   r92 = dyn sys_function();
  //   return r92;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_7, CCP, RHO);
  // r94 = dyn environment(p7)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L162() else D57()
  // L162()
  goto L162_;

D57_:;
  // deopt 236 [r94]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L162_:;
  // st ns = r94
  Rsh_Fir_store(Rsh_const(CCP, 100), Rsh_Fir_reg_r94_, RHO);
  (void)(Rsh_Fir_reg_r94_);
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 101), RHO);
  // check L163() else D58()
  // L163()
  goto L163_;

D58_:;
  // deopt 239 []
  Rsh_Fir_deopt(239, 0, NULL, CCP, RHO);
  return R_NilValue;

L163_:;
  // p8 = prom<V +>{
  //   _osVersion = ldf `.osVersion`;
  //   r95 = dyn _osVersion();
  //   return r95;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_8, CCP, RHO);
  // p9 = prom<V +>{
  //   ns = ld ns;
  //   ns1 = force? ns;
  //   checkMissing(ns1);
  //   return ns1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4001578419_9, CCP, RHO);
  // r98 = dyn assign[, , envir]("osVersion", p8, p9)
  SEXP Rsh_Fir_array_args136[3];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 103);
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args136[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = Rsh_const(CCP, 104);
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L164() else D59()
  // L164()
  goto L164_;

D59_:;
  // deopt 244 [r98]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(244, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L164_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r98
  return Rsh_Fir_reg_r98_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_(SEXP CCP, SEXP RHO) {
  // _get_repositories = ldf `.get_repositories`
  Rsh_Fir_reg__get_repositories = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // r6 = dyn _get_repositories()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__get_repositories, 0, NULL, NULL, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_1(SEXP CCP, SEXP RHO) {
  // identity = ld identity
  Rsh_Fir_reg_identity = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // identity1 = force? identity
  Rsh_Fir_reg_identity1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_identity);
  // checkMissing(identity1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_identity1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return identity1
  return Rsh_Fir_reg_identity1_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_2(SEXP CCP, SEXP RHO) {
  // reposdf18 = ld reposdf
  Rsh_Fir_reg_reposdf18_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // reposdf19 = force? reposdf18
  Rsh_Fir_reg_reposdf19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reposdf18_);
  // checkMissing(reposdf19)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_reposdf19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return reposdf19
  return Rsh_Fir_reg_reposdf19_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_3(SEXP CCP, SEXP RHO) {
  // commandArgs = ldf commandArgs
  Rsh_Fir_reg_commandArgs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // r59 = dyn commandArgs()
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_commandArgs, 0, NULL, NULL, CCP, RHO);
  // return r59
  return Rsh_Fir_reg_r59_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_4(SEXP CCP, SEXP RHO) {
  // sym12 = ldf names
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base12 = ldf names in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard12 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r76
  return Rsh_Fir_reg_r76_;

L1_:;
  // op_utils2 = ld `op.utils`
  Rsh_Fir_reg_op_utils2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // op_utils3 = force? op_utils2
  Rsh_Fir_reg_op_utils3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op_utils2_);
  // checkMissing(op_utils3)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_op_utils3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r77 = dyn names1(op_utils3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_op_utils3_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r77)
  // L0(r77)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r77_;
  goto L0_;

L2_:;
  // r75 = dyn base12(<sym op.utils>)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r75)
  // L0(r75)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r75_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_5(SEXP CCP, SEXP RHO) {
  // sym13 = ldf names
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base13 = ldf names in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args117);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r80
  return Rsh_Fir_reg_r80_;

L1_:;
  // _Options = ld `.Options`
  Rsh_Fir_reg__Options = Rsh_Fir_load(Rsh_const(CCP, 95), RHO);
  // _Options1 = force? _Options
  Rsh_Fir_reg__Options1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Options);
  // checkMissing(_Options1)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg__Options1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r81 = dyn names2(_Options1)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg__Options1_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r81)
  // L0(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L0_;

L2_:;
  // r79 = dyn base13(<sym .Options>)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r79)
  // L0(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_6(SEXP CCP, SEXP RHO) {
  // op_utils4 = ld `op.utils`
  Rsh_Fir_reg_op_utils4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // op_utils5 = force? op_utils4
  Rsh_Fir_reg_op_utils5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_op_utils4_);
  // checkMissing(op_utils5)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_op_utils5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(op_utils5)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_op_utils5_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c20 then L1() else L2(op_utils5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L1()
    goto L1_;
  } else {
  // L2(op_utils5)
    Rsh_Fir_reg_op_utils7_ = Rsh_Fir_reg_op_utils5_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", op_utils5)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_op_utils5_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args129);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_op_utils7_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // toset2 = ld toset
  Rsh_Fir_reg_toset2_ = Rsh_Fir_load(Rsh_const(CCP, 96), RHO);
  // toset3 = force? toset2
  Rsh_Fir_reg_toset3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_toset2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r88 = dyn __1(op_utils7, toset3)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_op_utils7_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_toset3_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L0(r88)
  // L0(r88)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r88_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_7(SEXP CCP, SEXP RHO) {
  // sys_function = ldf `sys.function`
  Rsh_Fir_reg_sys_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // r92 = dyn sys_function()
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function, 0, NULL, NULL, CCP, RHO);
  // return r92
  return Rsh_Fir_reg_r92_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_8(SEXP CCP, SEXP RHO) {
  // _osVersion = ldf `.osVersion`
  Rsh_Fir_reg__osVersion = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 102), RHO);
  // r95 = dyn _osVersion()
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__osVersion, 0, NULL, NULL, CCP, RHO);
  // return r95
  return Rsh_Fir_reg_r95_;
}
SEXP Rsh_Fir_user_promise_inner4001578419_9(SEXP CCP, SEXP RHO) {
  // ns = ld ns
  Rsh_Fir_reg_ns = Rsh_Fir_load(Rsh_const(CCP, 100), RHO);
  // ns1 = force? ns
  Rsh_Fir_reg_ns1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns);
  // checkMissing(ns1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_ns1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // return ns1
  return Rsh_Fir_reg_ns1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
