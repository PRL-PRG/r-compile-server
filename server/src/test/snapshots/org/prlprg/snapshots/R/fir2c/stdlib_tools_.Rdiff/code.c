#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner192714890_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner192714890_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner192714890_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner192714890_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1714259301_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1714259301_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1714259301_(SEXP CCP, SEXP RHO);
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
  // r = clos inner192714890
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner192714890_, RHO, CCP);
  // st `.Rdiff` = r
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
SEXP Rsh_Fir_user_function_inner192714890_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner192714890 dynamic dispatch ([`no.q`])

  return Rsh_Fir_user_version_inner192714890_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner192714890_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner192714890 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner192714890/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_no_q;  // no_q
  SEXP Rsh_Fir_reg_no_q_isMissing;  // no_q_isMissing
  SEXP Rsh_Fir_reg_no_q_orDefault;  // no_q_orDefault
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_no_q1_;  // no_q1
  SEXP Rsh_Fir_reg_no_q2_;  // no_q2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_commandArgs;  // commandArgs
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_Usage;  // Usage
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_do_exit;  // do_exit
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_args2_;  // args2
  SEXP Rsh_Fir_reg_args3_;  // args3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_strsplit;  // strsplit
  SEXP Rsh_Fir_reg_args4_;  // args4
  SEXP Rsh_Fir_reg_args5_;  // args5
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_args6_;  // args6
  SEXP Rsh_Fir_reg_args7_;  // args7
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_args8_;  // args8
  SEXP Rsh_Fir_reg_args9_;  // args9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_args11_;  // args11
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_Usage1_;  // Usage1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_do_exit1_;  // do_exit1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_args12_;  // args12
  SEXP Rsh_Fir_reg_args13_;  // args13
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_args15_;  // args15
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_R_version;  // R_version
  SEXP Rsh_Fir_reg_R_version1_;  // R_version1
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_R_version3_;  // R_version3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_R_version4_;  // R_version4
  SEXP Rsh_Fir_reg_R_version5_;  // R_version5
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_R_version7_;  // R_version7
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_R_version8_;  // R_version8
  SEXP Rsh_Fir_reg_R_version9_;  // R_version9
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_R_version11_;  // R_version11
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_cat1_;  // cat1
  SEXP Rsh_Fir_reg__R_copyright_msg;  // _R_copyright_msg
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_do_exit2_;  // do_exit2
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_Usage2_;  // Usage2
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_do_exit3_;  // do_exit3
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_args16_;  // args16
  SEXP Rsh_Fir_reg_args17_;  // args17
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_Usage3_;  // Usage3
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_do_exit4_;  // do_exit4
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg__in_2_;  // _in_2
  SEXP Rsh_Fir_reg_args18_;  // args18
  SEXP Rsh_Fir_reg_args19_;  // args19
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_forEx;  // forEx
  SEXP Rsh_Fir_reg_forEx1_;  // forEx1
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_args20_;  // args20
  SEXP Rsh_Fir_reg_args21_;  // args21
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_args23_;  // args23
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_is_ex;  // is_ex
  SEXP Rsh_Fir_reg_is_ex1_;  // is_ex1
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_args24_;  // args24
  SEXP Rsh_Fir_reg_args25_;  // args25
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_args27_;  // args27
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_exitstatus;  // exitstatus
  SEXP Rsh_Fir_reg_exitstatus1_;  // exitstatus1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_args28_;  // args28
  SEXP Rsh_Fir_reg_args29_;  // args29
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_args31_;  // args31
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_left;  // left
  SEXP Rsh_Fir_reg_left1_;  // left1
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_Rdiff;  // Rdiff
  SEXP Rsh_Fir_reg_left2_;  // left2
  SEXP Rsh_Fir_reg_left3_;  // left3
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_args32_;  // args32
  SEXP Rsh_Fir_reg_args33_;  // args33
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_args35_;  // args35
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_forEx2_;  // forEx2
  SEXP Rsh_Fir_reg_forEx3_;  // forEx3
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_status;  // status
  SEXP Rsh_Fir_reg_status1_;  // status1
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_exitstatus2_;  // exitstatus2
  SEXP Rsh_Fir_reg_exitstatus3_;  // exitstatus3
  SEXP Rsh_Fir_reg_do_exit5_;  // do_exit5
  SEXP Rsh_Fir_reg_status2_;  // status2
  SEXP Rsh_Fir_reg_status3_;  // status3
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r92_;  // r92

  // Bind parameters
  Rsh_Fir_reg_no_q = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // no_q_isMissing = missing.0(no_q)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_no_q;
  Rsh_Fir_reg_no_q_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if no_q_isMissing then L0(FALSE) else L0(no_q)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_no_q_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_no_q_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(no_q)
    Rsh_Fir_reg_no_q_orDefault = Rsh_Fir_reg_no_q;
    goto L0_;
  }

L0_:;
  // st `no.q` = no_q_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_no_q_orDefault, RHO);
  (void)(Rsh_Fir_reg_no_q_orDefault);
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L32() else D0()
  // L32()
  goto L32_;

L1_:;
  // r4 = clos inner1714259301
  Rsh_Fir_reg_r4_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1714259301_, RHO, CCP);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L2_;

L2_:;
  // st do_exit = r3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // commandArgs = ldf commandArgs
  Rsh_Fir_reg_commandArgs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L37() else D3()
  // L37()
  goto L37_;

