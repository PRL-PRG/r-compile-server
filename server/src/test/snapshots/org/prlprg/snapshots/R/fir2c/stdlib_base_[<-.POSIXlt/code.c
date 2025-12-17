#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner650999460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner650999460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner650999460_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner650999460_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner650999460
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner650999460_, RHO, CCP);
  // st `[<-.POSIXlt` = r
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
SEXP Rsh_Fir_user_function_inner650999460_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner650999460 dynamic dispatch ([x, i, j, value])

  return Rsh_Fir_user_version_inner650999460_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner650999460_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner650999460 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner650999460/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_mj;  // mj
  SEXP Rsh_Fir_reg_mj1_;  // mj1
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_as_POSIXlt;  // as_POSIXlt
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_oldClass;  // oldClass
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_unCfillPOSIXlt;  // unCfillPOSIXlt
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_mi;  // mi
  SEXP Rsh_Fir_reg_mi1_;  // mi1
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_value10_;  // value10
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_mj2_;  // mj2
  SEXP Rsh_Fir_reg_mj3_;  // mj3
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_as_POSIXlt1_;  // as_POSIXlt1
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_value13_;  // value13
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_ici;  // ici
  SEXP Rsh_Fir_reg_ici1_;  // ici1
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_nms;  // nms
  SEXP Rsh_Fir_reg_nms1_;  // nms1
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_nms4_;  // nms4
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_nms5_;  // nms5
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_nms8_;  // nms8
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_nms9_;  // nms9
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_nms11_;  // nms11
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_value14_;  // value14
  SEXP Rsh_Fir_reg_value15_;  // value15
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_value17_;  // value17
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_ici2_;  // ici2
  SEXP Rsh_Fir_reg_ici3_;  // ici3
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_nms14_;  // nms14
  SEXP Rsh_Fir_reg_nms15_;  // nms15
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_nms18_;  // nms18
  SEXP Rsh_Fir_reg_l30_;  // l30
  SEXP Rsh_Fir_reg_nms19_;  // nms19
  SEXP Rsh_Fir_reg_l31_;  // l31
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_nms22_;  // nms22
  SEXP Rsh_Fir_reg_l33_;  // l33
  SEXP Rsh_Fir_reg_nms23_;  // nms23
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_j7_;  // j7
  SEXP Rsh_Fir_reg_j8_;  // j8
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_names__1_;  // names__1
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_nms25_;  // nms25
  SEXP Rsh_Fir_reg_l35_;  // l35
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_nms27_;  // nms27
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_j9_;  // j9
  SEXP Rsh_Fir_reg_j10_;  // j10
  SEXP Rsh_Fir_reg_____3_;  // ____3
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_value18_;  // value18
  SEXP Rsh_Fir_reg_value19_;  // value19
  SEXP Rsh_Fir_reg_l36_;  // l36
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_value22_;  // value22
  SEXP Rsh_Fir_reg_l39_;  // l39
  SEXP Rsh_Fir_reg_value23_;  // value23
  SEXP Rsh_Fir_reg_l40_;  // l40
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_value26_;  // value26
  SEXP Rsh_Fir_reg_l42_;  // l42
  SEXP Rsh_Fir_reg_value27_;  // value27
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_j11_;  // j11
  SEXP Rsh_Fir_reg_j12_;  // j12
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_value29_;  // value29
  SEXP Rsh_Fir_reg_l44_;  // l44
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_value31_;  // value31
  SEXP Rsh_Fir_reg_l46_;  // l46
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_value33_;  // value33
  SEXP Rsh_Fir_reg_l48_;  // l48
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_value35_;  // value35
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_j13_;  // j13
  SEXP Rsh_Fir_reg_j14_;  // j14
  SEXP Rsh_Fir_reg_____4_;  // ____4
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_cl;  // cl
  SEXP Rsh_Fir_reg_cl1_;  // cl1
  SEXP Rsh_Fir_reg_l49_;  // l49
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_i = PARAMS[1];
  Rsh_Fir_reg_j = PARAMS[2];
  Rsh_Fir_reg_value = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // st j = j
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_j, RHO);
  (void)(Rsh_Fir_reg_j);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L0_:;
  // st mj = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L47() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L47()
    goto L47_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L7()
  // L7()
  goto L7_;

L2_:;
  // r6 = `!`(r5)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L3(c2) else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L3(c2)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c2_;
    goto L3_;
  } else {
  // L51()
    goto L51_;
  }

L3_:;
  // c11 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c11 then L57() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L57()
    goto L57_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // r10 = `!=`(r8, 1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c9 = `||`(c7, c8)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L3(c9)
  // L3(c9)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c9_;
  goto L3_;

L5_:;
  // goto L6(NULL)
  // L6(NULL)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 8);
  goto L6_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L8_:;
  // r17 = `!`(r15)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c12 then L66() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L66()
    goto L66_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard4 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L11_:;
  // st mi = r21
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // c13 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c13 then L72() else L12(c13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L72()
    goto L72_;
  } else {
  // L12(c13)
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c13_;
    goto L12_;
  }

L12_:;
  // c19 = `as.logical`(c15)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c19 then L75() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L75()
    goto L75_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // sym5 = ldf oldClass
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf oldClass in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard5 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L15_:;
  // st cl = r28
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym6 = ldf unCfillPOSIXlt
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base6 = ldf unCfillPOSIXlt in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard6 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L16_:;
  // st x = r31
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // mi = ld mi
  Rsh_Fir_reg_mi = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L88() else D15()
  // L88()
  goto L88_;

