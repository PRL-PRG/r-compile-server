#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3269654001_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3269654001_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3269654001_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3269654001_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
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
  // r = clos inner3269654001
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3269654001_, RHO, CCP);
  // st `upgrade.packageStatus` = r
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
SEXP Rsh_Fir_user_function_inner3269654001_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3269654001 dynamic dispatch ([object, ask, `...`])

  return Rsh_Fir_user_version_inner3269654001_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3269654001_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3269654001 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3269654001/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_ask;  // ask
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_ask_isMissing;  // ask_isMissing
  SEXP Rsh_Fir_reg_ask_orDefault;  // ask_orDefault
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_old;  // old
  SEXP Rsh_Fir_reg_old1_;  // old1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_ask1_;  // ask1
  SEXP Rsh_Fir_reg_ask2_;  // ask2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_old2_;  // old2
  SEXP Rsh_Fir_reg_old3_;  // old3
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_pkg1_;  // pkg1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_tmpstring;  // tmpstring
  SEXP Rsh_Fir_reg_tmpstring1_;  // tmpstring1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_haveasked;  // haveasked
  SEXP Rsh_Fir_reg_haveasked1_;  // haveasked1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_haveasked2_;  // haveasked2
  SEXP Rsh_Fir_reg_haveasked3_;  // haveasked3
  SEXP Rsh_Fir_reg_tmpstring2_;  // tmpstring2
  SEXP Rsh_Fir_reg_tmpstring3_;  // tmpstring3
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_cat1_;  // cat1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_cat2_;  // cat2
  SEXP Rsh_Fir_reg_pkg2_;  // pkg2
  SEXP Rsh_Fir_reg_pkg3_;  // pkg3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_askprint;  // askprint
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_k8_;  // k8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_askprint1_;  // askprint1
  SEXP Rsh_Fir_reg_object17_;  // object17
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_pkg4_;  // pkg4
  SEXP Rsh_Fir_reg_pkg5_;  // pkg5
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_pkg8_;  // pkg8
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_askYesNo;  // askYesNo
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_answer;  // answer
  SEXP Rsh_Fir_reg_answer1_;  // answer1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_cat3_;  // cat3
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_invisible1_;  // invisible1
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_isTRUE;  // isTRUE
  SEXP Rsh_Fir_reg_answer2_;  // answer2
  SEXP Rsh_Fir_reg_answer3_;  // answer3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_rbind;  // rbind
  SEXP Rsh_Fir_reg_update;  // update
  SEXP Rsh_Fir_reg_update1_;  // update1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_pkg9_;  // pkg9
  SEXP Rsh_Fir_reg_pkg10_;  // pkg10
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_object21_;  // object21
  SEXP Rsh_Fir_reg_object22_;  // object22
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_object24_;  // object24
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_k9_;  // k9
  SEXP Rsh_Fir_reg_k10_;  // k10
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_as_character1_;  // as_character1
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_object25_;  // object25
  SEXP Rsh_Fir_reg_object26_;  // object26
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_object28_;  // object28
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_pkg11_;  // pkg11
  SEXP Rsh_Fir_reg_pkg12_;  // pkg12
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_as_character2_;  // as_character2
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_object29_;  // object29
  SEXP Rsh_Fir_reg_object30_;  // object30
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_object32_;  // object32
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx52_;  // dx52
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_cbind;  // cbind
  SEXP Rsh_Fir_reg_pkgs;  // pkgs
  SEXP Rsh_Fir_reg_pkgs1_;  // pkgs1
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_object33_;  // object33
  SEXP Rsh_Fir_reg_object34_;  // object34
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_object36_;  // object36
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx54_;  // dx54
  SEXP Rsh_Fir_reg_dx55_;  // dx55
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx58_;  // dx58
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_as_character3_;  // as_character3
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_object37_;  // object37
  SEXP Rsh_Fir_reg_object38_;  // object38
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_object40_;  // object40
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx60_;  // dx60
  SEXP Rsh_Fir_reg_dx61_;  // dx61
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_dx63_;  // dx63
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_pkgs2_;  // pkgs2
  SEXP Rsh_Fir_reg_pkgs3_;  // pkgs3
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_as_character4_;  // as_character4
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_update2_;  // update2
  SEXP Rsh_Fir_reg_update3_;  // update3
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_update5_;  // update5
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx66_;  // dx66
  SEXP Rsh_Fir_reg_dx67_;  // dx67
  SEXP Rsh_Fir_reg_old4_;  // old4
  SEXP Rsh_Fir_reg_old5_;  // old5
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_update6_;  // update6
  SEXP Rsh_Fir_reg_update7_;  // update7
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_update8_;  // update8
  SEXP Rsh_Fir_reg_update9_;  // update9
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx68_;  // dx68
  SEXP Rsh_Fir_reg_dx69_;  // dx69
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_update12_;  // update12
  SEXP Rsh_Fir_reg_update13_;  // update13
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx70_;  // dx70
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_repo;  // repo
  SEXP Rsh_Fir_reg_repo1_;  // repo1
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_install_packages;  // install_packages
  SEXP Rsh_Fir_reg_update16_;  // update16
  SEXP Rsh_Fir_reg_update17_;  // update17
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_update19_;  // update19
  SEXP Rsh_Fir_reg_dr46_;  // dr46
  SEXP Rsh_Fir_reg_dc23_;  // dc23
  SEXP Rsh_Fir_reg_dx72_;  // dx72
  SEXP Rsh_Fir_reg_dx73_;  // dx73
  SEXP Rsh_Fir_reg_ok;  // ok
  SEXP Rsh_Fir_reg_ok1_;  // ok1
  SEXP Rsh_Fir_reg___12_;  // __12
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_update20_;  // update20
  SEXP Rsh_Fir_reg_update21_;  // update21
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_update23_;  // update23
  SEXP Rsh_Fir_reg_dr48_;  // dr48
  SEXP Rsh_Fir_reg_dc24_;  // dc24
  SEXP Rsh_Fir_reg_dx74_;  // dx74
  SEXP Rsh_Fir_reg_dx75_;  // dx75
  SEXP Rsh_Fir_reg_ok2_;  // ok2
  SEXP Rsh_Fir_reg_ok3_;  // ok3
  SEXP Rsh_Fir_reg___13_;  // __13
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_repo2_;  // repo2
  SEXP Rsh_Fir_reg_repo3_;  // repo3
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r110_;  // r110

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_ask = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // ask_isMissing = missing.0(ask)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_ask;
  Rsh_Fir_reg_ask_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if ask_isMissing then L0(TRUE) else L0(ask)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ask_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_ask_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(ask)
    Rsh_Fir_reg_ask_orDefault = Rsh_Fir_reg_ask;
    goto L0_;
  }

L0_:;
  // st ask = ask_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ask_orDefault, RHO);
  (void)(Rsh_Fir_reg_ask_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st update = NULL
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_const(CCP, 5), RHO);
  (void)(Rsh_const(CCP, 5));
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L26() else D0()
  // L26()
  goto L26_;

L1_:;
  // r8 = `==`(r6, 0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c2 then L32() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L32()
    goto L32_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // r15 = clos inner2501545716
  Rsh_Fir_reg_r15_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st askprint = r15
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;

L5_:;
  // object29 = ld object
  Rsh_Fir_reg_object29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L96() else D39()
  // L96()
  goto L96_;

L6_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c4 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c4 then L45() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L45()
    goto L45_;
  } else {
  // L17()
    goto L17_;
  }

L7_:;
  // st pkg = dx11
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L55() else D13()
  // L55()
  goto L55_;

L8_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard3 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L10_:;
  // st haveasked = r32
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // cat1 = ldf cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L67() else D20()
  // L67()
  goto L67_;

L11_:;
  // c17 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c17 then L81() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L81()
    goto L81_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L89() else D35()
  // L89()
  goto L89_;

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r57
  return Rsh_Fir_reg_r57_;

L15_:;
  // goto L16(i22)
  // L16(i22)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i22_;
  goto L16_;

L16_:;
  // goto L6(i32)
  // L6(i32)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i32_;
  goto L6_;

L17_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st k = x
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L46() else D11()
  // L46()
  goto L46_;

L18_:;
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard13 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L19_:;
  // st pkgs = dx53
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx53_, RHO);
  (void)(Rsh_Fir_reg_dx53_);
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L104() else D40()
  // L104()
  goto L104_;

