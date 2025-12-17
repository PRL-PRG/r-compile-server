#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1836514972_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1836514972_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1836514972_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1836514972_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1836514972_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1836514972_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1836514972_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1836514972_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1836514972_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner1836514972
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1836514972_, RHO, CCP);
  // st `predict.smooth.spline.fit` = r
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
SEXP Rsh_Fir_user_function_inner1836514972_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1836514972 dynamic dispatch ([object, x, deriv, `...`])

  return Rsh_Fir_user_version_inner1836514972_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1836514972_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1836514972 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1836514972/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_deriv;  // deriv
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_deriv_isMissing;  // deriv_isMissing
  SEXP Rsh_Fir_reg_deriv_orDefault;  // deriv_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_object17_;  // object17
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_object21_;  // object21
  SEXP Rsh_Fir_reg_object22_;  // object22
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_object24_;  // object24
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_xs;  // xs
  SEXP Rsh_Fir_reg_xs1_;  // xs1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_xs2_;  // xs2
  SEXP Rsh_Fir_reg_xs3_;  // xs3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_extrap_left;  // extrap_left
  SEXP Rsh_Fir_reg_extrap_left1_;  // extrap_left1
  SEXP Rsh_Fir_reg_extrap_right;  // extrap_right
  SEXP Rsh_Fir_reg_extrap_right1_;  // extrap_right1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_interp;  // interp
  SEXP Rsh_Fir_reg_interp1_;  // interp1
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_xs4_;  // xs4
  SEXP Rsh_Fir_reg_xs5_;  // xs5
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_interp2_;  // interp2
  SEXP Rsh_Fir_reg_interp3_;  // interp3
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_C_bvalus;  // C_bvalus
  SEXP Rsh_Fir_reg_C_bvalus1_;  // C_bvalus1
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_object25_;  // object25
  SEXP Rsh_Fir_reg_object26_;  // object26
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_object28_;  // object28
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_object29_;  // object29
  SEXP Rsh_Fir_reg_object30_;  // object30
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_object32_;  // object32
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_as_double1_;  // as_double1
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_object33_;  // object33
  SEXP Rsh_Fir_reg_object34_;  // object34
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_object36_;  // object36
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_xs6_;  // xs6
  SEXP Rsh_Fir_reg_xs7_;  // xs7
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_xs9_;  // xs9
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_interp4_;  // interp4
  SEXP Rsh_Fir_reg_interp5_;  // interp5
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_as_double2_;  // as_double2
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_double;  // double
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_deriv1_;  // deriv1
  SEXP Rsh_Fir_reg_deriv2_;  // deriv2
  SEXP Rsh_Fir_reg_as_integer2_;  // as_integer2
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg__Fortran;  // _Fortran
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_interp6_;  // interp6
  SEXP Rsh_Fir_reg_interp7_;  // interp7
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_extrap;  // extrap
  SEXP Rsh_Fir_reg_extrap1_;  // extrap1
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_object37_;  // object37
  SEXP Rsh_Fir_reg_object38_;  // object38
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_object40_;  // object40
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_object41_;  // object41
  SEXP Rsh_Fir_reg_object42_;  // object42
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_object44_;  // object44
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_object45_;  // object45
  SEXP Rsh_Fir_reg_object46_;  // object46
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_object48_;  // object48
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_deriv3_;  // deriv3
  SEXP Rsh_Fir_reg_deriv4_;  // deriv4
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_Recall;  // Recall
  SEXP Rsh_Fir_reg_object49_;  // object49
  SEXP Rsh_Fir_reg_object50_;  // object50
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_xrange;  // xrange
  SEXP Rsh_Fir_reg_xrange1_;  // xrange1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_Recall1_;  // Recall1
  SEXP Rsh_Fir_reg_object51_;  // object51
  SEXP Rsh_Fir_reg_object52_;  // object52
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_xrange2_;  // xrange2
  SEXP Rsh_Fir_reg_xrange3_;  // xrange3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_object53_;  // object53
  SEXP Rsh_Fir_reg_object54_;  // object54
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_object56_;  // object56
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_dx52_;  // dx52
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_extrap_left2_;  // extrap_left2
  SEXP Rsh_Fir_reg_extrap_left3_;  // extrap_left3
  SEXP Rsh_Fir_reg_any2_;  // any2
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_end_object;  // end_object
  SEXP Rsh_Fir_reg_end_object1_;  // end_object1
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_end_object3_;  // end_object3
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_dx54_;  // dx54
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_end_slopes;  // end_slopes
  SEXP Rsh_Fir_reg_end_slopes1_;  // end_slopes1
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_dx56_;  // dx56
  SEXP Rsh_Fir_reg_end_slopes3_;  // end_slopes3
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx58_;  // dx58
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_dx60_;  // dx60
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_xs10_;  // xs10
  SEXP Rsh_Fir_reg_xs11_;  // xs11
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_dx63_;  // dx63
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_xs13_;  // xs13
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx67_;  // dx67
  SEXP Rsh_Fir_reg_dx68_;  // dx68
  SEXP Rsh_Fir_reg_dx69_;  // dx69
  SEXP Rsh_Fir_reg_dx70_;  // dx70
  SEXP Rsh_Fir_reg_extrap_left4_;  // extrap_left4
  SEXP Rsh_Fir_reg_extrap_left5_;  // extrap_left5
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_dx72_;  // dx72
  SEXP Rsh_Fir_reg_extrap_left6_;  // extrap_left6
  SEXP Rsh_Fir_reg_extrap_left7_;  // extrap_left7
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_extrap_right2_;  // extrap_right2
  SEXP Rsh_Fir_reg_extrap_right3_;  // extrap_right3
  SEXP Rsh_Fir_reg_any3_;  // any3
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_end_object4_;  // end_object4
  SEXP Rsh_Fir_reg_end_object5_;  // end_object5
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_end_object7_;  // end_object7
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx73_;  // dx73
  SEXP Rsh_Fir_reg_dx74_;  // dx74
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_end_slopes4_;  // end_slopes4
  SEXP Rsh_Fir_reg_end_slopes5_;  // end_slopes5
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_dx76_;  // dx76
  SEXP Rsh_Fir_reg_end_slopes7_;  // end_slopes7
  SEXP Rsh_Fir_reg_dr46_;  // dr46
  SEXP Rsh_Fir_reg_dc23_;  // dc23
  SEXP Rsh_Fir_reg_dx78_;  // dx78
  SEXP Rsh_Fir_reg_dx79_;  // dx79
  SEXP Rsh_Fir_reg_dx80_;  // dx80
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_xs14_;  // xs14
  SEXP Rsh_Fir_reg_xs15_;  // xs15
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_dx83_;  // dx83
  SEXP Rsh_Fir_reg_dx84_;  // dx84
  SEXP Rsh_Fir_reg_xs17_;  // xs17
  SEXP Rsh_Fir_reg_dr48_;  // dr48
  SEXP Rsh_Fir_reg_dc24_;  // dc24
  SEXP Rsh_Fir_reg_dx87_;  // dx87
  SEXP Rsh_Fir_reg_dx88_;  // dx88
  SEXP Rsh_Fir_reg_dx89_;  // dx89
  SEXP Rsh_Fir_reg_dx90_;  // dx90
  SEXP Rsh_Fir_reg_extrap_right4_;  // extrap_right4
  SEXP Rsh_Fir_reg_extrap_right5_;  // extrap_right5
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr50_;  // dr50
  SEXP Rsh_Fir_reg_dc25_;  // dc25
  SEXP Rsh_Fir_reg_dx91_;  // dx91
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_dx92_;  // dx92
  SEXP Rsh_Fir_reg_extrap_right6_;  // extrap_right6
  SEXP Rsh_Fir_reg_extrap_right7_;  // extrap_right7
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_deriv5_;  // deriv5
  SEXP Rsh_Fir_reg_deriv6_;  // deriv6
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_Recall2_;  // Recall2
  SEXP Rsh_Fir_reg_object57_;  // object57
  SEXP Rsh_Fir_reg_object58_;  // object58
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_xrange4_;  // xrange4
  SEXP Rsh_Fir_reg_xrange5_;  // xrange5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_dr52_;  // dr52
  SEXP Rsh_Fir_reg_dc26_;  // dc26
  SEXP Rsh_Fir_reg_dx93_;  // dx93
  SEXP Rsh_Fir_reg_dx94_;  // dx94
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_object59_;  // object59
  SEXP Rsh_Fir_reg_object60_;  // object60
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_dx96_;  // dx96
  SEXP Rsh_Fir_reg_object62_;  // object62
  SEXP Rsh_Fir_reg_dr54_;  // dr54
  SEXP Rsh_Fir_reg_dc27_;  // dc27
  SEXP Rsh_Fir_reg_dx98_;  // dx98
  SEXP Rsh_Fir_reg_dx99_;  // dx99
  SEXP Rsh_Fir_reg_dx100_;  // dx100
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_end_slopes8_;  // end_slopes8
  SEXP Rsh_Fir_reg_end_slopes9_;  // end_slopes9
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_end_slopes11_;  // end_slopes11
  SEXP Rsh_Fir_reg_dr56_;  // dr56
  SEXP Rsh_Fir_reg_dc28_;  // dc28
  SEXP Rsh_Fir_reg_dx101_;  // dx101
  SEXP Rsh_Fir_reg_dx102_;  // dx102
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_dx104_;  // dx104
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr58_;  // dr58
  SEXP Rsh_Fir_reg_dc29_;  // dc29
  SEXP Rsh_Fir_reg_dx106_;  // dx106
  SEXP Rsh_Fir_reg_dx108_;  // dx108
  SEXP Rsh_Fir_reg_extrap_left8_;  // extrap_left8
  SEXP Rsh_Fir_reg_extrap_left9_;  // extrap_left9
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_end_slopes12_;  // end_slopes12
  SEXP Rsh_Fir_reg_end_slopes13_;  // end_slopes13
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_end_slopes15_;  // end_slopes15
  SEXP Rsh_Fir_reg_dr60_;  // dr60
  SEXP Rsh_Fir_reg_dc30_;  // dc30
  SEXP Rsh_Fir_reg_dx109_;  // dx109
  SEXP Rsh_Fir_reg_dx110_;  // dx110
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_dx112_;  // dx112
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr62_;  // dr62
  SEXP Rsh_Fir_reg_dc31_;  // dc31
  SEXP Rsh_Fir_reg_dx114_;  // dx114
  SEXP Rsh_Fir_reg_dx115_;  // dx115
  SEXP Rsh_Fir_reg_dx116_;  // dx116
  SEXP Rsh_Fir_reg_extrap_right8_;  // extrap_right8
  SEXP Rsh_Fir_reg_extrap_right9_;  // extrap_right9
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr64_;  // dr64
  SEXP Rsh_Fir_reg_dc32_;  // dc32
  SEXP Rsh_Fir_reg_dx117_;  // dx117
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_dx118_;  // dx118
  SEXP Rsh_Fir_reg_extrap2_;  // extrap2
  SEXP Rsh_Fir_reg_extrap3_;  // extrap3
  SEXP Rsh_Fir_reg____5_;  // ___5
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_deriv7_;  // deriv7
  SEXP Rsh_Fir_reg_deriv8_;  // deriv8
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_object63_;  // object63
  SEXP Rsh_Fir_reg_object64_;  // object64
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_object66_;  // object66
  SEXP Rsh_Fir_reg_dr66_;  // dr66
  SEXP Rsh_Fir_reg_dc33_;  // dc33
  SEXP Rsh_Fir_reg_dx119_;  // dx119
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_dx120_;  // dx120
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_deriv9_;  // deriv9
  SEXP Rsh_Fir_reg_deriv10_;  // deriv10
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r147_;  // r147

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_x = PARAMS[1];
  Rsh_Fir_reg_deriv = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // deriv_isMissing = missing.0(deriv)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_deriv;
  Rsh_Fir_reg_deriv_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if deriv_isMissing then L0(0.0) else L0(deriv)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_deriv_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_deriv_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(deriv)
    Rsh_Fir_reg_deriv_orDefault = Rsh_Fir_reg_deriv;
    goto L0_;
  }

