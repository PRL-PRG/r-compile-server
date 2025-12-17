#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2891763239_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2891763239_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2891763239_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2891763239_16(SEXP CCP, SEXP RHO);
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
  // r = clos inner2891763239
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2891763239_, RHO, CCP);
  // st `confint.profile.nls` = r
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
SEXP Rsh_Fir_user_function_inner2891763239_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2891763239 dynamic dispatch ([object, parm, level, `...`])

  return Rsh_Fir_user_version_inner2891763239_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2891763239_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2891763239 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2891763239/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_parm;  // parm
  SEXP Rsh_Fir_reg_level;  // level
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
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_coef;  // coef
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_parm1_;  // parm1
  SEXP Rsh_Fir_reg_parm2_;  // parm2
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_pnames2_;  // pnames2
  SEXP Rsh_Fir_reg_pnames3_;  // pnames3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_pnames5_;  // pnames5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_parm3_;  // parm3
  SEXP Rsh_Fir_reg_parm4_;  // parm4
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_parm5_;  // parm5
  SEXP Rsh_Fir_reg_parm6_;  // parm6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_parm8_;  // parm8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_parm9_;  // parm9
  SEXP Rsh_Fir_reg_parm10_;  // parm10
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_pnames6_;  // pnames6
  SEXP Rsh_Fir_reg_pnames7_;  // pnames7
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_fitted;  // fitted
  SEXP Rsh_Fir_reg_of;  // of
  SEXP Rsh_Fir_reg_of1_;  // of1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_of2_;  // of2
  SEXP Rsh_Fir_reg_of3_;  // of3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_of5_;  // of5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_level1_;  // level1
  SEXP Rsh_Fir_reg_level2_;  // level2
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_a2_;  // a2
  SEXP Rsh_Fir_reg_a3_;  // a3
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_round;  // round
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_array;  // array
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_parm11_;  // parm11
  SEXP Rsh_Fir_reg_parm12_;  // parm12
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_parm13_;  // parm13
  SEXP Rsh_Fir_reg_parm14_;  // parm14
  SEXP Rsh_Fir_reg_pct;  // pct
  SEXP Rsh_Fir_reg_pct1_;  // pct1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_qt;  // qt
  SEXP Rsh_Fir_reg_a4_;  // a4
  SEXP Rsh_Fir_reg_a5_;  // a5
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_parm15_;  // parm15
  SEXP Rsh_Fir_reg_parm16_;  // parm16
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_pm;  // pm
  SEXP Rsh_Fir_reg_pm1_;  // pm1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_ncoefs;  // ncoefs
  SEXP Rsh_Fir_reg_ncoefs1_;  // ncoefs1
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_spline;  // spline
  SEXP Rsh_Fir_reg_pro;  // pro
  SEXP Rsh_Fir_reg_pro1_;  // pro1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_pm2_;  // pm2
  SEXP Rsh_Fir_reg_pm3_;  // pm3
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_pro4_;  // pro4
  SEXP Rsh_Fir_reg_pro5_;  // pro5
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_pro7_;  // pro7
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_spline1_;  // spline1
  SEXP Rsh_Fir_reg_pro8_;  // pro8
  SEXP Rsh_Fir_reg_pro9_;  // pro9
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_pro12_;  // pro12
  SEXP Rsh_Fir_reg_pro13_;  // pro13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_pro15_;  // pro15
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_approx;  // approx
  SEXP Rsh_Fir_reg_sp;  // sp
  SEXP Rsh_Fir_reg_sp1_;  // sp1
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_sp3_;  // sp3
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_sp4_;  // sp4
  SEXP Rsh_Fir_reg_sp5_;  // sp5
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_sp7_;  // sp7
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_cutoff;  // cutoff
  SEXP Rsh_Fir_reg_cutoff1_;  // cutoff1
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_pm4_;  // pm4
  SEXP Rsh_Fir_reg_pm5_;  // pm5
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_ci;  // ci
  SEXP Rsh_Fir_reg_ci1_;  // ci1
  SEXP Rsh_Fir_reg_drop;  // drop
  SEXP Rsh_Fir_reg_r101_;  // r101

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_parm = PARAMS[1];
  Rsh_Fir_reg_level = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

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
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_, CCP, RHO);
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
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L3_:;
  // st pnames = r5
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L4_:;
  // st ncoefs = r8
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard4 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L5_:;
  // st of = r16
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym5 = ldf `is.numeric`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf `is.numeric` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L6_:;
  // c = `as.logical`(r19)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L38() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L38()
    goto L38_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // goto L9()
  // L9()
  goto L9_;

L8_:;
  // st parm = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // parm5 = ld parm
  Rsh_Fir_reg_parm5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L45() else D11()
  // L45()
  goto L45_;

