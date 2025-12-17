#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1945233054_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1945233054_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1945233054_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1945233054_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3002224933_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3002224933_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1945233054
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1945233054_, RHO, CCP);
  // st `na.contiguous.default` = r
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
SEXP Rsh_Fir_user_function_inner1945233054_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1945233054 dynamic dispatch ([object, doTsp, `...`])

  return Rsh_Fir_user_version_inner1945233054_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1945233054_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1945233054 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1945233054/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_doTsp;  // doTsp
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_doTsp_isMissing;  // doTsp_isMissing
  SEXP Rsh_Fir_reg_doTsp_orDefault;  // doTsp_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_time;  // time
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_frequency;  // frequency
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_object11_;  // object11
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_apply;  // apply
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_all1_;  // all1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_object15_;  // object15
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_good;  // good
  SEXP Rsh_Fir_reg_good1_;  // good1
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_good2_;  // good2
  SEXP Rsh_Fir_reg_good3_;  // good3
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_cumsum;  // cumsum
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sapply;  // sapply
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_tt;  // tt
  SEXP Rsh_Fir_reg_tt1_;  // tt1
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_ln;  // ln
  SEXP Rsh_Fir_reg_ln1_;  // ln1
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_ln2_;  // ln2
  SEXP Rsh_Fir_reg_ln3_;  // ln3
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_ln6_;  // ln6
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_ln7_;  // ln7
  SEXP Rsh_Fir_reg_ln8_;  // ln8
  SEXP Rsh_Fir_reg_max1_;  // max1
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_tt2_;  // tt2
  SEXP Rsh_Fir_reg_tt3_;  // tt3
  SEXP Rsh_Fir_reg_seg;  // seg
  SEXP Rsh_Fir_reg_seg1_;  // seg1
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_keep;  // keep
  SEXP Rsh_Fir_reg_keep1_;  // keep1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_good4_;  // good4
  SEXP Rsh_Fir_reg_good5_;  // good5
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_good7_;  // good7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_st;  // st
  SEXP Rsh_Fir_reg_st1_;  // st1
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_st2_;  // st2
  SEXP Rsh_Fir_reg_st3_;  // st3
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_which1_;  // which1
  SEXP Rsh_Fir_reg_keep2_;  // keep2
  SEXP Rsh_Fir_reg_keep3_;  // keep3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_max2_;  // max2
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_integer;  // integer
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_NROW;  // NROW
  SEXP Rsh_Fir_reg_object17_;  // object17
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_st4_;  // st4
  SEXP Rsh_Fir_reg_st5_;  // st5
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_omit;  // omit
  SEXP Rsh_Fir_reg_omit1_;  // omit1
  SEXP Rsh_Fir_reg_st6_;  // st6
  SEXP Rsh_Fir_reg_st7_;  // st7
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_en;  // en
  SEXP Rsh_Fir_reg_en1_;  // en1
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_omit2_;  // omit2
  SEXP Rsh_Fir_reg_omit3_;  // omit3
  SEXP Rsh_Fir_reg_en2_;  // en2
  SEXP Rsh_Fir_reg_en3_;  // en3
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_omit4_;  // omit4
  SEXP Rsh_Fir_reg_omit5_;  // omit5
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_object19_;  // object19
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_force;  // force
  SEXP Rsh_Fir_reg_doTsp1_;  // doTsp1
  SEXP Rsh_Fir_reg_doTsp2_;  // doTsp2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_object21_;  // object21
  SEXP Rsh_Fir_reg_object22_;  // object22
  SEXP Rsh_Fir_reg_is_matrix1_;  // is_matrix1
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_object23_;  // object23
  SEXP Rsh_Fir_reg_object24_;  // object24
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_object26_;  // object26
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_st8_;  // st8
  SEXP Rsh_Fir_reg_st9_;  // st9
  SEXP Rsh_Fir_reg_en4_;  // en4
  SEXP Rsh_Fir_reg_en5_;  // en5
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_object27_;  // object27
  SEXP Rsh_Fir_reg_object28_;  // object28
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_object30_;  // object30
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_st10_;  // st10
  SEXP Rsh_Fir_reg_st11_;  // st11
  SEXP Rsh_Fir_reg_en6_;  // en6
  SEXP Rsh_Fir_reg_en7_;  // en7
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_omit6_;  // omit6
  SEXP Rsh_Fir_reg_omit7_;  // omit7
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_doTsp3_;  // doTsp3
  SEXP Rsh_Fir_reg_doTsp4_;  // doTsp4
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_tm;  // tm
  SEXP Rsh_Fir_reg_tm1_;  // tm1
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_tm3_;  // tm3
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_st12_;  // st12
  SEXP Rsh_Fir_reg_st13_;  // st13
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_tm4_;  // tm4
  SEXP Rsh_Fir_reg_tm5_;  // tm5
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_tm7_;  // tm7
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_en8_;  // en8
  SEXP Rsh_Fir_reg_en9_;  // en9
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_xfreq;  // xfreq
  SEXP Rsh_Fir_reg_xfreq1_;  // xfreq1
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_tsp__;  // tsp__
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_cl;  // cl
  SEXP Rsh_Fir_reg_cl1_;  // cl1
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_cl2_;  // cl2
  SEXP Rsh_Fir_reg_cl3_;  // cl3
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_cl4_;  // cl4
  SEXP Rsh_Fir_reg_object31_;  // object31
  SEXP Rsh_Fir_reg_object32_;  // object32

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_doTsp = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // doTsp_isMissing = missing.0(doTsp)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_doTsp;
  Rsh_Fir_reg_doTsp_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if doTsp_isMissing then L0() else L1(doTsp)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_doTsp_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(doTsp)
    Rsh_Fir_reg_doTsp_orDefault = Rsh_Fir_reg_doTsp;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf `is.null`;
  //   base = ldf `is.null` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r1):
  //   r5 = `!`(r1);
  //   return r5;
  // L2():
  //   sym1 = ldf attr;
  //   base1 = ldf attr in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L4() else L5();
  // L3():
  //   r = dyn base(<lang attr(object, "tsp")>);
  //   goto L0(r);
  // L1(r3):
  //   c = `==`(r3, NULL);
  //   goto L0(c);
  // L4():
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   attr = ldf attr in base;
  //   r4 = dyn attr(object2, "tsp");
  //   goto L1(r4);
  // L5():
  //   r2 = dyn base1(<sym object>, "tsp");
  //   goto L1(r2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_doTsp_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st doTsp = doTsp_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_doTsp_orDefault, RHO);
  (void)(Rsh_Fir_reg_doTsp_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L2_:;
  // r10 = `!`(r8)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c1 then L50() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L50()
    goto L50_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // time = ldf time
  Rsh_Fir_reg_time = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L54() else D3()
  // L54()
  goto L54_;

L5_:;
  // c2 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c2 then L62() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L62()
    goto L62_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard5 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L7_:;
  // sym6 = ldf sum
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base6 = ldf sum in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard6 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L8_:;
  // r31 = `!`(r29)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // st good = r31
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // goto L7()
  // L7()
  goto L7_;

L9_:;
  // r35 = `!`(r33)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c3 then L74() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L74()
    goto L74_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard7 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L12_:;
  // st tt = r39
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L85() else D20()
  // L85()
  goto L85_;

L13_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r44 = dyn c4(0, r41)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L84() else D19()
  // L84()
  goto L84_;

L14_:;
  // c5 = `is.object`(r57)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c5 then L90() else L91(r57)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L90()
    goto L90_;
  } else {
  // L91(r57)
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r57_;
    goto L91_;
  }