L0_:;
  // st deriv = deriv_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_deriv_orDefault, RHO);
  (void)(Rsh_Fir_reg_deriv_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L50() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L50()
    goto L50_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L5()
  // L5()
  goto L5_;

L3_:;
  // st x = r4
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // goto L5()
  // L5()
  goto L5_;

L4_:;
  // r13 = `-`(r10, 4)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r14 = dyn seq_int(dx1, r8, r13)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args4[2] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L76() else D5()
  // L76()
  goto L76_;

L5_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L78() else D6()
  // L78()
  goto L78_;

L6_:;
  // st n = r29
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // xs4 = ld xs
  Rsh_Fir_reg_xs4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L97() else D15()
  // L97()
  goto L97_;

L7_:;
  // c7 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c7 then L102() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L102()
    goto L102_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L18()
  // L18()
  goto L18_;

L9_:;
  // c12 = `is.object`(r35)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c12 then L150() else L151(r35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L150()
    goto L150_;
  } else {
  // L151(r35)
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r35_;
    goto L151_;
  }

L10_:;
  // sym7 = ldf `as.double`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base7 = ldf `as.double` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard7 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L11_:;
  // sym8 = ldf `as.double`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base8 = ldf `as.double` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard8 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L12_:;
  // sym9 = ldf `as.integer`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base9 = ldf `as.integer` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard9 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L13_:;
  // sym10 = ldf `as.double`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base10 = ldf `as.double` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard10 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L14_:;
  // double = ldf double
  Rsh_Fir_reg_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L142() else D30()
  // L142()
  goto L142_;

L15_:;
  // as_double2 = ldf `as.double` in base
  Rsh_Fir_reg_as_double2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r54 = dyn as_double2(dx23)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L141() else D29()
  // L141()
  goto L141_;

L16_:;
  // _Fortran = ldf `.Fortran` in base
  Rsh_Fir_reg__Fortran = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r60 = dyn _Fortran(C_bvalus1, r37, r40, r44, r48, r52, r56, r58)
  SEXP Rsh_Fir_array_args12[8];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_C_bvalus1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args12[4] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args12[5] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args12[6] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args12[7] = Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_array_arg_names2[8];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Fortran, 8, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L148() else D34()
  // L148()
  goto L148_;

L17_:;
  // st y = dx31
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // sym12 = ldf any
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base12 = ldf any in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard12 then L158() else L159()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L158()
    goto L158_;
  } else {
  // L159()
    goto L159_;
  }

L19_:;
  // c14 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c14 then L162() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L162()
    goto L162_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L44()
  // L44()
  goto L44_;

L21_:;
  // st xrange = r69
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // deriv3 = ld deriv
  Rsh_Fir_reg_deriv3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L181() else D42()
  // L181()
  goto L181_;

L22_:;
  // deriv5 = ld deriv
  Rsh_Fir_reg_deriv5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L247() else D62()
  // L247()
  goto L247_;

L23_:;
  // c23 = `as.logical`(r91)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c23 then L204() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L204()
    goto L204_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L29()
  // L29()
  goto L29_;

L25_:;
  // end_slopes = ld `end.slopes`
  Rsh_Fir_reg_end_slopes = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L209() else D51()
  // L209()
  goto L209_;

L26_:;
  // xs10 = ld xs
  Rsh_Fir_reg_xs10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L213() else D52()
  // L213()
  goto L213_;

L27_:;
  // r96 = `-`(dx70, 0.0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx70_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // r97 = `*`(dx69, r96)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx69_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // r98 = `+`(dx68, r97)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx68_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r97_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // l3 = ld y
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c27 = `is.object`(l3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c27 then L218() else L219(r98, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L218()
    goto L218_;
  } else {
  // L219(r98, l3)
    Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r98_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L219_;
  }

L28_:;
  // st y = dx72
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx72_, RHO);
  (void)(Rsh_Fir_reg_dx72_);
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // sym15 = ldf any
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base15 = ldf any in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard15 then L223() else L224()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L223()
    goto L223_;
  } else {
  // L224()
    goto L224_;
  }

L30_:;
  // c28 = `as.logical`(r106)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c28 then L227() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L227()
    goto L227_;
  } else {
  // L31()
    goto L31_;
  }

L31_:;
  // goto L36(NULL)
  // L36(NULL)
  Rsh_Fir_reg_r119_ = Rsh_const(CCP, 19);
  goto L36_;

L32_:;
  // end_slopes4 = ld `end.slopes`
  Rsh_Fir_reg_end_slopes4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L232() else D58()
  // L232()
  goto L232_;

L33_:;
  // xs14 = ld xs
  Rsh_Fir_reg_xs14_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L236() else D59()
  // L236()
  goto L236_;

L34_:;
  // r111 = `-`(dx90, 1.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx90_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // r112 = `*`(dx89, r111)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx89_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // r113 = `+`(dx88, r112)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx88_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r112_;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // l6 = ld y
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c32 = `is.object`(l6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c32 then L241() else L242(r113, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L241()
    goto L241_;
  } else {
  // L242(r113, l6)
    Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r113_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L242_;
  }

L35_:;
  // st y = dx92
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx92_, RHO);
  (void)(Rsh_Fir_reg_dx92_);
  // goto L36(r117)
  // L36(r117)
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r117_;
  goto L36_;

L36_:;
  // goto L37(r119)
  // L37(r119)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r119_;
  goto L37_;

L37_:;
  // goto L44()
  // L44()
  goto L44_;

L38_:;
  // l15 = ld y
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c40 = `is.object`(l15)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c40 then L277() else L278(0.0, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L277()
    goto L277_;
  } else {
  // L278(0.0, l15)
    Rsh_Fir_reg_r135_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L278_;
  }

L39_:;
  // l9 = ld y
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c37 = `is.object`(l9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c37 then L264() else L265(dx102, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L264()
    goto L264_;
  } else {
  // L265(dx102, l9)
    Rsh_Fir_reg_dx104_ = Rsh_Fir_reg_dx102_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L265_;
  }

L40_:;
  // st y = dx108
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx108_, RHO);
  (void)(Rsh_Fir_reg_dx108_);
  // end_slopes12 = ld `end.slopes`
  Rsh_Fir_reg_end_slopes12_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L268() else D68()
  // L268()
  goto L268_;

L41_:;
  // l12 = ld y
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c39 = `is.object`(l12)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c39 then L272() else L273(dx110, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L272()
    goto L272_;
  } else {
  // L273(dx110, l12)
    Rsh_Fir_reg_dx112_ = Rsh_Fir_reg_dx110_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L273_;
  }

L42_:;
  // st y = dx116
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx116_, RHO);
  (void)(Rsh_Fir_reg_dx116_);
  // goto L37(dx115)
  // L37(dx115)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_dx115_;
  goto L37_;

L43_:;
  // st y = dx118
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx118_, RHO);
  (void)(Rsh_Fir_reg_dx118_);
  // goto L37(r137)
  // L37(r137)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r137_;
  goto L37_;

L44_:;
  // deriv7 = ld deriv
  Rsh_Fir_reg_deriv7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L282() else D71()
  // L282()
  goto L282_;

L45_:;
  // goto L46()
  // L46()
  goto L46_;

L46_:;
  // sym16 = ldf list
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base16 = ldf list in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard16 then L292() else L293()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L292()
    goto L292_;
  } else {
  // L293()
    goto L293_;
  }

L47_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r146
  return Rsh_Fir_reg_r146_;

L48_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn missing(<sym x>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L49_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L50_:;
  // sym1 = ldf `seq.int`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `seq.int` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard1 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L51_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L53() else D0()
  // L53()
  goto L53_;

L52_:;
  // r3 = dyn base1[from, to, `length.out`](<lang `$`(object, min)>, <lang `+`(`$`(object, min), `$`(object, range))>, <lang `-`(length(`$`(object, coef)), 4)>)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L3_;

D0_:;
  // deopt 5 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L53_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c1 then L55() else L56(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L55()
    goto L55_;
  } else {
  // L56(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L56_;
  }

L54_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L58() else D1()
  // L58()
  goto L58_;

L55_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc then L57() else L56(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L57()
    goto L57_;
  } else {
  // L56(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L56_;
  }

L56_:;
  // r5 = `$`(object4, <sym min>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L54(r5)
  // L54(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L54_;

L57_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L54(dx)
  // L54(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L54_;

D1_:;
  // deopt 9 [object5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L58_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(object6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c2 then L60() else L61(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L60()
    goto L60_;
  } else {
  // L61(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L61_;
  }

L59_:;
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L63() else D2()
  // L63()
  goto L63_;

L60_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc1 then L62() else L61(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L62()
    goto L62_;
  } else {
  // L61(dr2)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L61_;
  }

L61_:;
  // r6 = `$`(object8, <sym min>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L59(r6)
  // L59(r6)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r6_;
  goto L59_;

L62_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L59(dx2)
  // L59(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L59_;

D2_:;
  // deopt 11 [dx3, object9]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L63_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object10)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c3 then L65() else L66(dx3, object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L65()
    goto L65_;
  } else {
  // L66(dx3, object10)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L66_;
  }

L64_:;
  // r8 = `+`(dx8, dx9)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard2 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L65_:;
  // dr4 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc2 then L67() else L66(dx3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L67()
    goto L67_;
  } else {
  // L66(dx3, dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr4_;
    goto L66_;
  }

L66_:;
  // r7 = `$`(object12, <sym range>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L64(dx5, r7)
  // L64(dx5, r7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r7_;
  goto L64_;

L67_:;
  // dx7 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L64(dx3, dx7)
  // L64(dx3, dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
  goto L64_;

L68_:;
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L70() else D3()
  // L70()
  goto L70_;

L69_:;
  // r9 = dyn base2(<lang `$`(object, coef)>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D3_:;
  // deopt 18 [object13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_object13_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L70_:;
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(object14)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c4 then L72() else L73(object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L72()
    goto L72_;
  } else {
  // L73(object14)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L73_;
  }

L71_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r12 = dyn length(dx11)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L75() else D4()
  // L75()
  goto L75_;

L72_:;
  // dr6 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc3 then L74() else L73(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L74()
    goto L74_;
  } else {
  // L73(dr6)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr6_;
    goto L73_;
  }

L73_:;
  // r11 = `$`(object16, <sym coef>)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L71(r11)
  // L71(r11)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r11_;
  goto L71_;

L74_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L71(dx10)
  // L71(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L71_;

D4_:;
  // deopt 22 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r12_;
  goto L4_;

D5_:;
  // deopt 27 [r14]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L3(r14)
  // L3(r14)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r14_;
  goto L3_;

D6_:;
  // deopt 31 [x1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L78_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L79() else D7()
  // L79()
  goto L79_;

D7_:;
  // deopt 32 [x2, object17]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_object17_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L79_:;
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(object18)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c5 then L81() else L82(x2, object18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L81()
    goto L81_;
  } else {
  // L82(x2, object18)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_object18_;
    goto L82_;
  }

L80_:;
  // r17 = `-`(x6, dx13)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // object21 = ld object
  Rsh_Fir_reg_object21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L84() else D8()
  // L84()
  goto L84_;

