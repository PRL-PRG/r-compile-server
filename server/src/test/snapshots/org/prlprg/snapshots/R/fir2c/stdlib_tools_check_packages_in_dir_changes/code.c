#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2233096714_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2233096714_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2233096714_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2233096714_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2233096714_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2233096714_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2233096714_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2233096714_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2233096714_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2233096714_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2233096714_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2233096714_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner2233096714
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2233096714_, RHO, CCP);
  // st check_packages_in_dir_changes = r
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
SEXP Rsh_Fir_user_function_inner2233096714_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2233096714 dynamic dispatch ([dir, old, outputs, sources, `...`])

  return Rsh_Fir_user_version_inner2233096714_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2233096714_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2233096714 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2233096714/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_dir;  // dir
  SEXP Rsh_Fir_reg_old;  // old
  SEXP Rsh_Fir_reg_outputs;  // outputs
  SEXP Rsh_Fir_reg_sources;  // sources
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_outputs_isMissing;  // outputs_isMissing
  SEXP Rsh_Fir_reg_outputs_orDefault;  // outputs_orDefault
  SEXP Rsh_Fir_reg_sources_isMissing;  // sources_isMissing
  SEXP Rsh_Fir_reg_sources_orDefault;  // sources_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_dir1_;  // dir1
  SEXP Rsh_Fir_reg_dir2_;  // dir2
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_dir3_;  // dir3
  SEXP Rsh_Fir_reg_dir4_;  // dir4
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_normalizePath;  // normalizePath
  SEXP Rsh_Fir_reg_dir5_;  // dir5
  SEXP Rsh_Fir_reg_dir6_;  // dir6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_R_check_outdirs;  // R_check_outdirs
  SEXP Rsh_Fir_reg_dir7_;  // dir7
  SEXP Rsh_Fir_reg_dir8_;  // dir8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sources1_;  // sources1
  SEXP Rsh_Fir_reg_sources2_;  // sources2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_file_path;  // file_path
  SEXP Rsh_Fir_reg_outdirs;  // outdirs
  SEXP Rsh_Fir_reg_outdirs1_;  // outdirs1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_logs;  // logs
  SEXP Rsh_Fir_reg_logs1_;  // logs1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_logs3_;  // logs3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_file_test;  // file_test
  SEXP Rsh_Fir_reg_logs4_;  // logs4
  SEXP Rsh_Fir_reg_logs5_;  // logs5
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_check_packages_in_dir_details;  // check_packages_in_dir_details
  SEXP Rsh_Fir_reg_logs6_;  // logs6
  SEXP Rsh_Fir_reg_logs7_;  // logs7
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_old1_;  // old1
  SEXP Rsh_Fir_reg_old2_;  // old2
  SEXP Rsh_Fir_reg_inherits1_;  // inherits1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_check_packages_in_dir_details1_;  // check_packages_in_dir_details1
  SEXP Rsh_Fir_reg_old3_;  // old3
  SEXP Rsh_Fir_reg_old4_;  // old4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_check_details_changes;  // check_details_changes
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_old5_;  // old5
  SEXP Rsh_Fir_reg_old6_;  // old6
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_outputs1_;  // outputs1
  SEXP Rsh_Fir_reg_outputs2_;  // outputs2
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r29_;  // r29

  // Bind parameters
  Rsh_Fir_reg_dir = PARAMS[0];
  Rsh_Fir_reg_old = PARAMS[1];
  Rsh_Fir_reg_outputs = PARAMS[2];
  Rsh_Fir_reg_sources = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st dir = dir
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dir, RHO);
  (void)(Rsh_Fir_reg_dir);
  // st old = old
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_old, RHO);
  (void)(Rsh_Fir_reg_old);
  // outputs_isMissing = missing.0(outputs)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_outputs;
  Rsh_Fir_reg_outputs_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if outputs_isMissing then L0(FALSE) else L0(outputs)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_outputs_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_outputs_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(outputs)
    Rsh_Fir_reg_outputs_orDefault = Rsh_Fir_reg_outputs;
    goto L0_;
  }

L0_:;
  // st outputs = outputs_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_outputs_orDefault, RHO);
  (void)(Rsh_Fir_reg_outputs_orDefault);
  // sources_isMissing = missing.0(sources)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sources;
  Rsh_Fir_reg_sources_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if sources_isMissing then L1(FALSE) else L1(sources)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sources_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_sources_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(sources)
    Rsh_Fir_reg_sources_orDefault = Rsh_Fir_reg_sources;
    goto L1_;
  }

