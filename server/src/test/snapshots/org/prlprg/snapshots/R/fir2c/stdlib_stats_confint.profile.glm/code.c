#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2393499510_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2393499510_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2393499510_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2393499510_19(SEXP CCP, SEXP RHO);
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
  // r = clos inner2393499510
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2393499510_, RHO, CCP);
  // st `confint.profile.glm` = r
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
SEXP Rsh_Fir_user_function_inner2393499510_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2393499510 dynamic dispatch ([object, parm, level, trace, test, `...`])

  return Rsh_Fir_user_version_inner2393499510_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2393499510_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2393499510 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2393499510/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_parm;  // parm
  SEXP Rsh_Fir_reg_level;  // level
  SEXP Rsh_Fir_reg_trace;  // trace
  SEXP Rsh_Fir_reg_test;  // test
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_parm_isMissing;  // parm_isMissing
  SEXP Rsh_Fir_reg_parm_orDefault;  // parm_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_pnames;  // pnames
  SEXP Rsh_Fir_reg_pnames1_;  // pnames1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_level_isMissing;  // level_isMissing
  SEXP Rsh_Fir_reg_level_orDefault;  // level_orDefault
  SEXP Rsh_Fir_reg_trace_isMissing;  // trace_isMissing
  SEXP Rsh_Fir_reg_trace_orDefault;  // trace_orDefault
  SEXP Rsh_Fir_reg_test_isMissing;  // test_isMissing
  SEXP Rsh_Fir_reg_test_orDefault;  // test_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_test1_;  // test1
  SEXP Rsh_Fir_reg_test2_;  // test2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_coef;  // coef
  SEXP Rsh_Fir_reg_of;  // of
  SEXP Rsh_Fir_reg_of1_;  // of1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_parm1_;  // parm1
  SEXP Rsh_Fir_reg_parm2_;  // parm2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_parm3_;  // parm3
  SEXP Rsh_Fir_reg_parm4_;  // parm4
  SEXP Rsh_Fir_reg_pnames2_;  // pnames2
  SEXP Rsh_Fir_reg_pnames3_;  // pnames3
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_attr2_;  // attr2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_test3_;  // test3
  SEXP Rsh_Fir_reg_test4_;  // test4
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_test7_;  // test7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_attr3_;  // attr3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_message;  // message
  SEXP Rsh_Fir_reg_test8_;  // test8
  SEXP Rsh_Fir_reg_test9_;  // test9
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_profile;  // profile
  SEXP Rsh_Fir_reg_of2_;  // of2
  SEXP Rsh_Fir_reg_of3_;  // of3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_parm5_;  // parm5
  SEXP Rsh_Fir_reg_parm6_;  // parm6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_level1_;  // level1
  SEXP Rsh_Fir_reg_level2_;  // level2
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_trace1_;  // trace1
  SEXP Rsh_Fir_reg_trace2_;  // trace2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_test10_;  // test10
  SEXP Rsh_Fir_reg_test11_;  // test11
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_level3_;  // level3
  SEXP Rsh_Fir_reg_level4_;  // level4
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_a2_;  // a2
  SEXP Rsh_Fir_reg_a3_;  // a3
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_round;  // round
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_array;  // array
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_parm7_;  // parm7
  SEXP Rsh_Fir_reg_parm8_;  // parm8
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_pnames4_;  // pnames4
  SEXP Rsh_Fir_reg_pnames5_;  // pnames5
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_pnames7_;  // pnames7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_parm9_;  // parm9
  SEXP Rsh_Fir_reg_parm10_;  // parm10
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_pct;  // pct
  SEXP Rsh_Fir_reg_pct1_;  // pct1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_qnorm;  // qnorm
  SEXP Rsh_Fir_reg_a4_;  // a4
  SEXP Rsh_Fir_reg_a5_;  // a5
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_parm11_;  // parm11
  SEXP Rsh_Fir_reg_parm12_;  // parm12
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_pnames8_;  // pnames8
  SEXP Rsh_Fir_reg_pnames9_;  // pnames9
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_pnames11_;  // pnames11
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_pm;  // pm
  SEXP Rsh_Fir_reg_pm1_;  // pm1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_pro;  // pro
  SEXP Rsh_Fir_reg_pro1_;  // pro1
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_pnames12_;  // pnames12
  SEXP Rsh_Fir_reg_pnames13_;  // pnames13
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_spline;  // spline
  SEXP Rsh_Fir_reg_pro2_;  // pro2
  SEXP Rsh_Fir_reg_pro3_;  // pro3
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_pm2_;  // pm2
  SEXP Rsh_Fir_reg_pm3_;  // pm3
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_pro6_;  // pro6
  SEXP Rsh_Fir_reg_pro7_;  // pro7
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_spline1_;  // spline1
  SEXP Rsh_Fir_reg_pro10_;  // pro10
  SEXP Rsh_Fir_reg_pro11_;  // pro11
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_pro14_;  // pro14
  SEXP Rsh_Fir_reg_pro15_;  // pro15
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_approx;  // approx
  SEXP Rsh_Fir_reg_sp;  // sp
  SEXP Rsh_Fir_reg_sp1_;  // sp1
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_sp3_;  // sp3
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_sp4_;  // sp4
  SEXP Rsh_Fir_reg_sp5_;  // sp5
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_sp7_;  // sp7
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_cutoff;  // cutoff
  SEXP Rsh_Fir_reg_cutoff1_;  // cutoff1
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_pnames14_;  // pnames14
  SEXP Rsh_Fir_reg_pnames15_;  // pnames15
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_pnames17_;  // pnames17
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_pm4_;  // pm4
  SEXP Rsh_Fir_reg_pm5_;  // pm5
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_ci;  // ci
  SEXP Rsh_Fir_reg_ci1_;  // ci1
  SEXP Rsh_Fir_reg_drop;  // drop
  SEXP Rsh_Fir_reg_r110_;  // r110

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_parm = PARAMS[1];
  Rsh_Fir_reg_level = PARAMS[2];
  Rsh_Fir_reg_trace = PARAMS[3];
  Rsh_Fir_reg_test = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // parm_isMissing = missing.0(parm)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_parm;
  Rsh_Fir_reg_parm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if parm_isMissing then L0() else L1(parm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_parm_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(parm)
    Rsh_Fir_reg_parm_orDefault = Rsh_Fir_reg_parm;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf seq_along;
  //   base = ldf seq_along in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   pnames = ld pnames;
  //   pnames1 = force? pnames;
  //   checkMissing(pnames1);
  //   r2 = seq_along(pnames1);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym pnames>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_parm_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st parm = parm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_parm_orDefault, RHO);
  (void)(Rsh_Fir_reg_parm_orDefault);
  // level_isMissing = missing.0(level)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_level;
  Rsh_Fir_reg_level_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if level_isMissing then L2(0.95) else L2(level)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_level_isMissing)) {
  // L2(0.95)
    Rsh_Fir_reg_level_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(level)
    Rsh_Fir_reg_level_orDefault = Rsh_Fir_reg_level;
    goto L2_;
  }

