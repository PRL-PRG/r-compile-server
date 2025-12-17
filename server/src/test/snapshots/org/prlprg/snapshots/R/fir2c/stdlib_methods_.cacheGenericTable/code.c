#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3333887956_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3333887956_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3333887956_(SEXP CCP, SEXP RHO);
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
  // r = clos inner3333887956
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3333887956_, RHO, CCP);
  // st `.cacheGenericTable` = r
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
SEXP Rsh_Fir_user_function_inner3333887956_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3333887956 dynamic dispatch ([name, def, table])

  return Rsh_Fir_user_version_inner3333887956_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3333887956_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3333887956 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3333887956/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_def;  // def
  SEXP Rsh_Fir_reg_table;  // table
  SEXP Rsh_Fir_reg_def1_;  // def1
  SEXP Rsh_Fir_reg_def2_;  // def2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_table1_;  // table1
  SEXP Rsh_Fir_reg_table2_;  // table2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_table4_;  // table4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_prev;  // prev
  SEXP Rsh_Fir_reg_prev1_;  // prev1
  SEXP Rsh_Fir_reg_is_function;  // is_function
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_prev2_;  // prev2
  SEXP Rsh_Fir_reg_prev3_;  // prev3
  SEXP Rsh_Fir_reg_def3_;  // def3
  SEXP Rsh_Fir_reg_def4_;  // def4
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_fdef;  // fdef
  SEXP Rsh_Fir_reg_fdef1_;  // fdef1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_pkg1_;  // pkg1
  SEXP Rsh_Fir_reg_newpkg;  // newpkg
  SEXP Rsh_Fir_reg_newpkg1_;  // newpkg1
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_def5_;  // def5
  SEXP Rsh_Fir_reg_def6_;  // def6
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_def8_;  // def8
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_fdef2_;  // fdef2
  SEXP Rsh_Fir_reg_fdef3_;  // fdef3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_prev4_;  // prev4
  SEXP Rsh_Fir_reg_prev5_;  // prev5
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_pkg2_;  // pkg2
  SEXP Rsh_Fir_reg_pkg3_;  // pkg3
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_newpkg2_;  // newpkg2
  SEXP Rsh_Fir_reg_newpkg3_;  // newpkg3
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_prev6_;  // prev6
  SEXP Rsh_Fir_reg_prev7_;  // prev7
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_def11_;  // def11
  SEXP Rsh_Fir_reg_def12_;  // def12
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_def14_;  // def14
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_def16_;  // def16
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_newpkg4_;  // newpkg4
  SEXP Rsh_Fir_reg_newpkg5_;  // newpkg5
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_def18_;  // def18
  SEXP Rsh_Fir_reg_def19_;  // def19
  SEXP Rsh_Fir_reg_prev8_;  // prev8
  SEXP Rsh_Fir_reg_prev9_;  // prev9
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_prev11_;  // prev11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_identical2_;  // identical2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_fdef4_;  // fdef4
  SEXP Rsh_Fir_reg_fdef5_;  // fdef5
  SEXP Rsh_Fir_reg_def20_;  // def20
  SEXP Rsh_Fir_reg_def21_;  // def21
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_def23_;  // def23
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_def25_;  // def25
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_prev12_;  // prev12
  SEXP Rsh_Fir_reg_prev13_;  // prev13
  SEXP Rsh_Fir_reg__getMethodsTable;  // _getMethodsTable
  SEXP Rsh_Fir_reg_fdef6_;  // fdef6
  SEXP Rsh_Fir_reg_fdef7_;  // fdef7
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_def26_;  // def26
  SEXP Rsh_Fir_reg_def27_;  // def27
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_def29_;  // def29
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_name5_;  // name5
  SEXP Rsh_Fir_reg_name6_;  // name6
  SEXP Rsh_Fir_reg_____3_;  // ____3
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_fdef8_;  // fdef8
  SEXP Rsh_Fir_reg_fdef9_;  // fdef9

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_def = PARAMS[1];
  Rsh_Fir_reg_table = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st def = def
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_def, RHO);
  (void)(Rsh_Fir_reg_def);
  // st table = table
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_table, RHO);
  (void)(Rsh_Fir_reg_table);
  // def1 = ld def
  Rsh_Fir_reg_def1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D0()
  // L26()
  goto L26_;