L3_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L43() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L43()
    goto L43_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L49() else D11()
  // L49()
  goto L49_;

L6_:;
  // c3 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c3 then L56() else L57(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L56()
    goto L56_;
  } else {
  // L57(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L57_;
  }

L7_:;
  // st args = dx5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L8_:;
  // r24 = `==`(r22, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c4 then L63() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L63()
    goto L63_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L14()
  // L14()
  goto L14_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L72() else D23()
  // L72()
  goto L72_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // Usage2 = ldf Usage
  Rsh_Fir_reg_Usage2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L82() else D31()
  // L82()
  goto L82_;

L14_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard4 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L15_:;
  // r60 = `==`(r58, 0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c14 then L91() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L91()
    goto L91_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard5 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L18_:;
  // st forEx = r65
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r65_, RHO);
  (void)(Rsh_Fir_reg_r65_);
  // forEx = ld forEx
  Rsh_Fir_reg_forEx = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L102() else D44()
  // L102()
  goto L102_;

L19_:;
  // goto L21()
  // L21()
  goto L21_;

L20_:;
  // st args = dx17
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // sym7 = ldf `as.integer`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base7 = ldf `as.integer` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard7 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L22_:;
  // st exitstatus = r76
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard8 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L23_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r78 = dyn as_integer(dx20)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L116() else D48()
  // L116()
  goto L116_;

L24_:;
  // c19 = `as.logical`(r80)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c19 then L121() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L121()
    goto L121_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // args28 = ld args
  Rsh_Fir_reg_args28_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L123() else D51()
  // L123()
  goto L123_;

L27_:;
  // st left = dx22
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx22_, RHO);
  (void)(Rsh_Fir_reg_dx22_);
  // left = ld left
  Rsh_Fir_reg_left = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L127() else D52()
  // L127()
  goto L127_;

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // Rdiff = ldf Rdiff
  Rsh_Fir_reg_Rdiff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L130() else D53()
  // L130()
  goto L130_;

L30_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // do_exit5 = ldf do_exit
  Rsh_Fir_reg_do_exit5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L136() else D57()
  // L136()
  goto L136_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // r = dyn options[showErrorCalls](FALSE)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L33() else D1()
  // L33()
  goto L33_;

D1_:;
  // deopt 4 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L33_:;
  // r1 = clos inner2708337952
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st Usage = r1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // no_q1 = ld `no.q`
  Rsh_Fir_reg_no_q1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L34() else D2()
  // L34()
  goto L34_;

D2_:;
  // deopt 8 [no_q1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_no_q1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L34_:;
  // no_q2 = force? no_q1
  Rsh_Fir_reg_no_q2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no_q1_);
  // checkMissing(no_q2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_no_q2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(no_q2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_no_q2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c then L35() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L35()
    goto L35_;
  } else {
  // L1()
    goto L1_;
  }

L35_:;
  // r2 = clos inner1714259301
  Rsh_Fir_reg_r2_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1714259301_, RHO, CCP);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D3_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // r5 = dyn commandArgs(TRUE)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_commandArgs, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L38() else D4()
  // L38()
  goto L38_;

D4_:;
  // deopt 18 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L38_:;
  // st args = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L41() else D5()
  // L41()
  goto L41_;

