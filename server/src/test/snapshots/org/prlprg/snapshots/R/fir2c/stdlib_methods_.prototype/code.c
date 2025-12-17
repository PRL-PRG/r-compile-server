#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1246119658
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1246119658_, RHO, CCP);
  // st `.prototype` = r
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
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1246119658 dynamic dispatch ([`...`])

  return Rsh_Fir_user_version_inner1246119658_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1246119658 version 0 (dots -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1246119658/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_allNames;  // allNames
  SEXP Rsh_Fir_reg_props;  // props
  SEXP Rsh_Fir_reg_props1_;  // props1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_dataPart;  // dataPart
  SEXP Rsh_Fir_reg_dataPart1_;  // dataPart1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_data3_;  // data3
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_props2_;  // props2
  SEXP Rsh_Fir_reg_props3_;  // props3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_props5_;  // props5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_props8_;  // props8
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_data4_;  // data4
  SEXP Rsh_Fir_reg_data5_;  // data5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_props10_;  // props10
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_props12_;  // props12
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_data6_;  // data6
  SEXP Rsh_Fir_reg_data7_;  // data7
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_props13_;  // props13
  SEXP Rsh_Fir_reg_props14_;  // props14
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_props16_;  // props16
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_data8_;  // data8
  SEXP Rsh_Fir_reg_data9_;  // data9
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_names3_;  // names3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_names5_;  // names5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_data10_;  // data10
  SEXP Rsh_Fir_reg_data11_;  // data11
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_defaultPrototype;  // defaultPrototype
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_names6_;  // names6
  SEXP Rsh_Fir_reg_names7_;  // names7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_props17_;  // props17
  SEXP Rsh_Fir_reg_props18_;  // props18
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_props20_;  // props20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_slot__;  // slot__
  SEXP Rsh_Fir_reg_names8_;  // names8
  SEXP Rsh_Fir_reg_names9_;  // names9
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_names11_;  // names11
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_obj;  // obj
  SEXP Rsh_Fir_reg_obj1_;  // obj1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_names12_;  // names12
  SEXP Rsh_Fir_reg_names13_;  // names13
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_dataPart2_;  // dataPart2
  SEXP Rsh_Fir_reg_dataPart3_;  // dataPart3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r43_;  // r43

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L0_:;
  // st props = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // allNames = ldf allNames
  Rsh_Fir_reg_allNames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L1_:;
  // r8 = `!`(r6)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // st data = r8
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L2_:;
  // st dataPart = r10
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // dataPart = ld dataPart
  Rsh_Fir_reg_dataPart = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

L3_:;
  // defaultPrototype = ldf defaultPrototype
  Rsh_Fir_reg_defaultPrototype = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L67() else D21()
  // L67()
  goto L67_;

L4_:;
  // r15 = `>`(r13, 1.0)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L38() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L38()
    goto L38_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym4 = ldf unclass
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf unclass in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L7_:;
  // st obj = r19
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // props13 = ld props
  Rsh_Fir_reg_props13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L56() else D17()
  // L56()
  goto L56_;

L8_:;
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r27 = dyn unclass(dx1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L55() else D16()
  // L55()
  goto L55_;

L9_:;
  // c3 = `is.object`(r21)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c3 then L51() else L52(props8, r21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L51()
    goto L51_;
  } else {
  // L52(props8, r21)
    Rsh_Fir_reg_props10_ = Rsh_Fir_reg_props8_;
    Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r21_;
    goto L52_;
  }

L10_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r26 = dyn __1(props12, dx3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_props12_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L8(r26)
  // L8(r26)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r26_;
  goto L8_;

L11_:;
  // st props = dx5
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // names2 = ld names
  Rsh_Fir_reg_names2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L61() else D19()
  // L61()
  goto L61_;

L12_:;
  // st names = dx7
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym6 = ldf seq_along
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf seq_along in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard6 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L14_:;
  // s = toForSeq(r34)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 15);
  // goto L15(i)
  // L15(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L15_;

L15_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // c6 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if c6 then L72() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L72()
    goto L72_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // l1 = ld obj
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // slot__ = ldf `slot<-`
  Rsh_Fir_reg_slot__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L78() else D26()
  // L78()
  goto L78_;

L17_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args14[4];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // props17 = ld props
  Rsh_Fir_reg_props17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L73() else D24()
  // L73()
  goto L73_;

L18_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // r2 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p = prom<V +>{
  //   props = ld props;
  //   props1 = force? props;
  //   checkMissing(props1);
  //   return props1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_, CCP, RHO);
  // r4 = dyn allNames(p)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_allNames, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // st names = r4
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym1 = ldf nzchar
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf nzchar in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // names = ld names
  Rsh_Fir_reg_names = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

L25_:;
  // r5 = dyn base1(<sym names>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L1_;

D4_:;
  // deopt 13 [names]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_names;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // names1 = force? names
  Rsh_Fir_reg_names1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names);
  // checkMissing(names1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_names1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r7 = dyn nzchar(names1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L1_;

L28_:;
  // data = ld data
  Rsh_Fir_reg_data = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L29_:;
  // r9 = dyn base2(<sym data>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L2_;

D6_:;
  // deopt 21 [data]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_data;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // data1 = force? data
  Rsh_Fir_reg_data1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data);
  // checkMissing(data1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_data1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r11 = dyn any(data1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_data1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

