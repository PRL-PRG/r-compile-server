#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3569397244_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3569397244_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3569397244_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3569397244_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner3569397244
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3569397244_, RHO, CCP);
  // st check_so_symbols = r
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
SEXP Rsh_Fir_user_function_inner3569397244_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3569397244 dynamic dispatch ([so])

  return Rsh_Fir_user_version_inner3569397244_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3569397244_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3569397244 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3569397244/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_so;  // so
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_system_ABI;  // system_ABI
  SEXP Rsh_Fir_reg_system_ABI1_;  // system_ABI1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_read_symbols_from_object_file;  // read_symbols_from_object_file
  SEXP Rsh_Fir_reg_so1_;  // so1
  SEXP Rsh_Fir_reg_so2_;  // so2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_tab;  // tab
  SEXP Rsh_Fir_reg_tab1_;  // tab1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_tab3_;  // tab3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_tab4_;  // tab4
  SEXP Rsh_Fir_reg_tab5_;  // tab5
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_tab8_;  // tab8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_tab11_;  // tab11
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_tab12_;  // tab12
  SEXP Rsh_Fir_reg_tab13_;  // tab13
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_system_ABI2_;  // system_ABI2
  SEXP Rsh_Fir_reg_system_ABI3_;  // system_ABI3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_system_ABI5_;  // system_ABI5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_so_symbol_names_handlers_db;  // so_symbol_names_handlers_db
  SEXP Rsh_Fir_reg_so_symbol_names_handlers_db1_;  // so_symbol_names_handlers_db1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_so_symbol_names_handlers_db3_;  // so_symbol_names_handlers_db3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_sys;  // sys
  SEXP Rsh_Fir_reg_sys1_;  // sys1
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_snh;  // snh
  SEXP Rsh_Fir_reg_nms;  // nms
  SEXP Rsh_Fir_reg_nms1_;  // nms1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_so_symbol_names_table;  // so_symbol_names_table
  SEXP Rsh_Fir_reg_so_symbol_names_table1_;  // so_symbol_names_table1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_nms2_;  // nms2
  SEXP Rsh_Fir_reg_nms3_;  // nms3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_so_symbol_names_table4_;  // so_symbol_names_table4
  SEXP Rsh_Fir_reg_so_symbol_names_table5_;  // so_symbol_names_table5
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_so_symbol_names_table7_;  // so_symbol_names_table7
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_so3_;  // so3
  SEXP Rsh_Fir_reg_so4_;  // so4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_tab16_;  // tab16
  SEXP Rsh_Fir_reg_tab17_;  // tab17
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_intersect;  // intersect
  SEXP Rsh_Fir_reg_tab18_;  // tab18
  SEXP Rsh_Fir_reg_tab19_;  // tab19
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_nonAPI;  // nonAPI
  SEXP Rsh_Fir_reg_nonAPI1_;  // nonAPI1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_tab2a;  // tab2a
  SEXP Rsh_Fir_reg_tab2a1_;  // tab2a1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_setdiff;  // setdiff
  SEXP Rsh_Fir_reg_tab2a2_;  // tab2a2
  SEXP Rsh_Fir_reg_tab2a3_;  // tab2a3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_tab2a4_;  // tab2a4
  SEXP Rsh_Fir_reg_tab2a5_;  // tab2a5
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_tab2a6_;  // tab2a6
  SEXP Rsh_Fir_reg_tab2a7_;  // tab2a7
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_setdiff1_;  // setdiff1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_tab20_;  // tab20
  SEXP Rsh_Fir_reg_tab21_;  // tab21
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_tab2b;  // tab2b
  SEXP Rsh_Fir_reg_tab2b1_;  // tab2b1
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_tab2b2_;  // tab2b2
  SEXP Rsh_Fir_reg_tab2b3_;  // tab2b3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_attr__2_;  // attr__2
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_tab22_;  // tab22
  SEXP Rsh_Fir_reg_tab23_;  // tab23

  // Bind parameters
  Rsh_Fir_reg_so = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st so = so
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_so, RHO);
  (void)(Rsh_Fir_reg_so);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L0_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L24() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L24()
    goto L24_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // read_symbols_from_object_file = ldf read_symbols_from_object_file
  Rsh_Fir_reg_read_symbols_from_object_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L3_:;
  // st tab2 = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // tab12 = ld tab
  Rsh_Fir_reg_tab12_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L37() else D6()
  // L37()
  goto L37_;

