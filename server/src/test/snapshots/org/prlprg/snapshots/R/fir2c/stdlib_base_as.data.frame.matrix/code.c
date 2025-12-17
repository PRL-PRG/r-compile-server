#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1716100263_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1716100263_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1716100263_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1716100263_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1716100263_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1716100263_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1716100263_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1716100263_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1716100263_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1716100263_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1716100263_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner1716100263
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1716100263_, RHO, CCP);
  // st `as.data.frame.matrix` = r
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
SEXP Rsh_Fir_user_function_inner1716100263_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1716100263 dynamic dispatch ([x, `row.names`, optional, `make.names`, `...`, stringsAsFactors])

  return Rsh_Fir_user_version_inner1716100263_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1716100263_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1716100263 version 0 (*, *, *, *, dots, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1716100263/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_row_names;  // row_names
  SEXP Rsh_Fir_reg_optional;  // optional
  SEXP Rsh_Fir_reg_make_names;  // make_names
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_stringsAsFactors;  // stringsAsFactors
  SEXP Rsh_Fir_reg_row_names_isMissing;  // row_names_isMissing
  SEXP Rsh_Fir_reg_row_names_orDefault;  // row_names_orDefault
  SEXP Rsh_Fir_reg_optional_isMissing;  // optional_isMissing
  SEXP Rsh_Fir_reg_optional_orDefault;  // optional_orDefault
  SEXP Rsh_Fir_reg_make_names_isMissing;  // make_names_isMissing
  SEXP Rsh_Fir_reg_make_names_orDefault;  // make_names_orDefault
  SEXP Rsh_Fir_reg_stringsAsFactors_isMissing;  // stringsAsFactors_isMissing
  SEXP Rsh_Fir_reg_stringsAsFactors_orDefault;  // stringsAsFactors_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_d4_;  // d4
  SEXP Rsh_Fir_reg_d5_;  // d5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_d7_;  // d7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_ncols;  // ncols
  SEXP Rsh_Fir_reg_ncols1_;  // ncols1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_row_names1_;  // row_names1
  SEXP Rsh_Fir_reg_row_names2_;  // row_names2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dn;  // dn
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_dn4_;  // dn4
  SEXP Rsh_Fir_reg_dn5_;  // dn5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_dn7_;  // dn7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_collabs;  // collabs
  SEXP Rsh_Fir_reg_collabs1_;  // collabs1
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_ic;  // ic
  SEXP Rsh_Fir_reg_ic1_;  // ic1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_empty;  // empty
  SEXP Rsh_Fir_reg_empty1_;  // empty1
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_empty2_;  // empty2
  SEXP Rsh_Fir_reg_empty3_;  // empty3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_ncols2_;  // ncols2
  SEXP Rsh_Fir_reg_ncols3_;  // ncols3
  SEXP Rsh_Fir_reg_vector;  // vector
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_mode;  // mode
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_stringsAsFactors1_;  // stringsAsFactors1
  SEXP Rsh_Fir_reg_stringsAsFactors2_;  // stringsAsFactors2
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_ic2_;  // ic2
  SEXP Rsh_Fir_reg_ic3_;  // ic3
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_as_factor;  // as_factor
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_ic4_;  // ic4
  SEXP Rsh_Fir_reg_ic5_;  // ic5
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_as_vector;  // as_vector
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_row_names3_;  // row_names3
  SEXP Rsh_Fir_reg_row_names4_;  // row_names4
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_row_names5_;  // row_names5
  SEXP Rsh_Fir_reg_row_names6_;  // row_names6
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_nrows;  // nrows
  SEXP Rsh_Fir_reg_nrows1_;  // nrows1
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_collabs2_;  // collabs2
  SEXP Rsh_Fir_reg_collabs3_;  // collabs3
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_ncols4_;  // ncols4
  SEXP Rsh_Fir_reg_ncols5_;  // ncols5
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_collabs4_;  // collabs4
  SEXP Rsh_Fir_reg_collabs5_;  // collabs5
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_optional1_;  // optional1
  SEXP Rsh_Fir_reg_optional2_;  // optional2
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_ic6_;  // ic6
  SEXP Rsh_Fir_reg_ic7_;  // ic7
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_names__1_;  // names__1
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_autoRN;  // autoRN
  SEXP Rsh_Fir_reg_autoRN1_;  // autoRN1
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg__set_row_names;  // _set_row_names
  SEXP Rsh_Fir_reg_nrows2_;  // nrows2
  SEXP Rsh_Fir_reg_nrows3_;  // nrows3
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_row_names7_;  // row_names7
  SEXP Rsh_Fir_reg_row_names8_;  // row_names8
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg__rowNamesDF__;  // _rowNamesDF__
  SEXP Rsh_Fir_reg_make_names1_;  // make_names1
  SEXP Rsh_Fir_reg_make_names2_;  // make_names2
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_row_names = PARAMS[1];
  Rsh_Fir_reg_optional = PARAMS[2];
  Rsh_Fir_reg_make_names = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];
  Rsh_Fir_reg_stringsAsFactors = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // row_names_isMissing = missing.0(row_names)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_row_names;
  Rsh_Fir_reg_row_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if row_names_isMissing then L0(NULL) else L0(row_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_row_names_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_row_names_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(row_names)
    Rsh_Fir_reg_row_names_orDefault = Rsh_Fir_reg_row_names;
    goto L0_;
  }

