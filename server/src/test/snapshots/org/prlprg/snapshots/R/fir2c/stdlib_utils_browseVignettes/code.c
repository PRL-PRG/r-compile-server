#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1342324061_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1342324061_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1342324061_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1342324061_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1342324061_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1342324061_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1342324061_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1342324061_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1342324061_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3913899244_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3913899244_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1342324061
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1342324061_, RHO, CCP);
  // st browseVignettes = r
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
SEXP Rsh_Fir_user_function_inner1342324061_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1342324061 dynamic dispatch ([package, `lib.loc`, all])

  return Rsh_Fir_user_version_inner1342324061_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1342324061_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1342324061 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1342324061/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_package;  // package
  SEXP Rsh_Fir_reg_lib_loc;  // lib_loc
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_package_isMissing;  // package_isMissing
  SEXP Rsh_Fir_reg_package_orDefault;  // package_orDefault
  SEXP Rsh_Fir_reg_lib_loc_isMissing;  // lib_loc_isMissing
  SEXP Rsh_Fir_reg_lib_loc_orDefault;  // lib_loc_orDefault
  SEXP Rsh_Fir_reg_all_isMissing;  // all_isMissing
  SEXP Rsh_Fir_reg_all_orDefault;  // all_orDefault
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_package1_;  // package1
  SEXP Rsh_Fir_reg_package2_;  // package2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_lib_loc1_;  // lib_loc1
  SEXP Rsh_Fir_reg_lib_loc2_;  // lib_loc2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_all1_;  // all1
  SEXP Rsh_Fir_reg_all2_;  // all2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_vinfo;  // vinfo
  SEXP Rsh_Fir_reg_vinfo1_;  // vinfo1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_pkgs;  // pkgs
  SEXP Rsh_Fir_reg_pkgs1_;  // pkgs1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_pkgs2_;  // pkgs2
  SEXP Rsh_Fir_reg_pkgs3_;  // pkgs3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sys_call;  // sys_call
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_all3_;  // all3
  SEXP Rsh_Fir_reg_all4_;  // all4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_gettext;  // gettext
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_db1_;  // db1

  // Bind parameters
  Rsh_Fir_reg_package = PARAMS[0];
  Rsh_Fir_reg_lib_loc = PARAMS[1];
  Rsh_Fir_reg_all = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // package_isMissing = missing.0(package)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_package;
  Rsh_Fir_reg_package_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if package_isMissing then L0(NULL) else L0(package)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_package_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_package_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(package)
    Rsh_Fir_reg_package_orDefault = Rsh_Fir_reg_package;
    goto L0_;
  }

L0_:;
  // st package = package_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_package_orDefault, RHO);
  (void)(Rsh_Fir_reg_package_orDefault);
  // lib_loc_isMissing = missing.0(lib_loc)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_lib_loc;
  Rsh_Fir_reg_lib_loc_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if lib_loc_isMissing then L1(NULL) else L1(lib_loc)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lib_loc_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_const(CCP, 1);
    goto L1_;
  } else {
  // L1(lib_loc)
    Rsh_Fir_reg_lib_loc_orDefault = Rsh_Fir_reg_lib_loc;
    goto L1_;
  }

L1_:;
  // st `lib.loc` = lib_loc_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_lib_loc_orDefault, RHO);
  (void)(Rsh_Fir_reg_lib_loc_orDefault);
  // all_isMissing = missing.0(all)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_all;
  Rsh_Fir_reg_all_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if all_isMissing then L2(TRUE) else L2(all)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_all_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_all_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(all)
    Rsh_Fir_reg_all_orDefault = Rsh_Fir_reg_all;
    goto L2_;
  }

L2_:;
  // st all = all_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_all_orDefault, RHO);
  (void)(Rsh_Fir_reg_all_orDefault);
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L3_:;
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L22() else D15()
  // L22()
  goto L22_;