L40_:;
  // r6 = dyn base(<sym args>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D5_:;
  // deopt 22 [args]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_args;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L41_:;
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r8 = dyn length(args1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L42() else D6()
  // L42()
  goto L42_;

D6_:;
  // deopt 25 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;

L43_:;
  // Usage = ldf Usage
  Rsh_Fir_reg_Usage = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

D7_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // r10 = dyn Usage()
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Usage, 0, NULL, NULL, CCP, RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

D8_:;
  // deopt 29 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L45_:;
  // do_exit = ldf do_exit
  Rsh_Fir_reg_do_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L46() else D9()
  // L46()
  goto L46_;

D9_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // r11 = dyn do_exit(1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_exit, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L47() else D10()
  // L47()
  goto L47_;

D10_:;
  // deopt 33 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L5()
  // L5()
  goto L5_;

D11_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p = prom<V +>{
  //   args2 = ld args;
  //   args3 = force? args2;
  //   checkMissing(args3);
  //   return args3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_, CCP, RHO);
  // r14 = dyn paste[, collapse](p, " ")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L50() else D12()
  // L50()
  goto L50_;

D12_:;
  // deopt 41 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L50_:;
  // st args = r14
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // strsplit = ldf strsplit
  Rsh_Fir_reg_strsplit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

D13_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p1 = prom<V +>{
  //   args4 = ld args;
  //   args5 = force? args4;
  //   checkMissing(args5);
  //   return args5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_1, CCP, RHO);
  // r16 = dyn strsplit[, , fixed](p1, "nextArg", TRUE)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strsplit, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L52() else D14()
  // L52()
  goto L52_;

D14_:;
  // deopt 49 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L52_:;
  // c2 = `is.object`(r16)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c2 then L53() else L54(r16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L53()
    goto L53_;
  } else {
  // L54(r16)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r16_;
    goto L54_;
  }

L53_:;
  // dr = tryDispatchBuiltin.1("[[", r16)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc then L55() else L54(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L55()
    goto L55_;
  } else {
  // L54(dr)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_dr;
    goto L54_;
  }

L54_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r19 = dyn __(r18, 1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r19_;
  goto L6_;

L55_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

L56_:;
  // dr2 = tryDispatchBuiltin.1("[", dx1)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc1 then L58() else L57(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L58()
    goto L58_;
  } else {
  // L57(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L57_;
  }

L57_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r20 = dyn __1(dx3, -1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r20_;
  goto L7_;

L58_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L7(dx4)
  // L7(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L7_;

L59_:;
  // args6 = ld args
  Rsh_Fir_reg_args6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L61() else D15()
  // L61()
  goto L61_;

L60_:;
  // r21 = dyn base1(<sym args>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L8_;

D15_:;
  // deopt 59 [args6]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_args6_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L61_:;
  // args7 = force? args6
  Rsh_Fir_reg_args7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args6_);
  // checkMissing(args7)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_args7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r23 = dyn length1(args7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_args7_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L62() else D16()
  // L62()
  goto L62_;

D16_:;
  // deopt 62 [r23]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L8_;

L63_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

D17_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L64_:;
  // p2 = prom<V +>{
  //   args8 = ld args;
  //   args9 = force? args8;
  //   checkMissing(args9);
  //   c5 = `is.object`(args9);
  //   if c5 then L1() else L2(args9);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", args9);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(args11):
  //   __2 = ldf `[` in base;
  //   r25 = dyn __2(args11, 1);
  //   goto L0(r25);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r28):
  //   return r28;
  // L1():
  //   c6 = ldf c in base;
  //   r29 = dyn c6("-h", "--help");
  //   goto L0(r29);
  // L2():
  //   r27 = dyn base2("-h", "--help");
  //   goto L0(r27);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_3, CCP, RHO);
  // r31 = dyn _in_(p2, p3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L65() else D18()
  // L65()
  goto L65_;

D18_:;
  // deopt 69 [r31]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L65_:;
  // c7 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c7 then L66() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L66()
    goto L66_;
  } else {
  // L10()
    goto L10_;
  }

L66_:;
  // Usage1 = ldf Usage
  Rsh_Fir_reg_Usage1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L67() else D19()
  // L67()
  goto L67_;

D19_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // r32 = dyn Usage1()
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Usage1_, 0, NULL, NULL, CCP, RHO);
  // check L68() else D20()
  // L68()
  goto L68_;

D20_:;
  // deopt 72 [r32]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L68_:;
  // do_exit1 = ldf do_exit
  Rsh_Fir_reg_do_exit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L69() else D21()
  // L69()
  goto L69_;

D21_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // r33 = dyn do_exit1(0.0)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_exit1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L70() else D22()
  // L70()
  goto L70_;

D22_:;
  // deopt 76 [r33]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L11()
  // L11()
  goto L11_;

D23_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L72_:;
  // p4 = prom<V +>{
  //   args12 = ld args;
  //   args13 = force? args12;
  //   checkMissing(args13);
  //   c8 = `is.object`(args13);
  //   if c8 then L1() else L2(args13);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", args13);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(args15):
  //   __3 = ldf `[` in base;
  //   r35 = dyn __3(args15, 1);
  //   goto L0(r35);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_4, CCP, RHO);
  // p5 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r38):
  //   return r38;
  // L1():
  //   c9 = ldf c in base;
  //   r39 = dyn c9("-v", "--version");
  //   goto L0(r39);
  // L2():
  //   r37 = dyn base3("-v", "--version");
  //   goto L0(r37);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_5, CCP, RHO);
  // r41 = dyn _in_1(p4, p5)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L73() else D24()
  // L73()
  goto L73_;

D24_:;
  // deopt 83 [r41]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L73_:;
  // c10 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c10 then L74() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L74()
    goto L74_;
  } else {
  // L12()
    goto L12_;
  }

L74_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L75() else D25()
  // L75()
  goto L75_;