L0_:;
  // st `row.names` = row_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_row_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_row_names_orDefault);
  // optional_isMissing = missing.0(optional)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_optional;
  Rsh_Fir_reg_optional_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if optional_isMissing then L1(FALSE) else L1(optional)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_optional_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_optional_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(optional)
    Rsh_Fir_reg_optional_orDefault = Rsh_Fir_reg_optional;
    goto L1_;
  }

L1_:;
  // st optional = optional_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_optional_orDefault, RHO);
  (void)(Rsh_Fir_reg_optional_orDefault);
  // make_names_isMissing = missing.0(make_names)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_make_names;
  Rsh_Fir_reg_make_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if make_names_isMissing then L2(TRUE) else L2(make_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_make_names_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_make_names_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(make_names)
    Rsh_Fir_reg_make_names_orDefault = Rsh_Fir_reg_make_names;
    goto L2_;
  }

L2_:;
  // st `make.names` = make_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_make_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_make_names_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // stringsAsFactors_isMissing = missing.0(stringsAsFactors)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_stringsAsFactors;
  Rsh_Fir_reg_stringsAsFactors_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if stringsAsFactors_isMissing then L3(FALSE) else L3(stringsAsFactors)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_stringsAsFactors_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_stringsAsFactors_orDefault = Rsh_const(CCP, 4);
    goto L3_;
  } else {
  // L3(stringsAsFactors)
    Rsh_Fir_reg_stringsAsFactors_orDefault = Rsh_Fir_reg_stringsAsFactors;
    goto L3_;
  }

L3_:;
  // st stringsAsFactors = stringsAsFactors_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_stringsAsFactors_orDefault, RHO);
  (void)(Rsh_Fir_reg_stringsAsFactors_orDefault);
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L4_:;
  // st d = r1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L43() else D2()
  // L43()
  goto L43_;

L5_:;
  // st nrows = dx1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // d4 = ld d
  Rsh_Fir_reg_d4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L47() else D3()
  // L47()
  goto L47_;

L6_:;
  // st ncols = dx3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym1 = ldf seq_len
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf seq_len in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L7_:;
  // st ic = r6
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym2 = ldf dimnames
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf dimnames in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L8_:;
  // st dn = r9
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L9_:;
  // c3 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c3 then L61() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L61()
    goto L61_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L12()
  // L12()
  goto L12_;

L11_:;
  // st `row.names` = dx5
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // dn4 = ld dn
  Rsh_Fir_reg_dn4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L67() else D9()
  // L67()
  goto L67_;

L13_:;
  // st collabs = dx8
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard4 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L14_:;
  // c6 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c6 then L78() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L78()
    goto L78_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // r20 = `!`(r18)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // st empty = r20
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r21 = dyn any(r20)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L77() else D12()
  // L77()
  goto L77_;

L16_:;
  // goto L19()
  // L19()
  goto L19_;

L17_:;
  // l = ld collabs
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c8 = `is.object`(l)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c8 then L85() else L86(dx10, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L85()
    goto L85_;
  } else {
  // L86(dx10, l)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx10_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L86_;
  }

L18_:;
  // st collabs = dx16
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // sym6 = ldf vector
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base6 = ldf vector in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard6 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L20_:;
  // st value = r29
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // mode = ldf mode
  Rsh_Fir_reg_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L94() else D19()
  // L94()
  goto L94_;

L21_:;
  // c15 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c15 then L99() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L99()
    goto L99_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // ic4 = ld ic
  Rsh_Fir_reg_ic4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L109() else D26()
  // L109()
  goto L109_;

L23_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // c16 = `<`.1(l3, i2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if c16 then L101() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L101()
    goto L101_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // st value = dx21
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L23(i10)
  // L23(i10)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i10_;
  goto L23_;

L25_:;
  // x7 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_x7_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // st i = x7
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x7_, RHO);
  (void)(Rsh_Fir_reg_x7_);
  // as_factor = ldf `as.factor`
  Rsh_Fir_reg_as_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L102() else D23()
  // L102()
  goto L102_;

L26_:;
  // sym7 = ldf `is.null`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base7 = ldf `is.null` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard7 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L27_:;
  // i16 = `+`.1(i15, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_i16_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // c19 = `<`.1(l7, i16)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if c19 then L110() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L110()
    goto L110_;
  } else {
  // L29()
    goto L29_;
  }

L28_:;
  // st value = dx25
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // goto L27(i24)
  // L27(i24)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i24_;
  goto L27_;