L20_:;
  // st update = dx67
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx67_, RHO);
  (void)(Rsh_Fir_reg_dx67_);
  // goto L18()
  // L18()
  goto L18_;

L21_:;
  // c31 = `as.logical`(r98)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c31 then L115() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L115()
    goto L115_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

L23_:;
  // i36 = `+`.1(i35, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_i36_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // c33 = `<`.1(l1, i36)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if c33 then L118() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L118()
    goto L118_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // repo = ld repo
  Rsh_Fir_reg_repo = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L123() else D49()
  // L123()
  goto L123_;

L25_:;
  // x1 = `[[`(s1, i36, NULL, TRUE)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // st repo = x1
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // update12 = ld update
  Rsh_Fir_reg_update12_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L119() else D48()
  // L119()
  goto L119_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   c = `is.object`(object2);
  //   if c then L1() else L2(object2);
  // L0(dx1):
  //   c1 = `is.object`(dx1);
  //   if c1 then L5() else L6(dx1);
  // L1():
  //   dr = tryDispatchBuiltin.1("$", object2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(object4):
  //   r = `$`(object4, <sym inst>);
  //   goto L0(r);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L4(dx5):
  //   r2 = `==`(dx5, "upgrade");
  //   return r2;
  // L5():
  //   dr2 = tryDispatchBuiltin.1("$", dx1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L7() else L6(dr2);
  // L6(dx3):
  //   r1 = `$`(dx3, <sym Status>);
  //   goto L4(r1);
  // L7():
  //   dx4 = getTryDispatchBuiltinValue(dr2);
  //   goto L4(dx4);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_, CCP, RHO);
  // r4 = dyn which(p)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L27() else D1()
  // L27()
  goto L27_;

D1_:;
  // deopt 6 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L27_:;
  // st old = r4
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // old = ld old
  Rsh_Fir_reg_old = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L30() else D2()
  // L30()
  goto L30_;

L29_:;
  // r5 = dyn base(<sym old>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L1_;

D2_:;
  // deopt 10 [old]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_old;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L30_:;
  // old1 = force? old
  Rsh_Fir_reg_old1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old);
  // checkMissing(old1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_old1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r7 = dyn length(old1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_old1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L31() else D3()
  // L31()
  goto L31_;

D3_:;
  // deopt 13 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L1_;

L32_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L33() else D4()
  // L33()
  goto L33_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r9 = dyn cat("Nothing to do!\n")
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

D5_:;
  // deopt 19 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L34_:;
  // sym1 = ldf invisible
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base1 = ldf invisible in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r12 = dyn invisible()
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L37() else D6()
  // L37()
  goto L37_;

L36_:;
  // r10 = dyn base1()
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L3_;

D6_:;
  // deopt 23 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L3_;

D7_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // r16 = dyn character()
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

D8_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L41_:;
  // st haveasked = r16
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // ask1 = ld ask
  Rsh_Fir_reg_ask1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

D9_:;
  // deopt 34 [ask1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_ask1_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L42_:;
  // ask2 = force? ask1
  Rsh_Fir_reg_ask2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ask1_);
  // checkMissing(ask2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_ask2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(ask2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_ask2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c3 then L43() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L5()
    goto L5_;
  }

L43_:;
  // old2 = ld old
  Rsh_Fir_reg_old2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

D10_:;
  // deopt 36 [old2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_old2_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // old3 = force? old2
  Rsh_Fir_reg_old3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old2_);
  // checkMissing(old3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_old3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // s = toForSeq(old3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_old3_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 8);
  // goto L6(i)
  // L6(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L6_;

L45_:;
  // goto L18()
  // L18()
  goto L18_;

D11_:;
  // deopt 38 [i2, object5]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(object6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c5 then L48() else L49(i2, object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L48()
    goto L48_;
  } else {
  // L49(i2, object6)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L49_;
  }

L47_:;
  // c6 = `is.object`(dx7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c6 then L51() else L52(i8, dx7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L51()
    goto L51_;
  } else {
  // L52(i8, dx7)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    goto L52_;
  }

L48_:;
  // dr4 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc2 then L50() else L49(i2, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L50()
    goto L50_;
  } else {
  // L49(i2, dr4)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr4_;
    goto L49_;
  }

L49_:;
  // r17 = `$`(object8, <sym inst>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L47(i6, r17)
  // L47(i6, r17)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r17_;
  goto L47_;

L50_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L47(i2, dx6)
  // L47(i2, dx6)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L47_;

L51_:;
  // dr6 = tryDispatchBuiltin.1("[", dx7)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args44);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc3 then L53() else L52(i8, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L53()
    goto L53_;
  } else {
  // L52(i8, dr6)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dr6_;
    goto L52_;
  }

L52_:;
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L54() else D12()
  // L54()
  goto L54_;

L53_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L7(i8, dx10)
  // L7(i8, dx10)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L7_;

D12_:;
  // deopt 41 [i10, dx9, k]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L54_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r18 = dyn __(dx9, k1, "Package")
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_args47[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L7(i10, r18)
  // L7(i10, r18)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r18_;
  goto L7_;

D13_:;
  // deopt 47 [i12]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L55_:;
  // p1 = prom<V +>{
  //   pkg = ld pkg;
  //   pkg1 = force? pkg;
  //   checkMissing(pkg1);
  //   return pkg1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym2 = ldf `as.character`;
  //   base2 = ldf `as.character` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r21):
  //   return r21;
  // L2():
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   c7 = `is.object`(object10);
  //   if c7 then L5() else L6(object10);
  // L3():
  //   r20 = dyn base2(<lang `[`(`$`(object, inst), k, "LibPath")>);
  //   goto L0(r20);
  // L4(dx13):
  //   c8 = `is.object`(dx13);
  //   if c8 then L8() else L9(dx13);
  // L5():
  //   dr8 = tryDispatchBuiltin.1("$", object10);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L7() else L6(dr8);
  // L6(object12):
  //   r22 = `$`(object12, <sym inst>);
  //   goto L4(r22);
  // L1(dx17):
  //   as_character = ldf `as.character` in base;
  //   r24 = dyn as_character(dx17);
  //   goto L0(r24);
  // L7():
  //   dx12 = getTryDispatchBuiltinValue(dr8);
  //   goto L4(dx12);
  // L8():
  //   dr10 = tryDispatchBuiltin.1("[", dx13);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L10() else L9(dr10);
  // L9(dx15):
  //   k2 = ld k;
  //   k3 = force? k2;
  //   __1 = ldf `[` in base;
  //   r23 = dyn __1(dx15, k3, "LibPath");
  //   goto L1(r23);
  // L10():
  //   dx16 = getTryDispatchBuiltinValue(dr10);
  //   goto L1(dx16);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_2, CCP, RHO);
  // r26 = dyn paste(p1, p2)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L56() else D14()
  // L56()
  goto L56_;

D14_:;
  // deopt 50 [i12, r26]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L56_:;
  // st tmpstring = r26
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L57() else D15()
  // L57()
  goto L57_;

D15_:;
  // deopt 53 [i12]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L57_:;
  // p3 = prom<V +>{
  //   tmpstring = ld tmpstring;
  //   tmpstring1 = force? tmpstring;
  //   checkMissing(tmpstring1);
  //   return tmpstring1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_3, CCP, RHO);
  // p4 = prom<V +>{
  //   haveasked = ld haveasked;
  //   haveasked1 = force? haveasked;
  //   checkMissing(haveasked1);
  //   return haveasked1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_4, CCP, RHO);
  // r29 = dyn _in_(p3, p4)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

D16_:;
  // deopt 56 [i12, r29]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L58_:;
  // c9 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c9 then L59() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L59()
    goto L59_;
  } else {
  // L8()
    goto L8_;
  }

L59_:;
  // goto L6(i12)
  // L6(i12)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i12_;
  goto L6_;

L62_:;
  // haveasked2 = ld haveasked
  Rsh_Fir_reg_haveasked2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

L63_:;
  // r31 = dyn base3(<sym haveasked>, <sym tmpstring>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(i12, r31)
  // L10(i12, r31)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L10_;

D17_:;
  // deopt 63 [i12, haveasked2]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_haveasked2_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L64_:;
  // haveasked3 = force? haveasked2
  Rsh_Fir_reg_haveasked3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_haveasked2_);
  // checkMissing(haveasked3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_haveasked3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // tmpstring2 = ld tmpstring
  Rsh_Fir_reg_tmpstring2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L65() else D18()
  // L65()
  goto L65_;