L4_:;
  // r9 = `==`(dx3, "U")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r10 = dyn __1(tab11, r9, "name")
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_tab11_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L3_;

L5_:;
  // st nms = dx5
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // system_ABI2 = ld system_ABI
  Rsh_Fir_reg_system_ABI2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

L6_:;
  // st sys = dx7
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L7_:;
  // r16 = `!`(r14)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c7 then L52() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L52()
    goto L52_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // st snh = dx9
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // c6 = `==`(dx9, NULL)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L7(c6)
  // L7(c6)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_c6_;
  goto L7_;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L56() else D12()
  // L56()
  goto L56_;

L11_:;
  // st tab = dx13
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // so3 = ld so
  Rsh_Fir_reg_so3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L63() else D16()
  // L63()
  goto L63_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L14_:;
  // c12 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c12 then L80() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L80()
    goto L80_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // setdiff1 = ldf setdiff
  Rsh_Fir_reg_setdiff1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L85() else D32()
  // L85()
  goto L85_;

L17_:;
  // c14 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c14 then L91() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L91()
    goto L91_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // l3 = ld tab
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L96() else D39()
  // L96()
  goto L96_;

L20_:;
  // system_ABI = ld system_ABI
  Rsh_Fir_reg_system_ABI = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L22() else D0()
  // L22()
  goto L22_;

L21_:;
  // r = dyn base(<sym system_ABI>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [system_ABI]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_system_ABI;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // system_ABI1 = force? system_ABI
  Rsh_Fir_reg_system_ABI1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_system_ABI);
  // checkMissing(system_ABI1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_system_ABI1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn length(system_ABI1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_system_ABI1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L23() else D1()
  // L23()
  goto L23_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 14);

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p = prom<V +>{
  //   so1 = ld so;
  //   so2 = force? so1;
  //   checkMissing(so2);
  //   return so2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_, CCP, RHO);
  // r7 = dyn read_symbols_from_object_file(p)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_read_symbols_from_object_file, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L28_:;
  // st tab = r7
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // tab = ld tab
  Rsh_Fir_reg_tab = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

D4_:;
  // deopt 17 [tab]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_tab;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // tab1 = force? tab
  Rsh_Fir_reg_tab1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab);
  // checkMissing(tab1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_tab1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(tab1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_tab1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c1 then L30() else L31(tab1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L30()
    goto L30_;
  } else {
  // L31(tab1)
    Rsh_Fir_reg_tab3_ = Rsh_Fir_reg_tab1_;
    goto L31_;
  }

L30_:;
  // dr = tryDispatchBuiltin.1("[", tab1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_tab1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L32() else L31(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr)
    Rsh_Fir_reg_tab3_ = Rsh_Fir_reg_dr;
    goto L31_;
  }

L31_:;
  // tab4 = ld tab
  Rsh_Fir_reg_tab4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

L32_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D5_:;
  // deopt 19 [tab3, tab4]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_tab3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_tab4_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L33_:;
  // tab5 = force? tab4
  Rsh_Fir_reg_tab5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab4_);
  // checkMissing(tab5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_tab5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(tab5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_tab5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c2 then L34() else L35(tab3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L35(tab3)
    Rsh_Fir_reg_tab8_ = Rsh_Fir_reg_tab3_;
    goto L35_;
  }

L34_:;
  // dr2 = tryDispatchBuiltin.1("[", tab5)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_tab5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc1 then L36() else L35(tab3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L36()
    goto L36_;
  } else {
  // L35(tab3)
    Rsh_Fir_reg_tab8_ = Rsh_Fir_reg_tab3_;
    goto L35_;
  }

L35_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r8 = dyn __(tab5, <missing>, "type")
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_tab5_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(tab8, r8)
  // L4(tab8, r8)
  Rsh_Fir_reg_tab11_ = Rsh_Fir_reg_tab8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r8_;
  goto L4_;