L29_:;
  // x12 = `[[`(s1, i16, NULL, TRUE)
  SEXP Rsh_Fir_array_args22[4];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_x12_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // st i = x12
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x12_, RHO);
  (void)(Rsh_Fir_reg_x12_);
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L111() else D27()
  // L111()
  goto L111_;

L30_:;
  // c23 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c23 then L31(c23) else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L31(c23)
    Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c23_;
    goto L31_;
  } else {
  // L120()
    goto L120_;
  }

L31_:;
  // st autoRN = c24
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_c24_, RHO);
  (void)(Rsh_Fir_reg_c24_);
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard9 then L127() else L128()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L127()
    goto L127_;
  } else {
  // L128()
    goto L128_;
  }

L32_:;
  // nrows = ld nrows
  Rsh_Fir_reg_nrows = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L125() else D33()
  // L125()
  goto L125_;

L33_:;
  // ncols4 = ld ncols
  Rsh_Fir_reg_ncols4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L131() else D36()
  // L131()
  goto L131_;

L34_:;
  // optional1 = ld optional
  Rsh_Fir_reg_optional1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L138() else D41()
  // L138()
  goto L138_;

L35_:;
  // l13 = ld value
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L145() else D46()
  // L145()
  goto L145_;

L36_:;
  // goto L35()
  // L35()
  goto L35_;

L37_:;
  // row_names7 = ld `row.names`
  Rsh_Fir_reg_row_names7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L154() else D53()
  // L154()
  goto L154_;

L38_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L157() else D56()
  // L157()
  goto L157_;

L39_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D0()
  // L41()
  goto L41_;

L40_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L4(r)
  // L4(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L4_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L41_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r2 = dyn dim(x2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L42() else D1()
  // L42()
  goto L42_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L4_;

D2_:;
  // deopt 7 [d]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L43_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c = `is.object`(d1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c then L44() else L45(d1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L44()
    goto L44_;
  } else {
  // L45(d1)
    Rsh_Fir_reg_d3_ = Rsh_Fir_reg_d1_;
    goto L45_;
  }

L44_:;
  // dr = tryDispatchBuiltin.1("[[", d1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc then L46() else L45(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr)
    Rsh_Fir_reg_d3_ = Rsh_Fir_reg_dr;
    goto L45_;
  }

L45_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r3 = dyn __(d3, 1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r3)
  // L5(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L5_;

L46_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D3_:;
  // deopt 13 [d4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_d4_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L47_:;
  // d5 = force? d4
  Rsh_Fir_reg_d5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_d5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(d5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c1 then L48() else L49(d5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L48()
    goto L48_;
  } else {
  // L49(d5)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_d5_;
    goto L49_;
  }

L48_:;
  // dr2 = tryDispatchBuiltin.1("[[", d5)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_d5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc1 then L50() else L49(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L50()
    goto L50_;
  } else {
  // L49(dr2)
    Rsh_Fir_reg_d7_ = Rsh_Fir_reg_dr2_;
    goto L49_;
  }

L49_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r4 = dyn __1(d7, 2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_d7_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L6(r4)
  // L6(r4)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r4_;
  goto L6_;

L50_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L6(dx2)
  // L6(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L6_;

L51_:;
  // ncols = ld ncols
  Rsh_Fir_reg_ncols = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L53() else D4()
  // L53()
  goto L53_;

L52_:;
  // r5 = dyn base1(<sym ncols>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(r5)
  // L7(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L7_;

D4_:;
  // deopt 20 [ncols]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_ncols;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L53_:;
  // ncols1 = force? ncols
  Rsh_Fir_reg_ncols1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols);
  // checkMissing(ncols1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_ncols1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // r7 = seq_len(ncols1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_ncols1_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L7(r7)
  // L7(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L7_;

L54_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L56() else D5()
  // L56()
  goto L56_;

L55_:;
  // r8 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r8)
  // L8(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L8_;

D5_:;
  // deopt 26 [x3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L56_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r10 = dyn dimnames(x4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L57() else D6()
  // L57()
  goto L57_;

D6_:;
  // deopt 29 [r10]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L8(r10)
  // L8(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L8_;

L58_:;
  // row_names1 = ld `row.names`
  Rsh_Fir_reg_row_names1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L60() else D7()
  // L60()
  goto L60_;

L59_:;
  // r11 = dyn base3(<sym row.names>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(r11)
  // L9(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L9_;

D7_:;
  // deopt 32 [row_names1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_row_names1_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L60_:;
  // row_names2 = force? row_names1
  Rsh_Fir_reg_row_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names1_);
  // checkMissing(row_names2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_row_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c2 = `==`(row_names2, NULL)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_row_names2_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L9(c2)
  // L9(c2)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_c2_;
  goto L9_;

L61_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L62() else D8()
  // L62()
  goto L62_;