L15_:;
  // c6 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c6 then L98() else L99(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L98()
    goto L98_;
  } else {
  // L99(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L99_;
  }

L16_:;
  // r67 = `==`(ln6, r65)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_ln6_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r68 = dyn __(r64, r67)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L15(r68)
  // L15(r68)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r68_;
  goto L15_;

L17_:;
  // r70 = `-`(dx5, 1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // st seg = r70
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r70_, RHO);
  (void)(Rsh_Fir_reg_r70_);
  // tt2 = ld tt
  Rsh_Fir_reg_tt2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L101() else D26()
  // L101()
  goto L101_;

L18_:;
  // st keep = dx7
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym12 = ldf min
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base12 = ldf min in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard12 then L106() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L106()
    goto L106_;
  } else {
  // L107()
    goto L107_;
  }

L19_:;
  // st st = r76
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // good4 = ld good
  Rsh_Fir_reg_good4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L111() else D31()
  // L111()
  goto L111_;

L20_:;
  // r81 = `!`(dx9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c9 then L116() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L116()
    goto L116_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // sym13 = ldf max
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base13 = ldf max in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard13 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

L23_:;
  // st en = r85
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r85_, RHO);
  (void)(Rsh_Fir_reg_r85_);
  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L124() else D37()
  // L124()
  goto L124_;

L24_:;
  // goto L26()
  // L26()
  goto L26_;

L25_:;
  // st omit = r94
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r94_, RHO);
  (void)(Rsh_Fir_reg_r94_);
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // en = ld en
  Rsh_Fir_reg_en = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L136() else D45()
  // L136()
  goto L136_;

L27_:;
  // goto L29()
  // L29()
  goto L29_;

L28_:;
  // st omit = r101
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r101_, RHO);
  (void)(Rsh_Fir_reg_r101_);
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // sym16 = ldf length
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base16 = ldf length in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard16 then L146() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L146()
    goto L146_;
  } else {
  // L147()
    goto L147_;
  }

L30_:;
  // c14 = `as.logical`(r107)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c14 then L150() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L150()
    goto L150_;
  } else {
  // L31()
    goto L31_;
  }

L31_:;
  // goto L45()
  // L45()
  goto L45_;

L32_:;
  // st cl = r110
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r110_, RHO);
  (void)(Rsh_Fir_reg_r110_);
  // force = ldf force
  Rsh_Fir_reg_force = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L155() else D55()
  // L155()
  goto L155_;

L33_:;
  // c15 = `as.logical`(r115)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c15 then L161() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L161()
    goto L161_;
  } else {
  // L34()
    goto L34_;
  }

L34_:;
  // object27 = ld object
  Rsh_Fir_reg_object27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L169() else D62()
  // L169()
  goto L169_;

L35_:;
  // goto L36(dx11)
  // L36(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L36_;

L36_:;
  // st object = dx12
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx12_, RHO);
  (void)(Rsh_Fir_reg_dx12_);
  // l = ld omit
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L175() else D65()
  // L175()
  goto L175_;

L37_:;
  // goto L41()
  // L41()
  goto L41_;

L38_:;
  // l2 = ld object
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // tsp__ = ldf `tsp<-`
  Rsh_Fir_reg_tsp__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L196() else D77()
  // L196()
  goto L196_;

L39_:;
  // tm4 = ld tm
  Rsh_Fir_reg_tm4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L189() else D73()
  // L189()
  goto L189_;

L40_:;
  // xfreq = ld xfreq
  Rsh_Fir_reg_xfreq = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L194() else D75()
  // L194()
  goto L194_;

L41_:;
  // sym20 = ldf `is.null`
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base20 = ldf `is.null` in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard20 then L199() else L200()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L199()
    goto L199_;
  } else {
  // L200()
    goto L200_;
  }

L42_:;
  // r132 = `!`(r131)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r131_;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r132)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c23 then L202() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L202()
    goto L202_;
  } else {
  // L43()
    goto L43_;
  }

L43_:;
  // goto L44(NULL)
  // L44(NULL)
  Rsh_Fir_reg_cl4_ = Rsh_const(CCP, 3);
  goto L44_;

L44_:;
  // goto L45()
  // L45()
  goto L45_;

L45_:;
  // object31 = ld object
  Rsh_Fir_reg_object31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L208() else D83()
  // L208()
  goto L208_;

L46_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L48() else D0()
  // L48()
  goto L48_;

L47_:;
  // r7 = dyn base2(<sym object>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L2_;

D0_:;
  // deopt 2 [object3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L48_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r9 = dyn length(object4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_object4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L49() else D1()
  // L49()
  goto L49_;

D1_:;
  // deopt 5 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;

L50_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L51() else D2()
  // L51()
  goto L51_;

D2_:;
  // deopt 7 [object5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L51_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return object6
  return Rsh_Fir_reg_object6_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p1 = prom<V +>{
  //   object7 = ld object;
  //   object8 = force? object7;
  //   checkMissing(object8);
  //   return object8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_1, CCP, RHO);
  // r14 = dyn time(p1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_time, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L55() else D4()
  // L55()
  goto L55_;

D4_:;
  // deopt 15 [r14]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L55_:;
  // st tm = r14
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // frequency = ldf frequency
  Rsh_Fir_reg_frequency = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L56() else D5()
  // L56()
  goto L56_;

D5_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p2 = prom<V +>{
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   return object10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_2, CCP, RHO);
  // r16 = dyn frequency(p2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_frequency, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L57() else D6()
  // L57()
  goto L57_;

D6_:;
  // deopt 20 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L57_:;
  // st xfreq = r16
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym3 = ldf `is.matrix`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base3 = ldf `is.matrix` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard3 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // object11 = ld object
  Rsh_Fir_reg_object11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L60() else D7()
  // L60()
  goto L60_;

L59_:;
  // r17 = dyn base3(<sym object>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L5_;

D7_:;
  // deopt 24 [object11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_object11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L60_:;
  // object12 = force? object11
  Rsh_Fir_reg_object12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object11_);
  // checkMissing(object12)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_object12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r19 = dyn is_matrix(object12)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_object12_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L61() else D8()
  // L61()
  goto L61_;

