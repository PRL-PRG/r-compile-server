#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1444949165_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1444949165_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1444949165_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1444949165_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1444949165_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1444949165_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1444949165_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1444949165_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1444949165_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner1444949165
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1444949165_, RHO, CCP);
  // st `.update_package_rds` = r
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
SEXP Rsh_Fir_user_function_inner1444949165_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1444949165 dynamic dispatch ([`lib.loc`])

  return Rsh_Fir_user_version_inner1444949165_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1444949165_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1444949165 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1444949165/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_lib_loc;  // lib_loc
  SEXP Rsh_Fir_reg_lib_loc_isMissing;  // lib_loc_isMissing
  SEXP Rsh_Fir_reg_lib_loc_orDefault;  // lib_loc_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_lib_loc1_;  // lib_loc1
  SEXP Rsh_Fir_reg_lib_loc2_;  // lib_loc2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__libPaths;  // _libPaths
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_lib_loc3_;  // lib_loc3
  SEXP Rsh_Fir_reg_lib_loc4_;  // lib_loc4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_lib_loc6_;  // lib_loc6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_file_exists;  // file_exists
  SEXP Rsh_Fir_reg_lib_loc7_;  // lib_loc7
  SEXP Rsh_Fir_reg_lib_loc8_;  // lib_loc8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_lib_loc9_;  // lib_loc9
  SEXP Rsh_Fir_reg_lib_loc10_;  // lib_loc10
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_list_files;  // list_files
  SEXP Rsh_Fir_reg_lib;  // lib
  SEXP Rsh_Fir_reg_lib1_;  // lib1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_file_path;  // file_path
  SEXP Rsh_Fir_reg_nam;  // nam
  SEXP Rsh_Fir_reg_nam1_;  // nam1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_file_exists1_;  // file_exists1
  SEXP Rsh_Fir_reg_dfile;  // dfile
  SEXP Rsh_Fir_reg_dfile1_;  // dfile1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_print;  // print
  SEXP Rsh_Fir_reg_nam2_;  // nam2
  SEXP Rsh_Fir_reg_nam3_;  // nam3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg__install_package_description;  // _install_package_description
  SEXP Rsh_Fir_reg_nam4_;  // nam4
  SEXP Rsh_Fir_reg_nam5_;  // nam5
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_nam6_;  // nam6
  SEXP Rsh_Fir_reg_nam7_;  // nam7
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_i18_;  // i18

  // Bind parameters
  Rsh_Fir_reg_lib_loc = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // lib_loc_isMissing = missing.0(lib_loc)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_lib_loc;
  Rsh_Fir_reg_lib_loc_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if lib_loc_isMissing then L0(NULL) else L0(lib_loc)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lib_loc_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(lib_loc)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_Fir_reg_lib_loc;
    goto L0_;
  }

L0_:;
  // st `lib.loc` = lib_loc_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_lib_loc_orDefault, RHO);
  (void)(Rsh_Fir_reg_lib_loc_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L1_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L14() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // lib_loc3 = ld `lib.loc`
  Rsh_Fir_reg_lib_loc3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L4_:;
  // st `lib.loc` = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // lib_loc9 = ld `lib.loc`
  Rsh_Fir_reg_lib_loc9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

L5_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c3 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c3 then L25() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L25()
    goto L25_;
  } else {
  // L10()
    goto L10_;
  }

L6_:;
  // i8 = `+`.1(i7, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_i8_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // c4 = `<`.1(l1, i8)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if c4 then L29() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L29()
    goto L29_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // goto L8(i6, i8)
  // L8(i6, i8)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i8_;
  goto L8_;

L8_:;
  // goto L6(i17, i18)
  // L6(i17, i18)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i18_;
  goto L6_;

L9_:;
  // x1 = `[[`(s1, i8, NULL, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st nam = x1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L30() else D10()
  // L30()
  goto L30_;

L10_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st lib = x
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // list_files = ldf `list.files`
  Rsh_Fir_reg_list_files = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