L2_:;
  // st level = level_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_level_orDefault, RHO);
  (void)(Rsh_Fir_reg_level_orDefault);
  // trace_isMissing = missing.0(trace)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_trace;
  Rsh_Fir_reg_trace_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if trace_isMissing then L3(FALSE) else L3(trace)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_trace_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_trace_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(trace)
    Rsh_Fir_reg_trace_orDefault = Rsh_Fir_reg_trace;
    goto L3_;
  }

L3_:;
  // st trace = trace_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_trace_orDefault, RHO);
  (void)(Rsh_Fir_reg_trace_orDefault);
  // test_isMissing = missing.0(test)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_test;
  Rsh_Fir_reg_test_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if test_isMissing then L4() else L5(test)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_test_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(test)
    Rsh_Fir_reg_test_orDefault = Rsh_Fir_reg_test;
    goto L5_;
  }

L4_:;
  // p1 = prom<V +>{
  //   sym1 = ldf attr;
  //   base1 = ldf attr in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   attr = ldf attr in base;
  //   r6 = dyn attr(object2, "test");
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym object>, "test");
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_1, CCP, RHO);
  // goto L5(p1)
  // L5(p1)
  Rsh_Fir_reg_test_orDefault = Rsh_Fir_reg_p1_;
  goto L5_;

L5_:;
  // st test = test_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_test_orDefault, RHO);
  (void)(Rsh_Fir_reg_test_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard2 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L6_:;
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L39() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L39()
    goto L39_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard3 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L9_:;
  // st of = r12
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard4 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L10_:;
  // st pnames = r15
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym5 = ldf `is.character`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf `is.character` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard5 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L11_:;
  // c3 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c3 then L53() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L53()
    goto L53_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L14()
  // L14()
  goto L14_;

L13_:;
  // st parm = r22
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard7 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L15_:;
  // c5 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c5 then L66() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L66()
    goto L66_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // c4 = `==`(r28, NULL)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L15(c4)
  // L15(c4)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_c4_;
  goto L15_;

L17_:;
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // test3 = ld test
  Rsh_Fir_reg_test3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L70() else D14()
  // L70()
  goto L70_;

L19_:;
  // r35 = `!=`(test7, r33)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_test7_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c6 then L75() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L75()
    goto L75_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // level3 = ld level
  Rsh_Fir_reg_level3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L84() else D24()
  // L84()
  goto L84_;

L22_:;
  // st a = r53
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L90() else D28()
  // L90()
  goto L90_;

L23_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // c10 = `<`.1(l1, i2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if c10 then L97() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L97()
    goto L97_;
  } else {
  // L34()
    goto L34_;
  }

L24_:;
  // st pro = dx3
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym15 = ldf `is.null`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base15 = ldf `is.null` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard15 then L107() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L107()
    goto L107_;
  } else {
  // L108()
    goto L108_;
  }

L25_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r77 = dyn __3(object16, dx5)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L24(i12, r77)
  // L24(i12, r77)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r77_;
  goto L24_;

L26_:;
  // c14 = `as.logical`(r79)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c14 then L110() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L110()
    goto L110_;
  } else {
  // L27()
    goto L27_;
  }

L27_:;
  // sym16 = ldf length
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base16 = ldf length in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard16 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L29_:;
  // r84 = `>`(r82, 1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c15 then L117() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L117()
    goto L117_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // spline1 = ldf spline
  Rsh_Fir_reg_spline1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L121() else D43()
  // L121()
  goto L121_;

L31_:;
  // approx = ldf approx
  Rsh_Fir_reg_approx = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L123() else D45()
  // L123()
  goto L123_;

L32_:;
  // st ci = dx29
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // goto L23(i33)
  // L23(i33)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i33_;
  goto L23_;

L33_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r107 = dyn ___(l2, dx39, <missing>, dx38)
  SEXP Rsh_Fir_array_args31[4];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args31[3] = Rsh_Fir_reg_dx38_;
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L32(i37, r107)
  // L32(i37, r107)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r107_;
  goto L32_;

L34_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // st pm = x
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L98() else D35()
  // L98()
  goto L98_;

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r109
  return Rsh_Fir_reg_r109_;

L36_:;
  // test1 = ld test
  Rsh_Fir_reg_test1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L38() else D0()
  // L38()
  goto L38_;

L37_:;
  // r8 = dyn base2(<sym test>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L6_;

D0_:;
  // deopt 1 [test1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_test1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L38_:;
  // test2 = force? test1
  Rsh_Fir_reg_test2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test1_);
  // checkMissing(test2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_test2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c = `==`(test2, NULL)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_test2_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L6(c)
  // L6(c)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c;
  goto L6_;

L39_:;
  // st test = "LRT"
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_const(CCP, 31), RHO);
  (void)(Rsh_const(CCP, 31));
  // goto L8()
  // L8()
  goto L8_;

L41_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L43() else D1()
  // L43()
  goto L43_;

L42_:;
  // r11 = dyn base3(<sym object>, "original.fit")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L9(r11)
  // L9(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L9_;

D1_:;
  // deopt 11 [object3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L43_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r13 = dyn attr1(object4, "original.fit")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L44() else D2()
  // L44()
  goto L44_;

D2_:;
  // deopt 15 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L9(r13)
  // L9(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L9_;

L45_:;
  // coef = ldf coef
  Rsh_Fir_reg_coef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L47() else D3()
  // L47()
  goto L47_;

L46_:;
  // r14 = dyn base4(<lang coef(of)>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L10(r14)
  // L10(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L10_;

