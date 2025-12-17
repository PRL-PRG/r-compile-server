#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2881083477_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2881083477_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2881083477_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2881083477_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2881083477_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2881083477_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2881083477_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2881083477_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2881083477_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2881083477_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner2881083477
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2881083477_, RHO, CCP);
  // st inheritedSubMethodLists = r
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
SEXP Rsh_Fir_user_function_inner2881083477_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2881083477 dynamic dispatch ([object, thisClass, mlist, ev])

  return Rsh_Fir_user_version_inner2881083477_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2881083477_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2881083477 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2881083477/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_thisClass;  // thisClass
  SEXP Rsh_Fir_reg_mlist;  // mlist
  SEXP Rsh_Fir_reg_ev;  // ev
  SEXP Rsh_Fir_reg__MlistDefunct;  // _MlistDefunct
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_slot;  // slot
  SEXP Rsh_Fir_reg_mlist1_;  // mlist1
  SEXP Rsh_Fir_reg_mlist2_;  // mlist2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_methods;  // methods
  SEXP Rsh_Fir_reg_methods1_;  // methods1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_methods3_;  // methods3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_methods4_;  // methods4
  SEXP Rsh_Fir_reg_methods5_;  // methods5
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg__identC;  // _identC
  SEXP Rsh_Fir_reg_thisClass1_;  // thisClass1
  SEXP Rsh_Fir_reg_thisClass2_;  // thisClass2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_getClassDef;  // getClassDef
  SEXP Rsh_Fir_reg_thisClass3_;  // thisClass3
  SEXP Rsh_Fir_reg_thisClass4_;  // thisClass4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_ev1_;  // ev1
  SEXP Rsh_Fir_reg_ev2_;  // ev2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_classDef;  // classDef
  SEXP Rsh_Fir_reg_classDef1_;  // classDef1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_useSuperClasses;  // useSuperClasses
  SEXP Rsh_Fir_reg_useSuperClasses1_;  // useSuperClasses1
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_superClasses;  // superClasses
  SEXP Rsh_Fir_reg_superClasses1_;  // superClasses1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_superClasses3_;  // superClasses3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_superClasses6_;  // superClasses6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_superClasses9_;  // superClasses9
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_superClasses10_;  // superClasses10
  SEXP Rsh_Fir_reg_superClasses11_;  // superClasses11
  SEXP Rsh_Fir_reg_classes;  // classes
  SEXP Rsh_Fir_reg_classes1_;  // classes1
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_classes2_;  // classes2
  SEXP Rsh_Fir_reg_classes3_;  // classes3
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_classes4_;  // classes4
  SEXP Rsh_Fir_reg_classes5_;  // classes5
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_classes7_;  // classes7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_which1_;  // which1
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_tryClass;  // tryClass
  SEXP Rsh_Fir_reg_tryClass1_;  // tryClass1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_methods6_;  // methods6
  SEXP Rsh_Fir_reg_methods7_;  // methods7
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_methods9_;  // methods9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_tryClass2_;  // tryClass2
  SEXP Rsh_Fir_reg_tryClass3_;  // tryClass3
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_tryClass4_;  // tryClass4
  SEXP Rsh_Fir_reg_tryClass5_;  // tryClass5
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_classes8_;  // classes8
  SEXP Rsh_Fir_reg_classes9_;  // classes9
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_classes10_;  // classes10
  SEXP Rsh_Fir_reg_classes11_;  // classes11
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_classes13_;  // classes13
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_which2_;  // which2
  SEXP Rsh_Fir_reg_which3_;  // which3
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_getClassDef1_;  // getClassDef1
  SEXP Rsh_Fir_reg_tryClass6_;  // tryClass6
  SEXP Rsh_Fir_reg_tryClass7_;  // tryClass7
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_ev3_;  // ev3
  SEXP Rsh_Fir_reg_ev4_;  // ev4
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_tryClassDef;  // tryClassDef
  SEXP Rsh_Fir_reg_tryClassDef1_;  // tryClassDef1
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_i45_;  // i45
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_thisClass5_;  // thisClass5
  SEXP Rsh_Fir_reg_thisClass6_;  // thisClass6
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_methods10_;  // methods10
  SEXP Rsh_Fir_reg_methods11_;  // methods11
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_i53_;  // i53
  SEXP Rsh_Fir_reg_methods13_;  // methods13
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_i55_;  // i55
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_which4_;  // which4
  SEXP Rsh_Fir_reg_which5_;  // which5
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_i57_;  // i57
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_i59_;  // i59
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_tryClass8_;  // tryClass8
  SEXP Rsh_Fir_reg_tryClass9_;  // tryClass9
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_i60_;  // i60
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_defaultMethod;  // defaultMethod
  SEXP Rsh_Fir_reg_defaultMethod1_;  // defaultMethod1
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_defaultMethod2_;  // defaultMethod2
  SEXP Rsh_Fir_reg_defaultMethod3_;  // defaultMethod3
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_defaultMethod5_;  // defaultMethod5
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_defaultMethod7_;  // defaultMethod7
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_thisClass = PARAMS[1];
  Rsh_Fir_reg_mlist = PARAMS[2];
  Rsh_Fir_reg_ev = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st thisClass = thisClass
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_thisClass, RHO);
  (void)(Rsh_Fir_reg_thisClass);
  // st mlist = mlist
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_mlist, RHO);
  (void)(Rsh_Fir_reg_mlist);
  // st ev = ev
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ev, RHO);
  (void)(Rsh_Fir_reg_ev);
  // _MlistDefunct = ldf `.MlistDefunct`
  Rsh_Fir_reg__MlistDefunct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L39() else D0()
  // L39()
  goto L39_;