D8_:;
  // deopt 35 [dn]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L62_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(dn1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c4 then L63() else L64(dn1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L63()
    goto L63_;
  } else {
  // L64(dn1)
    Rsh_Fir_reg_dn3_ = Rsh_Fir_reg_dn1_;
    goto L64_;
  }

L63_:;
  // dr4 = tryDispatchBuiltin.1("[[", dn1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc2 then L65() else L64(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L65()
    goto L65_;
  } else {
  // L64(dr4)
    Rsh_Fir_reg_dn3_ = Rsh_Fir_reg_dr4_;
    goto L64_;
  }

L64_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r13 = dyn __2(dn3, 1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L11(r13)
  // L11(r13)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r13_;
  goto L11_;

L65_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L11(dx4)
  // L11(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L11_;

D9_:;
  // deopt 43 [dn4]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dn4_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L67_:;
  // dn5 = force? dn4
  Rsh_Fir_reg_dn5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn4_);
  // checkMissing(dn5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dn5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(dn5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c5 then L68() else L69(dn5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L68()
    goto L68_;
  } else {
  // L69(dn5)
    Rsh_Fir_reg_dn7_ = Rsh_Fir_reg_dn5_;
    goto L69_;
  }

L68_:;
  // dr6 = tryDispatchBuiltin.1("[[", dn5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc3 then L70() else L69(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L70()
    goto L70_;
  } else {
  // L69(dr6)
    Rsh_Fir_reg_dn7_ = Rsh_Fir_reg_dr6_;
    goto L69_;
  }

L69_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r14 = dyn __3(dn7, 2)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dn7_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L13(r14)
  // L13(r14)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r14_;
  goto L13_;

L70_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L13(dx7)
  // L13(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L13_;

L71_:;
  // sym5 = ldf nzchar
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base5 = ldf nzchar in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard5 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L72_:;
  // r15 = dyn base4(<lang `<-`(empty, `!`(nzchar(collabs)))>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L14(r15)
  // L14(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L14_;

L73_:;
  // collabs = ld collabs
  Rsh_Fir_reg_collabs = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L75() else D10()
  // L75()
  goto L75_;

L74_:;
  // r17 = dyn base5(<sym collabs>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L15(r17)
  // L15(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L15_;

D10_:;
  // deopt 53 [collabs]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_collabs;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L75_:;
  // collabs1 = force? collabs
  Rsh_Fir_reg_collabs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_collabs);
  // checkMissing(collabs1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_collabs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r19 = dyn nzchar(collabs1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_collabs1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L76() else D11()
  // L76()
  goto L76_;

D11_:;
  // deopt 56 [r19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L15(r19)
  // L15(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L15_;

D12_:;
  // deopt 60 [r21]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L14(r21)
  // L14(r21)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r21_;
  goto L14_;

L78_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L79() else D13()
  // L79()
  goto L79_;

D13_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p = prom<V +>{
  //   ic = ld ic;
  //   ic1 = force? ic;
  //   checkMissing(ic1);
  //   return ic1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716100263_, CCP, RHO);
  // r23 = dyn paste0("V", p)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L80() else D14()
  // L80()
  goto L80_;

D14_:;
  // deopt 65 [r23]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L80_:;
  // c7 = `is.object`(r23)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c7 then L81() else L82(r23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L81()
    goto L81_;
  } else {
  // L82(r23)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
    goto L82_;
  }

L81_:;
  // dr8 = tryDispatchBuiltin.1("[", r23)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc4 then L83() else L82(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L83()
    goto L83_;
  } else {
  // L82(dr8)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_dr8_;
    goto L82_;
  }

L82_:;
  // empty = ld empty
  Rsh_Fir_reg_empty = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L84() else D15()
  // L84()
  goto L84_;

L83_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L17(dx9)
  // L17(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L17_;

D15_:;
  // deopt 66 [r25, empty]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_empty;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L84_:;
  // empty1 = force? empty
  Rsh_Fir_reg_empty1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_empty);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r26 = dyn __4(r25, empty1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_empty1_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L17(r26)
  // L17(r26)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r26_;
  goto L17_;

L85_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l, dx10)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args73);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc5 then L87() else L86(dx10, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L87()
    goto L87_;
  } else {
  // L86(dx10, dr10)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx10_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr10_;
    goto L86_;
  }

L86_:;
  // empty2 = ld empty
  Rsh_Fir_reg_empty2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L88() else D16()
  // L88()
  goto L88_;

L87_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L18(dx10, dx14)
  // L18(dx10, dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx14_;
  goto L18_;

D16_:;
  // deopt 70 [dx12, l2, dx10, empty2]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_empty2_;
  Rsh_Fir_deopt(70, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L88_:;
  // empty3 = force? empty2
  Rsh_Fir_reg_empty3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_empty2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r27 = dyn ___(l2, dx10, empty3)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_empty3_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L18(dx12, r27)
  // L18(dx12, r27)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r27_;
  goto L18_;

L90_:;
  // ncols2 = ld ncols
  Rsh_Fir_reg_ncols2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L92() else D17()
  // L92()
  goto L92_;

L91_:;
  // r28 = dyn base6("list", <sym ncols>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L20(r28)
  // L20(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L20_;

D17_:;
  // deopt 79 [ncols2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_ncols2_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L92_:;
  // ncols3 = force? ncols2
  Rsh_Fir_reg_ncols3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols2_);
  // checkMissing(ncols3)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_ncols3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r30 = dyn vector("list", ncols3)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_ncols3_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L93() else D18()
  // L93()
  goto L93_;