D8_:;
  // deopt 27 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L5(r19)
  // L5(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L5_;

L62_:;
  // apply = ldf apply
  Rsh_Fir_reg_apply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L63() else D9()
  // L63()
  goto L63_;

D9_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // p3 = prom<V +>{
  //   sym4 = ldf `is.na`;
  //   base4 = ldf `is.na` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r21):
  //   r23 = `!`(r21);
  //   return r23;
  // L1():
  //   object13 = ld object;
  //   object14 = force? object13;
  //   checkMissing(object14);
  //   is_na = ldf `is.na` in base;
  //   r22 = dyn is_na(object14);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base4(<sym object>);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_3, CCP, RHO);
  // p4 = prom<V +>{
  //   all = ld all;
  //   all1 = force? all;
  //   checkMissing(all1);
  //   return all1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_4, CCP, RHO);
  // r26 = dyn apply(p3, 1, p4)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args53[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_apply, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L64() else D10()
  // L64()
  goto L64_;

D10_:;
  // deopt 33 [r26]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L64_:;
  // st good = r26
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // goto L7()
  // L7()
  goto L7_;

L66_:;
  // object15 = ld object
  Rsh_Fir_reg_object15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L68() else D11()
  // L68()
  goto L68_;

L67_:;
  // r28 = dyn base5(<sym object>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(r28)
  // L8(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L8_;

D11_:;
  // deopt 37 [object15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_object15_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L68_:;
  // object16 = force? object15
  Rsh_Fir_reg_object16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object15_);
  // checkMissing(object16)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_object16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r30 = dyn is_na1(object16)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_object16_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L69() else D12()
  // L69()
  goto L69_;

D12_:;
  // deopt 40 [r30]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L8(r30)
  // L8(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L8_;

L70_:;
  // good = ld good
  Rsh_Fir_reg_good = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L72() else D13()
  // L72()
  goto L72_;

L71_:;
  // r32 = dyn base6(<sym good>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L9(r32)
  // L9(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L9_;

D13_:;
  // deopt 45 [good]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_good;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L72_:;
  // good1 = force? good
  Rsh_Fir_reg_good1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_good);
  // checkMissing(good1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_good1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r34 = dyn sum(good1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_good1_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L73() else D14()
  // L73()
  goto L73_;

D14_:;
  // deopt 48 [r34]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L9(r34)
  // L9(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L9_;

L74_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L75() else D15()
  // L75()
  goto L75_;

D15_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // r36 = dyn stop("all times contain an NA")
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L76() else D16()
  // L76()
  goto L76_;

D16_:;
  // deopt 53 [r36]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L11()
  // L11()
  goto L11_;

L78_:;
  // sym8 = ldf cumsum
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base8 = ldf cumsum in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard8 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L79_:;
  // r38 = dyn base7(0, <lang cumsum(`!`(good))>)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r38)
  // L12(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L12_;

L80_:;
  // good2 = ld good
  Rsh_Fir_reg_good2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L82() else D17()
  // L82()
  goto L82_;

L81_:;
  // r40 = dyn base8(<lang `!`(good)>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L13(r40)
  // L13(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L13_;

D17_:;
  // deopt 61 [good2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_good2_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L82_:;
  // good3 = force? good2
  Rsh_Fir_reg_good3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_good2_);
  // checkMissing(good3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_good3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r42 = `!`(good3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_good3_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // cumsum = ldf cumsum in base
  Rsh_Fir_reg_cumsum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r43 = dyn cumsum(r42)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cumsum, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L83() else D18()
  // L83()
  goto L83_;

D18_:;
  // deopt 65 [r43]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L13(r43)
  // L13(r43)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r43_;
  goto L13_;

D19_:;
  // deopt 67 [r44]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L12(r44)
  // L12(r44)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r44_;
  goto L12_;

D20_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L85_:;
  // p5 = prom<V +>{
  //   sym9 = ldf max;
  //   base9 = ldf max in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L1() else L2();
  // L0(r48, r49):
  //   r51 = `:`(r48, r49);
  //   return r51;
  // L1():
  //   tt = ld tt;
  //   tt1 = force? tt;
  //   checkMissing(tt1);
  //   max = ldf max in base;
  //   r50 = dyn max(tt1);
  //   goto L0(0.0, r50);
  // L2():
  //   r47 = dyn base9(<sym tt>);
  //   goto L0(0.0, r47);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_5, CCP, RHO);
  // p6 = prom<V +>{
  //   r53 = clos inner3002224933;
  //   return r53;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_6, CCP, RHO);
  // r55 = dyn sapply(p5, p6)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L86() else D21()
  // L86()
  goto L86_;

D21_:;
  // deopt 73 [r55]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L86_:;
  // st ln = r55
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // sym10 = ldf seq_along
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base10 = ldf seq_along in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard10 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L87_:;
  // ln = ld ln
  Rsh_Fir_reg_ln = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L89() else D22()
  // L89()
  goto L89_;

L88_:;
  // r56 = dyn base10(<sym ln>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L14(r56)
  // L14(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L14_;

D22_:;
  // deopt 76 [ln]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_ln;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L89_:;
  // ln1 = force? ln
  Rsh_Fir_reg_ln1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ln);
  // checkMissing(ln1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_ln1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // r58 = seq_along(ln1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_ln1_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L14(r58)
  // L14(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L14_;

L90_:;
  // dr = tryDispatchBuiltin.1("[", r57)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc then L92() else L91(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L92()
    goto L92_;
  } else {
  // L91(dr)
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_dr;
    goto L91_;
  }

L91_:;
  // ln2 = ld ln
  Rsh_Fir_reg_ln2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L93() else D23()
  // L93()
  goto L93_;

L92_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L15(dx)
  // L15(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

D23_:;
  // deopt 79 [r60, ln2]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_ln2_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L93_:;
  // ln3 = force? ln2
  Rsh_Fir_reg_ln3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ln2_);
  // checkMissing(ln3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_ln3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // sym11 = ldf max
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base11 = ldf max in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard11 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L94_:;
  // ln7 = ld ln
  Rsh_Fir_reg_ln7_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L96() else D24()
  // L96()
  goto L96_;