D3_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p2 = prom<V +>{
  //   of = ld of;
  //   of1 = force? of;
  //   checkMissing(of1);
  //   return of1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_2, CCP, RHO);
  // r17 = dyn coef(p2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coef, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L48() else D4()
  // L48()
  goto L48_;

D4_:;
  // deopt 22 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L48_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r18 = dyn names(r17)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L49() else D5()
  // L49()
  goto L49_;

D5_:;
  // deopt 24 [r18]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L10(r18)
  // L10(r18)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r18_;
  goto L10_;

L50_:;
  // parm1 = ld parm
  Rsh_Fir_reg_parm1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L52() else D6()
  // L52()
  goto L52_;

L51_:;
  // r19 = dyn base5(<sym parm>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L11(r19)
  // L11(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L11_;

D6_:;
  // deopt 27 [parm1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_parm1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L52_:;
  // parm2 = force? parm1
  Rsh_Fir_reg_parm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm1_);
  // checkMissing(parm2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_parm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c2 = `is.character`(parm2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_parm2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L11(c2)
  // L11(c2)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_c2_;
  goto L11_;

L53_:;
  // sym6 = ldf match
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base6 = ldf match in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard6 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // parm3 = ld parm
  Rsh_Fir_reg_parm3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L56() else D7()
  // L56()
  goto L56_;

L55_:;
  // r21 = dyn base6[, , nomatch](<sym parm>, <sym pnames>, 0)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args47[2] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 3, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L13(r21)
  // L13(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L13_;

D7_:;
  // deopt 32 [parm3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_parm3_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L56_:;
  // parm4 = force? parm3
  Rsh_Fir_reg_parm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm3_);
  // checkMissing(parm4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_parm4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // pnames2 = ld pnames
  Rsh_Fir_reg_pnames2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L57() else D8()
  // L57()
  goto L57_;

D8_:;
  // deopt 34 [pnames2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_pnames2_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L57_:;
  // pnames3 = force? pnames2
  Rsh_Fir_reg_pnames3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames2_);
  // checkMissing(pnames3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_pnames3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r23 = dyn match(parm4, pnames3, 0, NULL)
  SEXP Rsh_Fir_array_args50[4];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_parm4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_pnames3_;
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L58() else D9()
  // L58()
  goto L58_;

D9_:;
  // deopt 39 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L13(r23)
  // L13(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L13_;

L60_:;
  // sym8 = ldf attr
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base8 = ldf attr in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard8 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L61_:;
  // r25 = dyn base7(<lang attr(object, "test")>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L15(r25)
  // L15(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L15_;

L62_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L64() else D10()
  // L64()
  goto L64_;

L63_:;
  // r27 = dyn base8(<sym object>, "test")
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L16(r27)
  // L16(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L16_;

D10_:;
  // deopt 46 [object5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L64_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r29 = dyn attr2(object6, "test")
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L65() else D11()
  // L65()
  goto L65_;

D11_:;
  // deopt 50 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L16(r29)
  // L16(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L16_;

L66_:;
  // l = ld object
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L67() else D12()
  // L67()
  goto L67_;

D12_:;
  // deopt 55 ["LRT", l, "LRT"]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_const(CCP, 31);
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L67_:;
  // r30 = dyn attr__(l, NULL, "test", "LRT")
  SEXP Rsh_Fir_array_args56[4];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args56[3] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L68() else D13()
  // L68()
  goto L68_;

D13_:;
  // deopt 58 ["LRT", r30]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L68_:;
  // st object = r30
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // goto L18()
  // L18()
  goto L18_;

D14_:;
  // deopt 62 [test3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_test3_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L70_:;
  // test4 = force? test3
  Rsh_Fir_reg_test4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test3_);
  // checkMissing(test4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_test4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // sym9 = ldf attr
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base9 = ldf attr in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard9 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L71_:;
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L73() else D15()
  // L73()
  goto L73_;

L72_:;
  // r32 = dyn base9(<sym object>, "test")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L19(test4, r32)
  // L19(test4, r32)
  Rsh_Fir_reg_test7_ = Rsh_Fir_reg_test4_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L19_;

D15_:;
  // deopt 65 [test4, object7]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_test4_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_object7_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L73_:;
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // attr3 = ldf attr in base
  Rsh_Fir_reg_attr3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r34 = dyn attr3(object8, "test")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr3_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L74() else D16()
  // L74()
  goto L74_;

D16_:;
  // deopt 69 [test4, r34]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_test4_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L19(test4, r34)
  // L19(test4, r34)
  Rsh_Fir_reg_test7_ = Rsh_Fir_reg_test4_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L19_;

L75_:;
  // message = ldf message
  Rsh_Fir_reg_message = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L76() else D17()
  // L76()
  goto L76_;

D17_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // p3 = prom<V +>{
  //   test8 = ld test;
  //   test9 = force? test8;
  //   checkMissing(test9);
  //   return test9;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_3, CCP, RHO);
  // r37 = dyn message("Reprofiling for ", p3, " statistic. Waiting...")
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L77() else D18()
  // L77()
  goto L77_;

D18_:;
  // deopt 76 [r37]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L77_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L78() else D19()
  // L78()
  goto L78_;

D19_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // r38 = dyn __("utils", "flush.console")
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L79() else D20()
  // L79()
  goto L79_;

D20_:;
  // deopt 81 [r38]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L79_:;
  // checkFun.0(r38)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r38_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args65));
  // r39 = r38 as cls
  Rsh_Fir_reg_r39_ = Rsh_Fir_cast(Rsh_Fir_reg_r38_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r40 = dyn r39()
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r39_, 0, NULL, NULL, CCP, RHO);
  // check L80() else D21()
  // L80()
  goto L80_;

D21_:;
  // deopt 83 [r40]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L80_:;
  // profile = ldf profile
  Rsh_Fir_reg_profile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L81() else D22()
  // L81()
  goto L81_;