L4_:;
  // l2 = ld db
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L24() else D17()
  // L24()
  goto L24_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r = dyn __("tools", "getVignetteInfo")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

D1_:;
  // deopt 4 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // checkFun.0(r)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args4));
  // r1 = r as cls
  Rsh_Fir_reg_r1_ = Rsh_Fir_cast(Rsh_Fir_reg_r1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   package1 = ld package;
  //   package2 = force? package1;
  //   checkMissing(package2);
  //   return package2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1342324061_, CCP, RHO);
  // p1 = prom<V +>{
  //   lib_loc1 = ld `lib.loc`;
  //   lib_loc2 = force? lib_loc1;
  //   checkMissing(lib_loc2);
  //   return lib_loc2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1342324061_1, CCP, RHO);
  // p2 = prom<V +>{
  //   all1 = ld all;
  //   all2 = force? all1;
  //   checkMissing(all2);
  //   return all2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1342324061_2, CCP, RHO);
  // r5 = dyn r1(p, p1, p2)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r1_, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

D2_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // st vinfo = r5
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p3 = prom<V +>{
  //   vinfo = ld vinfo;
  //   vinfo1 = force? vinfo;
  //   checkMissing(vinfo1);
  //   c = `is.object`(vinfo1);
  //   if c then L1() else L2();
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", vinfo1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2();
  // L2():
  //   __1 = ldf `[` in base;
  //   r6 = dyn __1(vinfo1, <missing>, "Package");
  //   goto L0(r6);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1342324061_3, CCP, RHO);
  // r8 = dyn unique(p3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 14 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // st pkgs = r8
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L10() else D5()
  // L10()
  goto L10_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p4 = prom<V +>{
  //   pkgs = ld pkgs;
  //   pkgs1 = force? pkgs;
  //   checkMissing(pkgs1);
  //   return pkgs1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1342324061_4, CCP, RHO);
  // p5 = prom<V +>{
  //   r10 = clos inner3913899244;
  //   return r10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1342324061_5, CCP, RHO);
  // r12 = dyn lapply(p4, p5)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L11() else D6()
  // L11()
  goto L11_;

D6_:;
  // deopt 20 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // st db = r12
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // pkgs2 = ld pkgs
  Rsh_Fir_reg_pkgs2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L12() else D7()
  // L12()
  goto L12_;

D7_:;
  // deopt 22 [pkgs2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_pkgs2_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // pkgs3 = force? pkgs2
  Rsh_Fir_reg_pkgs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs2_);
  // checkMissing(pkgs3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_pkgs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // l = ld db
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L13() else D8()
  // L13()
  goto L13_;

D8_:;
  // deopt 25 [pkgs3, l, pkgs3]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_pkgs3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_pkgs3_;
  Rsh_Fir_deopt(25, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // r13 = dyn names__(l, NULL, pkgs3)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_pkgs3_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D9()
  // L14()
  goto L14_;

D9_:;
  // deopt 27 [pkgs3, r13]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_pkgs3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L14_:;
  // st db = r13
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L15() else D10()
  // L15()
  goto L15_;

D10_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r14 = dyn sys_call()
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 0, NULL, NULL, CCP, RHO);
  // check L16() else D11()
  // L16()
  goto L16_;

D11_:;
  // deopt 31 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L16_:;
  // l1 = ld db
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L17() else D12()
  // L17()
  goto L17_;

D12_:;
  // deopt 33 [r14, l1, r14]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(33, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // r15 = dyn attr__(l1, NULL, "call", r14)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args20[3] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L18() else D13()
  // L18()
  goto L18_;

D13_:;
  // deopt 36 [r14, r15]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L18_:;
  // st db = r15
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // all3 = ld all
  Rsh_Fir_reg_all3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L19() else D14()
  // L19()
  goto L19_;

D14_:;
  // deopt 38 [all3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_all3_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L19_:;
  // all4 = force? all3
  Rsh_Fir_reg_all4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all3_);
  // checkMissing(all4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_all4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(all4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_all4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L3()
    goto L3_;
  }