D7_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L2(r11)
  // L2(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L2_;

D8_:;
  // deopt 26 [dataPart]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_dataPart;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // dataPart1 = force? dataPart
  Rsh_Fir_reg_dataPart1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dataPart);
  // checkMissing(dataPart1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dataPart1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(dataPart1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dataPart1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c then L33() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L33()
    goto L33_;
  } else {
  // L3()
    goto L3_;
  }

L33_:;
  // sym3 = ldf sum
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf sum in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard3 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // data2 = ld data
  Rsh_Fir_reg_data2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L35_:;
  // r12 = dyn base3(<sym data>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L4_;

D9_:;
  // deopt 30 [data2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_data2_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L36_:;
  // data3 = force? data2
  Rsh_Fir_reg_data3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data2_);
  // checkMissing(data3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_data3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r14 = dyn sum(data3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_data3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

D10_:;
  // deopt 33 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L4(r14)
  // L4(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L4_;

L38_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L39() else D11()
  // L39()
  goto L39_;

D11_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // r16 = dyn stop("only one data object (unnamed argument to prototype) allowed")
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L40() else D12()
  // L40()
  goto L40_;

D12_:;
  // deopt 39 [r16]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L6()
  // L6()
  goto L6_;

L42_:;
  // props2 = ld props
  Rsh_Fir_reg_props2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L44() else D13()
  // L44()
  goto L44_;

L43_:;
  // r18 = dyn base4(<lang `[[`(props, `[`(seq_along(data), data))>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D13_:;
  // deopt 44 [props2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_props2_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L44_:;
  // props3 = force? props2
  Rsh_Fir_reg_props3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_props2_);
  // checkMissing(props3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_props3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(props3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_props3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c2 then L45() else L46(props3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L45()
    goto L45_;
  } else {
  // L46(props3)
    Rsh_Fir_reg_props5_ = Rsh_Fir_reg_props3_;
    goto L46_;
  }

L45_:;
  // dr = tryDispatchBuiltin.1("[[", props3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_props3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc then L47() else L46(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L47()
    goto L47_;
  } else {
  // L46(dr)
    Rsh_Fir_reg_props5_ = Rsh_Fir_reg_dr;
    goto L46_;
  }

L46_:;
  // sym5 = ldf seq_along
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf seq_along in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard5 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L47_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

L48_:;
  // data4 = ld data
  Rsh_Fir_reg_data4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L50() else D14()
  // L50()
  goto L50_;

L49_:;
  // r20 = dyn base5(<sym data>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(props5, r20)
  // L9(props5, r20)
  Rsh_Fir_reg_props8_ = Rsh_Fir_reg_props5_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L9_;

D14_:;
  // deopt 47 [props5, data4]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_props5_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_data4_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // data5 = force? data4
  Rsh_Fir_reg_data5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data4_);
  // checkMissing(data5)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_data5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // r22 = seq_along(data5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_data5_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L9(props5, r22)
  // L9(props5, r22)
  Rsh_Fir_reg_props8_ = Rsh_Fir_reg_props5_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L9_;

L51_:;
  // dr2 = tryDispatchBuiltin.1("[", r21)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc1 then L53() else L52(props8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L53()
    goto L53_;
  } else {
  // L52(props8, dr2)
    Rsh_Fir_reg_props10_ = Rsh_Fir_reg_props8_;
    Rsh_Fir_reg_r24_ = Rsh_Fir_reg_dr2_;
    goto L52_;
  }

L52_:;
  // data6 = ld data
  Rsh_Fir_reg_data6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L54() else D15()
  // L54()
  goto L54_;

L53_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L10(props8, dx2)
  // L10(props8, dx2)
  Rsh_Fir_reg_props12_ = Rsh_Fir_reg_props8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L10_;

