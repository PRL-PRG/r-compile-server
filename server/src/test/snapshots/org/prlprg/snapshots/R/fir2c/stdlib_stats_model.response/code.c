#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1651100019_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1651100019_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1651100019_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1651100019_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1651100019_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner1651100019
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1651100019_, RHO, CCP);
  // st `model.response` = r
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
SEXP Rsh_Fir_user_function_inner1651100019_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1651100019 dynamic dispatch ([data, type])

  return Rsh_Fir_user_version_inner1651100019_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1651100019_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1651100019 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1651100019/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_type_isMissing;  // type_isMissing
  SEXP Rsh_Fir_reg_type_orDefault;  // type_orDefault
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
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_data3_;  // data3
  SEXP Rsh_Fir_reg_data4_;  // data4
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_is_data_frame;  // is_data_frame
  SEXP Rsh_Fir_reg_data5_;  // data5
  SEXP Rsh_Fir_reg_data6_;  // data6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_data7_;  // data7
  SEXP Rsh_Fir_reg_data8_;  // data8
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_data10_;  // data10
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_is_factor;  // is_factor
  SEXP Rsh_Fir_reg_v;  // v
  SEXP Rsh_Fir_reg_v1_;  // v1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_type3_;  // type3
  SEXP Rsh_Fir_reg_type4_;  // type4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_type5_;  // type5
  SEXP Rsh_Fir_reg_type6_;  // type6
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_storage_mode__;  // storage_mode__
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_type7_;  // type7
  SEXP Rsh_Fir_reg_type8_;  // type8
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_v2_;  // v2
  SEXP Rsh_Fir_reg_v3_;  // v3
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_v4_;  // v4
  SEXP Rsh_Fir_reg_v5_;  // v5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_dim__;  // dim__
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_v6_;  // v6
  SEXP Rsh_Fir_reg_v7_;  // v7
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_v8_;  // v8
  SEXP Rsh_Fir_reg_v9_;  // v9
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_v10_;  // v10
  SEXP Rsh_Fir_reg_v11_;  // v11
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_data11_;  // data11
  SEXP Rsh_Fir_reg_data12_;  // data12
  SEXP Rsh_Fir_reg_attr2_;  // attr2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_rows;  // rows
  SEXP Rsh_Fir_reg_rows1_;  // rows1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_v12_;  // v12
  SEXP Rsh_Fir_reg_v13_;  // v13
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_nrows;  // nrows
  SEXP Rsh_Fir_reg_nrows1_;  // nrows1
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_rows2_;  // rows2
  SEXP Rsh_Fir_reg_rows3_;  // rows3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_rows4_;  // rows4
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_v14_;  // v14
  SEXP Rsh_Fir_reg_v15_;  // v15
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_dd;  // dd
  SEXP Rsh_Fir_reg_dd1_;  // dd1
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_dd3_;  // dd3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_nrows2_;  // nrows2
  SEXP Rsh_Fir_reg_nrows3_;  // nrows3
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_v16_;  // v16
  SEXP Rsh_Fir_reg_v17_;  // v17
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_rows5_;  // rows5
  SEXP Rsh_Fir_reg_rows6_;  // rows6
  SEXP Rsh_Fir_reg_dn;  // dn
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_v18_;  // v18
  SEXP Rsh_Fir_reg_v19_;  // v19
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r75_;  // r75

  // Bind parameters
  Rsh_Fir_reg_data = PARAMS[0];
  Rsh_Fir_reg_type = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st data = data
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_data, RHO);
  (void)(Rsh_Fir_reg_data);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if type_isMissing then L0("any") else L0(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L0("any")
    Rsh_Fir_reg_type_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L0_;
  }

L0_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L50() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L50()
    goto L50_;
  } else {
  // L3()
    goto L3_;
  }

L2_:;
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r5 = dyn attr1(r3, "response")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L49() else D2()
  // L49()
  goto L49_;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 6);