L0_:;
  // st defaultMethod = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L1_:;
  // st classes = r5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L2_:;
  // st value = r8
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // _identC = ldf `.identC`
  Rsh_Fir_reg__identC = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L54() else D8()
  // L54()
  goto L54_;

L3_:;
  // getClassDef = ldf getClassDef
  Rsh_Fir_reg_getClassDef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L58() else D10()
  // L58()
  goto L58_;

L4_:;
  // sym13 = ldf `is.null`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base13 = ldf `is.null` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard13 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L5_:;
  // r18 = `!`(r17)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L63() else L6(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L63()
    goto L63_;
  } else {
  // L6(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L6_;
  }

L6_:;
  // st useSuperClasses = c5
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_c5_, RHO);
  (void)(Rsh_Fir_reg_c5_);
  // useSuperClasses = ld useSuperClasses
  Rsh_Fir_reg_useSuperClasses = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L65() else D13()
  // L65()
  goto L65_;

L7_:;
  // sym8 = ldf seq_along
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base8 = ldf seq_along in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard8 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L8_:;
  // st superClasses = r22
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // superClasses = ld superClasses
  Rsh_Fir_reg_superClasses = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L70() else D15()
  // L70()
  goto L70_;

L9_:;
  // st classes = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym6 = ldf seq_along
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf seq_along in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard6 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L10_:;
  // r31 = `!`(r26)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r32 = dyn __3(superClasses6, r31)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_superClasses6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L9(r32)
  // L9(r32)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r32_;
  goto L9_;

L11_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r30 = dyn is_na(r28)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L81() else D19()
  // L81()
  goto L81_;

L12_:;
  // s = toForSeq(r34)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 19);
  // goto L13(i)
  // L13(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L13_;

L13_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // c11 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if c11 then L85() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L85()
    goto L85_;
  } else {
  // L21()
    goto L21_;
  }

L14_:;
  // st tryClass = dx5
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard7 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L15_:;
  // c14 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c14 then L16(i11, c14) else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L16(i11, c14)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c14_;
    goto L16_;
  } else {
  // L94()
    goto L94_;
  }

L16_:;
  // c20 = `as.logical`(c15)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c20 then L98() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L98()
    goto L98_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L20(i12)
  // L20(i12)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i12_;
  goto L20_;

L18_:;
  // l1 = ld value
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c22 = `is.object`(l1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c22 then L104() else L105(i20, dx7, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L104()
    goto L104_;
  } else {
  // L105(i20, dx7, l1)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L105_;
  }

L19_:;
  // st value = dx13
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L20(i24)
  // L20(i24)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i24_;
  goto L20_;

L20_:;
  // goto L13(i25)
  // L13(i25)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i25_;
  goto L13_;

L21_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // st which = x
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // classes4 = ld classes
  Rsh_Fir_reg_classes4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L86() else D21()
  // L86()
  goto L86_;

L22_:;
  // s1 = toForSeq(r45)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // l4 = length(s1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // i26 = 0
  Rsh_Fir_reg_i26_ = Rsh_const(CCP, 19);
  // goto L23(i26)
  // L23(i26)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i26_;
  goto L23_;

L23_:;
  // i28 = `+`.1(i27, 1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_i28_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // c23 = `<`.1(l4, i28)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if c23 then L113() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L113()
    goto L113_;
  } else {
  // L34()
    goto L34_;
  }

L24_:;
  // st tryClass = dx16
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // getClassDef1 = ldf getClassDef
  Rsh_Fir_reg_getClassDef1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L119() else D32()
  // L119()
  goto L119_;

L25_:;
  // r53 = `!`(r52)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c26 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c26 then L124() else L26(i37, c26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L124()
    goto L124_;
  } else {
  // L26(i37, c26)
    Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i37_;
    Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c26_;
    goto L26_;
  }

L26_:;
  // c41 = `as.logical`(c28)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c41 then L136() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L136()
    goto L136_;
  } else {
  // L30()
    goto L30_;
  }

L27_:;
  // r64 = `!`(r55)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c38 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // c39 = `&&`(c31, c38)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L26(i42, c39)
  // L26(i42, c39)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i42_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c39_;
  goto L26_;

L28_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r63 = dyn is_na1(r57)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L134() else D38()
  // L134()
  goto L134_;

L29_:;
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r62 = dyn match1(thisClass6, r59, NA_INT, NULL)
  SEXP Rsh_Fir_array_args30[4];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_thisClass6_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args30[3] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L133() else D37()
  // L133()
  goto L133_;

L30_:;
  // goto L33(i39)
  // L33(i39)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i39_;
  goto L33_;