L81_:;
  // dr8 = tryDispatchBuiltin.1("$", object18)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc4 then L83() else L82(x2, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L83()
    goto L83_;
  } else {
  // L82(x2, dr8)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_dr8_;
    goto L82_;
  }

L82_:;
  // r16 = `$`(object20, <sym min>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L80(x4, r16)
  // L80(x4, r16)
  Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r16_;
  goto L80_;

L83_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L80(x2, dx12)
  // L80(x2, dx12)
  Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L80_;

D8_:;
  // deopt 35 [r17, object21]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_object21_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L84_:;
  // object22 = force? object21
  Rsh_Fir_reg_object22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object21_);
  // checkMissing(object22)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_object22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(object22)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c6 then L86() else L87(r17, object22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L86()
    goto L86_;
  } else {
  // L87(r17, object22)
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r17_;
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_object22_;
    goto L87_;
  }

L85_:;
  // r23 = `/`(r21, dx15)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // st xs = r23
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // xs = ld xs
  Rsh_Fir_reg_xs = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L89() else D9()
  // L89()
  goto L89_;

L86_:;
  // dr10 = tryDispatchBuiltin.1("$", object22)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc5 then L88() else L87(r17, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L88()
    goto L88_;
  } else {
  // L87(r17, dr10)
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r17_;
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_dr10_;
    goto L87_;
  }

L87_:;
  // r22 = `$`(object24, <sym range>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_object24_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L85(r19, r22)
  // L85(r19, r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r22_;
  goto L85_;

L88_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L85(r17, dx14)
  // L85(r17, dx14)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L85_;

D9_:;
  // deopt 40 [xs]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_xs;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L89_:;
  // xs1 = force? xs
  Rsh_Fir_reg_xs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xs);
  // checkMissing(xs1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_xs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r24 = `<`(xs1, 0.0)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_xs1_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // st `extrap.left` = r24
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // xs2 = ld xs
  Rsh_Fir_reg_xs2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L90() else D10()
  // L90()
  goto L90_;

D10_:;
  // deopt 45 [xs2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_xs2_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L90_:;
  // xs3 = force? xs2
  Rsh_Fir_reg_xs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xs2_);
  // checkMissing(xs3)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_xs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r25 = `>`(xs3, 1.0)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_xs3_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // st `extrap.right` = r25
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // extrap_left = ld `extrap.left`
  Rsh_Fir_reg_extrap_left = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L91() else D11()
  // L91()
  goto L91_;

D11_:;
  // deopt 50 [extrap_left]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_extrap_left;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L91_:;
  // extrap_left1 = force? extrap_left
  Rsh_Fir_reg_extrap_left1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_left);
  // checkMissing(extrap_left1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_extrap_left1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // extrap_right = ld `extrap.right`
  Rsh_Fir_reg_extrap_right = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L92() else D12()
  // L92()
  goto L92_;

D12_:;
  // deopt 51 [extrap_left1, extrap_right]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_extrap_left1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_extrap_right;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L92_:;
  // extrap_right1 = force? extrap_right
  Rsh_Fir_reg_extrap_right1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_right);
  // checkMissing(extrap_right1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_extrap_right1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r26 = `||`(extrap_left1, extrap_right1)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_extrap_left1_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_extrap_right1_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // st extrap = r26
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // r27 = `!`(r26)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // st interp = r27
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sym3 = ldf sum
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base3 = ldf sum in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard3 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L93_:;
  // interp = ld interp
  Rsh_Fir_reg_interp = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L95() else D13()
  // L95()
  goto L95_;

L94_:;
  // r28 = dyn base3(<sym interp>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r28)
  // L6(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L6_;

D13_:;
  // deopt 59 [interp]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_interp;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L95_:;
  // interp1 = force? interp
  Rsh_Fir_reg_interp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interp);
  // checkMissing(interp1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_interp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r30 = dyn sum(interp1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_interp1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L96() else D14()
  // L96()
  goto L96_;

D14_:;
  // deopt 62 [r30]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L6(r30)
  // L6(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L6_;

D15_:;
  // deopt 64 [xs4]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_xs4_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L97_:;
  // xs5 = force? xs4
  Rsh_Fir_reg_xs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xs4_);
  // checkMissing(xs5)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_xs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // st y = xs5
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_xs5_, RHO);
  (void)(Rsh_Fir_reg_xs5_);
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard4 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L98_:;
  // interp2 = ld interp
  Rsh_Fir_reg_interp2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L100() else D16()
  // L100()
  goto L100_;

L99_:;
  // r31 = dyn base4(<sym interp>)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(r31)
  // L7(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L7_;

D16_:;
  // deopt 69 [interp2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_interp2_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L100_:;
  // interp3 = force? interp2
  Rsh_Fir_reg_interp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interp2_);
  // checkMissing(interp3)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_interp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r33 = dyn any(interp3)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_interp3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L101() else D17()
  // L101()
  goto L101_;

D17_:;
  // deopt 72 [r33]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L7(r33)
  // L7(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L7_;

L102_:;
  // sym5 = ldf `.Fortran`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf `.Fortran` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard5 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L103_:;
  // C_bvalus = ld C_bvalus
  Rsh_Fir_reg_C_bvalus = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L105() else D18()
  // L105()
  goto L105_;

L104_:;
  // r34 = dyn base5[, n, knot, coef, nk, x, s, order](<sym C_bvalus>, <lang as.integer(n)>, <lang as.double(`$`(object, knot))>, <lang as.double(`$`(object, coef))>, <lang as.integer(`$`(object, nk))>, <lang as.double(`[`(xs, interp))>, <lang double(n)>, <lang as.integer(deriv)>)
  SEXP Rsh_Fir_array_args95[8];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args95[2] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args95[3] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args95[4] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args95[5] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args95[6] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args95[7] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names12[8];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 47);
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 33);
  Rsh_Fir_array_arg_names12[4] = Rsh_const(CCP, 48);
  Rsh_Fir_array_arg_names12[5] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names12[6] = Rsh_const(CCP, 49);
  Rsh_Fir_array_arg_names12[7] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 8, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L9(r34)
  // L9(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L9_;

D18_:;
  // deopt 75 [C_bvalus]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_C_bvalus;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L105_:;
  // C_bvalus1 = force? C_bvalus
  Rsh_Fir_reg_C_bvalus1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_bvalus);
  // checkMissing(C_bvalus1)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_C_bvalus1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // sym6 = ldf `as.integer`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base6 = ldf `as.integer` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard6 then L106() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L106()
    goto L106_;
  } else {
  // L107()
    goto L107_;
  }

L106_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L108() else D19()
  // L108()
  goto L108_;

L107_:;
  // r36 = dyn base6(<sym n>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(r36)
  // L10(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L10_;

D19_:;
  // deopt 79 [n]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L108_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r38 = dyn as_integer(n1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L109() else D20()
  // L109()
  goto L109_;

D20_:;
  // deopt 82 [r38]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L10(r38)
  // L10(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L10_;

L110_:;
  // object25 = ld object
  Rsh_Fir_reg_object25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L112() else D21()
  // L112()
  goto L112_;

L111_:;
  // r39 = dyn base7(<lang `$`(object, knot)>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r39)
  // L11(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L11_;

D21_:;
  // deopt 86 [object25]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_object25_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L112_:;
  // object26 = force? object25
  Rsh_Fir_reg_object26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object25_);
  // checkMissing(object26)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_object26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(object26)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_object26_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if c8 then L114() else L115(object26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L114()
    goto L114_;
  } else {
  // L115(object26)
    Rsh_Fir_reg_object28_ = Rsh_Fir_reg_object26_;
    goto L115_;
  }

L113_:;
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r42 = dyn as_double(dx17)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L117() else D22()
  // L117()
  goto L117_;

L114_:;
  // dr12 = tryDispatchBuiltin.1("$", object26)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_object26_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc6 then L116() else L115(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L116()
    goto L116_;
  } else {
  // L115(dr12)
    Rsh_Fir_reg_object28_ = Rsh_Fir_reg_dr12_;
    goto L115_;
  }

L115_:;
  // r41 = `$`(object28, <sym knot>)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_object28_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L113(r41)
  // L113(r41)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r41_;
  goto L113_;

L116_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L113(dx16)
  // L113(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L113_;

D22_:;
  // deopt 90 [r42]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L11(r42)
  // L11(r42)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r42_;
  goto L11_;

L118_:;
  // object29 = ld object
  Rsh_Fir_reg_object29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L120() else D23()
  // L120()
  goto L120_;

L119_:;
  // r43 = dyn base8(<lang `$`(object, coef)>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L12(r43)
  // L12(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L12_;

D23_:;
  // deopt 94 [object29]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_object29_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L120_:;
  // object30 = force? object29
  Rsh_Fir_reg_object30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object29_);
  // checkMissing(object30)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_object30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(object30)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_object30_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c9 then L122() else L123(object30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L122()
    goto L122_;
  } else {
  // L123(object30)
    Rsh_Fir_reg_object32_ = Rsh_Fir_reg_object30_;
    goto L123_;
  }

L121_:;
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r46 = dyn as_double1(dx19)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L125() else D24()
  // L125()
  goto L125_;

L122_:;
  // dr14 = tryDispatchBuiltin.1("$", object30)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_object30_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc7 then L124() else L123(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L124()
    goto L124_;
  } else {
  // L123(dr14)
    Rsh_Fir_reg_object32_ = Rsh_Fir_reg_dr14_;
    goto L123_;
  }

L123_:;
  // r45 = `$`(object32, <sym coef>)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_object32_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L121(r45)
  // L121(r45)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r45_;
  goto L121_;

L124_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L121(dx18)
  // L121(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L121_;

D24_:;
  // deopt 98 [r46]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L12(r46)
  // L12(r46)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r46_;
  goto L12_;

L126_:;
  // object33 = ld object
  Rsh_Fir_reg_object33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L128() else D25()
  // L128()
  goto L128_;

L127_:;
  // r47 = dyn base9(<lang `$`(object, nk)>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L13(r47)
  // L13(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L13_;

D25_:;
  // deopt 102 [object33]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_object33_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L128_:;
  // object34 = force? object33
  Rsh_Fir_reg_object34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object33_);
  // checkMissing(object34)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_object34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(object34)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_object34_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if c10 then L130() else L131(object34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L130()
    goto L130_;
  } else {
  // L131(object34)
    Rsh_Fir_reg_object36_ = Rsh_Fir_reg_object34_;
    goto L131_;
  }

L129_:;
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r50 = dyn as_integer1(dx21)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L133() else D26()
  // L133()
  goto L133_;

L130_:;
  // dr16 = tryDispatchBuiltin.1("$", object34)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_object34_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args121);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc8 then L132() else L131(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L132()
    goto L132_;
  } else {
  // L131(dr16)
    Rsh_Fir_reg_object36_ = Rsh_Fir_reg_dr16_;
    goto L131_;
  }

L131_:;
  // r49 = `$`(object36, <sym nk>)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_object36_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L129(r49)
  // L129(r49)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r49_;
  goto L129_;

L132_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L129(dx20)
  // L129(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L129_;

D26_:;
  // deopt 106 [r50]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L133_:;
  // goto L13(r50)
  // L13(r50)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r50_;
  goto L13_;

L134_:;
  // xs6 = ld xs
  Rsh_Fir_reg_xs6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L136() else D27()
  // L136()
  goto L136_;

L135_:;
  // r51 = dyn base10(<lang `[`(xs, interp)>)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L14(r51)
  // L14(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L14_;

D27_:;
  // deopt 110 [xs6]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_xs6_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L136_:;
  // xs7 = force? xs6
  Rsh_Fir_reg_xs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xs6_);
  // checkMissing(xs7)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_xs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(xs7)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_xs7_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c11 then L137() else L138(xs7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L137()
    goto L137_;
  } else {
  // L138(xs7)
    Rsh_Fir_reg_xs9_ = Rsh_Fir_reg_xs7_;
    goto L138_;
  }