L11_:;
  // lib_loc1 = ld `lib.loc`
  Rsh_Fir_reg_lib_loc1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r = dyn base(<sym lib.loc>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [lib_loc1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_lib_loc1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // lib_loc2 = force? lib_loc1
  Rsh_Fir_reg_lib_loc2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lib_loc1_);
  // checkMissing(lib_loc2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_lib_loc2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c = `==`(lib_loc2, NULL)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_lib_loc2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L1_;

L14_:;
  // _libPaths = ldf `.libPaths`
  Rsh_Fir_reg__libPaths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r2 = dyn _libPaths()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__libPaths, 0, NULL, NULL, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

D2_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // st `lib.loc` = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // goto L3()
  // L3()
  goto L3_;

D3_:;
  // deopt 10 [lib_loc3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_lib_loc3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // lib_loc4 = force? lib_loc3
  Rsh_Fir_reg_lib_loc4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lib_loc3_);
  // checkMissing(lib_loc4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_lib_loc4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(lib_loc4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_lib_loc4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c2 then L19() else L20(lib_loc4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L19()
    goto L19_;
  } else {
  // L20(lib_loc4)
    Rsh_Fir_reg_lib_loc6_ = Rsh_Fir_reg_lib_loc4_;
    goto L20_;
  }

L19_:;
  // dr = tryDispatchBuiltin.1("[", lib_loc4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_lib_loc4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr)
    Rsh_Fir_reg_lib_loc6_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D4_:;
  // deopt 13 [lib_loc6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_lib_loc6_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // p = prom<V +>{
  //   lib_loc7 = ld `lib.loc`;
  //   lib_loc8 = force? lib_loc7;
  //   checkMissing(lib_loc8);
  //   return lib_loc8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1444949165_, CCP, RHO);
  // r5 = dyn file_exists(p)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D5_:;
  // deopt 15 [lib_loc6, r5]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_lib_loc6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r6 = dyn __(lib_loc6, r5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_lib_loc6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L4_;

D6_:;
  // deopt 18 [lib_loc9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_lib_loc9_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // lib_loc10 = force? lib_loc9
  Rsh_Fir_reg_lib_loc10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lib_loc9_);
  // checkMissing(lib_loc10)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_lib_loc10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // s = toForSeq(lib_loc10)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_lib_loc10_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 14);
  // goto L5(i)
  // L5(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L5_;

L25_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return i2
  return Rsh_Fir_reg_i2_;

D7_:;
  // deopt 21 [i2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L26_:;
  // p1 = prom<V +>{
  //   lib = ld lib;
  //   lib1 = force? lib;
  //   checkMissing(lib1);
  //   return lib1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1444949165_1, CCP, RHO);
  // r8 = dyn list_files[, `all.files`, `full.names`](p1, FALSE, TRUE)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list_files, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

D8_:;
  // deopt 27 [i2, r8]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L27_:;
  // st a = r8
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

D9_:;
  // deopt 29 [i2, a]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L28_:;
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(a1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // i5 = 0
  Rsh_Fir_reg_i5_ = Rsh_const(CCP, 14);
  // goto L6(i2, i5)
  // L6(i2, i5)
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i5_;
  goto L6_;

L29_:;
  // goto L5(i6)
  // L5(i6)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i6_;
  goto L5_;

D10_:;
  // deopt 32 [i6, i8]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // p2 = prom<V +>{
  //   nam = ld nam;
  //   nam1 = force? nam;
  //   checkMissing(nam1);
  //   return nam1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1444949165_2, CCP, RHO);
  // r10 = dyn file_path(p2, "DESCRIPTION")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L31() else D11()
  // L31()
  goto L31_;

D11_:;
  // deopt 35 [i6, i8, r10]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(35, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L31_:;
  // st dfile = r10
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // file_exists1 = ldf `file.exists`
  Rsh_Fir_reg_file_exists1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L32() else D12()
  // L32()
  goto L32_;

D12_:;
  // deopt 38 [i6, i8]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // p3 = prom<V +>{
  //   dfile = ld dfile;
  //   dfile1 = force? dfile;
  //   checkMissing(dfile1);
  //   return dfile1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1444949165_3, CCP, RHO);
  // r12 = dyn file_exists1(p3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L33() else D13()
  // L33()
  goto L33_;

D13_:;
  // deopt 40 [i6, i8, r12]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(40, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // c5 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c5 then L34() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L34()
    goto L34_;
  } else {
  // L7()
    goto L7_;
  }