D25_:;
  // deopt 85 []
  Rsh_Fir_deopt(85, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p6 = prom<V +>{
  //   R_version = ld `R.version`;
  //   R_version1 = force? R_version;
  //   checkMissing(R_version1);
  //   c11 = `is.object`(R_version1);
  //   if c11 then L1() else L2(R_version1);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[[", R_version1);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(R_version3):
  //   __4 = ldf `[[` in base;
  //   r42 = dyn __4(R_version3, "major");
  //   goto L0(r42);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_6, CCP, RHO);
  // p7 = prom<V +>{
  //   R_version4 = ld `R.version`;
  //   R_version5 = force? R_version4;
  //   checkMissing(R_version5);
  //   c12 = `is.object`(R_version5);
  //   if c12 then L1() else L2(R_version5);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[[", R_version5);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(R_version7):
  //   __5 = ldf `[[` in base;
  //   r44 = dyn __5(R_version7, "minor");
  //   goto L0(r44);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_7, CCP, RHO);
  // p8 = prom<V +>{
  //   R_version8 = ld `R.version`;
  //   R_version9 = force? R_version8;
  //   checkMissing(R_version9);
  //   c13 = `is.object`(R_version9);
  //   if c13 then L1() else L2(R_version9);
  // L0(dx15):
  //   return dx15;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[[", R_version9);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(R_version11):
  //   __6 = ldf `[[` in base;
  //   r46 = dyn __6(R_version11, "svn rev");
  //   goto L0(r46);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_8, CCP, RHO);
  // r48 = dyn cat[, , , , , , , sep]("R output diff: ", p6, ".", p7, " (r", p8, ")\n", "")
  SEXP Rsh_Fir_array_args81[8];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args81[2] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args81[3] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args81[4] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args81[5] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args81[6] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args81[7] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names24[8];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_array_arg_names24[6] = R_MissingArg;
  Rsh_Fir_array_arg_names24[7] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 8, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L76() else D26()
  // L76()
  goto L76_;

D26_:;
  // deopt 95 [r48]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L76_:;
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L77() else D27()
  // L77()
  goto L77_;

D27_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // p9 = prom<V +>{
  //   _R_copyright_msg = ldf `.R_copyright_msg`;
  //   r49 = dyn _R_copyright_msg(2000.0);
  //   return r49;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_9, CCP, RHO);
  // r51 = dyn cat1[, , , , sep]("", p9, "This is free software; see the GNU General Public License version 2", "or later for copying conditions.  There is NO warranty.", "\n")
  SEXP Rsh_Fir_array_args83[5];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args83[3] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args83[4] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names26[5];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_array_arg_names26[4] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 5, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L78() else D28()
  // L78()
  goto L78_;

D28_:;
  // deopt 104 [r51]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L78_:;
  // do_exit2 = ldf do_exit
  Rsh_Fir_reg_do_exit2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L79() else D29()
  // L79()
  goto L79_;

D29_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // r52 = dyn do_exit2(0.0)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_exit2_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L80() else D30()
  // L80()
  goto L80_;

D30_:;
  // deopt 108 [r52]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L13()
  // L13()
  goto L13_;

D31_:;
  // deopt 112 []
  Rsh_Fir_deopt(112, 0, NULL, CCP, RHO);
  return R_NilValue;

L82_:;
  // r54 = dyn Usage2()
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Usage2_, 0, NULL, NULL, CCP, RHO);
  // check L83() else D32()
  // L83()
  goto L83_;

D32_:;
  // deopt 113 [r54]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L83_:;
  // do_exit3 = ldf do_exit
  Rsh_Fir_reg_do_exit3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L84() else D33()
  // L84()
  goto L84_;

D33_:;
  // deopt 115 []
  Rsh_Fir_deopt(115, 0, NULL, CCP, RHO);
  return R_NilValue;

L84_:;
  // r55 = dyn do_exit3(1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_exit3_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L85() else D34()
  // L85()
  goto L85_;

D34_:;
  // deopt 117 [r55]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L14()
  // L14()
  goto L14_;

L87_:;
  // args16 = ld args
  Rsh_Fir_reg_args16_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L89() else D35()
  // L89()
  goto L89_;

L88_:;
  // r57 = dyn base4(<sym args>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L15(r57)
  // L15(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L15_;

D35_:;
  // deopt 122 [args16]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_args16_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L89_:;
  // args17 = force? args16
  Rsh_Fir_reg_args17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args16_);
  // checkMissing(args17)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_args17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r59 = dyn length2(args17)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_args17_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L90() else D36()
  // L90()
  goto L90_;

D36_:;
  // deopt 125 [r59]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L15(r59)
  // L15(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L15_;

L91_:;
  // Usage3 = ldf Usage
  Rsh_Fir_reg_Usage3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L92() else D37()
  // L92()
  goto L92_;

D37_:;
  // deopt 129 []
  Rsh_Fir_deopt(129, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // r61 = dyn Usage3()
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Usage3_, 0, NULL, NULL, CCP, RHO);
  // check L93() else D38()
  // L93()
  goto L93_;

D38_:;
  // deopt 130 [r61]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L93_:;
  // do_exit4 = ldf do_exit
  Rsh_Fir_reg_do_exit4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L94() else D39()
  // L94()
  goto L94_;

D39_:;
  // deopt 132 []
  Rsh_Fir_deopt(132, 0, NULL, CCP, RHO);
  return R_NilValue;

L94_:;
  // r62 = dyn do_exit4(1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_exit4_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L95() else D40()
  // L95()
  goto L95_;

D40_:;
  // deopt 134 [r62]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L17()
  // L17()
  goto L17_;

L97_:;
  // _in_2 = ldf `%in%`
  Rsh_Fir_reg__in_2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L99() else D41()
  // L99()
  goto L99_;

L98_:;
  // r64 = dyn base5(<lang `<-`(is.ex, `%in%`(args, c("-e", "--forEx")))>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L18(r64)
  // L18(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L18_;

D41_:;
  // deopt 140 []
  Rsh_Fir_deopt(140, 0, NULL, CCP, RHO);
  return R_NilValue;

L99_:;
  // p10 = prom<V +>{
  //   args18 = ld args;
  //   args19 = force? args18;
  //   checkMissing(args19);
  //   return args19;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_10, CCP, RHO);
  // p11 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r68):
  //   return r68;
  // L1():
  //   c15 = ldf c in base;
  //   r69 = dyn c15("-e", "--forEx");
  //   goto L0(r69);
  // L2():
  //   r67 = dyn base6("-e", "--forEx");
  //   goto L0(r67);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_11, CCP, RHO);
  // r71 = dyn _in_2(p10, p11)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_2_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L100() else D42()
  // L100()
  goto L100_;