L137_:;
  // dr18 = tryDispatchBuiltin.1("[", xs7)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_xs7_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args128);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if dc9 then L139() else L138(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L139()
    goto L139_;
  } else {
  // L138(dr18)
    Rsh_Fir_reg_xs9_ = Rsh_Fir_reg_dr18_;
    goto L138_;
  }

L138_:;
  // interp4 = ld interp
  Rsh_Fir_reg_interp4_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L140() else D28()
  // L140()
  goto L140_;

L139_:;
  // dx22 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L15(dx22)
  // L15(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L15_;

D28_:;
  // deopt 112 [xs9, interp4]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_xs9_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_interp4_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L140_:;
  // interp5 = force? interp4
  Rsh_Fir_reg_interp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interp4_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r53 = dyn __(xs9, interp5)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_xs9_;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_interp5_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L15(r53)
  // L15(r53)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r53_;
  goto L15_;

D29_:;
  // deopt 116 [r54]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L141_:;
  // goto L14(r54)
  // L14(r54)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r54_;
  goto L14_;

D30_:;
  // deopt 119 []
  Rsh_Fir_deopt(119, 0, NULL, CCP, RHO);
  return R_NilValue;

L142_:;
  // p = prom<V +>{
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   return n3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1836514972_, CCP, RHO);
  // r56 = dyn double(p)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L143() else D31()
  // L143()
  goto L143_;

D31_:;
  // deopt 121 [r56]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L143_:;
  // sym11 = ldf `as.integer`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base11 = ldf `as.integer` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args134);
  // if guard11 then L144() else L145()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L144()
    goto L144_;
  } else {
  // L145()
    goto L145_;
  }

L144_:;
  // deriv1 = ld deriv
  Rsh_Fir_reg_deriv1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L146() else D32()
  // L146()
  goto L146_;

L145_:;
  // r57 = dyn base11(<sym deriv>)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L16(r57)
  // L16(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L16_;

D32_:;
  // deopt 125 [deriv1]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_deriv1_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L146_:;
  // deriv2 = force? deriv1
  Rsh_Fir_reg_deriv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv1_);
  // checkMissing(deriv2)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_deriv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // as_integer2 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r59 = dyn as_integer2(deriv2)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_deriv2_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer2_, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L147() else D33()
  // L147()
  goto L147_;

D33_:;
  // deopt 128 [r59]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L147_:;
  // goto L16(r59)
  // L16(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L16_;

D34_:;
  // deopt 131 [r60]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L148_:;
  // goto L9(r60)
  // L9(r60)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r60_;
  goto L9_;

L149_:;
  // l = ld y
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c13 = `is.object`(l)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // if c13 then L153() else L154(dx25, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L153()
    goto L153_;
  } else {
  // L154(dx25, l)
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx25_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L154_;
  }

L150_:;
  // dr20 = tryDispatchBuiltin.1("$", r35)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args139);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if dc10 then L152() else L151(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L152()
    goto L152_;
  } else {
  // L151(dr20)
    Rsh_Fir_reg_r62_ = Rsh_Fir_reg_dr20_;
    goto L151_;
  }

L151_:;
  // r63 = `$`(r62, <sym s>)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_args141[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // goto L149(r63)
  // L149(r63)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r63_;
  goto L149_;

L152_:;
  // dx24 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // goto L149(dx24)
  // L149(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L149_;

L153_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l, dx25)
  SEXP Rsh_Fir_array_args143[3];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args143[2] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args143);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if dc11 then L155() else L154(dx25, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L155()
    goto L155_;
  } else {
  // L154(dx25, dr22)
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx25_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr22_;
    goto L154_;
  }

L154_:;
  // interp6 = ld interp
  Rsh_Fir_reg_interp6_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L156() else D35()
  // L156()
  goto L156_;

L155_:;
  // dx29 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L17(dx25, dx29)
  // L17(dx25, dx29)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
  goto L17_;

D35_:;
  // deopt 134 [dx27, l2, dx25, interp6]
  SEXP Rsh_Fir_array_deopt_stack34[4];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_deopt_stack34[3] = Rsh_Fir_reg_interp6_;
  Rsh_Fir_deopt(134, 4, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L156_:;
  // interp7 = force? interp6
  Rsh_Fir_reg_interp7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interp6_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r64 = dyn ___(l2, dx25, interp7)
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_args146[2] = Rsh_Fir_reg_interp7_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L17(dx27, r64)
  // L17(dx27, r64)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r64_;
  goto L17_;

L158_:;
  // extrap = ld extrap
  Rsh_Fir_reg_extrap = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L160() else D36()
  // L160()
  goto L160_;

L159_:;
  // r65 = dyn base12(<sym extrap>)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L19(r65)
  // L19(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L19_;

D36_:;
  // deopt 142 [extrap]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_extrap;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L160_:;
  // extrap1 = force? extrap
  Rsh_Fir_reg_extrap1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap);
  // checkMissing(extrap1)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_extrap1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r67 = dyn any1(extrap1)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_extrap1_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L161() else D37()
  // L161()
  goto L161_;

D37_:;
  // deopt 145 [r67]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L161_:;
  // goto L19(r67)
  // L19(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L19_;

L162_:;
  // sym13 = ldf c
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base13 = ldf c in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args150);
  // if guard13 then L163() else L164()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L163()
    goto L163_;
  } else {
  // L164()
    goto L164_;
  }

L163_:;
  // object37 = ld object
  Rsh_Fir_reg_object37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L165() else D38()
  // L165()
  goto L165_;

L164_:;
  // r68 = dyn base13(<lang `$`(object, min)>, <lang `+`(`$`(object, min), `$`(object, range))>)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args151[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L21(r68)
  // L21(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L21_;

D38_:;
  // deopt 148 [object37]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_object37_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L165_:;
  // object38 = force? object37
  Rsh_Fir_reg_object38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object37_);
  // checkMissing(object38)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_object38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(object38)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_object38_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if c15 then L167() else L168(object38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L167()
    goto L167_;
  } else {
  // L168(object38)
    Rsh_Fir_reg_object40_ = Rsh_Fir_reg_object38_;
    goto L168_;
  }

L166_:;
  // object41 = ld object
  Rsh_Fir_reg_object41_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L170() else D39()
  // L170()
  goto L170_;

L167_:;
  // dr24 = tryDispatchBuiltin.1("$", object38)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_object38_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args154);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // if dc12 then L169() else L168(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L169()
    goto L169_;
  } else {
  // L168(dr24)
    Rsh_Fir_reg_object40_ = Rsh_Fir_reg_dr24_;
    goto L168_;
  }

L168_:;
  // r70 = `$`(object40, <sym min>)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_object40_;
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // goto L166(r70)
  // L166(r70)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_r70_;
  goto L166_;

L169_:;
  // dx33 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L166(dx33)
  // L166(dx33)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx33_;
  goto L166_;

D39_:;
  // deopt 151 [object41]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_object41_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L170_:;
  // object42 = force? object41
  Rsh_Fir_reg_object42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object41_);
  // checkMissing(object42)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_object42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(object42)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_object42_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // if c16 then L172() else L173(object42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L172()
    goto L172_;
  } else {
  // L173(object42)
    Rsh_Fir_reg_object44_ = Rsh_Fir_reg_object42_;
    goto L173_;
  }

L171_:;
  // object45 = ld object
  Rsh_Fir_reg_object45_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L175() else D40()
  // L175()
  goto L175_;

L172_:;
  // dr26 = tryDispatchBuiltin.1("$", object42)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_object42_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args160);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // if dc13 then L174() else L173(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L174()
    goto L174_;
  } else {
  // L173(dr26)
    Rsh_Fir_reg_object44_ = Rsh_Fir_reg_dr26_;
    goto L173_;
  }

L173_:;
  // r71 = `$`(object44, <sym min>)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_object44_;
  Rsh_Fir_array_args162[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // goto L171(r71)
  // L171(r71)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_r71_;
  goto L171_;

L174_:;
  // dx35 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // goto L171(dx35)
  // L171(dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx35_;
  goto L171_;

D40_:;
  // deopt 153 [dx36, object45]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_dx36_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_object45_;
  Rsh_Fir_deopt(153, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L175_:;
  // object46 = force? object45
  Rsh_Fir_reg_object46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object45_);
  // checkMissing(object46)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_object46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(object46)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_object46_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // if c17 then L177() else L178(dx36, object46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L177()
    goto L177_;
  } else {
  // L178(dx36, object46)
    Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx36_;
    Rsh_Fir_reg_object48_ = Rsh_Fir_reg_object46_;
    goto L178_;
  }

L176_:;
  // r73 = `+`(dx41, dx42)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_dx42_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r74 = dyn c18(dx34, r73)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dx34_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 2, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L180() else D41()
  // L180()
  goto L180_;

L177_:;
  // dr28 = tryDispatchBuiltin.1("$", object46)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_object46_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args168);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if dc14 then L179() else L178(dx36, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L179()
    goto L179_;
  } else {
  // L178(dx36, dr28)
    Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx36_;
    Rsh_Fir_reg_object48_ = Rsh_Fir_reg_dr28_;
    goto L178_;
  }

L178_:;
  // r72 = `$`(object48, <sym range>)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_object48_;
  Rsh_Fir_array_args170[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L176(dx38, r72)
  // L176(dx38, r72)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_r72_;
  goto L176_;

L179_:;
  // dx40 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // goto L176(dx36, dx40)
  // L176(dx36, dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx36_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx40_;
  goto L176_;

D41_:;
  // deopt 158 [r74]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L180_:;
  // goto L21(r74)
  // L21(r74)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r74_;
  goto L21_;

D42_:;
  // deopt 160 [deriv3]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_deriv3_;
  Rsh_Fir_deopt(160, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L181_:;
  // deriv4 = force? deriv3
  Rsh_Fir_reg_deriv4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv3_);
  // checkMissing(deriv4)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_deriv4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // r75 = `==`(deriv4, 0.0)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_deriv4_;
  Rsh_Fir_array_args173[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // c19 = `as.logical`(r75)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // if c19 then L182() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L182()
    goto L182_;
  } else {
  // L22()
    goto L22_;
  }

L182_:;
  // Recall = ldf Recall
  Rsh_Fir_reg_Recall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L183() else D43()
  // L183()
  goto L183_;

D43_:;
  // deopt 165 []
  Rsh_Fir_deopt(165, 0, NULL, CCP, RHO);
  return R_NilValue;

L183_:;
  // p1 = prom<V +>{
  //   object49 = ld object;
  //   object50 = force? object49;
  //   checkMissing(object50);
  //   return object50;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1836514972_1, CCP, RHO);
  // p2 = prom<V +>{
  //   xrange = ld xrange;
  //   xrange1 = force? xrange;
  //   checkMissing(xrange1);
  //   return xrange1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1836514972_2, CCP, RHO);
  // r78 = dyn Recall(p1, p2)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Recall, 2, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L184() else D44()
  // L184()
  goto L184_;

D44_:;
  // deopt 168 [r78]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(168, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L184_:;
  // c20 = `is.object`(r78)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // if c20 then L186() else L187(r78)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L186()
    goto L186_;
  } else {
  // L187(r78)
    Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r78_;
    goto L187_;
  }

L185_:;
  // st `end.object` = dx44
  Rsh_Fir_store(Rsh_const(CCP, 60), Rsh_Fir_reg_dx44_, RHO);
  (void)(Rsh_Fir_reg_dx44_);
  // Recall1 = ldf Recall
  Rsh_Fir_reg_Recall1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L189() else D45()
  // L189()
  goto L189_;

