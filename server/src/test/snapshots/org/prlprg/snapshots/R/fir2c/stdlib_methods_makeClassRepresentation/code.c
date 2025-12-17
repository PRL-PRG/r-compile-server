#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner266774232_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner266774232_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner266774232_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_20(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_21(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_22(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_23(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_24(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_25(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_26(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_27(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_28(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_29(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_30(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_31(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_32(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_33(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_34(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_35(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_36(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_37(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_38(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_39(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_40(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_41(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner266774232_42(SEXP CCP, SEXP RHO);
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
  // r = clos inner266774232
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner266774232_, RHO, CCP);
  // st makeClassRepresentation = r
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
SEXP Rsh_Fir_user_function_inner266774232_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner266774232 dynamic dispatch ([name, slots, superClasses, prototype, package, validity, access, version, sealed, virtual, where])

  return Rsh_Fir_user_version_inner266774232_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner266774232_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner266774232 version 0 (*, *, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 11) Rsh_error("FIŘ arity mismatch for inner266774232/0: expected 11, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_slots;  // slots
  SEXP Rsh_Fir_reg_superClasses;  // superClasses
  SEXP Rsh_Fir_reg_prototype;  // prototype
  SEXP Rsh_Fir_reg_package;  // package
  SEXP Rsh_Fir_reg_validity;  // validity
  SEXP Rsh_Fir_reg_access;  // access
  SEXP Rsh_Fir_reg_version;  // version
  SEXP Rsh_Fir_reg_sealed;  // sealed
  SEXP Rsh_Fir_reg_virtual;  // virtual
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_slots_isMissing;  // slots_isMissing
  SEXP Rsh_Fir_reg_slots_orDefault;  // slots_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_superClasses_isMissing;  // superClasses_isMissing
  SEXP Rsh_Fir_reg_superClasses_orDefault;  // superClasses_orDefault
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_prototype_isMissing;  // prototype_isMissing
  SEXP Rsh_Fir_reg_prototype_orDefault;  // prototype_orDefault
  SEXP Rsh_Fir_reg_validity_isMissing;  // validity_isMissing
  SEXP Rsh_Fir_reg_validity_orDefault;  // validity_orDefault
  SEXP Rsh_Fir_reg_access_isMissing;  // access_isMissing
  SEXP Rsh_Fir_reg_access_orDefault;  // access_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_version_isMissing;  // version_isMissing
  SEXP Rsh_Fir_reg_version_orDefault;  // version_orDefault
  SEXP Rsh_Fir_reg__newExternalptr;  // _newExternalptr
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sealed_isMissing;  // sealed_isMissing
  SEXP Rsh_Fir_reg_sealed_orDefault;  // sealed_orDefault
  SEXP Rsh_Fir_reg_virtual_isMissing;  // virtual_isMissing
  SEXP Rsh_Fir_reg_virtual_orDefault;  // virtual_orDefault
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_superClasses1_;  // superClasses1
  SEXP Rsh_Fir_reg_superClasses2_;  // superClasses2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg__AbnormalTypes;  // _AbnormalTypes
  SEXP Rsh_Fir_reg__AbnormalTypes1_;  // _AbnormalTypes1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__addAbnormalDataType;  // _addAbnormalDataType
  SEXP Rsh_Fir_reg_superClasses3_;  // superClasses3
  SEXP Rsh_Fir_reg_superClasses4_;  // superClasses4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_prototype1_;  // prototype1
  SEXP Rsh_Fir_reg_prototype2_;  // prototype2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_slots1_;  // slots1
  SEXP Rsh_Fir_reg_slots2_;  // slots2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_superClasses5_;  // superClasses5
  SEXP Rsh_Fir_reg_superClasses6_;  // superClasses6
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_reconcilePropertiesAndPrototype;  // reconcilePropertiesAndPrototype
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_slots3_;  // slots3
  SEXP Rsh_Fir_reg_slots4_;  // slots4
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_prototype3_;  // prototype3
  SEXP Rsh_Fir_reg_prototype4_;  // prototype4
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_superClasses7_;  // superClasses7
  SEXP Rsh_Fir_reg_superClasses8_;  // superClasses8
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_pp;  // pp
  SEXP Rsh_Fir_reg_pp1_;  // pp1
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_pp3_;  // pp3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_pp4_;  // pp4
  SEXP Rsh_Fir_reg_pp5_;  // pp5
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_pp7_;  // pp7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_list2_;  // list2
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_package1_;  // package1
  SEXP Rsh_Fir_reg_package2_;  // package2
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_package3_;  // package3
  SEXP Rsh_Fir_reg_package4_;  // package4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_packageSlot__;  // packageSlot__
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_superClasses9_;  // superClasses9
  SEXP Rsh_Fir_reg_superClasses10_;  // superClasses10
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_is;  // is
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_what2_;  // what2
  SEXP Rsh_Fir_reg_what3_;  // what3
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_what4_;  // what4
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_packageSlot;  // packageSlot
  SEXP Rsh_Fir_reg_what5_;  // what5
  SEXP Rsh_Fir_reg_what6_;  // what6
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_getClass;  // getClass
  SEXP Rsh_Fir_reg_what7_;  // what7
  SEXP Rsh_Fir_reg_what8_;  // what8
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_getClass1_;  // getClass1
  SEXP Rsh_Fir_reg_what9_;  // what9
  SEXP Rsh_Fir_reg_what10_;  // what10
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_makeExtends;  // makeExtends
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_slots5_;  // slots5
  SEXP Rsh_Fir_reg_slots6_;  // slots6
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_whatClassDef;  // whatClassDef
  SEXP Rsh_Fir_reg_whatClassDef1_;  // whatClassDef1
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_package6_;  // package6
  SEXP Rsh_Fir_reg_package7_;  // package7
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_what11_;  // what11
  SEXP Rsh_Fir_reg_what12_;  // what12
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg__makeValidityMethod;  // _makeValidityMethod
  SEXP Rsh_Fir_reg_name5_;  // name5
  SEXP Rsh_Fir_reg_name6_;  // name6
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_validity1_;  // validity1
  SEXP Rsh_Fir_reg_validity2_;  // validity2
  SEXP Rsh_Fir_reg_p22_;  // p22
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_virtual1_;  // virtual1
  SEXP Rsh_Fir_reg_virtual2_;  // virtual2
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_testVirtual;  // testVirtual
  SEXP Rsh_Fir_reg_slots7_;  // slots7
  SEXP Rsh_Fir_reg_slots8_;  // slots8
  SEXP Rsh_Fir_reg_p23_;  // p23
  SEXP Rsh_Fir_reg_contains;  // contains
  SEXP Rsh_Fir_reg_contains1_;  // contains1
  SEXP Rsh_Fir_reg_p24_;  // p24
  SEXP Rsh_Fir_reg_prototype5_;  // prototype5
  SEXP Rsh_Fir_reg_prototype6_;  // prototype6
  SEXP Rsh_Fir_reg_p25_;  // p25
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_p26_;  // p26
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_virtual3_;  // virtual3
  SEXP Rsh_Fir_reg_virtual4_;  // virtual4
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_superClasses11_;  // superClasses11
  SEXP Rsh_Fir_reg_superClasses12_;  // superClasses12
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_prototype7_;  // prototype7
  SEXP Rsh_Fir_reg_prototype8_;  // prototype8
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_name7_;  // name7
  SEXP Rsh_Fir_reg_name8_;  // name8
  SEXP Rsh_Fir_reg__BasicClasses;  // _BasicClasses
  SEXP Rsh_Fir_reg__BasicClasses1_;  // _BasicClasses1
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_is_na2_;  // is_na2
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg__asS4_;  // _asS4
  SEXP Rsh_Fir_reg_prototype9_;  // prototype9
  SEXP Rsh_Fir_reg_prototype10_;  // prototype10
  SEXP Rsh_Fir_reg_p27_;  // p27
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_slots9_;  // slots9
  SEXP Rsh_Fir_reg_slots10_;  // slots10
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_p28_;  // p28
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg__addS3Class;  // _addS3Class
  SEXP Rsh_Fir_reg_name9_;  // name9
  SEXP Rsh_Fir_reg_name10_;  // name10
  SEXP Rsh_Fir_reg_p29_;  // p29
  SEXP Rsh_Fir_reg_prototype11_;  // prototype11
  SEXP Rsh_Fir_reg_prototype12_;  // prototype12
  SEXP Rsh_Fir_reg_p30_;  // p30
  SEXP Rsh_Fir_reg_contains2_;  // contains2
  SEXP Rsh_Fir_reg_contains3_;  // contains3
  SEXP Rsh_Fir_reg_p31_;  // p31
  SEXP Rsh_Fir_reg_where7_;  // where7
  SEXP Rsh_Fir_reg_where8_;  // where8
  SEXP Rsh_Fir_reg_p32_;  // p32
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_newClassRepresentation;  // newClassRepresentation
  SEXP Rsh_Fir_reg_name11_;  // name11
  SEXP Rsh_Fir_reg_name12_;  // name12
  SEXP Rsh_Fir_reg_p33_;  // p33
  SEXP Rsh_Fir_reg_slots11_;  // slots11
  SEXP Rsh_Fir_reg_slots12_;  // slots12
  SEXP Rsh_Fir_reg_p34_;  // p34
  SEXP Rsh_Fir_reg_contains4_;  // contains4
  SEXP Rsh_Fir_reg_contains5_;  // contains5
  SEXP Rsh_Fir_reg_p35_;  // p35
  SEXP Rsh_Fir_reg_prototype13_;  // prototype13
  SEXP Rsh_Fir_reg_prototype14_;  // prototype14
  SEXP Rsh_Fir_reg_p36_;  // p36
  SEXP Rsh_Fir_reg_virtual5_;  // virtual5
  SEXP Rsh_Fir_reg_virtual6_;  // virtual6
  SEXP Rsh_Fir_reg_p37_;  // p37
  SEXP Rsh_Fir_reg_validity3_;  // validity3
  SEXP Rsh_Fir_reg_validity4_;  // validity4
  SEXP Rsh_Fir_reg_p38_;  // p38
  SEXP Rsh_Fir_reg_access1_;  // access1
  SEXP Rsh_Fir_reg_access2_;  // access2
  SEXP Rsh_Fir_reg_p39_;  // p39
  SEXP Rsh_Fir_reg_package8_;  // package8
  SEXP Rsh_Fir_reg_package9_;  // package9
  SEXP Rsh_Fir_reg_p40_;  // p40
  SEXP Rsh_Fir_reg_version1_;  // version1
  SEXP Rsh_Fir_reg_version2_;  // version2
  SEXP Rsh_Fir_reg_p41_;  // p41
  SEXP Rsh_Fir_reg_sealed1_;  // sealed1
  SEXP Rsh_Fir_reg_sealed2_;  // sealed2
  SEXP Rsh_Fir_reg_p42_;  // p42
  SEXP Rsh_Fir_reg_r125_;  // r125

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_slots = PARAMS[1];
  Rsh_Fir_reg_superClasses = PARAMS[2];
  Rsh_Fir_reg_prototype = PARAMS[3];
  Rsh_Fir_reg_package = PARAMS[4];
  Rsh_Fir_reg_validity = PARAMS[5];
  Rsh_Fir_reg_access = PARAMS[6];
  Rsh_Fir_reg_version = PARAMS[7];
  Rsh_Fir_reg_sealed = PARAMS[8];
  Rsh_Fir_reg_virtual = PARAMS[9];
  Rsh_Fir_reg_where = PARAMS[10];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // slots_isMissing = missing.0(slots)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_slots;
  Rsh_Fir_reg_slots_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if slots_isMissing then L0() else L1(slots)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_slots_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(slots)
    Rsh_Fir_reg_slots_orDefault = Rsh_Fir_reg_slots;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   list = ldf list in base;
  //   r2 = dyn list();
  //   goto L0(r2);
  // L2():
  //   r = dyn base();
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_slots_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st slots = slots_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_slots_orDefault, RHO);
  (void)(Rsh_Fir_reg_slots_orDefault);
  // superClasses_isMissing = missing.0(superClasses)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_superClasses;
  Rsh_Fir_reg_superClasses_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if superClasses_isMissing then L2() else L3(superClasses)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_superClasses_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(superClasses)
    Rsh_Fir_reg_superClasses_orDefault = Rsh_Fir_reg_superClasses;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   character = ldf character;
  //   r4 = dyn character();
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_1, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_superClasses_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st superClasses = superClasses_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_superClasses_orDefault, RHO);
  (void)(Rsh_Fir_reg_superClasses_orDefault);
  // prototype_isMissing = missing.0(prototype)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_prototype;
  Rsh_Fir_reg_prototype_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if prototype_isMissing then L4(NULL) else L4(prototype)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_prototype_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_prototype_orDefault = Rsh_const(CCP, 6);
    goto L4_;
  } else {
  // L4(prototype)
    Rsh_Fir_reg_prototype_orDefault = Rsh_Fir_reg_prototype;
    goto L4_;
  }