D42_:;
  // deopt 143 [r71]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L100_:;
  // st `is.ex` = r71
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_r71_, RHO);
  (void)(Rsh_Fir_reg_r71_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r72 = dyn any(r71)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L101() else D43()
  // L101()
  goto L101_;

D43_:;
  // deopt 146 [r72]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L18(r72)
  // L18(r72)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r72_;
  goto L18_;

D44_:;
  // deopt 148 [forEx]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_forEx;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L102_:;
  // forEx1 = force? forEx
  Rsh_Fir_reg_forEx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_forEx);
  // checkMissing(forEx1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_forEx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c16 = `as.logical`(forEx1)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_forEx1_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c16 then L103() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L103()
    goto L103_;
  } else {
  // L19()
    goto L19_;
  }

L103_:;
  // args20 = ld args
  Rsh_Fir_reg_args20_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L104() else D45()
  // L104()
  goto L104_;

D45_:;
  // deopt 150 [args20]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_args20_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L104_:;
  // args21 = force? args20
  Rsh_Fir_reg_args21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args20_);
  // checkMissing(args21)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_args21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(args21)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_args21_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if c17 then L105() else L106(args21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L105()
    goto L105_;
  } else {
  // L106(args21)
    Rsh_Fir_reg_args23_ = Rsh_Fir_reg_args21_;
    goto L106_;
  }

L105_:;
  // dr14 = tryDispatchBuiltin.1("[", args21)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_args21_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args101);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if dc7 then L107() else L106(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L107()
    goto L107_;
  } else {
  // L106(dr14)
    Rsh_Fir_reg_args23_ = Rsh_Fir_reg_dr14_;
    goto L106_;
  }

L106_:;
  // is_ex = ld `is.ex`
  Rsh_Fir_reg_is_ex = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L108() else D46()
  // L108()
  goto L108_;

L107_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L20(dx16)
  // L20(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L20_;

D46_:;
  // deopt 152 [args23, is_ex]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_args23_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_is_ex;
  Rsh_Fir_deopt(152, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L108_:;
  // is_ex1 = force? is_ex
  Rsh_Fir_reg_is_ex1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is_ex);
  // checkMissing(is_ex1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_is_ex1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // r73 = `!`(is_ex1)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_is_ex1_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r74 = dyn __7(args23, r73)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_args23_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L20(r74)
  // L20(r74)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r74_;
  goto L20_;

L110_:;
  // args24 = ld args
  Rsh_Fir_reg_args24_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L112() else D47()
  // L112()
  goto L112_;

L111_:;
  // r75 = dyn base7(<lang `[`(args, 3)>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L22(r75)
  // L22(r75)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r75_;
  goto L22_;

D47_:;
  // deopt 161 [args24]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_args24_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L112_:;
  // args25 = force? args24
  Rsh_Fir_reg_args25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args24_);
  // checkMissing(args25)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_args25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(args25)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_args25_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if c18 then L113() else L114(args25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L113()
    goto L113_;
  } else {
  // L114(args25)
    Rsh_Fir_reg_args27_ = Rsh_Fir_reg_args25_;
    goto L114_;
  }

L113_:;
  // dr16 = tryDispatchBuiltin.1("[", args25)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_args25_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args110);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc8 then L115() else L114(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L115()
    goto L115_;
  } else {
  // L114(dr16)
    Rsh_Fir_reg_args27_ = Rsh_Fir_reg_dr16_;
    goto L114_;
  }

L114_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r77 = dyn __8(args27, 3)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_args27_;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L23(r77)
  // L23(r77)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r77_;
  goto L23_;

L115_:;
  // dx19 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L23(dx19)
  // L23(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L23_;

D48_:;
  // deopt 167 [r78]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L22(r78)
  // L22(r78)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r78_;
  goto L22_;

L117_:;
  // exitstatus = ld exitstatus
  Rsh_Fir_reg_exitstatus = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L119() else D49()
  // L119()
  goto L119_;

L118_:;
  // r79 = dyn base8(<sym exitstatus>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L24(r79)
  // L24(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L24_;

D49_:;
  // deopt 171 [exitstatus]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_exitstatus;
  Rsh_Fir_deopt(171, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L119_:;
  // exitstatus1 = force? exitstatus
  Rsh_Fir_reg_exitstatus1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exitstatus);
  // checkMissing(exitstatus1)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_exitstatus1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r81 = dyn is_na(exitstatus1)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_exitstatus1_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L120() else D50()
  // L120()
  goto L120_;

D50_:;
  // deopt 174 [r81]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L24(r81)
  // L24(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L24_;

L121_:;
  // st exitstatus = 0
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_const(CCP, 12), RHO);
  (void)(Rsh_const(CCP, 12));
  // goto L26()
  // L26()
  goto L26_;

D51_:;
  // deopt 180 [args28]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_args28_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L123_:;
  // args29 = force? args28
  Rsh_Fir_reg_args29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args28_);
  // checkMissing(args29)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_args29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(args29)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_args29_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if c20 then L124() else L125(args29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L124()
    goto L124_;
  } else {
  // L125(args29)
    Rsh_Fir_reg_args31_ = Rsh_Fir_reg_args29_;
    goto L125_;
  }