L1_:;
  // st sources = sources_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_sources_orDefault, RHO);
  (void)(Rsh_Fir_reg_sources_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L2_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L14() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // normalizePath = ldf normalizePath
  Rsh_Fir_reg_normalizePath = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

L4_:;
  // st dir = r4
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r4_;
  goto L5_;

L5_:;
  // st dir = r6
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // R_check_outdirs = ldf R_check_outdirs
  Rsh_Fir_reg_R_check_outdirs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

L6_:;
  // st logs = dx1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // check_packages_in_dir_details = ldf check_packages_in_dir_details
  Rsh_Fir_reg_check_packages_in_dir_details = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

L7_:;
  // r22 = `!`(r20)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c2 then L38() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L38()
    goto L38_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // check_details_changes = ldf check_details_changes
  Rsh_Fir_reg_check_details_changes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L42() else D19()
  // L42()
  goto L42_;

L10_:;
  // dir1 = ld dir
  Rsh_Fir_reg_dir1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L11_:;
  // r = dyn base(<sym dir>, "check_packages_in_dir")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [dir1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_dir1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // dir2 = force? dir1
  Rsh_Fir_reg_dir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir1_);
  // checkMissing(dir2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn inherits(dir2, "check_packages_in_dir", FALSE)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dir2_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L14_:;
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // dir3 = ld dir
  Rsh_Fir_reg_dir3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

L16_:;
  // r3 = dyn base1(<sym dir>, "dir")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L4_;

D2_:;
  // deopt 10 [dir3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_dir3_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // dir4 = force? dir3
  Rsh_Fir_reg_dir4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir3_);
  // checkMissing(dir4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dir4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r5 = dyn attr(dir4, "dir")
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dir4_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

D3_:;
  // deopt 14 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L4_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p = prom<V +>{
  //   dir5 = ld dir;
  //   dir6 = force? dir5;
  //   checkMissing(dir6);
  //   return dir6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_, CCP, RHO);
  // r8 = dyn normalizePath(p)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_normalizePath, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

D5_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r8_;
  goto L5_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p1 = prom<V +>{
  //   dir7 = ld dir;
  //   dir8 = force? dir7;
  //   checkMissing(dir8);
  //   return dir8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sources1 = ld sources;
  //   sources2 = force? sources1;
  //   checkMissing(sources2);
  //   return sources2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_2, CCP, RHO);
  // r11 = dyn R_check_outdirs[, all, invert](p1, p2, TRUE)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_check_outdirs, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

D7_:;
  // deopt 28 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L23_:;
  // st outdirs = r11
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L24() else D8()
  // L24()
  goto L24_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p3 = prom<V +>{
  //   outdirs = ld outdirs;
  //   outdirs1 = force? outdirs;
  //   checkMissing(outdirs1);
  //   return outdirs1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_3, CCP, RHO);
  // r13 = dyn file_path(p3, "00check.log")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L25() else D9()
  // L25()
  goto L25_;

D9_:;
  // deopt 34 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // st logs = r13
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // logs = ld logs
  Rsh_Fir_reg_logs = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L26() else D10()
  // L26()
  goto L26_;

D10_:;
  // deopt 36 [logs]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_logs;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // logs1 = force? logs
  Rsh_Fir_reg_logs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_logs);
  // checkMissing(logs1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_logs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(logs1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_logs1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c1 then L27() else L28(logs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L27()
    goto L27_;
  } else {
  // L28(logs1)
    Rsh_Fir_reg_logs3_ = Rsh_Fir_reg_logs1_;
    goto L28_;
  }

L27_:;
  // dr = tryDispatchBuiltin.1("[", logs1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_logs1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc then L29() else L28(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr)
    Rsh_Fir_reg_logs3_ = Rsh_Fir_reg_dr;
    goto L28_;
  }

L28_:;
  // file_test = ldf file_test
  Rsh_Fir_reg_file_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

L29_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D11_:;
  // deopt 39 [logs3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_logs3_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L30_:;
  // p4 = prom<V +>{
  //   logs4 = ld logs;
  //   logs5 = force? logs4;
  //   checkMissing(logs5);
  //   return logs5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_4, CCP, RHO);
  // r15 = dyn file_test("-f", p4)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_test, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

D12_:;
  // deopt 42 [logs3, r15]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_logs3_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L31_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r16 = dyn __(logs3, r15)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_logs3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L6_;

D13_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p5 = prom<V +>{
  //   logs6 = ld logs;
  //   logs7 = force? logs6;
  //   checkMissing(logs7);
  //   return logs7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_5, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r18 = dyn check_packages_in_dir_details[logs, drop_ok, `...`](p5, FALSE, ddd1)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_check_packages_in_dir_details, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L33() else D14()
  // L33()
  goto L33_;

D14_:;
  // deopt 52 [r18]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L33_:;
  // st new = r18
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // sym2 = ldf inherits
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf inherits in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L34_:;
  // old1 = ld old
  Rsh_Fir_reg_old1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L36() else D15()
  // L36()
  goto L36_;

L35_:;
  // r19 = dyn base2(<sym old>, "check_details")
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(r19)
  // L7(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L7_;

D15_:;
  // deopt 56 [old1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_old1_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L36_:;
  // old2 = force? old1
  Rsh_Fir_reg_old2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old1_);
  // checkMissing(old2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_old2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r21 = dyn inherits1(old2, "check_details", FALSE)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_old2_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L37() else D16()
  // L37()
  goto L37_;