L4_:;
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L5(c1) else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L5(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L5_;
  } else {
  // L55()
    goto L55_;
  }

L5_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c7 then L59() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L59()
    goto L59_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L173() else D55()
  // L173()
  goto L173_;

L7_:;
  // st v = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L64() else D8()
  // L64()
  goto L64_;

L8_:;
  // c15 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c15 then L69() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L69()
    goto L69_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L73() else D13()
  // L73()
  goto L73_;

L10_:;
  // sym3 = ldf `is.matrix`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf `is.matrix` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L11_:;
  // c22 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c22 then L77() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L77()
    goto L77_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // type7 = ld type
  Rsh_Fir_reg_type7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L81() else D17()
  // L81()
  goto L81_;

L13_:;
  // goto L10()
  // L10()
  goto L10_;

L14_:;
  // c24 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c24 then L90() else L15(c24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L90()
    goto L90_;
  } else {
  // L15(c24)
    Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c24_;
    goto L15_;
  }

L15_:;
  // c30 = `as.logical`(c26)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c30 then L94() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L94()
    goto L94_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym4 = ldf `is.object`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf `is.object` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard4 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L18_:;
  // c32 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c32 then L101() else L19(c32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L101()
    goto L101_;
  } else {
  // L19(c32)
    Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c32_;
    goto L19_;
  }

L19_:;
  // c41 = `as.logical`(c34)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c41 then L107() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L107()
    goto L107_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // c38 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c39 = `&&`(c37, c38)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L19(c39)
  // L19(c39)
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c39_;
  goto L19_;

L21_:;
  // goto L23()
  // L23()
  goto L23_;

L22_:;
  // st v = r36
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // sym7 = ldf attr
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base7 = ldf attr in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard7 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L24_:;
  // st rows = r40
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard8 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L25_:;
  // st nrows = r43
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // c42 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c42 then L121() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L121()
    goto L121_;
  } else {
  // L26()
    goto L26_;
  }

L26_:;
  // goto L42()
  // L42()
  goto L42_;

L27_:;
  // nrows = ld nrows
  Rsh_Fir_reg_nrows = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L126() else D37()
  // L126()
  goto L126_;

L28_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard10 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L29_:;
  // goto L42()
  // L42()
  goto L42_;

L30_:;
  // r56 = `==`(r51, 2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c44 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c44 then L139() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L139()
    goto L139_;
  } else {
  // L32()
    goto L32_;
  }

L31_:;
  // st dd = r53
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r55 = dyn length2(r53)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L138() else D43()
  // L138()
  goto L138_;

L32_:;
  // goto L29(NULL)
  // L29(NULL)
  Rsh_Fir_reg_rows4_ = Rsh_const(CCP, 6);
  goto L29_;

L33_:;
  // nrows2 = ld nrows
  Rsh_Fir_reg_nrows2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L144() else D45()
  // L144()
  goto L144_;

L34_:;
  // c63 = `as.logical`(c48)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c63 then L157() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c63_)) {
  // L157()
    goto L157_;
  } else {
  // L38()
    goto L38_;
  }

L35_:;
  // r68 = `!`(r60)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c60 = `as.logical`(r68)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c61 = `&&`(c51, c60)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_c60_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L34(c61)
  // L34(c61)
  Rsh_Fir_reg_c48_ = Rsh_Fir_reg_c61_;
  goto L34_;

L36_:;
  // st dn = r62
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // c55 = `is.object`(r62)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c55 then L152() else L153(c54, r62)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L152()
    goto L152_;
  } else {
  // L153(c54, r62)
    Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c54_;
    Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r62_;
    goto L153_;
  }

L37_:;
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r67 = dyn length3(dx5)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L155() else D48()
  // L155()
  goto L155_;

L38_:;
  // goto L41(NULL)
  // L41(NULL)
  Rsh_Fir_reg_r74_ = Rsh_const(CCP, 6);
  goto L41_;