L31_:;
  // l5 = ld value
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c43 = `is.object`(l5)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c43 then L142() else L143(i55, dx18, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L142()
    goto L142_;
  } else {
  // L143(i55, dx18, l5)
    Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i55_;
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx18_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L143_;
  }

L32_:;
  // st value = dx24
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx24_, RHO);
  (void)(Rsh_Fir_reg_dx24_);
  // goto L33(i59)
  // L33(i59)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i59_;
  goto L33_;

L33_:;
  // goto L23(i60)
  // L23(i60)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i60_;
  goto L23_;

L34_:;
  // x1 = `[[`(s1, i28, NULL, TRUE)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // st which = x1
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // classes10 = ld classes
  Rsh_Fir_reg_classes10_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L114() else D30()
  // L114()
  goto L114_;

L35_:;
  // r69 = `!`(r68)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c45 = `as.logical`(r69)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c45 then L150() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L150()
    goto L150_;
  } else {
  // L36()
    goto L36_;
  }

L36_:;
  // goto L38()
  // L38()
  goto L38_;

L37_:;
  // st value = dx27
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // goto L38()
  // L38()
  goto L38_;

L38_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L156() else D44()
  // L156()
  goto L156_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // r = dyn _MlistDefunct("inheritedSubMethodLists()")
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__MlistDefunct, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L40() else D1()
  // L40()
  goto L40_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L40_:;
  // slot = ldf slot
  Rsh_Fir_reg_slot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L41() else D2()
  // L41()
  goto L41_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p = prom<V +>{
  //   mlist1 = ld mlist;
  //   mlist2 = force? mlist1;
  //   checkMissing(mlist2);
  //   return mlist2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2881083477_, CCP, RHO);
  // r2 = dyn slot(p, "methods")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L42() else D3()
  // L42()
  goto L42_;

D3_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L42_:;
  // st methods = r2
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // methods = ld methods
  Rsh_Fir_reg_methods = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L43() else D4()
  // L43()
  goto L43_;

D4_:;
  // deopt 10 [methods]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_methods;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L43_:;
  // methods1 = force? methods
  Rsh_Fir_reg_methods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methods);
  // checkMissing(methods1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_methods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c = `is.object`(methods1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_methods1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c then L44() else L45(methods1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L44()
    goto L44_;
  } else {
  // L45(methods1)
    Rsh_Fir_reg_methods3_ = Rsh_Fir_reg_methods1_;
    goto L45_;
  }

L44_:;
  // dr = tryDispatchBuiltin.1("[[", methods1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_methods1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc then L46() else L45(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr)
    Rsh_Fir_reg_methods3_ = Rsh_Fir_reg_dr;
    goto L45_;
  }

L45_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r3 = dyn __(methods3, "ANY")
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_methods3_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L46_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L47_:;
  // methods4 = ld methods
  Rsh_Fir_reg_methods4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L49() else D5()
  // L49()
  goto L49_;

L48_:;
  // r4 = dyn base(<sym methods>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D5_:;
  // deopt 18 [methods4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_methods4_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L49_:;
  // methods5 = force? methods4
  Rsh_Fir_reg_methods5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methods4_);
  // checkMissing(methods5)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_methods5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r6 = dyn names(methods5)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_methods5_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L50() else D6()
  // L50()
  goto L50_;

D6_:;
  // deopt 21 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L51_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r9 = dyn list()
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L53() else D7()
  // L53()
  goto L53_;

L52_:;
  // r7 = dyn base1()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L2_;

D7_:;
  // deopt 26 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p1 = prom<V +>{
  //   thisClass1 = ld thisClass;
  //   thisClass2 = force? thisClass1;
  //   checkMissing(thisClass2);
  //   return thisClass2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2881083477_1, CCP, RHO);
  // r11 = dyn _identC(p1, "missing")
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__identC, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L55() else D9()
  // L55()
  goto L55_;

D9_:;
  // deopt 32 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L55_:;
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c1 then L56() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L56()
    goto L56_;
  } else {
  // L3()
    goto L3_;
  }

L56_:;
  // goto L4()
  // L4()
  goto L4_;

D10_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p2 = prom<V +>{
  //   thisClass3 = ld thisClass;
  //   thisClass4 = force? thisClass3;
  //   checkMissing(thisClass4);
  //   return thisClass4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2881083477_2, CCP, RHO);
  // p3 = prom<V +>{
  //   ev1 = ld ev;
  //   ev2 = force? ev1;
  //   checkMissing(ev2);
  //   return ev2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2881083477_3, CCP, RHO);
  // r15 = dyn getClassDef(p2, p3)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClassDef, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L59() else D11()
  // L59()
  goto L59_;

D11_:;
  // deopt 39 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L59_:;
  // st classDef = r15
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard2 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L60_:;
  // classDef = ld classDef
  Rsh_Fir_reg_classDef = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L62() else D12()
  // L62()
  goto L62_;

L61_:;
  // r16 = dyn base2(<sym classDef>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L5_;

D12_:;
  // deopt 42 [classDef]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_classDef;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L62_:;
  // classDef1 = force? classDef
  Rsh_Fir_reg_classDef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classDef);
  // checkMissing(classDef1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_classDef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c2 = `==`(classDef1, NULL)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_classDef1_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L5(c2)
  // L5(c2)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_c2_;
  goto L5_;

