#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2708337952_13(SEXP CCP, SEXP RHO);
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
  // r = clos inner2708337952
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st `.initialize.argdb` = r
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
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg__addFunctionInfo;  // _addFunctionInfo
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_lattice_common;  // lattice_common
  SEXP Rsh_Fir_reg_lattice_common1_;  // lattice_common1
  SEXP Rsh_Fir_reg_panel_xyplot;  // panel_xyplot
  SEXP Rsh_Fir_reg_panel_xyplot1_;  // panel_xyplot1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_lattice_common2_;  // lattice_common2
  SEXP Rsh_Fir_reg_lattice_common3_;  // lattice_common3
  SEXP Rsh_Fir_reg_densityplot;  // densityplot
  SEXP Rsh_Fir_reg_densityplot1_;  // densityplot1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg__addFunctionInfo1_;  // _addFunctionInfo1
  SEXP Rsh_Fir_reg_grid_clip;  // grid_clip
  SEXP Rsh_Fir_reg_grid_clip1_;  // grid_clip1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_grid_curve;  // grid_curve
  SEXP Rsh_Fir_reg_grid_curve1_;  // grid_curve1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_grid_polyline;  // grid_polyline
  SEXP Rsh_Fir_reg_grid_polyline1_;  // grid_polyline1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_grid_xspline;  // grid_xspline
  SEXP Rsh_Fir_reg_grid_xspline1_;  // grid_xspline1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg__Options;  // _Options
  SEXP Rsh_Fir_reg__Options1_;  // _Options1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg__addFunctionInfo2_;  // _addFunctionInfo2
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_par1_;  // par1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_options1_;  // options1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg__addFunctionInfo3_;  // _addFunctionInfo3
  SEXP Rsh_Fir_reg_readTable;  // readTable
  SEXP Rsh_Fir_reg_readTable1_;  // readTable1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_readTable2_;  // readTable2
  SEXP Rsh_Fir_reg_readTable3_;  // readTable3
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_readTable4_;  // readTable4
  SEXP Rsh_Fir_reg_readTable5_;  // readTable5
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_readTable6_;  // readTable6
  SEXP Rsh_Fir_reg_readTable7_;  // readTable7
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg__addFunctionInfo4_;  // _addFunctionInfo4
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r61_;  // r61

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L0_:;
  // st `lattice.common` = r1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L1_:;
  // st densityplot = r4
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L2_:;
  // st `panel.xyplot` = r7
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // _addFunctionInfo = ldf `.addFunctionInfo`
  Rsh_Fir_reg__addFunctionInfo = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L3_:;
  // st `grid.clip` = r19
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard6 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L4_:;
  // st `grid.curve` = r22
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard7 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L5_:;
  // st `grid.polyline` = r25
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard8 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L6_:;
  // st `grid.xspline` = r28
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // _addFunctionInfo1 = ldf `.addFunctionInfo`
  Rsh_Fir_reg__addFunctionInfo1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

L7_:;
  // st par = r36
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

L8_:;
  // st readTable = r50
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // _addFunctionInfo3 = ldf `.addFunctionInfo`
  Rsh_Fir_reg__addFunctionInfo3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L44() else D17()
  // L44()
  goto L44_;