D22_:;
  // deopt 85 []
  Rsh_Fir_deopt(85, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // p4 = prom<V +>{
  //   of2 = ld of;
  //   of3 = force? of2;
  //   checkMissing(of3);
  //   return of3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_4, CCP, RHO);
  // p5 = prom<V +>{
  //   parm5 = ld parm;
  //   parm6 = force? parm5;
  //   checkMissing(parm6);
  //   return parm6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_5, CCP, RHO);
  // p6 = prom<V +>{
  //   level1 = ld level;
  //   level2 = force? level1;
  //   checkMissing(level2);
  //   r43 = `-`(1.0, level2);
  //   r44 = `/`(r43, 4.0);
  //   return r44;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_6, CCP, RHO);
  // p7 = prom<V +>{
  //   trace1 = ld trace;
  //   trace2 = force? trace1;
  //   checkMissing(trace2);
  //   return trace2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_7, CCP, RHO);
  // p8 = prom<V +>{
  //   test10 = ld test;
  //   test11 = force? test10;
  //   checkMissing(test11);
  //   return test11;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_8, CCP, RHO);
  // r48 = dyn profile[, which, alpha, trace, test](p4, p5, p6, p7, p8)
  SEXP Rsh_Fir_array_args73[5];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args73[3] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args73[4] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names22[5];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 50);
  Rsh_Fir_array_arg_names22[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names22[4] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_profile, 5, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L82() else D23()
  // L82()
  goto L82_;

D23_:;
  // deopt 95 [r48]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L82_:;
  // st object = r48
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // goto L21()
  // L21()
  goto L21_;

D24_:;
  // deopt 100 [1.0, level3]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_level3_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L84_:;
  // level4 = force? level3
  Rsh_Fir_reg_level4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_level3_);
  // checkMissing(level4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_level4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r50 = `-`(1.0, level4)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_level4_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // r51 = `/`(r50, 2.0)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // st a = r51
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard10 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L85_:;
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L87() else D25()
  // L87()
  goto L87_;

L86_:;
  // r52 = dyn base10(<sym a>, <lang `-`(1.0, a)>)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L22(r52)
  // L22(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L22_;

D25_:;
  // deopt 108 [a]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L87_:;
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // a2 = ld a
  Rsh_Fir_reg_a2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L88() else D26()
  // L88()
  goto L88_;

D26_:;
  // deopt 111 [1.0, a2]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_a2_;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L88_:;
  // a3 = force? a2
  Rsh_Fir_reg_a3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a2_);
  // checkMissing(a3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_a3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r54 = `-`(1.0, a3)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_a3_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r55 = dyn c7(a1, r54)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L89() else D27()
  // L89()
  goto L89_;

D27_:;
  // deopt 115 [r55]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L22(r55)
  // L22(r55)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r55_;
  goto L22_;

D28_:;
  // deopt 118 []
  Rsh_Fir_deopt(118, 0, NULL, CCP, RHO);
  return R_NilValue;

L90_:;
  // p9 = prom<V +>{
  //   sym11 = ldf round;
  //   base11 = ldf round in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L1() else L2();
  // L0(r57):
  //   return r57;
  // L1():
  //   round = ldf round in base;
  //   r58 = dyn round(<lang `*`(100.0, a)>, 1.0);
  //   goto L0(r58);
  // L2():
  //   r56 = dyn base11(<lang `*`(100.0, a)>, 1.0);
  //   goto L0(r56);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_9, CCP, RHO);
  // r60 = dyn paste(p9, "%")
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L91() else D29()
  // L91()
  goto L91_;

D29_:;
  // deopt 121 [r60]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L91_:;
  // st pct = r60
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // array = ldf array
  Rsh_Fir_reg_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L92() else D30()
  // L92()
  goto L92_;

D30_:;
  // deopt 124 []
  Rsh_Fir_deopt(124, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // p10 = prom<V +>{
  //   sym12 = ldf c;
  //   base12 = ldf c in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L2() else L3();
  // L0(r62):
  //   return r62;
  // L2():
  //   sym13 = ldf length;
  //   base13 = ldf length in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L4() else L5();
  // L3():
  //   r61 = dyn base12(<lang length(parm)>, 2);
  //   goto L0(r61);
  // L1(r64):
  //   c8 = ldf c in base;
  //   r66 = dyn c8(r64, 2);
  //   goto L0(r66);
  // L4():
  //   parm7 = ld parm;
  //   parm8 = force? parm7;
  //   checkMissing(parm8);
  //   length = ldf length in base;
  //   r65 = dyn length(parm8);
  //   goto L1(r65);
  // L5():
  //   r63 = dyn base13(<sym parm>);
  //   goto L1(r63);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_10, CCP, RHO);
  // p11 = prom<V +>{
  //   sym14 = ldf list;
  //   base14 = ldf list in base;
  //   guard14 = `==`.4(sym14, base14);
  //   if guard14 then L2() else L3();
  // L0(r69):
  //   return r69;
  // L2():
  //   pnames4 = ld pnames;
  //   pnames5 = force? pnames4;
  //   checkMissing(pnames5);
  //   c9 = `is.object`(pnames5);
  //   if c9 then L4() else L5(pnames5);
  // L3():
  //   r68 = dyn base14(<lang `[`(pnames, parm)>, <sym pct>);
  //   goto L0(r68);
  // L1(dx1):
  //   pct = ld pct;
  //   pct1 = force? pct;
  //   checkMissing(pct1);
  //   list = ldf list in base;
  //   r71 = dyn list(dx1, pct1);
  //   goto L0(r71);
  // L4():
  //   dr = tryDispatchBuiltin.1("[", pnames5);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(pnames7):
  //   parm9 = ld parm;
  //   parm10 = force? parm9;
  //   __1 = ldf `[` in base;
  //   r70 = dyn __1(pnames7, parm10);
  //   goto L1(r70);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_11, CCP, RHO);
  // r73 = dyn array[, dim, dimnames](NA_LGL, p10, p11)
  SEXP Rsh_Fir_array_args104[3];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args104[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 66);
  Rsh_Fir_array_arg_names35[2] = Rsh_const(CCP, 67);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array, 3, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L93() else D31()
  // L93()
  goto L93_;

D31_:;
  // deopt 130 [r73]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L93_:;
  // st ci = r73
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // qnorm = ldf qnorm
  Rsh_Fir_reg_qnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L94() else D32()
  // L94()
  goto L94_;

D32_:;
  // deopt 133 []
  Rsh_Fir_deopt(133, 0, NULL, CCP, RHO);
  return R_NilValue;

L94_:;
  // p12 = prom<V +>{
  //   a4 = ld a;
  //   a5 = force? a4;
  //   checkMissing(a5);
  //   return a5;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_12, CCP, RHO);
  // r75 = dyn qnorm(p12)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qnorm, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L95() else D33()
  // L95()
  goto L95_;

D33_:;
  // deopt 135 [r75]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L95_:;
  // st cutoff = r75
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // parm11 = ld parm
  Rsh_Fir_reg_parm11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L96() else D34()
  // L96()
  goto L96_;

D34_:;
  // deopt 137 [parm11]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_parm11_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L96_:;
  // parm12 = force? parm11
  Rsh_Fir_reg_parm12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm11_);
  // checkMissing(parm12)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_parm12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // s = toForSeq(parm12)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_parm12_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 36);
  // goto L23(i)
  // L23(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L23_;

