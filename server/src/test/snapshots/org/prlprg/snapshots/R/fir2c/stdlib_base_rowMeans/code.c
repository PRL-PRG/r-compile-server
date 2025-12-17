#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3834575331_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3834575331_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3834575331_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3834575331_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3834575331
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3834575331_, RHO, CCP);
  // st rowMeans = r
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
SEXP Rsh_Fir_user_function_inner3834575331_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3834575331 dynamic dispatch ([x, `na.rm`, dims])

  return Rsh_Fir_user_version_inner3834575331_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3834575331_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3834575331 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3834575331/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_na_rm;  // na_rm
  SEXP Rsh_Fir_reg_dims;  // dims
  SEXP Rsh_Fir_reg_na_rm_isMissing;  // na_rm_isMissing
  SEXP Rsh_Fir_reg_na_rm_orDefault;  // na_rm_orDefault
  SEXP Rsh_Fir_reg_dims_isMissing;  // dims_isMissing
  SEXP Rsh_Fir_reg_dims_orDefault;  // dims_orDefault
  SEXP Rsh_Fir_reg_is_data_frame;  // is_data_frame
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_is_array;  // is_array
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_dims1_;  // dims1
  SEXP Rsh_Fir_reg_dims2_;  // dims2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_dims3_;  // dims3
  SEXP Rsh_Fir_reg_dims4_;  // dims4
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_dims7_;  // dims7
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_dn;  // dn
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_dn2_;  // dn2
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_dn5_;  // dn5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_dn8_;  // dn8
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_dims8_;  // dims8
  SEXP Rsh_Fir_reg_dims9_;  // dims9
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_prod;  // prod
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_dn9_;  // dn9
  SEXP Rsh_Fir_reg_dn10_;  // dn10
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_dn12_;  // dn12
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_id;  // id
  SEXP Rsh_Fir_reg_id1_;  // id1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_Re;  // Re
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_dn13_;  // dn13
  SEXP Rsh_Fir_reg_dn14_;  // dn14
  SEXP Rsh_Fir_reg_prod1_;  // prod1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_na_rm1_;  // na_rm1
  SEXP Rsh_Fir_reg_na_rm2_;  // na_rm2
  SEXP Rsh_Fir_reg_rowMeans;  // rowMeans
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_Im;  // Im
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_dn15_;  // dn15
  SEXP Rsh_Fir_reg_dn16_;  // dn16
  SEXP Rsh_Fir_reg_prod2_;  // prod2
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_na_rm3_;  // na_rm3
  SEXP Rsh_Fir_reg_na_rm4_;  // na_rm4
  SEXP Rsh_Fir_reg_rowMeans1_;  // rowMeans1
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_dn17_;  // dn17
  SEXP Rsh_Fir_reg_dn18_;  // dn18
  SEXP Rsh_Fir_reg_prod3_;  // prod3
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_na_rm5_;  // na_rm5
  SEXP Rsh_Fir_reg_na_rm6_;  // na_rm6
  SEXP Rsh_Fir_reg_rowMeans2_;  // rowMeans2
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_dn19_;  // dn19
  SEXP Rsh_Fir_reg_dn20_;  // dn20
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_dn21_;  // dn21
  SEXP Rsh_Fir_reg_dn22_;  // dn22
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_dim__;  // dim__
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_id2_;  // id2
  SEXP Rsh_Fir_reg_id3_;  // id3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_dimnames1_;  // dimnames1
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_na_rm = PARAMS[1];
  Rsh_Fir_reg_dims = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // na_rm_isMissing = missing.0(na_rm)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_na_rm;
  Rsh_Fir_reg_na_rm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if na_rm_isMissing then L0(FALSE) else L0(na_rm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_rm_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(na_rm)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_Fir_reg_na_rm;
    goto L0_;
  }

L0_:;
  // st `na.rm` = na_rm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_na_rm_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_rm_orDefault);
  // dims_isMissing = missing.0(dims)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_dims;
  Rsh_Fir_reg_dims_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if dims_isMissing then L1(1) else L1(dims)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dims_isMissing)) {
  // L1(1)
    Rsh_Fir_reg_dims_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(dims)
    Rsh_Fir_reg_dims_orDefault = Rsh_Fir_reg_dims;
    goto L1_;
  }