L10_:;
  // st parm = dx4
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard6 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L11_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard7 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L12_:;
  // r48 = `-`(r34, r35)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // st n = r48
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // level1 = ld level
  Rsh_Fir_reg_level1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L69() else D20()
  // L69()
  goto L69_;

L13_:;
  // st a = r52
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

L14_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // c7 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if c7 then L82() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L82()
    goto L82_;
  } else {
  // L19()
    goto L19_;
  }

L15_:;
  // st pro = dx13
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // ncoefs = ld ncoefs
  Rsh_Fir_reg_ncoefs = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L88() else D33()
  // L88()
  goto L88_;

L16_:;
  // spline1 = ldf spline
  Rsh_Fir_reg_spline1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L93() else D36()
  // L93()
  goto L93_;

L17_:;
  // st sp = r83
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r83_, RHO);
  (void)(Rsh_Fir_reg_r83_);
  // approx = ldf approx
  Rsh_Fir_reg_approx = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L95() else D38()
  // L95()
  goto L95_;

L18_:;
  // st ci = dx37
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx37_, RHO);
  (void)(Rsh_Fir_reg_dx37_);
  // goto L14(i19)
  // L14(i19)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i19_;
  goto L14_;

L19_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args16[4];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st pm = x
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L83() else D31()
  // L83()
  goto L83_;

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r100
  return Rsh_Fir_reg_r100_;

L21_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r4 = dyn base1(<sym object>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L3_;

D0_:;
  // deopt 2 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L23_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r6 = dyn names(object2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L3_;

L25_:;
  // coef = ldf coef
  Rsh_Fir_reg_coef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r7 = dyn base2(<lang coef(attr(object, "original.fit"))>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p1 = prom<V +>{
  //   sym3 = ldf attr;
  //   base3 = ldf attr in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   object3 = ld object;
  //   object4 = force? object3;
  //   checkMissing(object4);
  //   attr = ldf attr in base;
  //   r11 = dyn attr(object4, "original.fit");
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base3(<sym object>, "original.fit");
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_1, CCP, RHO);
  // r13 = dyn coef(p1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coef, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 12 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L28_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r14 = dyn length(r13)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

D4_:;
  // deopt 14 [r14]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L4(r14)
  // L4(r14)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r14_;
  goto L4_;

L30_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

L31_:;
  // r15 = dyn base4(<sym object>, "original.fit")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r15)
  // L5(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L5_;

D5_:;
  // deopt 18 [object5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L32_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r17 = dyn attr1(object6, "original.fit")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

D6_:;
  // deopt 22 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L5_;

L34_:;
  // parm1 = ld parm
  Rsh_Fir_reg_parm1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

L35_:;
  // r18 = dyn base5(<sym parm>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r18)
  // L6(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L6_;

D7_:;
  // deopt 26 [parm1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_parm1_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // parm2 = force? parm1
  Rsh_Fir_reg_parm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm1_);
  // checkMissing(parm2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_parm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r20 = dyn is_numeric(parm2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_parm2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

D8_:;
  // deopt 29 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L6(r20)
  // L6(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L6_;

L38_:;
  // pnames2 = ld pnames
  Rsh_Fir_reg_pnames2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

D9_:;
  // deopt 30 [pnames2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_pnames2_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // pnames3 = force? pnames2
  Rsh_Fir_reg_pnames3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames2_);
  // checkMissing(pnames3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_pnames3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(pnames3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_pnames3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c1 then L40() else L41(pnames3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L40()
    goto L40_;
  } else {
  // L41(pnames3)
    Rsh_Fir_reg_pnames5_ = Rsh_Fir_reg_pnames3_;
    goto L41_;
  }

L40_:;
  // dr = tryDispatchBuiltin.1("[", pnames3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_pnames3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L42() else L41(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L42()
    goto L42_;
  } else {
  // L41(dr)
    Rsh_Fir_reg_pnames5_ = Rsh_Fir_reg_dr;
    goto L41_;
  }

L41_:;
  // parm3 = ld parm
  Rsh_Fir_reg_parm3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L43() else D10()
  // L43()
  goto L43_;

L42_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

D10_:;
  // deopt 32 [pnames5, parm3]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_pnames5_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_parm3_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L43_:;
  // parm4 = force? parm3
  Rsh_Fir_reg_parm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm3_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r21 = dyn __(pnames5, parm4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_pnames5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_parm4_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r21_;
  goto L8_;

D11_:;
  // deopt 38 [parm5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_parm5_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L45_:;
  // parm6 = force? parm5
  Rsh_Fir_reg_parm6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm5_);
  // checkMissing(parm6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_parm6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(parm6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_parm6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c2 then L46() else L47(parm6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L46()
    goto L46_;
  } else {
  // L47(parm6)
    Rsh_Fir_reg_parm8_ = Rsh_Fir_reg_parm6_;
    goto L47_;
  }