L36_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L4(tab3, dx2)
  // L4(tab3, dx2)
  Rsh_Fir_reg_tab11_ = Rsh_Fir_reg_tab3_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D6_:;
  // deopt 30 [tab12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_tab12_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L37_:;
  // tab13 = force? tab12
  Rsh_Fir_reg_tab13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab12_);
  // checkMissing(tab13)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_tab13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(tab13)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_tab13_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c3 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // dr4 = tryDispatchBuiltin.1("[", tab13)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_tab13_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc2 then L40() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L40()
    goto L40_;
  } else {
  // L39()
    goto L39_;
  }

L39_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r11 = dyn __2(tab13, <missing>, "name")
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_tab13_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r11_;
  goto L5_;

L40_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L5(dx4)
  // L5(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L5_;

D7_:;
  // deopt 37 [system_ABI2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_system_ABI2_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L41_:;
  // system_ABI3 = force? system_ABI2
  Rsh_Fir_reg_system_ABI3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_system_ABI2_);
  // checkMissing(system_ABI3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_system_ABI3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(system_ABI3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_system_ABI3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c4 then L42() else L43(system_ABI3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L42()
    goto L42_;
  } else {
  // L43(system_ABI3)
    Rsh_Fir_reg_system_ABI5_ = Rsh_Fir_reg_system_ABI3_;
    goto L43_;
  }

L42_:;
  // dr6 = tryDispatchBuiltin.1("[", system_ABI3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_system_ABI3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc3 then L44() else L43(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L44()
    goto L44_;
  } else {
  // L43(dr6)
    Rsh_Fir_reg_system_ABI5_ = Rsh_Fir_reg_dr6_;
    goto L43_;
  }

L43_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r12 = dyn __3(system_ABI5, "system")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_system_ABI5_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r12_;
  goto L6_;

L44_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L6(dx6)
  // L6(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L6_;

L45_:;
  // so_symbol_names_handlers_db = ld so_symbol_names_handlers_db
  Rsh_Fir_reg_so_symbol_names_handlers_db = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

L46_:;
  // r13 = dyn base1(<lang `<-`(snh, `[[`(so_symbol_names_handlers_db, sys))>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D8_:;
  // deopt 44 [so_symbol_names_handlers_db]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_so_symbol_names_handlers_db;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L47_:;
  // so_symbol_names_handlers_db1 = force? so_symbol_names_handlers_db
  Rsh_Fir_reg_so_symbol_names_handlers_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_so_symbol_names_handlers_db);
  // checkMissing(so_symbol_names_handlers_db1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_so_symbol_names_handlers_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(so_symbol_names_handlers_db1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_so_symbol_names_handlers_db1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c5 then L48() else L49(so_symbol_names_handlers_db1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L48()
    goto L48_;
  } else {
  // L49(so_symbol_names_handlers_db1)
    Rsh_Fir_reg_so_symbol_names_handlers_db3_ = Rsh_Fir_reg_so_symbol_names_handlers_db1_;
    goto L49_;
  }

L48_:;
  // dr8 = tryDispatchBuiltin.1("[[", so_symbol_names_handlers_db1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_so_symbol_names_handlers_db1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc4 then L50() else L49(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L50()
    goto L50_;
  } else {
  // L49(dr8)
    Rsh_Fir_reg_so_symbol_names_handlers_db3_ = Rsh_Fir_reg_dr8_;
    goto L49_;
  }

L49_:;
  // sys = ld sys
  Rsh_Fir_reg_sys = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L51() else D9()
  // L51()
  goto L51_;

L50_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L8(dx8)
  // L8(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L8_;

D9_:;
  // deopt 46 [so_symbol_names_handlers_db3, sys]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_so_symbol_names_handlers_db3_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_sys;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L51_:;
  // sys1 = force? sys
  Rsh_Fir_reg_sys1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sys);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r15 = dyn __4(so_symbol_names_handlers_db3, sys1)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_so_symbol_names_handlers_db3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_sys1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r15_;
  goto L8_;

L52_:;
  // snh = ldf snh
  Rsh_Fir_reg_snh = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L53() else D10()
  // L53()
  goto L53_;