L0_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L34() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L2()
    goto L2_;
  }

L1_:;
  // st prev = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c1 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // goto L0(c1)
  // L0(c1)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c1_;
  goto L0_;

L2_:;
  // goto L24()
  // L24()
  goto L24_;

L3_:;
  // c3 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c3 then L39() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L39()
    goto L39_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L13()
  // L13()
  goto L13_;

L5_:;
  // c4 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c4 then L45() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L45()
    goto L45_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r13 = dyn __2(<sym prev>, <sym package>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // st pkg = r13
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L8_:;
  // c5 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c5 then L54() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L54()
    goto L54_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // sym4 = ldf list
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf list in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard4 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L10_:;
  // st table = dx3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // fdef2 = ld fdef
  Rsh_Fir_reg_fdef2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L60() else D14()
  // L60()
  goto L60_;

L12_:;
  // st prev = r21
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // pkg2 = ld pkg
  Rsh_Fir_reg_pkg2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

L13_:;
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L14_:;
  // st i = r25
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym7 = ldf `is.na`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf `is.na` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard7 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L15_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r29 = dyn match(newpkg3, r27, NA_INT, NULL)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_newpkg3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L78() else D23()
  // L78()
  goto L78_;

L16_:;
  // c7 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c7 then L83() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L83()
    goto L83_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // sym8 = ldf identical
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base8 = ldf identical in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard8 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L18_:;
  // st prev = dx5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // prev12 = ld prev
  Rsh_Fir_reg_prev12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L108() else D35()
  // L108()
  goto L108_;

L20_:;
  // c10 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c10 then L99() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L99()
    goto L99_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r37 = dyn identical2(def19, dx7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args15[9];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_def19_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args15[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args15[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names2[9];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_array_arg_names2[8] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L98() else D31()
  // L98()
  goto L98_;

L22_:;
  // def20 = ld def
  Rsh_Fir_reg_def20_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L103() else D33()
  // L103()
  goto L103_;

L23_:;
  // st prev = dx9
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L19()
  // L19()
  goto L19_;

L24_:;
  // _getMethodsTable = ldf `.getMethodsTable`
  Rsh_Fir_reg__getMethodsTable = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L110() else D36()
  // L110()
  goto L110_;

L25_:;
  // st table = dx11
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // fdef8 = ld fdef
  Rsh_Fir_reg_fdef8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L117() else D40()
  // L117()
  goto L117_;

D0_:;
  // deopt 0 [def1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_def1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L26_:;
  // def2 = force? def1
  Rsh_Fir_reg_def2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def1_);
  // checkMissing(def2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_def2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // st fdef = def2
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_def2_, RHO);
  (void)(Rsh_Fir_reg_def2_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // table1 = ld table
  Rsh_Fir_reg_table1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L29() else D1()
  // L29()
  goto L29_;

L28_:;
  // r = dyn base(<lang `<-`(prev, `[[`(table, name))>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D1_:;
  // deopt 4 [table1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_table1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L29_:;
  // table2 = force? table1
  Rsh_Fir_reg_table2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_table1_);
  // checkMissing(table2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_table2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c = `is.object`(table2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_table2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c then L30() else L31(table2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L31(table2)
    Rsh_Fir_reg_table4_ = Rsh_Fir_reg_table2_;
    goto L31_;
  }

L30_:;
  // dr = tryDispatchBuiltin.1("[[", table2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_table2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc then L32() else L31(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr)
    Rsh_Fir_reg_table4_ = Rsh_Fir_reg_dr;
    goto L31_;
  }

L31_:;
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

L32_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

D2_:;
  // deopt 6 [table4, name1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_table4_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_name1_;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L33_:;
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r2 = dyn __(table4, name2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_table4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_name2_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L34_:;
  // __1 = ldf `@` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r4 = dyn __1(<sym def>, <sym package>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // st newpkg = r4
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym1 = ldf `is.function`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf `is.function` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard1 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // prev = ld prev
  Rsh_Fir_reg_prev = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L37() else D3()
  // L37()
  goto L37_;

L36_:;
  // r5 = dyn base1(<sym prev>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D3_:;
  // deopt 17 [prev]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_prev;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L37_:;
  // prev1 = force? prev
  Rsh_Fir_reg_prev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev);
  // checkMissing(prev1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_prev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r7 = dyn is_function(prev1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_prev1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D4()
  // L38()
  goto L38_;