L9_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r2 = dyn c("data", "allow.multiple", "outer", "auto.key", "aspect", "panel", "prepanel", "scales", "strip", "groups", "xlab", "xlim", "ylab", "ylim", "drop.unused.levels", "...", "default.scales", "subscripts", "subset", "formula", "cond", "aspect", "as.table", "between", "key", "legend", "page", "main", "sub", "par.strip.text", "layout", "skip", "strip", "strip.left", "xlab.default", "ylab.default", "xlab", "ylab", "panel", "xscale.components", "yscale.components", "axis", "index.cond", "perm.cond", "...", "par.settings", "plot.args", "lattice.options")
  SEXP Rsh_Fir_array_args6[48];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args6[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args6[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args6[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args6[7] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args6[8] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args6[9] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args6[10] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args6[11] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args6[12] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args6[13] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args6[14] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args6[15] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args6[16] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args6[17] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args6[18] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args6[19] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args6[20] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args6[21] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args6[22] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args6[23] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args6[24] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args6[25] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args6[26] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args6[27] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args6[28] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args6[29] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args6[30] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args6[31] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args6[32] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args6[33] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args6[34] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args6[35] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args6[36] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args6[37] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args6[38] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args6[39] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args6[40] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args6[41] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args6[42] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args6[43] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args6[44] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args6[45] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args6[46] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args6[47] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names[48];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_array_arg_names[9] = R_MissingArg;
  Rsh_Fir_array_arg_names[10] = R_MissingArg;
  Rsh_Fir_array_arg_names[11] = R_MissingArg;
  Rsh_Fir_array_arg_names[12] = R_MissingArg;
  Rsh_Fir_array_arg_names[13] = R_MissingArg;
  Rsh_Fir_array_arg_names[14] = R_MissingArg;
  Rsh_Fir_array_arg_names[15] = R_MissingArg;
  Rsh_Fir_array_arg_names[16] = R_MissingArg;
  Rsh_Fir_array_arg_names[17] = R_MissingArg;
  Rsh_Fir_array_arg_names[18] = R_MissingArg;
  Rsh_Fir_array_arg_names[19] = R_MissingArg;
  Rsh_Fir_array_arg_names[20] = R_MissingArg;
  Rsh_Fir_array_arg_names[21] = R_MissingArg;
  Rsh_Fir_array_arg_names[22] = R_MissingArg;
  Rsh_Fir_array_arg_names[23] = R_MissingArg;
  Rsh_Fir_array_arg_names[24] = R_MissingArg;
  Rsh_Fir_array_arg_names[25] = R_MissingArg;
  Rsh_Fir_array_arg_names[26] = R_MissingArg;
  Rsh_Fir_array_arg_names[27] = R_MissingArg;
  Rsh_Fir_array_arg_names[28] = R_MissingArg;
  Rsh_Fir_array_arg_names[29] = R_MissingArg;
  Rsh_Fir_array_arg_names[30] = R_MissingArg;
  Rsh_Fir_array_arg_names[31] = R_MissingArg;
  Rsh_Fir_array_arg_names[32] = R_MissingArg;
  Rsh_Fir_array_arg_names[33] = R_MissingArg;
  Rsh_Fir_array_arg_names[34] = R_MissingArg;
  Rsh_Fir_array_arg_names[35] = R_MissingArg;
  Rsh_Fir_array_arg_names[36] = R_MissingArg;
  Rsh_Fir_array_arg_names[37] = R_MissingArg;
  Rsh_Fir_array_arg_names[38] = R_MissingArg;
  Rsh_Fir_array_arg_names[39] = R_MissingArg;
  Rsh_Fir_array_arg_names[40] = R_MissingArg;
  Rsh_Fir_array_arg_names[41] = R_MissingArg;
  Rsh_Fir_array_arg_names[42] = R_MissingArg;
  Rsh_Fir_array_arg_names[43] = R_MissingArg;
  Rsh_Fir_array_arg_names[44] = R_MissingArg;
  Rsh_Fir_array_arg_names[45] = R_MissingArg;
  Rsh_Fir_array_arg_names[46] = R_MissingArg;
  Rsh_Fir_array_arg_names[47] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 48, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base("data", "allow.multiple", "outer", "auto.key", "aspect", "panel", "prepanel", "scales", "strip", "groups", "xlab", "xlim", "ylab", "ylim", "drop.unused.levels", "...", "default.scales", "subscripts", "subset", "formula", "cond", "aspect", "as.table", "between", "key", "legend", "page", "main", "sub", "par.strip.text", "layout", "skip", "strip", "strip.left", "xlab.default", "ylab.default", "xlab", "ylab", "panel", "xscale.components", "yscale.components", "axis", "index.cond", "perm.cond", "...", "par.settings", "plot.args", "lattice.options")
  SEXP Rsh_Fir_array_args7[48];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args7[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args7[5] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args7[6] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args7[7] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args7[8] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args7[9] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args7[10] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args7[11] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args7[12] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args7[13] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args7[14] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args7[15] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args7[16] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args7[17] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args7[18] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args7[19] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args7[20] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args7[21] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args7[22] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args7[23] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args7[24] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args7[25] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args7[26] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args7[27] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args7[28] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args7[29] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args7[30] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args7[31] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args7[32] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args7[33] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args7[34] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args7[35] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args7[36] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args7[37] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args7[38] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args7[39] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args7[40] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args7[41] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args7[42] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args7[43] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args7[44] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args7[45] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args7[46] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args7[47] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names1[48];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_array_arg_names1[9] = R_MissingArg;
  Rsh_Fir_array_arg_names1[10] = R_MissingArg;
  Rsh_Fir_array_arg_names1[11] = R_MissingArg;
  Rsh_Fir_array_arg_names1[12] = R_MissingArg;
  Rsh_Fir_array_arg_names1[13] = R_MissingArg;
  Rsh_Fir_array_arg_names1[14] = R_MissingArg;
  Rsh_Fir_array_arg_names1[15] = R_MissingArg;
  Rsh_Fir_array_arg_names1[16] = R_MissingArg;
  Rsh_Fir_array_arg_names1[17] = R_MissingArg;
  Rsh_Fir_array_arg_names1[18] = R_MissingArg;
  Rsh_Fir_array_arg_names1[19] = R_MissingArg;
  Rsh_Fir_array_arg_names1[20] = R_MissingArg;
  Rsh_Fir_array_arg_names1[21] = R_MissingArg;
  Rsh_Fir_array_arg_names1[22] = R_MissingArg;
  Rsh_Fir_array_arg_names1[23] = R_MissingArg;
  Rsh_Fir_array_arg_names1[24] = R_MissingArg;
  Rsh_Fir_array_arg_names1[25] = R_MissingArg;
  Rsh_Fir_array_arg_names1[26] = R_MissingArg;
  Rsh_Fir_array_arg_names1[27] = R_MissingArg;
  Rsh_Fir_array_arg_names1[28] = R_MissingArg;
  Rsh_Fir_array_arg_names1[29] = R_MissingArg;
  Rsh_Fir_array_arg_names1[30] = R_MissingArg;
  Rsh_Fir_array_arg_names1[31] = R_MissingArg;
  Rsh_Fir_array_arg_names1[32] = R_MissingArg;
  Rsh_Fir_array_arg_names1[33] = R_MissingArg;
  Rsh_Fir_array_arg_names1[34] = R_MissingArg;
  Rsh_Fir_array_arg_names1[35] = R_MissingArg;
  Rsh_Fir_array_arg_names1[36] = R_MissingArg;
  Rsh_Fir_array_arg_names1[37] = R_MissingArg;
  Rsh_Fir_array_arg_names1[38] = R_MissingArg;
  Rsh_Fir_array_arg_names1[39] = R_MissingArg;
  Rsh_Fir_array_arg_names1[40] = R_MissingArg;
  Rsh_Fir_array_arg_names1[41] = R_MissingArg;
  Rsh_Fir_array_arg_names1[42] = R_MissingArg;
  Rsh_Fir_array_arg_names1[43] = R_MissingArg;
  Rsh_Fir_array_arg_names1[44] = R_MissingArg;
  Rsh_Fir_array_arg_names1[45] = R_MissingArg;
  Rsh_Fir_array_arg_names1[46] = R_MissingArg;
  Rsh_Fir_array_arg_names1[47] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 48, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 51 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L12_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r5 = dyn c1("plot.points", "ref", "groups", "jitter.amount", "bw", "adjust", "kernel", "weights", "window", "width", "give.Rkern", "n", "from", "to", "cut", "na.rm")
  SEXP Rsh_Fir_array_args8[16];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args8[7] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args8[8] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args8[9] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args8[10] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args8[11] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args8[12] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args8[13] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args8[14] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args8[15] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names2[16];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_array_arg_names2[8] = R_MissingArg;
  Rsh_Fir_array_arg_names2[9] = R_MissingArg;
  Rsh_Fir_array_arg_names2[10] = R_MissingArg;
  Rsh_Fir_array_arg_names2[11] = R_MissingArg;
  Rsh_Fir_array_arg_names2[12] = R_MissingArg;
  Rsh_Fir_array_arg_names2[13] = R_MissingArg;
  Rsh_Fir_array_arg_names2[14] = R_MissingArg;
  Rsh_Fir_array_arg_names2[15] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 16, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

L13_:;
  // r3 = dyn base1("plot.points", "ref", "groups", "jitter.amount", "bw", "adjust", "kernel", "weights", "window", "width", "give.Rkern", "n", "from", "to", "cut", "na.rm")
  SEXP Rsh_Fir_array_args9[16];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args9[4] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args9[5] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args9[6] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args9[7] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args9[8] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args9[9] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args9[10] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args9[11] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args9[12] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args9[13] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args9[14] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args9[15] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names3[16];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_array_arg_names3[7] = R_MissingArg;
  Rsh_Fir_array_arg_names3[8] = R_MissingArg;
  Rsh_Fir_array_arg_names3[9] = R_MissingArg;
  Rsh_Fir_array_arg_names3[10] = R_MissingArg;
  Rsh_Fir_array_arg_names3[11] = R_MissingArg;
  Rsh_Fir_array_arg_names3[12] = R_MissingArg;
  Rsh_Fir_array_arg_names3[13] = R_MissingArg;
  Rsh_Fir_array_arg_names3[14] = R_MissingArg;
  Rsh_Fir_array_arg_names3[15] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 16, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D1_:;
  // deopt 72 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L15_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r8 = dyn c2("type", "groups", "pch", "col", "col.line", "col.symbol", "font", "fontfamily", "fontface", "lty", "cex", "fill", "lwd", "horizontal")
  SEXP Rsh_Fir_array_args10[14];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args10[4] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args10[5] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args10[6] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args10[7] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args10[8] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args10[9] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args10[10] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args10[11] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args10[12] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args10[13] = Rsh_const(CCP, 82);
  SEXP Rsh_Fir_array_arg_names4[14];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_array_arg_names4[6] = R_MissingArg;
  Rsh_Fir_array_arg_names4[7] = R_MissingArg;
  Rsh_Fir_array_arg_names4[8] = R_MissingArg;
  Rsh_Fir_array_arg_names4[9] = R_MissingArg;
  Rsh_Fir_array_arg_names4[10] = R_MissingArg;
  Rsh_Fir_array_arg_names4[11] = R_MissingArg;
  Rsh_Fir_array_arg_names4[12] = R_MissingArg;
  Rsh_Fir_array_arg_names4[13] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 14, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

L16_:;
  // r6 = dyn base2("type", "groups", "pch", "col", "col.line", "col.symbol", "font", "fontfamily", "fontface", "lty", "cex", "fill", "lwd", "horizontal")
  SEXP Rsh_Fir_array_args11[14];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args11[4] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args11[5] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args11[6] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args11[7] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args11[8] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args11[9] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args11[10] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args11[11] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args11[12] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args11[13] = Rsh_const(CCP, 82);
  SEXP Rsh_Fir_array_arg_names5[14];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_array_arg_names5[9] = R_MissingArg;
  Rsh_Fir_array_arg_names5[10] = R_MissingArg;
  Rsh_Fir_array_arg_names5[11] = R_MissingArg;
  Rsh_Fir_array_arg_names5[12] = R_MissingArg;
  Rsh_Fir_array_arg_names5[13] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 14, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D2_:;
  // deopt 91 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

D3_:;
  // deopt 94 []
  Rsh_Fir_deopt(94, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   lattice_common = ld `lattice.common`;
  //   lattice_common1 = force? lattice_common;
  //   checkMissing(lattice_common1);
  //   panel_xyplot = ld `panel.xyplot`;
  //   panel_xyplot1 = force? panel_xyplot;
  //   checkMissing(panel_xyplot1);
  //   c3 = ldf c in base;
  //   r11 = dyn c3(lattice_common1, panel_xyplot1);
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base3(<sym lattice.common>, <sym panel.xyplot>);
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   lattice_common2 = ld `lattice.common`;
  //   lattice_common3 = force? lattice_common2;
  //   checkMissing(lattice_common3);
  //   densityplot = ld densityplot;
  //   densityplot1 = force? densityplot;
  //   checkMissing(densityplot1);
  //   c4 = ldf c in base;
  //   r15 = dyn c4(lattice_common3, densityplot1);
  //   goto L0(r15);
  // L2():
  //   r13 = dyn base4(<sym lattice.common>, <sym densityplot>);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_1, CCP, RHO);
  // r17 = dyn _addFunctionInfo[`xyplot.formula`, `densityplot.formula`](p, p1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = Rsh_const(CCP, 83);
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 84);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__addFunctionInfo, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

D4_:;
  // deopt 99 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard5 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r20 = dyn c5("x", "y", "width", "height", "just", "hjust", "vjust", "default.units", "name", "vp")
  SEXP Rsh_Fir_array_args24[10];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args24[4] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args24[5] = Rsh_const(CCP, 89);
  Rsh_Fir_array_args24[6] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args24[7] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args24[8] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args24[9] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names11[10];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_array_arg_names11[7] = R_MissingArg;
  Rsh_Fir_array_arg_names11[8] = R_MissingArg;
  Rsh_Fir_array_arg_names11[9] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 10, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

L21_:;
  // r18 = dyn base5("x", "y", "width", "height", "just", "hjust", "vjust", "default.units", "name", "vp")
  SEXP Rsh_Fir_array_args25[10];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args25[3] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args25[4] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args25[5] = Rsh_const(CCP, 89);
  Rsh_Fir_array_args25[6] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args25[7] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args25[8] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args25[9] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names12[10];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_array_arg_names12[5] = R_MissingArg;
  Rsh_Fir_array_arg_names12[6] = R_MissingArg;
  Rsh_Fir_array_arg_names12[7] = R_MissingArg;
  Rsh_Fir_array_arg_names12[8] = R_MissingArg;
  Rsh_Fir_array_arg_names12[9] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 10, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L3(r18)
  // L3(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L3_;

D5_:;
  // deopt 113 [r20]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L3(r20)
  // L3(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L3_;

L23_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r23 = dyn c6("x1", "y1", "x2", "y2", "default.units", "curvature", "angle", "ncp", "shape", "square", "squareShape", "inflect", "arrow", "open", "debug", "name", "gp", "vp")
  SEXP Rsh_Fir_array_args26[18];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 94);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 95);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 96);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 97);
  Rsh_Fir_array_args26[4] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args26[5] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args26[6] = Rsh_const(CCP, 99);
  Rsh_Fir_array_args26[7] = Rsh_const(CCP, 100);
  Rsh_Fir_array_args26[8] = Rsh_const(CCP, 101);
  Rsh_Fir_array_args26[9] = Rsh_const(CCP, 102);
  Rsh_Fir_array_args26[10] = Rsh_const(CCP, 103);
  Rsh_Fir_array_args26[11] = Rsh_const(CCP, 104);
  Rsh_Fir_array_args26[12] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args26[13] = Rsh_const(CCP, 106);
  Rsh_Fir_array_args26[14] = Rsh_const(CCP, 107);
  Rsh_Fir_array_args26[15] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args26[16] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args26[17] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names13[18];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_array_arg_names13[6] = R_MissingArg;
  Rsh_Fir_array_arg_names13[7] = R_MissingArg;
  Rsh_Fir_array_arg_names13[8] = R_MissingArg;
  Rsh_Fir_array_arg_names13[9] = R_MissingArg;
  Rsh_Fir_array_arg_names13[10] = R_MissingArg;
  Rsh_Fir_array_arg_names13[11] = R_MissingArg;
  Rsh_Fir_array_arg_names13[12] = R_MissingArg;
  Rsh_Fir_array_arg_names13[13] = R_MissingArg;
  Rsh_Fir_array_arg_names13[14] = R_MissingArg;
  Rsh_Fir_array_arg_names13[15] = R_MissingArg;
  Rsh_Fir_array_arg_names13[16] = R_MissingArg;
  Rsh_Fir_array_arg_names13[17] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 18, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

L24_:;
  // r21 = dyn base6("x1", "y1", "x2", "y2", "default.units", "curvature", "angle", "ncp", "shape", "square", "squareShape", "inflect", "arrow", "open", "debug", "name", "gp", "vp")
  SEXP Rsh_Fir_array_args27[18];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 94);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 95);
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 96);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 97);
  Rsh_Fir_array_args27[4] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args27[5] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args27[6] = Rsh_const(CCP, 99);
  Rsh_Fir_array_args27[7] = Rsh_const(CCP, 100);
  Rsh_Fir_array_args27[8] = Rsh_const(CCP, 101);
  Rsh_Fir_array_args27[9] = Rsh_const(CCP, 102);
  Rsh_Fir_array_args27[10] = Rsh_const(CCP, 103);
  Rsh_Fir_array_args27[11] = Rsh_const(CCP, 104);
  Rsh_Fir_array_args27[12] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args27[13] = Rsh_const(CCP, 106);
  Rsh_Fir_array_args27[14] = Rsh_const(CCP, 107);
  Rsh_Fir_array_args27[15] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args27[16] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args27[17] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names14[18];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_array_arg_names14[5] = R_MissingArg;
  Rsh_Fir_array_arg_names14[6] = R_MissingArg;
  Rsh_Fir_array_arg_names14[7] = R_MissingArg;
  Rsh_Fir_array_arg_names14[8] = R_MissingArg;
  Rsh_Fir_array_arg_names14[9] = R_MissingArg;
  Rsh_Fir_array_arg_names14[10] = R_MissingArg;
  Rsh_Fir_array_arg_names14[11] = R_MissingArg;
  Rsh_Fir_array_arg_names14[12] = R_MissingArg;
  Rsh_Fir_array_arg_names14[13] = R_MissingArg;
  Rsh_Fir_array_arg_names14[14] = R_MissingArg;
  Rsh_Fir_array_arg_names14[15] = R_MissingArg;
  Rsh_Fir_array_arg_names14[16] = R_MissingArg;
  Rsh_Fir_array_arg_names14[17] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 18, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L4(r21)
  // L4(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L4_;

D6_:;
  // deopt 136 [r23]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L4(r23)
  // L4(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L4_;

L26_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r26 = dyn c7("x", "y", "id", "id.lengths", "default.units", "arrow", "name", "gp", "vp")
  SEXP Rsh_Fir_array_args28[9];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 109);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 110);
  Rsh_Fir_array_args28[4] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args28[5] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args28[6] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args28[7] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args28[8] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names15[9];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = R_MissingArg;
  Rsh_Fir_array_arg_names15[6] = R_MissingArg;
  Rsh_Fir_array_arg_names15[7] = R_MissingArg;
  Rsh_Fir_array_arg_names15[8] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 9, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