L39_:;
  // l3 = ld v
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L166() else D52()
  // L166()
  goto L166_;

L40_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r72 = dyn list(rows6, dx7)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_rows6_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L165() else D51()
  // L165()
  goto L165_;

L41_:;
  // goto L29(r74)
  // L29(r74)
  Rsh_Fir_reg_rows4_ = Rsh_Fir_reg_r74_;
  goto L29_;

L42_:;
  // v18 = ld v
  Rsh_Fir_reg_v18_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L171() else D54()
  // L171()
  goto L171_;

L43_:;
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard1 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L44_:;
  // r = dyn base(<lang attr(data, "terms")>, "response")
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L45_:;
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D0()
  // L47()
  goto L47_;

L46_:;
  // r2 = dyn base1(<sym data>, "terms")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D0_:;
  // deopt 4 [data1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_data1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L47_:;
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r4 = dyn attr(data2, "terms")
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_data2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L48() else D1()
  // L48()
  goto L48_;

D1_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L2_;

D2_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L1_;

L50_:;
  // sym2 = ldf `is.list`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf `is.list` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L51_:;
  // data3 = ld data
  Rsh_Fir_reg_data3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L53() else D3()
  // L53()
  goto L53_;

L52_:;
  // r6 = dyn base2(<sym data>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L4_;

D3_:;
  // deopt 14 [data3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_data3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L53_:;
  // data4 = force? data3
  Rsh_Fir_reg_data4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data3_);
  // checkMissing(data4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_data4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r8 = dyn is_list(data4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_data4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L54() else D4()
  // L54()
  goto L54_;

D4_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L4_;

L55_:;
  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L56() else D5()
  // L56()
  goto L56_;

D5_:;
  // deopt 19 [c1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L56_:;
  // p = prom<V +>{
  //   data5 = ld data;
  //   data6 = force? data5;
  //   checkMissing(data6);
  //   return data6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1651100019_, CCP, RHO);
  // r10 = dyn is_data_frame(p)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L57() else D6()
  // L57()
  goto L57_;

D6_:;
  // deopt 21 [c1, r10]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L57_:;
  // c4 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L5(c5)
  // L5(c5)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c5_;
  goto L5_;

L59_:;
  // data7 = ld data
  Rsh_Fir_reg_data7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L60() else D7()
  // L60()
  goto L60_;

D7_:;
  // deopt 23 [data7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_data7_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L60_:;
  // data8 = force? data7
  Rsh_Fir_reg_data8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data7_);
  // checkMissing(data8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_data8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(data8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_data8_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c8 then L61() else L62(data8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L61()
    goto L61_;
  } else {
  // L62(data8)
    Rsh_Fir_reg_data10_ = Rsh_Fir_reg_data8_;
    goto L62_;
  }

L61_:;
  // dr = tryDispatchBuiltin.1("[[", data8)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_data8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc then L63() else L62(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L63()
    goto L63_;
  } else {
  // L62(dr)
    Rsh_Fir_reg_data10_ = Rsh_Fir_reg_dr;
    goto L62_;
  }