L1_:;
  // st dims = dims_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dims_orDefault, RHO);
  (void)(Rsh_Fir_reg_dims_orDefault);
  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L35() else D0()
  // L35()
  goto L35_;

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // sym = ldf `is.array`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.array` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L4_:;
  // r8 = `!`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L5(c1) else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L5(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L5_;
  } else {
  // L45()
    goto L45_;
  }

L5_:;
  // c13 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c13 then L54() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L54()
    goto L54_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // r15 = `<`(r10, 2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c11 = `||`(c6, c10)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L5(c11)
  // L5(c11)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c11_;
  goto L5_;

L7_:;
  // st dn = r12
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r14 = dyn length(r12)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L52() else D8()
  // L52()
  goto L52_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // dims1 = ld dims
  Rsh_Fir_reg_dims1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L58() else D11()
  // L58()
  goto L58_;

L10_:;
  // c23 = `as.logical`(c15)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c23 then L66() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L66()
    goto L66_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // r22 = `-`(r20, 1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // r23 = `>`(dims7, r22)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dims7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c20 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c21 = `||`(c19, c20)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L10(c21)
  // L10(c21)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c21_;
  goto L10_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym4 = ldf prod
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf prod in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard4 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L14_:;
  // st p = r27
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // dn9 = ld dn
  Rsh_Fir_reg_dn9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L80() else D20()
  // L80()
  goto L80_;

L15_:;
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r33 = dyn prod(dx1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L79() else D19()
  // L79()
  goto L79_;

L16_:;
  // st id = r29
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // r31 = `-`(<missing>, r29)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r32 = dyn __(dn8, r31)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dn8_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r32_;
  goto L15_;

L17_:;
  // st dn = dx3
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym6 = ldf `is.complex`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf `is.complex` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard6 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L18_:;
  // c27 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c27 then L88() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L88()
    goto L88_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // sym13 = ldf `.Internal`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base13 = ldf `.Internal` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard13 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L20_:;
  // sym10 = ldf `.Internal`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base10 = ldf `.Internal` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard10 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L21_:;
  // sym9 = ldf prod
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base9 = ldf prod in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard9 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L22_:;
  // p2 = ld p
  Rsh_Fir_reg_p2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L99() else D27()
  // L99()
  goto L99_;

L23_:;
  // r73 = `*`(r52, r53)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // r74 = `+`(r51, r73)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L26(r74)
  // L26(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L26_;

L24_:;
  // sym12 = ldf prod
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base12 = ldf prod in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard12 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L25_:;
  // p4 = ld p
  Rsh_Fir_reg_p4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L112() else D34()
  // L112()
  goto L112_;

L26_:;
  // st z = r75
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard15 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L27_:;
  // p6 = ld p
  Rsh_Fir_reg_p6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L123() else D40()
  // L123()
  goto L123_;

L28_:;
  // r84 = `>`(r82, 1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c28 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c28 then L130() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L130()
    goto L130_;
  } else {
  // L29()
    goto L29_;
  }

L29_:;
  // sym17 = ldf dimnames
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base17 = ldf dimnames in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard17 then L145() else L146()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L145()
    goto L145_;
  } else {
  // L146()
    goto L146_;
  }

L30_:;
  // c29 = `is.object`(r87)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c29 then L138() else L139(r87)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L138()
    goto L138_;
  } else {
  // L139(r87)
    Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r87_;
    goto L139_;
  }

L31_:;
  // l1 = ld z
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L142() else D51()
  // L142()
  goto L142_;

L32_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L154() else D57()
  // L154()
  goto L154_;

L33_:;
  // c30 = `is.object`(r94)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c30 then L149() else L150(r94)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L149()
    goto L149_;
  } else {
  // L150(r94)
    Rsh_Fir_reg_r97_ = Rsh_Fir_reg_r94_;
    goto L150_;
  }

L34_:;
  // l2 = ld z
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L152() else D55()
  // L152()
  goto L152_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3834575331_, CCP, RHO);
  // r1 = dyn is_data_frame(p)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L36() else D1()
  // L36()
  goto L36_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L36_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c then L37() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L37()
    goto L37_;
  } else {
  // L2()
    goto L2_;
  }