L186_:;
  // dr30 = tryDispatchBuiltin.1("$", r78)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args179);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // if dc15 then L188() else L187(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L188()
    goto L188_;
  } else {
  // L187(dr30)
    Rsh_Fir_reg_r80_ = Rsh_Fir_reg_dr30_;
    goto L187_;
  }

L187_:;
  // r81 = `$`(r80, <sym y>)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_args181[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // goto L185(r81)
  // L185(r81)
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_r81_;
  goto L185_;

L188_:;
  // dx43 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // goto L185(dx43)
  // L185(dx43)
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx43_;
  goto L185_;

D45_:;
  // deopt 172 []
  Rsh_Fir_deopt(172, 0, NULL, CCP, RHO);
  return R_NilValue;

L189_:;
  // p3 = prom<V +>{
  //   object51 = ld object;
  //   object52 = force? object51;
  //   checkMissing(object52);
  //   return object52;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1836514972_3, CCP, RHO);
  // p4 = prom<V +>{
  //   xrange2 = ld xrange;
  //   xrange3 = force? xrange2;
  //   checkMissing(xrange3);
  //   return xrange3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1836514972_4, CCP, RHO);
  // r84 = dyn Recall1(p3, p4, 1.0)
  SEXP Rsh_Fir_array_args185[3];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args185[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Recall1_, 3, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L190() else D46()
  // L190()
  goto L190_;

D46_:;
  // deopt 176 [r84]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L190_:;
  // c21 = `is.object`(r84)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if c21 then L192() else L193(r84)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L192()
    goto L192_;
  } else {
  // L193(r84)
    Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r84_;
    goto L193_;
  }

L191_:;
  // object53 = ld object
  Rsh_Fir_reg_object53_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L195() else D47()
  // L195()
  goto L195_;

L192_:;
  // dr32 = tryDispatchBuiltin.1("$", r84)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args187);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // if dc16 then L194() else L193(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L194()
    goto L194_;
  } else {
  // L193(dr32)
    Rsh_Fir_reg_r86_ = Rsh_Fir_reg_dr32_;
    goto L193_;
  }

L193_:;
  // r87 = `$`(r86, <sym y>)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_args189[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // goto L191(r87)
  // L191(r87)
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_r87_;
  goto L191_;

L194_:;
  // dx45 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // goto L191(dx45)
  // L191(dx45)
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx45_;
  goto L191_;

D47_:;
  // deopt 177 [dx46, object53]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_dx46_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_object53_;
  Rsh_Fir_deopt(177, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L195_:;
  // object54 = force? object53
  Rsh_Fir_reg_object54_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object53_);
  // checkMissing(object54)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_object54_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(object54)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_object54_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // if c22 then L197() else L198(dx46, object54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L197()
    goto L197_;
  } else {
  // L198(dx46, object54)
    Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_dx46_;
    Rsh_Fir_reg_object56_ = Rsh_Fir_reg_object54_;
    goto L198_;
  }

L196_:;
  // r89 = `*`(dx51, dx52)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dx51_;
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_dx52_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // st `end.slopes` = r89
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r89_, RHO);
  (void)(Rsh_Fir_reg_r89_);
  // sym14 = ldf any
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base14 = ldf any in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args194);
  // if guard14 then L200() else L201()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L200()
    goto L200_;
  } else {
  // L201()
    goto L201_;
  }

L197_:;
  // dr34 = tryDispatchBuiltin.1("$", object54)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_object54_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args195);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // if dc17 then L199() else L198(dx46, dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L199()
    goto L199_;
  } else {
  // L198(dx46, dr34)
    Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_dx46_;
    Rsh_Fir_reg_object56_ = Rsh_Fir_reg_dr34_;
    goto L198_;
  }

L198_:;
  // r88 = `$`(object56, <sym range>)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_object56_;
  Rsh_Fir_array_args197[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // goto L196(dx48, r88)
  // L196(dx48, r88)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx48_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_r88_;
  goto L196_;

L199_:;
  // dx50 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // goto L196(dx46, dx50)
  // L196(dx46, dx50)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx46_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_dx50_;
  goto L196_;

L200_:;
  // extrap_left2 = ld `extrap.left`
  Rsh_Fir_reg_extrap_left2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L202() else D48()
  // L202()
  goto L202_;

L201_:;
  // r90 = dyn base14(<sym extrap.left>)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L23(r90)
  // L23(r90)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r90_;
  goto L23_;

D48_:;
  // deopt 184 [extrap_left2]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_extrap_left2_;
  Rsh_Fir_deopt(184, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L202_:;
  // extrap_left3 = force? extrap_left2
  Rsh_Fir_reg_extrap_left3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_left2_);
  // checkMissing(extrap_left3)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_extrap_left3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r92 = dyn any2(extrap_left3)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_extrap_left3_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L203() else D49()
  // L203()
  goto L203_;

D49_:;
  // deopt 187 [r92]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L203_:;
  // goto L23(r92)
  // L23(r92)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r92_;
  goto L23_;

L204_:;
  // end_object = ld `end.object`
  Rsh_Fir_reg_end_object = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // check L205() else D50()
  // L205()
  goto L205_;

D50_:;
  // deopt 188 [end_object]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_end_object;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L205_:;
  // end_object1 = force? end_object
  Rsh_Fir_reg_end_object1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end_object);
  // checkMissing(end_object1)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_end_object1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(end_object1)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_end_object1_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // if c24 then L206() else L207(end_object1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L206()
    goto L206_;
  } else {
  // L207(end_object1)
    Rsh_Fir_reg_end_object3_ = Rsh_Fir_reg_end_object1_;
    goto L207_;
  }

L206_:;
  // dr36 = tryDispatchBuiltin.1("[", end_object1)
  SEXP Rsh_Fir_array_args204[2];
  Rsh_Fir_array_args204[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_end_object1_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args204);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // if dc18 then L208() else L207(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L208()
    goto L208_;
  } else {
  // L207(dr36)
    Rsh_Fir_reg_end_object3_ = Rsh_Fir_reg_dr36_;
    goto L207_;
  }

L207_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r93 = dyn __1(end_object3, 1)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_end_object3_;
  Rsh_Fir_array_args206[1] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args206, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L25(r93)
  // L25(r93)
  Rsh_Fir_reg_dx54_ = Rsh_Fir_reg_r93_;
  goto L25_;

L208_:;
  // dx53 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // goto L25(dx53)
  // L25(dx53)
  Rsh_Fir_reg_dx54_ = Rsh_Fir_reg_dx53_;
  goto L25_;

D51_:;
  // deopt 192 [dx54, end_slopes]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_dx54_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_end_slopes;
  Rsh_Fir_deopt(192, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L209_:;
  // end_slopes1 = force? end_slopes
  Rsh_Fir_reg_end_slopes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end_slopes);
  // checkMissing(end_slopes1)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_end_slopes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(end_slopes1)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_end_slopes1_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // if c25 then L210() else L211(dx54, end_slopes1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L210()
    goto L210_;
  } else {
  // L211(dx54, end_slopes1)
    Rsh_Fir_reg_dx56_ = Rsh_Fir_reg_dx54_;
    Rsh_Fir_reg_end_slopes3_ = Rsh_Fir_reg_end_slopes1_;
    goto L211_;
  }

L210_:;
  // dr38 = tryDispatchBuiltin.1("[", end_slopes1)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_end_slopes1_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args210);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // if dc19 then L212() else L211(dx54, dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L212()
    goto L212_;
  } else {
  // L211(dx54, dr38)
    Rsh_Fir_reg_dx56_ = Rsh_Fir_reg_dx54_;
    Rsh_Fir_reg_end_slopes3_ = Rsh_Fir_reg_dr38_;
    goto L211_;
  }

L211_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r94 = dyn __2(end_slopes3, 1)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_end_slopes3_;
  Rsh_Fir_array_args212[1] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L26(dx56, r94)
  // L26(dx56, r94)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx56_;
  Rsh_Fir_reg_dx60_ = Rsh_Fir_reg_r94_;
  goto L26_;

L212_:;
  // dx58 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx58_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // goto L26(dx54, dx58)
  // L26(dx54, dx58)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx54_;
  Rsh_Fir_reg_dx60_ = Rsh_Fir_reg_dx58_;
  goto L26_;

D52_:;
  // deopt 196 [dx59, dx60, xs10]
  SEXP Rsh_Fir_array_deopt_stack49[3];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_dx59_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_dx60_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_xs10_;
  Rsh_Fir_deopt(196, 3, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L213_:;
  // xs11 = force? xs10
  Rsh_Fir_reg_xs11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xs10_);
  // checkMissing(xs11)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_xs11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(xs11)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_xs11_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // if c26 then L214() else L215(dx59, dx60, xs11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L214()
    goto L214_;
  } else {
  // L215(dx59, dx60, xs11)
    Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dx59_;
    Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_dx60_;
    Rsh_Fir_reg_xs13_ = Rsh_Fir_reg_xs11_;
    goto L215_;
  }

L214_:;
  // dr40 = tryDispatchBuiltin.1("[", xs11)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_xs11_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args216);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // if dc20 then L216() else L215(dx59, dx60, dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L216()
    goto L216_;
  } else {
  // L215(dx59, dx60, dr40)
    Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dx59_;
    Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_dx60_;
    Rsh_Fir_reg_xs13_ = Rsh_Fir_reg_dr40_;
    goto L215_;
  }

L215_:;
  // extrap_left4 = ld `extrap.left`
  Rsh_Fir_reg_extrap_left4_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L217() else D53()
  // L217()
  goto L217_;

L216_:;
  // dx67 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // goto L27(dx59, dx60, dx67)
  // L27(dx59, dx60, dx67)
  Rsh_Fir_reg_dx68_ = Rsh_Fir_reg_dx59_;
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_dx60_;
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_dx67_;
  goto L27_;

D53_:;
  // deopt 198 [dx63, dx64, xs13, extrap_left4]
  SEXP Rsh_Fir_array_deopt_stack50[4];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_dx63_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_dx64_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_xs13_;
  Rsh_Fir_array_deopt_stack50[3] = Rsh_Fir_reg_extrap_left4_;
  Rsh_Fir_deopt(198, 4, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L217_:;
  // extrap_left5 = force? extrap_left4
  Rsh_Fir_reg_extrap_left5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_left4_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r95 = dyn __3(xs13, extrap_left5)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_xs13_;
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_extrap_left5_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args219, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L27(dx63, dx64, r95)
  // L27(dx63, dx64, r95)
  Rsh_Fir_reg_dx68_ = Rsh_Fir_reg_dx63_;
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_dx64_;
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_r95_;
  goto L27_;

L218_:;
  // dr42 = tryDispatchBuiltin.0("[<-", l3, r98)
  SEXP Rsh_Fir_array_args220[3];
  Rsh_Fir_array_args220[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args220[2] = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args220);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty());
  // if dc21 then L220() else L219(r98, dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L220()
    goto L220_;
  } else {
  // L219(r98, dr42)
    Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r98_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr42_;
    goto L219_;
  }

L219_:;
  // extrap_left6 = ld `extrap.left`
  Rsh_Fir_reg_extrap_left6_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L221() else D54()
  // L221()
  goto L221_;

L220_:;
  // dx71 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // goto L28(r98, dx71)
  // L28(r98, dx71)
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_dx71_;
  goto L28_;