L95_:;
  // r63 = dyn base11(<sym ln>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L16(r60, ln3, r63)
  // L16(r60, ln3, r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_ln6_ = Rsh_Fir_reg_ln3_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r63_;
  goto L16_;

D24_:;
  // deopt 82 [r60, ln3, ln7]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_ln3_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_ln7_;
  Rsh_Fir_deopt(82, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L96_:;
  // ln8 = force? ln7
  Rsh_Fir_reg_ln8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ln7_);
  // checkMissing(ln8)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_ln8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // max1 = ldf max in base
  Rsh_Fir_reg_max1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r66 = dyn max1(ln8)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_ln8_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max1_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L97() else D25()
  // L97()
  goto L97_;

D25_:;
  // deopt 85 [r60, ln3, r66]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_ln3_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(85, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L16(r60, ln3, r66)
  // L16(r60, ln3, r66)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_ln6_ = Rsh_Fir_reg_ln3_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r66_;
  goto L16_;

L98_:;
  // dr2 = tryDispatchBuiltin.1("[", dx1)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc1 then L100() else L99(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L100()
    goto L100_;
  } else {
  // L99(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L99_;
  }

L99_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r69 = dyn __1(dx3, 1)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L17(r69)
  // L17(r69)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r69_;
  goto L17_;

L100_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L17(dx4)
  // L17(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L17_;

D26_:;
  // deopt 94 [tt2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_tt2_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L101_:;
  // tt3 = force? tt2
  Rsh_Fir_reg_tt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt2_);
  // checkMissing(tt3)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_tt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // seg = ld seg
  Rsh_Fir_reg_seg = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L102() else D27()
  // L102()
  goto L102_;

D27_:;
  // deopt 95 [tt3, seg]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_tt3_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_seg;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L102_:;
  // seg1 = force? seg
  Rsh_Fir_reg_seg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_seg);
  // checkMissing(seg1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_seg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // r71 = `==`(tt3, seg1)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_tt3_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_seg1_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // c7 = `is.object`(r71)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c7 then L103() else L104(r71)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L103()
    goto L103_;
  } else {
  // L104(r71)
    Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r71_;
    goto L104_;
  }

L103_:;
  // dr4 = tryDispatchBuiltin.1("[", r71)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc2 then L105() else L104(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L105()
    goto L105_;
  } else {
  // L104(dr4)
    Rsh_Fir_reg_r73_ = Rsh_Fir_reg_dr4_;
    goto L104_;
  }

L104_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r74 = dyn __2(r73, -1)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L18(r74)
  // L18(r74)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r74_;
  goto L18_;

L105_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L18(dx6)
  // L18(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L18_;

L106_:;
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L108() else D28()
  // L108()
  goto L108_;

L107_:;
  // r75 = dyn base12(<lang which(keep)>)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L19(r75)
  // L19(r75)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r75_;
  goto L19_;

D28_:;
  // deopt 105 []
  Rsh_Fir_deopt(105, 0, NULL, CCP, RHO);
  return R_NilValue;

L108_:;
  // p7 = prom<V +>{
  //   keep = ld keep;
  //   keep1 = force? keep;
  //   checkMissing(keep1);
  //   return keep1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_7, CCP, RHO);
  // r78 = dyn which(p7)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L109() else D29()
  // L109()
  goto L109_;

D29_:;
  // deopt 107 [r78]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L109_:;
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r79 = dyn min(r78)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L110() else D30()
  // L110()
  goto L110_;

D30_:;
  // deopt 109 [r79]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L110_:;
  // goto L19(r79)
  // L19(r79)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r79_;
  goto L19_;

D31_:;
  // deopt 111 [good4]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_good4_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L111_:;
  // good5 = force? good4
  Rsh_Fir_reg_good5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_good4_);
  // checkMissing(good5)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_good5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(good5)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_good5_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c8 then L112() else L113(good5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L112()
    goto L112_;
  } else {
  // L113(good5)
    Rsh_Fir_reg_good7_ = Rsh_Fir_reg_good5_;
    goto L113_;
  }

L112_:;
  // dr6 = tryDispatchBuiltin.1("[", good5)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_good5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args103);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc3 then L114() else L113(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L114()
    goto L114_;
  } else {
  // L113(dr6)
    Rsh_Fir_reg_good7_ = Rsh_Fir_reg_dr6_;
    goto L113_;
  }

L113_:;
  // st = ld st
  Rsh_Fir_reg_st = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L115() else D32()
  // L115()
  goto L115_;

L114_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L20(dx8)
  // L20(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L20_;

D32_:;
  // deopt 113 [good7, st]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_good7_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_st;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L115_:;
  // st1 = force? st
  Rsh_Fir_reg_st1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_st);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r80 = dyn __3(good7, st1)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_good7_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_st1_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L20(r80)
  // L20(r80)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r80_;
  goto L20_;

L116_:;
  // st2 = ld st
  Rsh_Fir_reg_st2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L117() else D33()
  // L117()
  goto L117_;

D33_:;
  // deopt 117 [st2]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_st2_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L117_:;
  // st3 = force? st2
  Rsh_Fir_reg_st3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_st2_);
  // checkMissing(st3)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_st3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // r82 = `+`(st3, 1)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_st3_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // st st = r82
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // goto L22()
  // L22()
  goto L22_;

L119_:;
  // which1 = ldf which
  Rsh_Fir_reg_which1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L121() else D34()
  // L121()
  goto L121_;

L120_:;
  // r84 = dyn base13(<lang which(keep)>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L23(r84)
  // L23(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L23_;

D34_:;
  // deopt 127 []
  Rsh_Fir_deopt(127, 0, NULL, CCP, RHO);
  return R_NilValue;

L121_:;
  // p8 = prom<V +>{
  //   keep2 = ld keep;
  //   keep3 = force? keep2;
  //   checkMissing(keep3);
  //   return keep3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_8, CCP, RHO);
  // r87 = dyn which1(p8)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which1_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L122() else D35()
  // L122()
  goto L122_;

D35_:;
  // deopt 129 [r87]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L122_:;
  // max2 = ldf max in base
  Rsh_Fir_reg_max2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r88 = dyn max2(r87)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max2_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L123() else D36()
  // L123()
  goto L123_;

D36_:;
  // deopt 131 [r88]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L23(r88)
  // L23(r88)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r88_;
  goto L23_;

D37_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L124_:;
  // r89 = dyn integer()
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 0, NULL, NULL, CCP, RHO);
  // check L125() else D38()
  // L125()
  goto L125_;