D4_:;
  // deopt 20 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

L39_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // prev2 = ld prev
  Rsh_Fir_reg_prev2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L42() else D5()
  // L42()
  goto L42_;

L41_:;
  // r8 = dyn base2(<sym prev>, <sym def>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L5_;

D5_:;
  // deopt 23 [prev2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_prev2_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L42_:;
  // prev3 = force? prev2
  Rsh_Fir_reg_prev3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev2_);
  // checkMissing(prev3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_prev3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // def3 = ld def
  Rsh_Fir_reg_def3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L43() else D6()
  // L43()
  goto L43_;

D6_:;
  // deopt 25 [def3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_def3_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L43_:;
  // def4 = force? def3
  Rsh_Fir_reg_def4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def3_);
  // checkMissing(def4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_def4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r10 = dyn identical(prev3, def4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args34[9];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_prev3_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_def4_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args34[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names9[9];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_array_arg_names9[6] = R_MissingArg;
  Rsh_Fir_array_arg_names9[7] = R_MissingArg;
  Rsh_Fir_array_arg_names9[8] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L44() else D7()
  // L44()
  goto L44_;

D7_:;
  // deopt 35 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L5_;

L45_:;
  // fdef = ld fdef
  Rsh_Fir_reg_fdef = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L46() else D8()
  // L46()
  goto L46_;

D8_:;
  // deopt 36 [fdef]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_fdef;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // fdef1 = force? fdef
  Rsh_Fir_reg_fdef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef);
  // checkMissing(fdef1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_fdef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return fdef1
  return Rsh_Fir_reg_fdef1_;

L49_:;
  // pkg = ld pkg
  Rsh_Fir_reg_pkg = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L51() else D9()
  // L51()
  goto L51_;

L50_:;
  // r14 = dyn base3(<sym pkg>, <sym newpkg>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(r14)
  // L8(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L8_;

D9_:;
  // deopt 46 [pkg]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_pkg;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L51_:;
  // pkg1 = force? pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg);
  // checkMissing(pkg1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_pkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // newpkg = ld newpkg
  Rsh_Fir_reg_newpkg = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L52() else D10()
  // L52()
  goto L52_;

D10_:;
  // deopt 48 [newpkg]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_newpkg;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L52_:;
  // newpkg1 = force? newpkg
  Rsh_Fir_reg_newpkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newpkg);
  // checkMissing(newpkg1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_newpkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r16 = dyn identical1(pkg1, newpkg1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args39[9];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_pkg1_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_newpkg1_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args39[4] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args39[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args39[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args39[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args39[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names11[9];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_array_arg_names11[7] = R_MissingArg;
  Rsh_Fir_array_arg_names11[8] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L53() else D11()
  // L53()
  goto L53_;

D11_:;
  // deopt 58 [r16]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L8_;

L54_:;
  // def5 = ld def
  Rsh_Fir_reg_def5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L55() else D12()
  // L55()
  goto L55_;

D12_:;
  // deopt 59 [def5]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_def5_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L55_:;
  // def6 = force? def5
  Rsh_Fir_reg_def6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def5_);
  // checkMissing(def6)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_def6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // l = ld table
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // c6 = `is.object`(l)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c6 then L56() else L57(def6, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L56()
    goto L56_;
  } else {
  // L57(def6, l)
    Rsh_Fir_reg_def8_ = Rsh_Fir_reg_def6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L57_;
  }

L56_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l, def6)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_def6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args42);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc1 then L58() else L57(def6, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L58()
    goto L58_;
  } else {
  // L57(def6, dr2)
    Rsh_Fir_reg_def8_ = Rsh_Fir_reg_def6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L57_;
  }

L57_:;
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L59() else D13()
  // L59()
  goto L59_;

L58_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L10(dx2)
  // L10(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L10_;