D54_:;
  // deopt 206 [r100, l5, r98, extrap_left6]
  SEXP Rsh_Fir_array_deopt_stack51[4];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_deopt_stack51[3] = Rsh_Fir_reg_extrap_left6_;
  Rsh_Fir_deopt(206, 4, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L221_:;
  // extrap_left7 = force? extrap_left6
  Rsh_Fir_reg_extrap_left7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_left6_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r103 = dyn ___1(l5, r98, extrap_left7)
  SEXP Rsh_Fir_array_args223[3];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_args223[2] = Rsh_Fir_reg_extrap_left7_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args223, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L28(r100, r103)
  // L28(r100, r103)
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_r103_;
  goto L28_;

L223_:;
  // extrap_right2 = ld `extrap.right`
  Rsh_Fir_reg_extrap_right2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L225() else D55()
  // L225()
  goto L225_;

L224_:;
  // r105 = dyn base15(<sym extrap.right>)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L30(r105)
  // L30(r105)
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r105_;
  goto L30_;

D55_:;
  // deopt 214 [extrap_right2]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_extrap_right2_;
  Rsh_Fir_deopt(214, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L225_:;
  // extrap_right3 = force? extrap_right2
  Rsh_Fir_reg_extrap_right3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_right2_);
  // checkMissing(extrap_right3)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_extrap_right3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty()));
  // any3 = ldf any in base
  Rsh_Fir_reg_any3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r107 = dyn any3(extrap_right3)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_extrap_right3_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any3_, 1, Rsh_Fir_array_args226, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L226() else D56()
  // L226()
  goto L226_;

D56_:;
  // deopt 217 [r107]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L226_:;
  // goto L30(r107)
  // L30(r107)
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r107_;
  goto L30_;

L227_:;
  // end_object4 = ld `end.object`
  Rsh_Fir_reg_end_object4_ = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // check L228() else D57()
  // L228()
  goto L228_;

D57_:;
  // deopt 218 [end_object4]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_end_object4_;
  Rsh_Fir_deopt(218, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L228_:;
  // end_object5 = force? end_object4
  Rsh_Fir_reg_end_object5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end_object4_);
  // checkMissing(end_object5)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_end_object5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(end_object5)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_end_object5_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty());
  // if c29 then L229() else L230(end_object5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L229()
    goto L229_;
  } else {
  // L230(end_object5)
    Rsh_Fir_reg_end_object7_ = Rsh_Fir_reg_end_object5_;
    goto L230_;
  }

L229_:;
  // dr44 = tryDispatchBuiltin.1("[", end_object5)
  SEXP Rsh_Fir_array_args229[2];
  Rsh_Fir_array_args229[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args229[1] = Rsh_Fir_reg_end_object5_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args229);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty());
  // if dc22 then L231() else L230(dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L231()
    goto L231_;
  } else {
  // L230(dr44)
    Rsh_Fir_reg_end_object7_ = Rsh_Fir_reg_dr44_;
    goto L230_;
  }

L230_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r108 = dyn __4(end_object7, 2)
  SEXP Rsh_Fir_array_args231[2];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_end_object7_;
  Rsh_Fir_array_args231[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args231, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L32(r108)
  // L32(r108)
  Rsh_Fir_reg_dx74_ = Rsh_Fir_reg_r108_;
  goto L32_;

L231_:;
  // dx73 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx73_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // goto L32(dx73)
  // L32(dx73)
  Rsh_Fir_reg_dx74_ = Rsh_Fir_reg_dx73_;
  goto L32_;

D58_:;
  // deopt 222 [dx74, end_slopes4]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_dx74_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_end_slopes4_;
  Rsh_Fir_deopt(222, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L232_:;
  // end_slopes5 = force? end_slopes4
  Rsh_Fir_reg_end_slopes5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end_slopes4_);
  // checkMissing(end_slopes5)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_end_slopes5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(end_slopes5)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_end_slopes5_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // if c30 then L233() else L234(dx74, end_slopes5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L233()
    goto L233_;
  } else {
  // L234(dx74, end_slopes5)
    Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_dx74_;
    Rsh_Fir_reg_end_slopes7_ = Rsh_Fir_reg_end_slopes5_;
    goto L234_;
  }

L233_:;
  // dr46 = tryDispatchBuiltin.1("[", end_slopes5)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_end_slopes5_;
  Rsh_Fir_reg_dr46_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args235);
  // dc23 = getTryDispatchBuiltinDispatched(dr46)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dc23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty());
  // if dc23 then L235() else L234(dx74, dr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc23_)) {
  // L235()
    goto L235_;
  } else {
  // L234(dx74, dr46)
    Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_dx74_;
    Rsh_Fir_reg_end_slopes7_ = Rsh_Fir_reg_dr46_;
    goto L234_;
  }

L234_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r109 = dyn __5(end_slopes7, 2)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_end_slopes7_;
  Rsh_Fir_array_args237[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L33(dx76, r109)
  // L33(dx76, r109)
  Rsh_Fir_reg_dx79_ = Rsh_Fir_reg_dx76_;
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_r109_;
  goto L33_;

L235_:;
  // dx78 = getTryDispatchBuiltinValue(dr46)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dx78_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // goto L33(dx74, dx78)
  // L33(dx74, dx78)
  Rsh_Fir_reg_dx79_ = Rsh_Fir_reg_dx74_;
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_dx78_;
  goto L33_;

D59_:;
  // deopt 226 [dx79, dx80, xs14]
  SEXP Rsh_Fir_array_deopt_stack56[3];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_dx79_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_dx80_;
  Rsh_Fir_array_deopt_stack56[2] = Rsh_Fir_reg_xs14_;
  Rsh_Fir_deopt(226, 3, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L236_:;
  // xs15 = force? xs14
  Rsh_Fir_reg_xs15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xs14_);
  // checkMissing(xs15)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_xs15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(xs15)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_xs15_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty());
  // if c31 then L237() else L238(dx79, dx80, xs15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L237()
    goto L237_;
  } else {
  // L238(dx79, dx80, xs15)
    Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_dx79_;
    Rsh_Fir_reg_dx84_ = Rsh_Fir_reg_dx80_;
    Rsh_Fir_reg_xs17_ = Rsh_Fir_reg_xs15_;
    goto L238_;
  }

L237_:;
  // dr48 = tryDispatchBuiltin.1("[", xs15)
  SEXP Rsh_Fir_array_args241[2];
  Rsh_Fir_array_args241[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args241[1] = Rsh_Fir_reg_xs15_;
  Rsh_Fir_reg_dr48_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args241);
  // dc24 = getTryDispatchBuiltinDispatched(dr48)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dc24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty());
  // if dc24 then L239() else L238(dx79, dx80, dr48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc24_)) {
  // L239()
    goto L239_;
  } else {
  // L238(dx79, dx80, dr48)
    Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_dx79_;
    Rsh_Fir_reg_dx84_ = Rsh_Fir_reg_dx80_;
    Rsh_Fir_reg_xs17_ = Rsh_Fir_reg_dr48_;
    goto L238_;
  }

L238_:;
  // extrap_right4 = ld `extrap.right`
  Rsh_Fir_reg_extrap_right4_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L240() else D60()
  // L240()
  goto L240_;

L239_:;
  // dx87 = getTryDispatchBuiltinValue(dr48)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dx87_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args243, Rsh_Fir_param_types_empty());
  // goto L34(dx79, dx80, dx87)
  // L34(dx79, dx80, dx87)
  Rsh_Fir_reg_dx88_ = Rsh_Fir_reg_dx79_;
  Rsh_Fir_reg_dx89_ = Rsh_Fir_reg_dx80_;
  Rsh_Fir_reg_dx90_ = Rsh_Fir_reg_dx87_;
  goto L34_;

D60_:;
  // deopt 228 [dx83, dx84, xs17, extrap_right4]
  SEXP Rsh_Fir_array_deopt_stack57[4];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_dx83_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_dx84_;
  Rsh_Fir_array_deopt_stack57[2] = Rsh_Fir_reg_xs17_;
  Rsh_Fir_array_deopt_stack57[3] = Rsh_Fir_reg_extrap_right4_;
  Rsh_Fir_deopt(228, 4, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L240_:;
  // extrap_right5 = force? extrap_right4
  Rsh_Fir_reg_extrap_right5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_right4_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r110 = dyn __6(xs17, extrap_right5)
  SEXP Rsh_Fir_array_args244[2];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_xs17_;
  Rsh_Fir_array_args244[1] = Rsh_Fir_reg_extrap_right5_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args244, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L34(dx83, dx84, r110)
  // L34(dx83, dx84, r110)
  Rsh_Fir_reg_dx88_ = Rsh_Fir_reg_dx83_;
  Rsh_Fir_reg_dx89_ = Rsh_Fir_reg_dx84_;
  Rsh_Fir_reg_dx90_ = Rsh_Fir_reg_r110_;
  goto L34_;

L241_:;
  // dr50 = tryDispatchBuiltin.0("[<-", l6, r113)
  SEXP Rsh_Fir_array_args245[3];
  Rsh_Fir_array_args245[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args245[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args245[2] = Rsh_Fir_reg_r113_;
  Rsh_Fir_reg_dr50_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args245);
  // dc25 = getTryDispatchBuiltinDispatched(dr50)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dc25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty());
  // if dc25 then L243() else L242(r113, dr50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc25_)) {
  // L243()
    goto L243_;
  } else {
  // L242(r113, dr50)
    Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r113_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr50_;
    goto L242_;
  }

L242_:;
  // extrap_right6 = ld `extrap.right`
  Rsh_Fir_reg_extrap_right6_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L244() else D61()
  // L244()
  goto L244_;

L243_:;
  // dx91 = getTryDispatchBuiltinValue(dr50)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dx91_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty());
  // goto L35(r113, dx91)
  // L35(r113, dx91)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r113_;
  Rsh_Fir_reg_dx92_ = Rsh_Fir_reg_dx91_;
  goto L35_;

D61_:;
  // deopt 236 [r115, l8, r113, extrap_right6]
  SEXP Rsh_Fir_array_deopt_stack58[4];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack58[2] = Rsh_Fir_reg_r113_;
  Rsh_Fir_array_deopt_stack58[3] = Rsh_Fir_reg_extrap_right6_;
  Rsh_Fir_deopt(236, 4, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L244_:;
  // extrap_right7 = force? extrap_right6
  Rsh_Fir_reg_extrap_right7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_right6_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r118 = dyn ___2(l8, r113, extrap_right7)
  SEXP Rsh_Fir_array_args248[3];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_r113_;
  Rsh_Fir_array_args248[2] = Rsh_Fir_reg_extrap_right7_;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args248, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L35(r115, r118)
  // L35(r115, r118)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_dx92_ = Rsh_Fir_reg_r118_;
  goto L35_;

D62_:;
  // deopt 242 [deriv5]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_deriv5_;
  Rsh_Fir_deopt(242, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L247_:;
  // deriv6 = force? deriv5
  Rsh_Fir_reg_deriv6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv5_);
  // checkMissing(deriv6)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_deriv6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty()));
  // r121 = `==`(deriv6, 1.0)
  SEXP Rsh_Fir_array_args250[2];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_deriv6_;
  Rsh_Fir_array_args250[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty());
  // c33 = `as.logical`(r121)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty());
  // if c33 then L248() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L248()
    goto L248_;
  } else {
  // L38()
    goto L38_;
  }

L248_:;
  // Recall2 = ldf Recall
  Rsh_Fir_reg_Recall2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L249() else D63()
  // L249()
  goto L249_;

D63_:;
  // deopt 247 []
  Rsh_Fir_deopt(247, 0, NULL, CCP, RHO);
  return R_NilValue;

L249_:;
  // p5 = prom<V +>{
  //   object57 = ld object;
  //   object58 = force? object57;
  //   checkMissing(object58);
  //   return object58;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1836514972_5, CCP, RHO);
  // p6 = prom<V +>{
  //   xrange4 = ld xrange;
  //   xrange5 = force? xrange4;
  //   checkMissing(xrange5);
  //   return xrange5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1836514972_6, CCP, RHO);
  // r124 = dyn Recall2(p5, p6, 1.0)
  SEXP Rsh_Fir_array_args254[3];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args254[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args254[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Recall2_, 3, Rsh_Fir_array_args254, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L250() else D64()
  // L250()
  goto L250_;

D64_:;
  // deopt 251 [r124]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r124_;
  Rsh_Fir_deopt(251, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L250_:;
  // c34 = `is.object`(r124)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_r124_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty());
  // if c34 then L252() else L253(r124)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L252()
    goto L252_;
  } else {
  // L253(r124)
    Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r124_;
    goto L253_;
  }

L251_:;
  // object59 = ld object
  Rsh_Fir_reg_object59_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L255() else D65()
  // L255()
  goto L255_;

L252_:;
  // dr52 = tryDispatchBuiltin.1("$", r124)
  SEXP Rsh_Fir_array_args256[2];
  Rsh_Fir_array_args256[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args256[1] = Rsh_Fir_reg_r124_;
  Rsh_Fir_reg_dr52_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args256);
  // dc26 = getTryDispatchBuiltinDispatched(dr52)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dc26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty());
  // if dc26 then L254() else L253(dr52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc26_)) {
  // L254()
    goto L254_;
  } else {
  // L253(dr52)
    Rsh_Fir_reg_r126_ = Rsh_Fir_reg_dr52_;
    goto L253_;
  }

L253_:;
  // r127 = `$`(r126, <sym y>)
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_array_args258[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty());
  // goto L251(r127)
  // L251(r127)
  Rsh_Fir_reg_dx94_ = Rsh_Fir_reg_r127_;
  goto L251_;

L254_:;
  // dx93 = getTryDispatchBuiltinValue(dr52)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dx93_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty());
  // goto L251(dx93)
  // L251(dx93)
  Rsh_Fir_reg_dx94_ = Rsh_Fir_reg_dx93_;
  goto L251_;

D65_:;
  // deopt 252 [dx94, object59]
  SEXP Rsh_Fir_array_deopt_stack61[2];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_dx94_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_object59_;
  Rsh_Fir_deopt(252, 2, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L255_:;
  // object60 = force? object59
  Rsh_Fir_reg_object60_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object59_);
  // checkMissing(object60)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_object60_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(object60)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_object60_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty());
  // if c35 then L257() else L258(dx94, object60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L257()
    goto L257_;
  } else {
  // L258(dx94, object60)
    Rsh_Fir_reg_dx96_ = Rsh_Fir_reg_dx94_;
    Rsh_Fir_reg_object62_ = Rsh_Fir_reg_object60_;
    goto L258_;
  }

L256_:;
  // r129 = `*`(dx99, dx100)
  SEXP Rsh_Fir_array_args262[2];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_dx99_;
  Rsh_Fir_array_args262[1] = Rsh_Fir_reg_dx100_;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args262, Rsh_Fir_param_types_empty());
  // st `end.slopes` = r129
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r129_, RHO);
  (void)(Rsh_Fir_reg_r129_);
  // end_slopes8 = ld `end.slopes`
  Rsh_Fir_reg_end_slopes8_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L260() else D66()
  // L260()
  goto L260_;