L97_:;
  // sym17 = ldf drop
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // base17 = ldf drop in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args110);
  // if guard17 then L137() else L138()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L137()
    goto L137_;
  } else {
  // L138()
    goto L138_;
  }

D35_:;
  // deopt 139 [i2, object9]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(139, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L98_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(object10)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if c11 then L99() else L100(i2, object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L99()
    goto L99_;
  } else {
  // L100(i2, object10)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L100_;
  }

L99_:;
  // dr2 = tryDispatchBuiltin.1("[[", object10)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc1 then L101() else L100(i2, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L101()
    goto L101_;
  } else {
  // L100(i2, dr2)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr2_;
    goto L100_;
  }

L100_:;
  // pnames8 = ld pnames
  Rsh_Fir_reg_pnames8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L102() else D36()
  // L102()
  goto L102_;

L101_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L24(i2, dx2)
  // L24(i2, dx2)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L24_;

D36_:;
  // deopt 141 [i6, object12, pnames8]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_pnames8_;
  Rsh_Fir_deopt(141, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L102_:;
  // pnames9 = force? pnames8
  Rsh_Fir_reg_pnames9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames8_);
  // checkMissing(pnames9)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_pnames9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(pnames9)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_pnames9_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if c12 then L103() else L104(i6, object12, pnames9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L103()
    goto L103_;
  } else {
  // L104(i6, object12, pnames9)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i6_;
    Rsh_Fir_reg_object14_ = Rsh_Fir_reg_object12_;
    Rsh_Fir_reg_pnames11_ = Rsh_Fir_reg_pnames9_;
    goto L104_;
  }

L103_:;
  // dr4 = tryDispatchBuiltin.1("[", pnames9)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_pnames9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args118);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if dc2 then L105() else L104(i6, object12, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L105()
    goto L105_;
  } else {
  // L104(i6, object12, dr4)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i6_;
    Rsh_Fir_reg_object14_ = Rsh_Fir_reg_object12_;
    Rsh_Fir_reg_pnames11_ = Rsh_Fir_reg_dr4_;
    goto L104_;
  }

L104_:;
  // pm = ld pm
  Rsh_Fir_reg_pm = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L106() else D37()
  // L106()
  goto L106_;

L105_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L25(i6, object12, dx4)
  // L25(i6, object12, dx4)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object12_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L25_;

D37_:;
  // deopt 143 [i10, object14, pnames11, pm]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_pnames11_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_pm;
  Rsh_Fir_deopt(143, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L106_:;
  // pm1 = force? pm
  Rsh_Fir_reg_pm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pm);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r76 = dyn __2(pnames11, pm1)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_pnames11_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_pm1_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L25(i10, object14, r76)
  // L25(i10, object14, r76)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r76_;
  goto L25_;

L107_:;
  // pro = ld pro
  Rsh_Fir_reg_pro = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L109() else D38()
  // L109()
  goto L109_;

L108_:;
  // r78 = dyn base15(<sym pro>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L26(i8, r78)
  // L26(i8, r78)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L26_;

D38_:;
  // deopt 149 [i8, pro]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_pro;
  Rsh_Fir_deopt(149, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L109_:;
  // pro1 = force? pro
  Rsh_Fir_reg_pro1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pro);
  // checkMissing(pro1)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_pro1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // c13 = `==`(pro1, NULL)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_pro1_;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L26(i8, c13)
  // L26(i8, c13)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_c13_;
  goto L26_;

L110_:;
  // goto L23(i15)
  // L23(i15)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i15_;
  goto L23_;

L113_:;
  // pnames12 = ld pnames
  Rsh_Fir_reg_pnames12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L115() else D39()
  // L115()
  goto L115_;

L114_:;
  // r81 = dyn base16(<sym pnames>)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L29(i15, r81)
  // L29(i15, r81)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L29_;

D39_:;
  // deopt 158 [i15, pnames12]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_pnames12_;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L115_:;
  // pnames13 = force? pnames12
  Rsh_Fir_reg_pnames13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames12_);
  // checkMissing(pnames13)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_pnames13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r83 = dyn length1(pnames13)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_pnames13_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L116() else D40()
  // L116()
  goto L116_;

D40_:;
  // deopt 161 [i15, r83]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(161, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L29(i15, r83)
  // L29(i15, r83)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L29_;

L117_:;
  // spline = ldf spline
  Rsh_Fir_reg_spline = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L118() else D41()
  // L118()
  goto L118_;

D41_:;
  // deopt 165 [i22]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L118_:;
  // p13 = prom<V +>{
  //   pro2 = ld pro;
  //   pro3 = force? pro2;
  //   checkMissing(pro3);
  //   c16 = `is.object`(pro3);
  //   if c16 then L2() else L3();
  // L0(dx7):
  //   c17 = `is.object`(dx7);
  //   if c17 then L5() else L6();
  // L2():
  //   dr6 = tryDispatchBuiltin.1("[", pro3);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L4() else L3();
  // L3():
  //   __4 = ldf `[` in base;
  //   r85 = dyn __4(pro3, <missing>, "par.vals");
  //   goto L0(r85);
  // L1(dx11):
  //   return dx11;
  // L4():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // L5():
  //   dr8 = tryDispatchBuiltin.1("[", dx7);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L7() else L6();
  // L6():
  //   pm2 = ld pm;
  //   pm3 = force? pm2;
  //   __5 = ldf `[` in base;
  //   r86 = dyn __5(dx7, <missing>, pm3);
  //   goto L1(r86);
  // L7():
  //   dx10 = getTryDispatchBuiltinValue(dr8);
  //   goto L1(dx10);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_13, CCP, RHO);
  // p14 = prom<V +>{
  //   pro6 = ld pro;
  //   pro7 = force? pro6;
  //   checkMissing(pro7);
  //   c18 = `is.object`(pro7);
  //   if c18 then L1() else L2();
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", pro7);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2();
  // L2():
  //   __6 = ldf `[` in base;
  //   r88 = dyn __6(pro7, <missing>, 1.0);
  //   goto L0(r88);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_14, CCP, RHO);
  // r90 = dyn spline[x, y](p13, p14)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_arg_names44[1] = Rsh_const(CCP, 74);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spline, 2, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L119() else D42()
  // L119()
  goto L119_;