L20_:;
  // goto L4("")
  // L4("")
  Rsh_Fir_reg_r16_ = Rsh_const(CCP, 23);
  goto L4_;

D15_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p6 = prom<V +>{
  //   gettext = ldf gettext;
  //   r17 = dyn gettext("Use <code> %s </code> \n to list the vignettes in all <strong>available</strong> packages.");
  //   return r17;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1342324061_6, CCP, RHO);
  // r19 = dyn sprintf(p6, "browseVignettes(all = TRUE)")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L23() else D16()
  // L23()
  goto L23_;

D16_:;
  // deopt 46 [r19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L4(r19)
  // L4(r19)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r19_;
  goto L4_;

D17_:;
  // deopt 48 [r16, l2, r16]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(48, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L24_:;
  // r20 = dyn attr__1(l2, NULL, "footer", r16)
  SEXP Rsh_Fir_array_args25[4];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[3] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L25() else D18()
  // L25()
  goto L25_;

D18_:;
  // deopt 51 [r16, r20]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L25_:;
  // st db = r20
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // l3 = ld db
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L26() else D19()
  // L26()
  goto L26_;

D19_:;
  // deopt 56 ["browseVignettes", l3, "browseVignettes"]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 29);
  Rsh_Fir_deopt(56, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L26_:;
  // r21 = dyn class__(l3, NULL, "browseVignettes")
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L27() else D20()
  // L27()
  goto L27_;

D20_:;
  // deopt 58 ["browseVignettes", r21]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L27_:;
  // st db = r21
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // db = ld db
  Rsh_Fir_reg_db = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L28() else D21()
  // L28()
  goto L28_;

D21_:;
  // deopt 60 [db]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_db;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L28_:;
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return db1
  return Rsh_Fir_reg_db1_;
}
SEXP Rsh_Fir_user_promise_inner1342324061_(SEXP CCP, SEXP RHO) {
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return package2
  return Rsh_Fir_reg_package2_;
}
SEXP Rsh_Fir_user_promise_inner1342324061_1(SEXP CCP, SEXP RHO) {
  // lib_loc1 = ld `lib.loc`
  Rsh_Fir_reg_lib_loc1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // lib_loc2 = force? lib_loc1
  Rsh_Fir_reg_lib_loc2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lib_loc1_);
  // checkMissing(lib_loc2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_lib_loc2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return lib_loc2
  return Rsh_Fir_reg_lib_loc2_;
}
SEXP Rsh_Fir_user_promise_inner1342324061_2(SEXP CCP, SEXP RHO) {
  // all1 = ld all
  Rsh_Fir_reg_all1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // all2 = force? all1
  Rsh_Fir_reg_all2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all1_);
  // checkMissing(all2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_all2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return all2
  return Rsh_Fir_reg_all2_;
}
SEXP Rsh_Fir_user_promise_inner1342324061_3(SEXP CCP, SEXP RHO) {
  // vinfo = ld vinfo
  Rsh_Fir_reg_vinfo = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // vinfo1 = force? vinfo
  Rsh_Fir_reg_vinfo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vinfo);
  // checkMissing(vinfo1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_vinfo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `is.object`(vinfo1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_vinfo1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", vinfo1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_vinfo1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r6 = dyn __1(vinfo1, <missing>, "Package")
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_vinfo1_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1342324061_4(SEXP CCP, SEXP RHO) {
  // pkgs = ld pkgs
  Rsh_Fir_reg_pkgs = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // pkgs1 = force? pkgs
  Rsh_Fir_reg_pkgs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgs);
  // checkMissing(pkgs1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_pkgs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return pkgs1
  return Rsh_Fir_reg_pkgs1_;
}
SEXP Rsh_Fir_user_promise_inner1342324061_5(SEXP CCP, SEXP RHO) {
  // r10 = clos inner3913899244
  Rsh_Fir_reg_r10_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3913899244_, RHO, CCP);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner1342324061_6(SEXP CCP, SEXP RHO) {
  // gettext = ldf gettext
  Rsh_Fir_reg_gettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // r17 = dyn gettext("Use <code> %s </code> \n to list the vignettes in all <strong>available</strong> packages.")
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_function_inner3913899244_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3913899244 dynamic dispatch ([p])

  return Rsh_Fir_user_version_inner3913899244_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3913899244_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3913899244 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3913899244/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_vinfo1;  // vinfo
  SEXP Rsh_Fir_reg_vinfo1_1;  // vinfo1
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_vinfo3_;  // vinfo3
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_vinfo4_;  // vinfo4
  SEXP Rsh_Fir_reg_vinfo5_;  // vinfo5
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_vinfo8_;  // vinfo8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_vinfo11_;  // vinfo11
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg___1_1;  // __1
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_p1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st p = p
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_p1, RHO);
  (void)(Rsh_Fir_reg_p1);
  // vinfo = ld vinfo
  Rsh_Fir_reg_vinfo1 = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // p1 = ld p
  Rsh_Fir_reg_p1_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