L46_:;
  // dr2 = tryDispatchBuiltin.1("[", parm6)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_parm6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc1 then L48() else L47(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L48()
    goto L48_;
  } else {
  // L47(dr2)
    Rsh_Fir_reg_parm8_ = Rsh_Fir_reg_dr2_;
    goto L47_;
  }

L47_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

L48_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L10(dx3)
  // L10(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L10_;

D12_:;
  // deopt 41 [parm8]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_parm8_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L49_:;
  // p2 = prom<V +>{
  //   parm9 = ld parm;
  //   parm10 = force? parm9;
  //   checkMissing(parm10);
  //   return parm10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_2, CCP, RHO);
  // p3 = prom<V +>{
  //   pnames6 = ld pnames;
  //   pnames7 = force? pnames6;
  //   checkMissing(pnames7);
  //   return pnames7;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_3, CCP, RHO);
  // r24 = dyn _in_(p2, p3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

D13_:;
  // deopt 44 [parm8, r24]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_parm8_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L50_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r25 = dyn __1(parm8, r24)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_parm8_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(r25)
  // L10(r25)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r25_;
  goto L10_;

L51_:;
  // fitted = ldf fitted
  Rsh_Fir_reg_fitted = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L53() else D14()
  // L53()
  goto L53_;

L52_:;
  // r26 = dyn base6(<lang fitted(of)>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L11_;

D14_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p4 = prom<V +>{
  //   of = ld of;
  //   of1 = force? of;
  //   checkMissing(of1);
  //   return of1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_4, CCP, RHO);
  // r29 = dyn fitted(p4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fitted, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

D15_:;
  // deopt 52 [r29]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L54_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r30 = dyn length1(r29)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L55() else D16()
  // L55()
  goto L55_;

D16_:;
  // deopt 54 [r30]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L11(r30)
  // L11(r30)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r30_;
  goto L11_;

L56_:;
  // of2 = ld of
  Rsh_Fir_reg_of2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L58() else D17()
  // L58()
  goto L58_;

L57_:;
  // r33 = dyn base7(<lang `$`(`$`(of, m), getPars)()>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L12(r27, r33)
  // L12(r27, r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r33_;
  goto L12_;

D17_:;
  // deopt 56 [r27, of2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_of2_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L58_:;
  // of3 = force? of2
  Rsh_Fir_reg_of3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_of2_);
  // checkMissing(of3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_of3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(of3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_of3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c3 then L60() else L61(r27, of3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L60()
    goto L60_;
  } else {
  // L61(r27, of3)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_of5_ = Rsh_Fir_reg_of3_;
    goto L61_;
  }

L59_:;
  // c4 = `is.object`(dx6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c4 then L64() else L65(r39, dx6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L64()
    goto L64_;
  } else {
  // L65(r39, dx6)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx6_;
    goto L65_;
  }

L60_:;
  // dr4 = tryDispatchBuiltin.1("$", of3)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_of3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args56);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc2 then L62() else L61(r27, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L62()
    goto L62_;
  } else {
  // L61(r27, dr4)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r27_;
    Rsh_Fir_reg_of5_ = Rsh_Fir_reg_dr4_;
    goto L61_;
  }

L61_:;
  // r40 = `$`(of5, <sym m>)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_of5_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L59(r37, r40)
  // L59(r37, r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r40_;
  goto L59_;

L62_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L59(r27, dx5)
  // L59(r27, dx5)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L59_;

L63_:;
  // checkFun.0(dx10)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dx10_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args60));
  // dx11 = dx10 as cls
  Rsh_Fir_reg_dx11_ = Rsh_Fir_cast(Rsh_Fir_reg_dx10_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r46 = dyn dx11()
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx11_, 0, NULL, NULL, CCP, RHO);
  // check L67() else D18()
  // L67()
  goto L67_;

L64_:;
  // dr6 = tryDispatchBuiltin.1("$", dx6)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc3 then L66() else L65(r39, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L66()
    goto L66_;
  } else {
  // L65(r39, dr6)
    Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dr6_;
    goto L65_;
  }

L65_:;
  // r45 = `$`(dx8, <sym getPars>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L63(r42, r45)
  // L63(r42, r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r45_;
  goto L63_;

L66_:;
  // dx9 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L63(r39, dx9)
  // L63(r39, dx9)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L63_;

D18_:;
  // deopt 61 [r44, r46]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L67_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r47 = dyn length2(r46)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L68() else D19()
  // L68()
  goto L68_;

D19_:;
  // deopt 63 [r44, r47]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L12(r44, r47)
  // L12(r44, r47)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r47_;
  goto L12_;

D20_:;
  // deopt 67 [1.0, level1]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_level1_;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L69_:;
  // level2 = force? level1
  Rsh_Fir_reg_level2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_level1_);
  // checkMissing(level2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_level2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // r49 = `-`(1.0, level2)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_level2_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // r50 = `/`(r49, 2.0)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // st a = r50
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard8 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L70_:;
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L72() else D21()
  // L72()
  goto L72_;