L63_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r19 = dyn __1(<sym classDef>, <sym sealed>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names12, CCP, RHO);
  // r20 = `!`(r19)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c3, c6)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L6(c7)
  // L6(c7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c7_;
  goto L6_;

D13_:;
  // deopt 51 [useSuperClasses]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_useSuperClasses;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L65_:;
  // useSuperClasses1 = force? useSuperClasses
  Rsh_Fir_reg_useSuperClasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useSuperClasses);
  // checkMissing(useSuperClasses1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_useSuperClasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(useSuperClasses1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_useSuperClasses1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c9 then L66() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L66()
    goto L66_;
  } else {
  // L7()
    goto L7_;
  }

L66_:;
  // sym3 = ldf names
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard3 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L67_:;
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r23 = dyn __2(<sym classDef>, <sym contains>)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names13, CCP, RHO);
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r24 = dyn names1(r23)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L69() else D14()
  // L69()
  goto L69_;

L68_:;
  // r21 = dyn base3(<lang `@`(classDef, contains)>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L8_;

D14_:;
  // deopt 58 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L8(r24)
  // L8(r24)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r24_;
  goto L8_;

D15_:;
  // deopt 60 [superClasses]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_superClasses;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L70_:;
  // superClasses1 = force? superClasses
  Rsh_Fir_reg_superClasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superClasses);
  // checkMissing(superClasses1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_superClasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(superClasses1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_superClasses1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c10 then L71() else L72(superClasses1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L71()
    goto L71_;
  } else {
  // L72(superClasses1)
    Rsh_Fir_reg_superClasses3_ = Rsh_Fir_reg_superClasses1_;
    goto L72_;
  }

L71_:;
  // dr2 = tryDispatchBuiltin.1("[", superClasses1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_superClasses1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc1 then L73() else L72(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L73()
    goto L73_;
  } else {
  // L72(dr2)
    Rsh_Fir_reg_superClasses3_ = Rsh_Fir_reg_dr2_;
    goto L72_;
  }

L72_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard4 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L73_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

L74_:;
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard5 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L75_:;
  // r25 = dyn base4(<lang match(superClasses, classes)>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(superClasses3, r25)
  // L10(superClasses3, r25)
  Rsh_Fir_reg_superClasses6_ = Rsh_Fir_reg_superClasses3_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L10_;

L76_:;
  // superClasses10 = ld superClasses
  Rsh_Fir_reg_superClasses10_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L78() else D16()
  // L78()
  goto L78_;

L77_:;
  // r27 = dyn base5(<sym superClasses>, <sym classes>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L11(superClasses3, r27)
  // L11(superClasses3, r27)
  Rsh_Fir_reg_superClasses9_ = Rsh_Fir_reg_superClasses3_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L11_;

D16_:;
  // deopt 66 [superClasses3, superClasses10]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_superClasses3_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_superClasses10_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L78_:;
  // superClasses11 = force? superClasses10
  Rsh_Fir_reg_superClasses11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superClasses10_);
  // checkMissing(superClasses11)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_superClasses11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // classes = ld classes
  Rsh_Fir_reg_classes = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L79() else D17()
  // L79()
  goto L79_;

D17_:;
  // deopt 68 [superClasses3, classes]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_superClasses3_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_classes;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L79_:;
  // classes1 = force? classes
  Rsh_Fir_reg_classes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes);
  // checkMissing(classes1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_classes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r29 = dyn match(superClasses11, classes1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args78[4];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_superClasses11_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_classes1_;
  Rsh_Fir_array_args78[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args78[3] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L80() else D18()
  // L80()
  goto L80_;

D18_:;
  // deopt 73 [superClasses3, r29]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_superClasses3_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L11(superClasses3, r29)
  // L11(superClasses3, r29)
  Rsh_Fir_reg_superClasses9_ = Rsh_Fir_reg_superClasses3_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L11_;

D19_:;
  // deopt 75 [superClasses9, r30]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_superClasses9_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L81_:;
  // goto L10(superClasses9, r30)
  // L10(superClasses9, r30)
  Rsh_Fir_reg_superClasses6_ = Rsh_Fir_reg_superClasses9_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r30_;
  goto L10_;

L82_:;
  // classes2 = ld classes
  Rsh_Fir_reg_classes2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L84() else D20()
  // L84()
  goto L84_;

L83_:;
  // r33 = dyn base6(<sym classes>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L12_;

D20_:;
  // deopt 80 [classes2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_classes2_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L84_:;
  // classes3 = force? classes2
  Rsh_Fir_reg_classes3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes2_);
  // checkMissing(classes3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_classes3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r35 = seq_along(classes3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_classes3_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L12_;

L85_:;
  // goto L4()
  // L4()
  goto L4_;

D21_:;
  // deopt 83 [i2, classes4]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_classes4_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L86_:;
  // classes5 = force? classes4
  Rsh_Fir_reg_classes5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes4_);
  // checkMissing(classes5)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_classes5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(classes5)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_classes5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c12 then L87() else L88(i2, classes5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L87()
    goto L87_;
  } else {
  // L88(i2, classes5)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_classes7_ = Rsh_Fir_reg_classes5_;
    goto L88_;
  }