L4_:;
  // st prototype = prototype_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_prototype_orDefault, RHO);
  (void)(Rsh_Fir_reg_prototype_orDefault);
  // st package = package
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_package, RHO);
  (void)(Rsh_Fir_reg_package);
  // validity_isMissing = missing.0(validity)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_validity;
  Rsh_Fir_reg_validity_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if validity_isMissing then L5(NULL) else L5(validity)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_validity_isMissing)) {
  // L5(NULL)
    Rsh_Fir_reg_validity_orDefault = Rsh_const(CCP, 6);
    goto L5_;
  } else {
  // L5(validity)
    Rsh_Fir_reg_validity_orDefault = Rsh_Fir_reg_validity;
    goto L5_;
  }

L5_:;
  // st validity = validity_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_validity_orDefault, RHO);
  (void)(Rsh_Fir_reg_validity_orDefault);
  // access_isMissing = missing.0(access)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_access;
  Rsh_Fir_reg_access_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if access_isMissing then L6() else L7(access)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_access_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(access)
    Rsh_Fir_reg_access_orDefault = Rsh_Fir_reg_access;
    goto L7_;
  }

L6_:;
  // p2 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   list1 = ldf list in base;
  //   r8 = dyn list1();
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1();
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_2, CCP, RHO);
  // goto L7(p2)
  // L7(p2)
  Rsh_Fir_reg_access_orDefault = Rsh_Fir_reg_p2_;
  goto L7_;

L7_:;
  // st access = access_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_access_orDefault, RHO);
  (void)(Rsh_Fir_reg_access_orDefault);
  // version_isMissing = missing.0(version)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_version;
  Rsh_Fir_reg_version_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if version_isMissing then L8() else L9(version)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_version_isMissing)) {
  // L8()
    goto L8_;
  } else {
  // L9(version)
    Rsh_Fir_reg_version_orDefault = Rsh_Fir_reg_version;
    goto L9_;
  }

L8_:;
  // p3 = prom<V +>{
  //   _newExternalptr = ldf `.newExternalptr`;
  //   r10 = dyn _newExternalptr();
  //   return r10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_3, CCP, RHO);
  // goto L9(p3)
  // L9(p3)
  Rsh_Fir_reg_version_orDefault = Rsh_Fir_reg_p3_;
  goto L9_;

L9_:;
  // st version = version_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_version_orDefault, RHO);
  (void)(Rsh_Fir_reg_version_orDefault);
  // sealed_isMissing = missing.0(sealed)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sealed;
  Rsh_Fir_reg_sealed_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if sealed_isMissing then L10(FALSE) else L10(sealed)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sealed_isMissing)) {
  // L10(FALSE)
    Rsh_Fir_reg_sealed_orDefault = Rsh_const(CCP, 13);
    goto L10_;
  } else {
  // L10(sealed)
    Rsh_Fir_reg_sealed_orDefault = Rsh_Fir_reg_sealed;
    goto L10_;
  }

L10_:;
  // st sealed = sealed_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_sealed_orDefault, RHO);
  (void)(Rsh_Fir_reg_sealed_orDefault);
  // virtual_isMissing = missing.0(virtual)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_virtual;
  Rsh_Fir_reg_virtual_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if virtual_isMissing then L11(NA_LGL) else L11(virtual)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_virtual_isMissing)) {
  // L11(NA_LGL)
    Rsh_Fir_reg_virtual_orDefault = Rsh_const(CCP, 15);
    goto L11_;
  } else {
  // L11(virtual)
    Rsh_Fir_reg_virtual_orDefault = Rsh_Fir_reg_virtual;
    goto L11_;
  }

L11_:;
  // st virtual = virtual_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_virtual_orDefault, RHO);
  (void)(Rsh_Fir_reg_virtual_orDefault);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard2 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L12_:;
  // c = `as.logical`(r13)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c then L55() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L55()
    goto L55_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard3 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L15_:;
  // r23 = `!`(r22)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c2 then L16(c2) else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L16(c2)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c2_;
    goto L16_;
  } else {
  // L62()
    goto L62_;
  }

L16_:;
  // c11 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c11 then L18(c11) else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L18(c11)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c11_;
    goto L18_;
  } else {
  // L68()
    goto L68_;
  }