L71_:;
  // r51 = dyn base8(<sym a>, <lang `-`(1.0, a)>)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L13(r51)
  // L13(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L13_;

D21_:;
  // deopt 75 [a]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L72_:;
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // a2 = ld a
  Rsh_Fir_reg_a2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L73() else D22()
  // L73()
  goto L73_;

D22_:;
  // deopt 78 [1.0, a2]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_a2_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L73_:;
  // a3 = force? a2
  Rsh_Fir_reg_a3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a2_);
  // checkMissing(a3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_a3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // r53 = `-`(1.0, a3)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_a3_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r54 = dyn c5(a1, r53)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L74() else D23()
  // L74()
  goto L74_;

D23_:;
  // deopt 82 [r54]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L13(r54)
  // L13(r54)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r54_;
  goto L13_;

D24_:;
  // deopt 85 []
  Rsh_Fir_deopt(85, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p5 = prom<V +>{
  //   sym9 = ldf round;
  //   base9 = ldf round in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L1() else L2();
  // L0(r56):
  //   return r56;
  // L1():
  //   round = ldf round in base;
  //   r57 = dyn round(<lang `*`(100.0, a)>, 1.0);
  //   goto L0(r57);
  // L2():
  //   r55 = dyn base9(<lang `*`(100.0, a)>, 1.0);
  //   goto L0(r55);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_5, CCP, RHO);
  // r59 = dyn paste[, , sep](p5, "%", "")
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args78[2] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L76() else D25()
  // L76()
  goto L76_;

D25_:;
  // deopt 90 [r59]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L76_:;
  // st pct = r59
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // array = ldf array
  Rsh_Fir_reg_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L77() else D26()
  // L77()
  goto L77_;

D26_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // p6 = prom<V +>{
  //   sym10 = ldf c;
  //   base10 = ldf c in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L2() else L3();
  // L0(r61):
  //   return r61;
  // L2():
  //   sym11 = ldf length;
  //   base11 = ldf length in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L4() else L5();
  // L3():
  //   r60 = dyn base10(<lang length(parm)>, 2);
  //   goto L0(r60);
  // L1(r63):
  //   c6 = ldf c in base;
  //   r65 = dyn c6(r63, 2);
  //   goto L0(r65);
  // L4():
  //   parm11 = ld parm;
  //   parm12 = force? parm11;
  //   checkMissing(parm12);
  //   length3 = ldf length in base;
  //   r64 = dyn length3(parm12);
  //   goto L1(r64);
  // L5():
  //   r62 = dyn base11(<sym parm>);
  //   goto L1(r62);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_6, CCP, RHO);
  // p7 = prom<V +>{
  //   sym12 = ldf list;
  //   base12 = ldf list in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L1() else L2();
  // L0(r68):
  //   return r68;
  // L1():
  //   parm13 = ld parm;
  //   parm14 = force? parm13;
  //   checkMissing(parm14);
  //   pct = ld pct;
  //   pct1 = force? pct;
  //   checkMissing(pct1);
  //   list = ldf list in base;
  //   r69 = dyn list(parm14, pct1);
  //   goto L0(r69);
  // L2():
  //   r67 = dyn base12(<sym parm>, <sym pct>);
  //   goto L0(r67);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_7, CCP, RHO);
  // r71 = dyn array[, dim, dimnames](NA_LGL, p6, p7)
  SEXP Rsh_Fir_array_args91[3];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args91[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_arg_names31[2] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array, 3, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L78() else D27()
  // L78()
  goto L78_;

D27_:;
  // deopt 99 [r71]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L78_:;
  // st ci = r71
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r71_, RHO);
  (void)(Rsh_Fir_reg_r71_);
  // qt = ldf qt
  Rsh_Fir_reg_qt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L79() else D28()
  // L79()
  goto L79_;

D28_:;
  // deopt 102 []
  Rsh_Fir_deopt(102, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p8 = prom<V +>{
  //   a4 = ld a;
  //   a5 = force? a4;
  //   checkMissing(a5);
  //   return a5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_8, CCP, RHO);
  // p9 = prom<V +>{
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   return n1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_9, CCP, RHO);
  // r74 = dyn qt(p8, p9)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qt, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L80() else D29()
  // L80()
  goto L80_;

D29_:;
  // deopt 105 [r74]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L80_:;
  // st cutoff = r74
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // parm15 = ld parm
  Rsh_Fir_reg_parm15_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L81() else D30()
  // L81()
  goto L81_;

D30_:;
  // deopt 107 [parm15]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_parm15_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L81_:;
  // parm16 = force? parm15
  Rsh_Fir_reg_parm16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm15_);
  // checkMissing(parm16)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_parm16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // s = toForSeq(parm16)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_parm16_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 57);
  // goto L14(i)
  // L14(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L14_;

L82_:;
  // sym13 = ldf drop
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base13 = ldf drop in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard13 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

D31_:;
  // deopt 109 [i2, object7]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_object7_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L83_:;
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(object8)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if c8 then L84() else L85(i2, object8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L84()
    goto L84_;
  } else {
  // L85(i2, object8)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_object8_;
    goto L85_;
  }

L84_:;
  // dr8 = tryDispatchBuiltin.1("[[", object8)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_object8_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args101);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if dc4 then L86() else L85(i2, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L86()
    goto L86_;
  } else {
  // L85(i2, dr8)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_object10_ = Rsh_Fir_reg_dr8_;
    goto L85_;
  }

L85_:;
  // pm = ld pm
  Rsh_Fir_reg_pm = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L87() else D32()
  // L87()
  goto L87_;

L86_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L15(i2, dx12)
  // L15(i2, dx12)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L15_;

D32_:;
  // deopt 111 [i6, object10, pm]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_pm;
  Rsh_Fir_deopt(111, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L87_:;
  // pm1 = force? pm
  Rsh_Fir_reg_pm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pm);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r75 = dyn __2(object10, pm1)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_pm1_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L15(i6, r75)
  // L15(i6, r75)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r75_;
  goto L15_;

D33_:;
  // deopt 115 [i8, ncoefs]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_ncoefs;
  Rsh_Fir_deopt(115, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L88_:;
  // ncoefs1 = force? ncoefs
  Rsh_Fir_reg_ncoefs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncoefs);
  // checkMissing(ncoefs1)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_ncoefs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // r76 = `>`(ncoefs1, 1.0)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_ncoefs1_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if c9 then L89() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L89()
    goto L89_;
  } else {
  // L16()
    goto L16_;
  }