D18_:;
  // deopt 65 [i12, tmpstring2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_tmpstring2_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L65_:;
  // tmpstring3 = force? tmpstring2
  Rsh_Fir_reg_tmpstring3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmpstring2_);
  // checkMissing(tmpstring3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_tmpstring3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r33 = dyn c10(haveasked3, tmpstring3)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_haveasked3_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_tmpstring3_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L66() else D19()
  // L66()
  goto L66_;

D19_:;
  // deopt 68 [i12, r33]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L10(i12, r33)
  // L10(i12, r33)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L10_;

D20_:;
  // deopt 71 [i19]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L67_:;
  // r34 = dyn cat1("\n")
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L68() else D21()
  // L68()
  goto L68_;

D21_:;
  // deopt 73 [i19, r34]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L68_:;
  // cat2 = ldf cat
  Rsh_Fir_reg_cat2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L69() else D22()
  // L69()
  goto L69_;

D22_:;
  // deopt 75 [i19]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L69_:;
  // p5 = prom<V +>{
  //   pkg2 = ld pkg;
  //   pkg3 = force? pkg2;
  //   checkMissing(pkg3);
  //   return pkg3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_5, CCP, RHO);
  // r36 = dyn cat2(p5, ":\n")
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat2_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L70() else D23()
  // L70()
  goto L70_;

D23_:;
  // deopt 78 [i19, r36]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L70_:;
  // askprint = ldf askprint
  Rsh_Fir_reg_askprint = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L71() else D24()
  // L71()
  goto L71_;

D24_:;
  // deopt 80 [i19]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L71_:;
  // p6 = prom<V +>{
  //   object13 = ld object;
  //   object14 = force? object13;
  //   checkMissing(object14);
  //   c11 = `is.object`(object14);
  //   if c11 then L3() else L4(object14);
  // L2(dx19):
  //   c12 = `is.object`(dx19);
  //   if c12 then L6() else L7(dx19);
  // L3():
  //   dr12 = tryDispatchBuiltin.1("$", object14);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L5() else L4(dr12);
  // L4(object16):
  //   r37 = `$`(object16, <sym inst>);
  //   goto L2(r37);
  // L0(dx23):
  //   return dx23;
  // L5():
  //   dx18 = getTryDispatchBuiltinValue(dr12);
  //   goto L2(dx18);
  // L6():
  //   dr14 = tryDispatchBuiltin.1("[", dx19);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L8() else L7(dr14);
  // L7(dx21):
  //   k4 = ld k;
  //   k5 = force? k4;
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L9() else L10();
  // L1(dx26, k8, r39):
  //   __2 = ldf `[` in base;
  //   r41 = dyn __2(dx26, k8, r39);
  //   goto L0(r41);
  // L8():
  //   dx22 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx22);
  // L9():
  //   c13 = ldf c in base;
  //   r40 = dyn c13("Version", "LibPath");
  //   goto L1(dx21, k5, r40);
  // L10():
  //   r38 = dyn base4("Version", "LibPath");
  //   goto L1(dx21, k5, r38);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_6, CCP, RHO);
  // r43 = dyn askprint(p6)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_askprint, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L72() else D25()
  // L72()
  goto L72_;

D25_:;
  // deopt 82 [i19, r43]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L72_:;
  // askprint1 = ldf askprint
  Rsh_Fir_reg_askprint1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L73() else D26()
  // L73()
  goto L73_;

D26_:;
  // deopt 84 [i19]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L73_:;
  // p7 = prom<V +>{
  //   object17 = ld object;
  //   object18 = force? object17;
  //   checkMissing(object18);
  //   c14 = `is.object`(object18);
  //   if c14 then L3() else L4(object18);
  // L2(dx28):
  //   c15 = `is.object`(dx28);
  //   if c15 then L6() else L7(dx28);
  // L3():
  //   dr16 = tryDispatchBuiltin.1("$", object18);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L5() else L4(dr16);
  // L4(object20):
  //   r44 = `$`(object20, <sym avail>);
  //   goto L2(r44);
  // L0(dx32):
  //   return dx32;
  // L5():
  //   dx27 = getTryDispatchBuiltinValue(dr16);
  //   goto L2(dx27);
  // L6():
  //   dr18 = tryDispatchBuiltin.1("[", dx28);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L8() else L7(dr18);
  // L7(dx30):
  //   pkg4 = ld pkg;
  //   pkg5 = force? pkg4;
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L9() else L10();
  // L1(dx35, pkg8, r46):
  //   __3 = ldf `[` in base;
  //   r48 = dyn __3(dx35, pkg8, r46);
  //   goto L0(r48);
  // L8():
  //   dx31 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx31);
  // L9():
  //   c16 = ldf c in base;
  //   r47 = dyn c16("Version", "Repository");
  //   goto L1(dx30, pkg5, r47);
  // L10():
  //   r45 = dyn base5("Version", "Repository");
  //   goto L1(dx30, pkg5, r45);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_7, CCP, RHO);
  // r50 = dyn askprint1(p7)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_askprint1_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L74() else D27()
  // L74()
  goto L74_;

D27_:;
  // deopt 86 [i19, r50]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(86, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L74_:;
  // askYesNo = ldf askYesNo
  Rsh_Fir_reg_askYesNo = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L75() else D28()
  // L75()
  goto L75_;

D28_:;
  // deopt 88 [i19]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L75_:;
  // r51 = dyn askYesNo("Update?")
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_askYesNo, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L76() else D29()
  // L76()
  goto L76_;

D29_:;
  // deopt 90 [i19, r51]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L76_:;
  // st answer = r51
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // sym6 = ldf `is.na`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base6 = ldf `is.na` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard6 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L77_:;
  // answer = ld answer
  Rsh_Fir_reg_answer = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L79() else D30()
  // L79()
  goto L79_;

L78_:;
  // r52 = dyn base6(<sym answer>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L11(i19, r52)
  // L11(i19, r52)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L11_;

D30_:;
  // deopt 94 [i19, answer]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_answer;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L79_:;
  // answer1 = force? answer
  Rsh_Fir_reg_answer1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_answer);
  // checkMissing(answer1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_answer1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r54 = dyn is_na(answer1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_answer1_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L80() else D31()
  // L80()
  goto L80_;

D31_:;
  // deopt 97 [i19, r54]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L11(i19, r54)
  // L11(i19, r54)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L11_;

L81_:;
  // cat3 = ldf cat
  Rsh_Fir_reg_cat3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L82() else D32()
  // L82()
  goto L82_;

D32_:;
  // deopt 99 [i22]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L82_:;
  // r55 = dyn cat3("cancelled by user\n")
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat3_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L83() else D33()
  // L83()
  goto L83_;

D33_:;
  // deopt 101 [i22, r55]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L83_:;
  // sym7 = ldf invisible
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base7 = ldf invisible in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard7 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // invisible1 = ldf invisible in base
  Rsh_Fir_reg_invisible1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r58 = dyn invisible1()
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible1_, 0, NULL, NULL, CCP, RHO);
  // check L86() else D34()
  // L86()
  goto L86_;

L85_:;
  // r56 = dyn base7()
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 0, NULL, NULL, CCP, RHO);
  // goto L13(r56)
  // L13(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L13_;

D34_:;
  // deopt 105 [i22, r58]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L13(r58)
  // L13(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L13_;

D35_:;
  // deopt 110 [i22]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L89_:;
  // p8 = prom<V +>{
  //   answer2 = ld answer;
  //   answer3 = force? answer2;
  //   checkMissing(answer3);
  //   return answer3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_8, CCP, RHO);
  // r62 = dyn isTRUE(p8)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L90() else D36()
  // L90()
  goto L90_;

D36_:;
  // deopt 112 [i22, r62]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L90_:;
  // c18 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c18 then L91() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L91()
    goto L91_;
  } else {
  // L15()
    goto L15_;
  }

L91_:;
  // rbind = ldf rbind
  Rsh_Fir_reg_rbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L92() else D37()
  // L92()
  goto L92_;