D18_:;
  // deopt 82 [r30]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L20(r30)
  // L20(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L20_;

D19_:;
  // deopt 85 []
  Rsh_Fir_deopt(85, 0, NULL, CCP, RHO);
  return R_NilValue;

L94_:;
  // p1 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716100263_1, CCP, RHO);
  // r32 = dyn mode(p1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L95() else D20()
  // L95()
  goto L95_;

D20_:;
  // deopt 87 [r32]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L95_:;
  // r33 = `==`(r32, "character")
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c9 then L96() else L21(c9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L96()
    goto L96_;
  } else {
  // L21(c9)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
    goto L21_;
  }

L96_:;
  // stringsAsFactors1 = ld stringsAsFactors
  Rsh_Fir_reg_stringsAsFactors1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L97() else D21()
  // L97()
  goto L97_;

D21_:;
  // deopt 90 [c9, stringsAsFactors1]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_stringsAsFactors1_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L97_:;
  // stringsAsFactors2 = force? stringsAsFactors1
  Rsh_Fir_reg_stringsAsFactors2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stringsAsFactors1_);
  // checkMissing(stringsAsFactors2)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_stringsAsFactors2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c12 = `as.logical`(stringsAsFactors2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_stringsAsFactors2_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // c13 = `&&`(c9, c12)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L21(c13)
  // L21(c13)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c13_;
  goto L21_;

L99_:;
  // ic2 = ld ic
  Rsh_Fir_reg_ic2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L100() else D22()
  // L100()
  goto L100_;

D22_:;
  // deopt 93 [ic2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_ic2_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L100_:;
  // ic3 = force? ic2
  Rsh_Fir_reg_ic3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ic2_);
  // checkMissing(ic3)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_ic3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // s = toForSeq(ic3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_ic3_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // l3 = length(s)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l3_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 45);
  // goto L23(i)
  // L23(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L23_;

L101_:;
  // goto L26()
  // L26()
  goto L26_;

D23_:;
  // deopt 96 [i2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L102_:;
  // p2 = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   c17 = `is.object`(x9);
  //   if c17 then L1() else L2();
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", x9);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2();
  // L2():
  //   i5 = ld i;
  //   i6 = force? i5;
  //   __5 = ldf `[` in base;
  //   r34 = dyn __5(x9, <missing>, i6);
  //   goto L0(r34);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716100263_2, CCP, RHO);
  // r36 = dyn as_factor(p2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_factor, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L103() else D24()
  // L103()
  goto L103_;

D24_:;
  // deopt 98 [i2, r36]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L103_:;
  // l4 = ld value
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // c18 = `is.object`(l4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c18 then L104() else L105(i2, r36, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L104()
    goto L104_;
  } else {
  // L105(i2, r36, l4)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r36_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L105_;
  }

L104_:;
  // dr14 = tryDispatchBuiltin.0("[[<-", l4, r36)
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args98[2] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args98);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc7 then L106() else L105(i2, r36, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L106()
    goto L106_;
  } else {
  // L105(i2, r36, dr14)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r36_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr14_;
    goto L105_;
  }

L105_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L107() else D25()
  // L107()
  goto L107_;

L106_:;
  // dx20 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L24(i2, dx20)
  // L24(i2, dx20)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L24_;

D25_:;
  // deopt 100 [i8, r38, l6, r36, i11]
  SEXP Rsh_Fir_array_deopt_stack23[5];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack23[4] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(100, 5, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L107_:;
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r41 = dyn ____(l6, r36, i12)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args101[2] = Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L24(i8, r41)
  // L24(i8, r41)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r41_;
  goto L24_;

D26_:;
  // deopt 107 [ic4]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_ic4_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L109_:;
  // ic5 = force? ic4
  Rsh_Fir_reg_ic5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ic4_);
  // checkMissing(ic5)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_ic5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(ic5)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_ic5_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // l7 = length(s1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // i14 = 0
  Rsh_Fir_reg_i14_ = Rsh_const(CCP, 45);
  // goto L27(i14)
  // L27(i14)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i14_;
  goto L27_;

L110_:;
  // goto L26()
  // L26()
  goto L26_;