L89_:;
  // spline = ldf spline
  Rsh_Fir_reg_spline = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L90() else D34()
  // L90()
  goto L90_;

D34_:;
  // deopt 120 [i8]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L90_:;
  // p10 = prom<V +>{
  //   pro = ld pro;
  //   pro1 = force? pro;
  //   checkMissing(pro1);
  //   c10 = `is.object`(pro1);
  //   if c10 then L2() else L3();
  // L0(dx15):
  //   c11 = `is.object`(dx15);
  //   if c11 then L5() else L6();
  // L2():
  //   dr10 = tryDispatchBuiltin.1("[", pro1);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L4() else L3();
  // L3():
  //   __3 = ldf `[` in base;
  //   r77 = dyn __3(pro1, <missing>, "par.vals");
  //   goto L0(r77);
  // L1(dx19):
  //   return dx19;
  // L4():
  //   dx14 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx14);
  // L5():
  //   dr12 = tryDispatchBuiltin.1("[", dx15);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L7() else L6();
  // L6():
  //   pm2 = ld pm;
  //   pm3 = force? pm2;
  //   __4 = ldf `[` in base;
  //   r78 = dyn __4(dx15, <missing>, pm3);
  //   goto L1(r78);
  // L7():
  //   dx18 = getTryDispatchBuiltinValue(dr12);
  //   goto L1(dx18);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_10, CCP, RHO);
  // p11 = prom<V +>{
  //   pro4 = ld pro;
  //   pro5 = force? pro4;
  //   checkMissing(pro5);
  //   c12 = `is.object`(pro5);
  //   if c12 then L1() else L2(pro5);
  // L0(dx21):
  //   return dx21;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("$", pro5);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(pro7):
  //   r80 = `$`(pro7, <sym tau>);
  //   goto L0(r80);
  // L3():
  //   dx20 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx20);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_11, CCP, RHO);
  // r82 = dyn spline[x, y](p10, p11)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_arg_names36[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spline, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L91() else D35()
  // L91()
  goto L91_;

D35_:;
  // deopt 125 [i8, r82]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L17(i8, r82)
  // L17(i8, r82)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L17_;

D36_:;
  // deopt 127 [i8]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L93_:;
  // p12 = prom<V +>{
  //   pro8 = ld pro;
  //   pro9 = force? pro8;
  //   checkMissing(pro9);
  //   c13 = `is.object`(pro9);
  //   if c13 then L1() else L2();
  // L0(dx23):
  //   return dx23;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", pro9);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2();
  // L2():
  //   __5 = ldf `[` in base;
  //   r84 = dyn __5(pro9, <missing>, "par.vals");
  //   goto L0(r84);
  // L3():
  //   dx22 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx22);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_12, CCP, RHO);
  // p13 = prom<V +>{
  //   pro12 = ld pro;
  //   pro13 = force? pro12;
  //   checkMissing(pro13);
  //   c14 = `is.object`(pro13);
  //   if c14 then L1() else L2(pro13);
  // L0(dx25):
  //   return dx25;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("$", pro13);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(pro15):
  //   r86 = `$`(pro15, <sym tau>);
  //   goto L0(r86);
  // L3():
  //   dx24 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx24);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_13, CCP, RHO);
  // r88 = dyn spline1[x, y](p12, p13)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_arg_names38[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_spline1_, 2, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L94() else D37()
  // L94()
  goto L94_;