D38_:;
  // deopt 135 [r89]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L125_:;
  // st omit = r89
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r89_, RHO);
  (void)(Rsh_Fir_reg_r89_);
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L126() else D39()
  // L126()
  goto L126_;

D39_:;
  // deopt 138 []
  Rsh_Fir_deopt(138, 0, NULL, CCP, RHO);
  return R_NilValue;

L126_:;
  // p9 = prom<V +>{
  //   object17 = ld object;
  //   object18 = force? object17;
  //   checkMissing(object18);
  //   return object18;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_9, CCP, RHO);
  // r91 = dyn NROW(p9)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L127() else D40()
  // L127()
  goto L127_;

D40_:;
  // deopt 140 [r91]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L127_:;
  // st n = r91
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r91_, RHO);
  (void)(Rsh_Fir_reg_r91_);
  // st4 = ld st
  Rsh_Fir_reg_st4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L128() else D41()
  // L128()
  goto L128_;

D41_:;
  // deopt 142 [st4]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_st4_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L128_:;
  // st5 = force? st4
  Rsh_Fir_reg_st5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_st4_);
  // checkMissing(st5)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_st5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // r92 = `>`(st5, 1)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_st5_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r92)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if c10 then L129() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L129()
    goto L129_;
  } else {
  // L24()
    goto L24_;
  }

L129_:;
  // sym14 = ldf c
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base14 = ldf c in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard14 then L130() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L130()
    goto L130_;
  } else {
  // L131()
    goto L131_;
  }

L130_:;
  // omit = ld omit
  Rsh_Fir_reg_omit = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L132() else D42()
  // L132()
  goto L132_;

L131_:;
  // r93 = dyn base14(<sym omit>, <lang `:`(1, `(`(`-`(st, 1)))>)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L25(r93)
  // L25(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L25_;

D42_:;
  // deopt 148 [omit]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_omit;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L132_:;
  // omit1 = force? omit
  Rsh_Fir_reg_omit1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit);
  // checkMissing(omit1)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_omit1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // st6 = ld st
  Rsh_Fir_reg_st6_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L133() else D43()
  // L133()
  goto L133_;

D43_:;
  // deopt 151 [1, st6]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_st6_;
  Rsh_Fir_deopt(151, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L133_:;
  // st7 = force? st6
  Rsh_Fir_reg_st7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_st6_);
  // checkMissing(st7)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_st7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // r95 = `-`(st7, 1)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_st7_;
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // r96 = `:`(1, r95)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r97 = dyn c11(omit1, r96)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_omit1_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 2, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L134() else D44()
  // L134()
  goto L134_;

D44_:;
  // deopt 157 [r97]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L134_:;
  // goto L25(r97)
  // L25(r97)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r97_;
  goto L25_;

D45_:;
  // deopt 161 [en]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_en;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L136_:;
  // en1 = force? en
  Rsh_Fir_reg_en1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_en);
  // checkMissing(en1)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_en1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L137() else D46()
  // L137()
  goto L137_;

D46_:;
  // deopt 162 [en1, n]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_en1_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(162, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L137_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // r99 = `<`(en1, n1)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_en1_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r99)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c12 then L138() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L138()
    goto L138_;
  } else {
  // L27()
    goto L27_;
  }

L138_:;
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard15 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L139_:;
  // omit2 = ld omit
  Rsh_Fir_reg_omit2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L141() else D47()
  // L141()
  goto L141_;

L140_:;
  // r100 = dyn base15(<sym omit>, <lang `:`(`(`(`+`(en, 1)), n)>)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L28(r100)
  // L28(r100)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r100_;
  goto L28_;

D47_:;
  // deopt 167 [omit2]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_omit2_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L141_:;
  // omit3 = force? omit2
  Rsh_Fir_reg_omit3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit2_);
  // checkMissing(omit3)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_omit3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // en2 = ld en
  Rsh_Fir_reg_en2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L142() else D48()
  // L142()
  goto L142_;

D48_:;
  // deopt 169 [en2]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_en2_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L142_:;
  // en3 = force? en2
  Rsh_Fir_reg_en3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_en2_);
  // checkMissing(en3)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_en3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // r102 = `+`(en3, 1)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_en3_;
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L143() else D49()
  // L143()
  goto L143_;

D49_:;
  // deopt 172 [r102, n2]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(172, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L143_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // r103 = `:`(r102, n3)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r104 = dyn c13(omit3, r103)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_omit3_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L144() else D50()
  // L144()
  goto L144_;

D50_:;
  // deopt 176 [r104]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L144_:;
  // goto L28(r104)
  // L28(r104)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r104_;
  goto L28_;

L146_:;
  // omit4 = ld omit
  Rsh_Fir_reg_omit4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L148() else D51()
  // L148()
  goto L148_;

L147_:;
  // r106 = dyn base16(<sym omit>)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L30(r106)
  // L30(r106)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r106_;
  goto L30_;

D51_:;
  // deopt 182 [omit4]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_omit4_;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L148_:;
  // omit5 = force? omit4
  Rsh_Fir_reg_omit5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit4_);
  // checkMissing(omit5)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_omit5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r108 = dyn length1(omit5)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_omit5_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L149() else D52()
  // L149()
  goto L149_;

D52_:;
  // deopt 185 [r108]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L149_:;
  // goto L30(r108)
  // L30(r108)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r108_;
  goto L30_;

L150_:;
  // sym17 = ldf class
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base17 = ldf class in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args140);
  // if guard17 then L151() else L152()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L151()
    goto L151_;
  } else {
  // L152()
    goto L152_;
  }

L151_:;
  // object19 = ld object
  Rsh_Fir_reg_object19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L153() else D53()
  // L153()
  goto L153_;

L152_:;
  // r109 = dyn base17(<sym object>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L32(r109)
  // L32(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L32_;

D53_:;
  // deopt 188 [object19]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_object19_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L153_:;
  // object20 = force? object19
  Rsh_Fir_reg_object20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object19_);
  // checkMissing(object20)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_object20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r111 = dyn class(object20)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_object20_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L154() else D54()
  // L154()
  goto L154_;

D54_:;
  // deopt 191 [r111]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L154_:;
  // goto L32(r111)
  // L32(r111)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r111_;
  goto L32_;

D55_:;
  // deopt 194 []
  Rsh_Fir_deopt(194, 0, NULL, CCP, RHO);
  return R_NilValue;

L155_:;
  // p10 = prom<V +>{
  //   doTsp1 = ld doTsp;
  //   doTsp2 = force? doTsp1;
  //   checkMissing(doTsp2);
  //   return doTsp2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1945233054_10, CCP, RHO);
  // r113 = dyn force(p10)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_force, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L156() else D56()
  // L156()
  goto L156_;