L17_:;
  // c8 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c9 = `||`(c7, c8)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L16(c9)
  // L16(c9)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c9_;
  goto L16_;

L18_:;
  // c20 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c20 then L74() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L74()
    goto L74_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // c17 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c18 = `||`(c16, c17)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L18(c18)
  // L18(c18)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c18_;
  goto L18_;

L20_:;
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard6 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L22_:;
  // st contains = r39
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sym7 = ldf nzchar
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base7 = ldf nzchar in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard7 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L23_:;
  // c23 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c23 then L95() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L95()
    goto L95_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // superClasses9 = ld superClasses
  Rsh_Fir_reg_superClasses9_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L100() else D20()
  // L100()
  goto L100_;

L26_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // c24 = `<`.1(l1, i2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if c24 then L101() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L101()
    goto L101_;
  } else {
  // L32()
    goto L32_;
  }

L27_:;
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard8 then L107() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L107()
    goto L107_;
  } else {
  // L108()
    goto L108_;
  }

L28_:;
  // st whatClassDef = what4
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_what4_, RHO);
  (void)(Rsh_Fir_reg_what4_);
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r56 = dyn __(<sym whatClassDef>, <sym className>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names, CCP, RHO);
  // st what = r56
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // makeExtends = ldf makeExtends
  Rsh_Fir_reg_makeExtends = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L117() else D30()
  // L117()
  goto L117_;

L29_:;
  // c27 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c27 then L111() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L111()
    goto L111_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // getClass1 = ldf getClass
  Rsh_Fir_reg_getClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L115() else D28()
  // L115()
  goto L115_;

L31_:;
  // st contains = dx6
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // goto L26(i16)
  // L26(i16)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i16_;
  goto L26_;

L32_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args29[4];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // st what = x
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // is = ldf is
  Rsh_Fir_reg_is = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L102() else D21()
  // L102()
  goto L102_;

L33_:;
  // c29 = `as.logical`(r71)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c29 then L129() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L129()
    goto L129_;
  } else {
  // L34()
    goto L34_;
  }

L34_:;
  // goto L41()
  // L41()
  goto L41_;

L35_:;
  // c42 = `as.logical`(c32)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c42 then L142() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L142()
    goto L142_;
  } else {
  // L38()
    goto L38_;
  }

L36_:;
  // r84 = `!`(r79)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c39 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c40 = `&&`(c35, c39)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L35(c40)
  // L35(c40)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c40_;
  goto L35_;

L37_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r83 = dyn is_na1(r81)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L140() else D42()
  // L140()
  goto L140_;

L38_:;
  // goto L40(NULL)
  // L40(NULL)
  Rsh_Fir_reg_r90_ = Rsh_const(CCP, 6);
  goto L40_;

L39_:;
  // st contains = dx8
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // goto L40(r88)
  // L40(r88)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r88_;
  goto L40_;

L40_:;
  // goto L41()
  // L41()
  goto L41_;

L41_:;
  // sym12 = ldf `is.null`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base12 = ldf `is.null` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard12 then L148() else L149()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L148()
    goto L148_;
  } else {
  // L149()
    goto L149_;
  }

L42_:;
  // r94 = `!`(r93)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // c45 = `as.logical`(r94)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c45 then L151() else L43(c45)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L151()
    goto L151_;
  } else {
  // L43(c45)
    Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c45_;
    goto L43_;
  }

L43_:;
  // c57 = `as.logical`(c47)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c57 then L161() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L161()
    goto L161_;
  } else {
  // L46()
    goto L46_;
  }

L44_:;
  // c54 = `as.logical`(r96)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // c55 = `&&`(c50, c54)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_c54_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L43(c55)
  // L43(c55)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c55_;
  goto L43_;

L45_:;
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r100 = dyn is_na2(r98)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L159() else D47()
  // L159()
  goto L159_;

L46_:;
  // goto L47()
  // L47()
  goto L47_;

L47_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L165() else D50()
  // L165()
  goto L165_;

L48_:;
  // goto L49()
  // L49()
  goto L49_;

L49_:;
  // newClassRepresentation = ldf newClassRepresentation
  Rsh_Fir_reg_newClassRepresentation = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L171() else D54()
  // L171()
  goto L171_;

L50_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L52() else D0()
  // L52()
  goto L52_;

L51_:;
  // r12 = dyn base2(<lang `%in%`(superClasses, .AbnormalTypes)>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L12(r12)
  // L12(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L12_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p4 = prom<V +>{
  //   superClasses1 = ld superClasses;
  //   superClasses2 = force? superClasses1;
  //   checkMissing(superClasses2);
  //   return superClasses2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_4, CCP, RHO);
  // p5 = prom<V +>{
  //   _AbnormalTypes = ld `.AbnormalTypes`;
  //   _AbnormalTypes1 = force? _AbnormalTypes;
  //   checkMissing(_AbnormalTypes1);
  //   return _AbnormalTypes1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_5, CCP, RHO);
  // r16 = dyn _in_(p4, p5)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L53() else D1()
  // L53()
  goto L53_;

D1_:;
  // deopt 6 [r16]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L53_:;
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r17 = dyn any(r16)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L54() else D2()
  // L54()
  goto L54_;

D2_:;
  // deopt 8 [r17]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L12(r17)
  // L12(r17)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r17_;
  goto L12_;

L55_:;
  // _addAbnormalDataType = ldf `.addAbnormalDataType`
  Rsh_Fir_reg__addAbnormalDataType = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L56() else D3()
  // L56()
  goto L56_;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p6 = prom<V +>{
  //   superClasses3 = ld superClasses;
  //   superClasses4 = force? superClasses3;
  //   checkMissing(superClasses4);
  //   return superClasses4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_6, CCP, RHO);
  // r19 = dyn _addAbnormalDataType(p6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__addAbnormalDataType, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L57() else D4()
  // L57()
  goto L57_;

D4_:;
  // deopt 12 [r19]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L57_:;
  // st superClasses = r19
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // goto L14()
  // L14()
  goto L14_;

L59_:;
  // prototype1 = ld prototype
  Rsh_Fir_reg_prototype1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L61() else D5()
  // L61()
  goto L61_;

L60_:;
  // r21 = dyn base3(<sym prototype>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L15(r21)
  // L15(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L15_;

D5_:;
  // deopt 17 [prototype1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_prototype1_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L61_:;
  // prototype2 = force? prototype1
  Rsh_Fir_reg_prototype2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prototype1_);
  // checkMissing(prototype2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_prototype2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c1 = `==`(prototype2, NULL)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_prototype2_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L15(c1)
  // L15(c1)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_c1_;
  goto L15_;

L62_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard4 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // slots1 = ld slots
  Rsh_Fir_reg_slots1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L65() else D6()
  // L65()
  goto L65_;

L64_:;
  // r24 = dyn base4(<sym slots>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L17(c2, r24)
  // L17(c2, r24)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L17_;

D6_:;
  // deopt 23 [c2, slots1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_slots1_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L65_:;
  // slots2 = force? slots1
  Rsh_Fir_reg_slots2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slots1_);
  // checkMissing(slots2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_slots2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r26 = dyn length(slots2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_slots2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L66() else D7()
  // L66()
  goto L66_;

D7_:;
  // deopt 26 [c2, r26]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L17(c2, r26)
  // L17(c2, r26)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L17_;

L68_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard5 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L69_:;
  // superClasses5 = ld superClasses
  Rsh_Fir_reg_superClasses5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L71() else D8()
  // L71()
  goto L71_;

L70_:;
  // r27 = dyn base5(<sym superClasses>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L19(c11, r27)
  // L19(c11, r27)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L19_;

D8_:;
  // deopt 30 [c11, superClasses5]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_superClasses5_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L71_:;
  // superClasses6 = force? superClasses5
  Rsh_Fir_reg_superClasses6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superClasses5_);
  // checkMissing(superClasses6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_superClasses6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r29 = dyn length1(superClasses6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_superClasses6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L72() else D9()
  // L72()
  goto L72_;

D9_:;
  // deopt 33 [c11, r29]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L19(c11, r29)
  // L19(c11, r29)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L19_;

L74_:;
  // reconcilePropertiesAndPrototype = ldf reconcilePropertiesAndPrototype
  Rsh_Fir_reg_reconcilePropertiesAndPrototype = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L75() else D10()
  // L75()
  goto L75_;