D13_:;
  // deopt 62 [def8, l2, def6, name3]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_def8_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_def6_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_name3_;
  Rsh_Fir_deopt(62, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L59_:;
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r17 = dyn ____(l2, def6, name4)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_def6_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_name4_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(r17)
  // L10(r17)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r17_;
  goto L10_;

D14_:;
  // deopt 66 [fdef2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_fdef2_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L60_:;
  // fdef3 = force? fdef2
  Rsh_Fir_reg_fdef3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef2_);
  // checkMissing(fdef3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_fdef3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return fdef3
  return Rsh_Fir_reg_fdef3_;

L63_:;
  // prev4 = ld prev
  Rsh_Fir_reg_prev4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L65() else D15()
  // L65()
  goto L65_;

L64_:;
  // r20 = dyn base4(<sym prev>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L12(r20)
  // L12(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L12_;

D15_:;
  // deopt 73 [prev4]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_prev4_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L65_:;
  // prev5 = force? prev4
  Rsh_Fir_reg_prev5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev4_);
  // checkMissing(prev5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_prev5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r22 = dyn list(prev5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_prev5_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L66() else D16()
  // L66()
  goto L66_;

D16_:;
  // deopt 76 [r22]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L12(r22)
  // L12(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L12_;

D17_:;
  // deopt 78 [pkg2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_pkg2_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L67_:;
  // pkg3 = force? pkg2
  Rsh_Fir_reg_pkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg2_);
  // checkMissing(pkg3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_pkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // l3 = ld prev
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

D18_:;
  // deopt 81 [pkg3, l3, pkg3]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_deopt(81, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L68_:;
  // r23 = dyn names__(l3, NULL, pkg3)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_pkg3_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L69() else D19()
  // L69()
  goto L69_;

D19_:;
  // deopt 83 [pkg3, r23]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L69_:;
  // st prev = r23
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L13()
  // L13()
  goto L13_;

L71_:;
  // newpkg2 = ld newpkg
  Rsh_Fir_reg_newpkg2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

L72_:;
  // r24 = dyn base5(<sym newpkg>, <lang names(prev)>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L14(r24)
  // L14(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L14_;

D20_:;
  // deopt 89 [newpkg2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_newpkg2_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L73_:;
  // newpkg3 = force? newpkg2
  Rsh_Fir_reg_newpkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newpkg2_);
  // checkMissing(newpkg3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_newpkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard6 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L74_:;
  // prev6 = ld prev
  Rsh_Fir_reg_prev6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L76() else D21()
  // L76()
  goto L76_;

L75_:;
  // r26 = dyn base6(<sym prev>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L15(r26)
  // L15(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L15_;

D21_:;
  // deopt 93 [prev6]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_prev6_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L76_:;
  // prev7 = force? prev6
  Rsh_Fir_reg_prev7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev6_);
  // checkMissing(prev7)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_prev7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r28 = dyn names(prev7)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_prev7_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L77() else D22()
  // L77()
  goto L77_;

D22_:;
  // deopt 96 [r28]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L15(r28)
  // L15(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L15_;

D23_:;
  // deopt 100 [r29]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L14(r29)
  // L14(r29)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r29_;
  goto L14_;

L79_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L81() else D24()
  // L81()
  goto L81_;

L80_:;
  // r30 = dyn base7(<sym i>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L16(r30)
  // L16(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L16_;

D24_:;
  // deopt 104 [i]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L81_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r32 = dyn is_na(i1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L82() else D25()
  // L82()
  goto L82_;

D25_:;
  // deopt 107 [r32]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L16(r32)
  // L16(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L16_;

L83_:;
  // def11 = ld def
  Rsh_Fir_reg_def11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L84() else D26()
  // L84()
  goto L84_;

D26_:;
  // deopt 108 [def11]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_def11_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L84_:;
  // def12 = force? def11
  Rsh_Fir_reg_def12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def11_);
  // checkMissing(def12)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_def12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // l4 = ld prev
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c8 = `is.object`(l4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c8 then L85() else L86(def12, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L85()
    goto L85_;
  } else {
  // L86(def12, l4)
    Rsh_Fir_reg_def14_ = Rsh_Fir_reg_def12_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L86_;
  }

L85_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l4, def12)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_def12_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args63);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc2 then L87() else L86(def12, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L87()
    goto L87_;
  } else {
  // L86(def12, dr4)
    Rsh_Fir_reg_def14_ = Rsh_Fir_reg_def12_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr4_;
    goto L86_;
  }