L27_:;
  // r24 = dyn base7("x", "y", "id", "id.lengths", "default.units", "arrow", "name", "gp", "vp")
  SEXP Rsh_Fir_array_args29[9];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 109);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 110);
  Rsh_Fir_array_args29[4] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args29[5] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args29[6] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args29[7] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args29[8] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names16[9];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_array_arg_names16[5] = R_MissingArg;
  Rsh_Fir_array_arg_names16[6] = R_MissingArg;
  Rsh_Fir_array_arg_names16[7] = R_MissingArg;
  Rsh_Fir_array_arg_names16[8] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 9, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L5(r24)
  // L5(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L5_;

D7_:;
  // deopt 150 [r26]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L5(r26)
  // L5(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L5_;

L29_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r29 = dyn c8("x", "y", "id", "id.lengths", "default.units", "shape", "open", "arrow", "repEnds", "name", "gp", "vp")
  SEXP Rsh_Fir_array_args30[12];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 109);
  Rsh_Fir_array_args30[3] = Rsh_const(CCP, 110);
  Rsh_Fir_array_args30[4] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args30[5] = Rsh_const(CCP, 101);
  Rsh_Fir_array_args30[6] = Rsh_const(CCP, 106);
  Rsh_Fir_array_args30[7] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args30[8] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args30[9] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args30[10] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args30[11] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names17[12];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_array_arg_names17[5] = R_MissingArg;
  Rsh_Fir_array_arg_names17[6] = R_MissingArg;
  Rsh_Fir_array_arg_names17[7] = R_MissingArg;
  Rsh_Fir_array_arg_names17[8] = R_MissingArg;
  Rsh_Fir_array_arg_names17[9] = R_MissingArg;
  Rsh_Fir_array_arg_names17[10] = R_MissingArg;
  Rsh_Fir_array_arg_names17[11] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 12, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L30_:;
  // r27 = dyn base8("x", "y", "id", "id.lengths", "default.units", "shape", "open", "arrow", "repEnds", "name", "gp", "vp")
  SEXP Rsh_Fir_array_args31[12];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 109);
  Rsh_Fir_array_args31[3] = Rsh_const(CCP, 110);
  Rsh_Fir_array_args31[4] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args31[5] = Rsh_const(CCP, 101);
  Rsh_Fir_array_args31[6] = Rsh_const(CCP, 106);
  Rsh_Fir_array_args31[7] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args31[8] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args31[9] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args31[10] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args31[11] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names18[12];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_array_arg_names18[5] = R_MissingArg;
  Rsh_Fir_array_arg_names18[6] = R_MissingArg;
  Rsh_Fir_array_arg_names18[7] = R_MissingArg;
  Rsh_Fir_array_arg_names18[8] = R_MissingArg;
  Rsh_Fir_array_arg_names18[9] = R_MissingArg;
  Rsh_Fir_array_arg_names18[10] = R_MissingArg;
  Rsh_Fir_array_arg_names18[11] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 12, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L6(r27)
  // L6(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L6_;

D8_:;
  // deopt 167 [r29]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L6(r29)
  // L6(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L6_;

D9_:;
  // deopt 170 []
  Rsh_Fir_deopt(170, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p2 = prom<V +>{
  //   grid_clip = ld `grid.clip`;
  //   grid_clip1 = force? grid_clip;
  //   checkMissing(grid_clip1);
  //   return grid_clip1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_2, CCP, RHO);
  // p3 = prom<V +>{
  //   grid_curve = ld `grid.curve`;
  //   grid_curve1 = force? grid_curve;
  //   checkMissing(grid_curve1);
  //   return grid_curve1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_3, CCP, RHO);
  // p4 = prom<V +>{
  //   grid_polyline = ld `grid.polyline`;
  //   grid_polyline1 = force? grid_polyline;
  //   checkMissing(grid_polyline1);
  //   return grid_polyline1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_4, CCP, RHO);
  // p5 = prom<V +>{
  //   grid_xspline = ld `grid.xspline`;
  //   grid_xspline1 = force? grid_xspline;
  //   checkMissing(grid_xspline1);
  //   return grid_xspline1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_5, CCP, RHO);
  // r34 = dyn _addFunctionInfo1[`grid.clip`, `grid.curve`, `grid.polyline`, `grid.xspline`](p2, p3, p4, p5)
  SEXP Rsh_Fir_array_args36[4];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args36[3] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names19[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__addFunctionInfo1_, 4, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

D10_:;
  // deopt 179 [r34]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard9 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r37 = dyn c9("xlog", "ylog", "adj", "ann", "ask", "bg", "bty", "cex", "cex.axis", "cex.lab", "cex.main", "cex.sub", "cin", "col", "col.axis", "col.lab", "col.main", "col.sub", "cra", "crt", "csi", "cxy", "din", "err", "family", "fg", "fig", "fin", "font", "font.axis", "font.lab", "font.main", "font.sub", "gamma", "lab", "las", "lend", "lheight", "ljoin", "lmitre", "lty", "lwd", "mai", "mar", "mex", "mfcol", "mfg", "mfrow", "mgp", "mkh", "new", "oma", "omd", "omi", "pch", "pin", "plt", "ps", "pty", "smo", "srt", "tck", "tcl", "usr", "xaxp", "xaxs", "xaxt", "xpd", "yaxp", "yaxs", "yaxt", "page", "ylbias")
  SEXP Rsh_Fir_array_args38[73];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 112);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 113);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 114);
  Rsh_Fir_array_args38[3] = Rsh_const(CCP, 115);
  Rsh_Fir_array_args38[4] = Rsh_const(CCP, 116);
  Rsh_Fir_array_args38[5] = Rsh_const(CCP, 117);
  Rsh_Fir_array_args38[6] = Rsh_const(CCP, 118);
  Rsh_Fir_array_args38[7] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args38[8] = Rsh_const(CCP, 119);
  Rsh_Fir_array_args38[9] = Rsh_const(CCP, 120);
  Rsh_Fir_array_args38[10] = Rsh_const(CCP, 121);
  Rsh_Fir_array_args38[11] = Rsh_const(CCP, 122);
  Rsh_Fir_array_args38[12] = Rsh_const(CCP, 123);
  Rsh_Fir_array_args38[13] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args38[14] = Rsh_const(CCP, 124);
  Rsh_Fir_array_args38[15] = Rsh_const(CCP, 125);
  Rsh_Fir_array_args38[16] = Rsh_const(CCP, 126);
  Rsh_Fir_array_args38[17] = Rsh_const(CCP, 127);
  Rsh_Fir_array_args38[18] = Rsh_const(CCP, 128);
  Rsh_Fir_array_args38[19] = Rsh_const(CCP, 129);
  Rsh_Fir_array_args38[20] = Rsh_const(CCP, 130);
  Rsh_Fir_array_args38[21] = Rsh_const(CCP, 131);
  Rsh_Fir_array_args38[22] = Rsh_const(CCP, 132);
  Rsh_Fir_array_args38[23] = Rsh_const(CCP, 133);
  Rsh_Fir_array_args38[24] = Rsh_const(CCP, 134);
  Rsh_Fir_array_args38[25] = Rsh_const(CCP, 135);
  Rsh_Fir_array_args38[26] = Rsh_const(CCP, 136);
  Rsh_Fir_array_args38[27] = Rsh_const(CCP, 137);
  Rsh_Fir_array_args38[28] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args38[29] = Rsh_const(CCP, 138);
  Rsh_Fir_array_args38[30] = Rsh_const(CCP, 139);
  Rsh_Fir_array_args38[31] = Rsh_const(CCP, 140);
  Rsh_Fir_array_args38[32] = Rsh_const(CCP, 141);
  Rsh_Fir_array_args38[33] = Rsh_const(CCP, 142);
  Rsh_Fir_array_args38[34] = Rsh_const(CCP, 143);
  Rsh_Fir_array_args38[35] = Rsh_const(CCP, 144);
  Rsh_Fir_array_args38[36] = Rsh_const(CCP, 145);
  Rsh_Fir_array_args38[37] = Rsh_const(CCP, 146);
  Rsh_Fir_array_args38[38] = Rsh_const(CCP, 147);
  Rsh_Fir_array_args38[39] = Rsh_const(CCP, 148);
  Rsh_Fir_array_args38[40] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args38[41] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args38[42] = Rsh_const(CCP, 149);
  Rsh_Fir_array_args38[43] = Rsh_const(CCP, 150);
  Rsh_Fir_array_args38[44] = Rsh_const(CCP, 151);
  Rsh_Fir_array_args38[45] = Rsh_const(CCP, 152);
  Rsh_Fir_array_args38[46] = Rsh_const(CCP, 153);
  Rsh_Fir_array_args38[47] = Rsh_const(CCP, 154);
  Rsh_Fir_array_args38[48] = Rsh_const(CCP, 155);
  Rsh_Fir_array_args38[49] = Rsh_const(CCP, 156);
  Rsh_Fir_array_args38[50] = Rsh_const(CCP, 157);
  Rsh_Fir_array_args38[51] = Rsh_const(CCP, 158);
  Rsh_Fir_array_args38[52] = Rsh_const(CCP, 159);
  Rsh_Fir_array_args38[53] = Rsh_const(CCP, 160);
  Rsh_Fir_array_args38[54] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args38[55] = Rsh_const(CCP, 161);
  Rsh_Fir_array_args38[56] = Rsh_const(CCP, 162);
  Rsh_Fir_array_args38[57] = Rsh_const(CCP, 163);
  Rsh_Fir_array_args38[58] = Rsh_const(CCP, 164);
  Rsh_Fir_array_args38[59] = Rsh_const(CCP, 165);
  Rsh_Fir_array_args38[60] = Rsh_const(CCP, 166);
  Rsh_Fir_array_args38[61] = Rsh_const(CCP, 167);
  Rsh_Fir_array_args38[62] = Rsh_const(CCP, 168);
  Rsh_Fir_array_args38[63] = Rsh_const(CCP, 169);
  Rsh_Fir_array_args38[64] = Rsh_const(CCP, 170);
  Rsh_Fir_array_args38[65] = Rsh_const(CCP, 171);
  Rsh_Fir_array_args38[66] = Rsh_const(CCP, 172);
  Rsh_Fir_array_args38[67] = Rsh_const(CCP, 173);
  Rsh_Fir_array_args38[68] = Rsh_const(CCP, 174);
  Rsh_Fir_array_args38[69] = Rsh_const(CCP, 175);
  Rsh_Fir_array_args38[70] = Rsh_const(CCP, 176);
  Rsh_Fir_array_args38[71] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args38[72] = Rsh_const(CCP, 177);
  SEXP Rsh_Fir_array_arg_names20[73];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = R_MissingArg;
  Rsh_Fir_array_arg_names20[5] = R_MissingArg;
  Rsh_Fir_array_arg_names20[6] = R_MissingArg;
  Rsh_Fir_array_arg_names20[7] = R_MissingArg;
  Rsh_Fir_array_arg_names20[8] = R_MissingArg;
  Rsh_Fir_array_arg_names20[9] = R_MissingArg;
  Rsh_Fir_array_arg_names20[10] = R_MissingArg;
  Rsh_Fir_array_arg_names20[11] = R_MissingArg;
  Rsh_Fir_array_arg_names20[12] = R_MissingArg;
  Rsh_Fir_array_arg_names20[13] = R_MissingArg;
  Rsh_Fir_array_arg_names20[14] = R_MissingArg;
  Rsh_Fir_array_arg_names20[15] = R_MissingArg;
  Rsh_Fir_array_arg_names20[16] = R_MissingArg;
  Rsh_Fir_array_arg_names20[17] = R_MissingArg;
  Rsh_Fir_array_arg_names20[18] = R_MissingArg;
  Rsh_Fir_array_arg_names20[19] = R_MissingArg;
  Rsh_Fir_array_arg_names20[20] = R_MissingArg;
  Rsh_Fir_array_arg_names20[21] = R_MissingArg;
  Rsh_Fir_array_arg_names20[22] = R_MissingArg;
  Rsh_Fir_array_arg_names20[23] = R_MissingArg;
  Rsh_Fir_array_arg_names20[24] = R_MissingArg;
  Rsh_Fir_array_arg_names20[25] = R_MissingArg;
  Rsh_Fir_array_arg_names20[26] = R_MissingArg;
  Rsh_Fir_array_arg_names20[27] = R_MissingArg;
  Rsh_Fir_array_arg_names20[28] = R_MissingArg;
  Rsh_Fir_array_arg_names20[29] = R_MissingArg;
  Rsh_Fir_array_arg_names20[30] = R_MissingArg;
  Rsh_Fir_array_arg_names20[31] = R_MissingArg;
  Rsh_Fir_array_arg_names20[32] = R_MissingArg;
  Rsh_Fir_array_arg_names20[33] = R_MissingArg;
  Rsh_Fir_array_arg_names20[34] = R_MissingArg;
  Rsh_Fir_array_arg_names20[35] = R_MissingArg;
  Rsh_Fir_array_arg_names20[36] = R_MissingArg;
  Rsh_Fir_array_arg_names20[37] = R_MissingArg;
  Rsh_Fir_array_arg_names20[38] = R_MissingArg;
  Rsh_Fir_array_arg_names20[39] = R_MissingArg;
  Rsh_Fir_array_arg_names20[40] = R_MissingArg;
  Rsh_Fir_array_arg_names20[41] = R_MissingArg;
  Rsh_Fir_array_arg_names20[42] = R_MissingArg;
  Rsh_Fir_array_arg_names20[43] = R_MissingArg;
  Rsh_Fir_array_arg_names20[44] = R_MissingArg;
  Rsh_Fir_array_arg_names20[45] = R_MissingArg;
  Rsh_Fir_array_arg_names20[46] = R_MissingArg;
  Rsh_Fir_array_arg_names20[47] = R_MissingArg;
  Rsh_Fir_array_arg_names20[48] = R_MissingArg;
  Rsh_Fir_array_arg_names20[49] = R_MissingArg;
  Rsh_Fir_array_arg_names20[50] = R_MissingArg;
  Rsh_Fir_array_arg_names20[51] = R_MissingArg;
  Rsh_Fir_array_arg_names20[52] = R_MissingArg;
  Rsh_Fir_array_arg_names20[53] = R_MissingArg;
  Rsh_Fir_array_arg_names20[54] = R_MissingArg;
  Rsh_Fir_array_arg_names20[55] = R_MissingArg;
  Rsh_Fir_array_arg_names20[56] = R_MissingArg;
  Rsh_Fir_array_arg_names20[57] = R_MissingArg;
  Rsh_Fir_array_arg_names20[58] = R_MissingArg;
  Rsh_Fir_array_arg_names20[59] = R_MissingArg;
  Rsh_Fir_array_arg_names20[60] = R_MissingArg;
  Rsh_Fir_array_arg_names20[61] = R_MissingArg;
  Rsh_Fir_array_arg_names20[62] = R_MissingArg;
  Rsh_Fir_array_arg_names20[63] = R_MissingArg;
  Rsh_Fir_array_arg_names20[64] = R_MissingArg;
  Rsh_Fir_array_arg_names20[65] = R_MissingArg;
  Rsh_Fir_array_arg_names20[66] = R_MissingArg;
  Rsh_Fir_array_arg_names20[67] = R_MissingArg;
  Rsh_Fir_array_arg_names20[68] = R_MissingArg;
  Rsh_Fir_array_arg_names20[69] = R_MissingArg;
  Rsh_Fir_array_arg_names20[70] = R_MissingArg;
  Rsh_Fir_array_arg_names20[71] = R_MissingArg;
  Rsh_Fir_array_arg_names20[72] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 73, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