L87_:;
  // dr4 = tryDispatchBuiltin.1("[[", classes5)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_classes5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc2 then L89() else L88(i2, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L89()
    goto L89_;
  } else {
  // L88(i2, dr4)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_classes7_ = Rsh_Fir_reg_dr4_;
    goto L88_;
  }

L88_:;
  // which = ld which
  Rsh_Fir_reg_which = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L90() else D22()
  // L90()
  goto L90_;

L89_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L14(i2, dx4)
  // L14(i2, dx4)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L14_;

D22_:;
  // deopt 85 [i6, classes7, which]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_classes7_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_which;
  Rsh_Fir_deopt(85, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L90_:;
  // which1 = force? which
  Rsh_Fir_reg_which1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r36 = dyn __4(classes7, which1)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_classes7_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_which1_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L14(i6, r36)
  // L14(i6, r36)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r36_;
  goto L14_;

L91_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L93() else D23()
  // L93()
  goto L93_;

L92_:;
  // r37 = dyn base7(<sym object>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L15(i8, r37)
  // L15(i8, r37)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L15_;

D23_:;
  // deopt 90 [i8, object1]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L93_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c13 = `==`(object2, NULL)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L15(i8, c13)
  // L15(i8, c13)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_c13_;
  goto L15_;

L94_:;
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L95() else D24()
  // L95()
  goto L95_;

D24_:;
  // deopt 94 [i11, c14]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L95_:;
  // p4 = prom<V +>{
  //   object3 = ld object;
  //   object4 = force? object3;
  //   checkMissing(object4);
  //   return object4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2881083477_4, CCP, RHO);
  // p5 = prom<V +>{
  //   tryClass = ld tryClass;
  //   tryClass1 = force? tryClass;
  //   checkMissing(tryClass1);
  //   return tryClass1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2881083477_5, CCP, RHO);
  // r41 = dyn is(p4, p5)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L96() else D25()
  // L96()
  goto L96_;

D25_:;
  // deopt 97 [i11, c14, r41]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L96_:;
  // c17 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // c18 = `||`(c14, c17)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L16(i11, c18)
  // L16(i11, c18)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c18_;
  goto L16_;

L98_:;
  // methods6 = ld methods
  Rsh_Fir_reg_methods6_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L99() else D26()
  // L99()
  goto L99_;

D26_:;
  // deopt 99 [i12, methods6]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_methods6_;
  Rsh_Fir_deopt(99, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L99_:;
  // methods7 = force? methods6
  Rsh_Fir_reg_methods7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methods6_);
  // checkMissing(methods7)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_methods7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(methods7)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_methods7_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c21 then L100() else L101(i12, methods7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L100()
    goto L100_;
  } else {
  // L101(i12, methods7)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_methods9_ = Rsh_Fir_reg_methods7_;
    goto L101_;
  }

L100_:;
  // dr6 = tryDispatchBuiltin.1("[[", methods7)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_methods7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc3 then L102() else L101(i12, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L102()
    goto L102_;
  } else {
  // L101(i12, dr6)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_methods9_ = Rsh_Fir_reg_dr6_;
    goto L101_;
  }

L101_:;
  // tryClass2 = ld tryClass
  Rsh_Fir_reg_tryClass2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L103() else D27()
  // L103()
  goto L103_;

L102_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L18(i12, dx6)
  // L18(i12, dx6)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L18_;

D27_:;
  // deopt 101 [i18, methods9, tryClass2]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_methods9_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_tryClass2_;
  Rsh_Fir_deopt(101, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L103_:;
  // tryClass3 = force? tryClass2
  Rsh_Fir_reg_tryClass3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tryClass2_);
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r42 = dyn __5(methods9, tryClass3)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_methods9_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_tryClass3_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L18(i18, r42)
  // L18(i18, r42)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r42_;
  goto L18_;

L104_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l1, dx7)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args102);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if dc4 then L106() else L105(i20, dx7, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L106()
    goto L106_;
  } else {
  // L105(i20, dx7, dr8)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr8_;
    goto L105_;
  }

L105_:;
  // tryClass4 = ld tryClass
  Rsh_Fir_reg_tryClass4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L107() else D28()
  // L107()
  goto L107_;

L106_:;
  // dx11 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L19(i20, dx7, dx11)
  // L19(i20, dx7, dx11)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
  goto L19_;

D28_:;
  // deopt 105 [i22, dx9, l3, dx7, tryClass4]
  SEXP Rsh_Fir_array_deopt_stack24[5];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_tryClass4_;
  Rsh_Fir_deopt(105, 5, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L107_:;
  // tryClass5 = force? tryClass4
  Rsh_Fir_reg_tryClass5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tryClass4_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r43 = dyn ____(l3, dx7, tryClass5)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args105[2] = Rsh_Fir_reg_tryClass5_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L19(i22, dx9, r43)
  // L19(i22, dx9, r43)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r43_;
  goto L19_;

L110_:;
  // classes8 = ld classes
  Rsh_Fir_reg_classes8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L112() else D29()
  // L112()
  goto L112_;

L111_:;
  // r44 = dyn base8(<sym classes>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L22(r44)
  // L22(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L22_;

D29_:;
  // deopt 115 [classes8]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_classes8_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L112_:;
  // classes9 = force? classes8
  Rsh_Fir_reg_classes9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes8_);
  // checkMissing(classes9)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_classes9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // r46 = seq_along(classes9)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_classes9_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L22(r46)
  // L22(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L22_;