L37_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L38() else D2()
  // L38()
  goto L38_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p1 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3834575331_1, CCP, RHO);
  // r3 = dyn as_matrix(p1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L39() else D3()
  // L39()
  goto L39_;

D3_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L39_:;
  // st x = r3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // goto L3()
  // L3()
  goto L3_;

L41_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L43() else D4()
  // L43()
  goto L43_;

L42_:;
  // r5 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L4_;

D4_:;
  // deopt 13 [x5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L43_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // is_array = ldf `is.array` in base
  Rsh_Fir_reg_is_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r7 = dyn is_array(x6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_array, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L44() else D5()
  // L44()
  goto L44_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L4_;

L45_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard1 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // sym2 = ldf dim
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base2 = ldf dim in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard2 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L47_:;
  // r9 = dyn base1(<lang `<-`(dn, dim(x))>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(c1, r9)
  // L6(c1, r9)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L6_;

L48_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D6()
  // L50()
  goto L50_;

L49_:;
  // r11 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(c1, r11)
  // L7(c1, r11)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L7_;

D6_:;
  // deopt 22 [c1, x7]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L50_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r13 = dyn dim(x8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L51() else D7()
  // L51()
  goto L51_;

D7_:;
  // deopt 25 [c1, r13]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L7(c1, r13)
  // L7(c1, r13)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L7_;

D8_:;
  // deopt 28 [c9, r14]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L6(c9, r14)
  // L6(c9, r14)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r14_;
  goto L6_;

L54_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L55() else D9()
  // L55()
  goto L55_;

D9_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // r16 = dyn stop("'x' must be an array of at least two dimensions")
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L56() else D10()
  // L56()
  goto L56_;

D10_:;
  // deopt 35 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L9()
  // L9()
  goto L9_;

D11_:;
  // deopt 38 [dims1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dims1_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L58_:;
  // dims2 = force? dims1
  Rsh_Fir_reg_dims2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dims1_);
  // checkMissing(dims2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dims2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // r18 = `<`(dims2, 1)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dims2_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c14 then L10(c14) else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L10(c14)
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c14_;
    goto L10_;
  } else {
  // L59()
    goto L59_;
  }

L59_:;
  // dims3 = ld dims
  Rsh_Fir_reg_dims3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L60() else D12()
  // L60()
  goto L60_;

D12_:;
  // deopt 42 [c14, dims3]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_dims3_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L60_:;
  // dims4 = force? dims3
  Rsh_Fir_reg_dims4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dims3_);
  // checkMissing(dims4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dims4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard3 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L61_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L63() else D13()
  // L63()
  goto L63_;

L62_:;
  // r19 = dyn base3(<sym dn>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L11(c14, dims4, r19)
  // L11(c14, dims4, r19)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_dims7_ = Rsh_Fir_reg_dims4_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L11_;

D13_:;
  // deopt 45 [c14, dims4, dn]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_dims4_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(45, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L63_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r21 = dyn length1(dn1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L64() else D14()
  // L64()
  goto L64_;

D14_:;
  // deopt 48 [c14, dims4, r21]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_dims4_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(48, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L11(c14, dims4, r21)
  // L11(c14, dims4, r21)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_dims7_ = Rsh_Fir_reg_dims4_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L11_;

L66_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L67() else D15()
  // L67()
  goto L67_;

D15_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // r24 = dyn stop1("invalid 'dims'")
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L68() else D16()
  // L68()
  goto L68_;

D16_:;
  // deopt 56 [r24]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L13()
  // L13()
  goto L13_;

L70_:;
  // dn2 = ld dn
  Rsh_Fir_reg_dn2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L72() else D17()
  // L72()
  goto L72_;

L71_:;
  // r26 = dyn base4(<lang `[`(dn, `-`(`(`(`<-`(id, seq_len(dims)))))>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L14(r26)
  // L14(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L14_;

D17_:;
  // deopt 61 [dn2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_dn2_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L72_:;
  // dn3 = force? dn2
  Rsh_Fir_reg_dn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn2_);
  // checkMissing(dn3)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(dn3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c24 then L73() else L74(dn3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L73()
    goto L73_;
  } else {
  // L74(dn3)
    Rsh_Fir_reg_dn5_ = Rsh_Fir_reg_dn3_;
    goto L74_;
  }