L62_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r11 = dyn __(data10, 1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_data10_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L7_;

L63_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L7(dx)
  // L7(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D8_:;
  // deopt 29 [type1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_type1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L64_:;
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // r12 = `==`(type2, "numeric")
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_type2_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c9 then L65() else L8(c9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L65()
    goto L65_;
  } else {
  // L8(c9)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
    goto L8_;
  }

L65_:;
  // is_factor = ldf `is.factor`
  Rsh_Fir_reg_is_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L66() else D9()
  // L66()
  goto L66_;

D9_:;
  // deopt 34 [c9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L66_:;
  // p1 = prom<V +>{
  //   v = ld v;
  //   v1 = force? v;
  //   checkMissing(v1);
  //   return v1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1651100019_1, CCP, RHO);
  // r14 = dyn is_factor(p1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_factor, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L67() else D10()
  // L67()
  goto L67_;

D10_:;
  // deopt 36 [c9, r14]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L67_:;
  // c12 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // c13 = `&&`(c9, c12)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L8(c13)
  // L8(c13)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c13_;
  goto L8_;

L69_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L70() else D11()
  // L70()
  goto L70_;

D11_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // r15 = dyn warning("using type = \"numeric\" with a factor response will be ignored")
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L71() else D12()
  // L71()
  goto L71_;

D12_:;
  // deopt 41 [r15]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L10()
  // L10()
  goto L10_;

D13_:;
  // deopt 42 [type3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_type3_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L73_:;
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // r17 = `==`(type4, "numeric")
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_type4_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c16 then L11(c16) else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L11(c16)
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c16_;
    goto L11_;
  } else {
  // L74()
    goto L74_;
  }

L74_:;
  // type5 = ld type
  Rsh_Fir_reg_type5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L75() else D14()
  // L75()
  goto L75_;

D14_:;
  // deopt 46 [c16, type5]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_type5_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L75_:;
  // type6 = force? type5
  Rsh_Fir_reg_type6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type5_);
  // checkMissing(type6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_type6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r18 = `==`(type6, "double")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_type6_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // c19 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // c20 = `||`(c16, c19)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L11(c20)
  // L11(c20)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c20_;
  goto L11_;

L77_:;
  // l = ld v
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L78() else D15()
  // L78()
  goto L78_;

D15_:;
  // deopt 54 ["double", l, "double"]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 30);
  Rsh_Fir_deopt(54, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L78_:;
  // r19 = dyn storage_mode__(l, NULL, "double")
  SEXP Rsh_Fir_array_args64[3];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args64[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L79() else D16()
  // L79()
  goto L79_;

D16_:;
  // deopt 56 ["double", r19]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L79_:;
  // st v = r19
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // goto L10()
  // L10()
  goto L10_;

D17_:;
  // deopt 58 [type7]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_type7_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L81_:;
  // type8 = force? type7
  Rsh_Fir_reg_type8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type7_);
  // checkMissing(type8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_type8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r20 = `!=`(type8, "any")
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_type8_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c23 then L82() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L82()
    goto L82_;
  } else {
  // L13()
    goto L13_;
  }

L82_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L83() else D18()
  // L83()
  goto L83_;

D18_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // r21 = dyn stop("invalid response type")
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L84() else D19()
  // L84()
  goto L84_;

D19_:;
  // deopt 65 [r21]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L10()
  // L10()
  goto L10_;

L86_:;
  // v2 = ld v
  Rsh_Fir_reg_v2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L88() else D20()
  // L88()
  goto L88_;

L87_:;
  // r22 = dyn base3(<sym v>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L14(r22)
  // L14(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L14_;

D20_:;
  // deopt 70 [v2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_v2_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L88_:;
  // v3 = force? v2
  Rsh_Fir_reg_v3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v2_);
  // checkMissing(v3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_v3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r24 = dyn is_matrix(v3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_v3_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L89() else D21()
  // L89()
  goto L89_;

D21_:;
  // deopt 73 [r24]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L14(r24)
  // L14(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L14_;

L90_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L91() else D22()
  // L91()
  goto L91_;

D22_:;
  // deopt 75 [c24]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L91_:;
  // p2 = prom<V +>{
  //   v4 = ld v;
  //   v5 = force? v4;
  //   checkMissing(v5);
  //   return v5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1651100019_2, CCP, RHO);
  // r26 = dyn ncol(p2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L92() else D23()
  // L92()
  goto L92_;

D23_:;
  // deopt 77 [c24, r26]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L92_:;
  // r27 = `==`(r26, 1)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // c27 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // c28 = `&&`(c24, c27)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L15(c28)
  // L15(c28)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c28_;
  goto L15_;