D10_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p7 = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_7, CCP, RHO);
  // p8 = prom<V +>{
  //   slots3 = ld slots;
  //   slots4 = force? slots3;
  //   checkMissing(slots4);
  //   return slots4;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_8, CCP, RHO);
  // p9 = prom<V +>{
  //   prototype3 = ld prototype;
  //   prototype4 = force? prototype3;
  //   checkMissing(prototype4);
  //   return prototype4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_9, CCP, RHO);
  // p10 = prom<V +>{
  //   superClasses7 = ld superClasses;
  //   superClasses8 = force? superClasses7;
  //   checkMissing(superClasses8);
  //   return superClasses8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_10, CCP, RHO);
  // p11 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_11, CCP, RHO);
  // r35 = dyn reconcilePropertiesAndPrototype(p7, p8, p9, p10, p11)
  SEXP Rsh_Fir_array_args66[5];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args66[3] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args66[4] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names12[5];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reconcilePropertiesAndPrototype, 5, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L76() else D11()
  // L76()
  goto L76_;

D11_:;
  // deopt 42 [r35]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L76_:;
  // st pp = r35
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // pp = ld pp
  Rsh_Fir_reg_pp = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L77() else D12()
  // L77()
  goto L77_;

D12_:;
  // deopt 44 [pp]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_pp;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L77_:;
  // pp1 = force? pp
  Rsh_Fir_reg_pp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pp);
  // checkMissing(pp1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_pp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(pp1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_pp1_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c21 then L79() else L80(pp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L79()
    goto L79_;
  } else {
  // L80(pp1)
    Rsh_Fir_reg_pp3_ = Rsh_Fir_reg_pp1_;
    goto L80_;
  }

L78_:;
  // st slots = dx1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // pp4 = ld pp
  Rsh_Fir_reg_pp4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L82() else D13()
  // L82()
  goto L82_;

L79_:;
  // dr = tryDispatchBuiltin.1("$", pp1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_pp1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc then L81() else L80(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L81()
    goto L81_;
  } else {
  // L80(dr)
    Rsh_Fir_reg_pp3_ = Rsh_Fir_reg_dr;
    goto L80_;
  }

L80_:;
  // r36 = `$`(pp3, <sym properties>)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_pp3_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L78(r36)
  // L78(r36)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r36_;
  goto L78_;

L81_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L78(dx)
  // L78(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L78_;

D13_:;
  // deopt 48 [pp4]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_pp4_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L82_:;
  // pp5 = force? pp4
  Rsh_Fir_reg_pp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pp4_);
  // checkMissing(pp5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_pp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(pp5)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_pp5_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c22 then L84() else L85(pp5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L84()
    goto L84_;
  } else {
  // L85(pp5)
    Rsh_Fir_reg_pp7_ = Rsh_Fir_reg_pp5_;
    goto L85_;
  }

L83_:;
  // st prototype = dx3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L21()
  // L21()
  goto L21_;

L84_:;
  // dr2 = tryDispatchBuiltin.1("$", pp5)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_pp5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args75);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc1 then L86() else L85(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L86()
    goto L86_;
  } else {
  // L85(dr2)
    Rsh_Fir_reg_pp7_ = Rsh_Fir_reg_dr2_;
    goto L85_;
  }

L85_:;
  // r37 = `$`(pp7, <sym prototype>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_pp7_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L83(r37)
  // L83(r37)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r37_;
  goto L83_;

L86_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L83(dx2)
  // L83(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L83_;

L88_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r40 = dyn list2()
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 0, NULL, NULL, CCP, RHO);
  // check L90() else D14()
  // L90()
  goto L90_;

L89_:;
  // r38 = dyn base6()
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 0, NULL, NULL, CCP, RHO);
  // goto L22(r38)
  // L22(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L22_;

D14_:;
  // deopt 57 [r40]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L22(r40)
  // L22(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L22_;

L91_:;
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L93() else D15()
  // L93()
  goto L93_;

L92_:;
  // r41 = dyn base7(<sym package>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L23(r41)
  // L23(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L23_;

D15_:;
  // deopt 61 [package1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_package1_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L93_:;
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r43 = dyn nzchar(package2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_package2_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L94() else D16()
  // L94()
  goto L94_;

D16_:;
  // deopt 64 [r43]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L23(r43)
  // L23(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L23_;

L95_:;
  // package3 = ld package
  Rsh_Fir_reg_package3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L96() else D17()
  // L96()
  goto L96_;

D17_:;
  // deopt 65 [package3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_package3_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L96_:;
  // package4 = force? package3
  Rsh_Fir_reg_package4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package3_);
  // checkMissing(package4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_package4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // l = ld name
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // packageSlot__ = ldf `packageSlot<-`
  Rsh_Fir_reg_packageSlot__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L97() else D18()
  // L97()
  goto L97_;

D18_:;
  // deopt 68 [package4, l, package4]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_package4_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_package4_;
  Rsh_Fir_deopt(68, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L97_:;
  // r44 = dyn packageSlot__(l, NULL, package4)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_package4_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_packageSlot__, 3, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L98() else D19()
  // L98()
  goto L98_;

D19_:;
  // deopt 70 [package4, r44]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_package4_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(70, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L98_:;
  // st name = r44
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // goto L25()
  // L25()
  goto L25_;

D20_:;
  // deopt 74 [superClasses9]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_superClasses9_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L100_:;
  // superClasses10 = force? superClasses9
  Rsh_Fir_reg_superClasses10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superClasses9_);
  // checkMissing(superClasses10)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_superClasses10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // s = toForSeq(superClasses10)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_superClasses10_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 43);
  // goto L26(i)
  // L26(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L26_;

L101_:;
  // _makeValidityMethod = ldf `.makeValidityMethod`
  Rsh_Fir_reg__makeValidityMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L123() else D33()
  // L123()
  goto L123_;

D21_:;
  // deopt 77 [i2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L102_:;
  // p12 = prom<V +>{
  //   what = ld what;
  //   what1 = force? what;
  //   checkMissing(what1);
  //   return what1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_12, CCP, RHO);
  // r46 = dyn is(p12, "classRepresentation")
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L103() else D22()
  // L103()
  goto L103_;

D22_:;
  // deopt 80 [i2, r46]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(80, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L103_:;
  // c25 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c25 then L104() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L104()
    goto L104_;
  } else {
  // L27()
    goto L27_;
  }

L104_:;
  // what2 = ld what
  Rsh_Fir_reg_what2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L105() else D23()
  // L105()
  goto L105_;

D23_:;
  // deopt 81 [i2, what2]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_what2_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L105_:;
  // what3 = force? what2
  Rsh_Fir_reg_what3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what2_);
  // checkMissing(what3)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_what3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // goto L28(i2, what3)
  // L28(i2, what3)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_what4_ = Rsh_Fir_reg_what3_;
  goto L28_;

L107_:;
  // packageSlot = ldf packageSlot
  Rsh_Fir_reg_packageSlot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L109() else D24()
  // L109()
  goto L109_;

L108_:;
  // r47 = dyn base8(<lang packageSlot(what)>)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L29(i2, r47)
  // L29(i2, r47)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L29_;

D24_:;
  // deopt 85 [i2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L109_:;
  // p13 = prom<V +>{
  //   what5 = ld what;
  //   what6 = force? what5;
  //   checkMissing(what6);
  //   return what6;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_13, CCP, RHO);
  // r50 = dyn packageSlot(p13)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_packageSlot, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L110() else D25()
  // L110()
  goto L110_;

D25_:;
  // deopt 87 [i2, r50]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L110_:;
  // c26 = `==`(r50, NULL)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L29(i2, c26)
  // L29(i2, c26)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_c26_;
  goto L29_;

L111_:;
  // getClass = ldf getClass
  Rsh_Fir_reg_getClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L112() else D26()
  // L112()
  goto L112_;

D26_:;
  // deopt 90 [i10]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L112_:;
  // p14 = prom<V +>{
  //   what7 = ld what;
  //   what8 = force? what7;
  //   checkMissing(what8);
  //   return what8;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_14, CCP, RHO);
  // p15 = prom<V +>{
  //   where3 = ld where;
  //   where4 = force? where3;
  //   checkMissing(where4);
  //   return where4;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_15, CCP, RHO);
  // r53 = dyn getClass[, where](p14, p15)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClass, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L113() else D27()
  // L113()
  goto L113_;

D27_:;
  // deopt 94 [i10, r53]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L113_:;
  // goto L28(i10, r53)
  // L28(i10, r53)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_what4_ = Rsh_Fir_reg_r53_;
  goto L28_;

D28_:;
  // deopt 96 [i10]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L115_:;
  // p16 = prom<V +>{
  //   what9 = ld what;
  //   what10 = force? what9;
  //   checkMissing(what10);
  //   return what10;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_16, CCP, RHO);
  // r55 = dyn getClass1(p16)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClass1_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L116() else D29()
  // L116()
  goto L116_;