D37_:;
  // deopt 114 [i22]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L92_:;
  // p9 = prom<V +>{
  //   update = ld update;
  //   update1 = force? update;
  //   checkMissing(update1);
  //   return update1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_9, CCP, RHO);
  // p10 = prom<V +>{
  //   sym8 = ldf c;
  //   base8 = ldf c in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L5() else L6();
  // L0(r65):
  //   return r65;
  // L5():
  //   pkg9 = ld pkg;
  //   pkg10 = force? pkg9;
  //   checkMissing(pkg10);
  //   sym9 = ldf `as.character`;
  //   base9 = ldf `as.character` in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L7() else L8();
  // L6():
  //   r64 = dyn base8(<sym pkg>, <lang as.character(`[`(`$`(object, inst), k, "LibPath"))>, <lang as.character(`[`(`$`(object, avail), pkg, "Repository"))>);
  //   goto L0(r64);
  // L1(r67):
  //   sym10 = ldf `as.character`;
  //   base10 = ldf `as.character` in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L16() else L17();
  // L7():
  //   object21 = ld object;
  //   object22 = force? object21;
  //   checkMissing(object22);
  //   c19 = `is.object`(object22);
  //   if c19 then L10() else L11(object22);
  // L8():
  //   r66 = dyn base9(<lang `[`(`$`(object, inst), k, "LibPath")>);
  //   goto L1(r66);
  // L3(r72):
  //   c23 = ldf c in base;
  //   r76 = dyn c23(pkg10, r67, r72);
  //   goto L0(r76);
  // L9(dx37):
  //   c20 = `is.object`(dx37);
  //   if c20 then L13() else L14(dx37);
  // L10():
  //   dr20 = tryDispatchBuiltin.1("$", object22);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L12() else L11(dr20);
  // L11(object24):
  //   r68 = `$`(object24, <sym inst>);
  //   goto L9(r68);
  // L16():
  //   object25 = ld object;
  //   object26 = force? object25;
  //   checkMissing(object26);
  //   c21 = `is.object`(object26);
  //   if c21 then L19() else L20(object26);
  // L17():
  //   r71 = dyn base10(<lang `[`(`$`(object, avail), pkg, "Repository")>);
  //   goto L3(r71);
  // L2(dx41):
  //   as_character1 = ldf `as.character` in base;
  //   r70 = dyn as_character1(dx41);
  //   goto L1(r70);
  // L12():
  //   dx36 = getTryDispatchBuiltinValue(dr20);
  //   goto L9(dx36);
  // L13():
  //   dr22 = tryDispatchBuiltin.1("[", dx37);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L15() else L14(dr22);
  // L14(dx39):
  //   k9 = ld k;
  //   k10 = force? k9;
  //   __4 = ldf `[` in base;
  //   r69 = dyn __4(dx39, k10, "LibPath");
  //   goto L2(r69);
  // L18(dx43):
  //   c22 = `is.object`(dx43);
  //   if c22 then L22() else L23(dx43);
  // L19():
  //   dr24 = tryDispatchBuiltin.1("$", object26);
  //   dc12 = getTryDispatchBuiltinDispatched(dr24);
  //   if dc12 then L21() else L20(dr24);
  // L20(object28):
  //   r73 = `$`(object28, <sym avail>);
  //   goto L18(r73);
  // L4(dx47):
  //   as_character2 = ldf `as.character` in base;
  //   r75 = dyn as_character2(dx47);
  //   goto L3(r75);
  // L15():
  //   dx40 = getTryDispatchBuiltinValue(dr22);
  //   goto L2(dx40);
  // L21():
  //   dx42 = getTryDispatchBuiltinValue(dr24);
  //   goto L18(dx42);
  // L22():
  //   dr26 = tryDispatchBuiltin.1("[", dx43);
  //   dc13 = getTryDispatchBuiltinDispatched(dr26);
  //   if dc13 then L24() else L23(dr26);
  // L23(dx45):
  //   pkg11 = ld pkg;
  //   pkg12 = force? pkg11;
  //   __5 = ldf `[` in base;
  //   r74 = dyn __5(dx45, pkg12, "Repository");
  //   goto L4(r74);
  // L24():
  //   dx46 = getTryDispatchBuiltinValue(dr26);
  //   goto L4(dx46);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_10, CCP, RHO);
  // r78 = dyn rbind(p9, p10)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rbind, 2, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L93() else D38()
  // L93()
  goto L93_;

D38_:;
  // deopt 117 [i22, r78]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L93_:;
  // st update = r78
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // goto L16(i22)
  // L16(i22)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i22_;
  goto L16_;

D39_:;
  // deopt 124 [object29]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_object29_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L96_:;
  // object30 = force? object29
  Rsh_Fir_reg_object30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object29_);
  // checkMissing(object30)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_object30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(object30)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_object30_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // if c24 then L98() else L99(object30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L98()
    goto L98_;
  } else {
  // L99(object30)
    Rsh_Fir_reg_object32_ = Rsh_Fir_reg_object30_;
    goto L99_;
  }

L97_:;
  // c25 = `is.object`(dx49)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dx49_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if c25 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L98_:;
  // dr28 = tryDispatchBuiltin.1("$", object30)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_object30_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args152);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc14 then L100() else L99(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L100()
    goto L100_;
  } else {
  // L99(dr28)
    Rsh_Fir_reg_object32_ = Rsh_Fir_reg_dr28_;
    goto L99_;
  }

L99_:;
  // r80 = `$`(object32, <sym inst>)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_object32_;
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L97(r80)
  // L97(r80)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r80_;
  goto L97_;

L100_:;
  // dx48 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // goto L97(dx48)
  // L97(dx48)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx48_;
  goto L97_;

L101_:;
  // dr30 = tryDispatchBuiltin.1("[", dx49)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_dx49_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args156);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // if dc15 then L103() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L103()
    goto L103_;
  } else {
  // L102()
    goto L102_;
  }

L102_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r81 = dyn __6(dx49, <missing>, "Package")
  SEXP Rsh_Fir_array_args158[3];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dx49_;
  Rsh_Fir_array_args158[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args158[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 3, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L19(r81)
  // L19(r81)
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_r81_;
  goto L19_;

L103_:;
  // dx52 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // goto L19(dx52)
  // L19(dx52)
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx52_;
  goto L19_;

D40_:;
  // deopt 133 []
  Rsh_Fir_deopt(133, 0, NULL, CCP, RHO);
  return R_NilValue;

L104_:;
  // p11 = prom<V +>{
  //   pkgs = ld pkgs;
  //   pkgs1 = force? pkgs;
  //   checkMissing(pkgs1);
  //   return pkgs1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_11, CCP, RHO);
  // p12 = prom<V +>{
  //   sym11 = ldf `as.character`;
  //   base11 = ldf `as.character` in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L2() else L3();
  // L0(r84):
  //   return r84;
  // L2():
  //   object33 = ld object;
  //   object34 = force? object33;
  //   checkMissing(object34);
  //   c26 = `is.object`(object34);
  //   if c26 then L5() else L6(object34);
  // L3():
  //   r83 = dyn base11(<lang `[`(`$`(object, inst), , "LibPath")>);
  //   goto L0(r83);
  // L4(dx55):
  //   c27 = `is.object`(dx55);
  //   if c27 then L8() else L9();
  // L5():
  //   dr32 = tryDispatchBuiltin.1("$", object34);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L7() else L6(dr32);
  // L6(object36):
  //   r85 = `$`(object36, <sym inst>);
  //   goto L4(r85);
  // L1(dx59):
  //   as_character3 = ldf `as.character` in base;
  //   r87 = dyn as_character3(dx59);
  //   goto L0(r87);
  // L7():
  //   dx54 = getTryDispatchBuiltinValue(dr32);
  //   goto L4(dx54);
  // L8():
  //   dr34 = tryDispatchBuiltin.1("[", dx55);
  //   dc17 = getTryDispatchBuiltinDispatched(dr34);
  //   if dc17 then L10() else L9();
  // L9():
  //   __7 = ldf `[` in base;
  //   r86 = dyn __7(dx55, <missing>, "LibPath");
  //   goto L1(r86);
  // L10():
  //   dx58 = getTryDispatchBuiltinValue(dr34);
  //   goto L1(dx58);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_12, CCP, RHO);
  // p13 = prom<V +>{
  //   sym12 = ldf `as.character`;
  //   base12 = ldf `as.character` in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L2() else L3();
  // L0(r90):
  //   return r90;
  // L2():
  //   object37 = ld object;
  //   object38 = force? object37;
  //   checkMissing(object38);
  //   c28 = `is.object`(object38);
  //   if c28 then L5() else L6(object38);
  // L3():
  //   r89 = dyn base12(<lang `[`(`$`(object, avail), pkgs, "Repository")>);
  //   goto L0(r89);
  // L4(dx61):
  //   c29 = `is.object`(dx61);
  //   if c29 then L8() else L9(dx61);
  // L5():
  //   dr36 = tryDispatchBuiltin.1("$", object38);
  //   dc18 = getTryDispatchBuiltinDispatched(dr36);
  //   if dc18 then L7() else L6(dr36);
  // L6(object40):
  //   r91 = `$`(object40, <sym avail>);
  //   goto L4(r91);
  // L1(dx65):
  //   as_character4 = ldf `as.character` in base;
  //   r93 = dyn as_character4(dx65);
  //   goto L0(r93);
  // L7():
  //   dx60 = getTryDispatchBuiltinValue(dr36);
  //   goto L4(dx60);
  // L8():
  //   dr38 = tryDispatchBuiltin.1("[", dx61);
  //   dc19 = getTryDispatchBuiltinDispatched(dr38);
  //   if dc19 then L10() else L9(dr38);
  // L9(dx63):
  //   pkgs2 = ld pkgs;
  //   pkgs3 = force? pkgs2;
  //   __8 = ldf `[` in base;
  //   r92 = dyn __8(dx63, pkgs3, "Repository");
  //   goto L1(r92);
  // L10():
  //   dx64 = getTryDispatchBuiltinValue(dr38);
  //   goto L1(dx64);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_13, CCP, RHO);
  // r95 = dyn cbind(p11, p12, p13)
  SEXP Rsh_Fir_array_args189[3];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args189[2] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 3, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L105() else D41()
  // L105()
  goto L105_;

D41_:;
  // deopt 137 [r95]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L105_:;
  // st update = r95
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r95_, RHO);
  (void)(Rsh_Fir_reg_r95_);
  // update2 = ld update
  Rsh_Fir_reg_update2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L106() else D42()
  // L106()
  goto L106_;

D42_:;
  // deopt 139 [update2]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_update2_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L106_:;
  // update3 = force? update2
  Rsh_Fir_reg_update3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update2_);
  // checkMissing(update3)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_update3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(update3)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_update3_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty());
  // if c30 then L107() else L108(update3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L107()
    goto L107_;
  } else {
  // L108(update3)
    Rsh_Fir_reg_update5_ = Rsh_Fir_reg_update3_;
    goto L108_;
  }