D42_:;
  // deopt 170 [i22, r90]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(170, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L119_:;
  // st sp = r90
  Rsh_Fir_store(Rsh_const(CCP, 75), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // goto L31(i22)
  // L31(i22)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i22_;
  goto L31_;

D43_:;
  // deopt 173 [i22]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_deopt(173, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L121_:;
  // p15 = prom<V +>{
  //   pro10 = ld pro;
  //   pro11 = force? pro10;
  //   checkMissing(pro11);
  //   c19 = `is.object`(pro11);
  //   if c19 then L1() else L2();
  // L0(dx15):
  //   return dx15;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", pro11);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2();
  // L2():
  //   __7 = ldf `[` in base;
  //   r92 = dyn __7(pro11, <missing>, "par.vals");
  //   goto L0(r92);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_15, CCP, RHO);
  // p16 = prom<V +>{
  //   pro14 = ld pro;
  //   pro15 = force? pro14;
  //   checkMissing(pro15);
  //   c20 = `is.object`(pro15);
  //   if c20 then L1() else L2();
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[", pro15);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2();
  // L2():
  //   __8 = ldf `[` in base;
  //   r94 = dyn __8(pro15, <missing>, 1.0);
  //   goto L0(r94);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_16, CCP, RHO);
  // r96 = dyn spline1[x, y](p15, p16)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_arg_names47[1] = Rsh_const(CCP, 74);
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spline1_, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L122() else D44()
  // L122()
  goto L122_;

D44_:;
  // deopt 178 [i22, r96]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L122_:;
  // st sp = r96
  Rsh_Fir_store(Rsh_const(CCP, 75), Rsh_Fir_reg_r96_, RHO);
  (void)(Rsh_Fir_reg_r96_);
  // goto L31(i22)
  // L31(i22)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i22_;
  goto L31_;

D45_:;
  // deopt 181 [i25]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L123_:;
  // p17 = prom<V +>{
  //   sp = ld sp;
  //   sp1 = force? sp;
  //   checkMissing(sp1);
  //   c21 = `is.object`(sp1);
  //   if c21 then L1() else L2(sp1);
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("$", sp1);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(sp3):
  //   r97 = `$`(sp3, <sym y>);
  //   goto L0(r97);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_17, CCP, RHO);
  // p18 = prom<V +>{
  //   sp4 = ld sp;
  //   sp5 = force? sp4;
  //   checkMissing(sp5);
  //   c22 = `is.object`(sp5);
  //   if c22 then L1() else L2(sp5);
  // L0(dx21):
  //   return dx21;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("$", sp5);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(sp7):
  //   r99 = `$`(sp7, <sym x>);
  //   goto L0(r99);
  // L3():
  //   dx20 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx20);
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_18, CCP, RHO);
  // p19 = prom<V +>{
  //   cutoff = ld cutoff;
  //   cutoff1 = force? cutoff;
  //   checkMissing(cutoff1);
  //   return cutoff1;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2393499510_19, CCP, RHO);
  // r102 = dyn approx[, , xout](p17, p18, p19)
  SEXP Rsh_Fir_array_args172[3];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args172[2] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names48[3];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_array_arg_names48[2] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_approx, 3, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L124() else D46()
  // L124()
  goto L124_;

D46_:;
  // deopt 186 [i25, r102]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(186, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L124_:;
  // c23 = `is.object`(r102)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if c23 then L126() else L127(i25, r102)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L126()
    goto L126_;
  } else {
  // L127(i25, r102)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r102_;
    goto L127_;
  }

L125_:;
  // l2 = ld ci
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // c24 = `is.object`(l2)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // if c24 then L129() else L130(i29, dx23, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L129()
    goto L129_;
  } else {
  // L130(i29, dx23, l2)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L130_;
  }

L126_:;
  // dr20 = tryDispatchBuiltin.1("$", r102)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_r102_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args175);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if dc10 then L128() else L127(i25, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L128()
    goto L128_;
  } else {
  // L127(i25, dr20)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_r104_ = Rsh_Fir_reg_dr20_;
    goto L127_;
  }

L127_:;
  // r105 = `$`(r104, <sym y>)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_args177[1] = Rsh_const(CCP, 74);
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L125(i27, r105)
  // L125(i27, r105)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r105_;
  goto L125_;

L128_:;
  // dx22 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // goto L125(i25, dx22)
  // L125(i25, dx22)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L125_;

L129_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l2, dx23)
  SEXP Rsh_Fir_array_args179[3];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args179[2] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args179);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // if dc11 then L131() else L130(i29, dx23, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L131()
    goto L131_;
  } else {
  // L130(i29, dx23, dr22)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr22_;
    goto L130_;
  }

L130_:;
  // pnames14 = ld pnames
  Rsh_Fir_reg_pnames14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L132() else D47()
  // L132()
  goto L132_;

L131_:;
  // dx27 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // goto L32(i29, dx27)
  // L32(i29, dx27)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
  goto L32_;

D47_:;
  // deopt 189 [i31, dx25, l4, dx23, pnames14]
  SEXP Rsh_Fir_array_deopt_stack40[5];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack40[4] = Rsh_Fir_reg_pnames14_;
  Rsh_Fir_deopt(189, 5, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L132_:;
  // pnames15 = force? pnames14
  Rsh_Fir_reg_pnames15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames14_);
  // checkMissing(pnames15)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_pnames15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(pnames15)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_pnames15_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // if c25 then L133() else L134(i31, dx25, l4, dx23, pnames15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L133()
    goto L133_;
  } else {
  // L134(i31, dx25, l4, dx23, pnames15)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx25_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_pnames17_ = Rsh_Fir_reg_pnames15_;
    goto L134_;
  }

L133_:;
  // dr24 = tryDispatchBuiltin.1("[", pnames15)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_pnames15_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args184);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // if dc12 then L135() else L134(i31, dx25, l4, dx23, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L135()
    goto L135_;
  } else {
  // L134(i31, dx25, l4, dx23, dr24)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx25_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_pnames17_ = Rsh_Fir_reg_dr24_;
    goto L134_;
  }

