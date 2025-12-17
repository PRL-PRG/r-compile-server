#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2767733315_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2767733315_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2767733315_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2767733315_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2767733315_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2767733315_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2767733315_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2767733315
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2767733315_, RHO, CCP);
  // st `xpdrows.data.frame` = r
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
SEXP Rsh_Fir_user_function_inner2767733315_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2767733315 dynamic dispatch ([x, `old.rows`, `new.rows`])

  return Rsh_Fir_user_version_inner2767733315_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2767733315_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2767733315 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2767733315/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_old_rows;  // old_rows
  SEXP Rsh_Fir_reg_new_rows;  // new_rows
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_old_rows1_;  // old_rows1
  SEXP Rsh_Fir_reg_old_rows2_;  // old_rows2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_new_rows1_;  // new_rows1
  SEXP Rsh_Fir_reg_new_rows2_;  // new_rows2
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_nro;  // nro
  SEXP Rsh_Fir_reg_nro1_;  // nro1
  SEXP Rsh_Fir_reg_nrn;  // nrn
  SEXP Rsh_Fir_reg_nrn1_;  // nrn1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_nc;  // nc
  SEXP Rsh_Fir_reg_nc1_;  // nc1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_oldClass;  // oldClass
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_dy;  // dy
  SEXP Rsh_Fir_reg_dy1_;  // dy1
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_dny;  // dny
  SEXP Rsh_Fir_reg_dny1_;  // dny1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_dny3_;  // dny3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_dny4_;  // dny4
  SEXP Rsh_Fir_reg_dny5_;  // dny5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_dny7_;  // dny7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_new_rows3_;  // new_rows3
  SEXP Rsh_Fir_reg_new_rows4_;  // new_rows4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_i45_;  // i45
  SEXP Rsh_Fir_reg_array;  // array
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_y9_;  // y9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_nr;  // nr
  SEXP Rsh_Fir_reg_nr1_;  // nr1
  SEXP Rsh_Fir_reg_nc2_;  // nc2
  SEXP Rsh_Fir_reg_nc3_;  // nc3
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_dny8_;  // dny8
  SEXP Rsh_Fir_reg_dny9_;  // dny9
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_y10_;  // y10
  SEXP Rsh_Fir_reg_y11_;  // y11
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i47_;  // i47
  SEXP Rsh_Fir_reg_y13_;  // y13
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i49_;  // i49
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_i52_;  // i52
  SEXP Rsh_Fir_reg_y20_;  // y20
  SEXP Rsh_Fir_reg_y21_;  // y21
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_nro2_;  // nro2
  SEXP Rsh_Fir_reg_nro3_;  // nro3
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_cy;  // cy
  SEXP Rsh_Fir_reg_cy1_;  // cy1
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_class__1_;  // class__1
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i56_;  // i56
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_i57_;  // i57
  SEXP Rsh_Fir_reg_i58_;  // i58
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_i59_;  // i59
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_i62_;  // i62
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_y22_;  // y22
  SEXP Rsh_Fir_reg_y23_;  // y23
  SEXP Rsh_Fir_reg_attributes;  // attributes
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_i65_;  // i65
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_i68_;  // i68
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_y24_;  // y24
  SEXP Rsh_Fir_reg_y25_;  // y25
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_i73_;  // i73
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_ay;  // ay
  SEXP Rsh_Fir_reg_ay1_;  // ay1
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_i75_;  // i75
  SEXP Rsh_Fir_reg_ay3_;  // ay3
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_i77_;  // i77
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_new_rows5_;  // new_rows5
  SEXP Rsh_Fir_reg_new_rows6_;  // new_rows6
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_i79_;  // i79
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_i81_;  // i81
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_i82_;  // i82
  SEXP Rsh_Fir_reg_nr2_;  // nr2
  SEXP Rsh_Fir_reg_nr3_;  // nr3
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_length__;  // length__
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_ay4_;  // ay4
  SEXP Rsh_Fir_reg_ay5_;  // ay5
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_attributes__;  // attributes__
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_cy2_;  // cy2
  SEXP Rsh_Fir_reg_cy3_;  // cy3
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_class__2_;  // class__2
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_y26_;  // y26
  SEXP Rsh_Fir_reg_y27_;  // y27
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_i84_;  // i84
  SEXP Rsh_Fir_reg_y29_;  // y29
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_i86_;  // i86
  SEXP Rsh_Fir_reg_y31_;  // y31
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i87_;  // i87
  SEXP Rsh_Fir_reg_i88_;  // i88
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_old_rows3_;  // old_rows3
  SEXP Rsh_Fir_reg_old_rows4_;  // old_rows4
  SEXP Rsh_Fir_reg_new_rows7_;  // new_rows7
  SEXP Rsh_Fir_reg_new_rows8_;  // new_rows8
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_duplicated;  // duplicated
  SEXP Rsh_Fir_reg_nm;  // nm
  SEXP Rsh_Fir_reg_nm1_;  // nm1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_make_unique;  // make_unique
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_nm2_;  // nm2
  SEXP Rsh_Fir_reg_nm3_;  // nm3
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_nm4_;  // nm4
  SEXP Rsh_Fir_reg_nm5_;  // nm5
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_x9_;  // x9

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_old_rows = PARAMS[1];
  Rsh_Fir_reg_new_rows = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `old.rows` = old_rows
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_old_rows, RHO);
  (void)(Rsh_Fir_reg_old_rows);
  // st `new.rows` = new_rows
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_new_rows, RHO);
  (void)(Rsh_Fir_reg_new_rows);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L0_:;
  // st nc = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L1_:;
  // st nro = r4
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L2_:;
  // st nrn = r7
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // nro = ld nro
  Rsh_Fir_reg_nro = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L46() else D6()
  // L46()
  goto L46_;