L34_:;
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L35() else D14()
  // L35()
  goto L35_;

D14_:;
  // deopt 42 [i6, i8]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L35_:;
  // p4 = prom<V +>{
  //   nam2 = ld nam;
  //   nam3 = force? nam2;
  //   checkMissing(nam3);
  //   return nam3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1444949165_4, CCP, RHO);
  // r14 = dyn print(p4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L36() else D15()
  // L36()
  goto L36_;

D15_:;
  // deopt 44 [i6, i8, r14]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(44, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L36_:;
  // _install_package_description = ldf `.install_package_description`
  Rsh_Fir_reg__install_package_description = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L37() else D16()
  // L37()
  goto L37_;

D16_:;
  // deopt 46 [i6, i8]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // p5 = prom<V +>{
  //   nam4 = ld nam;
  //   nam5 = force? nam4;
  //   checkMissing(nam5);
  //   return nam5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1444949165_5, CCP, RHO);
  // p6 = prom<V +>{
  //   nam6 = ld nam;
  //   nam7 = force? nam6;
  //   checkMissing(nam7);
  //   return nam7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1444949165_6, CCP, RHO);
  // r17 = dyn _install_package_description(p5, p6)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__install_package_description, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D17()
  // L38()
  goto L38_;

D17_:;
  // deopt 49 [i6, i8, r17]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L8(i6, i8)
  // L8(i6, i8)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i8_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner1444949165_(SEXP CCP, SEXP RHO) {
  // lib_loc7 = ld `lib.loc`
  Rsh_Fir_reg_lib_loc7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // lib_loc8 = force? lib_loc7
  Rsh_Fir_reg_lib_loc8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lib_loc7_);
  // checkMissing(lib_loc8)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_lib_loc8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return lib_loc8
  return Rsh_Fir_reg_lib_loc8_;
}
SEXP Rsh_Fir_user_promise_inner1444949165_1(SEXP CCP, SEXP RHO) {
  // lib = ld lib
  Rsh_Fir_reg_lib = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // lib1 = force? lib
  Rsh_Fir_reg_lib1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lib);
  // checkMissing(lib1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_lib1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return lib1
  return Rsh_Fir_reg_lib1_;
}
SEXP Rsh_Fir_user_promise_inner1444949165_2(SEXP CCP, SEXP RHO) {
  // nam = ld nam
  Rsh_Fir_reg_nam = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // nam1 = force? nam
  Rsh_Fir_reg_nam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam);
  // checkMissing(nam1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_nam1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return nam1
  return Rsh_Fir_reg_nam1_;
}
SEXP Rsh_Fir_user_promise_inner1444949165_3(SEXP CCP, SEXP RHO) {
  // dfile = ld dfile
  Rsh_Fir_reg_dfile = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // dfile1 = force? dfile
  Rsh_Fir_reg_dfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dfile);
  // checkMissing(dfile1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return dfile1
  return Rsh_Fir_reg_dfile1_;
}
SEXP Rsh_Fir_user_promise_inner1444949165_4(SEXP CCP, SEXP RHO) {
  // nam2 = ld nam
  Rsh_Fir_reg_nam2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // nam3 = force? nam2
  Rsh_Fir_reg_nam3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam2_);
  // checkMissing(nam3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_nam3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return nam3
  return Rsh_Fir_reg_nam3_;
}
SEXP Rsh_Fir_user_promise_inner1444949165_5(SEXP CCP, SEXP RHO) {
  // nam4 = ld nam
  Rsh_Fir_reg_nam4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // nam5 = force? nam4
  Rsh_Fir_reg_nam5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam4_);
  // checkMissing(nam5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_nam5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return nam5
  return Rsh_Fir_reg_nam5_;
}
SEXP Rsh_Fir_user_promise_inner1444949165_6(SEXP CCP, SEXP RHO) {
  // nam6 = ld nam
  Rsh_Fir_reg_nam6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // nam7 = force? nam6
  Rsh_Fir_reg_nam7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam6_);
  // checkMissing(nam7)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_nam7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return nam7
  return Rsh_Fir_reg_nam7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