L86_:;
  // newpkg4 = ld newpkg
  Rsh_Fir_reg_newpkg4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L88() else D27()
  // L88()
  goto L88_;

L87_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L18(def12, dx4)
  // L18(def12, dx4)
  Rsh_Fir_reg_def16_ = Rsh_Fir_reg_def12_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L18_;

D27_:;
  // deopt 111 [def14, l6, def12, newpkg4]
  SEXP Rsh_Fir_array_deopt_stack27[4];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_def14_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_def12_;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_newpkg4_;
  Rsh_Fir_deopt(111, 4, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L88_:;
  // newpkg5 = force? newpkg4
  Rsh_Fir_reg_newpkg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newpkg4_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r33 = dyn ____1(l6, def12, newpkg5)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_def12_;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_newpkg5_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L18(def14, r33)
  // L18(def14, r33)
  Rsh_Fir_reg_def16_ = Rsh_Fir_reg_def14_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r33_;
  goto L18_;

L90_:;
  // def18 = ld def
  Rsh_Fir_reg_def18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L92() else D28()
  // L92()
  goto L92_;

L91_:;
  // r34 = dyn base8(<sym def>, <lang `[[`(prev, i)>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L20(r34)
  // L20(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L20_;

D28_:;
  // deopt 117 [def18]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_def18_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L92_:;
  // def19 = force? def18
  Rsh_Fir_reg_def19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def18_);
  // checkMissing(def19)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_def19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // prev8 = ld prev
  Rsh_Fir_reg_prev8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L93() else D29()
  // L93()
  goto L93_;

D29_:;
  // deopt 119 [prev8]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_prev8_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L93_:;
  // prev9 = force? prev8
  Rsh_Fir_reg_prev9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev8_);
  // checkMissing(prev9)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_prev9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(prev9)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_prev9_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c9 then L94() else L95(prev9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L94()
    goto L94_;
  } else {
  // L95(prev9)
    Rsh_Fir_reg_prev11_ = Rsh_Fir_reg_prev9_;
    goto L95_;
  }

L94_:;
  // dr6 = tryDispatchBuiltin.1("[[", prev9)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_prev9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc3 then L96() else L95(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L96()
    goto L96_;
  } else {
  // L95(dr6)
    Rsh_Fir_reg_prev11_ = Rsh_Fir_reg_dr6_;
    goto L95_;
  }

L95_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L97() else D30()
  // L97()
  goto L97_;

L96_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L21(dx6)
  // L21(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L21_;

D30_:;
  // deopt 121 [prev11, i2]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_prev11_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(121, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L97_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r36 = dyn __3(prev11, i3)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_prev11_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(r36)
  // L21(r36)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r36_;
  goto L21_;

D31_:;
  // deopt 132 [r37]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L20(r37)
  // L20(r37)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r37_;
  goto L20_;

L99_:;
  // fdef4 = ld fdef
  Rsh_Fir_reg_fdef4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L100() else D32()
  // L100()
  goto L100_;

D32_:;
  // deopt 133 [fdef4]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_fdef4_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L100_:;
  // fdef5 = force? fdef4
  Rsh_Fir_reg_fdef5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef4_);
  // checkMissing(fdef5)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_fdef5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return fdef5
  return Rsh_Fir_reg_fdef5_;

D33_:;
  // deopt 136 [def20]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_def20_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L103_:;
  // def21 = force? def20
  Rsh_Fir_reg_def21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def20_);
  // checkMissing(def21)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_def21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // l7 = ld prev
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c11 = `is.object`(l7)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c11 then L104() else L105(def21, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L104()
    goto L104_;
  } else {
  // L105(def21, l7)
    Rsh_Fir_reg_def23_ = Rsh_Fir_reg_def21_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L105_;
  }

L104_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l7, def21)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_def21_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args78);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc4 then L106() else L105(def21, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L106()
    goto L106_;
  } else {
  // L105(def21, dr8)
    Rsh_Fir_reg_def23_ = Rsh_Fir_reg_def21_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr8_;
    goto L105_;
  }

L105_:;
  // i4 = ld i
  Rsh_Fir_reg_i4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L107() else D34()
  // L107()
  goto L107_;