D10_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p1 = prom<V +>{
  //   nms = ld nms;
  //   nms1 = force? nms;
  //   checkMissing(nms1);
  //   return nms1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_1, CCP, RHO);
  // r18 = dyn snh(p1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_snh, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L54() else D11()
  // L54()
  goto L54_;

D11_:;
  // deopt 55 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L54_:;
  // st nms = r18
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // goto L10()
  // L10()
  goto L10_;

D12_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // p2 = prom<V +>{
  //   so_symbol_names_table = ld so_symbol_names_table;
  //   so_symbol_names_table1 = force? so_symbol_names_table;
  //   checkMissing(so_symbol_names_table1);
  //   c8 = `is.object`(so_symbol_names_table1);
  //   if c8 then L1() else L2();
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", so_symbol_names_table1);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2();
  // L2():
  //   __5 = ldf `[` in base;
  //   r20 = dyn __5(so_symbol_names_table1, <missing>, "osname");
  //   goto L0(r20);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_2, CCP, RHO);
  // p3 = prom<V +>{
  //   nms2 = ld nms;
  //   nms3 = force? nms2;
  //   checkMissing(nms3);
  //   return nms3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_3, CCP, RHO);
  // r23 = dyn _in_(p2, p3)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

D13_:;
  // deopt 63 [r23]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L57_:;
  // st ind = r23
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // so_symbol_names_table4 = ld so_symbol_names_table
  Rsh_Fir_reg_so_symbol_names_table4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

D14_:;
  // deopt 65 [so_symbol_names_table4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_so_symbol_names_table4_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L58_:;
  // so_symbol_names_table5 = force? so_symbol_names_table4
  Rsh_Fir_reg_so_symbol_names_table5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_so_symbol_names_table4_);
  // checkMissing(so_symbol_names_table5)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_so_symbol_names_table5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(so_symbol_names_table5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_so_symbol_names_table5_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c9 then L59() else L60(so_symbol_names_table5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L59()
    goto L59_;
  } else {
  // L60(so_symbol_names_table5)
    Rsh_Fir_reg_so_symbol_names_table7_ = Rsh_Fir_reg_so_symbol_names_table5_;
    goto L60_;
  }

L59_:;
  // dr12 = tryDispatchBuiltin.1("[", so_symbol_names_table5)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_so_symbol_names_table5_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc6 then L61() else L60(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L61()
    goto L61_;
  } else {
  // L60(dr12)
    Rsh_Fir_reg_so_symbol_names_table7_ = Rsh_Fir_reg_dr12_;
    goto L60_;
  }

L60_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

L61_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L11(dx12)
  // L11(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L11_;

D15_:;
  // deopt 67 [so_symbol_names_table7, ind]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_so_symbol_names_table7_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L62_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r24 = dyn __6(so_symbol_names_table5, ind1, <missing>, FALSE)
  SEXP Rsh_Fir_array_args62[4];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_so_symbol_names_table5_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args62[3] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 4, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r24_;
  goto L11_;

D16_:;
  // deopt 75 [so3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_so3_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L63_:;
  // so4 = force? so3
  Rsh_Fir_reg_so4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_so3_);
  // checkMissing(so4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_so4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // l = ld tab
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