L124_:;
  // dr18 = tryDispatchBuiltin.1("[", args29)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_args29_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args119);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if dc9 then L126() else L125(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L126()
    goto L126_;
  } else {
  // L125(dr18)
    Rsh_Fir_reg_args31_ = Rsh_Fir_reg_dr18_;
    goto L125_;
  }

L125_:;
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r83 = dyn __9(args31, 1)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_args31_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L27(r83)
  // L27(r83)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r83_;
  goto L27_;

L126_:;
  // dx21 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L27(dx21)
  // L27(dx21)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L27_;

D52_:;
  // deopt 186 [left]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_left;
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L127_:;
  // left1 = force? left
  Rsh_Fir_reg_left1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_left);
  // checkMissing(left1)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_left1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r84 = `==`(left1, "-")
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_left1_;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // c21 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if c21 then L128() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L128()
    goto L128_;
  } else {
  // L28()
    goto L28_;
  }

L128_:;
  // st left = "stdin"
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_const(CCP, 61), RHO);
  (void)(Rsh_const(CCP, 61));
  // goto L29()
  // L29()
  goto L29_;

D53_:;
  // deopt 196 []
  Rsh_Fir_deopt(196, 0, NULL, CCP, RHO);
  return R_NilValue;

L130_:;
  // p12 = prom<V +>{
  //   left2 = ld left;
  //   left3 = force? left2;
  //   checkMissing(left3);
  //   return left3;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_12, CCP, RHO);
  // p13 = prom<V +>{
  //   args32 = ld args;
  //   args33 = force? args32;
  //   checkMissing(args33);
  //   c22 = `is.object`(args33);
  //   if c22 then L1() else L2(args33);
  // L0(dx24):
  //   return dx24;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("[", args33);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(args35):
  //   __10 = ldf `[` in base;
  //   r87 = dyn __10(args35, 2);
  //   goto L0(r87);
  // L3():
  //   dx23 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx23);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_13, CCP, RHO);
  // p14 = prom<V +>{
  //   forEx2 = ld forEx;
  //   forEx3 = force? forEx2;
  //   checkMissing(forEx3);
  //   return forEx3;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_14, CCP, RHO);
  // r90 = dyn Rdiff[, , useDiff, forEx](p12, p13, TRUE, p14)
  SEXP Rsh_Fir_array_args134[4];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args134[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args134[3] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names44[4];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = Rsh_const(CCP, 63);
  Rsh_Fir_array_arg_names44[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Rdiff, 4, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L131() else D54()
  // L131()
  goto L131_;

D54_:;
  // deopt 203 [r90]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L131_:;
  // st status = r90
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // status = ld status
  Rsh_Fir_reg_status = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L132() else D55()
  // L132()
  goto L132_;

D55_:;
  // deopt 205 [status]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_status;
  Rsh_Fir_deopt(205, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L132_:;
  // status1 = force? status
  Rsh_Fir_reg_status1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_status);
  // checkMissing(status1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_status1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // c23 = `as.logical`(status1)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_status1_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if c23 then L133() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L133()
    goto L133_;
  } else {
  // L30()
    goto L30_;
  }

L133_:;
  // exitstatus2 = ld exitstatus
  Rsh_Fir_reg_exitstatus2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L134() else D56()
  // L134()
  goto L134_;

D56_:;
  // deopt 207 [exitstatus2]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_exitstatus2_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L134_:;
  // exitstatus3 = force? exitstatus2
  Rsh_Fir_reg_exitstatus3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exitstatus2_);
  // checkMissing(exitstatus3)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_exitstatus3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // st status = exitstatus3
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_exitstatus3_, RHO);
  (void)(Rsh_Fir_reg_exitstatus3_);
  // goto L31()
  // L31()
  goto L31_;

D57_:;
  // deopt 213 []
  Rsh_Fir_deopt(213, 0, NULL, CCP, RHO);
  return R_NilValue;

L136_:;
  // p15 = prom<V +>{
  //   status2 = ld status;
  //   status3 = force? status2;
  //   checkMissing(status3);
  //   return status3;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner192714890_15, CCP, RHO);
  // r92 = dyn do_exit5(p15)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_exit5_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L137() else D58()
  // L137()
  goto L137_;

D58_:;
  // deopt 215 [r92]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L137_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r92
  return Rsh_Fir_reg_r92_;
}
SEXP Rsh_Fir_user_promise_inner192714890_(SEXP CCP, SEXP RHO) {
  // args2 = ld args
  Rsh_Fir_reg_args2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // args3 = force? args2
  Rsh_Fir_reg_args3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args2_);
  // checkMissing(args3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_args3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return args3
  return Rsh_Fir_reg_args3_;
}
SEXP Rsh_Fir_user_promise_inner192714890_1(SEXP CCP, SEXP RHO) {
  // args4 = ld args
  Rsh_Fir_reg_args4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // args5 = force? args4
  Rsh_Fir_reg_args5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args4_);
  // checkMissing(args5)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_args5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return args5
  return Rsh_Fir_reg_args5_;
}
SEXP Rsh_Fir_user_promise_inner192714890_2(SEXP CCP, SEXP RHO) {
  // args8 = ld args
  Rsh_Fir_reg_args8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // args9 = force? args8
  Rsh_Fir_reg_args9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args8_);
  // checkMissing(args9)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_args9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(args9)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_args9_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(args9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(args9)
    Rsh_Fir_reg_args11_ = Rsh_Fir_reg_args9_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", args9)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_args9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_args11_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r25 = dyn __2(args11, 1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_args11_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r25_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner192714890_3(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r29 = dyn c6("-h", "--help")
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r27 = dyn base2("-h", "--help")
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner192714890_4(SEXP CCP, SEXP RHO) {
  // args12 = ld args
  Rsh_Fir_reg_args12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // args13 = force? args12
  Rsh_Fir_reg_args13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args12_);
  // checkMissing(args13)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_args13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(args13)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_args13_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(args13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(args13)
    Rsh_Fir_reg_args15_ = Rsh_Fir_reg_args13_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", args13)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_args13_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_args15_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r35 = dyn __3(args15, 1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_args15_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r35_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner192714890_5(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r38
  return Rsh_Fir_reg_r38_;