L94_:;
  // l1 = ld v
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L95() else D24()
  // L95()
  goto L95_;

D24_:;
  // deopt 84 [NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_const(CCP, 6);
  Rsh_Fir_deopt(84, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L95_:;
  // r28 = dyn dim__(l1, NULL, NULL)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L96() else D25()
  // L96()
  goto L96_;

D25_:;
  // deopt 86 [NULL, r28]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(86, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L96_:;
  // st v = r28
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // goto L17()
  // L17()
  goto L17_;

L98_:;
  // v6 = ld v
  Rsh_Fir_reg_v6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L100() else D26()
  // L100()
  goto L100_;

L99_:;
  // r30 = dyn base4(<sym v>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L18(r30)
  // L18(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L18_;

D26_:;
  // deopt 91 [v6]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_v6_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L100_:;
  // v7 = force? v6
  Rsh_Fir_reg_v7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v6_);
  // checkMissing(v7)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_v7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(v7)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_v7_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L18(c31)
  // L18(c31)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_c31_;
  goto L18_;

L101_:;
  // sym5 = ldf inherits
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base5 = ldf inherits in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard5 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L102_:;
  // v8 = ld v
  Rsh_Fir_reg_v8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L104() else D27()
  // L104()
  goto L104_;

L103_:;
  // r32 = dyn base5(<sym v>, "AsIs")
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L20(c32, r32)
  // L20(c32, r32)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L20_;

D27_:;
  // deopt 96 [c32, v8]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_v8_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L104_:;
  // v9 = force? v8
  Rsh_Fir_reg_v9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v8_);
  // checkMissing(v9)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_v9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r34 = dyn inherits(v9, "AsIs", FALSE)
  SEXP Rsh_Fir_array_args84[3];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_v9_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args84[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L105() else D28()
  // L105()
  goto L105_;

D28_:;
  // deopt 101 [c32, r34]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L20(c32, r34)
  // L20(c32, r34)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L20_;

L107_:;
  // sym6 = ldf unclass
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base6 = ldf unclass in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard6 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L108_:;
  // v10 = ld v
  Rsh_Fir_reg_v10_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L110() else D29()
  // L110()
  goto L110_;

L109_:;
  // r35 = dyn base6(<sym v>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L22(r35)
  // L22(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L22_;

D29_:;
  // deopt 105 [v10]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_v10_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L110_:;
  // v11 = force? v10
  Rsh_Fir_reg_v11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v10_);
  // checkMissing(v11)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_v11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r37 = dyn unclass(v11)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_v11_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L111() else D30()
  // L111()
  goto L111_;

D30_:;
  // deopt 108 [r37]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L22(r37)
  // L22(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L22_;

L113_:;
  // data11 = ld data
  Rsh_Fir_reg_data11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L115() else D31()
  // L115()
  goto L115_;

L114_:;
  // r39 = dyn base7(<sym data>, "row.names")
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L24(r39)
  // L24(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L24_;

D31_:;
  // deopt 114 [data11]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_data11_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L115_:;
  // data12 = force? data11
  Rsh_Fir_reg_data12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data11_);
  // checkMissing(data12)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_data12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // attr2 = ldf attr in base
  Rsh_Fir_reg_attr2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r41 = dyn attr2(data12, "row.names")
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_data12_;
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr2_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L116() else D32()
  // L116()
  goto L116_;

D32_:;
  // deopt 118 [r41]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L24(r41)
  // L24(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L24_;

L117_:;
  // rows = ld rows
  Rsh_Fir_reg_rows = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L119() else D33()
  // L119()
  goto L119_;

L118_:;
  // r42 = dyn base8(<sym rows>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L25(r42)
  // L25(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L25_;

D33_:;
  // deopt 122 [rows]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_rows;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L119_:;
  // rows1 = force? rows
  Rsh_Fir_reg_rows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows);
  // checkMissing(rows1)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_rows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r44 = dyn length(rows1)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_rows1_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L120() else D34()
  // L120()
  goto L120_;