L134_:;
  // pm4 = ld pm
  Rsh_Fir_reg_pm4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L136() else D48()
  // L136()
  goto L136_;

L135_:;
  // dx36 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // goto L33(i31, dx25, dx23, dx36)
  // L33(i31, dx25, dx23, dx36)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx36_;
  goto L33_;

D48_:;
  // deopt 191 [i35, dx32, l6, dx33, pnames17, pm4]
  SEXP Rsh_Fir_array_deopt_stack41[6];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_dx32_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack41[3] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_deopt_stack41[4] = Rsh_Fir_reg_pnames17_;
  Rsh_Fir_array_deopt_stack41[5] = Rsh_Fir_reg_pm4_;
  Rsh_Fir_deopt(191, 6, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L136_:;
  // pm5 = force? pm4
  Rsh_Fir_reg_pm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pm4_);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r106 = dyn __9(pnames17, pm5)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_pnames17_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_pm5_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L33(i35, dx32, dx33, r106)
  // L33(i35, dx32, dx33, r106)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx32_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r106_;
  goto L33_;

L137_:;
  // ci = ld ci
  Rsh_Fir_reg_ci = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L139() else D49()
  // L139()
  goto L139_;

L138_:;
  // r108 = dyn base17(<sym ci>)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L35(r108)
  // L35(r108)
  Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r108_;
  goto L35_;

D49_:;
  // deopt 203 [ci]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_ci;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L139_:;
  // ci1 = force? ci
  Rsh_Fir_reg_ci1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ci);
  // checkMissing(ci1)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_ci1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // drop = ldf drop in base
  Rsh_Fir_reg_drop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // r110 = dyn drop(ci1)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_ci1_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop, 1, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L140() else D50()
  // L140()
  goto L140_;

D50_:;
  // deopt 206 [r110]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L140_:;
  // goto L35(r110)
  // L35(r110)
  Rsh_Fir_reg_r109_ = Rsh_Fir_reg_r110_;
  goto L35_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_(SEXP CCP, SEXP RHO) {
  // sym = ldf seq_along
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
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
  // pnames = ld pnames
  Rsh_Fir_reg_pnames = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // pnames1 = force? pnames
  Rsh_Fir_reg_pnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames);
  // checkMissing(pnames1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_pnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // r2 = seq_along(pnames1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_pnames1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym pnames>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r6 = dyn attr(object2, "test")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym object>, "test")
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_2(SEXP CCP, SEXP RHO) {
  // of = ld of
  Rsh_Fir_reg_of = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // of1 = force? of
  Rsh_Fir_reg_of1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_of);
  // checkMissing(of1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_of1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return of1
  return Rsh_Fir_reg_of1_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_3(SEXP CCP, SEXP RHO) {
  // test8 = ld test
  Rsh_Fir_reg_test8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // test9 = force? test8
  Rsh_Fir_reg_test9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test8_);
  // checkMissing(test9)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_test9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return test9
  return Rsh_Fir_reg_test9_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_4(SEXP CCP, SEXP RHO) {
  // of2 = ld of
  Rsh_Fir_reg_of2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // of3 = force? of2
  Rsh_Fir_reg_of3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_of2_);
  // checkMissing(of3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_of3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return of3
  return Rsh_Fir_reg_of3_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_5(SEXP CCP, SEXP RHO) {
  // parm5 = ld parm
  Rsh_Fir_reg_parm5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // parm6 = force? parm5
  Rsh_Fir_reg_parm6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm5_);
  // checkMissing(parm6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_parm6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return parm6
  return Rsh_Fir_reg_parm6_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_6(SEXP CCP, SEXP RHO) {
  // level1 = ld level
  Rsh_Fir_reg_level1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // level2 = force? level1
  Rsh_Fir_reg_level2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_level1_);
  // checkMissing(level2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_level2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // r43 = `-`(1.0, level2)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_level2_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // r44 = `/`(r43, 4.0)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // return r44
  return Rsh_Fir_reg_r44_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_7(SEXP CCP, SEXP RHO) {
  // trace1 = ld trace
  Rsh_Fir_reg_trace1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // trace2 = force? trace1
  Rsh_Fir_reg_trace2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trace1_);
  // checkMissing(trace2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_trace2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return trace2
  return Rsh_Fir_reg_trace2_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_8(SEXP CCP, SEXP RHO) {
  // test10 = ld test
  Rsh_Fir_reg_test10_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // test11 = force? test10
  Rsh_Fir_reg_test11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test10_);
  // checkMissing(test11)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_test11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // return test11
  return Rsh_Fir_reg_test11_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_9(SEXP CCP, SEXP RHO) {
  // sym11 = ldf round
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base11 = ldf round in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard11 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r57
  return Rsh_Fir_reg_r57_;

L1_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r58 = dyn round(<lang `*`(100.0, a)>, 1.0)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r58)
  // L0(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L0_;

L2_:;
  // r56 = dyn base11(<lang `*`(100.0, a)>, 1.0)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_10(SEXP CCP, SEXP RHO) {
  // sym12 = ldf c
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base12 = ldf c in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard12 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r62
  return Rsh_Fir_reg_r62_;

L1_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r66 = dyn c8(r64, 2)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r66)
  // L0(r66)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r66_;
  goto L0_;

L2_:;
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard13 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r61 = dyn base12(<lang length(parm)>, 2)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r61)
  // L0(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L0_;

L4_:;
  // parm7 = ld parm
  Rsh_Fir_reg_parm7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // parm8 = force? parm7
  Rsh_Fir_reg_parm8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm7_);
  // checkMissing(parm8)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_parm8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r65 = dyn length(parm8)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_parm8_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L1(r65)
  // L1(r65)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L1_;

L5_:;
  // r63 = dyn base13(<sym parm>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L1(r63)
  // L1(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_11(SEXP CCP, SEXP RHO) {
  // sym14 = ldf list
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base14 = ldf list in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard14 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r69
  return Rsh_Fir_reg_r69_;

L1_:;
  // pct = ld pct
  Rsh_Fir_reg_pct = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // pct1 = force? pct
  Rsh_Fir_reg_pct1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pct);
  // checkMissing(pct1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_pct1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r71 = dyn list(dx1, pct1)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_pct1_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r71)
  // L0(r71)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r71_;
  goto L0_;