L3_:;
  // s = toForSeq(r11)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 8);
  // goto L4(i)
  // L4(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L4_;

L4_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if c then L51() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L51()
    goto L51_;
  } else {
  // L29()
    goto L29_;
  }

L5_:;
  // st y = dx1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym4 = ldf dim
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf dim in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard4 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L6_:;
  // st dy = r15
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym5 = ldf oldClass
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf oldClass in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard5 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L7_:;
  // st cy = r18
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // l1 = ld y
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L65() else D15()
  // L65()
  goto L65_;

L8_:;
  // r24 = `==`(r22, 2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c2 then L71() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L71()
    goto L71_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // sym12 = ldf attributes
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base12 = ldf attributes in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard12 then L114() else L115()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L114()
    goto L114_;
  } else {
  // L115()
    goto L115_;
  }

L10_:;
  // st dny = r26
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard8 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L11_:;
  // r32 = `>`(r29, 0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c4 then L83() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L83()
    goto L83_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r31 = dyn length4(dx3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L82() else D22()
  // L82()
  goto L82_;

L13_:;
  // goto L17(i27)
  // L17(i27)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i27_;
  goto L17_;

L14_:;
  // l2 = ld dny
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // c7 = `is.object`(l2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c7 then L92() else L93(i36, r34, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L92()
    goto L92_;
  } else {
  // L93(i36, r34, l2)
    Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i36_;
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L93_;
  }

L15_:;
  // new_rows3 = ld `new.rows`
  Rsh_Fir_reg_new_rows3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L90() else D24()
  // L90()
  goto L90_;

L16_:;
  // st dny = dx7
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L17(i44)
  // L17(i44)
  Rsh_Fir_reg_i45_ = Rsh_Fir_reg_i44_;
  goto L17_;

L17_:;
  // array = ldf array
  Rsh_Fir_reg_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L96() else D26()
  // L96()
  goto L96_;

L18_:;
  // st z = dx11
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // cy = ld cy
  Rsh_Fir_reg_cy = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L105() else D30()
  // L105()
  goto L105_;

L19_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r54 = dyn ___(l5, r52, <missing>, y21)
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args17[3] = Rsh_Fir_reg_y21_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L18(i52, r54)
  // L18(i52, r54)
  Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i52_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r54_;
  goto L18_;

L20_:;
  // st x = dx13
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L21(i56)
  // L21(i56)
  Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i56_;
  goto L21_;

L21_:;
  // goto L4(i59)
  // L4(i59)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i59_;
  goto L4_;

L22_:;
  // st ay = r58
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard13 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L23_:;
  // r66 = `>`(r61, 0)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c12 then L125() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L125()
    goto L125_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r65 = dyn length5(r63)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L124() else D39()
  // L124()
  goto L124_;

L25_:;
  // goto L27(i65)
  // L27(i65)
  Rsh_Fir_reg_i82_ = Rsh_Fir_reg_i65_;
  goto L27_;

L26_:;
  // l15 = ld ay
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // c15 = `is.object`(l15)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c15 then L136() else L137(i73, r68, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L136()
    goto L136_;
  } else {
  // L137(i73, r68, l15)
    Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i73_;
    Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r68_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L137_;
  }

L27_:;
  // nr2 = ld nr
  Rsh_Fir_reg_nr2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L140() else D43()
  // L140()
  goto L140_;

L28_:;
  // st x = dx19
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // goto L21(i86)
  // L21(i86)
  Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i86_;
  goto L21_;

L29_:;
  // x3 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_x3_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // st i = x3
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_x3_, RHO);
  (void)(Rsh_Fir_reg_x3_);
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D9()
  // L52()
  goto L52_;

L30_:;
  // st nm = r82
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // sym17 = ldf any
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base17 = ldf any in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard17 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L31_:;
  // c18 = `as.logical`(r85)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c18 then L164() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L164()
    goto L164_;
  } else {
  // L32()
    goto L32_;
  }

L32_:;
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // nm4 = ld nm
  Rsh_Fir_reg_nm4_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L168() else D62()
  // L168()
  goto L168_;

L34_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D0()
  // L36()
  goto L36_;

L35_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L36_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn length(x2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L37() else D1()
  // L37()
  goto L37_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L38_:;
  // old_rows1 = ld `old.rows`
  Rsh_Fir_reg_old_rows1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L40() else D2()
  // L40()
  goto L40_;

L39_:;
  // r3 = dyn base1(<sym old.rows>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 9 [old_rows1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_old_rows1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L40_:;
  // old_rows2 = force? old_rows1
  Rsh_Fir_reg_old_rows2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old_rows1_);
  // checkMissing(old_rows2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_old_rows2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r5 = dyn length1(old_rows2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_old_rows2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L41() else D3()
  // L41()
  goto L41_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L42_:;
  // new_rows1 = ld `new.rows`
  Rsh_Fir_reg_new_rows1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L44() else D4()
  // L44()
  goto L44_;

L43_:;
  // r6 = dyn base2(<sym new.rows>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D4_:;
  // deopt 16 [new_rows1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_new_rows1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L44_:;
  // new_rows2 = force? new_rows1
  Rsh_Fir_reg_new_rows2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_rows1_);
  // checkMissing(new_rows2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_new_rows2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r8 = dyn length2(new_rows2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_new_rows2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L45() else D5()
  // L45()
  goto L45_;

D5_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

D6_:;
  // deopt 21 [nro]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_nro;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L46_:;
  // nro1 = force? nro
  Rsh_Fir_reg_nro1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nro);
  // checkMissing(nro1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_nro1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // nrn = ld nrn
  Rsh_Fir_reg_nrn = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L47() else D7()
  // L47()
  goto L47_;