L107_:;
  // dr40 = tryDispatchBuiltin.1("[", update3)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_update3_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args192);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if dc20 then L109() else L108(dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L109()
    goto L109_;
  } else {
  // L108(dr40)
    Rsh_Fir_reg_update5_ = Rsh_Fir_reg_dr40_;
    goto L108_;
  }

L108_:;
  // old4 = ld old
  Rsh_Fir_reg_old4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L110() else D43()
  // L110()
  goto L110_;

L109_:;
  // dx66 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx66_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // goto L20(dx66)
  // L20(dx66)
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_dx66_;
  goto L20_;

D43_:;
  // deopt 141 [update5, old4]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_update5_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_old4_;
  Rsh_Fir_deopt(141, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L110_:;
  // old5 = force? old4
  Rsh_Fir_reg_old5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old4_);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r96 = dyn __9(update3, old5, <missing>, FALSE)
  SEXP Rsh_Fir_array_args195[4];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_update3_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_old5_;
  Rsh_Fir_array_args195[2] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args195[3] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names44[4];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_array_arg_names44[3] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 4, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L20(r96)
  // L20(r96)
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_r96_;
  goto L20_;

L111_:;
  // update6 = ld update
  Rsh_Fir_reg_update6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L113() else D44()
  // L113()
  goto L113_;

L112_:;
  // r97 = dyn base13(<sym update>)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L21(r97)
  // L21(r97)
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r97_;
  goto L21_;

D44_:;
  // deopt 151 [update6]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_update6_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L113_:;
  // update7 = force? update6
  Rsh_Fir_reg_update7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update6_);
  // checkMissing(update7)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_update7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r99 = dyn length1(update7)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_update7_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L114() else D45()
  // L114()
  goto L114_;

D45_:;
  // deopt 154 [r99]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L114_:;
  // goto L21(r99)
  // L21(r99)
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r99_;
  goto L21_;

L115_:;
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L116() else D46()
  // L116()
  goto L116_;

D46_:;
  // deopt 156 []
  Rsh_Fir_deopt(156, 0, NULL, CCP, RHO);
  return R_NilValue;

L116_:;
  // p14 = prom<V +>{
  //   update8 = ld update;
  //   update9 = force? update8;
  //   checkMissing(update9);
  //   c32 = `is.object`(update9);
  //   if c32 then L1() else L2();
  // L0(dx69):
  //   return dx69;
  // L1():
  //   dr42 = tryDispatchBuiltin.1("[", update9);
  //   dc21 = getTryDispatchBuiltinDispatched(dr42);
  //   if dc21 then L3() else L2();
  // L2():
  //   __10 = ldf `[` in base;
  //   r100 = dyn __10(update9, <missing>, 3.0);
  //   goto L0(r100);
  // L3():
  //   dx68 = getTryDispatchBuiltinValue(dr42);
  //   goto L0(dx68);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_14, CCP, RHO);
  // r102 = dyn unique(p14)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args205, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L117() else D47()
  // L117()
  goto L117_;

D47_:;
  // deopt 158 [r102]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L117_:;
  // s1 = toForSeq(r102)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // i34 = 0
  Rsh_Fir_reg_i34_ = Rsh_const(CCP, 8);
  // goto L23(i34)
  // L23(i34)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i34_;
  goto L23_;

L118_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return i36
  return Rsh_Fir_reg_i36_;

D48_:;
  // deopt 159 [i36, update12]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_update12_;
  Rsh_Fir_deopt(159, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L119_:;
  // update13 = force? update12
  Rsh_Fir_reg_update13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update12_);
  // checkMissing(update13)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_update13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(update13)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_update13_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // if c34 then L120() else L121(i36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L120()
    goto L120_;
  } else {
  // L121(i36)
    Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i36_;
    goto L121_;
  }

L120_:;
  // dr44 = tryDispatchBuiltin.1("[", update13)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_update13_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args210);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // if dc22 then L122() else L121(i36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L122()
    goto L122_;
  } else {
  // L121(i36)
    Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i36_;
    goto L121_;
  }