D29_:;
  // deopt 98 [i10, r55]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L28(i10, r55)
  // L28(i10, r55)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_what4_ = Rsh_Fir_reg_r55_;
  goto L28_;

D30_:;
  // deopt 104 [i7]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L117_:;
  // p17 = prom<V +>{
  //   name3 = ld name;
  //   name4 = force? name3;
  //   checkMissing(name4);
  //   return name4;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_17, CCP, RHO);
  // p18 = prom<V +>{
  //   slots5 = ld slots;
  //   slots6 = force? slots5;
  //   checkMissing(slots6);
  //   return slots6;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_18, CCP, RHO);
  // p19 = prom<V +>{
  //   whatClassDef = ld whatClassDef;
  //   whatClassDef1 = force? whatClassDef;
  //   checkMissing(whatClassDef1);
  //   return whatClassDef1;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_19, CCP, RHO);
  // p20 = prom<V +>{
  //   package6 = ld package;
  //   package7 = force? package6;
  //   checkMissing(package7);
  //   return package7;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_20, CCP, RHO);
  // r61 = dyn makeExtends[, slots, classDef2, package](p17, p18, p19, p20)
  SEXP Rsh_Fir_array_args104[4];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args104[2] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args104[3] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 48);
  Rsh_Fir_array_arg_names21[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_makeExtends, 4, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L118() else D31()
  // L118()
  goto L118_;

D31_:;
  // deopt 112 [i7, r61]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L118_:;
  // l2 = ld contains
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c28 = `is.object`(l2)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if c28 then L119() else L120(i7, r61, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L119()
    goto L119_;
  } else {
  // L120(i7, r61, l2)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r61_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L120_;
  }

L119_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l2, r61)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args106);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc2 then L121() else L120(i7, r61, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L121()
    goto L121_;
  } else {
  // L120(i7, r61, dr4)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r61_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr4_;
    goto L120_;
  }

L120_:;
  // what11 = ld what
  Rsh_Fir_reg_what11_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L122() else D32()
  // L122()
  goto L122_;

L121_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L31(i7, dx5)
  // L31(i7, dx5)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L31_;

D32_:;
  // deopt 114 [i14, r63, l4, r61, what11]
  SEXP Rsh_Fir_array_deopt_stack29[5];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack29[3] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_deopt_stack29[4] = Rsh_Fir_reg_what11_;
  Rsh_Fir_deopt(114, 5, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L122_:;
  // what12 = force? what11
  Rsh_Fir_reg_what12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what11_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r66 = dyn ____(l4, r61, what12)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_what12_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L31(i14, r66)
  // L31(i14, r66)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r66_;
  goto L31_;

D33_:;
  // deopt 122 []
  Rsh_Fir_deopt(122, 0, NULL, CCP, RHO);
  return R_NilValue;

L123_:;
  // p21 = prom<V +>{
  //   name5 = ld name;
  //   name6 = force? name5;
  //   checkMissing(name6);
  //   return name6;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_21, CCP, RHO);
  // p22 = prom<V +>{
  //   validity1 = ld validity;
  //   validity2 = force? validity1;
  //   checkMissing(validity2);
  //   return validity2;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_22, CCP, RHO);
  // r69 = dyn _makeValidityMethod(p21, p22)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__makeValidityMethod, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L124() else D34()
  // L124()
  goto L124_;

D34_:;
  // deopt 125 [r69]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L124_:;
  // st validity = r69
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // sym9 = ldf `is.na`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base9 = ldf `is.na` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard9 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L125_:;
  // virtual1 = ld virtual
  Rsh_Fir_reg_virtual1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L127() else D35()
  // L127()
  goto L127_;

L126_:;
  // r70 = dyn base9(<sym virtual>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L33(r70)
  // L33(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L33_;

D35_:;
  // deopt 129 [virtual1]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_virtual1_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L127_:;
  // virtual2 = force? virtual1
  Rsh_Fir_reg_virtual2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_virtual1_);
  // checkMissing(virtual2)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_virtual2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r72 = dyn is_na(virtual2)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_virtual2_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L128() else D36()
  // L128()
  goto L128_;

D36_:;
  // deopt 132 [r72]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L128_:;
  // goto L33(r72)
  // L33(r72)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r72_;
  goto L33_;

L129_:;
  // testVirtual = ldf testVirtual
  Rsh_Fir_reg_testVirtual = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L130() else D37()
  // L130()
  goto L130_;

D37_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L130_:;
  // p23 = prom<V +>{
  //   slots7 = ld slots;
  //   slots8 = force? slots7;
  //   checkMissing(slots8);
  //   return slots8;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_23, CCP, RHO);
  // p24 = prom<V +>{
  //   contains = ld contains;
  //   contains1 = force? contains;
  //   checkMissing(contains1);
  //   return contains1;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_24, CCP, RHO);
  // p25 = prom<V +>{
  //   prototype5 = ld prototype;
  //   prototype6 = force? prototype5;
  //   checkMissing(prototype6);
  //   return prototype6;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_25, CCP, RHO);
  // p26 = prom<V +>{
  //   where5 = ld where;
  //   where6 = force? where5;
  //   checkMissing(where6);
  //   return where6;
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_26, CCP, RHO);
  // r77 = dyn testVirtual(p23, p24, p25, p26)
  SEXP Rsh_Fir_array_args121[4];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args121[2] = Rsh_Fir_reg_p25_;
  Rsh_Fir_array_args121[3] = Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_testVirtual, 4, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L131() else D38()
  // L131()
  goto L131_;

D38_:;
  // deopt 139 [r77]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L131_:;
  // st virtual = r77
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // virtual3 = ld virtual
  Rsh_Fir_reg_virtual3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L132() else D39()
  // L132()
  goto L132_;

D39_:;
  // deopt 141 [virtual3]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_virtual3_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L132_:;
  // virtual4 = force? virtual3
  Rsh_Fir_reg_virtual4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_virtual3_);
  // checkMissing(virtual4)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_virtual4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // c30 = `as.logical`(virtual4)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_virtual4_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if c30 then L133() else L35(c30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L133()
    goto L133_;
  } else {
  // L35(c30)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c30_;
    goto L35_;
  }

L133_:;
  // sym10 = ldf `is.na`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base10 = ldf `is.na` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args124);
  // if guard10 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L134_:;
  // sym11 = ldf match
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base11 = ldf match in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args125);
  // if guard11 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L135_:;
  // r78 = dyn base10(<lang match("VIRTUAL", superClasses)>)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L36(c30, r78)
  // L36(c30, r78)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L36_;

L136_:;
  // superClasses11 = ld superClasses
  Rsh_Fir_reg_superClasses11_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L138() else D40()
  // L138()
  goto L138_;

L137_:;
  // r80 = dyn base11("VIRTUAL", <sym superClasses>)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L37(c30, r80)
  // L37(c30, r80)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r80_;
  goto L37_;

D40_:;
  // deopt 148 [c30, superClasses11]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_superClasses11_;
  Rsh_Fir_deopt(148, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L138_:;
  // superClasses12 = force? superClasses11
  Rsh_Fir_reg_superClasses12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superClasses11_);
  // checkMissing(superClasses12)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_superClasses12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r82 = dyn match("VIRTUAL", superClasses12, NA_INT, NULL)
  SEXP Rsh_Fir_array_args129[4];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_superClasses12_;
  Rsh_Fir_array_args129[2] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args129[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L139() else D41()
  // L139()
  goto L139_;

D41_:;
  // deopt 153 [c30, r82]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(153, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L139_:;
  // goto L37(c30, r82)
  // L37(c30, r82)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r82_;
  goto L37_;

D42_:;
  // deopt 155 [c38, r83]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(155, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L140_:;
  // goto L36(c38, r83)
  // L36(c38, r83)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r83_;
  goto L36_;

L142_:;
  // l5 = ld contains
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c43 = `is.object`(l5)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if c43 then L143() else L144(NULL, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L143()
    goto L143_;
  } else {
  // L144(NULL, l5)
    Rsh_Fir_reg_r86_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L144_;
  }

L143_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l5, NULL)
  SEXP Rsh_Fir_array_args131[3];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args131[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args131);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if dc3 then L145() else L144(NULL, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L145()
    goto L145_;
  } else {
  // L144(NULL, dr6)
    Rsh_Fir_reg_r86_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr6_;
    goto L144_;
  }

L144_:;
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r89 = dyn ____1(l7, NULL, "VIRTUAL")
  SEXP Rsh_Fir_array_args133[3];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args133[2] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L39(r86, r89)
  // L39(r86, r89)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r89_;
  goto L39_;