D7_:;
  // deopt 22 [nro1, nrn]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_nro1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_nrn;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L47_:;
  // nrn1 = force? nrn
  Rsh_Fir_reg_nrn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrn);
  // checkMissing(nrn1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_nrn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r9 = `+`(nro1, nrn1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_nro1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_nrn1_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // st nr = r9
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym3 = ldf seq_len
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base3 = ldf seq_len in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L50() else D8()
  // L50()
  goto L50_;

L49_:;
  // r10 = dyn base3(<sym nc>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L3_;

D8_:;
  // deopt 27 [nc]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_nc;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L50_:;
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r12 = seq_len(nc1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L3_;

L51_:;
  // sym16 = ldf c
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base16 = ldf c in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard16 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

D9_:;
  // deopt 30 [i2, x4]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L52_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c1 then L53() else L54(i2, x5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L53()
    goto L53_;
  } else {
  // L54(i2, x5)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x5_;
    goto L54_;
  }

L53_:;
  // dr = tryDispatchBuiltin.1("[[", x5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc then L55() else L54(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L55()
    goto L55_;
  } else {
  // L54(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_dr;
    goto L54_;
  }

L54_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L56() else D10()
  // L56()
  goto L56_;

L55_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L5(i2, dx)
  // L5(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

D10_:;
  // deopt 32 [i6, x7, i9]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L56_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r13 = dyn __(x7, i10)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(i6, r13)
  // L5(i6, r13)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_;
  goto L5_;

L57_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L59() else D11()
  // L59()
  goto L59_;

L58_:;
  // r14 = dyn base4(<sym y>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(i8, r14)
  // L6(i8, r14)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L6_;

D11_:;
  // deopt 38 [i8, y]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L59_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r16 = dyn dim(y1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L60() else D12()
  // L60()
  goto L60_;

D12_:;
  // deopt 41 [i8, r16]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L6(i8, r16)
  // L6(i8, r16)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L6_;

L61_:;
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L63() else D13()
  // L63()
  goto L63_;

L62_:;
  // r17 = dyn base5(<sym y>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L7(i13, r17)
  // L7(i13, r17)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L7_;

D13_:;
  // deopt 45 [i13, y2]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L63_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r19 = dyn oldClass(y3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L64() else D14()
  // L64()
  goto L64_;

D14_:;
  // deopt 48 [i13, r19]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L7(i13, r19)
  // L7(i13, r19)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L7_;

D15_:;
  // deopt 53 [i16, NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_const(CCP, 25);
  Rsh_Fir_deopt(53, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L65_:;
  // r20 = dyn class__(l1, NULL, NULL)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args55[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L66() else D16()
  // L66()
  goto L66_;

D16_:;
  // deopt 55 [i16, NULL, r20]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L66_:;
  // st y = r20
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard6 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L67_:;
  // dy = ld dy
  Rsh_Fir_reg_dy = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L69() else D17()
  // L69()
  goto L69_;

L68_:;
  // r21 = dyn base6(<sym dy>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L8(i16, r21)
  // L8(i16, r21)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L8_;

D17_:;
  // deopt 59 [i16, dy]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_dy;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L69_:;
  // dy1 = force? dy
  Rsh_Fir_reg_dy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dy);
  // checkMissing(dy1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r23 = dyn length3(dy1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dy1_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L70() else D18()
  // L70()
  goto L70_;

D18_:;
  // deopt 62 [i16, r23]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L8(i16, r23)
  // L8(i16, r23)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L8_;

L71_:;
  // sym7 = ldf dimnames
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base7 = ldf dimnames in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard7 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L72_:;
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L74() else D19()
  // L74()
  goto L74_;

L73_:;
  // r25 = dyn base7(<sym y>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(i19, r25)
  // L10(i19, r25)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L10_;

D19_:;
  // deopt 67 [i19, y4]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L74_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r27 = dyn dimnames(y5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L75() else D20()
  // L75()
  goto L75_;

D20_:;
  // deopt 70 [i19, r27]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(70, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L10(i19, r27)
  // L10(i19, r27)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L10_;

L76_:;
  // dny = ld dny
  Rsh_Fir_reg_dny = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L78() else D21()
  // L78()
  goto L78_;

L77_:;
  // r28 = dyn base8(<lang `[[`(dny, 1)>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(i24, r28)
  // L11(i24, r28)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L11_;

D21_:;
  // deopt 74 [i24, dny]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_dny;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L78_:;
  // dny1 = force? dny
  Rsh_Fir_reg_dny1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dny);
  // checkMissing(dny1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dny1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(dny1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dny1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c3 then L79() else L80(i24, dny1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L79()
    goto L79_;
  } else {
  // L80(i24, dny1)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_dny3_ = Rsh_Fir_reg_dny1_;
    goto L80_;
  }

L79_:;
  // dr2 = tryDispatchBuiltin.1("[[", dny1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_dny1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc1 then L81() else L80(i24, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L81()
    goto L81_;
  } else {
  // L80(i24, dr2)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_dny3_ = Rsh_Fir_reg_dr2_;
    goto L80_;
  }

L80_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r30 = dyn __1(dny3, 1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dny3_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L12(i29, r30)
  // L12(i29, r30)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r30_;
  goto L12_;

L81_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L12(i24, dx2)
  // L12(i24, dx2)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L12_;

D22_:;
  // deopt 80 [i31, r31]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(80, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L11(i31, r31)
  // L11(i31, r31)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r31_;
  goto L11_;

L83_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard9 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // dny4 = ld dny
  Rsh_Fir_reg_dny4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L86() else D23()
  // L86()
  goto L86_;

L85_:;
  // r33 = dyn base9(<lang `[[`(dny, 1)>, <sym new.rows>)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L14(i27, r33)
  // L14(i27, r33)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L14_;

D23_:;
  // deopt 85 [i27, dny4]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_dny4_;
  Rsh_Fir_deopt(85, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L86_:;
  // dny5 = force? dny4
  Rsh_Fir_reg_dny5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dny4_);
  // checkMissing(dny5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dny5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(dny5)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dny5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c5 then L87() else L88(i27, dny5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L87()
    goto L87_;
  } else {
  // L88(i27, dny5)
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i27_;
    Rsh_Fir_reg_dny7_ = Rsh_Fir_reg_dny5_;
    goto L88_;
  }