D0_:;
  // deopt 0 [vinfo]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_vinfo1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L2_:;
  // vinfo1 = force? vinfo
  Rsh_Fir_reg_vinfo1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_vinfo1);
  // checkMissing(vinfo1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_vinfo1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c = `is.object`(vinfo1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_vinfo1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c then L3() else L4(vinfo1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L3()
    goto L3_;
  } else {
  // L4(vinfo1)
    Rsh_Fir_reg_vinfo3_ = Rsh_Fir_reg_vinfo1_1;
    goto L4_;
  }

L3_:;
  // dr = tryDispatchBuiltin.1("[", vinfo1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_vinfo1_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg_vinfo3_ = Rsh_Fir_reg_dr1;
    goto L4_;
  }

L4_:;
  // vinfo4 = ld vinfo
  Rsh_Fir_reg_vinfo4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;

D1_:;
  // deopt 2 [vinfo3, vinfo4]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_vinfo3_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_vinfo4_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L6_:;
  // vinfo5 = force? vinfo4
  Rsh_Fir_reg_vinfo5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vinfo4_);
  // checkMissing(vinfo5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_vinfo5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(vinfo5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_vinfo5_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c1 then L7() else L8(vinfo3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L7()
    goto L7_;
  } else {
  // L8(vinfo3)
    Rsh_Fir_reg_vinfo8_ = Rsh_Fir_reg_vinfo3_;
    goto L8_;
  }

L7_:;
  // dr2 = tryDispatchBuiltin.1("[", vinfo5)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_vinfo5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc1 then L9() else L8(vinfo3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L9()
    goto L9_;
  } else {
  // L8(vinfo3)
    Rsh_Fir_reg_vinfo8_ = Rsh_Fir_reg_vinfo3_;
    goto L8_;
  }

L8_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r = dyn __(vinfo5, <missing>, "Package")
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_vinfo5_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(vinfo8, r)
  // L1(vinfo8, r)
  Rsh_Fir_reg_vinfo11_ = Rsh_Fir_reg_vinfo8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r2;
  goto L1_;

L9_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L1(vinfo3, dx2)
  // L1(vinfo3, dx2)
  Rsh_Fir_reg_vinfo11_ = Rsh_Fir_reg_vinfo3_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;

D2_:;
  // deopt 7 [vinfo11, dx3, p1]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_vinfo11_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L10_:;
  // p2 = force? p1
  Rsh_Fir_reg_p2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p1_1);
  // checkMissing(p2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r1 = `==`(dx3, p2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r2 = dyn __1(vinfo1, r1, <missing>, FALSE)
  SEXP Rsh_Fir_array_args41[4];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_vinfo1_1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 4, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