L257_:;
  // dr54 = tryDispatchBuiltin.1("$", object60)
  SEXP Rsh_Fir_array_args263[2];
  Rsh_Fir_array_args263[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args263[1] = Rsh_Fir_reg_object60_;
  Rsh_Fir_reg_dr54_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args263);
  // dc27 = getTryDispatchBuiltinDispatched(dr54)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dc27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty());
  // if dc27 then L259() else L258(dx94, dr54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc27_)) {
  // L259()
    goto L259_;
  } else {
  // L258(dx94, dr54)
    Rsh_Fir_reg_dx96_ = Rsh_Fir_reg_dx94_;
    Rsh_Fir_reg_object62_ = Rsh_Fir_reg_dr54_;
    goto L258_;
  }

L258_:;
  // r128 = `$`(object62, <sym range>)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_object62_;
  Rsh_Fir_array_args265[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty());
  // goto L256(dx96, r128)
  // L256(dx96, r128)
  Rsh_Fir_reg_dx99_ = Rsh_Fir_reg_dx96_;
  Rsh_Fir_reg_dx100_ = Rsh_Fir_reg_r128_;
  goto L256_;

L259_:;
  // dx98 = getTryDispatchBuiltinValue(dr54)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dx98_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // goto L256(dx94, dx98)
  // L256(dx94, dx98)
  Rsh_Fir_reg_dx99_ = Rsh_Fir_reg_dx94_;
  Rsh_Fir_reg_dx100_ = Rsh_Fir_reg_dx98_;
  goto L256_;

D66_:;
  // deopt 257 [end_slopes8]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_end_slopes8_;
  Rsh_Fir_deopt(257, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L260_:;
  // end_slopes9 = force? end_slopes8
  Rsh_Fir_reg_end_slopes9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end_slopes8_);
  // checkMissing(end_slopes9)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_end_slopes9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(end_slopes9)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_end_slopes9_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // if c36 then L261() else L262(end_slopes9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L261()
    goto L261_;
  } else {
  // L262(end_slopes9)
    Rsh_Fir_reg_end_slopes11_ = Rsh_Fir_reg_end_slopes9_;
    goto L262_;
  }

L261_:;
  // dr56 = tryDispatchBuiltin.1("[", end_slopes9)
  SEXP Rsh_Fir_array_args269[2];
  Rsh_Fir_array_args269[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args269[1] = Rsh_Fir_reg_end_slopes9_;
  Rsh_Fir_reg_dr56_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args269);
  // dc28 = getTryDispatchBuiltinDispatched(dr56)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dc28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty());
  // if dc28 then L263() else L262(dr56)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc28_)) {
  // L263()
    goto L263_;
  } else {
  // L262(dr56)
    Rsh_Fir_reg_end_slopes11_ = Rsh_Fir_reg_dr56_;
    goto L262_;
  }

L262_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r130 = dyn __7(end_slopes11, 1)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_end_slopes11_;
  Rsh_Fir_array_args271[1] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args271, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L39(r130)
  // L39(r130)
  Rsh_Fir_reg_dx102_ = Rsh_Fir_reg_r130_;
  goto L39_;

L263_:;
  // dx101 = getTryDispatchBuiltinValue(dr56)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dx101_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty());
  // goto L39(dx101)
  // L39(dx101)
  Rsh_Fir_reg_dx102_ = Rsh_Fir_reg_dx101_;
  goto L39_;

L264_:;
  // dr58 = tryDispatchBuiltin.0("[<-", l9, dx102)
  SEXP Rsh_Fir_array_args273[3];
  Rsh_Fir_array_args273[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args273[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args273[2] = Rsh_Fir_reg_dx102_;
  Rsh_Fir_reg_dr58_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args273);
  // dc29 = getTryDispatchBuiltinDispatched(dr58)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dc29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty());
  // if dc29 then L266() else L265(dx102, dr58)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc29_)) {
  // L266()
    goto L266_;
  } else {
  // L265(dx102, dr58)
    Rsh_Fir_reg_dx104_ = Rsh_Fir_reg_dx102_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr58_;
    goto L265_;
  }

L265_:;
  // extrap_left8 = ld `extrap.left`
  Rsh_Fir_reg_extrap_left8_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L267() else D67()
  // L267()
  goto L267_;

L266_:;
  // dx106 = getTryDispatchBuiltinValue(dr58)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dx106_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty());
  // goto L40(dx106)
  // L40(dx106)
  Rsh_Fir_reg_dx108_ = Rsh_Fir_reg_dx106_;
  goto L40_;

D67_:;
  // deopt 263 [dx104, l11, dx102, extrap_left8]
  SEXP Rsh_Fir_array_deopt_stack63[4];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_dx104_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack63[2] = Rsh_Fir_reg_dx102_;
  Rsh_Fir_array_deopt_stack63[3] = Rsh_Fir_reg_extrap_left8_;
  Rsh_Fir_deopt(263, 4, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L267_:;
  // extrap_left9 = force? extrap_left8
  Rsh_Fir_reg_extrap_left9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_left8_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r131 = dyn ___3(l11, dx102, extrap_left9)
  SEXP Rsh_Fir_array_args276[3];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args276[1] = Rsh_Fir_reg_dx102_;
  Rsh_Fir_array_args276[2] = Rsh_Fir_reg_extrap_left9_;
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args276, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L40(r131)
  // L40(r131)
  Rsh_Fir_reg_dx108_ = Rsh_Fir_reg_r131_;
  goto L40_;

D68_:;
  // deopt 267 [end_slopes12]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_end_slopes12_;
  Rsh_Fir_deopt(267, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L268_:;
  // end_slopes13 = force? end_slopes12
  Rsh_Fir_reg_end_slopes13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end_slopes12_);
  // checkMissing(end_slopes13)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_end_slopes13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args277, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(end_slopes13)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_end_slopes13_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty());
  // if c38 then L269() else L270(end_slopes13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L269()
    goto L269_;
  } else {
  // L270(end_slopes13)
    Rsh_Fir_reg_end_slopes15_ = Rsh_Fir_reg_end_slopes13_;
    goto L270_;
  }

L269_:;
  // dr60 = tryDispatchBuiltin.1("[", end_slopes13)
  SEXP Rsh_Fir_array_args279[2];
  Rsh_Fir_array_args279[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args279[1] = Rsh_Fir_reg_end_slopes13_;
  Rsh_Fir_reg_dr60_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args279);
  // dc30 = getTryDispatchBuiltinDispatched(dr60)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_dr60_;
  Rsh_Fir_reg_dc30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty());
  // if dc30 then L271() else L270(dr60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc30_)) {
  // L271()
    goto L271_;
  } else {
  // L270(dr60)
    Rsh_Fir_reg_end_slopes15_ = Rsh_Fir_reg_dr60_;
    goto L270_;
  }

L270_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r132 = dyn __8(end_slopes15, 2)
  SEXP Rsh_Fir_array_args281[2];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_end_slopes15_;
  Rsh_Fir_array_args281[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args281, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L41(r132)
  // L41(r132)
  Rsh_Fir_reg_dx110_ = Rsh_Fir_reg_r132_;
  goto L41_;

L271_:;
  // dx109 = getTryDispatchBuiltinValue(dr60)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_dr60_;
  Rsh_Fir_reg_dx109_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty());
  // goto L41(dx109)
  // L41(dx109)
  Rsh_Fir_reg_dx110_ = Rsh_Fir_reg_dx109_;
  goto L41_;

L272_:;
  // dr62 = tryDispatchBuiltin.0("[<-", l12, dx110)
  SEXP Rsh_Fir_array_args283[3];
  Rsh_Fir_array_args283[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args283[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args283[2] = Rsh_Fir_reg_dx110_;
  Rsh_Fir_reg_dr62_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args283);
  // dc31 = getTryDispatchBuiltinDispatched(dr62)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_dr62_;
  Rsh_Fir_reg_dc31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty());
  // if dc31 then L274() else L273(dx110, dr62)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc31_)) {
  // L274()
    goto L274_;
  } else {
  // L273(dx110, dr62)
    Rsh_Fir_reg_dx112_ = Rsh_Fir_reg_dx110_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr62_;
    goto L273_;
  }

L273_:;
  // extrap_right8 = ld `extrap.right`
  Rsh_Fir_reg_extrap_right8_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L275() else D69()
  // L275()
  goto L275_;