L35_:;
  // r35 = dyn base9("xlog", "ylog", "adj", "ann", "ask", "bg", "bty", "cex", "cex.axis", "cex.lab", "cex.main", "cex.sub", "cin", "col", "col.axis", "col.lab", "col.main", "col.sub", "cra", "crt", "csi", "cxy", "din", "err", "family", "fg", "fig", "fin", "font", "font.axis", "font.lab", "font.main", "font.sub", "gamma", "lab", "las", "lend", "lheight", "ljoin", "lmitre", "lty", "lwd", "mai", "mar", "mex", "mfcol", "mfg", "mfrow", "mgp", "mkh", "new", "oma", "omd", "omi", "pch", "pin", "plt", "ps", "pty", "smo", "srt", "tck", "tcl", "usr", "xaxp", "xaxs", "xaxt", "xpd", "yaxp", "yaxs", "yaxt", "page", "ylbias")
  SEXP Rsh_Fir_array_args39[73];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 112);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 113);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 114);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 115);
  Rsh_Fir_array_args39[4] = Rsh_const(CCP, 116);
  Rsh_Fir_array_args39[5] = Rsh_const(CCP, 117);
  Rsh_Fir_array_args39[6] = Rsh_const(CCP, 118);
  Rsh_Fir_array_args39[7] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args39[8] = Rsh_const(CCP, 119);
  Rsh_Fir_array_args39[9] = Rsh_const(CCP, 120);
  Rsh_Fir_array_args39[10] = Rsh_const(CCP, 121);
  Rsh_Fir_array_args39[11] = Rsh_const(CCP, 122);
  Rsh_Fir_array_args39[12] = Rsh_const(CCP, 123);
  Rsh_Fir_array_args39[13] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args39[14] = Rsh_const(CCP, 124);
  Rsh_Fir_array_args39[15] = Rsh_const(CCP, 125);
  Rsh_Fir_array_args39[16] = Rsh_const(CCP, 126);
  Rsh_Fir_array_args39[17] = Rsh_const(CCP, 127);
  Rsh_Fir_array_args39[18] = Rsh_const(CCP, 128);
  Rsh_Fir_array_args39[19] = Rsh_const(CCP, 129);
  Rsh_Fir_array_args39[20] = Rsh_const(CCP, 130);
  Rsh_Fir_array_args39[21] = Rsh_const(CCP, 131);
  Rsh_Fir_array_args39[22] = Rsh_const(CCP, 132);
  Rsh_Fir_array_args39[23] = Rsh_const(CCP, 133);
  Rsh_Fir_array_args39[24] = Rsh_const(CCP, 134);
  Rsh_Fir_array_args39[25] = Rsh_const(CCP, 135);
  Rsh_Fir_array_args39[26] = Rsh_const(CCP, 136);
  Rsh_Fir_array_args39[27] = Rsh_const(CCP, 137);
  Rsh_Fir_array_args39[28] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args39[29] = Rsh_const(CCP, 138);
  Rsh_Fir_array_args39[30] = Rsh_const(CCP, 139);
  Rsh_Fir_array_args39[31] = Rsh_const(CCP, 140);
  Rsh_Fir_array_args39[32] = Rsh_const(CCP, 141);
  Rsh_Fir_array_args39[33] = Rsh_const(CCP, 142);
  Rsh_Fir_array_args39[34] = Rsh_const(CCP, 143);
  Rsh_Fir_array_args39[35] = Rsh_const(CCP, 144);
  Rsh_Fir_array_args39[36] = Rsh_const(CCP, 145);
  Rsh_Fir_array_args39[37] = Rsh_const(CCP, 146);
  Rsh_Fir_array_args39[38] = Rsh_const(CCP, 147);
  Rsh_Fir_array_args39[39] = Rsh_const(CCP, 148);
  Rsh_Fir_array_args39[40] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args39[41] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args39[42] = Rsh_const(CCP, 149);
  Rsh_Fir_array_args39[43] = Rsh_const(CCP, 150);
  Rsh_Fir_array_args39[44] = Rsh_const(CCP, 151);
  Rsh_Fir_array_args39[45] = Rsh_const(CCP, 152);
  Rsh_Fir_array_args39[46] = Rsh_const(CCP, 153);
  Rsh_Fir_array_args39[47] = Rsh_const(CCP, 154);
  Rsh_Fir_array_args39[48] = Rsh_const(CCP, 155);
  Rsh_Fir_array_args39[49] = Rsh_const(CCP, 156);
  Rsh_Fir_array_args39[50] = Rsh_const(CCP, 157);
  Rsh_Fir_array_args39[51] = Rsh_const(CCP, 158);
  Rsh_Fir_array_args39[52] = Rsh_const(CCP, 159);
  Rsh_Fir_array_args39[53] = Rsh_const(CCP, 160);
  Rsh_Fir_array_args39[54] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args39[55] = Rsh_const(CCP, 161);
  Rsh_Fir_array_args39[56] = Rsh_const(CCP, 162);
  Rsh_Fir_array_args39[57] = Rsh_const(CCP, 163);
  Rsh_Fir_array_args39[58] = Rsh_const(CCP, 164);
  Rsh_Fir_array_args39[59] = Rsh_const(CCP, 165);
  Rsh_Fir_array_args39[60] = Rsh_const(CCP, 166);
  Rsh_Fir_array_args39[61] = Rsh_const(CCP, 167);
  Rsh_Fir_array_args39[62] = Rsh_const(CCP, 168);
  Rsh_Fir_array_args39[63] = Rsh_const(CCP, 169);
  Rsh_Fir_array_args39[64] = Rsh_const(CCP, 170);
  Rsh_Fir_array_args39[65] = Rsh_const(CCP, 171);
  Rsh_Fir_array_args39[66] = Rsh_const(CCP, 172);
  Rsh_Fir_array_args39[67] = Rsh_const(CCP, 173);
  Rsh_Fir_array_args39[68] = Rsh_const(CCP, 174);
  Rsh_Fir_array_args39[69] = Rsh_const(CCP, 175);
  Rsh_Fir_array_args39[70] = Rsh_const(CCP, 176);
  Rsh_Fir_array_args39[71] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args39[72] = Rsh_const(CCP, 177);
  SEXP Rsh_Fir_array_arg_names21[73];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_array_arg_names21[5] = R_MissingArg;
  Rsh_Fir_array_arg_names21[6] = R_MissingArg;
  Rsh_Fir_array_arg_names21[7] = R_MissingArg;
  Rsh_Fir_array_arg_names21[8] = R_MissingArg;
  Rsh_Fir_array_arg_names21[9] = R_MissingArg;
  Rsh_Fir_array_arg_names21[10] = R_MissingArg;
  Rsh_Fir_array_arg_names21[11] = R_MissingArg;
  Rsh_Fir_array_arg_names21[12] = R_MissingArg;
  Rsh_Fir_array_arg_names21[13] = R_MissingArg;
  Rsh_Fir_array_arg_names21[14] = R_MissingArg;
  Rsh_Fir_array_arg_names21[15] = R_MissingArg;
  Rsh_Fir_array_arg_names21[16] = R_MissingArg;
  Rsh_Fir_array_arg_names21[17] = R_MissingArg;
  Rsh_Fir_array_arg_names21[18] = R_MissingArg;
  Rsh_Fir_array_arg_names21[19] = R_MissingArg;
  Rsh_Fir_array_arg_names21[20] = R_MissingArg;
  Rsh_Fir_array_arg_names21[21] = R_MissingArg;
  Rsh_Fir_array_arg_names21[22] = R_MissingArg;
  Rsh_Fir_array_arg_names21[23] = R_MissingArg;
  Rsh_Fir_array_arg_names21[24] = R_MissingArg;
  Rsh_Fir_array_arg_names21[25] = R_MissingArg;
  Rsh_Fir_array_arg_names21[26] = R_MissingArg;
  Rsh_Fir_array_arg_names21[27] = R_MissingArg;
  Rsh_Fir_array_arg_names21[28] = R_MissingArg;
  Rsh_Fir_array_arg_names21[29] = R_MissingArg;
  Rsh_Fir_array_arg_names21[30] = R_MissingArg;
  Rsh_Fir_array_arg_names21[31] = R_MissingArg;
  Rsh_Fir_array_arg_names21[32] = R_MissingArg;
  Rsh_Fir_array_arg_names21[33] = R_MissingArg;
  Rsh_Fir_array_arg_names21[34] = R_MissingArg;
  Rsh_Fir_array_arg_names21[35] = R_MissingArg;
  Rsh_Fir_array_arg_names21[36] = R_MissingArg;
  Rsh_Fir_array_arg_names21[37] = R_MissingArg;
  Rsh_Fir_array_arg_names21[38] = R_MissingArg;
  Rsh_Fir_array_arg_names21[39] = R_MissingArg;
  Rsh_Fir_array_arg_names21[40] = R_MissingArg;
  Rsh_Fir_array_arg_names21[41] = R_MissingArg;
  Rsh_Fir_array_arg_names21[42] = R_MissingArg;
  Rsh_Fir_array_arg_names21[43] = R_MissingArg;
  Rsh_Fir_array_arg_names21[44] = R_MissingArg;
  Rsh_Fir_array_arg_names21[45] = R_MissingArg;
  Rsh_Fir_array_arg_names21[46] = R_MissingArg;
  Rsh_Fir_array_arg_names21[47] = R_MissingArg;
  Rsh_Fir_array_arg_names21[48] = R_MissingArg;
  Rsh_Fir_array_arg_names21[49] = R_MissingArg;
  Rsh_Fir_array_arg_names21[50] = R_MissingArg;
  Rsh_Fir_array_arg_names21[51] = R_MissingArg;
  Rsh_Fir_array_arg_names21[52] = R_MissingArg;
  Rsh_Fir_array_arg_names21[53] = R_MissingArg;
  Rsh_Fir_array_arg_names21[54] = R_MissingArg;
  Rsh_Fir_array_arg_names21[55] = R_MissingArg;
  Rsh_Fir_array_arg_names21[56] = R_MissingArg;
  Rsh_Fir_array_arg_names21[57] = R_MissingArg;
  Rsh_Fir_array_arg_names21[58] = R_MissingArg;
  Rsh_Fir_array_arg_names21[59] = R_MissingArg;
  Rsh_Fir_array_arg_names21[60] = R_MissingArg;
  Rsh_Fir_array_arg_names21[61] = R_MissingArg;
  Rsh_Fir_array_arg_names21[62] = R_MissingArg;
  Rsh_Fir_array_arg_names21[63] = R_MissingArg;
  Rsh_Fir_array_arg_names21[64] = R_MissingArg;
  Rsh_Fir_array_arg_names21[65] = R_MissingArg;
  Rsh_Fir_array_arg_names21[66] = R_MissingArg;
  Rsh_Fir_array_arg_names21[67] = R_MissingArg;
  Rsh_Fir_array_arg_names21[68] = R_MissingArg;
  Rsh_Fir_array_arg_names21[69] = R_MissingArg;
  Rsh_Fir_array_arg_names21[70] = R_MissingArg;
  Rsh_Fir_array_arg_names21[71] = R_MissingArg;
  Rsh_Fir_array_arg_names21[72] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 73, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L7(r35)
  // L7(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L7_;