L87_:;
  // dr4 = tryDispatchBuiltin.1("[[", dny5)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_dny5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args75);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc2 then L89() else L88(i27, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L89()
    goto L89_;
  } else {
  // L88(i27, dr4)
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i27_;
    Rsh_Fir_reg_dny7_ = Rsh_Fir_reg_dr4_;
    goto L88_;
  }

L88_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r35 = dyn __2(dny7, 1)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dny7_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L15(i38, r35)
  // L15(i38, r35)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r35_;
  goto L15_;

L89_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L15(i27, dx4)
  // L15(i27, dx4)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L15_;

D24_:;
  // deopt 90 [i40, new_rows3]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_new_rows3_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L90_:;
  // new_rows4 = force? new_rows3
  Rsh_Fir_reg_new_rows4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_rows3_);
  // checkMissing(new_rows4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_new_rows4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r36 = dyn c6(dx5, new_rows4)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_new_rows4_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L91() else D25()
  // L91()
  goto L91_;

D25_:;
  // deopt 93 [i40, r36]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L14(i40, r36)
  // L14(i40, r36)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r36_;
  goto L14_;

L92_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l2, r34)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args81);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc3 then L94() else L93(i36, r34, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L94()
    goto L94_;
  } else {
  // L93(i36, r34, dr6)
    Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i36_;
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr6_;
    goto L93_;
  }

L93_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r41 = dyn ____(l4, r34, 1)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L16(i42, r38, r41)
  // L16(i42, r38, r41)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i42_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r41_;
  goto L16_;

L94_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L16(i36, r34, dx6)
  // L16(i36, r34, dx6)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L16_;

D26_:;
  // deopt 102 [i45]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L96_:;
  // p = prom<V +>{
  //   y6 = ld y;
  //   y7 = force? y6;
  //   checkMissing(y7);
  //   c8 = `is.object`(y7);
  //   if c8 then L1() else L2(y7);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", y7);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(y9):
  //   __3 = ldf `[` in base;
  //   r43 = dyn __3(y9, 1);
  //   goto L0(r43);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2767733315_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym10 = ldf c;
  //   base10 = ldf c in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r46):
  //   return r46;
  // L1():
  //   nr = ld nr;
  //   nr1 = force? nr;
  //   checkMissing(nr1);
  //   nc2 = ld nc;
  //   nc3 = force? nc2;
  //   checkMissing(nc3);
  //   c9 = ldf c in base;
  //   r47 = dyn c9(nr1, nc3);
  //   goto L0(r47);
  // L2():
  //   r45 = dyn base10(<sym nr>, <sym nc>);
  //   goto L0(r45);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2767733315_1, CCP, RHO);
  // p2 = prom<V +>{
  //   dny8 = ld dny;
  //   dny9 = force? dny8;
  //   checkMissing(dny9);
  //   return dny9;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2767733315_2, CCP, RHO);
  // r50 = dyn array[, dim, dimnames](p, p1, p2)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names29[2] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L97() else D27()
  // L97()
  goto L97_;

D27_:;
  // deopt 108 [i45, r50]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L97_:;
  // st z = r50
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // y10 = ld y
  Rsh_Fir_reg_y10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L98() else D28()
  // L98()
  goto L98_;

D28_:;
  // deopt 110 [i45, y10]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i45_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_y10_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L98_:;
  // y11 = force? y10
  Rsh_Fir_reg_y11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y10_);
  // checkMissing(y11)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_y11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // l5 = ld z
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // c10 = `is.object`(l5)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c10 then L99() else L100(i45, y11, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L99()
    goto L99_;
  } else {
  // L100(i45, y11, l5)
    Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i45_;
    Rsh_Fir_reg_y13_ = Rsh_Fir_reg_y11_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L100_;
  }

L99_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l5, y11)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args100[2] = Rsh_Fir_reg_y11_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args100);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc5 then L101() else L100(i45, y11, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L101()
    goto L101_;
  } else {
  // L100(i45, y11, dr10)
    Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i45_;
    Rsh_Fir_reg_y13_ = Rsh_Fir_reg_y11_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr10_;
    goto L100_;
  }

L100_:;
  // sym11 = ldf seq_len
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base11 = ldf seq_len in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard11 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L101_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L18(i45, dx10)
  // L18(i45, dx10)
  Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i45_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L18_;

L102_:;
  // nro2 = ld nro
  Rsh_Fir_reg_nro2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L104() else D29()
  // L104()
  goto L104_;

L103_:;
  // r51 = dyn base11(<sym nro>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L19(i47, y13, y11, r51)
  // L19(i47, y13, y11, r51)
  Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i47_;
  Rsh_Fir_reg_y20_ = Rsh_Fir_reg_y13_;
  Rsh_Fir_reg_y21_ = Rsh_Fir_reg_y11_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L19_;