L1_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r39 = dyn c9("-v", "--version")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L0_;

L2_:;
  // r37 = dyn base3("-v", "--version")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner192714890_6(SEXP CCP, SEXP RHO) {
  // R_version = ld `R.version`
  Rsh_Fir_reg_R_version = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // R_version1 = force? R_version
  Rsh_Fir_reg_R_version1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R_version);
  // checkMissing(R_version1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_R_version1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(R_version1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_R_version1_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c11 then L1() else L2(R_version1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(R_version1)
    Rsh_Fir_reg_R_version3_ = Rsh_Fir_reg_R_version1_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[[", R_version1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_R_version1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_R_version3_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r42 = dyn __4(R_version3, "major")
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_R_version3_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r42_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner192714890_7(SEXP CCP, SEXP RHO) {
  // R_version4 = ld `R.version`
  Rsh_Fir_reg_R_version4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // R_version5 = force? R_version4
  Rsh_Fir_reg_R_version5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R_version4_);
  // checkMissing(R_version5)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_R_version5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(R_version5)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_R_version5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(R_version5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(R_version5)
    Rsh_Fir_reg_R_version7_ = Rsh_Fir_reg_R_version5_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[[", R_version5)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_R_version5_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_R_version7_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r44 = dyn __5(R_version7, "minor")
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_R_version7_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r44_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner192714890_8(SEXP CCP, SEXP RHO) {
  // R_version8 = ld `R.version`
  Rsh_Fir_reg_R_version8_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // R_version9 = force? R_version8
  Rsh_Fir_reg_R_version9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R_version8_);
  // checkMissing(R_version9)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_R_version9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(R_version9)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_R_version9_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c13 then L1() else L2(R_version9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L1()
    goto L1_;
  } else {
  // L2(R_version9)
    Rsh_Fir_reg_R_version11_ = Rsh_Fir_reg_R_version9_;
    goto L2_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[[", R_version9)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_R_version9_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_R_version11_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r46 = dyn __6(R_version11, "svn rev")
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_R_version11_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r46_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner192714890_9(SEXP CCP, SEXP RHO) {
  // _R_copyright_msg = ldf `.R_copyright_msg`
  Rsh_Fir_reg__R_copyright_msg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // r49 = dyn _R_copyright_msg(2000.0)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__R_copyright_msg, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names25, CCP, RHO);
  // return r49
  return Rsh_Fir_reg_r49_;
}
SEXP Rsh_Fir_user_promise_inner192714890_10(SEXP CCP, SEXP RHO) {
  // args18 = ld args
  Rsh_Fir_reg_args18_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // args19 = force? args18
  Rsh_Fir_reg_args19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args18_);
  // checkMissing(args19)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_args19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return args19
  return Rsh_Fir_reg_args19_;
}
SEXP Rsh_Fir_user_promise_inner192714890_11(SEXP CCP, SEXP RHO) {
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r68
  return Rsh_Fir_reg_r68_;

L1_:;
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r69 = dyn c15("-e", "--forEx")
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r69)
  // L0(r69)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r69_;
  goto L0_;

L2_:;
  // r67 = dyn base6("-e", "--forEx")
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r67)
  // L0(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner192714890_12(SEXP CCP, SEXP RHO) {
  // left2 = ld left
  Rsh_Fir_reg_left2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // left3 = force? left2
  Rsh_Fir_reg_left3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_left2_);
  // checkMissing(left3)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_left3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // return left3
  return Rsh_Fir_reg_left3_;
}
SEXP Rsh_Fir_user_promise_inner192714890_13(SEXP CCP, SEXP RHO) {
  // args32 = ld args
  Rsh_Fir_reg_args32_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // args33 = force? args32
  Rsh_Fir_reg_args33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args32_);
  // checkMissing(args33)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_args33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(args33)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_args33_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c22 then L1() else L2(args33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L1()
    goto L1_;
  } else {
  // L2(args33)
    Rsh_Fir_reg_args35_ = Rsh_Fir_reg_args33_;
    goto L2_;
  }

L0_:;
  // return dx24
  return Rsh_Fir_reg_dx24_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("[", args33)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_args33_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args129);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_args35_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r87 = dyn __10(args35, 2)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_args35_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r87)
  // L0(r87)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r87_;
  goto L0_;