D37_:;
  // deopt 132 [i8, r88]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(132, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L17(i8, r88)
  // L17(i8, r88)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r88_;
  goto L17_;

D38_:;
  // deopt 135 [i11]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L95_:;
  // p14 = prom<V +>{
  //   sp = ld sp;
  //   sp1 = force? sp;
  //   checkMissing(sp1);
  //   c15 = `is.object`(sp1);
  //   if c15 then L1() else L2(sp1);
  // L0(dx27):
  //   return dx27;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("$", sp1);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(sp3):
  //   r89 = `$`(sp3, <sym y>);
  //   goto L0(r89);
  // L3():
  //   dx26 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx26);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_14, CCP, RHO);
  // p15 = prom<V +>{
  //   sp4 = ld sp;
  //   sp5 = force? sp4;
  //   checkMissing(sp5);
  //   c16 = `is.object`(sp5);
  //   if c16 then L1() else L2(sp5);
  // L0(dx29):
  //   return dx29;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("$", sp5);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(sp7):
  //   r91 = `$`(sp7, <sym x>);
  //   goto L0(r91);
  // L3():
  //   dx28 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx28);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_15, CCP, RHO);
  // p16 = prom<V +>{
  //   cutoff = ld cutoff;
  //   cutoff1 = force? cutoff;
  //   checkMissing(cutoff1);
  //   return cutoff1;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2891763239_16, CCP, RHO);
  // r94 = dyn approx[, , xout](p14, p15, p16)
  SEXP Rsh_Fir_array_args152[3];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args152[2] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_approx, 3, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L96() else D39()
  // L96()
  goto L96_;

D39_:;
  // deopt 140 [i11, r94]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(140, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L96_:;
  // c17 = `is.object`(r94)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if c17 then L98() else L99(i11, r94)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L98()
    goto L98_;
  } else {
  // L99(i11, r94)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r94_;
    goto L99_;
  }

L97_:;
  // l1 = ld ci
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c18 = `is.object`(l1)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if c18 then L101() else L102(i15, dx31, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L101()
    goto L101_;
  } else {
  // L102(i15, dx31, l1)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L102_;
  }

L98_:;
  // dr24 = tryDispatchBuiltin.1("$", r94)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args155);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // if dc12 then L100() else L99(i11, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L100()
    goto L100_;
  } else {
  // L99(i11, dr24)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_r96_ = Rsh_Fir_reg_dr24_;
    goto L99_;
  }

L99_:;
  // r97 = `$`(r96, <sym y>)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L97(i13, r97)
  // L97(i13, r97)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r97_;
  goto L97_;

L100_:;
  // dx30 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // goto L97(i11, dx30)
  // L97(i11, dx30)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L97_;

L101_:;
  // dr26 = tryDispatchBuiltin.0("[<-", l1, dx31)
  SEXP Rsh_Fir_array_args159[3];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args159[2] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args159);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if dc13 then L103() else L102(i15, dx31, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L103()
    goto L103_;
  } else {
  // L102(i15, dx31, dr26)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr26_;
    goto L102_;
  }

L102_:;
  // pm4 = ld pm
  Rsh_Fir_reg_pm4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L104() else D40()
  // L104()
  goto L104_;

L103_:;
  // dx35 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // goto L18(i15, dx35)
  // L18(i15, dx35)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx35_;
  goto L18_;

D40_:;
  // deopt 143 [i17, dx33, l3, dx31, pm4]
  SEXP Rsh_Fir_array_deopt_stack35[5];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack35[3] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_deopt_stack35[4] = Rsh_Fir_reg_pm4_;
  Rsh_Fir_deopt(143, 5, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L104_:;
  // pm5 = force? pm4
  Rsh_Fir_reg_pm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pm4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 68), RHO);
  // r98 = dyn ___(l1, pm5, <missing>, dx31)
  SEXP Rsh_Fir_array_args162[4];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_pm5_;
  Rsh_Fir_array_args162[2] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args162[3] = Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_array_arg_names40[4];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_array_arg_names40[3] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L18(i17, r98)
  // L18(i17, r98)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r98_;
  goto L18_;

L105_:;
  // ci = ld ci
  Rsh_Fir_reg_ci = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L107() else D41()
  // L107()
  goto L107_;

L106_:;
  // r99 = dyn base13(<sym ci>)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L20(r99)
  // L20(r99)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L20_;