L113_:;
  // goto L4()
  // L4()
  goto L4_;

D30_:;
  // deopt 118 [i28, classes10]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_classes10_;
  Rsh_Fir_deopt(118, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L114_:;
  // classes11 = force? classes10
  Rsh_Fir_reg_classes11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_classes10_);
  // checkMissing(classes11)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_classes11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(classes11)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_classes11_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if c24 then L115() else L116(i28, classes11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L115()
    goto L115_;
  } else {
  // L116(i28, classes11)
    Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i28_;
    Rsh_Fir_reg_classes13_ = Rsh_Fir_reg_classes11_;
    goto L116_;
  }

L115_:;
  // dr10 = tryDispatchBuiltin.1("[[", classes11)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_classes11_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args111);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc5 then L117() else L116(i28, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L117()
    goto L117_;
  } else {
  // L116(i28, dr10)
    Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i28_;
    Rsh_Fir_reg_classes13_ = Rsh_Fir_reg_dr10_;
    goto L116_;
  }

L116_:;
  // which2 = ld which
  Rsh_Fir_reg_which2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L118() else D31()
  // L118()
  goto L118_;

L117_:;
  // dx15 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L24(i28, dx15)
  // L24(i28, dx15)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L24_;

D31_:;
  // deopt 120 [i32, classes13, which2]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_classes13_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_which2_;
  Rsh_Fir_deopt(120, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L118_:;
  // which3 = force? which2
  Rsh_Fir_reg_which3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which2_);
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r47 = dyn __6(classes13, which3)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_classes13_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_which3_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L24(i32, r47)
  // L24(i32, r47)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r47_;
  goto L24_;

D32_:;
  // deopt 125 [i34]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L119_:;
  // p6 = prom<V +>{
  //   tryClass6 = ld tryClass;
  //   tryClass7 = force? tryClass6;
  //   checkMissing(tryClass7);
  //   return tryClass7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2881083477_6, CCP, RHO);
  // p7 = prom<V +>{
  //   ev3 = ld ev;
  //   ev4 = force? ev3;
  //   checkMissing(ev4);
  //   return ev4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2881083477_7, CCP, RHO);
  // r50 = dyn getClassDef1(p6, p7)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClassDef1_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L120() else D33()
  // L120()
  goto L120_;

D33_:;
  // deopt 128 [i34, r50]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(128, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L120_:;
  // st tryClassDef = r50
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym9 = ldf `is.null`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base9 = ldf `is.null` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard9 then L121() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L121()
    goto L121_;
  } else {
  // L122()
    goto L122_;
  }

L121_:;
  // tryClassDef = ld tryClassDef
  Rsh_Fir_reg_tryClassDef = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L123() else D34()
  // L123()
  goto L123_;

L122_:;
  // r51 = dyn base9(<sym tryClassDef>)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L25(i34, r51)
  // L25(i34, r51)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L25_;

D34_:;
  // deopt 131 [i34, tryClassDef]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_tryClassDef;
  Rsh_Fir_deopt(131, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L123_:;
  // tryClassDef1 = force? tryClassDef
  Rsh_Fir_reg_tryClassDef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tryClassDef);
  // checkMissing(tryClassDef1)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_tryClassDef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // c25 = `==`(tryClassDef1, NULL)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_tryClassDef1_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L25(i34, c25)
  // L25(i34, c25)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_c25_;
  goto L25_;

L124_:;
  // sym10 = ldf `is.na`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base10 = ldf `is.na` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard10 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L125_:;
  // sym11 = ldf match
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base11 = ldf match in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args123);
  // if guard11 then L127() else L128()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L127()
    goto L127_;
  } else {
  // L128()
    goto L128_;
  }

L126_:;
  // r54 = dyn base10(<lang match(thisClass, names(`@`(tryClassDef, subclasses)))>)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L27(i37, c26, r54)
  // L27(i37, c26, r54)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L27_;

L127_:;
  // thisClass5 = ld thisClass
  Rsh_Fir_reg_thisClass5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L129() else D35()
  // L129()
  goto L129_;

L128_:;
  // r56 = dyn base11(<sym thisClass>, <lang names(`@`(tryClassDef, subclasses))>)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L28(i37, c26, r56)
  // L28(i37, c26, r56)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L28_;

D35_:;
  // deopt 139 [i37, c26, thisClass5]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_thisClass5_;
  Rsh_Fir_deopt(139, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L129_:;
  // thisClass6 = force? thisClass5
  Rsh_Fir_reg_thisClass6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_thisClass5_);
  // checkMissing(thisClass6)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_thisClass6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // sym12 = ldf names
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base12 = ldf names in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args127);
  // if guard12 then L130() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L130()
    goto L130_;
  } else {
  // L131()
    goto L131_;
  }