D16_:;
  // deopt 61 [r21]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L7_;

L38_:;
  // check_packages_in_dir_details1 = ldf check_packages_in_dir_details
  Rsh_Fir_reg_check_packages_in_dir_details1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L39() else D17()
  // L39()
  goto L39_;

D17_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p6 = prom<V +>{
  //   old3 = ld old;
  //   old4 = force? old3;
  //   checkMissing(old4);
  //   return old4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_6, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // r24 = dyn check_packages_in_dir_details1[, drop_ok, `...`](p6, FALSE, ddd2)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args35[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_check_packages_in_dir_details1_, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L40() else D18()
  // L40()
  goto L40_;

D18_:;
  // deopt 69 [r24]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L40_:;
  // st old = r24
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // goto L9()
  // L9()
  goto L9_;

D19_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p7 = prom<V +>{
  //   new = ld new;
  //   new1 = force? new;
  //   checkMissing(new1);
  //   return new1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_7, CCP, RHO);
  // p8 = prom<V +>{
  //   old5 = ld old;
  //   old6 = force? old5;
  //   checkMissing(old6);
  //   return old6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_8, CCP, RHO);
  // p9 = prom<V +>{
  //   outputs1 = ld outputs;
  //   outputs2 = force? outputs1;
  //   checkMissing(outputs2);
  //   return outputs2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2233096714_9, CCP, RHO);
  // r29 = dyn check_details_changes(p7, p8, p9)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_check_details_changes, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L43() else D20()
  // L43()
  goto L43_;

D20_:;
  // deopt 78 [r29]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L43_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_(SEXP CCP, SEXP RHO) {
  // dir5 = ld dir
  Rsh_Fir_reg_dir5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dir6 = force? dir5
  Rsh_Fir_reg_dir6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir5_);
  // checkMissing(dir6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dir6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return dir6
  return Rsh_Fir_reg_dir6_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_1(SEXP CCP, SEXP RHO) {
  // dir7 = ld dir
  Rsh_Fir_reg_dir7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dir8 = force? dir7
  Rsh_Fir_reg_dir8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir7_);
  // checkMissing(dir8)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dir8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return dir8
  return Rsh_Fir_reg_dir8_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_2(SEXP CCP, SEXP RHO) {
  // sources1 = ld sources
  Rsh_Fir_reg_sources1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // sources2 = force? sources1
  Rsh_Fir_reg_sources2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sources1_);
  // checkMissing(sources2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sources2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return sources2
  return Rsh_Fir_reg_sources2_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_3(SEXP CCP, SEXP RHO) {
  // outdirs = ld outdirs
  Rsh_Fir_reg_outdirs = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // outdirs1 = force? outdirs
  Rsh_Fir_reg_outdirs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outdirs);
  // checkMissing(outdirs1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_outdirs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return outdirs1
  return Rsh_Fir_reg_outdirs1_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_4(SEXP CCP, SEXP RHO) {
  // logs4 = ld logs
  Rsh_Fir_reg_logs4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // logs5 = force? logs4
  Rsh_Fir_reg_logs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_logs4_);
  // checkMissing(logs5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_logs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return logs5
  return Rsh_Fir_reg_logs5_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_5(SEXP CCP, SEXP RHO) {
  // logs6 = ld logs
  Rsh_Fir_reg_logs6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // logs7 = force? logs6
  Rsh_Fir_reg_logs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_logs6_);
  // checkMissing(logs7)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_logs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return logs7
  return Rsh_Fir_reg_logs7_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_6(SEXP CCP, SEXP RHO) {
  // old3 = ld old
  Rsh_Fir_reg_old3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // old4 = force? old3
  Rsh_Fir_reg_old4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old3_);
  // checkMissing(old4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_old4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return old4
  return Rsh_Fir_reg_old4_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_7(SEXP CCP, SEXP RHO) {
  // new = ld new
  Rsh_Fir_reg_new = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // new1 = force? new
  Rsh_Fir_reg_new1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new);
  // checkMissing(new1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_new1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return new1
  return Rsh_Fir_reg_new1_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_8(SEXP CCP, SEXP RHO) {
  // old5 = ld old
  Rsh_Fir_reg_old5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // old6 = force? old5
  Rsh_Fir_reg_old6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old5_);
  // checkMissing(old6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_old6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return old6
  return Rsh_Fir_reg_old6_;
}
SEXP Rsh_Fir_user_promise_inner2233096714_9(SEXP CCP, SEXP RHO) {
  // outputs1 = ld outputs
  Rsh_Fir_reg_outputs1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // outputs2 = force? outputs1
  Rsh_Fir_reg_outputs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outputs1_);
  // checkMissing(outputs2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_outputs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return outputs2
  return Rsh_Fir_reg_outputs2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