D41_:;
  // deopt 154 [ci]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_ci;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L107_:;
  // ci1 = force? ci
  Rsh_Fir_reg_ci1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ci);
  // checkMissing(ci1)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_ci1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // drop = ldf drop in base
  Rsh_Fir_reg_drop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r101 = dyn drop(ci1)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_ci1_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L108() else D42()
  // L108()
  goto L108_;

D42_:;
  // deopt 157 [r101]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L20(r101)
  // L20(r101)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r101_;
  goto L20_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_(SEXP CCP, SEXP RHO) {
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
SEXP Rsh_Fir_user_promise_inner2891763239_1(SEXP CCP, SEXP RHO) {
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_;

L1_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r11 = dyn attr(object4, "original.fit")
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base3(<sym object>, "original.fit")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_2(SEXP CCP, SEXP RHO) {
  // parm9 = ld parm
  Rsh_Fir_reg_parm9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // parm10 = force? parm9
  Rsh_Fir_reg_parm10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm9_);
  // checkMissing(parm10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_parm10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return parm10
  return Rsh_Fir_reg_parm10_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_3(SEXP CCP, SEXP RHO) {
  // pnames6 = ld pnames
  Rsh_Fir_reg_pnames6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // pnames7 = force? pnames6
  Rsh_Fir_reg_pnames7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pnames6_);
  // checkMissing(pnames7)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_pnames7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return pnames7
  return Rsh_Fir_reg_pnames7_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_4(SEXP CCP, SEXP RHO) {
  // of = ld of
  Rsh_Fir_reg_of = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // of1 = force? of
  Rsh_Fir_reg_of1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_of);
  // checkMissing(of1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_of1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return of1
  return Rsh_Fir_reg_of1_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_5(SEXP CCP, SEXP RHO) {
  // sym9 = ldf round
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base9 = ldf round in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard9 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r56
  return Rsh_Fir_reg_r56_;

L1_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r57 = dyn round(<lang `*`(100.0, a)>, 1.0)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L0_;

L2_:;
  // r55 = dyn base9(<lang `*`(100.0, a)>, 1.0)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_6(SEXP CCP, SEXP RHO) {
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard10 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r61
  return Rsh_Fir_reg_r61_;

L1_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r65 = dyn c6(r63, 2)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r65)
  // L0(r65)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r65_;
  goto L0_;

L2_:;
  // sym11 = ldf length
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base11 = ldf length in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard11 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r60 = dyn base10(<lang length(parm)>, 2)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L0_;

L4_:;
  // parm11 = ld parm
  Rsh_Fir_reg_parm11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // parm12 = force? parm11
  Rsh_Fir_reg_parm12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm11_);
  // checkMissing(parm12)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_parm12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r64 = dyn length3(parm12)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_parm12_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L1(r64)
  // L1(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L1_;

L5_:;
  // r62 = dyn base11(<sym parm>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L1(r62)
  // L1(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_7(SEXP CCP, SEXP RHO) {
  // sym12 = ldf list
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base12 = ldf list in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard12 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
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
  // parm13 = ld parm
  Rsh_Fir_reg_parm13_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // parm14 = force? parm13
  Rsh_Fir_reg_parm14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_parm13_);
  // checkMissing(parm14)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_parm14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // pct = ld pct
  Rsh_Fir_reg_pct = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // pct1 = force? pct
  Rsh_Fir_reg_pct1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pct);
  // checkMissing(pct1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_pct1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r69 = dyn list(parm14, pct1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_parm14_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_pct1_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r69)
  // L0(r69)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r69_;
  goto L0_;

L2_:;
  // r67 = dyn base12(<sym parm>, <sym pct>)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r67)
  // L0(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_8(SEXP CCP, SEXP RHO) {
  // a4 = ld a
  Rsh_Fir_reg_a4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // a5 = force? a4
  Rsh_Fir_reg_a5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a4_);
  // checkMissing(a5)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_a5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return a5
  return Rsh_Fir_reg_a5_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_9(SEXP CCP, SEXP RHO) {
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // return n1
  return Rsh_Fir_reg_n1_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_10(SEXP CCP, SEXP RHO) {
  // pro = ld pro
  Rsh_Fir_reg_pro = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // pro1 = force? pro
  Rsh_Fir_reg_pro1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pro);
  // checkMissing(pro1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_pro1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(pro1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_pro1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if c10 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c11 = `is.object`(dx15)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if c11 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L2_:;
  // dr10 = tryDispatchBuiltin.1("[", pro1)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_pro1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args111);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc5 then L4() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L4()
    goto L4_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r77 = dyn __3(pro1, <missing>, "par.vals")
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_pro1_;
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args113[2] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r77)
  // L0(r77)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r77_;
  goto L0_;

L4_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;