L145_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // goto L39(NULL, dx7)
  // L39(NULL, dx7)
  Rsh_Fir_reg_r88_ = Rsh_const(CCP, 6);
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L39_;

L148_:;
  // prototype7 = ld prototype
  Rsh_Fir_reg_prototype7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L150() else D43()
  // L150()
  goto L150_;

L149_:;
  // r92 = dyn base12(<sym prototype>)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L42(r92)
  // L42(r92)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r92_;
  goto L42_;

D43_:;
  // deopt 170 [prototype7]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_prototype7_;
  Rsh_Fir_deopt(170, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L150_:;
  // prototype8 = force? prototype7
  Rsh_Fir_reg_prototype8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prototype7_);
  // checkMissing(prototype8)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_prototype8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c44 = `==`(prototype8, NULL)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_prototype8_;
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L42(c44)
  // L42(c44)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_c44_;
  goto L42_;

L151_:;
  // sym13 = ldf `is.na`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base13 = ldf `is.na` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args138);
  // if guard13 then L152() else L153()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L152()
    goto L152_;
  } else {
  // L153()
    goto L153_;
  }

L152_:;
  // sym14 = ldf match
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base14 = ldf match in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args139);
  // if guard14 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L153_:;
  // r95 = dyn base13(<lang match(name, .BasicClasses)>)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L44(c45, r95)
  // L44(c45, r95)
  Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L44_;

L154_:;
  // name7 = ld name
  Rsh_Fir_reg_name7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L156() else D44()
  // L156()
  goto L156_;

L155_:;
  // r97 = dyn base14(<sym name>, <sym .BasicClasses>)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args141[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L45(c45, r97)
  // L45(c45, r97)
  Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r97_;
  goto L45_;

D44_:;
  // deopt 178 [c45, name7]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_name7_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L156_:;
  // name8 = force? name7
  Rsh_Fir_reg_name8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name7_);
  // checkMissing(name8)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_name8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // _BasicClasses = ld `.BasicClasses`
  Rsh_Fir_reg__BasicClasses = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L157() else D45()
  // L157()
  goto L157_;

D45_:;
  // deopt 180 [c45, _BasicClasses]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg__BasicClasses;
  Rsh_Fir_deopt(180, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L157_:;
  // _BasicClasses1 = force? _BasicClasses
  Rsh_Fir_reg__BasicClasses1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__BasicClasses);
  // checkMissing(_BasicClasses1)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg__BasicClasses1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r99 = dyn match1(name8, _BasicClasses1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args144[4];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_name8_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg__BasicClasses1_;
  Rsh_Fir_array_args144[2] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args144[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names34[4];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L158() else D46()
  // L158()
  goto L158_;

D46_:;
  // deopt 185 [c45, r99]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(185, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L158_:;
  // goto L45(c45, r99)
  // L45(c45, r99)
  Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r99_;
  goto L45_;

D47_:;
  // deopt 187 [c53, r100]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(187, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L159_:;
  // goto L44(c53, r100)
  // L44(c53, r100)
  Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r100_;
  goto L44_;

L161_:;
  // _asS4 = ldf `.asS4`
  Rsh_Fir_reg__asS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L162() else D48()
  // L162()
  goto L162_;

D48_:;
  // deopt 190 []
  Rsh_Fir_deopt(190, 0, NULL, CCP, RHO);
  return R_NilValue;

L162_:;
  // p27 = prom<V +>{
  //   prototype9 = ld prototype;
  //   prototype10 = force? prototype9;
  //   checkMissing(prototype10);
  //   return prototype10;
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_27, CCP, RHO);
  // r102 = dyn _asS4(p27)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_p27_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__asS4_, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L163() else D49()
  // L163()
  goto L163_;

D49_:;
  // deopt 192 [r102]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L163_:;
  // st prototype = r102
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r102_, RHO);
  (void)(Rsh_Fir_reg_r102_);
  // goto L47()
  // L47()
  goto L47_;

D50_:;
  // deopt 197 []
  Rsh_Fir_deopt(197, 0, NULL, CCP, RHO);
  return R_NilValue;

L165_:;
  // p28 = prom<V +>{
  //   sym15 = ldf names;
  //   base15 = ldf names in base;
  //   guard15 = `==`.4(sym15, base15);
  //   if guard15 then L1() else L2();
  // L0(r105):
  //   return r105;
  // L1():
  //   slots9 = ld slots;
  //   slots10 = force? slots9;
  //   checkMissing(slots10);
  //   names = ldf names in base;
  //   r106 = dyn names(slots10);
  //   goto L0(r106);
  // L2():
  //   r104 = dyn base15(<sym slots>);
  //   goto L0(r104);
  // }
  Rsh_Fir_reg_p28_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_28, CCP, RHO);
  // r108 = dyn _in_1(".S3Class", p28)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_p28_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L166() else D51()
  // L166()
  goto L166_;

D51_:;
  // deopt 200 [r108]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L166_:;
  // c58 = `as.logical`(r108)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if c58 then L167() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L167()
    goto L167_;
  } else {
  // L48()
    goto L48_;
  }

L167_:;
  // _addS3Class = ldf `.addS3Class`
  Rsh_Fir_reg__addS3Class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // check L168() else D52()
  // L168()
  goto L168_;

D52_:;
  // deopt 202 []
  Rsh_Fir_deopt(202, 0, NULL, CCP, RHO);
  return R_NilValue;

L168_:;
  // p29 = prom<V +>{
  //   name9 = ld name;
  //   name10 = force? name9;
  //   checkMissing(name10);
  //   return name10;
  // }
  Rsh_Fir_reg_p29_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_29, CCP, RHO);
  // p30 = prom<V +>{
  //   prototype11 = ld prototype;
  //   prototype12 = force? prototype11;
  //   checkMissing(prototype12);
  //   return prototype12;
  // }
  Rsh_Fir_reg_p30_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_30, CCP, RHO);
  // p31 = prom<V +>{
  //   contains2 = ld contains;
  //   contains3 = force? contains2;
  //   checkMissing(contains3);
  //   return contains3;
  // }
  Rsh_Fir_reg_p31_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_31, CCP, RHO);
  // p32 = prom<V +>{
  //   where7 = ld where;
  //   where8 = force? where7;
  //   checkMissing(where8);
  //   return where8;
  // }
  Rsh_Fir_reg_p32_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_32, CCP, RHO);
  // r113 = dyn _addS3Class(p29, p30, p31, p32)
  SEXP Rsh_Fir_array_args157[4];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_p29_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_p30_;
  Rsh_Fir_array_args157[2] = Rsh_Fir_reg_p31_;
  Rsh_Fir_array_args157[3] = Rsh_Fir_reg_p32_;
  SEXP Rsh_Fir_array_arg_names39[4];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__addS3Class, 4, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L169() else D53()
  // L169()
  goto L169_;

D53_:;
  // deopt 207 [r113]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L169_:;
  // st prototype = r113
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r113_, RHO);
  (void)(Rsh_Fir_reg_r113_);
  // goto L49()
  // L49()
  goto L49_;

D54_:;
  // deopt 212 []
  Rsh_Fir_deopt(212, 0, NULL, CCP, RHO);
  return R_NilValue;