D29_:;
  // deopt 114 [i47, y13, l7, y11, nro2]
  SEXP Rsh_Fir_array_deopt_stack29[5];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i47_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_y13_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack29[3] = Rsh_Fir_reg_y11_;
  Rsh_Fir_array_deopt_stack29[4] = Rsh_Fir_reg_nro2_;
  Rsh_Fir_deopt(114, 5, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L104_:;
  // nro3 = force? nro2
  Rsh_Fir_reg_nro3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nro2_);
  // checkMissing(nro3)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_nro3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // r53 = seq_len(nro3)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_nro3_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L19(i47, y13, y11, r53)
  // L19(i47, y13, y11, r53)
  Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i47_;
  Rsh_Fir_reg_y20_ = Rsh_Fir_reg_y13_;
  Rsh_Fir_reg_y21_ = Rsh_Fir_reg_y11_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L19_;

D30_:;
  // deopt 121 [i49, cy]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_cy;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L105_:;
  // cy1 = force? cy
  Rsh_Fir_reg_cy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cy);
  // checkMissing(cy1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_cy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // l11 = ld z
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // class__1 = ldf `class<-`
  Rsh_Fir_reg_class__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L106() else D31()
  // L106()
  goto L106_;

D31_:;
  // deopt 124 [i49, cy1, l11, cy1]
  SEXP Rsh_Fir_array_deopt_stack31[4];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_cy1_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_cy1_;
  Rsh_Fir_deopt(124, 4, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L106_:;
  // r55 = dyn class__1(l11, NULL, cy1)
  SEXP Rsh_Fir_array_args108[3];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args108[2] = Rsh_Fir_reg_cy1_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__1_, 3, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L107() else D32()
  // L107()
  goto L107_;

D32_:;
  // deopt 126 [i49, cy1, r55]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_cy1_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(126, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L107_:;
  // st z = r55
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L108() else D33()
  // L108()
  goto L108_;

D33_:;
  // deopt 128 [i49, z]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(128, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L108_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // l12 = ld x
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c11 = `is.object`(l12)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if c11 then L109() else L110(i49, z1, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L109()
    goto L109_;
  } else {
  // L110(i49, z1, l12)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i49_;
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L110_;
  }

L109_:;
  // dr12 = tryDispatchBuiltin.0("[[<-", l12, z1)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args111[2] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args111);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc6 then L111() else L110(i49, z1, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L111()
    goto L111_;
  } else {
  // L110(i49, z1, dr12)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i49_;
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr12_;
    goto L110_;
  }

L110_:;
  // i57 = ld i
  Rsh_Fir_reg_i57_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L112() else D34()
  // L112()
  goto L112_;

L111_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L20(i49, z1, dx12)
  // L20(i49, z1, dx12)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_z5_ = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L20_;

D34_:;
  // deopt 131 [i54, z3, l14, z1, i57]
  SEXP Rsh_Fir_array_deopt_stack34[5];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i54_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack34[3] = Rsh_Fir_reg_z1_;
  Rsh_Fir_array_deopt_stack34[4] = Rsh_Fir_reg_i57_;
  Rsh_Fir_deopt(131, 5, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L112_:;
  // i58 = force? i57
  Rsh_Fir_reg_i58_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i57_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r56 = dyn ____1(l14, z1, i58)
  SEXP Rsh_Fir_array_args114[3];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_array_args114[2] = Rsh_Fir_reg_i58_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L20(i54, z3, r56)
  // L20(i54, z3, r56)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_z5_ = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r56_;
  goto L20_;

L114_:;
  // y22 = ld y
  Rsh_Fir_reg_y22_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L116() else D35()
  // L116()
  goto L116_;

L115_:;
  // r57 = dyn base12(<sym y>)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L22(i19, r57)
  // L22(i19, r57)
  Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L22_;

D35_:;
  // deopt 137 [i19, y22]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_y22_;
  Rsh_Fir_deopt(137, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L116_:;
  // y23 = force? y22
  Rsh_Fir_reg_y23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y22_);
  // checkMissing(y23)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_y23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r59 = dyn attributes(y23)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_y23_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L117() else D36()
  // L117()
  goto L117_;

D36_:;
  // deopt 140 [i19, r59]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(140, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L22(i19, r59)
  // L22(i19, r59)
  Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L22_;

L118_:;
  // sym14 = ldf names
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base14 = ldf names in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard14 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L119_:;
  // r60 = dyn base13(<lang names(y)>)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L23(i62, r60)
  // L23(i62, r60)
  Rsh_Fir_reg_i65_ = Rsh_Fir_reg_i62_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L23_;

L120_:;
  // y24 = ld y
  Rsh_Fir_reg_y24_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L122() else D37()
  // L122()
  goto L122_;

L121_:;
  // r62 = dyn base14(<sym y>)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L24(i62, r62)
  // L24(i62, r62)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i62_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L24_;

D37_:;
  // deopt 146 [i62, y24]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i62_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_y24_;
  Rsh_Fir_deopt(146, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L122_:;
  // y25 = force? y24
  Rsh_Fir_reg_y25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y24_);
  // checkMissing(y25)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_y25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r64 = dyn names(y25)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_y25_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L123() else D38()
  // L123()
  goto L123_;

D38_:;
  // deopt 149 [i62, r64]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i62_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(149, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L24(i62, r64)
  // L24(i62, r64)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i62_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L24_;

D39_:;
  // deopt 151 [i68, r65]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(151, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L23(i68, r65)
  // L23(i68, r65)
  Rsh_Fir_reg_i65_ = Rsh_Fir_reg_i68_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r65_;
  goto L23_;

L125_:;
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args123);
  // if guard15 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L126_:;
  // ay = ld ay
  Rsh_Fir_reg_ay = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L128() else D40()
  // L128()
  goto L128_;

L127_:;
  // r67 = dyn base15(<lang `$`(ay, names)>, <sym new.rows>)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L26(i65, r67)
  // L26(i65, r67)
  Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i65_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L26_;