L2_:;
  // pnames4 = ld pnames
  Rsh_Fir_reg_pnames4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // pnames5 = force? pnames4
  Rsh_Fir_reg_pnames5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames4_);
  // checkMissing(pnames5)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_pnames5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(pnames5)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_pnames5_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c9 then L4() else L5(pnames5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L4()
    goto L4_;
  } else {
  // L5(pnames5)
    Rsh_Fir_reg_pnames7_ = Rsh_Fir_reg_pnames5_;
    goto L5_;
  }

L3_:;
  // r68 = dyn base14(<lang `[`(pnames, parm)>, <sym pct>)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r68)
  // L0(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L0_;

L4_:;
  // dr = tryDispatchBuiltin.1("[", pnames5)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_pnames5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_pnames7_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // parm9 = ld parm
  Rsh_Fir_reg_parm9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // parm10 = force? parm9
  Rsh_Fir_reg_parm10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm9_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r70 = dyn __1(pnames7, parm10)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_pnames7_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_parm10_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L1(r70)
  // L1(r70)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r70_;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_12(SEXP CCP, SEXP RHO) {
  // a4 = ld a
  Rsh_Fir_reg_a4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // a5 = force? a4
  Rsh_Fir_reg_a5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a4_);
  // checkMissing(a5)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_a5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return a5
  return Rsh_Fir_reg_a5_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_13(SEXP CCP, SEXP RHO) {
  // pro2 = ld pro
  Rsh_Fir_reg_pro2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // pro3 = force? pro2
  Rsh_Fir_reg_pro3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pro2_);
  // checkMissing(pro3)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_pro3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(pro3)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_pro3_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if c16 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c17 = `is.object`(dx7)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if c17 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L2_:;
  // dr6 = tryDispatchBuiltin.1("[", pro3)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_pro3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args131);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if dc3 then L4() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L4()
    goto L4_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r85 = dyn __4(pro3, <missing>, "par.vals")
  SEXP Rsh_Fir_array_args133[3];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_pro3_;
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args133[2] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L0(r85)
  // L0(r85)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r85_;
  goto L0_;

L4_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;

L5_:;
  // dr8 = tryDispatchBuiltin.1("[", dx7)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc4 then L7() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L7()
    goto L7_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // pm2 = ld pm
  Rsh_Fir_reg_pm2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // pm3 = force? pm2
  Rsh_Fir_reg_pm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pm2_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r86 = dyn __5(dx7, <missing>, pm3)
  SEXP Rsh_Fir_array_args137[3];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args137[2] = Rsh_Fir_reg_pm3_;
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 3, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L1(r86)
  // L1(r86)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r86_;
  goto L1_;

L7_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L1(dx10)
  // L1(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_14(SEXP CCP, SEXP RHO) {
  // pro6 = ld pro
  Rsh_Fir_reg_pro6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // pro7 = force? pro6
  Rsh_Fir_reg_pro7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pro6_);
  // checkMissing(pro7)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_pro7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(pro7)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_pro7_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c18 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", pro7)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_pro7_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args141);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r88 = dyn __6(pro7, <missing>, 1.0)
  SEXP Rsh_Fir_array_args143[3];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_pro7_;
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args143[2] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 3, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r88)
  // L0(r88)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r88_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_15(SEXP CCP, SEXP RHO) {
  // pro10 = ld pro
  Rsh_Fir_reg_pro10_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // pro11 = force? pro10
  Rsh_Fir_reg_pro11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pro10_);
  // checkMissing(pro11)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_pro11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(pro11)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_pro11_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // if c19 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", pro11)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_pro11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args148);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r92 = dyn __7(pro11, <missing>, "par.vals")
  SEXP Rsh_Fir_array_args150[3];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_pro11_;
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args150[2] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 3, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r92)
  // L0(r92)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r92_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_16(SEXP CCP, SEXP RHO) {
  // pro14 = ld pro
  Rsh_Fir_reg_pro14_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // pro15 = force? pro14
  Rsh_Fir_reg_pro15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pro14_);
  // checkMissing(pro15)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_pro15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(pro15)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_pro15_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if c20 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[", pro15)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_pro15_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args154);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r94 = dyn __8(pro15, <missing>, 1.0)
  SEXP Rsh_Fir_array_args156[3];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_pro15_;
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args156[2] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names46[3];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 3, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r94)
  // L0(r94)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r94_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_17(SEXP CCP, SEXP RHO) {
  // sp = ld sp
  Rsh_Fir_reg_sp = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // sp1 = force? sp
  Rsh_Fir_reg_sp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sp);
  // checkMissing(sp1)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_sp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(sp1)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_sp1_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if c21 then L1() else L2(sp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L1()
    goto L1_;
  } else {
  // L2(sp1)
    Rsh_Fir_reg_sp3_ = Rsh_Fir_reg_sp1_;
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("$", sp1)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_sp1_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args161);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_sp3_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // r97 = `$`(sp3, <sym y>)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_sp3_;
  Rsh_Fir_array_args163[1] = Rsh_const(CCP, 74);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // goto L0(r97)
  // L0(r97)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r97_;
  goto L0_;

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_18(SEXP CCP, SEXP RHO) {
  // sp4 = ld sp
  Rsh_Fir_reg_sp4_ = Rsh_Fir_load(Rsh_const(CCP, 75), RHO);
  // sp5 = force? sp4
  Rsh_Fir_reg_sp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sp4_);
  // checkMissing(sp5)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_sp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(sp5)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_sp5_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if c22 then L1() else L2(sp5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L1()
    goto L1_;
  } else {
  // L2(sp5)
    Rsh_Fir_reg_sp7_ = Rsh_Fir_reg_sp5_;
    goto L2_;
  }

L0_:;
  // return dx21
  return Rsh_Fir_reg_dx21_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("$", sp5)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_sp5_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args167);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_sp7_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // r99 = `$`(sp7, <sym x>)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_sp7_;
  Rsh_Fir_array_args169[1] = Rsh_const(CCP, 73);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L0(r99)
  // L0(r99)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r99_;
  goto L0_;

L3_:;
  // dx20 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2393499510_19(SEXP CCP, SEXP RHO) {
  // cutoff = ld cutoff
  Rsh_Fir_reg_cutoff = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // cutoff1 = force? cutoff
  Rsh_Fir_reg_cutoff1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cutoff);
  // checkMissing(cutoff1)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_cutoff1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // return cutoff1
  return Rsh_Fir_reg_cutoff1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