L5_:;
  // dr12 = tryDispatchBuiltin.1("[", dx15)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args115);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if dc6 then L7() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L7()
    goto L7_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // pm2 = ld pm
  Rsh_Fir_reg_pm2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // pm3 = force? pm2
  Rsh_Fir_reg_pm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pm2_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r78 = dyn __4(dx15, <missing>, pm3)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_pm3_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L1(r78)
  // L1(r78)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r78_;
  goto L1_;

L7_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L1(dx18)
  // L1(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_11(SEXP CCP, SEXP RHO) {
  // pro4 = ld pro
  Rsh_Fir_reg_pro4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // pro5 = force? pro4
  Rsh_Fir_reg_pro5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pro4_);
  // checkMissing(pro5)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_pro5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(pro5)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_pro5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(pro5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(pro5)
    Rsh_Fir_reg_pro7_ = Rsh_Fir_reg_pro5_;
    goto L2_;
  }

L0_:;
  // return dx21
  return Rsh_Fir_reg_dx21_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("$", pro5)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_pro5_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args121);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_pro7_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // r80 = `$`(pro7, <sym tau>)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_pro7_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L0(r80)
  // L0(r80)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r80_;
  goto L0_;

L3_:;
  // dx20 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_12(SEXP CCP, SEXP RHO) {
  // pro8 = ld pro
  Rsh_Fir_reg_pro8_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // pro9 = force? pro8
  Rsh_Fir_reg_pro9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pro8_);
  // checkMissing(pro9)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_pro9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(pro9)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_pro9_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx23
  return Rsh_Fir_reg_dx23_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", pro9)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_pro9_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args128);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r84 = dyn __5(pro9, <missing>, "par.vals")
  SEXP Rsh_Fir_array_args130[3];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_pro9_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args130[2] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 3, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r84)
  // L0(r84)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r84_;
  goto L0_;

L3_:;
  // dx22 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L0(dx22)
  // L0(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_13(SEXP CCP, SEXP RHO) {
  // pro12 = ld pro
  Rsh_Fir_reg_pro12_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // pro13 = force? pro12
  Rsh_Fir_reg_pro13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pro12_);
  // checkMissing(pro13)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_pro13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(pro13)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_pro13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if c14 then L1() else L2(pro13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L1()
    goto L1_;
  } else {
  // L2(pro13)
    Rsh_Fir_reg_pro15_ = Rsh_Fir_reg_pro13_;
    goto L2_;
  }

L0_:;
  // return dx25
  return Rsh_Fir_reg_dx25_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("$", pro13)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_pro13_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args134);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_pro15_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // r86 = `$`(pro15, <sym tau>)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_pro15_;
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L0(r86)
  // L0(r86)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r86_;
  goto L0_;

L3_:;
  // dx24 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L0(dx24)
  // L0(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_14(SEXP CCP, SEXP RHO) {
  // sp = ld sp
  Rsh_Fir_reg_sp = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // sp1 = force? sp
  Rsh_Fir_reg_sp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sp);
  // checkMissing(sp1)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_sp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(sp1)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_sp1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c15 then L1() else L2(sp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2(sp1)
    Rsh_Fir_reg_sp3_ = Rsh_Fir_reg_sp1_;
    goto L2_;
  }

L0_:;
  // return dx27
  return Rsh_Fir_reg_dx27_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("$", sp1)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_sp1_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args141);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_sp3_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // r89 = `$`(sp3, <sym y>)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sp3_;
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // goto L0(r89)
  // L0(r89)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r89_;
  goto L0_;

L3_:;
  // dx26 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L0(dx26)
  // L0(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_15(SEXP CCP, SEXP RHO) {
  // sp4 = ld sp
  Rsh_Fir_reg_sp4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // sp5 = force? sp4
  Rsh_Fir_reg_sp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sp4_);
  // checkMissing(sp5)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_sp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(sp5)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_sp5_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c16 then L1() else L2(sp5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L1()
    goto L1_;
  } else {
  // L2(sp5)
    Rsh_Fir_reg_sp7_ = Rsh_Fir_reg_sp5_;
    goto L2_;
  }

L0_:;
  // return dx29
  return Rsh_Fir_reg_dx29_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("$", sp5)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_sp5_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args147);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_sp7_ = Rsh_Fir_reg_dr22_;
    goto L2_;
  }

L2_:;
  // r91 = `$`(sp7, <sym x>)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_sp7_;
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // goto L0(r91)
  // L0(r91)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r91_;
  goto L0_;

L3_:;
  // dx28 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // goto L0(dx28)
  // L0(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2891763239_16(SEXP CCP, SEXP RHO) {
  // cutoff = ld cutoff
  Rsh_Fir_reg_cutoff = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // cutoff1 = force? cutoff
  Rsh_Fir_reg_cutoff1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cutoff);
  // checkMissing(cutoff1)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_cutoff1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // return cutoff1
  return Rsh_Fir_reg_cutoff1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