D17_:;
  // deopt 78 [so4, l, so4]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_so4_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_so4_;
  Rsh_Fir_deopt(78, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L64_:;
  // r25 = dyn attr__(l, NULL, "file", so4)
  SEXP Rsh_Fir_array_args64[4];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args64[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args64[3] = Rsh_Fir_reg_so4_;
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L65() else D18()
  // L65()
  goto L65_;

D18_:;
  // deopt 81 [so4, r25]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_so4_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L65_:;
  // st tab = r25
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L66() else D19()
  // L66()
  goto L66_;

D19_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // p4 = prom<V +>{
  //   tab16 = ld tab2;
  //   tab17 = force? tab16;
  //   checkMissing(tab17);
  //   return tab17;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_4, CCP, RHO);
  // r27 = dyn sub("^_", "", p4)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L67() else D20()
  // L67()
  goto L67_;

D20_:;
  // deopt 88 [r27]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L67_:;
  // st tab2 = r27
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // intersect = ldf intersect
  Rsh_Fir_reg_intersect = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L68() else D21()
  // L68()
  goto L68_;

D21_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L68_:;
  // p5 = prom<V +>{
  //   tab18 = ld tab2;
  //   tab19 = force? tab18;
  //   checkMissing(tab19);
  //   return tab19;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_5, CCP, RHO);
  // p6 = prom<V +>{
  //   nonAPI = ld nonAPI;
  //   nonAPI1 = force? nonAPI;
  //   checkMissing(nonAPI1);
  //   return nonAPI1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_6, CCP, RHO);
  // r30 = dyn intersect(p5, p6)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_intersect, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L69() else D22()
  // L69()
  goto L69_;

D22_:;
  // deopt 94 [r30]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L69_:;
  // st tab2a = r30
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L70() else D23()
  // L70()
  goto L70_;

D23_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // p7 = prom<V +>{
  //   tab2a = ld tab2a;
  //   tab2a1 = force? tab2a;
  //   checkMissing(tab2a1);
  //   return tab2a1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_7, CCP, RHO);
  // r32 = dyn _in_1("removeInputHandler", p7)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L71() else D24()
  // L71()
  goto L71_;

D24_:;
  // deopt 100 [r32]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L71_:;
  // c10 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c10 then L72() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L72()
    goto L72_;
  } else {
  // L12()
    goto L12_;
  }

L72_:;
  // setdiff = ldf setdiff
  Rsh_Fir_reg_setdiff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L73() else D25()
  // L73()
  goto L73_;

D25_:;
  // deopt 102 []
  Rsh_Fir_deopt(102, 0, NULL, CCP, RHO);
  return R_NilValue;

L73_:;
  // p8 = prom<V +>{
  //   tab2a2 = ld tab2a;
  //   tab2a3 = force? tab2a2;
  //   checkMissing(tab2a3);
  //   return tab2a3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_8, CCP, RHO);
  // p9 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r35):
  //   return r35;
  // L1():
  //   c11 = ldf c in base;
  //   r36 = dyn c11("R_InputHandlers", "addInputHandler", "removeInputHandler");
  //   goto L0(r36);
  // L2():
  //   r34 = dyn base2("R_InputHandlers", "addInputHandler", "removeInputHandler");
  //   goto L0(r34);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_9, CCP, RHO);
  // r38 = dyn setdiff(p8, p9)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setdiff, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L74() else D26()
  // L74()
  goto L74_;

D26_:;
  // deopt 105 [r38]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L74_:;
  // st tab2a = r38
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // goto L13()
  // L13()
  goto L13_;

L76_:;
  // tab2a4 = ld tab2a
  Rsh_Fir_reg_tab2a4_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L78() else D27()
  // L78()
  goto L78_;

L77_:;
  // r40 = dyn base3(<sym tab2a>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L14(r40)
  // L14(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L14_;

D27_:;
  // deopt 111 [tab2a4]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_tab2a4_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L78_:;
  // tab2a5 = force? tab2a4
  Rsh_Fir_reg_tab2a5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab2a4_);
  // checkMissing(tab2a5)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_tab2a5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r42 = dyn length1(tab2a5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_tab2a5_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L79() else D28()
  // L79()
  goto L79_;

D28_:;
  // deopt 114 [r42]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L14(r42)
  // L14(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L14_;

L80_:;
  // tab2a6 = ld tab2a
  Rsh_Fir_reg_tab2a6_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L81() else D29()
  // L81()
  goto L81_;

D29_:;
  // deopt 115 [tab2a6]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_tab2a6_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L81_:;
  // tab2a7 = force? tab2a6
  Rsh_Fir_reg_tab2a7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab2a6_);
  // checkMissing(tab2a7)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_tab2a7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // l1 = ld tab
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L82() else D30()
  // L82()
  goto L82_;