D27_:;
  // deopt 110 [i16]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L111_:;
  // p3 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   c20 = `is.object`(x14);
  //   if c20 then L1() else L2();
  // L0(dx23):
  //   return dx23;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", x14);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2();
  // L2():
  //   i19 = ld i;
  //   i20 = force? i19;
  //   __6 = ldf `[` in base;
  //   r42 = dyn __6(x14, <missing>, i20);
  //   goto L0(r42);
  // L3():
  //   dx22 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx22);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716100263_3, CCP, RHO);
  // r44 = dyn as_vector(p3)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L112() else D28()
  // L112()
  goto L112_;

D28_:;
  // deopt 112 [i16, r44]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L112_:;
  // l8 = ld value
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // c21 = `is.object`(l8)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if c21 then L113() else L114(i16, r44, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L113()
    goto L113_;
  } else {
  // L114(i16, r44, l8)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L114_;
  }

L113_:;
  // dr18 = tryDispatchBuiltin.0("[[<-", l8, r44)
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args113[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args113);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc9 then L115() else L114(i16, r44, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L115()
    goto L115_;
  } else {
  // L114(i16, r44, dr18)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr18_;
    goto L114_;
  }

L114_:;
  // i25 = ld i
  Rsh_Fir_reg_i25_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L116() else D29()
  // L116()
  goto L116_;

L115_:;
  // dx24 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L28(i16, dx24)
  // L28(i16, dx24)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L28_;

D29_:;
  // deopt 114 [i22, r46, l10, r44, i25]
  SEXP Rsh_Fir_array_deopt_stack27[5];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_deopt_stack27[4] = Rsh_Fir_reg_i25_;
  Rsh_Fir_deopt(114, 5, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L116_:;
  // i26 = force? i25
  Rsh_Fir_reg_i26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i25_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r49 = dyn ____1(l10, r44, i26)
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args116[2] = Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L28(i22, r49)
  // L28(i22, r49)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r49_;
  goto L28_;

L117_:;
  // row_names3 = ld `row.names`
  Rsh_Fir_reg_row_names3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L119() else D30()
  // L119()
  goto L119_;

L118_:;
  // r50 = dyn base7(<sym row.names>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L30(r50)
  // L30(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L30_;

D30_:;
  // deopt 122 [row_names3]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_row_names3_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L119_:;
  // row_names4 = force? row_names3
  Rsh_Fir_reg_row_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names3_);
  // checkMissing(row_names4)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_row_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c22 = `==`(row_names4, NULL)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_row_names4_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L30(c22)
  // L30(c22)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_c22_;
  goto L30_;

L120_:;
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args120);
  // if guard8 then L121() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L121()
    goto L121_;
  } else {
  // L122()
    goto L122_;
  }

L121_:;
  // row_names5 = ld `row.names`
  Rsh_Fir_reg_row_names5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L123() else D31()
  // L123()
  goto L123_;

L122_:;
  // r52 = dyn base8(<sym row.names>)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L32(c23, r52)
  // L32(c23, r52)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L32_;

D31_:;
  // deopt 127 [c23, row_names5]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_row_names5_;
  Rsh_Fir_deopt(127, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L123_:;
  // row_names6 = force? row_names5
  Rsh_Fir_reg_row_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names5_);
  // checkMissing(row_names6)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_row_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r54 = dyn length(row_names6)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_row_names6_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L124() else D32()
  // L124()
  goto L124_;

D32_:;
  // deopt 130 [c23, r54]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(130, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L32(c23, r54)
  // L32(c23, r54)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L32_;

D33_:;
  // deopt 130 [c28, r53, nrows]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_nrows;
  Rsh_Fir_deopt(130, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L125_:;
  // nrows1 = force? nrows
  Rsh_Fir_reg_nrows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows);
  // checkMissing(nrows1)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_nrows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // r55 = `!=`(r53, nrows1)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_nrows1_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // c29 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // c30 = `||`(c28, c29)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // goto L31(c30)
  // L31(c30)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c30_;
  goto L31_;

L127_:;
  // collabs2 = ld collabs
  Rsh_Fir_reg_collabs2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L129() else D34()
  // L129()
  goto L129_;

L128_:;
  // r56 = dyn base9(<sym collabs>)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L33(r56)
  // L33(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L33_;

D34_:;
  // deopt 137 [collabs2]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_collabs2_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L129_:;
  // collabs3 = force? collabs2
  Rsh_Fir_reg_collabs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_collabs2_);
  // checkMissing(collabs3)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_collabs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r58 = dyn length1(collabs3)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_collabs3_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L130() else D35()
  // L130()
  goto L130_;

D35_:;
  // deopt 140 [r58]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L130_:;
  // goto L33(r58)
  // L33(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L33_;

D36_:;
  // deopt 140 [r57, ncols4]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_ncols4_;
  Rsh_Fir_deopt(140, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L131_:;
  // ncols5 = force? ncols4
  Rsh_Fir_reg_ncols5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols4_);
  // checkMissing(ncols5)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_ncols5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // r59 = `==`(r57, ncols5)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_ncols5_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // c32 = `as.logical`(r59)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if c32 then L132() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L132()
    goto L132_;
  } else {
  // L34()
    goto L34_;
  }