D15_:;
  // deopt 50 [props10, r24, data6]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_props10_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_data6_;
  Rsh_Fir_deopt(50, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // data7 = force? data6
  Rsh_Fir_reg_data7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data6_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r25 = dyn __(r24, data7)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_data7_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(props10, r25)
  // L10(props10, r25)
  Rsh_Fir_reg_props12_ = Rsh_Fir_reg_props10_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r25_;
  goto L10_;

D16_:;
  // deopt 55 [r27]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L7(r27)
  // L7(r27)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r27_;
  goto L7_;

D17_:;
  // deopt 57 [props13]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_props13_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L56_:;
  // props14 = force? props13
  Rsh_Fir_reg_props14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_props13_);
  // checkMissing(props14)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_props14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(props14)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_props14_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c4 then L57() else L58(props14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L57()
    goto L57_;
  } else {
  // L58(props14)
    Rsh_Fir_reg_props16_ = Rsh_Fir_reg_props14_;
    goto L58_;
  }

L57_:;
  // dr4 = tryDispatchBuiltin.1("[", props14)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_props14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc2 then L59() else L58(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L59()
    goto L59_;
  } else {
  // L58(dr4)
    Rsh_Fir_reg_props16_ = Rsh_Fir_reg_dr4_;
    goto L58_;
  }

L58_:;
  // data8 = ld data
  Rsh_Fir_reg_data8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L60() else D18()
  // L60()
  goto L60_;

L59_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L11(dx4)
  // L11(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L11_;

D18_:;
  // deopt 59 [props16, data8]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_props16_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_data8_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L60_:;
  // data9 = force? data8
  Rsh_Fir_reg_data9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data8_);
  // checkMissing(data9)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_data9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r28 = `!`(data9)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_data9_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r29 = dyn __2(props16, r28)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_props16_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r29)
  // L11(r29)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r29_;
  goto L11_;

D19_:;
  // deopt 64 [names2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_names2_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L61_:;
  // names3 = force? names2
  Rsh_Fir_reg_names3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names2_);
  // checkMissing(names3)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_names3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(names3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_names3_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c5 then L62() else L63(names3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L62()
    goto L62_;
  } else {
  // L63(names3)
    Rsh_Fir_reg_names5_ = Rsh_Fir_reg_names3_;
    goto L63_;
  }

L62_:;
  // dr6 = tryDispatchBuiltin.1("[", names3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_names3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc3 then L64() else L63(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L64()
    goto L64_;
  } else {
  // L63(dr6)
    Rsh_Fir_reg_names5_ = Rsh_Fir_reg_dr6_;
    goto L63_;
  }

L63_:;
  // data10 = ld data
  Rsh_Fir_reg_data10_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L65() else D20()
  // L65()
  goto L65_;

L64_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L12(dx6)
  // L12(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L12_;

D20_:;
  // deopt 66 [names5, data10]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_names5_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_data10_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L65_:;
  // data11 = force? data10
  Rsh_Fir_reg_data11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data10_);
  // checkMissing(data11)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_data11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r30 = `!`(data11)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_data11_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r31 = dyn __3(names5, r30)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_names5_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(r31)
  // L12(r31)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r31_;
  goto L12_;

D21_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // r32 = dyn defaultPrototype()
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_defaultPrototype, 0, NULL, NULL, CCP, RHO);
  // check L68() else D22()
  // L68()
  goto L68_;

D22_:;
  // deopt 73 [r32]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L68_:;
  // st obj = r32
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // goto L13()
  // L13()
  goto L13_;

L69_:;
  // names6 = ld names
  Rsh_Fir_reg_names6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L71() else D23()
  // L71()
  goto L71_;

L70_:;
  // r33 = dyn base6(<sym names>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r33)
  // L14(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L14_;

D23_:;
  // deopt 76 [names6]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_names6_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L71_:;
  // names7 = force? names6
  Rsh_Fir_reg_names7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names6_);
  // checkMissing(names7)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_names7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r35 = seq_along(names7)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_names7_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L14(r35)
  // L14(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L14_;

L72_:;
  // new = ldf new
  Rsh_Fir_reg_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L80() else D28()
  // L80()
  goto L80_;

D24_:;
  // deopt 79 [i2, props17]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_props17_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L73_:;
  // props18 = force? props17
  Rsh_Fir_reg_props18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_props17_);
  // checkMissing(props18)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_props18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(props18)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_props18_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c7 then L74() else L75(i2, props18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L74()
    goto L74_;
  } else {
  // L75(i2, props18)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_props20_ = Rsh_Fir_reg_props18_;
    goto L75_;
  }