L121_:;
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r103 = dyn __11(update13, <missing>, 3.0)
  SEXP Rsh_Fir_array_args212[3];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_update13_;
  Rsh_Fir_array_args212[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args212[2] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 3, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L24(i40, r103)
  // L24(i40, r103)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_r103_;
  goto L24_;

L122_:;
  // dx70 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx70_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // goto L24(i36, dx70)
  // L24(i36, dx70)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_dx70_;
  goto L24_;

D49_:;
  // deopt 164 [i42, dx71, repo]
  SEXP Rsh_Fir_array_deopt_stack44[3];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i42_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_dx71_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_repo;
  Rsh_Fir_deopt(164, 3, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L123_:;
  // repo1 = force? repo
  Rsh_Fir_reg_repo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repo);
  // checkMissing(repo1)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_repo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // r104 = `==`(dx71, repo1)
  SEXP Rsh_Fir_array_args215[2];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dx71_;
  Rsh_Fir_array_args215[1] = Rsh_Fir_reg_repo1_;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // st ok = r104
  Rsh_Fir_store(Rsh_const(CCP, 58), Rsh_Fir_reg_r104_, RHO);
  (void)(Rsh_Fir_reg_r104_);
  // install_packages = ldf `install.packages`
  Rsh_Fir_reg_install_packages = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L124() else D50()
  // L124()
  goto L124_;

D50_:;
  // deopt 169 [i42]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_i42_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L124_:;
  // p15 = prom<V +>{
  //   update16 = ld update;
  //   update17 = force? update16;
  //   checkMissing(update17);
  //   c35 = `is.object`(update17);
  //   if c35 then L1() else L2(update17);
  // L0(dx73):
  //   return dx73;
  // L1():
  //   dr46 = tryDispatchBuiltin.1("[", update17);
  //   dc23 = getTryDispatchBuiltinDispatched(dr46);
  //   if dc23 then L3() else L2(dr46);
  // L2(update19):
  //   ok = ld ok;
  //   ok1 = force? ok;
  //   __12 = ldf `[` in base;
  //   r105 = dyn __12(update19, ok1, 1.0);
  //   goto L0(r105);
  // L3():
  //   dx72 = getTryDispatchBuiltinValue(dr46);
  //   goto L0(dx72);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_15, CCP, RHO);
  // p16 = prom<V +>{
  //   update20 = ld update;
  //   update21 = force? update20;
  //   checkMissing(update21);
  //   c36 = `is.object`(update21);
  //   if c36 then L1() else L2(update21);
  // L0(dx75):
  //   return dx75;
  // L1():
  //   dr48 = tryDispatchBuiltin.1("[", update21);
  //   dc24 = getTryDispatchBuiltinDispatched(dr48);
  //   if dc24 then L3() else L2(dr48);
  // L2(update23):
  //   ok2 = ld ok;
  //   ok3 = force? ok2;
  //   __13 = ldf `[` in base;
  //   r107 = dyn __13(update23, ok3, 2.0);
  //   goto L0(r107);
  // L3():
  //   dx74 = getTryDispatchBuiltinValue(dr48);
  //   goto L0(dx74);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_16, CCP, RHO);
  // p17 = prom<V +>{
  //   repo2 = ld repo;
  //   repo3 = force? repo2;
  //   checkMissing(repo3);
  //   return repo3;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3269654001_17, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // r110 = dyn install_packages[, , contriburl, `...`](p15, p16, p17, ddd1)
  SEXP Rsh_Fir_array_args229[4];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args229[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args229[2] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args229[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names52[4];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_array_arg_names52[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_arg_names52[3] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_install_packages, 4, Rsh_Fir_array_args229, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L125() else D51()
  // L125()
  goto L125_;

D51_:;
  // deopt 175 [i42, r110]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i42_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r110_;
  Rsh_Fir_deopt(175, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L23(i42)
  // L23(i42)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i42_;
  goto L23_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L2_;
  }

L0_:;
  // c1 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c1 then L5() else L6(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L6_;
  }

L1_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r = `$`(object4, <sym inst>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L4_:;
  // r2 = `==`(dx5, "upgrade")
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // return r2
  return Rsh_Fir_reg_r2_;

L5_:;
  // dr2 = tryDispatchBuiltin.1("$", dx1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L7() else L6(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L6_;
  }

L6_:;
  // r1 = `$`(dx3, <sym Status>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L4(r1)
  // L4(r1)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r1_;
  goto L4_;

L7_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L4(dx4)
  // L4(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_1(SEXP CCP, SEXP RHO) {
  // pkg = ld pkg
  Rsh_Fir_reg_pkg = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // pkg1 = force? pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg);
  // checkMissing(pkg1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_pkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return pkg1
  return Rsh_Fir_reg_pkg1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_2(SEXP CCP, SEXP RHO) {
  // sym2 = ldf `as.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base2 = ldf `as.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r24 = dyn as_character(dx17)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r24_;
  goto L0_;

L2_:;
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(object10)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c7 then L5() else L6(object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L5()
    goto L5_;
  } else {
  // L6(object10)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L6_;
  }

L3_:;
  // r20 = dyn base2(<lang `[`(`$`(object, inst), k, "LibPath")>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;

L4_:;
  // c8 = `is.object`(dx13)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c8 then L8() else L9(dx13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L8()
    goto L8_;
  } else {
  // L9(dx13)
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
    goto L9_;
  }

L5_:;
  // dr8 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc4 then L7() else L6(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr8)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr8_;
    goto L6_;
  }

L6_:;
  // r22 = `$`(object12, <sym inst>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L4(r22)
  // L4(r22)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r22_;
  goto L4_;

L7_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L4(dx12)
  // L4(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L4_;

L8_:;
  // dr10 = tryDispatchBuiltin.1("[", dx13)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc5 then L10() else L9(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr10)
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dr10_;
    goto L9_;
  }

L9_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r23 = dyn __1(dx15, k3, "LibPath")
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_k3_;
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r23)
  // L1(r23)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r23_;
  goto L1_;

L10_:;
  // dx16 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L1(dx16)
  // L1(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_3(SEXP CCP, SEXP RHO) {
  // tmpstring = ld tmpstring
  Rsh_Fir_reg_tmpstring = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // tmpstring1 = force? tmpstring
  Rsh_Fir_reg_tmpstring1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmpstring);
  // checkMissing(tmpstring1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_tmpstring1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return tmpstring1
  return Rsh_Fir_reg_tmpstring1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_4(SEXP CCP, SEXP RHO) {
  // haveasked = ld haveasked
  Rsh_Fir_reg_haveasked = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // haveasked1 = force? haveasked
  Rsh_Fir_reg_haveasked1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_haveasked);
  // checkMissing(haveasked1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_haveasked1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return haveasked1
  return Rsh_Fir_reg_haveasked1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_5(SEXP CCP, SEXP RHO) {
  // pkg2 = ld pkg
  Rsh_Fir_reg_pkg2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // pkg3 = force? pkg2
  Rsh_Fir_reg_pkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg2_);
  // checkMissing(pkg3)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_pkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return pkg3
  return Rsh_Fir_reg_pkg3_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_6(SEXP CCP, SEXP RHO) {
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(object14)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c11 then L3() else L4(object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L3()
    goto L3_;
  } else {
  // L4(object14)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L4_;
  }

L0_:;
  // return dx23
  return Rsh_Fir_reg_dx23_;

L1_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r41 = dyn __2(dx26, k8, r39)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_k8_;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r41_;
  goto L0_;

L2_:;
  // c12 = `is.object`(dx19)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c12 then L6() else L7(dx19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L6()
    goto L6_;
  } else {
  // L7(dx19)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    goto L7_;
  }

L3_:;
  // dr12 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc6 then L5() else L4(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr12)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr12_;
    goto L4_;
  }

L4_:;
  // r37 = `$`(object16, <sym inst>)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L2(r37)
  // L2(r37)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r37_;
  goto L2_;

L5_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L2(dx18)
  // L2(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L2_;

L6_:;
  // dr14 = tryDispatchBuiltin.1("[", dx19)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc7 then L8() else L7(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr14)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dr14_;
    goto L7_;
  }

L7_:;
  // k4 = ld k
  Rsh_Fir_reg_k4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // k5 = force? k4
  Rsh_Fir_reg_k5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k4_);
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard4 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // dx22 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L0(dx22)
  // L0(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L0_;

L9_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r40 = dyn c13("Version", "LibPath")
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(dx21, k5, r40)
  // L1(dx21, k5, r40)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_k8_ = Rsh_Fir_reg_k5_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L1_;

L10_:;
  // r38 = dyn base4("Version", "LibPath")
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(dx21, k5, r38)
  // L1(dx21, k5, r38)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_k8_ = Rsh_Fir_reg_k5_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_7(SEXP CCP, SEXP RHO) {
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(object18)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c14 then L3() else L4(object18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L3()
    goto L3_;
  } else {
  // L4(object18)
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_object18_;
    goto L4_;
  }

L0_:;
  // return dx32
  return Rsh_Fir_reg_dx32_;

L1_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r48 = dyn __3(dx35, pkg8, r46)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_pkg8_;
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_r48_;
  goto L0_;

L2_:;
  // c15 = `is.object`(dx28)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dx28_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if c15 then L6() else L7(dx28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L6()
    goto L6_;
  } else {
  // L7(dx28)
    Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx28_;
    goto L7_;
  }

L3_:;
  // dr16 = tryDispatchBuiltin.1("$", object18)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc8 then L5() else L4(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr16)
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_dr16_;
    goto L4_;
  }

L4_:;
  // r44 = `$`(object20, <sym avail>)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L2(r44)
  // L2(r44)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r44_;
  goto L2_;

L5_:;
  // dx27 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L2(dx27)
  // L2(dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L2_;

L6_:;
  // dr18 = tryDispatchBuiltin.1("[", dx28)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_dx28_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc9 then L8() else L7(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L8()
    goto L8_;
  } else {
  // L7(dr18)
    Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dr18_;
    goto L7_;
  }

L7_:;
  // pkg4 = ld pkg
  Rsh_Fir_reg_pkg4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // pkg5 = force? pkg4
  Rsh_Fir_reg_pkg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg4_);
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard5 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // dx31 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L0(dx31)
  // L0(dx31)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx31_;
  goto L0_;

L9_:;
  // c16 = ldf c in base
  Rsh_Fir_reg_c16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r47 = dyn c16("Version", "Repository")
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c16_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L1(dx30, pkg5, r47)
  // L1(dx30, pkg5, r47)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx30_;
  Rsh_Fir_reg_pkg8_ = Rsh_Fir_reg_pkg5_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L1_;