D40_:;
  // deopt 156 [i65, ay]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i65_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_ay;
  Rsh_Fir_deopt(156, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L128_:;
  // ay1 = force? ay
  Rsh_Fir_reg_ay1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ay);
  // checkMissing(ay1)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_ay1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(ay1)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_ay1_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if c13 then L130() else L131(i65, ay1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L130()
    goto L130_;
  } else {
  // L131(i65, ay1)
    Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i65_;
    Rsh_Fir_reg_ay3_ = Rsh_Fir_reg_ay1_;
    goto L131_;
  }

L129_:;
  // new_rows5 = ld `new.rows`
  Rsh_Fir_reg_new_rows5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L133() else D41()
  // L133()
  goto L133_;

L130_:;
  // dr14 = tryDispatchBuiltin.1("$", ay1)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_ay1_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args127);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if dc7 then L132() else L131(i65, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L132()
    goto L132_;
  } else {
  // L131(i65, dr14)
    Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i65_;
    Rsh_Fir_reg_ay3_ = Rsh_Fir_reg_dr14_;
    goto L131_;
  }

L131_:;
  // r69 = `$`(ay3, <sym names>)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_ay3_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L129(i75, r69)
  // L129(i75, r69)
  Rsh_Fir_reg_i77_ = Rsh_Fir_reg_i75_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r69_;
  goto L129_;

L132_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L129(i65, dx14)
  // L129(i65, dx14)
  Rsh_Fir_reg_i77_ = Rsh_Fir_reg_i65_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L129_;

D41_:;
  // deopt 159 [i77, new_rows5]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i77_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_new_rows5_;
  Rsh_Fir_deopt(159, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L133_:;
  // new_rows6 = force? new_rows5
  Rsh_Fir_reg_new_rows6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_rows5_);
  // checkMissing(new_rows6)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_new_rows6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r70 = dyn c14(dx15, new_rows6)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_new_rows6_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L134() else D42()
  // L134()
  goto L134_;

D42_:;
  // deopt 162 [i77, r70]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i77_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(162, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L134_:;
  // goto L26(i77, r70)
  // L26(i77, r70)
  Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i77_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r70_;
  goto L26_;

L135_:;
  // st ay = dx17
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L27(i81)
  // L27(i81)
  Rsh_Fir_reg_i82_ = Rsh_Fir_reg_i81_;
  goto L27_;

L136_:;
  // dr16 = tryDispatchBuiltin.0("$<-", l15, r68)
  SEXP Rsh_Fir_array_args133[3];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args133[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args133);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc8 then L138() else L137(i73, r68, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L138()
    goto L138_;
  } else {
  // L137(i73, r68, dr16)
    Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i73_;
    Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r68_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr16_;
    goto L137_;
  }