D11_:;
  // deopt 256 [r37]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(256, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L7(r37)
  // L7(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L7_;

D12_:;
  // deopt 259 []
  Rsh_Fir_deopt(259, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p6 = prom<V +>{
  //   sym10 = ldf c;
  //   base10 = ldf c in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L2() else L3();
  // L0(r39):
  //   return r39;
  // L2():
  //   sym11 = ldf names;
  //   base11 = ldf names in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L4() else L5();
  // L3():
  //   r38 = dyn base10(<lang names(.Options)>, "bitmapType", "citation.bibtex.max", "contrasts", "demo.ask", "device", "device.ask.default", "editor", "example.ask", "help.search.types", "help.try.all.packages", "HTTPUserAgent", "internet.info", "locatorBell", "mailer", "menu.graphics", "na.action", "pkgType", "repos", "show.coef.Pvalues", "show.signif.stars", "str", "str.dendrogram.last", "ts.eps", "ts.S.compat", "unzip", "windowsTimeout", "mc.cores", "dvipscmd", "warn.FPU", "askYesNo", "BioC_mirror", "ccaddress", "checkPackageLicense", "conflicts.policy", "de.cellwidth", "deparse.max.lines", "digits.secs", "download.file.extra", "download.file.method", "error", "help.htmlmath", "help.htmltoc", "help.ports", "help_type", "install.lock", "install.packages.check.source", "install.packages.compile.from.source", "interrupt", "Ncpus", "save.defaults", "save.image.defaults", "setWidthOnResize", "show.error.locations", "show.nls.convergence", "SweaveHooks", "SweaveSyntax", "topLevelEnvironment", "traceback.max.lines", "url.method", "warning.expression");
  //   goto L0(r38);
  // L1(r41):
  //   c10 = ldf c in base;
  //   r43 = dyn c10(r41, "bitmapType", "citation.bibtex.max", "contrasts", "demo.ask", "device", "device.ask.default", "editor", "example.ask", "help.search.types", "help.try.all.packages", "HTTPUserAgent", "internet.info", "locatorBell", "mailer", "menu.graphics", "na.action", "pkgType", "repos", "show.coef.Pvalues", "show.signif.stars", "str", "str.dendrogram.last", "ts.eps", "ts.S.compat", "unzip", "windowsTimeout", "mc.cores", "dvipscmd", "warn.FPU", "askYesNo", "BioC_mirror", "ccaddress", "checkPackageLicense", "conflicts.policy", "de.cellwidth", "deparse.max.lines", "digits.secs", "download.file.extra", "download.file.method", "error", "help.htmlmath", "help.htmltoc", "help.ports", "help_type", "install.lock", "install.packages.check.source", "install.packages.compile.from.source", "interrupt", "Ncpus", "save.defaults", "save.image.defaults", "setWidthOnResize", "show.error.locations", "show.nls.convergence", "SweaveHooks", "SweaveSyntax", "topLevelEnvironment", "traceback.max.lines", "url.method", "warning.expression");
  //   goto L0(r43);
  // L4():
  //   _Options = ld `.Options`;
  //   _Options1 = force? _Options;
  //   checkMissing(_Options1);
  //   names = ldf names in base;
  //   r42 = dyn names(_Options1);
  //   goto L1(r42);
  // L5():
  //   r40 = dyn base11(<sym .Options>);
  //   goto L1(r40);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_6, CCP, RHO);
  // r45 = dyn unique(p6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L38() else D13()
  // L38()
  goto L38_;

D13_:;
  // deopt 261 [r45]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(261, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // st options = r45
  Rsh_Fir_store(Rsh_const(CCP, 241), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // _addFunctionInfo2 = ldf `.addFunctionInfo`
  Rsh_Fir_reg__addFunctionInfo2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L39() else D14()
  // L39()
  goto L39_;

D14_:;
  // deopt 264 []
  Rsh_Fir_deopt(264, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p7 = prom<V +>{
  //   par = ld par;
  //   par1 = force? par;
  //   checkMissing(par1);
  //   return par1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_7, CCP, RHO);
  // p8 = prom<V +>{
  //   options = ld options;
  //   options1 = force? options;
  //   checkMissing(options1);
  //   return options1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_8, CCP, RHO);
  // r48 = dyn _addFunctionInfo2[par, options](p7, p8)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 241);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__addFunctionInfo2_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L40() else D15()
  // L40()
  goto L40_;

D15_:;
  // deopt 269 [r48]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(269, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L40_:;
  // sym12 = ldf c
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base12 = ldf c in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard12 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L41_:;
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r51 = dyn c11("file", "header", "sep", "quote", "dec", "numerals", "row.names", "col.names", "as.is", "na.strings", "colClasses", "nrows", "skip", "check.names", "fill", "strip.white", "blank.lines.skip", "comment.char", "allowEscapes", "flush", "stringsAsFactors", "fileEncoding", "encoding", "text", "skipNul")
  SEXP Rsh_Fir_array_args52[25];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 242);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 243);
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 244);
  Rsh_Fir_array_args52[3] = Rsh_const(CCP, 245);
  Rsh_Fir_array_args52[4] = Rsh_const(CCP, 246);
  Rsh_Fir_array_args52[5] = Rsh_const(CCP, 247);
  Rsh_Fir_array_args52[6] = Rsh_const(CCP, 248);
  Rsh_Fir_array_args52[7] = Rsh_const(CCP, 249);
  Rsh_Fir_array_args52[8] = Rsh_const(CCP, 250);
  Rsh_Fir_array_args52[9] = Rsh_const(CCP, 251);
  Rsh_Fir_array_args52[10] = Rsh_const(CCP, 252);
  Rsh_Fir_array_args52[11] = Rsh_const(CCP, 253);
  Rsh_Fir_array_args52[12] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args52[13] = Rsh_const(CCP, 254);
  Rsh_Fir_array_args52[14] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args52[15] = Rsh_const(CCP, 255);
  Rsh_Fir_array_args52[16] = Rsh_const(CCP, 256);
  Rsh_Fir_array_args52[17] = Rsh_const(CCP, 257);
  Rsh_Fir_array_args52[18] = Rsh_const(CCP, 258);
  Rsh_Fir_array_args52[19] = Rsh_const(CCP, 259);
  Rsh_Fir_array_args52[20] = Rsh_const(CCP, 260);
  Rsh_Fir_array_args52[21] = Rsh_const(CCP, 261);
  Rsh_Fir_array_args52[22] = Rsh_const(CCP, 262);
  Rsh_Fir_array_args52[23] = Rsh_const(CCP, 263);
  Rsh_Fir_array_args52[24] = Rsh_const(CCP, 264);
  SEXP Rsh_Fir_array_arg_names28[25];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_array_arg_names28[4] = R_MissingArg;
  Rsh_Fir_array_arg_names28[5] = R_MissingArg;
  Rsh_Fir_array_arg_names28[6] = R_MissingArg;
  Rsh_Fir_array_arg_names28[7] = R_MissingArg;
  Rsh_Fir_array_arg_names28[8] = R_MissingArg;
  Rsh_Fir_array_arg_names28[9] = R_MissingArg;
  Rsh_Fir_array_arg_names28[10] = R_MissingArg;
  Rsh_Fir_array_arg_names28[11] = R_MissingArg;
  Rsh_Fir_array_arg_names28[12] = R_MissingArg;
  Rsh_Fir_array_arg_names28[13] = R_MissingArg;
  Rsh_Fir_array_arg_names28[14] = R_MissingArg;
  Rsh_Fir_array_arg_names28[15] = R_MissingArg;
  Rsh_Fir_array_arg_names28[16] = R_MissingArg;
  Rsh_Fir_array_arg_names28[17] = R_MissingArg;
  Rsh_Fir_array_arg_names28[18] = R_MissingArg;
  Rsh_Fir_array_arg_names28[19] = R_MissingArg;
  Rsh_Fir_array_arg_names28[20] = R_MissingArg;
  Rsh_Fir_array_arg_names28[21] = R_MissingArg;
  Rsh_Fir_array_arg_names28[22] = R_MissingArg;
  Rsh_Fir_array_arg_names28[23] = R_MissingArg;
  Rsh_Fir_array_arg_names28[24] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 25, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L43() else D16()
  // L43()
  goto L43_;

L42_:;
  // r49 = dyn base12("file", "header", "sep", "quote", "dec", "numerals", "row.names", "col.names", "as.is", "na.strings", "colClasses", "nrows", "skip", "check.names", "fill", "strip.white", "blank.lines.skip", "comment.char", "allowEscapes", "flush", "stringsAsFactors", "fileEncoding", "encoding", "text", "skipNul")
  SEXP Rsh_Fir_array_args53[25];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 242);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 243);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 244);
  Rsh_Fir_array_args53[3] = Rsh_const(CCP, 245);
  Rsh_Fir_array_args53[4] = Rsh_const(CCP, 246);
  Rsh_Fir_array_args53[5] = Rsh_const(CCP, 247);
  Rsh_Fir_array_args53[6] = Rsh_const(CCP, 248);
  Rsh_Fir_array_args53[7] = Rsh_const(CCP, 249);
  Rsh_Fir_array_args53[8] = Rsh_const(CCP, 250);
  Rsh_Fir_array_args53[9] = Rsh_const(CCP, 251);
  Rsh_Fir_array_args53[10] = Rsh_const(CCP, 252);
  Rsh_Fir_array_args53[11] = Rsh_const(CCP, 253);
  Rsh_Fir_array_args53[12] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args53[13] = Rsh_const(CCP, 254);
  Rsh_Fir_array_args53[14] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args53[15] = Rsh_const(CCP, 255);
  Rsh_Fir_array_args53[16] = Rsh_const(CCP, 256);
  Rsh_Fir_array_args53[17] = Rsh_const(CCP, 257);
  Rsh_Fir_array_args53[18] = Rsh_const(CCP, 258);
  Rsh_Fir_array_args53[19] = Rsh_const(CCP, 259);
  Rsh_Fir_array_args53[20] = Rsh_const(CCP, 260);
  Rsh_Fir_array_args53[21] = Rsh_const(CCP, 261);
  Rsh_Fir_array_args53[22] = Rsh_const(CCP, 262);
  Rsh_Fir_array_args53[23] = Rsh_const(CCP, 263);
  Rsh_Fir_array_args53[24] = Rsh_const(CCP, 264);
  SEXP Rsh_Fir_array_arg_names29[25];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_array_arg_names29[4] = R_MissingArg;
  Rsh_Fir_array_arg_names29[5] = R_MissingArg;
  Rsh_Fir_array_arg_names29[6] = R_MissingArg;
  Rsh_Fir_array_arg_names29[7] = R_MissingArg;
  Rsh_Fir_array_arg_names29[8] = R_MissingArg;
  Rsh_Fir_array_arg_names29[9] = R_MissingArg;
  Rsh_Fir_array_arg_names29[10] = R_MissingArg;
  Rsh_Fir_array_arg_names29[11] = R_MissingArg;
  Rsh_Fir_array_arg_names29[12] = R_MissingArg;
  Rsh_Fir_array_arg_names29[13] = R_MissingArg;
  Rsh_Fir_array_arg_names29[14] = R_MissingArg;
  Rsh_Fir_array_arg_names29[15] = R_MissingArg;
  Rsh_Fir_array_arg_names29[16] = R_MissingArg;
  Rsh_Fir_array_arg_names29[17] = R_MissingArg;
  Rsh_Fir_array_arg_names29[18] = R_MissingArg;
  Rsh_Fir_array_arg_names29[19] = R_MissingArg;
  Rsh_Fir_array_arg_names29[20] = R_MissingArg;
  Rsh_Fir_array_arg_names29[21] = R_MissingArg;
  Rsh_Fir_array_arg_names29[22] = R_MissingArg;
  Rsh_Fir_array_arg_names29[23] = R_MissingArg;
  Rsh_Fir_array_arg_names29[24] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 25, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L8(r49)
  // L8(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L8_;