D56_:;
  // deopt 196 [r113]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L156_:;
  // sym18 = ldf `is.matrix`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base18 = ldf `is.matrix` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args146);
  // if guard18 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L157_:;
  // object21 = ld object
  Rsh_Fir_reg_object21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L159() else D57()
  // L159()
  goto L159_;

L158_:;
  // r114 = dyn base18(<sym object>)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L33(r114)
  // L33(r114)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r114_;
  goto L33_;

D57_:;
  // deopt 199 [object21]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_object21_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L159_:;
  // object22 = force? object21
  Rsh_Fir_reg_object22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object21_);
  // checkMissing(object22)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_object22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // is_matrix1 = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r116 = dyn is_matrix1(object22)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_object22_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix1_, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L160() else D58()
  // L160()
  goto L160_;

D58_:;
  // deopt 202 [r116]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(202, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L160_:;
  // goto L33(r116)
  // L33(r116)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r116_;
  goto L33_;

L161_:;
  // object23 = ld object
  Rsh_Fir_reg_object23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L162() else D59()
  // L162()
  goto L162_;

D59_:;
  // deopt 203 [object23]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_object23_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L162_:;
  // object24 = force? object23
  Rsh_Fir_reg_object24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object23_);
  // checkMissing(object24)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_object24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(object24)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_object24_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if c16 then L163() else L164(object24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L163()
    goto L163_;
  } else {
  // L164(object24)
    Rsh_Fir_reg_object26_ = Rsh_Fir_reg_object24_;
    goto L164_;
  }

L163_:;
  // dr8 = tryDispatchBuiltin.1("[", object24)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_object24_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args152);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc4 then L165() else L164(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L165()
    goto L165_;
  } else {
  // L164(dr8)
    Rsh_Fir_reg_object26_ = Rsh_Fir_reg_dr8_;
    goto L164_;
  }

L164_:;
  // st8 = ld st
  Rsh_Fir_reg_st8_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L166() else D60()
  // L166()
  goto L166_;

L165_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L35(dx10)
  // L35(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L35_;

D60_:;
  // deopt 205 [object26, st8]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_object26_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_st8_;
  Rsh_Fir_deopt(205, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L166_:;
  // st9 = force? st8
  Rsh_Fir_reg_st9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_st8_);
  // checkMissing(st9)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_st9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // en4 = ld en
  Rsh_Fir_reg_en4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L167() else D61()
  // L167()
  goto L167_;

D61_:;
  // deopt 206 [object26, st9, en4]
  SEXP Rsh_Fir_array_deopt_stack51[3];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_object26_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_st9_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_Fir_reg_en4_;
  Rsh_Fir_deopt(206, 3, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L167_:;
  // en5 = force? en4
  Rsh_Fir_reg_en5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_en4_);
  // checkMissing(en5)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_en5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // r117 = `:`(st9, en5)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_st9_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_en5_;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r118 = dyn __4(object24, r117, <missing>)
  SEXP Rsh_Fir_array_args158[3];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_object24_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_r117_;
  Rsh_Fir_array_args158[2] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L35(r118)
  // L35(r118)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r118_;
  goto L35_;

D62_:;
  // deopt 212 [object27]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_object27_;
  Rsh_Fir_deopt(212, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L169_:;
  // object28 = force? object27
  Rsh_Fir_reg_object28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object27_);
  // checkMissing(object28)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_object28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(object28)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_object28_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if c17 then L170() else L171(object28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L170()
    goto L170_;
  } else {
  // L171(object28)
    Rsh_Fir_reg_object30_ = Rsh_Fir_reg_object28_;
    goto L171_;
  }

L170_:;
  // dr10 = tryDispatchBuiltin.1("[", object28)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_object28_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args161);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // if dc5 then L172() else L171(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L172()
    goto L172_;
  } else {
  // L171(dr10)
    Rsh_Fir_reg_object30_ = Rsh_Fir_reg_dr10_;
    goto L171_;
  }

L171_:;
  // st10 = ld st
  Rsh_Fir_reg_st10_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L173() else D63()
  // L173()
  goto L173_;

L172_:;
  // dx13 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // goto L36(dx13)
  // L36(dx13)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx13_;
  goto L36_;

D63_:;
  // deopt 214 [object30, st10]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_object30_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_st10_;
  Rsh_Fir_deopt(214, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L173_:;
  // st11 = force? st10
  Rsh_Fir_reg_st11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_st10_);
  // checkMissing(st11)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_st11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // en6 = ld en
  Rsh_Fir_reg_en6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L174() else D64()
  // L174()
  goto L174_;

D64_:;
  // deopt 215 [object30, st11, en6]
  SEXP Rsh_Fir_array_deopt_stack54[3];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_object30_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_st11_;
  Rsh_Fir_array_deopt_stack54[2] = Rsh_Fir_reg_en6_;
  Rsh_Fir_deopt(215, 3, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L174_:;
  // en7 = force? en6
  Rsh_Fir_reg_en7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_en6_);
  // checkMissing(en7)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_en7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // r119 = `:`(st11, en7)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_st11_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_en7_;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r120 = dyn __5(object30, r119)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_object30_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L36(r120)
  // L36(r120)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r120_;
  goto L36_;