L171_:;
  // p33 = prom<V +>{
  //   name11 = ld name;
  //   name12 = force? name11;
  //   checkMissing(name12);
  //   return name12;
  // }
  Rsh_Fir_reg_p33_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_33, CCP, RHO);
  // p34 = prom<V +>{
  //   slots11 = ld slots;
  //   slots12 = force? slots11;
  //   checkMissing(slots12);
  //   return slots12;
  // }
  Rsh_Fir_reg_p34_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_34, CCP, RHO);
  // p35 = prom<V +>{
  //   contains4 = ld contains;
  //   contains5 = force? contains4;
  //   checkMissing(contains5);
  //   return contains5;
  // }
  Rsh_Fir_reg_p35_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_35, CCP, RHO);
  // p36 = prom<V +>{
  //   prototype13 = ld prototype;
  //   prototype14 = force? prototype13;
  //   checkMissing(prototype14);
  //   return prototype14;
  // }
  Rsh_Fir_reg_p36_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_36, CCP, RHO);
  // p37 = prom<V +>{
  //   virtual5 = ld virtual;
  //   virtual6 = force? virtual5;
  //   checkMissing(virtual6);
  //   return virtual6;
  // }
  Rsh_Fir_reg_p37_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_37, CCP, RHO);
  // p38 = prom<V +>{
  //   validity3 = ld validity;
  //   validity4 = force? validity3;
  //   checkMissing(validity4);
  //   return validity4;
  // }
  Rsh_Fir_reg_p38_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_38, CCP, RHO);
  // p39 = prom<V +>{
  //   access1 = ld access;
  //   access2 = force? access1;
  //   checkMissing(access2);
  //   return access2;
  // }
  Rsh_Fir_reg_p39_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_39, CCP, RHO);
  // p40 = prom<V +>{
  //   package8 = ld package;
  //   package9 = force? package8;
  //   checkMissing(package9);
  //   return package9;
  // }
  Rsh_Fir_reg_p40_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_40, CCP, RHO);
  // p41 = prom<V +>{
  //   version1 = ld version;
  //   version2 = force? version1;
  //   checkMissing(version2);
  //   return version2;
  // }
  Rsh_Fir_reg_p41_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_41, CCP, RHO);
  // p42 = prom<V +>{
  //   sealed1 = ld sealed;
  //   sealed2 = force? sealed1;
  //   checkMissing(sealed2);
  //   return sealed2;
  // }
  Rsh_Fir_reg_p42_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner266774232_42, CCP, RHO);
  // r125 = dyn newClassRepresentation[className, slots, contains, prototype, virtual, validity, access, package, versionKey, sealed](p33, p34, p35, p36, p37, p38, p39, p40, p41, p42)
  SEXP Rsh_Fir_array_args168[10];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_p33_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_p34_;
  Rsh_Fir_array_args168[2] = Rsh_Fir_reg_p35_;
  Rsh_Fir_array_args168[3] = Rsh_Fir_reg_p36_;
  Rsh_Fir_array_args168[4] = Rsh_Fir_reg_p37_;
  Rsh_Fir_array_args168[5] = Rsh_Fir_reg_p38_;
  Rsh_Fir_array_args168[6] = Rsh_Fir_reg_p39_;
  Rsh_Fir_array_args168[7] = Rsh_Fir_reg_p40_;
  Rsh_Fir_array_args168[8] = Rsh_Fir_reg_p41_;
  Rsh_Fir_array_args168[9] = Rsh_Fir_reg_p42_;
  SEXP Rsh_Fir_array_arg_names40[10];
  Rsh_Fir_array_arg_names40[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names40[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names40[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names40[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names40[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names40[5] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names40[6] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names40[7] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names40[8] = Rsh_const(CCP, 62);
  Rsh_Fir_array_arg_names40[9] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_newClassRepresentation, 10, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L172() else D55()
  // L172()
  goto L172_;

D55_:;
  // deopt 233 [r125]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_deopt(233, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L172_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r125
  return Rsh_Fir_reg_r125_;
}
SEXP Rsh_Fir_user_promise_inner266774232_(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf list in base
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
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner266774232_1(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r4 = dyn character()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner266774232_2(SEXP CCP, SEXP RHO) {
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r8 = dyn list1()
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner266774232_3(SEXP CCP, SEXP RHO) {
  // _newExternalptr = ldf `.newExternalptr`
  Rsh_Fir_reg__newExternalptr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // r10 = dyn _newExternalptr()
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__newExternalptr, 0, NULL, NULL, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner266774232_4(SEXP CCP, SEXP RHO) {
  // superClasses1 = ld superClasses
  Rsh_Fir_reg_superClasses1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // superClasses2 = force? superClasses1
  Rsh_Fir_reg_superClasses2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superClasses1_);
  // checkMissing(superClasses2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_superClasses2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return superClasses2
  return Rsh_Fir_reg_superClasses2_;
}
SEXP Rsh_Fir_user_promise_inner266774232_5(SEXP CCP, SEXP RHO) {
  // _AbnormalTypes = ld `.AbnormalTypes`
  Rsh_Fir_reg__AbnormalTypes = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // _AbnormalTypes1 = force? _AbnormalTypes
  Rsh_Fir_reg__AbnormalTypes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__AbnormalTypes);
  // checkMissing(_AbnormalTypes1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg__AbnormalTypes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return _AbnormalTypes1
  return Rsh_Fir_reg__AbnormalTypes1_;
}
SEXP Rsh_Fir_user_promise_inner266774232_6(SEXP CCP, SEXP RHO) {
  // superClasses3 = ld superClasses
  Rsh_Fir_reg_superClasses3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // superClasses4 = force? superClasses3
  Rsh_Fir_reg_superClasses4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superClasses3_);
  // checkMissing(superClasses4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_superClasses4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return superClasses4
  return Rsh_Fir_reg_superClasses4_;
}
SEXP Rsh_Fir_user_promise_inner266774232_7(SEXP CCP, SEXP RHO) {
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
SEXP Rsh_Fir_user_promise_inner266774232_8(SEXP CCP, SEXP RHO) {
  // slots3 = ld slots
  Rsh_Fir_reg_slots3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // slots4 = force? slots3
  Rsh_Fir_reg_slots4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slots3_);
  // checkMissing(slots4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_slots4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return slots4
  return Rsh_Fir_reg_slots4_;
}
SEXP Rsh_Fir_user_promise_inner266774232_9(SEXP CCP, SEXP RHO) {
  // prototype3 = ld prototype
  Rsh_Fir_reg_prototype3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // prototype4 = force? prototype3
  Rsh_Fir_reg_prototype4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prototype3_);
  // checkMissing(prototype4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_prototype4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return prototype4
  return Rsh_Fir_reg_prototype4_;
}
SEXP Rsh_Fir_user_promise_inner266774232_10(SEXP CCP, SEXP RHO) {
  // superClasses7 = ld superClasses
  Rsh_Fir_reg_superClasses7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // superClasses8 = force? superClasses7
  Rsh_Fir_reg_superClasses8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superClasses7_);
  // checkMissing(superClasses8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_superClasses8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return superClasses8
  return Rsh_Fir_reg_superClasses8_;
}
SEXP Rsh_Fir_user_promise_inner266774232_11(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner266774232_12(SEXP CCP, SEXP RHO) {
  // what = ld what
  Rsh_Fir_reg_what = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // what1 = force? what
  Rsh_Fir_reg_what1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what);
  // checkMissing(what1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_what1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return what1
  return Rsh_Fir_reg_what1_;
}
SEXP Rsh_Fir_user_promise_inner266774232_13(SEXP CCP, SEXP RHO) {
  // what5 = ld what
  Rsh_Fir_reg_what5_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // what6 = force? what5
  Rsh_Fir_reg_what6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what5_);
  // checkMissing(what6)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_what6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return what6
  return Rsh_Fir_reg_what6_;
}
SEXP Rsh_Fir_user_promise_inner266774232_14(SEXP CCP, SEXP RHO) {
  // what7 = ld what
  Rsh_Fir_reg_what7_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // what8 = force? what7
  Rsh_Fir_reg_what8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what7_);
  // checkMissing(what8)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_what8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // return what8
  return Rsh_Fir_reg_what8_;
}
SEXP Rsh_Fir_user_promise_inner266774232_15(SEXP CCP, SEXP RHO) {
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return where4
  return Rsh_Fir_reg_where4_;
}
SEXP Rsh_Fir_user_promise_inner266774232_16(SEXP CCP, SEXP RHO) {
  // what9 = ld what
  Rsh_Fir_reg_what9_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // what10 = force? what9
  Rsh_Fir_reg_what10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what9_);
  // checkMissing(what10)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_what10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // return what10
  return Rsh_Fir_reg_what10_;
}
SEXP Rsh_Fir_user_promise_inner266774232_17(SEXP CCP, SEXP RHO) {
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // return name4
  return Rsh_Fir_reg_name4_;
}
SEXP Rsh_Fir_user_promise_inner266774232_18(SEXP CCP, SEXP RHO) {
  // slots5 = ld slots
  Rsh_Fir_reg_slots5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // slots6 = force? slots5
  Rsh_Fir_reg_slots6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slots5_);
  // checkMissing(slots6)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_slots6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // return slots6
  return Rsh_Fir_reg_slots6_;
}
SEXP Rsh_Fir_user_promise_inner266774232_19(SEXP CCP, SEXP RHO) {
  // whatClassDef = ld whatClassDef
  Rsh_Fir_reg_whatClassDef = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // whatClassDef1 = force? whatClassDef
  Rsh_Fir_reg_whatClassDef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_whatClassDef);
  // checkMissing(whatClassDef1)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_whatClassDef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // return whatClassDef1
  return Rsh_Fir_reg_whatClassDef1_;
}
SEXP Rsh_Fir_user_promise_inner266774232_20(SEXP CCP, SEXP RHO) {
  // package6 = ld package
  Rsh_Fir_reg_package6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // package7 = force? package6
  Rsh_Fir_reg_package7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package6_);
  // checkMissing(package7)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_package7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // return package7
  return Rsh_Fir_reg_package7_;
}
SEXP Rsh_Fir_user_promise_inner266774232_21(SEXP CCP, SEXP RHO) {
  // name5 = ld name
  Rsh_Fir_reg_name5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name6 = force? name5
  Rsh_Fir_reg_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name5_);
  // checkMissing(name6)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_name6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return name6
  return Rsh_Fir_reg_name6_;
}
SEXP Rsh_Fir_user_promise_inner266774232_22(SEXP CCP, SEXP RHO) {
  // validity1 = ld validity
  Rsh_Fir_reg_validity1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // validity2 = force? validity1
  Rsh_Fir_reg_validity2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_validity1_);
  // checkMissing(validity2)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_validity2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // return validity2
  return Rsh_Fir_reg_validity2_;
}
SEXP Rsh_Fir_user_promise_inner266774232_23(SEXP CCP, SEXP RHO) {
  // slots7 = ld slots
  Rsh_Fir_reg_slots7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // slots8 = force? slots7
  Rsh_Fir_reg_slots8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slots7_);
  // checkMissing(slots8)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_slots8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // return slots8
  return Rsh_Fir_reg_slots8_;
}
SEXP Rsh_Fir_user_promise_inner266774232_24(SEXP CCP, SEXP RHO) {
  // contains = ld contains
  Rsh_Fir_reg_contains = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // contains1 = force? contains
  Rsh_Fir_reg_contains1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contains);
  // checkMissing(contains1)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_contains1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // return contains1
  return Rsh_Fir_reg_contains1_;
}
SEXP Rsh_Fir_user_promise_inner266774232_25(SEXP CCP, SEXP RHO) {
  // prototype5 = ld prototype
  Rsh_Fir_reg_prototype5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // prototype6 = force? prototype5
  Rsh_Fir_reg_prototype6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prototype5_);
  // checkMissing(prototype6)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_prototype6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // return prototype6
  return Rsh_Fir_reg_prototype6_;
}
SEXP Rsh_Fir_user_promise_inner266774232_26(SEXP CCP, SEXP RHO) {
  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // return where6
  return Rsh_Fir_reg_where6_;
}
SEXP Rsh_Fir_user_promise_inner266774232_27(SEXP CCP, SEXP RHO) {
  // prototype9 = ld prototype
  Rsh_Fir_reg_prototype9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // prototype10 = force? prototype9
  Rsh_Fir_reg_prototype10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prototype9_);
  // checkMissing(prototype10)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_prototype10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // return prototype10
  return Rsh_Fir_reg_prototype10_;
}
SEXP Rsh_Fir_user_promise_inner266774232_28(SEXP CCP, SEXP RHO) {
  // sym15 = ldf names
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base15 = ldf names in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args147);
  // if guard15 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r105
  return Rsh_Fir_reg_r105_;