L106_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L23(def21, dx8)
  // L23(def21, dx8)
  Rsh_Fir_reg_def25_ = Rsh_Fir_reg_def21_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L23_;

D34_:;
  // deopt 139 [def23, l9, def21, i4]
  SEXP Rsh_Fir_array_deopt_stack34[4];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_def23_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_def21_;
  Rsh_Fir_array_deopt_stack34[3] = Rsh_Fir_reg_i4_;
  Rsh_Fir_deopt(139, 4, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L107_:;
  // i5 = force? i4
  Rsh_Fir_reg_i5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i4_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r39 = dyn ____2(l9, def21, i5)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_def21_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L23(def23, r39)
  // L23(def23, r39)
  Rsh_Fir_reg_def25_ = Rsh_Fir_reg_def23_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r39_;
  goto L23_;

D35_:;
  // deopt 143 [prev12]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_prev12_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L108_:;
  // prev13 = force? prev12
  Rsh_Fir_reg_prev13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev12_);
  // checkMissing(prev13)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_prev13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // st def = prev13
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_prev13_, RHO);
  (void)(Rsh_Fir_reg_prev13_);
  // goto L24()
  // L24()
  goto L24_;

D36_:;
  // deopt 149 []
  Rsh_Fir_deopt(149, 0, NULL, CCP, RHO);
  return R_NilValue;

L110_:;
  // p = prom<V +>{
  //   fdef6 = ld fdef;
  //   fdef7 = force? fdef6;
  //   checkMissing(fdef7);
  //   return fdef7;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3333887956_, CCP, RHO);
  // r41 = dyn _getMethodsTable(p)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getMethodsTable, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L111() else D37()
  // L111()
  goto L111_;

D37_:;
  // deopt 151 [r41]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L111_:;
  // def26 = ld def
  Rsh_Fir_reg_def26_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L112() else D38()
  // L112()
  goto L112_;

D38_:;
  // deopt 152 [def26]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_def26_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L112_:;
  // def27 = force? def26
  Rsh_Fir_reg_def27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def26_);
  // checkMissing(def27)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_def27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // l10 = ld table
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // c12 = `is.object`(l10)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c12 then L113() else L114(def27, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L113()
    goto L113_;
  } else {
  // L114(def27, l10)
    Rsh_Fir_reg_def29_ = Rsh_Fir_reg_def27_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L114_;
  }

L113_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", l10, def27)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args87[2] = Rsh_Fir_reg_def27_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args87);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc5 then L115() else L114(def27, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L115()
    goto L115_;
  } else {
  // L114(def27, dr10)
    Rsh_Fir_reg_def29_ = Rsh_Fir_reg_def27_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr10_;
    goto L114_;
  }

L114_:;
  // name5 = ld name
  Rsh_Fir_reg_name5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L116() else D39()
  // L116()
  goto L116_;

L115_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L25(dx10)
  // L25(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L25_;

D39_:;
  // deopt 155 [def29, l12, def27, name5]
  SEXP Rsh_Fir_array_deopt_stack38[4];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_def29_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_def27_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_name5_;
  Rsh_Fir_deopt(155, 4, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L116_:;
  // name6 = force? name5
  Rsh_Fir_reg_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name5_);
  // ____3 = ldf `[[<-` in base
  Rsh_Fir_reg_____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r42 = dyn ____3(l12, def27, name6)
  SEXP Rsh_Fir_array_args90[3];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_def27_;
  Rsh_Fir_array_args90[2] = Rsh_Fir_reg_name6_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____3_, 3, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L25(r42)
  // L25(r42)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r42_;
  goto L25_;

D40_:;
  // deopt 159 [fdef8]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_fdef8_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L117_:;
  // fdef9 = force? fdef8
  Rsh_Fir_reg_fdef9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef8_);
  // checkMissing(fdef9)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_fdef9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return fdef9
  return Rsh_Fir_reg_fdef9_;
}
SEXP Rsh_Fir_user_promise_inner3333887956_(SEXP CCP, SEXP RHO) {
  // fdef6 = ld fdef
  Rsh_Fir_reg_fdef6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // fdef7 = force? fdef6
  Rsh_Fir_reg_fdef7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef6_);
  // checkMissing(fdef7)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_fdef7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return fdef7
  return Rsh_Fir_reg_fdef7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