L17_:;
  // sym7 = ldf `is.character`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf `is.character` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard7 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L18_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L183() else D50()
  // L183()
  goto L183_;

L20_:;
  // st ici = r35
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // sym8 = ldf names
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base8 = ldf names in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard8 then L99() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L99()
    goto L99_;
  } else {
  // L100()
    goto L100_;
  }

L21_:;
  // st nms = r37
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // mj2 = ld mj
  Rsh_Fir_reg_mj2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L107() else D21()
  // L107()
  goto L107_;

L22_:;
  // ici2 = ld ici
  Rsh_Fir_reg_ici2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L156() else D40()
  // L156()
  goto L156_;

L23_:;
  // st value = r41
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // ici = ld ici
  Rsh_Fir_reg_ici = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L114() else D25()
  // L114()
  goto L114_;

L24_:;
  // goto L30()
  // L30()
  goto L30_;

L25_:;
  // s = toForSeq(r46)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // l3 = length(s)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l3_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // i3 = 0
  Rsh_Fir_reg_i3_ = Rsh_const(CCP, 18);
  // goto L26(i3)
  // L26(i3)
  Rsh_Fir_reg_i4_ = Rsh_Fir_reg_i3_;
  goto L26_;

L26_:;
  // i5 = `+`.1(i4, 1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_i4_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i5_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // c26 = `<`.1(l3, i5)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_i5_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if c26 then L120() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L120()
    goto L120_;
  } else {
  // L29()
    goto L29_;
  }

L27_:;
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L126() else D30()
  // L126()
  goto L126_;

L28_:;
  // st x = dx7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L26(i15)
  // L26(i15)
  Rsh_Fir_reg_i4_ = Rsh_Fir_reg_i15_;
  goto L26_;

L29_:;
  // x13 = `[[`(s, i5, NULL, TRUE)
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i5_;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_x13_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // st n = x13
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_x13_, RHO);
  (void)(Rsh_Fir_reg_x13_);
  // nms = ld nms
  Rsh_Fir_reg_nms = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L121() else D28()
  // L121()
  goto L121_;

L30_:;
  // sym11 = ldf names
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base11 = ldf names in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard11 then L133() else L134()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L133()
    goto L133_;
  } else {
  // L134()
    goto L134_;
  }

L31_:;
  // s1 = toForSeq(r52)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // l13 = length(s1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l13_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // i17 = 0
  Rsh_Fir_reg_i17_ = Rsh_const(CCP, 18);
  // goto L32(i17)
  // L32(i17)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i17_;
  goto L32_;

L32_:;
  // i19 = `+`.1(i18, 1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i19_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // c29 = `<`.1(l13, i19)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if c29 then L137() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L137()
    goto L137_;
  } else {
  // L37()
    goto L37_;
  }

L33_:;
  // l14 = ld x
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c31 = `is.object`(l14)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c31 then L143() else L144(i25, dx9, l14, dx9, l14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L143()
    goto L143_;
  } else {
  // L144(i25, dx9, l14, dx9, l14)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l14_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l14_;
    goto L144_;
  }

L34_:;
  // c32 = `is.object`(dx19)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c32 then L147() else L148(i29, dx17, l20, dx19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L147()
    goto L147_;
  } else {
  // L148(i29, dx17, l20, dx19)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l20_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx19_;
    goto L148_;
  }

L35_:;
  // c33 = `is.object`(l24)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c33 then L151() else L152(i33, dx26, l24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L151()
    goto L151_;
  } else {
  // L152(i33, dx26, l24)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l24_;
    goto L152_;
  }

L36_:;
  // st x = dx33
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx33_, RHO);
  (void)(Rsh_Fir_reg_dx33_);
  // goto L32(i39)
  // L32(i39)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i39_;
  goto L32_;

L37_:;
  // x16 = `[[`(s1, i19, NULL, TRUE)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_x16_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // st n = x16
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_x16_, RHO);
  (void)(Rsh_Fir_reg_x16_);
  // value14 = ld value
  Rsh_Fir_reg_value14_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L138() else D35()
  // L138()
  goto L138_;

L38_:;
  // goto L41()
  // L41()
  goto L41_;

L39_:;
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L163() else D43()
  // L163()
  goto L163_;

L40_:;
  // st x = dx37
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx37_, RHO);
  (void)(Rsh_Fir_reg_dx37_);
  // goto L41()
  // L41()
  goto L41_;

L41_:;
  // value18 = ld value
  Rsh_Fir_reg_value18_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L170() else D46()
  // L170()
  goto L170_;

L42_:;
  // c38 = `is.object`(dx39)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c38 then L175() else L176(value26, l42, dx39)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L175()
    goto L175_;
  } else {
  // L176(value26, l42, dx39)
    Rsh_Fir_reg_value29_ = Rsh_Fir_reg_value26_;
    Rsh_Fir_reg_l44_ = Rsh_Fir_reg_l42_;
    Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx39_;
    goto L176_;
  }

L43_:;
  // c39 = `is.object`(l46)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_l46_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c39 then L179() else L180(value31, l46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L179()
    goto L179_;
  } else {
  // L180(value31, l46)
    Rsh_Fir_reg_value33_ = Rsh_Fir_reg_value31_;
    Rsh_Fir_reg_l48_ = Rsh_Fir_reg_l46_;
    goto L180_;
  }