L1_:;
  // slots9 = ld slots
  Rsh_Fir_reg_slots9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // slots10 = force? slots9
  Rsh_Fir_reg_slots10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slots9_);
  // checkMissing(slots10)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_slots10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r106 = dyn names(slots10)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_slots10_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r106)
  // L0(r106)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r106_;
  goto L0_;

L2_:;
  // r104 = dyn base15(<sym slots>)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r104)
  // L0(r104)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r104_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner266774232_29(SEXP CCP, SEXP RHO) {
  // name9 = ld name
  Rsh_Fir_reg_name9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name10 = force? name9
  Rsh_Fir_reg_name10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name9_);
  // checkMissing(name10)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_name10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // return name10
  return Rsh_Fir_reg_name10_;
}
SEXP Rsh_Fir_user_promise_inner266774232_30(SEXP CCP, SEXP RHO) {
  // prototype11 = ld prototype
  Rsh_Fir_reg_prototype11_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // prototype12 = force? prototype11
  Rsh_Fir_reg_prototype12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prototype11_);
  // checkMissing(prototype12)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_prototype12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // return prototype12
  return Rsh_Fir_reg_prototype12_;
}
SEXP Rsh_Fir_user_promise_inner266774232_31(SEXP CCP, SEXP RHO) {
  // contains2 = ld contains
  Rsh_Fir_reg_contains2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // contains3 = force? contains2
  Rsh_Fir_reg_contains3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contains2_);
  // checkMissing(contains3)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_contains3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // return contains3
  return Rsh_Fir_reg_contains3_;
}
SEXP Rsh_Fir_user_promise_inner266774232_32(SEXP CCP, SEXP RHO) {
  // where7 = ld where
  Rsh_Fir_reg_where7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // where8 = force? where7
  Rsh_Fir_reg_where8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where7_);
  // checkMissing(where8)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_where8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // return where8
  return Rsh_Fir_reg_where8_;
}
SEXP Rsh_Fir_user_promise_inner266774232_33(SEXP CCP, SEXP RHO) {
  // name11 = ld name
  Rsh_Fir_reg_name11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name12 = force? name11
  Rsh_Fir_reg_name12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name11_);
  // checkMissing(name12)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_name12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // return name12
  return Rsh_Fir_reg_name12_;
}
SEXP Rsh_Fir_user_promise_inner266774232_34(SEXP CCP, SEXP RHO) {
  // slots11 = ld slots
  Rsh_Fir_reg_slots11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // slots12 = force? slots11
  Rsh_Fir_reg_slots12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slots11_);
  // checkMissing(slots12)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_slots12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // return slots12
  return Rsh_Fir_reg_slots12_;
}
SEXP Rsh_Fir_user_promise_inner266774232_35(SEXP CCP, SEXP RHO) {
  // contains4 = ld contains
  Rsh_Fir_reg_contains4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // contains5 = force? contains4
  Rsh_Fir_reg_contains5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_contains4_);
  // checkMissing(contains5)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_contains5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // return contains5
  return Rsh_Fir_reg_contains5_;
}
SEXP Rsh_Fir_user_promise_inner266774232_36(SEXP CCP, SEXP RHO) {
  // prototype13 = ld prototype
  Rsh_Fir_reg_prototype13_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // prototype14 = force? prototype13
  Rsh_Fir_reg_prototype14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prototype13_);
  // checkMissing(prototype14)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_prototype14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // return prototype14
  return Rsh_Fir_reg_prototype14_;
}
SEXP Rsh_Fir_user_promise_inner266774232_37(SEXP CCP, SEXP RHO) {
  // virtual5 = ld virtual
  Rsh_Fir_reg_virtual5_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // virtual6 = force? virtual5
  Rsh_Fir_reg_virtual6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_virtual5_);
  // checkMissing(virtual6)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_virtual6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // return virtual6
  return Rsh_Fir_reg_virtual6_;
}
SEXP Rsh_Fir_user_promise_inner266774232_38(SEXP CCP, SEXP RHO) {
  // validity3 = ld validity
  Rsh_Fir_reg_validity3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // validity4 = force? validity3
  Rsh_Fir_reg_validity4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_validity3_);
  // checkMissing(validity4)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_validity4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // return validity4
  return Rsh_Fir_reg_validity4_;
}
SEXP Rsh_Fir_user_promise_inner266774232_39(SEXP CCP, SEXP RHO) {
  // access1 = ld access
  Rsh_Fir_reg_access1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // access2 = force? access1
  Rsh_Fir_reg_access2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_access1_);
  // checkMissing(access2)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_access2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // return access2
  return Rsh_Fir_reg_access2_;
}
SEXP Rsh_Fir_user_promise_inner266774232_40(SEXP CCP, SEXP RHO) {
  // package8 = ld package
  Rsh_Fir_reg_package8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // package9 = force? package8
  Rsh_Fir_reg_package9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package8_);
  // checkMissing(package9)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_package9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // return package9
  return Rsh_Fir_reg_package9_;
}
SEXP Rsh_Fir_user_promise_inner266774232_41(SEXP CCP, SEXP RHO) {
  // version1 = ld version
  Rsh_Fir_reg_version1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // version2 = force? version1
  Rsh_Fir_reg_version2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_version1_);
  // checkMissing(version2)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_version2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // return version2
  return Rsh_Fir_reg_version2_;
}
SEXP Rsh_Fir_user_promise_inner266774232_42(SEXP CCP, SEXP RHO) {
  // sealed1 = ld sealed
  Rsh_Fir_reg_sealed1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // sealed2 = force? sealed1
  Rsh_Fir_reg_sealed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sealed1_);
  // checkMissing(sealed2)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_sealed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // return sealed2
  return Rsh_Fir_reg_sealed2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