L132_:;
  // ____2 = ldf `%||%`
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L133() else D37()
  // L133()
  goto L133_;

D37_:;
  // deopt 144 []
  Rsh_Fir_deopt(144, 0, NULL, CCP, RHO);
  return R_NilValue;

L133_:;
  // p4 = prom<V +>{
  //   collabs4 = ld collabs;
  //   collabs5 = force? collabs4;
  //   checkMissing(collabs5);
  //   return collabs5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716100263_4, CCP, RHO);
  // p5 = prom<V +>{
  //   character = ldf character;
  //   r61 = dyn character();
  //   return r61;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716100263_5, CCP, RHO);
  // r63 = dyn ____2(p4, p5)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L134() else D38()
  // L134()
  goto L134_;

D38_:;
  // deopt 147 [r63]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L134_:;
  // l11 = ld value
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L135() else D39()
  // L135()
  goto L135_;

D39_:;
  // deopt 149 [r63, l11, r63]
  SEXP Rsh_Fir_array_deopt_stack36[3];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(149, 3, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L135_:;
  // r64 = dyn names__(l11, NULL, r63)
  SEXP Rsh_Fir_array_args136[3];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args136[2] = Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L136() else D40()
  // L136()
  goto L136_;

D40_:;
  // deopt 151 [r63, r64]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(151, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L136_:;
  // st value = r64
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // goto L35()
  // L35()
  goto L35_;

D41_:;
  // deopt 153 [optional1]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_optional1_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L138_:;
  // optional2 = force? optional1
  Rsh_Fir_reg_optional2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_optional1_);
  // checkMissing(optional2)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_optional2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // r66 = `!`(optional2)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_optional2_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // c33 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if c33 then L139() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L139()
    goto L139_;
  } else {
  // L36()
    goto L36_;
  }

L139_:;
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L140() else D42()
  // L140()
  goto L140_;

D42_:;
  // deopt 157 []
  Rsh_Fir_deopt(157, 0, NULL, CCP, RHO);
  return R_NilValue;

L140_:;
  // p6 = prom<V +>{
  //   ic6 = ld ic;
  //   ic7 = force? ic6;
  //   checkMissing(ic7);
  //   return ic7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716100263_6, CCP, RHO);
  // r68 = dyn paste1("V", p6)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L141() else D43()
  // L141()
  goto L141_;

D43_:;
  // deopt 160 [r68]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(160, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L141_:;
  // l12 = ld value
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L142() else D44()
  // L142()
  goto L142_;

D44_:;
  // deopt 162 [r68, l12, r68]
  SEXP Rsh_Fir_array_deopt_stack40[3];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(162, 3, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L142_:;
  // r69 = dyn names__1(l12, NULL, r68)
  SEXP Rsh_Fir_array_args142[3];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args142[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args142[2] = Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L143() else D45()
  // L143()
  goto L143_;

D45_:;
  // deopt 164 [r68, r69]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(164, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L143_:;
  // st value = r69
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // goto L35()
  // L35()
  goto L35_;

D46_:;
  // deopt 171 ["data.frame", l13, "data.frame"]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_const(CCP, 52);
  Rsh_Fir_deopt(171, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L145_:;
  // r70 = dyn class__(l13, NULL, "data.frame")
  SEXP Rsh_Fir_array_args143[3];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args143[2] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L146() else D47()
  // L146()
  goto L146_;

D47_:;
  // deopt 173 ["data.frame", r70]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(173, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L146_:;
  // st value = r70
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r70_, RHO);
  (void)(Rsh_Fir_reg_r70_);
  // autoRN = ld autoRN
  Rsh_Fir_reg_autoRN = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L147() else D48()
  // L147()
  goto L147_;

D48_:;
  // deopt 175 [autoRN]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_autoRN;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L147_:;
  // autoRN1 = force? autoRN
  Rsh_Fir_reg_autoRN1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_autoRN);
  // checkMissing(autoRN1)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_autoRN1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // c34 = `as.logical`(autoRN1)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_autoRN1_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if c34 then L148() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L148()
    goto L148_;
  } else {
  // L37()
    goto L37_;
  }

L148_:;
  // _set_row_names = ldf `.set_row_names`
  Rsh_Fir_reg__set_row_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L149() else D49()
  // L149()
  goto L149_;

D49_:;
  // deopt 178 []
  Rsh_Fir_deopt(178, 0, NULL, CCP, RHO);
  return R_NilValue;

L149_:;
  // p7 = prom<V +>{
  //   nrows2 = ld nrows;
  //   nrows3 = force? nrows2;
  //   checkMissing(nrows3);
  //   return nrows3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716100263_7, CCP, RHO);
  // r72 = dyn _set_row_names(p7)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__set_row_names, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L150() else D50()
  // L150()
  goto L150_;

D50_:;
  // deopt 180 [r72]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L150_:;
  // l14 = ld value
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L151() else D51()
  // L151()
  goto L151_;