L73_:;
  // dr = tryDispatchBuiltin.1("[", dn3)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc then L75() else L74(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L75()
    goto L75_;
  } else {
  // L74(dr)
    Rsh_Fir_reg_dn5_ = Rsh_Fir_reg_dr;
    goto L74_;
  }

L74_:;
  // sym5 = ldf seq_len
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base5 = ldf seq_len in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard5 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L75_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L15(dx)
  // L15(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

L76_:;
  // dims8 = ld dims
  Rsh_Fir_reg_dims8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L78() else D18()
  // L78()
  goto L78_;

L77_:;
  // r28 = dyn base5(<sym dims>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L16(dn5, r28)
  // L16(dn5, r28)
  Rsh_Fir_reg_dn8_ = Rsh_Fir_reg_dn5_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L16_;

D18_:;
  // deopt 64 [dn5, dims8]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_dims8_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L78_:;
  // dims9 = force? dims8
  Rsh_Fir_reg_dims9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dims8_);
  // checkMissing(dims9)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dims9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r30 = seq_len(dims9)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dims9_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L16(dn5, r30)
  // L16(dn5, r30)
  Rsh_Fir_reg_dn8_ = Rsh_Fir_reg_dn5_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L16_;

D19_:;
  // deopt 71 [r33]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L14(r33)
  // L14(r33)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r33_;
  goto L14_;

D20_:;
  // deopt 73 [dn9]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_dn9_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L80_:;
  // dn10 = force? dn9
  Rsh_Fir_reg_dn10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn9_);
  // checkMissing(dn10)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dn10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(dn10)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dn10_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c25 then L81() else L82(dn10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L81()
    goto L81_;
  } else {
  // L82(dn10)
    Rsh_Fir_reg_dn12_ = Rsh_Fir_reg_dn10_;
    goto L82_;
  }

L81_:;
  // dr2 = tryDispatchBuiltin.1("[", dn10)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_dn10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc1 then L83() else L82(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L83()
    goto L83_;
  } else {
  // L82(dr2)
    Rsh_Fir_reg_dn12_ = Rsh_Fir_reg_dr2_;
    goto L82_;
  }

L82_:;
  // id = ld id
  Rsh_Fir_reg_id = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L84() else D21()
  // L84()
  goto L84_;

L83_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L17(dx2)
  // L17(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L17_;

D21_:;
  // deopt 75 [dn12, id]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_dn12_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_id;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L84_:;
  // id1 = force? id
  Rsh_Fir_reg_id1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_id);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r34 = dyn __1(dn12, id1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dn12_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_id1_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L17(r34)
  // L17(r34)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r34_;
  goto L17_;

L85_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L87() else D22()
  // L87()
  goto L87_;

L86_:;
  // r35 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L18(r35)
  // L18(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L18_;

D22_:;
  // deopt 80 [x9]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L87_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c26 = `is.complex`(x10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(388, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L18(c26)
  // L18(c26)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_c26_;
  goto L18_;

L88_:;
  // sym7 = ldf `.Internal`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base7 = ldf `.Internal` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard7 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L89_:;
  // sym8 = ldf Re
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base8 = ldf Re in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard8 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L90_:;
  // r37 = dyn base7(<lang rowMeans(Re(x), prod(dn), p, na.rm)>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L20(r37)
  // L20(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L20_;

L91_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L93() else D23()
  // L93()
  goto L93_;

L92_:;
  // r39 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L21(r39)
  // L21(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L21_;

D23_:;
  // deopt 87 [x11]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L93_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // Re = ldf Re in base
  Rsh_Fir_reg_Re = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r41 = dyn Re(x12)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Re, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L94() else D24()
  // L94()
  goto L94_;

D24_:;
  // deopt 90 [r41]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L21(r41)
  // L21(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L21_;

L95_:;
  // dn13 = ld dn
  Rsh_Fir_reg_dn13_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L97() else D25()
  // L97()
  goto L97_;

L96_:;
  // r42 = dyn base9(<sym dn>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L22(r42)
  // L22(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L22_;

D25_:;
  // deopt 93 [dn13]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_dn13_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L97_:;
  // dn14 = force? dn13
  Rsh_Fir_reg_dn14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn13_);
  // checkMissing(dn14)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dn14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // prod1 = ldf prod in base
  Rsh_Fir_reg_prod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r44 = dyn prod1(dn14)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dn14_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod1_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L98() else D26()
  // L98()
  goto L98_;