L130_:;
  // __7 = ldf `@` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r60 = dyn __7(<sym tryClassDef>, <sym subclasses>)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args128[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names31, CCP, RHO);
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r61 = dyn names2(r60)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L132() else D36()
  // L132()
  goto L132_;

L131_:;
  // r58 = dyn base12(<lang `@`(tryClassDef, subclasses)>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L29(i37, c26, r58)
  // L29(i37, c26, r58)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L29_;

D36_:;
  // deopt 146 [i37, c26, r61]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(146, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L132_:;
  // goto L29(i37, c26, r61)
  // L29(i37, c26, r61)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r61_;
  goto L29_;

D37_:;
  // deopt 150 [i48, c37, r62]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(150, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L133_:;
  // goto L28(i48, c37, r62)
  // L28(i48, c37, r62)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r62_;
  goto L28_;

D38_:;
  // deopt 152 [i45, c34, r63]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(152, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L134_:;
  // goto L27(i45, c34, r63)
  // L27(i45, c34, r63)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i45_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r63_;
  goto L27_;

L136_:;
  // methods10 = ld methods
  Rsh_Fir_reg_methods10_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L137() else D39()
  // L137()
  goto L137_;

D39_:;
  // deopt 155 [i39, methods10]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_methods10_;
  Rsh_Fir_deopt(155, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L137_:;
  // methods11 = force? methods10
  Rsh_Fir_reg_methods11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methods10_);
  // checkMissing(methods11)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_methods11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c42 = `is.object`(methods11)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_methods11_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c42 then L138() else L139(i39, methods11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L138()
    goto L138_;
  } else {
  // L139(i39, methods11)
    Rsh_Fir_reg_i53_ = Rsh_Fir_reg_i39_;
    Rsh_Fir_reg_methods13_ = Rsh_Fir_reg_methods11_;
    goto L139_;
  }

L138_:;
  // dr12 = tryDispatchBuiltin.1("[[", methods11)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_methods11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc6 then L140() else L139(i39, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L140()
    goto L140_;
  } else {
  // L139(i39, dr12)
    Rsh_Fir_reg_i53_ = Rsh_Fir_reg_i39_;
    Rsh_Fir_reg_methods13_ = Rsh_Fir_reg_dr12_;
    goto L139_;
  }

L139_:;
  // which4 = ld which
  Rsh_Fir_reg_which4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L141() else D40()
  // L141()
  goto L141_;

L140_:;
  // dx17 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L31(i39, dx17)
  // L31(i39, dx17)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L31_;

D40_:;
  // deopt 157 [i53, methods13, which4]
  SEXP Rsh_Fir_array_deopt_stack36[3];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i53_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_methods13_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_which4_;
  Rsh_Fir_deopt(157, 3, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L141_:;
  // which5 = force? which4
  Rsh_Fir_reg_which5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which4_);
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r65 = dyn __8(methods13, which5)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_methods13_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_which5_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L31(i53, r65)
  // L31(i53, r65)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i53_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r65_;
  goto L31_;

L142_:;
  // dr14 = tryDispatchBuiltin.0("[[<-", l5, dx18)
  SEXP Rsh_Fir_array_args137[3];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args137[2] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args137);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // if dc7 then L144() else L143(i55, dx18, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L144()
    goto L144_;
  } else {
  // L143(i55, dx18, dr14)
    Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i55_;
    Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx18_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr14_;
    goto L143_;
  }

L143_:;
  // tryClass8 = ld tryClass
  Rsh_Fir_reg_tryClass8_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L145() else D41()
  // L145()
  goto L145_;

L144_:;
  // dx22 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L32(i55, dx18, dx22)
  // L32(i55, dx18, dx22)
  Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx22_;
  goto L32_;

D41_:;
  // deopt 161 [i57, dx20, l7, dx18, tryClass8]
  SEXP Rsh_Fir_array_deopt_stack37[5];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i57_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_deopt_stack37[4] = Rsh_Fir_reg_tryClass8_;
  Rsh_Fir_deopt(161, 5, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L145_:;
  // tryClass9 = force? tryClass8
  Rsh_Fir_reg_tryClass9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tryClass8_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r66 = dyn ____1(l7, dx18, tryClass9)
  SEXP Rsh_Fir_array_args140[3];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_args140[2] = Rsh_Fir_reg_tryClass9_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L32(i57, dx20, r66)
  // L32(i57, dx20, r66)
  Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i57_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r66_;
  goto L32_;

L147_:;
  // defaultMethod = ld defaultMethod
  Rsh_Fir_reg_defaultMethod = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L149() else D42()
  // L149()
  goto L149_;

L148_:;
  // r67 = dyn base13(<sym defaultMethod>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L35(r67)
  // L35(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L35_;

D42_:;
  // deopt 171 [defaultMethod]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_defaultMethod;
  Rsh_Fir_deopt(171, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L149_:;
  // defaultMethod1 = force? defaultMethod
  Rsh_Fir_reg_defaultMethod1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultMethod);
  // checkMissing(defaultMethod1)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_defaultMethod1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // c44 = `==`(defaultMethod1, NULL)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_defaultMethod1_;
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // goto L35(c44)
  // L35(c44)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_c44_;
  goto L35_;

L150_:;
  // defaultMethod2 = ld defaultMethod
  Rsh_Fir_reg_defaultMethod2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L151() else D43()
  // L151()
  goto L151_;

D43_:;
  // deopt 175 [defaultMethod2]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_defaultMethod2_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L151_:;
  // defaultMethod3 = force? defaultMethod2
  Rsh_Fir_reg_defaultMethod3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultMethod2_);
  // checkMissing(defaultMethod3)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_defaultMethod3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // l8 = ld value
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c46 = `is.object`(l8)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if c46 then L152() else L153(defaultMethod3, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L152()
    goto L152_;
  } else {
  // L153(defaultMethod3, l8)
    Rsh_Fir_reg_defaultMethod5_ = Rsh_Fir_reg_defaultMethod3_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L153_;
  }