D16_:;
  // deopt 298 [r51]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(298, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L8(r51)
  // L8(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L8_;

D17_:;
  // deopt 301 []
  Rsh_Fir_deopt(301, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p9 = prom<V +>{
  //   readTable = ld readTable;
  //   readTable1 = force? readTable;
  //   checkMissing(readTable1);
  //   return readTable1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_9, CCP, RHO);
  // p10 = prom<V +>{
  //   readTable2 = ld readTable;
  //   readTable3 = force? readTable2;
  //   checkMissing(readTable3);
  //   return readTable3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_10, CCP, RHO);
  // p11 = prom<V +>{
  //   readTable4 = ld readTable;
  //   readTable5 = force? readTable4;
  //   checkMissing(readTable5);
  //   return readTable5;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_11, CCP, RHO);
  // p12 = prom<V +>{
  //   readTable6 = ld readTable;
  //   readTable7 = force? readTable6;
  //   checkMissing(readTable7);
  //   return readTable7;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_12, CCP, RHO);
  // r56 = dyn _addFunctionInfo3[`read.csv`, `read.csv2`, `read.delim`, `read.delim2`](p9, p10, p11, p12)
  SEXP Rsh_Fir_array_args58[4];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args58[3] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names30[4];
  Rsh_Fir_array_arg_names30[0] = Rsh_const(CCP, 265);
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 266);
  Rsh_Fir_array_arg_names30[2] = Rsh_const(CCP, 267);
  Rsh_Fir_array_arg_names30[3] = Rsh_const(CCP, 268);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__addFunctionInfo3_, 4, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L45() else D18()
  // L45()
  goto L45_;

D18_:;
  // deopt 310 [r56]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(310, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L45_:;
  // _addFunctionInfo4 = ldf `.addFunctionInfo`
  Rsh_Fir_reg__addFunctionInfo4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L46() else D19()
  // L46()
  goto L46_;

D19_:;
  // deopt 312 []
  Rsh_Fir_deopt(312, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p13 = prom<V +>{
  //   sym13 = ldf c;
  //   base13 = ldf c in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r58):
  //   return r58;
  // L1():
  //   c12 = ldf c in base;
  //   r59 = dyn c12("recursive", "use.names");
  //   goto L0(r59);
  // L2():
  //   r57 = dyn base13("recursive", "use.names");
  //   goto L0(r57);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_13, CCP, RHO);
  // r61 = dyn _addFunctionInfo4[c](p13)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__addFunctionInfo4_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L47() else D20()
  // L47()
  goto L47_;

D20_:;
  // deopt 315 [r61]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(315, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L47_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r61
  return Rsh_Fir_reg_r61_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_;

L1_:;
  // lattice_common = ld `lattice.common`
  Rsh_Fir_reg_lattice_common = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // lattice_common1 = force? lattice_common
  Rsh_Fir_reg_lattice_common1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lattice_common);
  // checkMissing(lattice_common1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_lattice_common1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // panel_xyplot = ld `panel.xyplot`
  Rsh_Fir_reg_panel_xyplot = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // panel_xyplot1 = force? panel_xyplot
  Rsh_Fir_reg_panel_xyplot1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_panel_xyplot);
  // checkMissing(panel_xyplot1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_panel_xyplot1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r11 = dyn c3(lattice_common1, panel_xyplot1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_lattice_common1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_panel_xyplot1_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base3(<sym lattice.common>, <sym panel.xyplot>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_1(SEXP CCP, SEXP RHO) {
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // lattice_common2 = ld `lattice.common`
  Rsh_Fir_reg_lattice_common2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // lattice_common3 = force? lattice_common2
  Rsh_Fir_reg_lattice_common3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lattice_common2_);
  // checkMissing(lattice_common3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_lattice_common3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // densityplot = ld densityplot
  Rsh_Fir_reg_densityplot = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // densityplot1 = force? densityplot
  Rsh_Fir_reg_densityplot1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_densityplot);
  // checkMissing(densityplot1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_densityplot1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r15 = dyn c4(lattice_common3, densityplot1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_lattice_common3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_densityplot1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L0_;