L3_:;
  // dx23 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L0(dx23)
  // L0(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner192714890_14(SEXP CCP, SEXP RHO) {
  // forEx2 = ld forEx
  Rsh_Fir_reg_forEx2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // forEx3 = force? forEx2
  Rsh_Fir_reg_forEx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_forEx2_);
  // checkMissing(forEx3)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_forEx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // return forEx3
  return Rsh_Fir_reg_forEx3_;
}
SEXP Rsh_Fir_user_promise_inner192714890_15(SEXP CCP, SEXP RHO) {
  // status2 = ld status
  Rsh_Fir_reg_status2_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // status3 = force? status2
  Rsh_Fir_reg_status3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_status2_);
  // checkMissing(status3)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_status3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // return status3
  return Rsh_Fir_reg_status3_;
}
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_cat1;  // cat
  SEXP Rsh_Fir_reg_r2;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // cat = ldf cat
  Rsh_Fir_reg_cat1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn cat[, , , , , , , , , , , sep]("Usage: R CMD Rdiff [options] FROM-file TO-file EXITSTATUS", "", "Diff R output files FROM-FILE and TO-FILE discarding the R startup message,", "where FROM-FILE equal to '-' means stdin.", "", "Options:", "  -e, --forEx    uses 'forEx = TRUE' in Rdiff()", "  -h, --help     print this help message and exit", "  -v, --version  print version info and exit", "", "Report bugs at <https://bugs.R-project.org>.", "\n")
  SEXP Rsh_Fir_array_args140[12];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args140[2] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args140[3] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args140[4] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args140[5] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args140[6] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args140[7] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args140[8] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args140[9] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args140[10] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args140[11] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names46[12];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_array_arg_names46[3] = R_MissingArg;
  Rsh_Fir_array_arg_names46[4] = R_MissingArg;
  Rsh_Fir_array_arg_names46[5] = R_MissingArg;
  Rsh_Fir_array_arg_names46[6] = R_MissingArg;
  Rsh_Fir_array_arg_names46[7] = R_MissingArg;
  Rsh_Fir_array_arg_names46[8] = R_MissingArg;
  Rsh_Fir_array_arg_names46[9] = R_MissingArg;
  Rsh_Fir_array_arg_names46[10] = R_MissingArg;
  Rsh_Fir_array_arg_names46[11] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1, 12, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 15 [r]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_user_function_inner1714259301_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1714259301 dynamic dispatch ([status])

  return Rsh_Fir_user_version_inner1714259301_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1714259301_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1714259301 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1714259301/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_status1;  // status
  SEXP Rsh_Fir_reg_status_isMissing;  // status_isMissing
  SEXP Rsh_Fir_reg_status_orDefault;  // status_orDefault
  SEXP Rsh_Fir_reg_status1_1;  // status1
  SEXP Rsh_Fir_reg_status2_1;  // status2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_message;  // message
  SEXP Rsh_Fir_reg_message1_;  // message1
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_status3_1;  // status3
  SEXP Rsh_Fir_reg_status4_;  // status4
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1

  // Bind parameters
  Rsh_Fir_reg_status1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // status_isMissing = missing.0(status)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_status1;
  Rsh_Fir_reg_status_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args141);
  // if status_isMissing then L0(0) else L0(status)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_status_isMissing)) {
  // L0(0)
    Rsh_Fir_reg_status_orDefault = Rsh_const(CCP, 12);
    goto L0_;
  } else {
  // L0(status)
    Rsh_Fir_reg_status_orDefault = Rsh_Fir_reg_status1;
    goto L0_;
  }

L0_:;
  // st status = status_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_status_orDefault, RHO);
  (void)(Rsh_Fir_reg_status_orDefault);
  // status1 = ld status
  Rsh_Fir_reg_status1_1 = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L1_:;
  // message = ld message
  Rsh_Fir_reg_message = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

L2_:;
  // checkFun.0(stop2)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_stop2_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args142));
  // stop3 = stop2 as cls
  Rsh_Fir_reg_stop3_ = Rsh_Fir_cast(Rsh_Fir_reg_stop2_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   status3 = ld status;
  //   status4 = force? status3;
  //   checkMissing(status4);
  //   return status4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1714259301_, CCP, RHO);
  // r1 = dyn stop3(".Rdiff() exit status ", p)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D0_:;
  // deopt 0 [status1]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_status1_1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L3_:;
  // status2 = force? status1
  Rsh_Fir_reg_status2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_status1_1);
  // checkMissing(status2)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_status2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(status2)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_status2_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L4_:;
  // stop = ld stop
  Rsh_Fir_reg_stop = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 2 [stop]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_stop;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L5_:;
  // stop1 = force? stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stop);
  // checkMissing(stop1)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_stop1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // goto L2(stop1)
  // L2(stop1)
  Rsh_Fir_reg_stop2_ = Rsh_Fir_reg_stop1_;
  goto L2_;

D2_:;
  // deopt 4 [message]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_message;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L7_:;
  // message1 = force? message
  Rsh_Fir_reg_message1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_message);
  // checkMissing(message1)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_message1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // goto L2(message1)
  // L2(message1)
  Rsh_Fir_reg_stop2_ = Rsh_Fir_reg_message1_;
  goto L2_;

D3_:;
  // deopt 9 [r1]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner1714259301_(SEXP CCP, SEXP RHO) {
  // status3 = ld status
  Rsh_Fir_reg_status3_1 = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // status4 = force? status3
  Rsh_Fir_reg_status4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_status3_1);
  // checkMissing(status4)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_status4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // return status4
  return Rsh_Fir_reg_status4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