D26_:;
  // deopt 96 [r44]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L22(r44)
  // L22(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L22_;

D27_:;
  // deopt 97 [p2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L99_:;
  // p3 = force? p2
  Rsh_Fir_reg_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // na_rm1 = ld `na.rm`
  Rsh_Fir_reg_na_rm1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L100() else D28()
  // L100()
  goto L100_;

D28_:;
  // deopt 99 [na_rm1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_na_rm1_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L100_:;
  // na_rm2 = force? na_rm1
  Rsh_Fir_reg_na_rm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm1_);
  // checkMissing(na_rm2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_na_rm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // rowMeans = ldf rowMeans in base
  Rsh_Fir_reg_rowMeans = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r45 = dyn rowMeans(r40, r43, p3, na_rm2)
  SEXP Rsh_Fir_array_args87[4];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args87[3] = Rsh_Fir_reg_na_rm2_;
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rowMeans, 4, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L101() else D29()
  // L101()
  goto L101_;

D29_:;
  // deopt 102 [r45]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L20(r45)
  // L20(r45)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r45_;
  goto L20_;

L102_:;
  // sym11 = ldf Im
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base11 = ldf Im in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard11 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L103_:;
  // r50 = dyn base10(<lang rowMeans(Im(x), prod(dn), p, na.rm)>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L23(r38, 1.0i, r50)
  // L23(r38, 1.0i, r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r52_ = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r50_;
  goto L23_;

L104_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L106() else D30()
  // L106()
  goto L106_;

L105_:;
  // r58 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L24(r38, 1.0i, r58)
  // L24(r38, 1.0i, r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r60_ = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r58_;
  goto L24_;

D30_:;
  // deopt 107 [r38, 1.0i, x13]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(107, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L106_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // Im = ldf Im in base
  Rsh_Fir_reg_Im = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r62 = dyn Im(x14)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Im, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L107() else D31()
  // L107()
  goto L107_;

D31_:;
  // deopt 110 [r38, 1.0i, r62]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(110, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L107_:;
  // goto L24(r38, 1.0i, r62)
  // L24(r38, 1.0i, r62)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r60_ = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L24_;

L108_:;
  // dn15 = ld dn
  Rsh_Fir_reg_dn15_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L110() else D32()
  // L110()
  goto L110_;

L109_:;
  // r67 = dyn base12(<sym dn>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L25(r59, r60, r67)
  // L25(r59, r60, r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r67_;
  goto L25_;

D32_:;
  // deopt 113 [r59, r60, dn15]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_dn15_;
  Rsh_Fir_deopt(113, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L110_:;
  // dn16 = force? dn15
  Rsh_Fir_reg_dn16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn15_);
  // checkMissing(dn16)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dn16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // prod2 = ldf prod in base
  Rsh_Fir_reg_prod2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r71 = dyn prod2(dn16)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dn16_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod2_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L111() else D33()
  // L111()
  goto L111_;

D33_:;
  // deopt 116 [r59, r60, r71]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(116, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L25(r59, r60, r71)
  // L25(r59, r60, r71)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L25_;

D34_:;
  // deopt 117 [r68, r69, p4]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_deopt(117, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L112_:;
  // p5 = force? p4
  Rsh_Fir_reg_p5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p4_);
  // checkMissing(p5)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_p5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // na_rm3 = ld `na.rm`
  Rsh_Fir_reg_na_rm3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L113() else D35()
  // L113()
  goto L113_;