L2_:;
  // r13 = dyn base4(<sym lattice.common>, <sym densityplot>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_2(SEXP CCP, SEXP RHO) {
  // grid_clip = ld `grid.clip`
  Rsh_Fir_reg_grid_clip = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // grid_clip1 = force? grid_clip
  Rsh_Fir_reg_grid_clip1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_grid_clip);
  // checkMissing(grid_clip1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_grid_clip1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return grid_clip1
  return Rsh_Fir_reg_grid_clip1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_3(SEXP CCP, SEXP RHO) {
  // grid_curve = ld `grid.curve`
  Rsh_Fir_reg_grid_curve = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // grid_curve1 = force? grid_curve
  Rsh_Fir_reg_grid_curve1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_grid_curve);
  // checkMissing(grid_curve1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_grid_curve1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return grid_curve1
  return Rsh_Fir_reg_grid_curve1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_4(SEXP CCP, SEXP RHO) {
  // grid_polyline = ld `grid.polyline`
  Rsh_Fir_reg_grid_polyline = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // grid_polyline1 = force? grid_polyline
  Rsh_Fir_reg_grid_polyline1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_grid_polyline);
  // checkMissing(grid_polyline1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_grid_polyline1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return grid_polyline1
  return Rsh_Fir_reg_grid_polyline1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_5(SEXP CCP, SEXP RHO) {
  // grid_xspline = ld `grid.xspline`
  Rsh_Fir_reg_grid_xspline = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // grid_xspline1 = force? grid_xspline
  Rsh_Fir_reg_grid_xspline1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_grid_xspline);
  // checkMissing(grid_xspline1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_grid_xspline1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return grid_xspline1
  return Rsh_Fir_reg_grid_xspline1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_6(SEXP CCP, SEXP RHO) {
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard10 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r39
  return Rsh_Fir_reg_r39_;

L1_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r43 = dyn c10(r41, "bitmapType", "citation.bibtex.max", "contrasts", "demo.ask", "device", "device.ask.default", "editor", "example.ask", "help.search.types", "help.try.all.packages", "HTTPUserAgent", "internet.info", "locatorBell", "mailer", "menu.graphics", "na.action", "pkgType", "repos", "show.coef.Pvalues", "show.signif.stars", "str", "str.dendrogram.last", "ts.eps", "ts.S.compat", "unzip", "windowsTimeout", "mc.cores", "dvipscmd", "warn.FPU", "askYesNo", "BioC_mirror", "ccaddress", "checkPackageLicense", "conflicts.policy", "de.cellwidth", "deparse.max.lines", "digits.secs", "download.file.extra", "download.file.method", "error", "help.htmlmath", "help.htmltoc", "help.ports", "help_type", "install.lock", "install.packages.check.source", "install.packages.compile.from.source", "interrupt", "Ncpus", "save.defaults", "save.image.defaults", "setWidthOnResize", "show.error.locations", "show.nls.convergence", "SweaveHooks", "SweaveSyntax", "topLevelEnvironment", "traceback.max.lines", "url.method", "warning.expression")
  SEXP Rsh_Fir_array_args41[61];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 178);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 179);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 180);
  Rsh_Fir_array_args41[4] = Rsh_const(CCP, 181);
  Rsh_Fir_array_args41[5] = Rsh_const(CCP, 182);
  Rsh_Fir_array_args41[6] = Rsh_const(CCP, 183);
  Rsh_Fir_array_args41[7] = Rsh_const(CCP, 184);
  Rsh_Fir_array_args41[8] = Rsh_const(CCP, 185);
  Rsh_Fir_array_args41[9] = Rsh_const(CCP, 186);
  Rsh_Fir_array_args41[10] = Rsh_const(CCP, 187);
  Rsh_Fir_array_args41[11] = Rsh_const(CCP, 188);
  Rsh_Fir_array_args41[12] = Rsh_const(CCP, 189);
  Rsh_Fir_array_args41[13] = Rsh_const(CCP, 190);
  Rsh_Fir_array_args41[14] = Rsh_const(CCP, 191);
  Rsh_Fir_array_args41[15] = Rsh_const(CCP, 192);
  Rsh_Fir_array_args41[16] = Rsh_const(CCP, 193);
  Rsh_Fir_array_args41[17] = Rsh_const(CCP, 194);
  Rsh_Fir_array_args41[18] = Rsh_const(CCP, 195);
  Rsh_Fir_array_args41[19] = Rsh_const(CCP, 196);
  Rsh_Fir_array_args41[20] = Rsh_const(CCP, 197);
  Rsh_Fir_array_args41[21] = Rsh_const(CCP, 198);
  Rsh_Fir_array_args41[22] = Rsh_const(CCP, 199);
  Rsh_Fir_array_args41[23] = Rsh_const(CCP, 200);
  Rsh_Fir_array_args41[24] = Rsh_const(CCP, 201);
  Rsh_Fir_array_args41[25] = Rsh_const(CCP, 202);
  Rsh_Fir_array_args41[26] = Rsh_const(CCP, 203);
  Rsh_Fir_array_args41[27] = Rsh_const(CCP, 204);
  Rsh_Fir_array_args41[28] = Rsh_const(CCP, 205);
  Rsh_Fir_array_args41[29] = Rsh_const(CCP, 206);
  Rsh_Fir_array_args41[30] = Rsh_const(CCP, 207);
  Rsh_Fir_array_args41[31] = Rsh_const(CCP, 208);
  Rsh_Fir_array_args41[32] = Rsh_const(CCP, 209);
  Rsh_Fir_array_args41[33] = Rsh_const(CCP, 210);
  Rsh_Fir_array_args41[34] = Rsh_const(CCP, 211);
  Rsh_Fir_array_args41[35] = Rsh_const(CCP, 212);
  Rsh_Fir_array_args41[36] = Rsh_const(CCP, 213);
  Rsh_Fir_array_args41[37] = Rsh_const(CCP, 214);
  Rsh_Fir_array_args41[38] = Rsh_const(CCP, 215);
  Rsh_Fir_array_args41[39] = Rsh_const(CCP, 216);
  Rsh_Fir_array_args41[40] = Rsh_const(CCP, 217);
  Rsh_Fir_array_args41[41] = Rsh_const(CCP, 218);
  Rsh_Fir_array_args41[42] = Rsh_const(CCP, 219);
  Rsh_Fir_array_args41[43] = Rsh_const(CCP, 220);
  Rsh_Fir_array_args41[44] = Rsh_const(CCP, 221);
  Rsh_Fir_array_args41[45] = Rsh_const(CCP, 222);
  Rsh_Fir_array_args41[46] = Rsh_const(CCP, 223);
  Rsh_Fir_array_args41[47] = Rsh_const(CCP, 224);
  Rsh_Fir_array_args41[48] = Rsh_const(CCP, 225);
  Rsh_Fir_array_args41[49] = Rsh_const(CCP, 226);
  Rsh_Fir_array_args41[50] = Rsh_const(CCP, 227);
  Rsh_Fir_array_args41[51] = Rsh_const(CCP, 228);
  Rsh_Fir_array_args41[52] = Rsh_const(CCP, 229);
  Rsh_Fir_array_args41[53] = Rsh_const(CCP, 230);
  Rsh_Fir_array_args41[54] = Rsh_const(CCP, 231);
  Rsh_Fir_array_args41[55] = Rsh_const(CCP, 232);
  Rsh_Fir_array_args41[56] = Rsh_const(CCP, 233);
  Rsh_Fir_array_args41[57] = Rsh_const(CCP, 234);
  Rsh_Fir_array_args41[58] = Rsh_const(CCP, 235);
  Rsh_Fir_array_args41[59] = Rsh_const(CCP, 236);
  Rsh_Fir_array_args41[60] = Rsh_const(CCP, 237);
  SEXP Rsh_Fir_array_arg_names22[61];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_array_arg_names22[5] = R_MissingArg;
  Rsh_Fir_array_arg_names22[6] = R_MissingArg;
  Rsh_Fir_array_arg_names22[7] = R_MissingArg;
  Rsh_Fir_array_arg_names22[8] = R_MissingArg;
  Rsh_Fir_array_arg_names22[9] = R_MissingArg;
  Rsh_Fir_array_arg_names22[10] = R_MissingArg;
  Rsh_Fir_array_arg_names22[11] = R_MissingArg;
  Rsh_Fir_array_arg_names22[12] = R_MissingArg;
  Rsh_Fir_array_arg_names22[13] = R_MissingArg;
  Rsh_Fir_array_arg_names22[14] = R_MissingArg;
  Rsh_Fir_array_arg_names22[15] = R_MissingArg;
  Rsh_Fir_array_arg_names22[16] = R_MissingArg;
  Rsh_Fir_array_arg_names22[17] = R_MissingArg;
  Rsh_Fir_array_arg_names22[18] = R_MissingArg;
  Rsh_Fir_array_arg_names22[19] = R_MissingArg;
  Rsh_Fir_array_arg_names22[20] = R_MissingArg;
  Rsh_Fir_array_arg_names22[21] = R_MissingArg;
  Rsh_Fir_array_arg_names22[22] = R_MissingArg;
  Rsh_Fir_array_arg_names22[23] = R_MissingArg;
  Rsh_Fir_array_arg_names22[24] = R_MissingArg;
  Rsh_Fir_array_arg_names22[25] = R_MissingArg;
  Rsh_Fir_array_arg_names22[26] = R_MissingArg;
  Rsh_Fir_array_arg_names22[27] = R_MissingArg;
  Rsh_Fir_array_arg_names22[28] = R_MissingArg;
  Rsh_Fir_array_arg_names22[29] = R_MissingArg;
  Rsh_Fir_array_arg_names22[30] = R_MissingArg;
  Rsh_Fir_array_arg_names22[31] = R_MissingArg;
  Rsh_Fir_array_arg_names22[32] = R_MissingArg;
  Rsh_Fir_array_arg_names22[33] = R_MissingArg;
  Rsh_Fir_array_arg_names22[34] = R_MissingArg;
  Rsh_Fir_array_arg_names22[35] = R_MissingArg;
  Rsh_Fir_array_arg_names22[36] = R_MissingArg;
  Rsh_Fir_array_arg_names22[37] = R_MissingArg;
  Rsh_Fir_array_arg_names22[38] = R_MissingArg;
  Rsh_Fir_array_arg_names22[39] = R_MissingArg;
  Rsh_Fir_array_arg_names22[40] = R_MissingArg;
  Rsh_Fir_array_arg_names22[41] = R_MissingArg;
  Rsh_Fir_array_arg_names22[42] = R_MissingArg;
  Rsh_Fir_array_arg_names22[43] = R_MissingArg;
  Rsh_Fir_array_arg_names22[44] = R_MissingArg;
  Rsh_Fir_array_arg_names22[45] = R_MissingArg;
  Rsh_Fir_array_arg_names22[46] = R_MissingArg;
  Rsh_Fir_array_arg_names22[47] = R_MissingArg;
  Rsh_Fir_array_arg_names22[48] = R_MissingArg;
  Rsh_Fir_array_arg_names22[49] = R_MissingArg;
  Rsh_Fir_array_arg_names22[50] = R_MissingArg;
  Rsh_Fir_array_arg_names22[51] = R_MissingArg;
  Rsh_Fir_array_arg_names22[52] = R_MissingArg;
  Rsh_Fir_array_arg_names22[53] = R_MissingArg;
  Rsh_Fir_array_arg_names22[54] = R_MissingArg;
  Rsh_Fir_array_arg_names22[55] = R_MissingArg;
  Rsh_Fir_array_arg_names22[56] = R_MissingArg;
  Rsh_Fir_array_arg_names22[57] = R_MissingArg;
  Rsh_Fir_array_arg_names22[58] = R_MissingArg;
  Rsh_Fir_array_arg_names22[59] = R_MissingArg;
  Rsh_Fir_array_arg_names22[60] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 61, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r43_;
  goto L0_;