L10_:;
  // r45 = dyn base5("Version", "Repository")
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L1(dx30, pkg5, r45)
  // L1(dx30, pkg5, r45)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx30_;
  Rsh_Fir_reg_pkg8_ = Rsh_Fir_reg_pkg5_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_8(SEXP CCP, SEXP RHO) {
  // answer2 = ld answer
  Rsh_Fir_reg_answer2_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // answer3 = force? answer2
  Rsh_Fir_reg_answer3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_answer2_);
  // checkMissing(answer3)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_answer3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // return answer3
  return Rsh_Fir_reg_answer3_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_9(SEXP CCP, SEXP RHO) {
  // update = ld update
  Rsh_Fir_reg_update = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // update1 = force? update
  Rsh_Fir_reg_update1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update);
  // checkMissing(update1)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_update1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // return update1
  return Rsh_Fir_reg_update1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_10(SEXP CCP, SEXP RHO) {
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args116);
  // if guard8 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // return r65
  return Rsh_Fir_reg_r65_;

L1_:;
  // sym10 = ldf `as.character`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base10 = ldf `as.character` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args117);
  // if guard10 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L2_:;
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r70 = dyn as_character1(dx41)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dx41_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L1(r70)
  // L1(r70)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r70_;
  goto L1_;

L3_:;
  // c23 = ldf c in base
  Rsh_Fir_reg_c23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r76 = dyn c23(pkg10, r67, r72)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_pkg10_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c23_, 3, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r76)
  // L0(r76)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r76_;
  goto L0_;

L4_:;
  // as_character2 = ldf `as.character` in base
  Rsh_Fir_reg_as_character2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r75 = dyn as_character2(dx47)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dx47_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character2_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L3(r75)
  // L3(r75)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r75_;
  goto L3_;

L5_:;
  // pkg9 = ld pkg
  Rsh_Fir_reg_pkg9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // pkg10 = force? pkg9
  Rsh_Fir_reg_pkg10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg9_);
  // checkMissing(pkg10)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_pkg10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // sym9 = ldf `as.character`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base9 = ldf `as.character` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard9 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // r64 = dyn base8(<sym pkg>, <lang as.character(`[`(`$`(object, inst), k, "LibPath"))>, <lang as.character(`[`(`$`(object, avail), pkg, "Repository"))>)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args123[2] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 3, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r64)
  // L0(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L0_;

L7_:;
  // object21 = ld object
  Rsh_Fir_reg_object21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object22 = force? object21
  Rsh_Fir_reg_object22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object21_);
  // checkMissing(object22)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_object22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(object22)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if c19 then L10() else L11(object22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L10()
    goto L10_;
  } else {
  // L11(object22)
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_object22_;
    goto L11_;
  }

L8_:;
  // r66 = dyn base9(<lang `[`(`$`(object, inst), k, "LibPath")>)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L1(r66)
  // L1(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L1_;

L9_:;
  // c20 = `is.object`(dx37)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dx37_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c20 then L13() else L14(dx37)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L13()
    goto L13_;
  } else {
  // L14(dx37)
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx37_;
    goto L14_;
  }

L10_:;
  // dr20 = tryDispatchBuiltin.1("$", object22)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args128);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if dc10 then L12() else L11(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr20)
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_dr20_;
    goto L11_;
  }

L11_:;
  // r68 = `$`(object24, <sym inst>)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_object24_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L9(r68)
  // L9(r68)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r68_;
  goto L9_;

L12_:;
  // dx36 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L9(dx36)
  // L9(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L9_;

L13_:;
  // dr22 = tryDispatchBuiltin.1("[", dx37)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_dx37_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc11 then L15() else L14(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L15()
    goto L15_;
  } else {
  // L14(dr22)
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dr22_;
    goto L14_;
  }

L14_:;
  // k9 = ld k
  Rsh_Fir_reg_k9_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // k10 = force? k9
  Rsh_Fir_reg_k10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k9_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r69 = dyn __4(dx39, k10, "LibPath")
  SEXP Rsh_Fir_array_args134[3];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_k10_;
  Rsh_Fir_array_args134[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L2(r69)
  // L2(r69)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r69_;
  goto L2_;

L15_:;
  // dx40 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L2(dx40)
  // L2(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L2_;

L16_:;
  // object25 = ld object
  Rsh_Fir_reg_object25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object26 = force? object25
  Rsh_Fir_reg_object26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object25_);
  // checkMissing(object26)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_object26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(object26)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_object26_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if c21 then L19() else L20(object26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L19()
    goto L19_;
  } else {
  // L20(object26)
    Rsh_Fir_reg_object28_ = Rsh_Fir_reg_object26_;
    goto L20_;
  }

L17_:;
  // r71 = dyn base10(<lang `[`(`$`(object, avail), pkg, "Repository")>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L3(r71)
  // L3(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L3_;

L18_:;
  // c22 = `is.object`(dx43)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if c22 then L22() else L23(dx43)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L22()
    goto L22_;
  } else {
  // L23(dx43)
    Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx43_;
    goto L23_;
  }

L19_:;
  // dr24 = tryDispatchBuiltin.1("$", object26)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_object26_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args140);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if dc12 then L21() else L20(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr24)
    Rsh_Fir_reg_object28_ = Rsh_Fir_reg_dr24_;
    goto L20_;
  }

L20_:;
  // r73 = `$`(object28, <sym avail>)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_object28_;
  Rsh_Fir_array_args142[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // goto L18(r73)
  // L18(r73)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r73_;
  goto L18_;

L21_:;
  // dx42 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // goto L18(dx42)
  // L18(dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L18_;

L22_:;
  // dr26 = tryDispatchBuiltin.1("[", dx43)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args144);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if dc13 then L24() else L23(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L24()
    goto L24_;
  } else {
  // L23(dr26)
    Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dr26_;
    goto L23_;
  }

L23_:;
  // pkg11 = ld pkg
  Rsh_Fir_reg_pkg11_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // pkg12 = force? pkg11
  Rsh_Fir_reg_pkg12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg11_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r74 = dyn __5(dx45, pkg12, "Repository")
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_pkg12_;
  Rsh_Fir_array_args146[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 3, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L4(r74)
  // L4(r74)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r74_;
  goto L4_;

L24_:;
  // dx46 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L4(dx46)
  // L4(dx46)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx46_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_11(SEXP CCP, SEXP RHO) {
  // pkgs = ld pkgs
  Rsh_Fir_reg_pkgs = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // pkgs1 = force? pkgs
  Rsh_Fir_reg_pkgs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs);
  // checkMissing(pkgs1)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_pkgs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // return pkgs1
  return Rsh_Fir_reg_pkgs1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_12(SEXP CCP, SEXP RHO) {
  // sym11 = ldf `as.character`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base11 = ldf `as.character` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args161);
  // if guard11 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r84
  return Rsh_Fir_reg_r84_;

L1_:;
  // as_character3 = ldf `as.character` in base
  Rsh_Fir_reg_as_character3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r87 = dyn as_character3(dx59)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dx59_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character3_, 1, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r87)
  // L0(r87)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r87_;
  goto L0_;

L2_:;
  // object33 = ld object
  Rsh_Fir_reg_object33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object34 = force? object33
  Rsh_Fir_reg_object34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object33_);
  // checkMissing(object34)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_object34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(object34)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_object34_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // if c26 then L5() else L6(object34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L5()
    goto L5_;
  } else {
  // L6(object34)
    Rsh_Fir_reg_object36_ = Rsh_Fir_reg_object34_;
    goto L6_;
  }

L3_:;
  // r83 = dyn base11(<lang `[`(`$`(object, inst), , "LibPath")>)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r83)
  // L0(r83)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L0_;

L4_:;
  // c27 = `is.object`(dx55)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if c27 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L5_:;
  // dr32 = tryDispatchBuiltin.1("$", object34)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_object34_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args167);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // if dc16 then L7() else L6(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr32)
    Rsh_Fir_reg_object36_ = Rsh_Fir_reg_dr32_;
    goto L6_;
  }