D35_:;
  // deopt 119 [r68, r69, na_rm3]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_na_rm3_;
  Rsh_Fir_deopt(119, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L113_:;
  // na_rm4 = force? na_rm3
  Rsh_Fir_reg_na_rm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm3_);
  // checkMissing(na_rm4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_na_rm4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // rowMeans1 = ldf rowMeans in base
  Rsh_Fir_reg_rowMeans1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r72 = dyn rowMeans1(r61, r70, p5, na_rm4)
  SEXP Rsh_Fir_array_args98[4];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args98[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args98[3] = Rsh_Fir_reg_na_rm4_;
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rowMeans1_, 4, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L114() else D36()
  // L114()
  goto L114_;

D36_:;
  // deopt 122 [r68, r69, r72]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(122, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L114_:;
  // goto L23(r68, r69, r72)
  // L23(r68, r69, r72)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r72_;
  goto L23_;

L116_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L118() else D37()
  // L118()
  goto L118_;

L117_:;
  // r76 = dyn base13(<lang rowMeans(x, prod(dn), p, na.rm)>)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L26(r76)
  // L26(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L26_;

D37_:;
  // deopt 127 [x15]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L118_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // sym14 = ldf prod
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base14 = ldf prod in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard14 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

L119_:;
  // dn17 = ld dn
  Rsh_Fir_reg_dn17_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L121() else D38()
  // L121()
  goto L121_;

L120_:;
  // r77 = dyn base14(<sym dn>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L27(r77)
  // L27(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L27_;

D38_:;
  // deopt 131 [dn17]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_dn17_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L121_:;
  // dn18 = force? dn17
  Rsh_Fir_reg_dn18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn17_);
  // checkMissing(dn18)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dn18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // prod3 = ldf prod in base
  Rsh_Fir_reg_prod3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r79 = dyn prod3(dn18)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dn18_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod3_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L122() else D39()
  // L122()
  goto L122_;

D39_:;
  // deopt 134 [r79]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L27(r79)
  // L27(r79)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r79_;
  goto L27_;

D40_:;
  // deopt 135 [p6]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L123_:;
  // p7 = force? p6
  Rsh_Fir_reg_p7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p6_);
  // checkMissing(p7)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_p7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // na_rm5 = ld `na.rm`
  Rsh_Fir_reg_na_rm5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L124() else D41()
  // L124()
  goto L124_;

D41_:;
  // deopt 137 [na_rm5]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_na_rm5_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L124_:;
  // na_rm6 = force? na_rm5
  Rsh_Fir_reg_na_rm6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm5_);
  // checkMissing(na_rm6)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_na_rm6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // rowMeans2 = ldf rowMeans in base
  Rsh_Fir_reg_rowMeans2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r80 = dyn rowMeans2(x16, r78, p7, na_rm6)
  SEXP Rsh_Fir_array_args107[4];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_args107[2] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args107[3] = Rsh_Fir_reg_na_rm6_;
  SEXP Rsh_Fir_array_arg_names33[4];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rowMeans2_, 4, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L125() else D42()
  // L125()
  goto L125_;

D42_:;
  // deopt 140 [r80]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L26(r80)
  // L26(r80)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r80_;
  goto L26_;

L126_:;
  // dn19 = ld dn
  Rsh_Fir_reg_dn19_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L128() else D43()
  // L128()
  goto L128_;

L127_:;
  // r81 = dyn base15(<sym dn>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L28(r81)
  // L28(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L28_;

D43_:;
  // deopt 144 [dn19]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_dn19_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L128_:;
  // dn20 = force? dn19
  Rsh_Fir_reg_dn20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn19_);
  // checkMissing(dn20)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dn20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r83 = dyn length2(dn20)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dn20_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L129() else D44()
  // L129()
  goto L129_;

D44_:;
  // deopt 147 [r83]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L129_:;
  // goto L28(r83)
  // L28(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L28_;

L130_:;
  // dn21 = ld dn
  Rsh_Fir_reg_dn21_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L131() else D45()
  // L131()
  goto L131_;

D45_:;
  // deopt 150 [dn21]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_dn21_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L131_:;
  // dn22 = force? dn21
  Rsh_Fir_reg_dn22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn21_);
  // checkMissing(dn22)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dn22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // l = ld z
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L132() else D46()
  // L132()
  goto L132_;