D30_:;
  // deopt 118 [tab2a7, l1, tab2a7]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_tab2a7_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_tab2a7_;
  Rsh_Fir_deopt(118, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L82_:;
  // r43 = dyn attr__1(l1, NULL, "nonAPI", tab2a7)
  SEXP Rsh_Fir_array_args82[4];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args82[3] = Rsh_Fir_reg_tab2a7_;
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L83() else D31()
  // L83()
  goto L83_;

D31_:;
  // deopt 121 [tab2a7, r43]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_tab2a7_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L83_:;
  // st tab = r43
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // goto L16()
  // L16()
  goto L16_;

D32_:;
  // deopt 126 []
  Rsh_Fir_deopt(126, 0, NULL, CCP, RHO);
  return R_NilValue;

L85_:;
  // p10 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r45):
  //   return r45;
  // L1():
  //   c13 = ldf c in base;
  //   r46 = dyn c13("R_registerRoutines", "R_useDynamicSymbols");
  //   goto L0(r46);
  // L2():
  //   r44 = dyn base4("R_registerRoutines", "R_useDynamicSymbols");
  //   goto L0(r44);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_10, CCP, RHO);
  // p11 = prom<V +>{
  //   tab20 = ld tab2;
  //   tab21 = force? tab20;
  //   checkMissing(tab21);
  //   return tab21;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3569397244_11, CCP, RHO);
  // r49 = dyn setdiff1(p10, p11)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setdiff1_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L86() else D33()
  // L86()
  goto L86_;

D33_:;
  // deopt 129 [r49]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L86_:;
  // st tab2b = r49
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard5 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L87_:;
  // tab2b = ld tab2b
  Rsh_Fir_reg_tab2b = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L89() else D34()
  // L89()
  goto L89_;

L88_:;
  // r50 = dyn base5(<sym tab2b>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L17(r50)
  // L17(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L17_;

D34_:;
  // deopt 133 [tab2b]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_tab2b;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L89_:;
  // tab2b1 = force? tab2b
  Rsh_Fir_reg_tab2b1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab2b);
  // checkMissing(tab2b1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_tab2b1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r52 = dyn length2(tab2b1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_tab2b1_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L90() else D35()
  // L90()
  goto L90_;

D35_:;
  // deopt 136 [r52]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L17(r52)
  // L17(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L17_;

L91_:;
  // tab2b2 = ld tab2b
  Rsh_Fir_reg_tab2b2_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L92() else D36()
  // L92()
  goto L92_;

D36_:;
  // deopt 137 [tab2b2]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_tab2b2_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L92_:;
  // tab2b3 = force? tab2b2
  Rsh_Fir_reg_tab2b3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab2b2_);
  // checkMissing(tab2b3)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_tab2b3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // l2 = ld tab
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // attr__2 = ldf `attr<-`
  Rsh_Fir_reg_attr__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L93() else D37()
  // L93()
  goto L93_;