L44_:;
  // st x = dx45
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx45_, RHO);
  (void)(Rsh_Fir_reg_dx45_);
  // goto L19()
  // L19()
  goto L19_;

L45_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn missing(<sym j>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L46_:;
  // r = dyn base(<sym j>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L47_:;
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf `is.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard1 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // j1 = ld j
  Rsh_Fir_reg_j1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L50() else D0()
  // L50()
  goto L50_;

L49_:;
  // r4 = dyn base1(<sym j>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D0_:;
  // deopt 6 [j1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_j1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L50_:;
  // j2 = force? j1
  Rsh_Fir_reg_j2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j1_);
  // checkMissing(j2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_j2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c1 = `is.character`(j2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_j2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L2(c1)
  // L2(c1)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_c1_;
  goto L2_;

L51_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard2 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L52_:;
  // j3 = ld j
  Rsh_Fir_reg_j3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L54() else D1()
  // L54()
  goto L54_;

L53_:;
  // r7 = dyn base2(<sym j>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(c2, r7)
  // L4(c2, r7)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D1_:;
  // deopt 12 [c2, j3]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_j3_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L54_:;
  // j4 = force? j3
  Rsh_Fir_reg_j4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j3_);
  // checkMissing(j4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_j4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r9 = dyn length(j4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_j4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L55() else D2()
  // L55()
  goto L55_;

D2_:;
  // deopt 15 [c2, r9]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L4(c2, r9)
  // L4(c2, r9)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L4_;

L57_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L58() else D3()
  // L58()
  goto L58_;

D3_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // r11 = dyn stop("component subscript must be a character string")
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L59() else D4()
  // L59()
  goto L59_;

D4_:;
  // deopt 22 [r11]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;

L62_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L64() else D5()
  // L64()
  goto L64_;

L63_:;
  // r14 = dyn base3(<sym value>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r14)
  // L8(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L8_;

D5_:;
  // deopt 29 [value1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L64_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r16 = dyn length1(value2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L65() else D6()
  // L65()
  goto L65_;

D6_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L8_;

L66_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L67() else D7()
  // L67()
  goto L67_;

D7_:;
  // deopt 34 [x1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L67_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x2
  return Rsh_Fir_reg_x2_;

L70_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r22 = dyn missing1(<sym i>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L11_;

L71_:;
  // r20 = dyn base4(<sym i>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L11_;

L72_:;
  // mj = ld mj
  Rsh_Fir_reg_mj = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L73() else D8()
  // L73()
  goto L73_;

D8_:;
  // deopt 43 [c13, mj]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_mj;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L73_:;
  // mj1 = force? mj
  Rsh_Fir_reg_mj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mj);
  // checkMissing(mj1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_mj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c16 = `as.logical`(mj1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_mj1_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // c17 = `&&`(c13, c16)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L12(c17)
  // L12(c17)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c17_;
  goto L12_;

L75_:;
  // as_POSIXlt = ldf `as.POSIXlt`
  Rsh_Fir_reg_as_POSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L76() else D9()
  // L76()
  goto L76_;

D9_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // p = prom<V +>{
  //   value3 = ld value;
  //   value4 = force? value3;
  //   checkMissing(value4);
  //   return value4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_, CCP, RHO);
  // r24 = dyn as_POSIXlt(p)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXlt, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L77() else D10()
  // L77()
  goto L77_;

D10_:;
  // deopt 49 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L77_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r24
  return Rsh_Fir_reg_r24_;

L80_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L82() else D11()
  // L82()
  goto L82_;

L81_:;
  // r27 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L15(r27)
  // L15(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L15_;

D11_:;
  // deopt 55 [x3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L82_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r29 = dyn oldClass(x4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L83() else D12()
  // L83()
  goto L83_;

D12_:;
  // deopt 58 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L15(r29)
  // L15(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L15_;

L84_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L86() else D13()
  // L86()
  goto L86_;

L85_:;
  // r30 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L16(r30)
  // L16(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L16_;

D13_:;
  // deopt 62 [x5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L86_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // unCfillPOSIXlt = ldf unCfillPOSIXlt in base
  Rsh_Fir_reg_unCfillPOSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r32 = dyn unCfillPOSIXlt(x6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unCfillPOSIXlt, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L87() else D14()
  // L87()
  goto L87_;

D14_:;
  // deopt 65 [r32]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L16(r32)
  // L16(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L16_;

D15_:;
  // deopt 67 [mi]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_mi;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L88_:;
  // mi1 = force? mi
  Rsh_Fir_reg_mi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mi);
  // checkMissing(mi1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_mi1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c20 = `as.logical`(mi1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_mi1_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c20 then L89() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L89()
    goto L89_;
  } else {
  // L17()
    goto L17_;
  }

L89_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L90() else D16()
  // L90()
  goto L90_;

D16_:;
  // deopt 69 [value5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_value5_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L90_:;
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c21 = `is.object`(l)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c21 then L91() else L92(value6, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L91()
    goto L91_;
  } else {
  // L92(value6, l)
    Rsh_Fir_reg_value8_ = Rsh_Fir_reg_value6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L92_;
  }

L91_:;
  // dr = tryDispatchBuiltin.0("[[<-", l, value6)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_value6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args67);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc then L93() else L92(value6, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L93()
    goto L93_;
  } else {
  // L92(value6, dr)
    Rsh_Fir_reg_value8_ = Rsh_Fir_reg_value6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L92_;
  }

L92_:;
  // j5 = ld j
  Rsh_Fir_reg_j5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L94() else D17()
  // L94()
  goto L94_;

L93_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L18(value6, dx)
  // L18(value6, dx)
  Rsh_Fir_reg_value10_ = Rsh_Fir_reg_value6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L18_;

D17_:;
  // deopt 72 [value8, l2, value6, j5]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_value8_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_value6_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_j5_;
  Rsh_Fir_deopt(72, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L94_:;
  // j6 = force? j5
  Rsh_Fir_reg_j6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j5_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r33 = dyn ____(l2, value6, j6)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_value6_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_j6_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L18(value8, r33)
  // L18(value8, r33)
  Rsh_Fir_reg_value10_ = Rsh_Fir_reg_value8_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r33_;
  goto L18_;

L96_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L98() else D18()
  // L98()
  goto L98_;

L97_:;
  // r34 = dyn base7(<sym i>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L20(r34)
  // L20(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L20_;

D18_:;
  // deopt 77 [i1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L98_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c22 = `is.character`(i2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L20(c22)
  // L20(c22)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_c22_;
  goto L20_;

L99_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L101() else D19()
  // L101()
  goto L101_;

L100_:;
  // r36 = dyn base8(<lang `$`(x, year)>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L21(r36)
  // L21(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L21_;

D19_:;
  // deopt 83 [x7]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L101_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(x8)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c23 then L103() else L104(x8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L103()
    goto L103_;
  } else {
  // L104(x8)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x8_;
    goto L104_;
  }

L102_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r39 = dyn names(dx3)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L106() else D20()
  // L106()
  goto L106_;

L103_:;
  // dr2 = tryDispatchBuiltin.1("$", x8)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc1 then L105() else L104(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L105()
    goto L105_;
  } else {
  // L104(dr2)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_dr2_;
    goto L104_;
  }

L104_:;
  // r38 = `$`(x10, <sym year>)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L102(r38)
  // L102(r38)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r38_;
  goto L102_;

L105_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L102(dx2)
  // L102(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L102_;

D20_:;
  // deopt 87 [r39]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L21(r39)
  // L21(r39)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r39_;
  goto L21_;

D21_:;
  // deopt 89 [mj2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_mj2_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L107_:;
  // mj3 = force? mj2
  Rsh_Fir_reg_mj3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mj2_);
  // checkMissing(mj3)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_mj3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c24 = `as.logical`(mj3)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_mj3_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c24 then L108() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L108()
    goto L108_;
  } else {
  // L22()
    goto L22_;
  }

L108_:;
  // sym9 = ldf unclass
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base9 = ldf unclass in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard9 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L109_:;
  // as_POSIXlt1 = ldf `as.POSIXlt`
  Rsh_Fir_reg_as_POSIXlt1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L111() else D22()
  // L111()
  goto L111_;

L110_:;
  // r40 = dyn base9(<lang as.POSIXlt(value)>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L23(r40)
  // L23(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L23_;

D22_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L111_:;
  // p1 = prom<V +>{
  //   value12 = ld value;
  //   value13 = force? value12;
  //   checkMissing(value13);
  //   return value13;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner650999460_1, CCP, RHO);
  // r43 = dyn as_POSIXlt1(p1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXlt1_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L112() else D23()
  // L112()
  goto L112_;

D23_:;
  // deopt 96 [r43]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L112_:;
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r44 = dyn unclass(r43)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L113() else D24()
  // L113()
  goto L113_;

D24_:;
  // deopt 98 [r44]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L113_:;
  // goto L23(r44)
  // L23(r44)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r44_;
  goto L23_;

D25_:;
  // deopt 100 [ici]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_ici;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L114_:;
  // ici1 = force? ici
  Rsh_Fir_reg_ici1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ici);
  // checkMissing(ici1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_ici1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c25 = `as.logical`(ici1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_ici1_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if c25 then L115() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L115()
    goto L115_;
  } else {
  // L24()
    goto L24_;
  }

L115_:;
  // sym10 = ldf names
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base10 = ldf names in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard10 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L116_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L118() else D26()
  // L118()
  goto L118_;

L117_:;
  // r45 = dyn base10(<sym x>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L25(r45)
  // L25(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L25_;

D26_:;
  // deopt 104 [x11]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L118_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r47 = dyn names1(x12)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L119() else D27()
  // L119()
  goto L119_;

D27_:;
  // deopt 107 [r47]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L25(r47)
  // L25(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L25_;

L120_:;
  // goto L30()
  // L30()
  goto L30_;

D28_:;
  // deopt 108 [i5, nms]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i5_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_nms;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L121_:;
  // nms1 = force? nms
  Rsh_Fir_reg_nms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms);
  // checkMissing(nms1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_nms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // l4 = ld x
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c27 = `is.object`(l4)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if c27 then L122() else L123(i5, nms1, l4, nms1, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L122()
    goto L122_;
  } else {
  // L123(i5, nms1, l4, nms1, l4)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i5_;
    Rsh_Fir_reg_nms4_ = Rsh_Fir_reg_nms1_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l4_;
    Rsh_Fir_reg_nms5_ = Rsh_Fir_reg_nms1_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l4_;
    goto L123_;
  }

L122_:;
  // dr4 = tryDispatchBuiltin.1("[[", l4)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args97);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc2 then L124() else L123(i5, nms1, l4, nms1, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L124()
    goto L124_;
  } else {
  // L123(i5, nms1, l4, nms1, dr4)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i5_;
    Rsh_Fir_reg_nms4_ = Rsh_Fir_reg_nms1_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l4_;
    Rsh_Fir_reg_nms5_ = Rsh_Fir_reg_nms1_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr4_;
    goto L123_;
  }

L123_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L125() else D29()
  // L125()
  goto L125_;

L124_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L27(i5, nms1, l4, nms1, dx4)
  // L27(i5, nms1, l4, nms1, dx4)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i5_;
  Rsh_Fir_reg_nms8_ = Rsh_Fir_reg_nms1_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_nms9_ = Rsh_Fir_reg_nms1_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L27_;

D29_:;
  // deopt 112 [i9, nms4, l7, nms5, l8, n]
  SEXP Rsh_Fir_array_deopt_stack26[6];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_nms4_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_nms5_;
  Rsh_Fir_array_deopt_stack26[4] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack26[5] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(112, 6, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L125_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r48 = dyn __(l8, n1)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L27(i9, nms4, l7, nms5, r48)
  // L27(i9, nms4, l7, nms5, r48)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_nms8_ = Rsh_Fir_reg_nms4_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_nms9_ = Rsh_Fir_reg_nms5_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r48_;
  goto L27_;

D30_:;
  // deopt 116 [i11, nms8, l10, dx5, nms9]
  SEXP Rsh_Fir_array_deopt_stack27[5];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_nms8_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack27[4] = Rsh_Fir_reg_nms9_;
  Rsh_Fir_deopt(116, 5, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L126_:;
  // r49 = dyn names__(dx5, NULL, nms9)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args101[2] = Rsh_Fir_reg_nms9_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L127() else D31()
  // L127()
  goto L127_;

D31_:;
  // deopt 118 [i11, nms8, l10, r49]
  SEXP Rsh_Fir_array_deopt_stack28[4];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_nms8_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(118, 4, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L127_:;
  // c28 = `is.object`(l10)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c28 then L128() else L129(i11, nms8, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L128()
    goto L128_;
  } else {
  // L129(i11, nms8, l10)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_nms11_ = Rsh_Fir_reg_nms8_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L129_;
  }

L128_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l10, r49)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args103);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc3 then L130() else L129(i11, nms8, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L130()
    goto L130_;
  } else {
  // L129(i11, nms8, dr6)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_nms11_ = Rsh_Fir_reg_nms8_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr6_;
    goto L129_;
  }

L129_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L131() else D32()
  // L131()
  goto L131_;

L130_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L28(i11, dx6)
  // L28(i11, dx6)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L28_;

D32_:;
  // deopt 119 [i13, nms11, l12, r49, n2]
  SEXP Rsh_Fir_array_deopt_stack29[5];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_nms11_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack29[3] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack29[4] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(119, 5, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L131_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r50 = dyn ____1(l12, r49, n3)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L28(i13, r50)
  // L28(i13, r50)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r50_;
  goto L28_;

L133_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L135() else D33()
  // L135()
  goto L135_;

L134_:;
  // r51 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L31(r51)
  // L31(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L31_;

D33_:;
  // deopt 130 [x14]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L135_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r53 = dyn names2(x15)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L136() else D34()
  // L136()
  goto L136_;

D34_:;
  // deopt 133 [r53]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L136_:;
  // goto L31(r53)
  // L31(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L31_;

L137_:;
  // goto L19()
  // L19()
  goto L19_;

D35_:;
  // deopt 134 [i19, value14]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_value14_;
  Rsh_Fir_deopt(134, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L138_:;
  // value15 = force? value14
  Rsh_Fir_reg_value15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value14_);
  // checkMissing(value15)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_value15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(value15)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_value15_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c30 then L139() else L140(i19, value15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L139()
    goto L139_;
  } else {
  // L140(i19, value15)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_value17_ = Rsh_Fir_reg_value15_;
    goto L140_;
  }

L139_:;
  // dr8 = tryDispatchBuiltin.1("[[", value15)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_value15_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args112);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc4 then L141() else L140(i19, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L141()
    goto L141_;
  } else {
  // L140(i19, dr8)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_value17_ = Rsh_Fir_reg_dr8_;
    goto L140_;
  }

L140_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L142() else D36()
  // L142()
  goto L142_;

L141_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L33(i19, dx8)
  // L33(i19, dx8)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L33_;

D36_:;
  // deopt 136 [i23, value17, n4]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_value17_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(136, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L142_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r54 = dyn __1(value17, n5)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_value17_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L33(i23, r54)
  // L33(i23, r54)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r54_;
  goto L33_;

L143_:;
  // dr10 = tryDispatchBuiltin.1("[[", l14)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args116);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc5 then L145() else L144(i25, dx9, l14, dx9, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L145()
    goto L145_;
  } else {
  // L144(i25, dx9, l14, dx9, dr10)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l14_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr10_;
    goto L144_;
  }

L144_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L146() else D37()
  // L146()
  goto L146_;

L145_:;
  // dx16 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L34(i25, dx9, l14, dx9, dx16)
  // L34(i25, dx9, l14, dx9, dx16)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx16_;
  goto L34_;

D37_:;
  // deopt 141 [i27, dx12, l17, dx13, l18, n6]
  SEXP Rsh_Fir_array_deopt_stack34[6];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack34[3] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack34[4] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack34[5] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(141, 6, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L146_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r55 = dyn __2(l18, n7)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L34(i27, dx12, l17, dx13, r55)
  // L34(i27, dx12, l17, dx13, r55)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l17_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r55_;
  goto L34_;

L147_:;
  // dr12 = tryDispatchBuiltin.0("[<-", dx19, dx18)
  SEXP Rsh_Fir_array_args120[3];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args120[2] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args120);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc6 then L149() else L148(i29, dx17, l20, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L149()
    goto L149_;
  } else {
  // L148(i29, dx17, l20, dr12)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l20_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dr12_;
    goto L148_;
  }

L148_:;
  // i34 = ld i
  Rsh_Fir_reg_i34_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L150() else D38()
  // L150()
  goto L150_;

L149_:;
  // dx25 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L35(i29, dx17, l20, dx25)
  // L35(i29, dx17, l20, dx25)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx25_;
  goto L35_;

D38_:;
  // deopt 145 [i31, dx22, l22, dx23, dx18, i34]
  SEXP Rsh_Fir_array_deopt_stack35[6];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack35[3] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack35[4] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_deopt_stack35[5] = Rsh_Fir_reg_i34_;
  Rsh_Fir_deopt(145, 6, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L150_:;
  // i35 = force? i34
  Rsh_Fir_reg_i35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i34_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r56 = dyn ___(dx23, dx18, i35)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_args123[2] = Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L35(i31, dx22, l22, r56)
  // L35(i31, dx22, l22, r56)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r56_;
  goto L35_;

L151_:;
  // dr14 = tryDispatchBuiltin.0("[[<-", l24, dx27)
  SEXP Rsh_Fir_array_args124[3];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args124[2] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args124);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if dc7 then L153() else L152(i33, dx26, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L153()
    goto L153_;
  } else {
  // L152(i33, dx26, dr14)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_dr14_;
    goto L152_;
  }

L152_:;
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L154() else D39()
  // L154()
  goto L154_;

L153_:;
  // dx31 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // goto L36(i33, dx31)
  // L36(i33, dx31)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
  goto L36_;

D39_:;
  // deopt 148 [i37, dx29, l26, dx27, n8]
  SEXP Rsh_Fir_array_deopt_stack36[5];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_deopt_stack36[4] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(148, 5, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L154_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r57 = dyn ____2(l26, dx27, n9)
  SEXP Rsh_Fir_array_args127[3];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_args127[2] = Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L36(i37, r57)
  // L36(i37, r57)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r57_;
  goto L36_;

D40_:;
  // deopt 155 [ici2]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_ici2_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L156_:;
  // ici3 = force? ici2
  Rsh_Fir_reg_ici3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ici2_);
  // checkMissing(ici3)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_ici3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c34 = `as.logical`(ici3)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_ici3_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if c34 then L157() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L157()
    goto L157_;
  } else {
  // L38()
    goto L38_;
  }

L157_:;
  // nms14 = ld nms
  Rsh_Fir_reg_nms14_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L158() else D41()
  // L158()
  goto L158_;

D41_:;
  // deopt 157 [nms14]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_nms14_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L158_:;
  // nms15 = force? nms14
  Rsh_Fir_reg_nms15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms14_);
  // checkMissing(nms15)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_nms15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // l27 = ld x
  Rsh_Fir_reg_l27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c35 = `is.object`(l27)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if c35 then L159() else L160(nms15, l27, nms15, l27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L159()
    goto L159_;
  } else {
  // L160(nms15, l27, nms15, l27)
    Rsh_Fir_reg_nms18_ = Rsh_Fir_reg_nms15_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_l27_;
    Rsh_Fir_reg_nms19_ = Rsh_Fir_reg_nms15_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_l27_;
    goto L160_;
  }

L159_:;
  // dr16 = tryDispatchBuiltin.1("[[", l27)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_l27_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc8 then L161() else L160(nms15, l27, nms15, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L161()
    goto L161_;
  } else {
  // L160(nms15, l27, nms15, dr16)
    Rsh_Fir_reg_nms18_ = Rsh_Fir_reg_nms15_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_l27_;
    Rsh_Fir_reg_nms19_ = Rsh_Fir_reg_nms15_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_dr16_;
    goto L160_;
  }

L160_:;
  // j7 = ld j
  Rsh_Fir_reg_j7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L162() else D42()
  // L162()
  goto L162_;

L161_:;
  // dx34 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // goto L39(nms15, l27, nms15, dx34)
  // L39(nms15, l27, nms15, dx34)
  Rsh_Fir_reg_nms22_ = Rsh_Fir_reg_nms15_;
  Rsh_Fir_reg_l33_ = Rsh_Fir_reg_l27_;
  Rsh_Fir_reg_nms23_ = Rsh_Fir_reg_nms15_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L39_;

D42_:;
  // deopt 161 [nms18, l30, nms19, l31, j7]
  SEXP Rsh_Fir_array_deopt_stack39[5];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_nms18_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_nms19_;
  Rsh_Fir_array_deopt_stack39[3] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_deopt_stack39[4] = Rsh_Fir_reg_j7_;
  Rsh_Fir_deopt(161, 5, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L162_:;
  // j8 = force? j7
  Rsh_Fir_reg_j8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j7_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r58 = dyn __3(l31, j8)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_j8_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L39(nms18, l30, nms19, r58)
  // L39(nms18, l30, nms19, r58)
  Rsh_Fir_reg_nms22_ = Rsh_Fir_reg_nms18_;
  Rsh_Fir_reg_l33_ = Rsh_Fir_reg_l30_;
  Rsh_Fir_reg_nms23_ = Rsh_Fir_reg_nms19_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r58_;
  goto L39_;

D43_:;
  // deopt 165 [nms22, l33, dx35, nms23]
  SEXP Rsh_Fir_array_deopt_stack40[4];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_nms22_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l33_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_nms23_;
  Rsh_Fir_deopt(165, 4, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L163_:;
  // r59 = dyn names__1(dx35, NULL, nms23)
  SEXP Rsh_Fir_array_args136[3];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args136[2] = Rsh_Fir_reg_nms23_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L164() else D44()
  // L164()
  goto L164_;

D44_:;
  // deopt 167 [nms22, l33, r59]
  SEXP Rsh_Fir_array_deopt_stack41[3];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_nms22_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l33_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(167, 3, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L164_:;
  // c36 = `is.object`(l33)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_l33_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if c36 then L165() else L166(nms22, l33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L165()
    goto L165_;
  } else {
  // L166(nms22, l33)
    Rsh_Fir_reg_nms25_ = Rsh_Fir_reg_nms22_;
    Rsh_Fir_reg_l35_ = Rsh_Fir_reg_l33_;
    goto L166_;
  }

L165_:;
  // dr18 = tryDispatchBuiltin.0("[[<-", l33, r59)
  SEXP Rsh_Fir_array_args138[3];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_l33_;
  Rsh_Fir_array_args138[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args138);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc9 then L167() else L166(nms22, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L167()
    goto L167_;
  } else {
  // L166(nms22, dr18)
    Rsh_Fir_reg_nms25_ = Rsh_Fir_reg_nms22_;
    Rsh_Fir_reg_l35_ = Rsh_Fir_reg_dr18_;
    goto L166_;
  }

L166_:;
  // j9 = ld j
  Rsh_Fir_reg_j9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L168() else D45()
  // L168()
  goto L168_;

L167_:;
  // dx36 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L40(nms22, dx36)
  // L40(nms22, dx36)
  Rsh_Fir_reg_nms27_ = Rsh_Fir_reg_nms22_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L40_;

D45_:;
  // deopt 168 [nms25, l35, r59, j9]
  SEXP Rsh_Fir_array_deopt_stack42[4];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_nms25_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_j9_;
  Rsh_Fir_deopt(168, 4, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L168_:;
  // j10 = force? j9
  Rsh_Fir_reg_j10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j9_);
  // ____3 = ldf `[[<-` in base
  Rsh_Fir_reg_____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r60 = dyn ____3(l35, r59, j10)
  SEXP Rsh_Fir_array_args141[3];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args141[2] = Rsh_Fir_reg_j10_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____3_, 3, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L40(nms25, r60)
  // L40(nms25, r60)
  Rsh_Fir_reg_nms27_ = Rsh_Fir_reg_nms25_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r60_;
  goto L40_;

D46_:;
  // deopt 174 [value18]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_value18_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L170_:;
  // value19 = force? value18
  Rsh_Fir_reg_value19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value18_);
  // checkMissing(value19)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_value19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // l36 = ld x
  Rsh_Fir_reg_l36_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c37 = `is.object`(l36)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_l36_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if c37 then L171() else L172(value19, l36, value19, l36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L171()
    goto L171_;
  } else {
  // L172(value19, l36, value19, l36)
    Rsh_Fir_reg_value22_ = Rsh_Fir_reg_value19_;
    Rsh_Fir_reg_l39_ = Rsh_Fir_reg_l36_;
    Rsh_Fir_reg_value23_ = Rsh_Fir_reg_value19_;
    Rsh_Fir_reg_l40_ = Rsh_Fir_reg_l36_;
    goto L172_;
  }

L171_:;
  // dr20 = tryDispatchBuiltin.1("[[", l36)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_l36_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args144);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if dc10 then L173() else L172(value19, l36, value19, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L173()
    goto L173_;
  } else {
  // L172(value19, l36, value19, dr20)
    Rsh_Fir_reg_value22_ = Rsh_Fir_reg_value19_;
    Rsh_Fir_reg_l39_ = Rsh_Fir_reg_l36_;
    Rsh_Fir_reg_value23_ = Rsh_Fir_reg_value19_;
    Rsh_Fir_reg_l40_ = Rsh_Fir_reg_dr20_;
    goto L172_;
  }

L172_:;
  // j11 = ld j
  Rsh_Fir_reg_j11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L174() else D47()
  // L174()
  goto L174_;

L173_:;
  // dx38 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // goto L42(value19, l36, value19, dx38)
  // L42(value19, l36, value19, dx38)
  Rsh_Fir_reg_value26_ = Rsh_Fir_reg_value19_;
  Rsh_Fir_reg_l42_ = Rsh_Fir_reg_l36_;
  Rsh_Fir_reg_value27_ = Rsh_Fir_reg_value19_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L42_;

D47_:;
  // deopt 178 [value22, l39, value23, l40, j11]
  SEXP Rsh_Fir_array_deopt_stack44[5];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_value22_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_l39_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_value23_;
  Rsh_Fir_array_deopt_stack44[3] = Rsh_Fir_reg_l40_;
  Rsh_Fir_array_deopt_stack44[4] = Rsh_Fir_reg_j11_;
  Rsh_Fir_deopt(178, 5, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L174_:;
  // j12 = force? j11
  Rsh_Fir_reg_j12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j11_);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r61 = dyn __4(l40, j12)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_l40_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_j12_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L42(value22, l39, value23, r61)
  // L42(value22, l39, value23, r61)
  Rsh_Fir_reg_value26_ = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_l42_ = Rsh_Fir_reg_l39_;
  Rsh_Fir_reg_value27_ = Rsh_Fir_reg_value23_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r61_;
  goto L42_;

L175_:;
  // dr22 = tryDispatchBuiltin.0("[<-", dx39, value27)
  SEXP Rsh_Fir_array_args148[3];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_args148[2] = Rsh_Fir_reg_value27_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args148);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // if dc11 then L177() else L176(value26, l42, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L177()
    goto L177_;
  } else {
  // L176(value26, l42, dr22)
    Rsh_Fir_reg_value29_ = Rsh_Fir_reg_value26_;
    Rsh_Fir_reg_l44_ = Rsh_Fir_reg_l42_;
    Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dr22_;
    goto L176_;
  }

L176_:;
  // i40 = ld i
  Rsh_Fir_reg_i40_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L178() else D48()
  // L178()
  goto L178_;

L177_:;
  // dx42 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // goto L43(value26, l42, dx42)
  // L43(value26, l42, dx42)
  Rsh_Fir_reg_value31_ = Rsh_Fir_reg_value26_;
  Rsh_Fir_reg_l46_ = Rsh_Fir_reg_l42_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L43_;

D48_:;
  // deopt 182 [value29, l44, dx41, value27, i40]
  SEXP Rsh_Fir_array_deopt_stack45[5];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_value29_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_l44_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_deopt_stack45[3] = Rsh_Fir_reg_value27_;
  Rsh_Fir_array_deopt_stack45[4] = Rsh_Fir_reg_i40_;
  Rsh_Fir_deopt(182, 5, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L178_:;
  // i41 = force? i40
  Rsh_Fir_reg_i41_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i40_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r62 = dyn ___1(dx41, value27, i41)
  SEXP Rsh_Fir_array_args151[3];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_value27_;
  Rsh_Fir_array_args151[2] = Rsh_Fir_reg_i41_;
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L43(value29, l44, r62)
  // L43(value29, l44, r62)
  Rsh_Fir_reg_value31_ = Rsh_Fir_reg_value29_;
  Rsh_Fir_reg_l46_ = Rsh_Fir_reg_l44_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r62_;
  goto L43_;

L179_:;
  // dr24 = tryDispatchBuiltin.0("[[<-", l46, dx43)
  SEXP Rsh_Fir_array_args152[3];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_l46_;
  Rsh_Fir_array_args152[2] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args152);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc12 then L181() else L180(value31, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L181()
    goto L181_;
  } else {
  // L180(value31, dr24)
    Rsh_Fir_reg_value33_ = Rsh_Fir_reg_value31_;
    Rsh_Fir_reg_l48_ = Rsh_Fir_reg_dr24_;
    goto L180_;
  }

L180_:;
  // j13 = ld j
  Rsh_Fir_reg_j13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L182() else D49()
  // L182()
  goto L182_;

L181_:;
  // dx44 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L44(value31, dx44)
  // L44(value31, dx44)
  Rsh_Fir_reg_value35_ = Rsh_Fir_reg_value31_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L44_;

D49_:;
  // deopt 185 [value33, l48, dx43, j13]
  SEXP Rsh_Fir_array_deopt_stack46[4];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_value33_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_l48_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_array_deopt_stack46[3] = Rsh_Fir_reg_j13_;
  Rsh_Fir_deopt(185, 4, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L182_:;
  // j14 = force? j13
  Rsh_Fir_reg_j14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j13_);
  // ____4 = ldf `[[<-` in base
  Rsh_Fir_reg_____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r63 = dyn ____4(l48, dx43, j14)
  SEXP Rsh_Fir_array_args155[3];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_l48_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_array_args155[2] = Rsh_Fir_reg_j14_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____4_, 3, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L44(value33, r63)
  // L44(value33, r63)
  Rsh_Fir_reg_value35_ = Rsh_Fir_reg_value33_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r63_;
  goto L44_;

D50_:;
  // deopt 189 [cl]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_cl;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L183_:;
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // l49 = ld x
  Rsh_Fir_reg_l49_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L184() else D51()
  // L184()
  goto L184_;

D51_:;
  // deopt 192 [cl1, l49, cl1]
  SEXP Rsh_Fir_array_deopt_stack48[3];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_l49_;
  Rsh_Fir_array_deopt_stack48[2] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_deopt(192, 3, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L184_:;
  // r64 = dyn class__(l49, NULL, cl1)
  SEXP Rsh_Fir_array_args157[3];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_l49_;
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args157[2] = Rsh_Fir_reg_cl1_;
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L185() else D52()
  // L185()
  goto L185_;

D52_:;
  // deopt 194 [cl1, r64]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_cl1_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(194, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L185_:;
  // st x = r64
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L186() else D53()
  // L186()
  goto L186_;

D53_:;
  // deopt 196 [x17]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L186_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x18
  return Rsh_Fir_reg_x18_;
}
SEXP Rsh_Fir_user_promise_inner650999460_(SEXP CCP, SEXP RHO) {
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return value4
  return Rsh_Fir_reg_value4_;
}
SEXP Rsh_Fir_user_promise_inner650999460_1(SEXP CCP, SEXP RHO) {
  // value12 = ld value
  Rsh_Fir_reg_value12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // value13 = force? value12
  Rsh_Fir_reg_value13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value12_);
  // checkMissing(value13)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_value13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return value13
  return Rsh_Fir_reg_value13_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