D65_:;
  // deopt 223 ["omit", l, "omit"]
  SEXP Rsh_Fir_array_deopt_stack55[3];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_const(CCP, 56);
  Rsh_Fir_deopt(223, 3, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L175_:;
  // r121 = dyn attr__(l, NULL, "class", "omit")
  SEXP Rsh_Fir_array_args168[4];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args168[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args168[2] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args168[3] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names51[4];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_array_arg_names51[3] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L176() else D66()
  // L176()
  goto L176_;

D66_:;
  // deopt 226 ["omit", r121]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(226, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L176_:;
  // st omit = r121
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r121_, RHO);
  (void)(Rsh_Fir_reg_r121_);
  // omit6 = ld omit
  Rsh_Fir_reg_omit6_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L177() else D67()
  // L177()
  goto L177_;

D67_:;
  // deopt 228 [omit6]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_omit6_;
  Rsh_Fir_deopt(228, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L177_:;
  // omit7 = force? omit6
  Rsh_Fir_reg_omit7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit6_);
  // checkMissing(omit7)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_omit7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // l1 = ld object
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L178() else D68()
  // L178()
  goto L178_;

D68_:;
  // deopt 231 [omit7, l1, omit7]
  SEXP Rsh_Fir_array_deopt_stack58[3];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_omit7_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack58[2] = Rsh_Fir_reg_omit7_;
  Rsh_Fir_deopt(231, 3, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L178_:;
  // r122 = dyn attr__1(l1, NULL, "na.action", omit7)
  SEXP Rsh_Fir_array_args170[4];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args170[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args170[2] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args170[3] = Rsh_Fir_reg_omit7_;
  SEXP Rsh_Fir_array_arg_names52[4];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_array_arg_names52[2] = R_MissingArg;
  Rsh_Fir_array_arg_names52[3] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L179() else D69()
  // L179()
  goto L179_;

D69_:;
  // deopt 234 [omit7, r122]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_omit7_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(234, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L179_:;
  // st object = r122
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r122_, RHO);
  (void)(Rsh_Fir_reg_r122_);
  // doTsp3 = ld doTsp
  Rsh_Fir_reg_doTsp3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L180() else D70()
  // L180()
  goto L180_;

D70_:;
  // deopt 236 [doTsp3]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_doTsp3_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L180_:;
  // doTsp4 = force? doTsp3
  Rsh_Fir_reg_doTsp4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_doTsp3_);
  // checkMissing(doTsp4)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_doTsp4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // c18 = `as.logical`(doTsp4)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_doTsp4_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if c18 then L181() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L181()
    goto L181_;
  } else {
  // L37()
    goto L37_;
  }

L181_:;
  // sym19 = ldf c
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base19 = ldf c in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args173);
  // if guard19 then L182() else L183()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L182()
    goto L182_;
  } else {
  // L183()
    goto L183_;
  }

L182_:;
  // tm = ld tm
  Rsh_Fir_reg_tm = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L184() else D71()
  // L184()
  goto L184_;

L183_:;
  // r123 = dyn base19(<lang `[`(tm, st)>, <lang `[`(tm, en)>, <sym xfreq>)
  SEXP Rsh_Fir_array_args174[3];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args174[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args174[2] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names53[3];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 3, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L38(r123)
  // L38(r123)
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r123_;
  goto L38_;

D71_:;
  // deopt 240 [tm]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_tm;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L184_:;
  // tm1 = force? tm
  Rsh_Fir_reg_tm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tm);
  // checkMissing(tm1)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_tm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(tm1)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_tm1_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if c19 then L185() else L186(tm1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L185()
    goto L185_;
  } else {
  // L186(tm1)
    Rsh_Fir_reg_tm3_ = Rsh_Fir_reg_tm1_;
    goto L186_;
  }

L185_:;
  // dr12 = tryDispatchBuiltin.1("[", tm1)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_tm1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args177);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // if dc6 then L187() else L186(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L187()
    goto L187_;
  } else {
  // L186(dr12)
    Rsh_Fir_reg_tm3_ = Rsh_Fir_reg_dr12_;
    goto L186_;
  }

L186_:;
  // st12 = ld st
  Rsh_Fir_reg_st12_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L188() else D72()
  // L188()
  goto L188_;

L187_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // goto L39(dx14)
  // L39(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L39_;

D72_:;
  // deopt 242 [tm3, st12]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_tm3_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_st12_;
  Rsh_Fir_deopt(242, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L188_:;
  // st13 = force? st12
  Rsh_Fir_reg_st13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_st12_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r125 = dyn __6(tm3, st13)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_tm3_;
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_st13_;
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L39(r125)
  // L39(r125)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r125_;
  goto L39_;

D73_:;
  // deopt 245 [tm4]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_tm4_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L189_:;
  // tm5 = force? tm4
  Rsh_Fir_reg_tm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tm4_);
  // checkMissing(tm5)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_tm5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(tm5)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_tm5_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if c20 then L190() else L191(tm5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L190()
    goto L190_;
  } else {
  // L191(tm5)
    Rsh_Fir_reg_tm7_ = Rsh_Fir_reg_tm5_;
    goto L191_;
  }

L190_:;
  // dr14 = tryDispatchBuiltin.1("[", tm5)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_tm5_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args183);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if dc7 then L192() else L191(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L192()
    goto L192_;
  } else {
  // L191(dr14)
    Rsh_Fir_reg_tm7_ = Rsh_Fir_reg_dr14_;
    goto L191_;
  }

L191_:;
  // en8 = ld en
  Rsh_Fir_reg_en8_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L193() else D74()
  // L193()
  goto L193_;

L192_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L40(dx16)
  // L40(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L40_;