D46_:;
  // deopt 153 [dn22, l, dn22]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_dn22_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_dn22_;
  Rsh_Fir_deopt(153, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L132_:;
  // r85 = dyn dim__(l, NULL, dn22)
  SEXP Rsh_Fir_array_args112[3];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args112[2] = Rsh_Fir_reg_dn22_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L133() else D47()
  // L133()
  goto L133_;

D47_:;
  // deopt 155 [dn22, r85]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_dn22_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(155, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L133_:;
  // st z = r85
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r85_, RHO);
  (void)(Rsh_Fir_reg_r85_);
  // sym16 = ldf dimnames
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base16 = ldf dimnames in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard16 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L134_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L136() else D48()
  // L136()
  goto L136_;

L135_:;
  // r86 = dyn base16(<sym x>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L30(r86)
  // L30(r86)
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r86_;
  goto L30_;

D48_:;
  // deopt 159 [x17]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L136_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r88 = dyn dimnames(x18)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L137() else D49()
  // L137()
  goto L137_;

D49_:;
  // deopt 162 [r88]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L137_:;
  // goto L30(r88)
  // L30(r88)
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r88_;
  goto L30_;

L138_:;
  // dr4 = tryDispatchBuiltin.1("[", r87)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args117);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc2 then L140() else L139(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L140()
    goto L140_;
  } else {
  // L139(dr4)
    Rsh_Fir_reg_r90_ = Rsh_Fir_reg_dr4_;
    goto L139_;
  }

L139_:;
  // id2 = ld id
  Rsh_Fir_reg_id2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L141() else D50()
  // L141()
  goto L141_;

L140_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L31(dx4)
  // L31(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L31_;

D50_:;
  // deopt 163 [r90, id2]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_id2_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L141_:;
  // id3 = force? id2
  Rsh_Fir_reg_id3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_id2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r91 = dyn __2(r90, id3)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_id3_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L31(r91)
  // L31(r91)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r91_;
  goto L31_;

D51_:;
  // deopt 167 [dx5, l1, dx5]
  SEXP Rsh_Fir_array_deopt_stack47[3];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack47[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_deopt(167, 3, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L142_:;
  // r92 = dyn dimnames__(l1, NULL, dx5)
  SEXP Rsh_Fir_array_args121[3];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args121[2] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L143() else D52()
  // L143()
  goto L143_;

D52_:;
  // deopt 169 [dx5, r92]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(169, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L143_:;
  // st z = r92
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r92_, RHO);
  (void)(Rsh_Fir_reg_r92_);
  // goto L32()
  // L32()
  goto L32_;

L145_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L147() else D53()
  // L147()
  goto L147_;

L146_:;
  // r93 = dyn base17(<sym x>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L33(r93)
  // L33(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L33_;

D53_:;
  // deopt 173 [x19]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(173, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L147_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // dimnames1 = ldf dimnames in base
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r95 = dyn dimnames1(x20)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L148() else D54()
  // L148()
  goto L148_;

D54_:;
  // deopt 176 [r95]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L148_:;
  // goto L33(r95)
  // L33(r95)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r95_;
  goto L33_;

L149_:;
  // dr6 = tryDispatchBuiltin.1("[[", r94)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args125);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if dc3 then L151() else L150(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L151()
    goto L151_;
  } else {
  // L150(dr6)
    Rsh_Fir_reg_r97_ = Rsh_Fir_reg_dr6_;
    goto L150_;
  }

L150_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r98 = dyn __3(r97, 1)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L34(r98)
  // L34(r98)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r98_;
  goto L34_;

L151_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L34(dx7)
  // L34(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L34_;

D55_:;
  // deopt 181 [dx8, l2, dx8]
  SEXP Rsh_Fir_array_deopt_stack51[3];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_deopt(181, 3, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L152_:;
  // r99 = dyn names__(l2, NULL, dx8)
  SEXP Rsh_Fir_array_args129[3];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args129[2] = Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L153() else D56()
  // L153()
  goto L153_;

D56_:;
  // deopt 183 [dx8, r99]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(183, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L153_:;
  // st z = r99
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r99_, RHO);
  (void)(Rsh_Fir_reg_r99_);
  // goto L32()
  // L32()
  goto L32_;

D57_:;
  // deopt 185 [z]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L154_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z1
  return Rsh_Fir_reg_z1_;
}
SEXP Rsh_Fir_user_promise_inner3834575331_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3834575331_1(SEXP CCP, SEXP RHO) {
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