L152_:;
  // dr16 = tryDispatchBuiltin.0("[[<-", l8, defaultMethod3)
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args146[2] = Rsh_Fir_reg_defaultMethod3_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args146);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // if dc8 then L154() else L153(defaultMethod3, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L154()
    goto L154_;
  } else {
  // L153(defaultMethod3, dr16)
    Rsh_Fir_reg_defaultMethod5_ = Rsh_Fir_reg_defaultMethod3_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr16_;
    goto L153_;
  }

L153_:;
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r70 = dyn ____2(l10, defaultMethod3, "ANY")
  SEXP Rsh_Fir_array_args148[3];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_defaultMethod3_;
  Rsh_Fir_array_args148[2] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L37(defaultMethod5, r70)
  // L37(defaultMethod5, r70)
  Rsh_Fir_reg_defaultMethod7_ = Rsh_Fir_reg_defaultMethod5_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r70_;
  goto L37_;

L154_:;
  // dx26 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // goto L37(defaultMethod3, dx26)
  // L37(defaultMethod3, dx26)
  Rsh_Fir_reg_defaultMethod7_ = Rsh_Fir_reg_defaultMethod3_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L37_;

D44_:;
  // deopt 184 [value]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(184, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L156_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner2881083477_(SEXP CCP, SEXP RHO) {
  // mlist1 = ld mlist
  Rsh_Fir_reg_mlist1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // mlist2 = force? mlist1
  Rsh_Fir_reg_mlist2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mlist1_);
  // checkMissing(mlist2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_mlist2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return mlist2
  return Rsh_Fir_reg_mlist2_;
}
SEXP Rsh_Fir_user_promise_inner2881083477_1(SEXP CCP, SEXP RHO) {
  // thisClass1 = ld thisClass
  Rsh_Fir_reg_thisClass1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // thisClass2 = force? thisClass1
  Rsh_Fir_reg_thisClass2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_thisClass1_);
  // checkMissing(thisClass2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_thisClass2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return thisClass2
  return Rsh_Fir_reg_thisClass2_;
}
SEXP Rsh_Fir_user_promise_inner2881083477_2(SEXP CCP, SEXP RHO) {
  // thisClass3 = ld thisClass
  Rsh_Fir_reg_thisClass3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // thisClass4 = force? thisClass3
  Rsh_Fir_reg_thisClass4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_thisClass3_);
  // checkMissing(thisClass4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_thisClass4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return thisClass4
  return Rsh_Fir_reg_thisClass4_;
}
SEXP Rsh_Fir_user_promise_inner2881083477_3(SEXP CCP, SEXP RHO) {
  // ev1 = ld ev
  Rsh_Fir_reg_ev1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // ev2 = force? ev1
  Rsh_Fir_reg_ev2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ev1_);
  // checkMissing(ev2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_ev2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return ev2
  return Rsh_Fir_reg_ev2_;
}
SEXP Rsh_Fir_user_promise_inner2881083477_4(SEXP CCP, SEXP RHO) {
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return object4
  return Rsh_Fir_reg_object4_;
}
SEXP Rsh_Fir_user_promise_inner2881083477_5(SEXP CCP, SEXP RHO) {
  // tryClass = ld tryClass
  Rsh_Fir_reg_tryClass = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // tryClass1 = force? tryClass
  Rsh_Fir_reg_tryClass1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tryClass);
  // checkMissing(tryClass1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_tryClass1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return tryClass1
  return Rsh_Fir_reg_tryClass1_;
}
SEXP Rsh_Fir_user_promise_inner2881083477_6(SEXP CCP, SEXP RHO) {
  // tryClass6 = ld tryClass
  Rsh_Fir_reg_tryClass6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // tryClass7 = force? tryClass6
  Rsh_Fir_reg_tryClass7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tryClass6_);
  // checkMissing(tryClass7)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_tryClass7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // return tryClass7
  return Rsh_Fir_reg_tryClass7_;
}
SEXP Rsh_Fir_user_promise_inner2881083477_7(SEXP CCP, SEXP RHO) {
  // ev3 = ld ev
  Rsh_Fir_reg_ev3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // ev4 = force? ev3
  Rsh_Fir_reg_ev4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ev3_);
  // checkMissing(ev4)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_ev4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // return ev4
  return Rsh_Fir_reg_ev4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