L274_:;
  // dx114 = getTryDispatchBuiltinValue(dr62)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_dr62_;
  Rsh_Fir_reg_dx114_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty());
  // goto L42(dx110, dx114)
  // L42(dx110, dx114)
  Rsh_Fir_reg_dx115_ = Rsh_Fir_reg_dx110_;
  Rsh_Fir_reg_dx116_ = Rsh_Fir_reg_dx114_;
  goto L42_;

D69_:;
  // deopt 273 [dx112, l14, dx110, extrap_right8]
  SEXP Rsh_Fir_array_deopt_stack65[4];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_dx112_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack65[2] = Rsh_Fir_reg_dx110_;
  Rsh_Fir_array_deopt_stack65[3] = Rsh_Fir_reg_extrap_right8_;
  Rsh_Fir_deopt(273, 4, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L275_:;
  // extrap_right9 = force? extrap_right8
  Rsh_Fir_reg_extrap_right9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap_right8_);
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r133 = dyn ___4(l14, dx110, extrap_right9)
  SEXP Rsh_Fir_array_args286[3];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args286[1] = Rsh_Fir_reg_dx110_;
  Rsh_Fir_array_args286[2] = Rsh_Fir_reg_extrap_right9_;
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 3, Rsh_Fir_array_args286, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L42(dx112, r133)
  // L42(dx112, r133)
  Rsh_Fir_reg_dx115_ = Rsh_Fir_reg_dx112_;
  Rsh_Fir_reg_dx116_ = Rsh_Fir_reg_r133_;
  goto L42_;

L277_:;
  // dr64 = tryDispatchBuiltin.0("[<-", l15, 0.0)
  SEXP Rsh_Fir_array_args287[3];
  Rsh_Fir_array_args287[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args287[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args287[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dr64_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args287);
  // dc32 = getTryDispatchBuiltinDispatched(dr64)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_dr64_;
  Rsh_Fir_reg_dc32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args288, Rsh_Fir_param_types_empty());
  // if dc32 then L279() else L278(0.0, dr64)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc32_)) {
  // L279()
    goto L279_;
  } else {
  // L278(0.0, dr64)
    Rsh_Fir_reg_r135_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr64_;
    goto L278_;
  }

L278_:;
  // extrap2 = ld extrap
  Rsh_Fir_reg_extrap2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L280() else D70()
  // L280()
  goto L280_;

L279_:;
  // dx117 = getTryDispatchBuiltinValue(dr64)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_dr64_;
  Rsh_Fir_reg_dx117_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args289, Rsh_Fir_param_types_empty());
  // goto L43(0.0, dx117)
  // L43(0.0, dx117)
  Rsh_Fir_reg_r137_ = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dx118_ = Rsh_Fir_reg_dx117_;
  goto L43_;

D70_:;
  // deopt 280 [r135, l17, 0.0, extrap2]
  SEXP Rsh_Fir_array_deopt_stack66[4];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack66[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_deopt_stack66[3] = Rsh_Fir_reg_extrap2_;
  Rsh_Fir_deopt(280, 4, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L280_:;
  // extrap3 = force? extrap2
  Rsh_Fir_reg_extrap3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrap2_);
  // ___5 = ldf `[<-` in base
  Rsh_Fir_reg____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r138 = dyn ___5(l17, 0.0, extrap3)
  SEXP Rsh_Fir_array_args290[3];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args290[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args290[2] = Rsh_Fir_reg_extrap3_;
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____5_, 3, Rsh_Fir_array_args290, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L43(r135, r138)
  // L43(r135, r138)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r135_;
  Rsh_Fir_reg_dx118_ = Rsh_Fir_reg_r138_;
  goto L43_;

D71_:;
  // deopt 286 [deriv7]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_deriv7_;
  Rsh_Fir_deopt(286, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L282_:;
  // deriv8 = force? deriv7
  Rsh_Fir_reg_deriv8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv7_);
  // checkMissing(deriv8)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_deriv8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty()));
  // r140 = `>`(deriv8, 0.0)
  SEXP Rsh_Fir_array_args292[2];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_deriv8_;
  Rsh_Fir_array_args292[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty());
  // c41 = `as.logical`(r140)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_r140_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty());
  // if c41 then L283() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L283()
    goto L283_;
  } else {
  // L45()
    goto L45_;
  }

L283_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L284() else D72()
  // L284()
  goto L284_;

D72_:;
  // deopt 290 [y]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(290, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L284_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty()));
  // object63 = ld object
  Rsh_Fir_reg_object63_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L285() else D73()
  // L285()
  goto L285_;

D73_:;
  // deopt 291 [y1, object63]
  SEXP Rsh_Fir_array_deopt_stack69[2];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_object63_;
  Rsh_Fir_deopt(291, 2, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L285_:;
  // object64 = force? object63
  Rsh_Fir_reg_object64_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object63_);
  // checkMissing(object64)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_object64_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty()));
  // c42 = `is.object`(object64)
  SEXP Rsh_Fir_array_args296[1];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_object64_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args296, Rsh_Fir_param_types_empty());
  // if c42 then L287() else L288(y1, object64)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L287()
    goto L287_;
  } else {
  // L288(y1, object64)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_y1_;
    Rsh_Fir_reg_object66_ = Rsh_Fir_reg_object64_;
    goto L288_;
  }

L286_:;
  // deriv9 = ld deriv
  Rsh_Fir_reg_deriv9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L290() else D74()
  // L290()
  goto L290_;

L287_:;
  // dr66 = tryDispatchBuiltin.1("$", object64)
  SEXP Rsh_Fir_array_args297[2];
  Rsh_Fir_array_args297[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args297[1] = Rsh_Fir_reg_object64_;
  Rsh_Fir_reg_dr66_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args297);
  // dc33 = getTryDispatchBuiltinDispatched(dr66)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_dr66_;
  Rsh_Fir_reg_dc33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty());
  // if dc33 then L289() else L288(y1, dr66)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc33_)) {
  // L289()
    goto L289_;
  } else {
  // L288(y1, dr66)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_y1_;
    Rsh_Fir_reg_object66_ = Rsh_Fir_reg_dr66_;
    goto L288_;
  }

L288_:;
  // r141 = `$`(object66, <sym range>)
  SEXP Rsh_Fir_array_args299[2];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_object66_;
  Rsh_Fir_array_args299[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty());
  // goto L286(y3, r141)
  // L286(y3, r141)
  Rsh_Fir_reg_y5_ = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_dx120_ = Rsh_Fir_reg_r141_;
  goto L286_;

L289_:;
  // dx119 = getTryDispatchBuiltinValue(dr66)
  SEXP Rsh_Fir_array_args300[1];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_dr66_;
  Rsh_Fir_reg_dx119_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args300, Rsh_Fir_param_types_empty());
  // goto L286(y1, dx119)
  // L286(y1, dx119)
  Rsh_Fir_reg_y5_ = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_dx120_ = Rsh_Fir_reg_dx119_;
  goto L286_;

D74_:;
  // deopt 293 [y5, dx120, deriv9]
  SEXP Rsh_Fir_array_deopt_stack70[3];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_y5_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_dx120_;
  Rsh_Fir_array_deopt_stack70[2] = Rsh_Fir_reg_deriv9_;
  Rsh_Fir_deopt(293, 3, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L290_:;
  // deriv10 = force? deriv9
  Rsh_Fir_reg_deriv10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv9_);
  // checkMissing(deriv10)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_deriv10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty()));
  // r142 = `^`(dx120, deriv10)
  SEXP Rsh_Fir_array_args302[2];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_dx120_;
  Rsh_Fir_array_args302[1] = Rsh_Fir_reg_deriv10_;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args302, Rsh_Fir_param_types_empty());
  // r143 = `/`(y5, r142)
  SEXP Rsh_Fir_array_args303[2];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_y5_;
  Rsh_Fir_array_args303[1] = Rsh_Fir_reg_r142_;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args303, Rsh_Fir_param_types_empty());
  // st y = r143
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r143_, RHO);
  (void)(Rsh_Fir_reg_r143_);
  // goto L46()
  // L46()
  goto L46_;

L292_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L294() else D75()
  // L294()
  goto L294_;

L293_:;
  // r145 = dyn base16[x, y](<sym x>, <sym y>)
  SEXP Rsh_Fir_array_args304[2];
  Rsh_Fir_array_args304[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args304[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names51[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args304, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L47(r145)
  // L47(r145)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r145_;
  goto L47_;

D75_:;
  // deopt 302 [x7]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(302, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L294_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty()));
  // y6 = ld y
  Rsh_Fir_reg_y6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L295() else D76()
  // L295()
  goto L295_;

D76_:;
  // deopt 305 [y6]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_y6_;
  Rsh_Fir_deopt(305, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L295_:;
  // y7 = force? y6
  Rsh_Fir_reg_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y6_);
  // checkMissing(y7)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args306, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r147 = dyn list(x8, y7)
  SEXP Rsh_Fir_array_args307[2];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args307[1] = Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args307, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L296() else D77()
  // L296()
  goto L296_;

D77_:;
  // deopt 309 [r147]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r147_;
  Rsh_Fir_deopt(309, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L296_:;
  // goto L47(r147)
  // L47(r147)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r147_;
  goto L47_;
}
SEXP Rsh_Fir_user_promise_inner1836514972_(SEXP CCP, SEXP RHO) {
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // return n3
  return Rsh_Fir_reg_n3_;
}
SEXP Rsh_Fir_user_promise_inner1836514972_1(SEXP CCP, SEXP RHO) {
  // object49 = ld object
  Rsh_Fir_reg_object49_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object50 = force? object49
  Rsh_Fir_reg_object50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object49_);
  // checkMissing(object50)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_object50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // return object50
  return Rsh_Fir_reg_object50_;
}
SEXP Rsh_Fir_user_promise_inner1836514972_2(SEXP CCP, SEXP RHO) {
  // xrange = ld xrange
  Rsh_Fir_reg_xrange = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // xrange1 = force? xrange
  Rsh_Fir_reg_xrange1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xrange);
  // checkMissing(xrange1)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_xrange1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // return xrange1
  return Rsh_Fir_reg_xrange1_;
}
SEXP Rsh_Fir_user_promise_inner1836514972_3(SEXP CCP, SEXP RHO) {
  // object51 = ld object
  Rsh_Fir_reg_object51_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object52 = force? object51
  Rsh_Fir_reg_object52_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object51_);
  // checkMissing(object52)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_object52_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // return object52
  return Rsh_Fir_reg_object52_;
}
SEXP Rsh_Fir_user_promise_inner1836514972_4(SEXP CCP, SEXP RHO) {
  // xrange2 = ld xrange
  Rsh_Fir_reg_xrange2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // xrange3 = force? xrange2
  Rsh_Fir_reg_xrange3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xrange2_);
  // checkMissing(xrange3)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_xrange3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty()));
  // return xrange3
  return Rsh_Fir_reg_xrange3_;
}
SEXP Rsh_Fir_user_promise_inner1836514972_5(SEXP CCP, SEXP RHO) {
  // object57 = ld object
  Rsh_Fir_reg_object57_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object58 = force? object57
  Rsh_Fir_reg_object58_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object57_);
  // checkMissing(object58)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_object58_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty()));
  // return object58
  return Rsh_Fir_reg_object58_;
}
SEXP Rsh_Fir_user_promise_inner1836514972_6(SEXP CCP, SEXP RHO) {
  // xrange4 = ld xrange
  Rsh_Fir_reg_xrange4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // xrange5 = force? xrange4
  Rsh_Fir_reg_xrange5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xrange4_);
  // checkMissing(xrange5)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_xrange5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty()));
  // return xrange5
  return Rsh_Fir_reg_xrange5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