D51_:;
  // deopt 182 [r72, l14, r72]
  SEXP Rsh_Fir_array_deopt_stack46[3];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(182, 3, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L151_:;
  // r73 = dyn attr__(l14, NULL, "row.names", r72)
  SEXP Rsh_Fir_array_args148[4];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args148[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args148[2] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args148[3] = Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_array_arg_names37[4];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_array_arg_names37[3] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L152() else D52()
  // L152()
  goto L152_;

D52_:;
  // deopt 185 [r72, r73]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(185, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L152_:;
  // st value = r73
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // goto L38()
  // L38()
  goto L38_;

D53_:;
  // deopt 187 [row_names7]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_row_names7_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L154_:;
  // row_names8 = force? row_names7
  Rsh_Fir_reg_row_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_names7_);
  // checkMissing(row_names8)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_row_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // l15 = ld value
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // _rowNamesDF__ = ldf `.rowNamesDF<-`
  Rsh_Fir_reg__rowNamesDF__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L155() else D54()
  // L155()
  goto L155_;

D54_:;
  // deopt 190 [row_names8, l15, row_names8]
  SEXP Rsh_Fir_array_deopt_stack49[3];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_row_names8_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_row_names8_;
  Rsh_Fir_deopt(190, 3, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L155_:;
  // p8 = prom<V +>{
  //   make_names1 = ld `make.names`;
  //   make_names2 = force? make_names1;
  //   checkMissing(make_names2);
  //   return make_names2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1716100263_8, CCP, RHO);
  // r76 = dyn _rowNamesDF__[, , `make.names`, ](l15, NULL, p8, row_names8)
  SEXP Rsh_Fir_array_args151[4];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args151[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args151[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args151[3] = Rsh_Fir_reg_row_names8_;
  SEXP Rsh_Fir_array_arg_names38[4];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names38[3] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__rowNamesDF__, 4, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L156() else D55()
  // L156()
  goto L156_;

D55_:;
  // deopt 194 [row_names8, r76]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_row_names8_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(194, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L156_:;
  // st value = r76
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // goto L38()
  // L38()
  goto L38_;

D56_:;
  // deopt 196 [value]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L157_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner1716100263_(SEXP CCP, SEXP RHO) {
  // ic = ld ic
  Rsh_Fir_reg_ic = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ic1 = force? ic
  Rsh_Fir_reg_ic1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ic);
  // checkMissing(ic1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_ic1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return ic1
  return Rsh_Fir_reg_ic1_;
}
SEXP Rsh_Fir_user_promise_inner1716100263_1(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner1716100263_2(SEXP CCP, SEXP RHO) {
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(x9)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c17 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", x9)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r34 = dyn __5(x9, <missing>, i6)
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args94[2] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 3, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r34_;
  goto L0_;

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1716100263_3(SEXP CCP, SEXP RHO) {
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(x14)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c20 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
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
  // dr16 = tryDispatchBuiltin.1("[", x14)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // i19 = ld i
  Rsh_Fir_reg_i19_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // i20 = force? i19
  Rsh_Fir_reg_i20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i19_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r42 = dyn __6(x14, <missing>, i20)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 3, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r42_;
  goto L0_;

L3_:;
  // dx22 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L0(dx22)
  // L0(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1716100263_4(SEXP CCP, SEXP RHO) {
  // collabs4 = ld collabs
  Rsh_Fir_reg_collabs4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // collabs5 = force? collabs4
  Rsh_Fir_reg_collabs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_collabs4_);
  // checkMissing(collabs5)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_collabs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // return collabs5
  return Rsh_Fir_reg_collabs5_;
}
SEXP Rsh_Fir_user_promise_inner1716100263_5(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // r61 = dyn character()
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r61
  return Rsh_Fir_reg_r61_;
}
SEXP Rsh_Fir_user_promise_inner1716100263_6(SEXP CCP, SEXP RHO) {
  // ic6 = ld ic
  Rsh_Fir_reg_ic6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ic7 = force? ic6
  Rsh_Fir_reg_ic7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ic6_);
  // checkMissing(ic7)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_ic7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // return ic7
  return Rsh_Fir_reg_ic7_;
}
SEXP Rsh_Fir_user_promise_inner1716100263_7(SEXP CCP, SEXP RHO) {
  // nrows2 = ld nrows
  Rsh_Fir_reg_nrows2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nrows3 = force? nrows2
  Rsh_Fir_reg_nrows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows2_);
  // checkMissing(nrows3)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_nrows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // return nrows3
  return Rsh_Fir_reg_nrows3_;
}
SEXP Rsh_Fir_user_promise_inner1716100263_8(SEXP CCP, SEXP RHO) {
  // make_names1 = ld `make.names`
  Rsh_Fir_reg_make_names1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // make_names2 = force? make_names1
  Rsh_Fir_reg_make_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_names1_);
  // checkMissing(make_names2)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_make_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // return make_names2
  return Rsh_Fir_reg_make_names2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