L6_:;
  // r85 = `$`(object36, <sym inst>)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_object36_;
  Rsh_Fir_array_args169[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L4(r85)
  // L4(r85)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_r85_;
  goto L4_;

L7_:;
  // dx54 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx54_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L4(dx54)
  // L4(dx54)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx54_;
  goto L4_;

L8_:;
  // dr34 = tryDispatchBuiltin.1("[", dx55)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args171);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if dc17 then L10() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L10()
    goto L10_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r86 = dyn __7(dx55, <missing>, "LibPath")
  SEXP Rsh_Fir_array_args173[3];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_array_args173[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args173[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 3, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L1(r86)
  // L1(r86)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_r86_;
  goto L1_;

L10_:;
  // dx58 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx58_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // goto L1(dx58)
  // L1(dx58)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx58_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_13(SEXP CCP, SEXP RHO) {
  // sym12 = ldf `as.character`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base12 = ldf `as.character` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args175);
  // if guard12 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r90
  return Rsh_Fir_reg_r90_;

L1_:;
  // as_character4 = ldf `as.character` in base
  Rsh_Fir_reg_as_character4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r93 = dyn as_character4(dx65)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dx65_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character4_, 1, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L0(r93)
  // L0(r93)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r93_;
  goto L0_;

L2_:;
  // object37 = ld object
  Rsh_Fir_reg_object37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object38 = force? object37
  Rsh_Fir_reg_object38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object37_);
  // checkMissing(object38)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_object38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(object38)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_object38_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // if c28 then L5() else L6(object38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L5()
    goto L5_;
  } else {
  // L6(object38)
    Rsh_Fir_reg_object40_ = Rsh_Fir_reg_object38_;
    goto L6_;
  }

L3_:;
  // r89 = dyn base12(<lang `[`(`$`(object, avail), pkgs, "Repository")>)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L0(r89)
  // L0(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L0_;

L4_:;
  // c29 = `is.object`(dx61)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dx61_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // if c29 then L8() else L9(dx61)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L8()
    goto L8_;
  } else {
  // L9(dx61)
    Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dx61_;
    goto L9_;
  }

L5_:;
  // dr36 = tryDispatchBuiltin.1("$", object38)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg_object38_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args181);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if dc18 then L7() else L6(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr36)
    Rsh_Fir_reg_object40_ = Rsh_Fir_reg_dr36_;
    goto L6_;
  }

L6_:;
  // r91 = `$`(object40, <sym avail>)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_object40_;
  Rsh_Fir_array_args183[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // goto L4(r91)
  // L4(r91)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_r91_;
  goto L4_;

L7_:;
  // dx60 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx60_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // goto L4(dx60)
  // L4(dx60)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_dx60_;
  goto L4_;

L8_:;
  // dr38 = tryDispatchBuiltin.1("[", dx61)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_dx61_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args185);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if dc19 then L10() else L9(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr38)
    Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dr38_;
    goto L9_;
  }

L9_:;
  // pkgs2 = ld pkgs
  Rsh_Fir_reg_pkgs2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // pkgs3 = force? pkgs2
  Rsh_Fir_reg_pkgs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs2_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r92 = dyn __8(dx63, pkgs3, "Repository")
  SEXP Rsh_Fir_array_args187[3];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_dx63_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_pkgs3_;
  Rsh_Fir_array_args187[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 3, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L1(r92)
  // L1(r92)
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_r92_;
  goto L1_;

L10_:;
  // dx64 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx64_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // goto L1(dx64)
  // L1(dx64)
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx64_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_14(SEXP CCP, SEXP RHO) {
  // update8 = ld update
  Rsh_Fir_reg_update8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // update9 = force? update8
  Rsh_Fir_reg_update9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update8_);
  // checkMissing(update9)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_update9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(update9)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_update9_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // if c32 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx69
  return Rsh_Fir_reg_dx69_;

L1_:;
  // dr42 = tryDispatchBuiltin.1("[", update9)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_update9_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args201);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // if dc21 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r100 = dyn __10(update9, <missing>, 3.0)
  SEXP Rsh_Fir_array_args203[3];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_update9_;
  Rsh_Fir_array_args203[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args203[2] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 3, Rsh_Fir_array_args203, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r100)
  // L0(r100)
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_r100_;
  goto L0_;

L3_:;
  // dx68 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx68_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // goto L0(dx68)
  // L0(dx68)
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_dx68_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_15(SEXP CCP, SEXP RHO) {
  // update16 = ld update
  Rsh_Fir_reg_update16_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // update17 = force? update16
  Rsh_Fir_reg_update17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update16_);
  // checkMissing(update17)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_update17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(update17)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_update17_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // if c35 then L1() else L2(update17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L1()
    goto L1_;
  } else {
  // L2(update17)
    Rsh_Fir_reg_update19_ = Rsh_Fir_reg_update17_;
    goto L2_;
  }

L0_:;
  // return dx73
  return Rsh_Fir_reg_dx73_;

L1_:;
  // dr46 = tryDispatchBuiltin.1("[", update17)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_update17_;
  Rsh_Fir_reg_dr46_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args218);
  // dc23 = getTryDispatchBuiltinDispatched(dr46)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dc23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // if dc23 then L3() else L2(dr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc23_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr46)
    Rsh_Fir_reg_update19_ = Rsh_Fir_reg_dr46_;
    goto L2_;
  }

L2_:;
  // ok = ld ok
  Rsh_Fir_reg_ok = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // ok1 = force? ok
  Rsh_Fir_reg_ok1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok);
  // __12 = ldf `[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r105 = dyn __12(update19, ok1, 1.0)
  SEXP Rsh_Fir_array_args220[3];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_update19_;
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_ok1_;
  Rsh_Fir_array_args220[2] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 3, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r105)
  // L0(r105)
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_r105_;
  goto L0_;

L3_:;
  // dx72 = getTryDispatchBuiltinValue(dr46)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dx72_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty());
  // goto L0(dx72)
  // L0(dx72)
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx72_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_16(SEXP CCP, SEXP RHO) {
  // update20 = ld update
  Rsh_Fir_reg_update20_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // update21 = force? update20
  Rsh_Fir_reg_update21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_update20_);
  // checkMissing(update21)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_update21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(update21)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_update21_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // if c36 then L1() else L2(update21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L1()
    goto L1_;
  } else {
  // L2(update21)
    Rsh_Fir_reg_update23_ = Rsh_Fir_reg_update21_;
    goto L2_;
  }

L0_:;
  // return dx75
  return Rsh_Fir_reg_dx75_;

L1_:;
  // dr48 = tryDispatchBuiltin.1("[", update21)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_update21_;
  Rsh_Fir_reg_dr48_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args224);
  // dc24 = getTryDispatchBuiltinDispatched(dr48)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dc24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // if dc24 then L3() else L2(dr48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc24_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr48)
    Rsh_Fir_reg_update23_ = Rsh_Fir_reg_dr48_;
    goto L2_;
  }

L2_:;
  // ok2 = ld ok
  Rsh_Fir_reg_ok2_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // ok3 = force? ok2
  Rsh_Fir_reg_ok3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok2_);
  // __13 = ldf `[` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r107 = dyn __13(update23, ok3, 2.0)
  SEXP Rsh_Fir_array_args226[3];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_update23_;
  Rsh_Fir_array_args226[1] = Rsh_Fir_reg_ok3_;
  Rsh_Fir_array_args226[2] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names51[3];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 3, Rsh_Fir_array_args226, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L0(r107)
  // L0(r107)
  Rsh_Fir_reg_dx75_ = Rsh_Fir_reg_r107_;
  goto L0_;

L3_:;
  // dx74 = getTryDispatchBuiltinValue(dr48)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dx74_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty());
  // goto L0(dx74)
  // L0(dx74)
  Rsh_Fir_reg_dx75_ = Rsh_Fir_reg_dx74_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3269654001_17(SEXP CCP, SEXP RHO) {
  // repo2 = ld repo
  Rsh_Fir_reg_repo2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // repo3 = force? repo2
  Rsh_Fir_reg_repo3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repo2_);
  // checkMissing(repo3)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_repo3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // return repo3
  return Rsh_Fir_reg_repo3_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_write_table;  // write_table
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 63), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // write_table = ldf `write.table`
  Rsh_Fir_reg_write_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // r1 = dyn write_table[, `row.names`, `col.names`, quote, sep](p, FALSE, FALSE, FALSE, " at ")
  SEXP Rsh_Fir_array_args231[5];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args231[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args231[2] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args231[3] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args231[4] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names53[5];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = Rsh_const(CCP, 66);
  Rsh_Fir_array_arg_names53[2] = Rsh_const(CCP, 67);
  Rsh_Fir_array_arg_names53[3] = Rsh_const(CCP, 68);
  Rsh_Fir_array_arg_names53[4] = Rsh_const(CCP, 69);
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_write_table, 5, Rsh_Fir_array_args231, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 11 [r1]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 63), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