L74_:;
  // dr8 = tryDispatchBuiltin.1("[[", props18)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_props18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc4 then L76() else L75(i2, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L76()
    goto L76_;
  } else {
  // L75(i2, dr8)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_props20_ = Rsh_Fir_reg_dr8_;
    goto L75_;
  }

L75_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L77() else D25()
  // L77()
  goto L77_;

L76_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L16(i2, dx9)
  // L16(i2, dx9)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L16_;

D25_:;
  // deopt 81 [i6, props20, i9]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_props20_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(81, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L77_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r36 = dyn __4(props20, i10)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_props20_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L16(i6, r36)
  // L16(i6, r36)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r36_;
  goto L16_;

D26_:;
  // deopt 85 [i8, dx10, l1, dx10]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_deopt(85, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L78_:;
  // p1 = prom<V +>{
  //   names8 = ld names;
  //   names9 = force? names8;
  //   checkMissing(names9);
  //   c8 = `is.object`(names9);
  //   if c8 then L1() else L2(names9);
  // L0(dx12):
  //   return dx12;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[[", names9);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(names11):
  //   i11 = ld i;
  //   i12 = force? i11;
  //   __5 = ldf `[[` in base;
  //   r37 = dyn __5(names11, i12);
  //   goto L0(r37);
  // L3():
  //   dx11 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx11);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_1, CCP, RHO);
  // r39 = dyn slot__(l1, NULL, p1, FALSE, dx10)
  SEXP Rsh_Fir_array_args78[5];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args78[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args78[4] = Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_array_arg_names20[5];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot__, 5, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L79() else D27()
  // L79()
  goto L79_;

D27_:;
  // deopt 89 [i8, dx10, r39]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(89, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L79_:;
  // st obj = r39
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // goto L15(i8)
  // L15(i8)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i8_;
  goto L15_;

D28_:;
  // deopt 95 []
  Rsh_Fir_deopt(95, 0, NULL, CCP, RHO);
  return R_NilValue;

L80_:;
  // p2 = prom<V +>{
  //   obj = ld obj;
  //   obj1 = force? obj;
  //   checkMissing(obj1);
  //   return obj1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_2, CCP, RHO);
  // p3 = prom<V +>{
  //   names12 = ld names;
  //   names13 = force? names12;
  //   checkMissing(names13);
  //   return names13;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_3, CCP, RHO);
  // p4 = prom<V +>{
  //   dataPart2 = ld dataPart;
  //   dataPart3 = force? dataPart2;
  //   checkMissing(dataPart3);
  //   return dataPart3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_4, CCP, RHO);
  // r43 = dyn new[, object, slots, dataPart]("classPrototypeDef", p2, p3, p4)
  SEXP Rsh_Fir_array_args82[4];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args82[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args82[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_arg_names21[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new, 4, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L81() else D29()
  // L81()
  goto L81_;

D29_:;
  // deopt 103 [r43]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L81_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r43
  return Rsh_Fir_reg_r43_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO) {
  // props = ld props
  Rsh_Fir_reg_props = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // props1 = force? props
  Rsh_Fir_reg_props1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_props);
  // checkMissing(props1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_props1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return props1
  return Rsh_Fir_reg_props1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO) {
  // names8 = ld names
  Rsh_Fir_reg_names8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // names9 = force? names8
  Rsh_Fir_reg_names9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names8_);
  // checkMissing(names9)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_names9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(names9)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_names9_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(names9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(names9)
    Rsh_Fir_reg_names11_ = Rsh_Fir_reg_names9_;
    goto L2_;
  }

L0_:;
  // return dx12
  return Rsh_Fir_reg_dx12_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[[", names9)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_names9_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_names11_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r37 = dyn __5(names11, i12)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_names11_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r37_;
  goto L0_;

L3_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L0(dx11)
  // L0(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO) {
  // obj = ld obj
  Rsh_Fir_reg_obj = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // obj1 = force? obj
  Rsh_Fir_reg_obj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj);
  // checkMissing(obj1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_obj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return obj1
  return Rsh_Fir_reg_obj1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO) {
  // names12 = ld names
  Rsh_Fir_reg_names12_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // names13 = force? names12
  Rsh_Fir_reg_names13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names12_);
  // checkMissing(names13)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_names13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return names13
  return Rsh_Fir_reg_names13_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_4(SEXP CCP, SEXP RHO) {
  // dataPart2 = ld dataPart
  Rsh_Fir_reg_dataPart2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // dataPart3 = force? dataPart2
  Rsh_Fir_reg_dataPart3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dataPart2_);
  // checkMissing(dataPart3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dataPart3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return dataPart3
  return Rsh_Fir_reg_dataPart3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