D34_:;
  // deopt 125 [r44]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L25(r44)
  // L25(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L25_;

L121_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args95);
  // if guard9 then L122() else L123()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L122()
    goto L122_;
  } else {
  // L123()
    goto L123_;
  }

L122_:;
  // v12 = ld v
  Rsh_Fir_reg_v12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L124() else D35()
  // L124()
  goto L124_;

L123_:;
  // r45 = dyn base9(<sym v>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L27(r45)
  // L27(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L27_;

D35_:;
  // deopt 129 [v12]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_v12_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L124_:;
  // v13 = force? v12
  Rsh_Fir_reg_v13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v12_);
  // checkMissing(v13)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_v13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r47 = dyn length1(v13)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_v13_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L125() else D36()
  // L125()
  goto L125_;

D36_:;
  // deopt 132 [r47]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L27(r47)
  // L27(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L27_;

D37_:;
  // deopt 132 [r46, nrows]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_nrows;
  Rsh_Fir_deopt(132, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L126_:;
  // nrows1 = force? nrows
  Rsh_Fir_reg_nrows1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows);
  // checkMissing(nrows1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_nrows1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // r48 = `==`(r46, nrows1)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_nrows1_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // c43 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if c43 then L127() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L127()
    goto L127_;
  } else {
  // L28()
    goto L28_;
  }

L127_:;
  // rows2 = ld rows
  Rsh_Fir_reg_rows2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L128() else D38()
  // L128()
  goto L128_;

D38_:;
  // deopt 135 [rows2]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_rows2_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L128_:;
  // rows3 = force? rows2
  Rsh_Fir_reg_rows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows2_);
  // checkMissing(rows3)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_rows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // l2 = ld v
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L129() else D39()
  // L129()
  goto L129_;

D39_:;
  // deopt 138 [rows3, l2, rows3]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_rows3_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_rows3_;
  Rsh_Fir_deopt(138, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L129_:;
  // r49 = dyn names__(l2, NULL, rows3)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_rows3_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L130() else D40()
  // L130()
  goto L130_;

D40_:;
  // deopt 140 [rows3, r49]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_rows3_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(140, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L130_:;
  // st v = r49
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // goto L29(rows3)
  // L29(rows3)
  Rsh_Fir_reg_rows4_ = Rsh_Fir_reg_rows3_;
  goto L29_;

L132_:;
  // sym11 = ldf dim
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base11 = ldf dim in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args104);
  // if guard11 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L133_:;
  // r50 = dyn base10(<lang `<-`(dd, dim(v))>)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L30(r50)
  // L30(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L30_;

L134_:;
  // v14 = ld v
  Rsh_Fir_reg_v14_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L136() else D41()
  // L136()
  goto L136_;

L135_:;
  // r52 = dyn base11(<sym v>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L31(r52)
  // L31(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L31_;

D41_:;
  // deopt 146 [v14]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_v14_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L136_:;
  // v15 = force? v14
  Rsh_Fir_reg_v15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v14_);
  // checkMissing(v15)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_v15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r54 = dyn dim(v15)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_v15_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L137() else D42()
  // L137()
  goto L137_;

D42_:;
  // deopt 149 [r54]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L137_:;
  // goto L31(r54)
  // L31(r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L31_;

D43_:;
  // deopt 152 [r55]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L30(r55)
  // L30(r55)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r55_;
  goto L30_;

L139_:;
  // dd = ld dd
  Rsh_Fir_reg_dd = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L140() else D44()
  // L140()
  goto L140_;

D44_:;
  // deopt 155 [dd]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_dd;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L140_:;
  // dd1 = force? dd
  Rsh_Fir_reg_dd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd);
  // checkMissing(dd1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(dd1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dd1_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if c45 then L141() else L142(dd1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L141()
    goto L141_;
  } else {
  // L142(dd1)
    Rsh_Fir_reg_dd3_ = Rsh_Fir_reg_dd1_;
    goto L142_;
  }