D37_:;
  // deopt 140 [tab2b3, l2, tab2b3]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_tab2b3_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_tab2b3_;
  Rsh_Fir_deopt(140, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L93_:;
  // r53 = dyn attr__2(l2, NULL, "RegSym", tab2b3)
  SEXP Rsh_Fir_array_args93[4];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args93[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args93[3] = Rsh_Fir_reg_tab2b3_;
  SEXP Rsh_Fir_array_arg_names28[4];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__2_, 4, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L94() else D38()
  // L94()
  goto L94_;

D38_:;
  // deopt 143 [tab2b3, r53]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_tab2b3_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(143, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L94_:;
  // st tab = r53
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // goto L19()
  // L19()
  goto L19_;

D39_:;
  // deopt 150 ["check_so_symbols", l3, "check_so_symbols"]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_const(CCP, 47);
  Rsh_Fir_deopt(150, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L96_:;
  // r54 = dyn class__(l3, NULL, "check_so_symbols")
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L97() else D40()
  // L97()
  goto L97_;

D40_:;
  // deopt 152 ["check_so_symbols", r54]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(152, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L97_:;
  // st tab = r54
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // tab22 = ld tab
  Rsh_Fir_reg_tab22_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L98() else D41()
  // L98()
  goto L98_;

D41_:;
  // deopt 154 [tab22]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_tab22_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L98_:;
  // tab23 = force? tab22
  Rsh_Fir_reg_tab23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab22_);
  // checkMissing(tab23)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_tab23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return tab23
  return Rsh_Fir_reg_tab23_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_(SEXP CCP, SEXP RHO) {
  // so1 = ld so
  Rsh_Fir_reg_so1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // so2 = force? so1
  Rsh_Fir_reg_so2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_so1_);
  // checkMissing(so2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_so2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return so2
  return Rsh_Fir_reg_so2_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_1(SEXP CCP, SEXP RHO) {
  // nms = ld nms
  Rsh_Fir_reg_nms = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // nms1 = force? nms
  Rsh_Fir_reg_nms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms);
  // checkMissing(nms1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_nms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return nms1
  return Rsh_Fir_reg_nms1_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_2(SEXP CCP, SEXP RHO) {
  // so_symbol_names_table = ld so_symbol_names_table
  Rsh_Fir_reg_so_symbol_names_table = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // so_symbol_names_table1 = force? so_symbol_names_table
  Rsh_Fir_reg_so_symbol_names_table1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_so_symbol_names_table);
  // checkMissing(so_symbol_names_table1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_so_symbol_names_table1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(so_symbol_names_table1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_so_symbol_names_table1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", so_symbol_names_table1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_so_symbol_names_table1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r20 = dyn __5(so_symbol_names_table1, <missing>, "osname")
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_so_symbol_names_table1_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r20_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_3(SEXP CCP, SEXP RHO) {
  // nms2 = ld nms
  Rsh_Fir_reg_nms2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // nms3 = force? nms2
  Rsh_Fir_reg_nms3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nms2_);
  // checkMissing(nms3)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_nms3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return nms3
  return Rsh_Fir_reg_nms3_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_4(SEXP CCP, SEXP RHO) {
  // tab16 = ld tab2
  Rsh_Fir_reg_tab16_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // tab17 = force? tab16
  Rsh_Fir_reg_tab17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab16_);
  // checkMissing(tab17)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_tab17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return tab17
  return Rsh_Fir_reg_tab17_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_5(SEXP CCP, SEXP RHO) {
  // tab18 = ld tab2
  Rsh_Fir_reg_tab18_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // tab19 = force? tab18
  Rsh_Fir_reg_tab19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab18_);
  // checkMissing(tab19)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_tab19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return tab19
  return Rsh_Fir_reg_tab19_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_6(SEXP CCP, SEXP RHO) {
  // nonAPI = ld nonAPI
  Rsh_Fir_reg_nonAPI = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // nonAPI1 = force? nonAPI
  Rsh_Fir_reg_nonAPI1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nonAPI);
  // checkMissing(nonAPI1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_nonAPI1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return nonAPI1
  return Rsh_Fir_reg_nonAPI1_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_7(SEXP CCP, SEXP RHO) {
  // tab2a = ld tab2a
  Rsh_Fir_reg_tab2a = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // tab2a1 = force? tab2a
  Rsh_Fir_reg_tab2a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab2a);
  // checkMissing(tab2a1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_tab2a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return tab2a1
  return Rsh_Fir_reg_tab2a1_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_8(SEXP CCP, SEXP RHO) {
  // tab2a2 = ld tab2a
  Rsh_Fir_reg_tab2a2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // tab2a3 = force? tab2a2
  Rsh_Fir_reg_tab2a3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab2a2_);
  // checkMissing(tab2a3)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_tab2a3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return tab2a3
  return Rsh_Fir_reg_tab2a3_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_9(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r35
  return Rsh_Fir_reg_r35_;

L1_:;
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r36 = dyn c11("R_InputHandlers", "addInputHandler", "removeInputHandler")
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args75[2] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L0_;

L2_:;
  // r34 = dyn base2("R_InputHandlers", "addInputHandler", "removeInputHandler")
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args76[2] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_10(SEXP CCP, SEXP RHO) {
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r45
  return Rsh_Fir_reg_r45_;

L1_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r46 = dyn c13("R_registerRoutines", "R_useDynamicSymbols")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L0_;

L2_:;
  // r44 = dyn base4("R_registerRoutines", "R_useDynamicSymbols")
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3569397244_11(SEXP CCP, SEXP RHO) {
  // tab20 = ld tab2
  Rsh_Fir_reg_tab20_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // tab21 = force? tab20
  Rsh_Fir_reg_tab21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tab20_);
  // checkMissing(tab21)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_tab21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return tab21
  return Rsh_Fir_reg_tab21_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