L2_:;
  // sym11 = ldf names
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 238), RHO);
  // base11 = ldf names in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 238), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard11 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r38 = dyn base10(<lang names(.Options)>, "bitmapType", "citation.bibtex.max", "contrasts", "demo.ask", "device", "device.ask.default", "editor", "example.ask", "help.search.types", "help.try.all.packages", "HTTPUserAgent", "internet.info", "locatorBell", "mailer", "menu.graphics", "na.action", "pkgType", "repos", "show.coef.Pvalues", "show.signif.stars", "str", "str.dendrogram.last", "ts.eps", "ts.S.compat", "unzip", "windowsTimeout", "mc.cores", "dvipscmd", "warn.FPU", "askYesNo", "BioC_mirror", "ccaddress", "checkPackageLicense", "conflicts.policy", "de.cellwidth", "deparse.max.lines", "digits.secs", "download.file.extra", "download.file.method", "error", "help.htmlmath", "help.htmltoc", "help.ports", "help_type", "install.lock", "install.packages.check.source", "install.packages.compile.from.source", "interrupt", "Ncpus", "save.defaults", "save.image.defaults", "setWidthOnResize", "show.error.locations", "show.nls.convergence", "SweaveHooks", "SweaveSyntax", "topLevelEnvironment", "traceback.max.lines", "url.method", "warning.expression")
  SEXP Rsh_Fir_array_args43[61];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 239);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 178);
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 179);
  Rsh_Fir_array_args43[3] = Rsh_const(CCP, 180);
  Rsh_Fir_array_args43[4] = Rsh_const(CCP, 181);
  Rsh_Fir_array_args43[5] = Rsh_const(CCP, 182);
  Rsh_Fir_array_args43[6] = Rsh_const(CCP, 183);
  Rsh_Fir_array_args43[7] = Rsh_const(CCP, 184);
  Rsh_Fir_array_args43[8] = Rsh_const(CCP, 185);
  Rsh_Fir_array_args43[9] = Rsh_const(CCP, 186);
  Rsh_Fir_array_args43[10] = Rsh_const(CCP, 187);
  Rsh_Fir_array_args43[11] = Rsh_const(CCP, 188);
  Rsh_Fir_array_args43[12] = Rsh_const(CCP, 189);
  Rsh_Fir_array_args43[13] = Rsh_const(CCP, 190);
  Rsh_Fir_array_args43[14] = Rsh_const(CCP, 191);
  Rsh_Fir_array_args43[15] = Rsh_const(CCP, 192);
  Rsh_Fir_array_args43[16] = Rsh_const(CCP, 193);
  Rsh_Fir_array_args43[17] = Rsh_const(CCP, 194);
  Rsh_Fir_array_args43[18] = Rsh_const(CCP, 195);
  Rsh_Fir_array_args43[19] = Rsh_const(CCP, 196);
  Rsh_Fir_array_args43[20] = Rsh_const(CCP, 197);
  Rsh_Fir_array_args43[21] = Rsh_const(CCP, 198);
  Rsh_Fir_array_args43[22] = Rsh_const(CCP, 199);
  Rsh_Fir_array_args43[23] = Rsh_const(CCP, 200);
  Rsh_Fir_array_args43[24] = Rsh_const(CCP, 201);
  Rsh_Fir_array_args43[25] = Rsh_const(CCP, 202);
  Rsh_Fir_array_args43[26] = Rsh_const(CCP, 203);
  Rsh_Fir_array_args43[27] = Rsh_const(CCP, 204);
  Rsh_Fir_array_args43[28] = Rsh_const(CCP, 205);
  Rsh_Fir_array_args43[29] = Rsh_const(CCP, 206);
  Rsh_Fir_array_args43[30] = Rsh_const(CCP, 207);
  Rsh_Fir_array_args43[31] = Rsh_const(CCP, 208);
  Rsh_Fir_array_args43[32] = Rsh_const(CCP, 209);
  Rsh_Fir_array_args43[33] = Rsh_const(CCP, 210);
  Rsh_Fir_array_args43[34] = Rsh_const(CCP, 211);
  Rsh_Fir_array_args43[35] = Rsh_const(CCP, 212);
  Rsh_Fir_array_args43[36] = Rsh_const(CCP, 213);
  Rsh_Fir_array_args43[37] = Rsh_const(CCP, 214);
  Rsh_Fir_array_args43[38] = Rsh_const(CCP, 215);
  Rsh_Fir_array_args43[39] = Rsh_const(CCP, 216);
  Rsh_Fir_array_args43[40] = Rsh_const(CCP, 217);
  Rsh_Fir_array_args43[41] = Rsh_const(CCP, 218);
  Rsh_Fir_array_args43[42] = Rsh_const(CCP, 219);
  Rsh_Fir_array_args43[43] = Rsh_const(CCP, 220);
  Rsh_Fir_array_args43[44] = Rsh_const(CCP, 221);
  Rsh_Fir_array_args43[45] = Rsh_const(CCP, 222);
  Rsh_Fir_array_args43[46] = Rsh_const(CCP, 223);
  Rsh_Fir_array_args43[47] = Rsh_const(CCP, 224);
  Rsh_Fir_array_args43[48] = Rsh_const(CCP, 225);
  Rsh_Fir_array_args43[49] = Rsh_const(CCP, 226);
  Rsh_Fir_array_args43[50] = Rsh_const(CCP, 227);
  Rsh_Fir_array_args43[51] = Rsh_const(CCP, 228);
  Rsh_Fir_array_args43[52] = Rsh_const(CCP, 229);
  Rsh_Fir_array_args43[53] = Rsh_const(CCP, 230);
  Rsh_Fir_array_args43[54] = Rsh_const(CCP, 231);
  Rsh_Fir_array_args43[55] = Rsh_const(CCP, 232);
  Rsh_Fir_array_args43[56] = Rsh_const(CCP, 233);
  Rsh_Fir_array_args43[57] = Rsh_const(CCP, 234);
  Rsh_Fir_array_args43[58] = Rsh_const(CCP, 235);
  Rsh_Fir_array_args43[59] = Rsh_const(CCP, 236);
  Rsh_Fir_array_args43[60] = Rsh_const(CCP, 237);
  SEXP Rsh_Fir_array_arg_names23[61];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_array_arg_names23[4] = R_MissingArg;
  Rsh_Fir_array_arg_names23[5] = R_MissingArg;
  Rsh_Fir_array_arg_names23[6] = R_MissingArg;
  Rsh_Fir_array_arg_names23[7] = R_MissingArg;
  Rsh_Fir_array_arg_names23[8] = R_MissingArg;
  Rsh_Fir_array_arg_names23[9] = R_MissingArg;
  Rsh_Fir_array_arg_names23[10] = R_MissingArg;
  Rsh_Fir_array_arg_names23[11] = R_MissingArg;
  Rsh_Fir_array_arg_names23[12] = R_MissingArg;
  Rsh_Fir_array_arg_names23[13] = R_MissingArg;
  Rsh_Fir_array_arg_names23[14] = R_MissingArg;
  Rsh_Fir_array_arg_names23[15] = R_MissingArg;
  Rsh_Fir_array_arg_names23[16] = R_MissingArg;
  Rsh_Fir_array_arg_names23[17] = R_MissingArg;
  Rsh_Fir_array_arg_names23[18] = R_MissingArg;
  Rsh_Fir_array_arg_names23[19] = R_MissingArg;
  Rsh_Fir_array_arg_names23[20] = R_MissingArg;
  Rsh_Fir_array_arg_names23[21] = R_MissingArg;
  Rsh_Fir_array_arg_names23[22] = R_MissingArg;
  Rsh_Fir_array_arg_names23[23] = R_MissingArg;
  Rsh_Fir_array_arg_names23[24] = R_MissingArg;
  Rsh_Fir_array_arg_names23[25] = R_MissingArg;
  Rsh_Fir_array_arg_names23[26] = R_MissingArg;
  Rsh_Fir_array_arg_names23[27] = R_MissingArg;
  Rsh_Fir_array_arg_names23[28] = R_MissingArg;
  Rsh_Fir_array_arg_names23[29] = R_MissingArg;
  Rsh_Fir_array_arg_names23[30] = R_MissingArg;
  Rsh_Fir_array_arg_names23[31] = R_MissingArg;
  Rsh_Fir_array_arg_names23[32] = R_MissingArg;
  Rsh_Fir_array_arg_names23[33] = R_MissingArg;
  Rsh_Fir_array_arg_names23[34] = R_MissingArg;
  Rsh_Fir_array_arg_names23[35] = R_MissingArg;
  Rsh_Fir_array_arg_names23[36] = R_MissingArg;
  Rsh_Fir_array_arg_names23[37] = R_MissingArg;
  Rsh_Fir_array_arg_names23[38] = R_MissingArg;
  Rsh_Fir_array_arg_names23[39] = R_MissingArg;
  Rsh_Fir_array_arg_names23[40] = R_MissingArg;
  Rsh_Fir_array_arg_names23[41] = R_MissingArg;
  Rsh_Fir_array_arg_names23[42] = R_MissingArg;
  Rsh_Fir_array_arg_names23[43] = R_MissingArg;
  Rsh_Fir_array_arg_names23[44] = R_MissingArg;
  Rsh_Fir_array_arg_names23[45] = R_MissingArg;
  Rsh_Fir_array_arg_names23[46] = R_MissingArg;
  Rsh_Fir_array_arg_names23[47] = R_MissingArg;
  Rsh_Fir_array_arg_names23[48] = R_MissingArg;
  Rsh_Fir_array_arg_names23[49] = R_MissingArg;
  Rsh_Fir_array_arg_names23[50] = R_MissingArg;
  Rsh_Fir_array_arg_names23[51] = R_MissingArg;
  Rsh_Fir_array_arg_names23[52] = R_MissingArg;
  Rsh_Fir_array_arg_names23[53] = R_MissingArg;
  Rsh_Fir_array_arg_names23[54] = R_MissingArg;
  Rsh_Fir_array_arg_names23[55] = R_MissingArg;
  Rsh_Fir_array_arg_names23[56] = R_MissingArg;
  Rsh_Fir_array_arg_names23[57] = R_MissingArg;
  Rsh_Fir_array_arg_names23[58] = R_MissingArg;
  Rsh_Fir_array_arg_names23[59] = R_MissingArg;
  Rsh_Fir_array_arg_names23[60] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 61, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L0_;

L4_:;
  // _Options = ld `.Options`
  Rsh_Fir_reg__Options = Rsh_Fir_load(Rsh_const(CCP, 240), RHO);
  // _Options1 = force? _Options
  Rsh_Fir_reg__Options1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Options);
  // checkMissing(_Options1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg__Options1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 238), RHO);
  // r42 = dyn names(_Options1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg__Options1_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L1(r42)
  // L1(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L1_;

L5_:;
  // r40 = dyn base11(<sym .Options>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 240);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L1(r40)
  // L1(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_7(SEXP CCP, SEXP RHO) {
  // par = ld par
  Rsh_Fir_reg_par = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // par1 = force? par
  Rsh_Fir_reg_par1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_par);
  // checkMissing(par1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_par1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return par1
  return Rsh_Fir_reg_par1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_8(SEXP CCP, SEXP RHO) {
  // options = ld options
  Rsh_Fir_reg_options = Rsh_Fir_load(Rsh_const(CCP, 241), RHO);
  // options1 = force? options
  Rsh_Fir_reg_options1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_options);
  // checkMissing(options1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_options1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return options1
  return Rsh_Fir_reg_options1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_9(SEXP CCP, SEXP RHO) {
  // readTable = ld readTable
  Rsh_Fir_reg_readTable = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // readTable1 = force? readTable
  Rsh_Fir_reg_readTable1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_readTable);
  // checkMissing(readTable1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_readTable1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return readTable1
  return Rsh_Fir_reg_readTable1_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_10(SEXP CCP, SEXP RHO) {
  // readTable2 = ld readTable
  Rsh_Fir_reg_readTable2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // readTable3 = force? readTable2
  Rsh_Fir_reg_readTable3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_readTable2_);
  // checkMissing(readTable3)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_readTable3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return readTable3
  return Rsh_Fir_reg_readTable3_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_11(SEXP CCP, SEXP RHO) {
  // readTable4 = ld readTable
  Rsh_Fir_reg_readTable4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // readTable5 = force? readTable4
  Rsh_Fir_reg_readTable5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_readTable4_);
  // checkMissing(readTable5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_readTable5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return readTable5
  return Rsh_Fir_reg_readTable5_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_12(SEXP CCP, SEXP RHO) {
  // readTable6 = ld readTable
  Rsh_Fir_reg_readTable6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // readTable7 = force? readTable6
  Rsh_Fir_reg_readTable7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_readTable6_);
  // checkMissing(readTable7)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_readTable7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return readTable7
  return Rsh_Fir_reg_readTable7_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_13(SEXP CCP, SEXP RHO) {
  // sym13 = ldf c
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base13 = ldf c in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r58
  return Rsh_Fir_reg_r58_;

L1_:;
  // c12 = ldf c in base
  Rsh_Fir_reg_c12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r59 = dyn c12("recursive", "use.names")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 269);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 270);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c12_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r59)
  // L0(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L0_;

L2_:;
  // r57 = dyn base13("recursive", "use.names")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 269);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 270);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