L141_:;
  // dr2 = tryDispatchBuiltin.1("[", dd1)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_dd1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args111);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc1 then L143() else L142(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L143()
    goto L143_;
  } else {
  // L142(dr2)
    Rsh_Fir_reg_dd3_ = Rsh_Fir_reg_dr2_;
    goto L142_;
  }

L142_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r57 = dyn __1(dd3, 1)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dd3_;
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L33(r57)
  // L33(r57)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r57_;
  goto L33_;

L143_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L33(dx2)
  // L33(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L33_;

D45_:;
  // deopt 159 [dx3, nrows2]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_nrows2_;
  Rsh_Fir_deopt(159, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L144_:;
  // nrows3 = force? nrows2
  Rsh_Fir_reg_nrows3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nrows2_);
  // checkMissing(nrows3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_nrows3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // r58 = `==`(dx3, nrows3)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_nrows3_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // c46 = `as.logical`(r58)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if c46 then L145() else L34(c46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L145()
    goto L145_;
  } else {
  // L34(c46)
    Rsh_Fir_reg_c48_ = Rsh_Fir_reg_c46_;
    goto L34_;
  }

L145_:;
  // sym12 = ldf length
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base12 = ldf length in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard12 then L146() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L146()
    goto L146_;
  } else {
  // L147()
    goto L147_;
  }

L146_:;
  // sym13 = ldf dimnames
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base13 = ldf dimnames in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args119);
  // if guard13 then L148() else L149()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L148()
    goto L148_;
  } else {
  // L149()
    goto L149_;
  }

L147_:;
  // r59 = dyn base12(<lang `[[`(`(`(`<-`(dn, dimnames(v))), 1)>)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L35(c46, r59)
  // L35(c46, r59)
  Rsh_Fir_reg_c51_ = Rsh_Fir_reg_c46_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L35_;

L148_:;
  // v16 = ld v
  Rsh_Fir_reg_v16_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L150() else D46()
  // L150()
  goto L150_;

L149_:;
  // r61 = dyn base13(<sym v>)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L36(c46, r61)
  // L36(c46, r61)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c46_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L36_;

D46_:;
  // deopt 166 [c46, v16]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_c46_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_v16_;
  Rsh_Fir_deopt(166, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L150_:;
  // v17 = force? v16
  Rsh_Fir_reg_v17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v16_);
  // checkMissing(v17)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_v17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r63 = dyn dimnames(v17)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_v17_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L151() else D47()
  // L151()
  goto L151_;

D47_:;
  // deopt 169 [c46, r63]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_c46_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(169, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L151_:;
  // goto L36(c46, r63)
  // L36(c46, r63)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c46_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L36_;

L152_:;
  // dr4 = tryDispatchBuiltin.1("[[", r62)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args124);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if dc2 then L154() else L153(c54, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L154()
    goto L154_;
  } else {
  // L153(c54, dr4)
    Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c54_;
    Rsh_Fir_reg_r65_ = Rsh_Fir_reg_dr4_;
    goto L153_;
  }

L153_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r66 = dyn __2(r65, 1)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L37(c57, r66)
  // L37(c57, r66)
  Rsh_Fir_reg_c59_ = Rsh_Fir_reg_c57_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r66_;
  goto L37_;

L154_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // goto L37(c54, dx4)
  // L37(c54, dx4)
  Rsh_Fir_reg_c59_ = Rsh_Fir_reg_c54_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L37_;

D48_:;
  // deopt 175 [c59, r67]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_c59_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(175, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L155_:;
  // goto L35(c59, r67)
  // L35(c59, r67)
  Rsh_Fir_reg_c51_ = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r67_;
  goto L35_;

L157_:;
  // sym14 = ldf list
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base14 = ldf list in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args128);
  // if guard14 then L158() else L159()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L158()
    goto L158_;
  } else {
  // L159()
    goto L159_;
  }