L137_:;
  // r75 = `$<-`(l17, <sym names>, r68)
  SEXP Rsh_Fir_array_args135[3];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args135[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L135(i79, r72, r75)
  // L135(i79, r72, r75)
  Rsh_Fir_reg_i81_ = Rsh_Fir_reg_i79_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r75_;
  goto L135_;

L138_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L135(i73, r68, dx16)
  // L135(i73, r68, dx16)
  Rsh_Fir_reg_i81_ = Rsh_Fir_reg_i73_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L135_;

D43_:;
  // deopt 168 [i82, nr2]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_nr2_;
  Rsh_Fir_deopt(168, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L140_:;
  // nr3 = force? nr2
  Rsh_Fir_reg_nr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr2_);
  // checkMissing(nr3)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_nr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // l18 = ld y
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // length__ = ldf `length<-`
  Rsh_Fir_reg_length__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L141() else D44()
  // L141()
  goto L141_;

D44_:;
  // deopt 171 [i82, nr3, l18, nr3]
  SEXP Rsh_Fir_array_deopt_stack44[4];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_nr3_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack44[3] = Rsh_Fir_reg_nr3_;
  Rsh_Fir_deopt(171, 4, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L141_:;
  // r77 = dyn length__(l18, NULL, nr3)
  SEXP Rsh_Fir_array_args138[3];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args138[2] = Rsh_Fir_reg_nr3_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length__, 3, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L142() else D45()
  // L142()
  goto L142_;

D45_:;
  // deopt 173 [i82, nr3, r77]
  SEXP Rsh_Fir_array_deopt_stack45[3];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_nr3_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(173, 3, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L142_:;
  // st y = r77
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // ay4 = ld ay
  Rsh_Fir_reg_ay4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L143() else D46()
  // L143()
  goto L143_;

D46_:;
  // deopt 175 [i82, ay4]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_ay4_;
  Rsh_Fir_deopt(175, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L143_:;
  // ay5 = force? ay4
  Rsh_Fir_reg_ay5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ay4_);
  // checkMissing(ay5)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_ay5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // l19 = ld y
  Rsh_Fir_reg_l19_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // attributes__ = ldf `attributes<-`
  Rsh_Fir_reg_attributes__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L144() else D47()
  // L144()
  goto L144_;

D47_:;
  // deopt 178 [i82, ay5, l19, ay5]
  SEXP Rsh_Fir_array_deopt_stack47[4];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_ay5_;
  Rsh_Fir_array_deopt_stack47[2] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_deopt_stack47[3] = Rsh_Fir_reg_ay5_;
  Rsh_Fir_deopt(178, 4, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L144_:;
  // r78 = dyn attributes__(l19, NULL, ay5)
  SEXP Rsh_Fir_array_args140[3];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args140[2] = Rsh_Fir_reg_ay5_;
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes__, 3, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L145() else D48()
  // L145()
  goto L145_;

D48_:;
  // deopt 180 [i82, ay5, r78]
  SEXP Rsh_Fir_array_deopt_stack48[3];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_ay5_;
  Rsh_Fir_array_deopt_stack48[2] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(180, 3, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L145_:;
  // st y = r78
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // cy2 = ld cy
  Rsh_Fir_reg_cy2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L146() else D49()
  // L146()
  goto L146_;

D49_:;
  // deopt 182 [i82, cy2]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_cy2_;
  Rsh_Fir_deopt(182, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L146_:;
  // cy3 = force? cy2
  Rsh_Fir_reg_cy3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cy2_);
  // checkMissing(cy3)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_cy3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // l20 = ld y
  Rsh_Fir_reg_l20_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // class__2 = ldf `class<-`
  Rsh_Fir_reg_class__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L147() else D50()
  // L147()
  goto L147_;

D50_:;
  // deopt 185 [i82, cy3, l20, cy3]
  SEXP Rsh_Fir_array_deopt_stack50[4];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_cy3_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack50[3] = Rsh_Fir_reg_cy3_;
  Rsh_Fir_deopt(185, 4, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L147_:;
  // r79 = dyn class__2(l20, NULL, cy3)
  SEXP Rsh_Fir_array_args142[3];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args142[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args142[2] = Rsh_Fir_reg_cy3_;
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__2_, 3, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L148() else D51()
  // L148()
  goto L148_;

D51_:;
  // deopt 187 [i82, cy3, r79]
  SEXP Rsh_Fir_array_deopt_stack51[3];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_cy3_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(187, 3, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L148_:;
  // st y = r79
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // y26 = ld y
  Rsh_Fir_reg_y26_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L149() else D52()
  // L149()
  goto L149_;

D52_:;
  // deopt 189 [i82, y26]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_y26_;
  Rsh_Fir_deopt(189, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L149_:;
  // y27 = force? y26
  Rsh_Fir_reg_y27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y26_);
  // checkMissing(y27)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_y27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // l21 = ld x
  Rsh_Fir_reg_l21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c16 = `is.object`(l21)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if c16 then L150() else L151(i82, y27, l21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L150()
    goto L150_;
  } else {
  // L151(i82, y27, l21)
    Rsh_Fir_reg_i84_ = Rsh_Fir_reg_i82_;
    Rsh_Fir_reg_y29_ = Rsh_Fir_reg_y27_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l21_;
    goto L151_;
  }

L150_:;
  // dr18 = tryDispatchBuiltin.0("[[<-", l21, y27)
  SEXP Rsh_Fir_array_args145[3];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args145[2] = Rsh_Fir_reg_y27_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args145);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if dc9 then L152() else L151(i82, y27, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L152()
    goto L152_;
  } else {
  // L151(i82, y27, dr18)
    Rsh_Fir_reg_i84_ = Rsh_Fir_reg_i82_;
    Rsh_Fir_reg_y29_ = Rsh_Fir_reg_y27_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_dr18_;
    goto L151_;
  }

L151_:;
  // i87 = ld i
  Rsh_Fir_reg_i87_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L153() else D53()
  // L153()
  goto L153_;

L152_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L28(i82, y27, dx18)
  // L28(i82, y27, dx18)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i82_;
  Rsh_Fir_reg_y31_ = Rsh_Fir_reg_y27_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L28_;

D53_:;
  // deopt 192 [i84, y29, l23, y27, i87]
  SEXP Rsh_Fir_array_deopt_stack53[5];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_i84_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_y29_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_deopt_stack53[3] = Rsh_Fir_reg_y27_;
  Rsh_Fir_array_deopt_stack53[4] = Rsh_Fir_reg_i87_;
  Rsh_Fir_deopt(192, 5, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L153_:;
  // i88 = force? i87
  Rsh_Fir_reg_i88_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i87_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r80 = dyn ____2(l23, y27, i88)
  SEXP Rsh_Fir_array_args148[3];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_y27_;
  Rsh_Fir_array_args148[2] = Rsh_Fir_reg_i88_;
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L28(i84, y29, r80)
  // L28(i84, y29, r80)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i84_;
  Rsh_Fir_reg_y31_ = Rsh_Fir_reg_y29_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r80_;
  goto L28_;

L154_:;
  // old_rows3 = ld `old.rows`
  Rsh_Fir_reg_old_rows3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L156() else D54()
  // L156()
  goto L156_;

L155_:;
  // r81 = dyn base16(<sym old.rows>, <sym new.rows>)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L30(r81)
  // L30(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L30_;

D54_:;
  // deopt 201 [old_rows3]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_old_rows3_;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L156_:;
  // old_rows4 = force? old_rows3
  Rsh_Fir_reg_old_rows4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old_rows3_);
  // checkMissing(old_rows4)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_old_rows4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // new_rows7 = ld `new.rows`
  Rsh_Fir_reg_new_rows7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L157() else D55()
  // L157()
  goto L157_;

D55_:;
  // deopt 203 [new_rows7]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_new_rows7_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L157_:;
  // new_rows8 = force? new_rows7
  Rsh_Fir_reg_new_rows8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_rows7_);
  // checkMissing(new_rows8)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_new_rows8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // c17 = ldf c in base
  Rsh_Fir_reg_c17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r83 = dyn c17(old_rows4, new_rows8)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_old_rows4_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_new_rows8_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c17_, 2, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L158() else D56()
  // L158()
  goto L158_;

D56_:;
  // deopt 206 [r83]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L158_:;
  // goto L30(r83)
  // L30(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L30_;

L159_:;
  // duplicated = ldf duplicated
  Rsh_Fir_reg_duplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L161() else D57()
  // L161()
  goto L161_;

L160_:;
  // r84 = dyn base17(<lang duplicated(nm)>)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L31(r84)
  // L31(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L31_;

D57_:;
  // deopt 211 []
  Rsh_Fir_deopt(211, 0, NULL, CCP, RHO);
  return R_NilValue;

L161_:;
  // p3 = prom<V +>{
  //   nm = ld nm;
  //   nm1 = force? nm;
  //   checkMissing(nm1);
  //   return nm1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2767733315_3, CCP, RHO);
  // r87 = dyn duplicated(p3)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L162() else D58()
  // L162()
  goto L162_;

D58_:;
  // deopt 213 [r87]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(213, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L162_:;
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r88 = dyn any(r87)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L163() else D59()
  // L163()
  goto L163_;

D59_:;
  // deopt 215 [r88]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L163_:;
  // goto L31(r88)
  // L31(r88)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r88_;
  goto L31_;

L164_:;
  // make_unique = ldf `make.unique`
  Rsh_Fir_reg_make_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L165() else D60()
  // L165()
  goto L165_;

D60_:;
  // deopt 217 []
  Rsh_Fir_deopt(217, 0, NULL, CCP, RHO);
  return R_NilValue;

L165_:;
  // p4 = prom<V +>{
  //   sym18 = ldf `as.character`;
  //   base18 = ldf `as.character` in base;
  //   guard18 = `==`.4(sym18, base18);
  //   if guard18 then L1() else L2();
  // L0(r90):
  //   return r90;
  // L1():
  //   nm2 = ld nm;
  //   nm3 = force? nm2;
  //   checkMissing(nm3);
  //   as_character = ldf `as.character` in base;
  //   r91 = dyn as_character(nm3);
  //   goto L0(r91);
  // L2():
  //   r89 = dyn base18(<sym nm>);
  //   goto L0(r89);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2767733315_4, CCP, RHO);
  // r93 = dyn make_unique(p4)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_make_unique, 1, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L166() else D61()
  // L166()
  goto L166_;

D61_:;
  // deopt 219 [r93]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(219, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L166_:;
  // st nm = r93
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r93_, RHO);
  (void)(Rsh_Fir_reg_r93_);
  // goto L33()
  // L33()
  goto L33_;

D62_:;
  // deopt 223 [nm4]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_nm4_;
  Rsh_Fir_deopt(223, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L168_:;
  // nm5 = force? nm4
  Rsh_Fir_reg_nm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm4_);
  // checkMissing(nm5)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_nm5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // l24 = ld x
  Rsh_Fir_reg_l24_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L169() else D63()
  // L169()
  goto L169_;

D63_:;
  // deopt 226 [nm5, l24, nm5]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_nm5_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_nm5_;
  Rsh_Fir_deopt(226, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L169_:;
  // r95 = dyn attr__(l24, NULL, "row.names", nm5)
  SEXP Rsh_Fir_array_args163[4];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args163[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args163[2] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args163[3] = Rsh_Fir_reg_nm5_;
  SEXP Rsh_Fir_array_arg_names52[4];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_array_arg_names52[2] = R_MissingArg;
  Rsh_Fir_array_arg_names52[3] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L170() else D64()
  // L170()
  goto L170_;

D64_:;
  // deopt 229 [nm5, r95]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_nm5_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(229, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L170_:;
  // st x = r95
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r95_, RHO);
  (void)(Rsh_Fir_reg_r95_);
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L171() else D65()
  // L171()
  goto L171_;

D65_:;
  // deopt 231 [x8]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(231, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L171_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x9
  return Rsh_Fir_reg_x9_;
}
SEXP Rsh_Fir_user_promise_inner2767733315_(SEXP CCP, SEXP RHO) {
  // y6 = ld y
  Rsh_Fir_reg_y6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // y7 = force? y6
  Rsh_Fir_reg_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y6_);
  // checkMissing(y7)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(y7)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(y7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y7)
    Rsh_Fir_reg_y9_ = Rsh_Fir_reg_y7_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", y7)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_y9_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r43 = dyn __3(y9, 1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_y9_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r43_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2767733315_1(SEXP CCP, SEXP RHO) {
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r46
  return Rsh_Fir_reg_r46_;

L1_:;
  // nr = ld nr
  Rsh_Fir_reg_nr = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // nr1 = force? nr
  Rsh_Fir_reg_nr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr);
  // checkMissing(nr1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_nr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // nc2 = ld nc
  Rsh_Fir_reg_nc2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // nc3 = force? nc2
  Rsh_Fir_reg_nc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc2_);
  // checkMissing(nc3)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_nc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r47 = dyn c9(nr1, nc3)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_nr1_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_nc3_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L0_;

L2_:;
  // r45 = dyn base10(<sym nr>, <sym nc>)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2767733315_2(SEXP CCP, SEXP RHO) {
  // dny8 = ld dny
  Rsh_Fir_reg_dny8_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // dny9 = force? dny8
  Rsh_Fir_reg_dny9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dny8_);
  // checkMissing(dny9)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dny9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return dny9
  return Rsh_Fir_reg_dny9_;
}
SEXP Rsh_Fir_user_promise_inner2767733315_3(SEXP CCP, SEXP RHO) {
  // nm = ld nm
  Rsh_Fir_reg_nm = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // nm1 = force? nm
  Rsh_Fir_reg_nm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm);
  // checkMissing(nm1)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_nm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // return nm1
  return Rsh_Fir_reg_nm1_;
}
SEXP Rsh_Fir_user_promise_inner2767733315_4(SEXP CCP, SEXP RHO) {
  // sym18 = ldf `as.character`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base18 = ldf `as.character` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args157);
  // if guard18 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r90
  return Rsh_Fir_reg_r90_;

L1_:;
  // nm2 = ld nm
  Rsh_Fir_reg_nm2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // nm3 = force? nm2
  Rsh_Fir_reg_nm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nm2_);
  // checkMissing(nm3)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_nm3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r91 = dyn as_character(nm3)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_nm3_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L0(r91)
  // L0(r91)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r91_;
  goto L0_;

L2_:;
  // r89 = dyn base18(<sym nm>)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r89)
  // L0(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