D74_:;
  // deopt 247 [tm7, en8]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_tm7_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_en8_;
  Rsh_Fir_deopt(247, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L193_:;
  // en9 = force? en8
  Rsh_Fir_reg_en9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_en8_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r126 = dyn __7(tm7, en9)
  SEXP Rsh_Fir_array_args186[2];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_tm7_;
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_en9_;
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L40(r126)
  // L40(r126)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r126_;
  goto L40_;

D75_:;
  // deopt 250 [xfreq]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_xfreq;
  Rsh_Fir_deopt(250, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L194_:;
  // xfreq1 = force? xfreq
  Rsh_Fir_reg_xfreq1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xfreq);
  // checkMissing(xfreq1)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_xfreq1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // c21 = ldf c in base
  Rsh_Fir_reg_c21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r127 = dyn c21(dx15, dx17, xfreq1)
  SEXP Rsh_Fir_array_args188[3];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args188[2] = Rsh_Fir_reg_xfreq1_;
  SEXP Rsh_Fir_array_arg_names56[3];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_array_arg_names56[2] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c21_, 3, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L195() else D76()
  // L195()
  goto L195_;

D76_:;
  // deopt 253 [r127]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r127_;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L195_:;
  // goto L38(r127)
  // L38(r127)
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r127_;
  goto L38_;

D77_:;
  // deopt 255 [r124, l2, r124]
  SEXP Rsh_Fir_array_deopt_stack67[3];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r124_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack67[2] = Rsh_Fir_reg_r124_;
  Rsh_Fir_deopt(255, 3, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L196_:;
  // r128 = dyn tsp__(l2, NULL, r124)
  SEXP Rsh_Fir_array_args189[3];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args189[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args189[2] = Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_array_arg_names57[3];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_array_arg_names57[2] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tsp__, 3, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L197() else D78()
  // L197()
  goto L197_;

D78_:;
  // deopt 257 [r124, r128]
  SEXP Rsh_Fir_array_deopt_stack68[2];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r124_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_r128_;
  Rsh_Fir_deopt(257, 2, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L197_:;
  // st object = r128
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r128_, RHO);
  (void)(Rsh_Fir_reg_r128_);
  // goto L41()
  // L41()
  goto L41_;

L199_:;
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L201() else D79()
  // L201()
  goto L201_;

L200_:;
  // r130 = dyn base20(<sym cl>)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L42(r130)
  // L42(r130)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r130_;
  goto L42_;

D79_:;
  // deopt 262 [cl]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_cl;
  Rsh_Fir_deopt(262, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L201_:;
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // c22 = `==`(cl1, NULL)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_args192[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // goto L42(c22)
  // L42(c22)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_c22_;
  goto L42_;

L202_:;
  // cl2 = ld cl
  Rsh_Fir_reg_cl2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L203() else D80()
  // L203()
  goto L203_;

D80_:;
  // deopt 266 [cl2]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_cl2_;
  Rsh_Fir_deopt(266, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L203_:;
  // cl3 = force? cl2
  Rsh_Fir_reg_cl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl2_);
  // checkMissing(cl3)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_cl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // l3 = ld object
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L204() else D81()
  // L204()
  goto L204_;

D81_:;
  // deopt 269 [cl3, l3, cl3]
  SEXP Rsh_Fir_array_deopt_stack71[3];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_cl3_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_cl3_;
  Rsh_Fir_deopt(269, 3, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L204_:;
  // r133 = dyn class__(l3, NULL, cl3)
  SEXP Rsh_Fir_array_args194[3];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args194[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args194[2] = Rsh_Fir_reg_cl3_;
  SEXP Rsh_Fir_array_arg_names59[3];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_array_arg_names59[2] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L205() else D82()
  // L205()
  goto L205_;

D82_:;
  // deopt 271 [cl3, r133]
  SEXP Rsh_Fir_array_deopt_stack72[2];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_cl3_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_r133_;
  Rsh_Fir_deopt(271, 2, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L205_:;
  // st object = r133
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r133_, RHO);
  (void)(Rsh_Fir_reg_r133_);
  // goto L44(cl3)
  // L44(cl3)
  Rsh_Fir_reg_cl4_ = Rsh_Fir_reg_cl3_;
  goto L44_;

D83_:;
  // deopt 277 [object31]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_object31_;
  Rsh_Fir_deopt(277, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L208_:;
  // object32 = force? object31
  Rsh_Fir_reg_object32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object31_);
  // checkMissing(object32)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_object32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return object32
  return Rsh_Fir_reg_object32_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_(SEXP CCP, SEXP RHO) {
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf `is.null` in base
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
  // r5 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // c = `==`(r3, NULL)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L2_:;
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r = dyn base(<lang attr(object, "tsp")>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L4_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r4 = dyn attr(object2, "tsp")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

L5_:;
  // r2 = dyn base1(<sym object>, "tsp")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_1(SEXP CCP, SEXP RHO) {
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return object8
  return Rsh_Fir_reg_object8_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_2(SEXP CCP, SEXP RHO) {
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return object10
  return Rsh_Fir_reg_object10_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_3(SEXP CCP, SEXP RHO) {
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r23 = `!`(r21)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // return r23
  return Rsh_Fir_reg_r23_;

L1_:;
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r22 = dyn is_na(object14)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_object14_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base4(<sym object>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_4(SEXP CCP, SEXP RHO) {
  // all = ld all
  Rsh_Fir_reg_all = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // all1 = force? all
  Rsh_Fir_reg_all1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all);
  // checkMissing(all1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_all1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return all1
  return Rsh_Fir_reg_all1_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_5(SEXP CCP, SEXP RHO) {
  // sym9 = ldf max
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base9 = ldf max in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard9 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r51 = `:`(r48, r49)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // return r51
  return Rsh_Fir_reg_r51_;

L1_:;
  // tt = ld tt
  Rsh_Fir_reg_tt = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // tt1 = force? tt
  Rsh_Fir_reg_tt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt);
  // checkMissing(tt1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_tt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r50 = dyn max(tt1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_tt1_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(0.0, r50)
  // L0(0.0, r50)
  Rsh_Fir_reg_r48_ = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L0_;

L2_:;
  // r47 = dyn base9(<sym tt>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(0.0, r47)
  // L0(0.0, r47)
  Rsh_Fir_reg_r48_ = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r47_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_6(SEXP CCP, SEXP RHO) {
  // r53 = clos inner3002224933
  Rsh_Fir_reg_r53_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3002224933_, RHO, CCP);
  // return r53
  return Rsh_Fir_reg_r53_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_7(SEXP CCP, SEXP RHO) {
  // keep = ld keep
  Rsh_Fir_reg_keep = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // keep1 = force? keep
  Rsh_Fir_reg_keep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep);
  // checkMissing(keep1)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_keep1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // return keep1
  return Rsh_Fir_reg_keep1_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_8(SEXP CCP, SEXP RHO) {
  // keep2 = ld keep
  Rsh_Fir_reg_keep2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // keep3 = force? keep2
  Rsh_Fir_reg_keep3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep2_);
  // checkMissing(keep3)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_keep3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return keep3
  return Rsh_Fir_reg_keep3_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_9(SEXP CCP, SEXP RHO) {
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // return object18
  return Rsh_Fir_reg_object18_;
}
SEXP Rsh_Fir_user_promise_inner1945233054_10(SEXP CCP, SEXP RHO) {
  // doTsp1 = ld doTsp
  Rsh_Fir_reg_doTsp1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // doTsp2 = force? doTsp1
  Rsh_Fir_reg_doTsp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_doTsp1_);
  // checkMissing(doTsp2)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_doTsp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // return doTsp2
  return Rsh_Fir_reg_doTsp2_;
}
SEXP Rsh_Fir_user_function_inner3002224933_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3002224933 dynamic dispatch ([i])

  return Rsh_Fir_user_version_inner3002224933_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3002224933_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3002224933 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3002224933/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_tt1;  // tt
  SEXP Rsh_Fir_reg_tt1_1;  // tt1
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_sum1;  // sum
  SEXP Rsh_Fir_reg_r3_1;  // r3

  // Bind parameters
  Rsh_Fir_reg_i = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // sym = ldf sum
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf sum in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args196[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args196);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // tt = ld tt
  Rsh_Fir_reg_tt1 = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang `==`(tt, i)>)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [tt]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_tt1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L3_:;
  // tt1 = force? tt
  Rsh_Fir_reg_tt1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt1);
  // checkMissing(tt1)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_tt1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [tt1, i1]
  SEXP Rsh_Fir_array_deopt_stack75[2];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_tt1_1;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(3, 2, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L4_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // r2 = `==`(tt1, i2)
  SEXP Rsh_Fir_array_args200[2];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_tt1_1;
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r3 = dyn sum(r2)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1, 1, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r3_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