L158_:;
  // rows5 = ld rows
  Rsh_Fir_reg_rows5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L160() else D49()
  // L160()
  goto L160_;

L159_:;
  // r69 = dyn base14(<sym rows>, <lang `[[`(dn, 2)>)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L39(r69)
  // L39(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L39_;

D49_:;
  // deopt 180 [rows5]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_rows5_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L160_:;
  // rows6 = force? rows5
  Rsh_Fir_reg_rows6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rows5_);
  // checkMissing(rows6)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_rows6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L161() else D50()
  // L161()
  goto L161_;

D50_:;
  // deopt 182 [dn]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L161_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c64 = `is.object`(dn1)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c64 then L162() else L163(dn1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c64_)) {
  // L162()
    goto L162_;
  } else {
  // L163(dn1)
    Rsh_Fir_reg_dn3_ = Rsh_Fir_reg_dn1_;
    goto L163_;
  }

L162_:;
  // dr6 = tryDispatchBuiltin.1("[[", dn1)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc3 then L164() else L163(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L164()
    goto L164_;
  } else {
  // L163(dr6)
    Rsh_Fir_reg_dn3_ = Rsh_Fir_reg_dr6_;
    goto L163_;
  }

L163_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r71 = dyn __3(dn3, 2)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L40(r71)
  // L40(r71)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r71_;
  goto L40_;

L164_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L40(dx6)
  // L40(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L40_;

D51_:;
  // deopt 188 [r72]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L165_:;
  // goto L39(r72)
  // L39(r72)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r72_;
  goto L39_;

D52_:;
  // deopt 190 [r70, l3, r70]
  SEXP Rsh_Fir_array_deopt_stack50[3];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(190, 3, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L166_:;
  // r73 = dyn dimnames__(l3, NULL, r70)
  SEXP Rsh_Fir_array_args137[3];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args137[2] = Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L167() else D53()
  // L167()
  goto L167_;

D53_:;
  // deopt 192 [r70, r73]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(192, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L167_:;
  // st v = r73
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // goto L41(r70)
  // L41(r70)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r70_;
  goto L41_;

D54_:;
  // deopt 200 [v18]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_v18_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L171_:;
  // v19 = force? v18
  Rsh_Fir_reg_v19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v18_);
  // checkMissing(v19)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_v19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return v19
  return Rsh_Fir_reg_v19_;

D55_:;
  // deopt 203 []
  Rsh_Fir_deopt(203, 0, NULL, CCP, RHO);
  return R_NilValue;

L173_:;
  // r75 = dyn stop1("invalid 'data' argument")
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L174() else D56()
  // L174()
  goto L174_;

D56_:;
  // deopt 205 [r75]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(205, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L174_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r75
  return Rsh_Fir_reg_r75_;
}
SEXP Rsh_Fir_user_promise_inner1651100019_(SEXP CCP, SEXP RHO) {
  // data5 = ld data
  Rsh_Fir_reg_data5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // data6 = force? data5
  Rsh_Fir_reg_data6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data5_);
  // checkMissing(data6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_data6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return data6
  return Rsh_Fir_reg_data6_;
}
SEXP Rsh_Fir_user_promise_inner1651100019_1(SEXP CCP, SEXP RHO) {
  // v = ld v
  Rsh_Fir_reg_v = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // v1 = force? v
  Rsh_Fir_reg_v1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v);
  // checkMissing(v1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_v1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return v1
  return Rsh_Fir_reg_v1_;
}
SEXP Rsh_Fir_user_promise_inner1651100019_2(SEXP CCP, SEXP RHO) {
  // v4 = ld v
  Rsh_Fir_reg_v4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // v5 = force? v4
  Rsh_Fir_reg_v5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v4_);
  // checkMissing(v5)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_v5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // return v5
  return Rsh_Fir_reg_v5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
