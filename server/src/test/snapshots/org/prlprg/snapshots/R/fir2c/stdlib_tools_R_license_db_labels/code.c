#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner992443750_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner992443750_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner992443750_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner992443750_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner992443750_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner992443750_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner992443750_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner992443750_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner992443750
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner992443750_, RHO, CCP);
  // st R_license_db_labels = r
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
SEXP Rsh_Fir_user_function_inner992443750_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner992443750 dynamic dispatch ([ldb])

  return Rsh_Fir_user_version_inner992443750_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner992443750_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner992443750 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner992443750/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ldb;  // ldb
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_ldb1_;  // ldb1
  SEXP Rsh_Fir_reg_ldb2_;  // ldb2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ldb3_;  // ldb3
  SEXP Rsh_Fir_reg_ldb4_;  // ldb4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_ldb6_;  // ldb6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_lab;  // lab
  SEXP Rsh_Fir_reg_lab1_;  // lab1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_ldb7_;  // ldb7
  SEXP Rsh_Fir_reg_ldb8_;  // ldb8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_ldb10_;  // ldb10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_pos;  // pos
  SEXP Rsh_Fir_reg_pos1_;  // pos1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_ldb11_;  // ldb11
  SEXP Rsh_Fir_reg_ldb12_;  // ldb12
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_ldb14_;  // ldb14
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_pos2_;  // pos2
  SEXP Rsh_Fir_reg_pos3_;  // pos3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_ifelse;  // ifelse
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_abbrevs;  // abbrevs
  SEXP Rsh_Fir_reg_abbrevs1_;  // abbrevs1
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_abbrevs2_;  // abbrevs2
  SEXP Rsh_Fir_reg_abbrevs3_;  // abbrevs3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_ldb15_;  // ldb15
  SEXP Rsh_Fir_reg_ldb16_;  // ldb16
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_ldb18_;  // ldb18
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_pos4_;  // pos4
  SEXP Rsh_Fir_reg_pos5_;  // pos5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_pos6_;  // pos6
  SEXP Rsh_Fir_reg_pos7_;  // pos7
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_versions;  // versions
  SEXP Rsh_Fir_reg_versions1_;  // versions1
  SEXP Rsh_Fir_reg_nzchar1_;  // nzchar1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_pos8_;  // pos8
  SEXP Rsh_Fir_reg_pos9_;  // pos9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_pos11_;  // pos11
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_lab2_;  // lab2
  SEXP Rsh_Fir_reg_lab3_;  // lab3
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_lab5_;  // lab5
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_pos12_;  // pos12
  SEXP Rsh_Fir_reg_pos13_;  // pos13
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_versions2_;  // versions2
  SEXP Rsh_Fir_reg_versions3_;  // versions3
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_versions5_;  // versions5
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_pos14_;  // pos14
  SEXP Rsh_Fir_reg_pos15_;  // pos15
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_lab6_;  // lab6
  SEXP Rsh_Fir_reg_lab7_;  // lab7

  // Bind parameters
  Rsh_Fir_reg_ldb = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ldb = ldb
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ldb, RHO);
  (void)(Rsh_Fir_reg_ldb);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L12() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // ldb3 = ld ldb
  Rsh_Fir_reg_ldb3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

L3_:;
  // st abbrevs = dx7
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // ldb11 = ld ldb
  Rsh_Fir_reg_ldb11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

L4_:;
  // st versions = dx13
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // ifelse = ldf ifelse
  Rsh_Fir_reg_ifelse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

L5_:;
  // st lab = dx21
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // sym2 = ldf nzchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf nzchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L6_:;
  // st ind = r27
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // pos8 = ld pos
  Rsh_Fir_reg_pos8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

L7_:;
  // st pos = dx23
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L55() else D15()
  // L55()
  goto L55_;

L8_:;
  // st lab = dx29
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // lab6 = ld lab
  Rsh_Fir_reg_lab6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

L9_:;
  // ldb1 = ld ldb
  Rsh_Fir_reg_ldb1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<sym ldb>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [ldb1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_ldb1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // ldb2 = force? ldb1
  Rsh_Fir_reg_ldb2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldb1_);
  // checkMissing(ldb2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_ldb2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // c = `==`(ldb2, NULL)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ldb2_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 11);

D1_:;
  // deopt 9 [ldb3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_ldb3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // ldb4 = force? ldb3
  Rsh_Fir_reg_ldb4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldb3_);
  // checkMissing(ldb4)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ldb4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(ldb4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_ldb4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c2 then L17() else L18(ldb4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L17()
    goto L17_;
  } else {
  // L18(ldb4)
    Rsh_Fir_reg_ldb6_ = Rsh_Fir_reg_ldb4_;
    goto L18_;
  }

L16_:;
  // st lab = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L17_:;
  // dr = tryDispatchBuiltin.1("$", ldb4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_ldb4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if dc then L19() else L18(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L19()
    goto L19_;
  } else {
  // L18(dr)
    Rsh_Fir_reg_ldb6_ = Rsh_Fir_reg_dr;
    goto L18_;
  }

L18_:;
  // r4 = `$`(ldb6, <sym SSS>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_ldb6_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L16(r4)
  // L16(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L16_;

L19_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L16(dx)
  // L16(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L16_;

D2_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p = prom<V +>{
  //   lab = ld lab;
  //   lab1 = force? lab;
  //   checkMissing(lab1);
  //   r5 = `==`(lab1, "");
  //   return r5;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner992443750_, CCP, RHO);
  // r7 = dyn which(p)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

D3_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // st pos = r7
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // ldb7 = ld ldb
  Rsh_Fir_reg_ldb7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

D4_:;
  // deopt 18 [ldb7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_ldb7_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // ldb8 = force? ldb7
  Rsh_Fir_reg_ldb8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldb7_);
  // checkMissing(ldb8)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ldb8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(ldb8)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ldb8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c3 then L24() else L25(ldb8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L24()
    goto L24_;
  } else {
  // L25(ldb8)
    Rsh_Fir_reg_ldb10_ = Rsh_Fir_reg_ldb8_;
    goto L25_;
  }

L23_:;
  // c4 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c4 then L27() else L28(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L27()
    goto L27_;
  } else {
  // L28(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L28_;
  }

L24_:;
  // dr2 = tryDispatchBuiltin.1("$", ldb8)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_ldb8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc1 then L26() else L25(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L26()
    goto L26_;
  } else {
  // L25(dr2)
    Rsh_Fir_reg_ldb10_ = Rsh_Fir_reg_dr2_;
    goto L25_;
  }

L25_:;
  // r8 = `$`(ldb10, <sym Abbrev>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ldb10_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L23(r8)
  // L23(r8)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r8_;
  goto L23_;

L26_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L23(dx2)
  // L23(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L23_;

L27_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc2 then L29() else L28(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L28_;
  }

L28_:;
  // pos = ld pos
  Rsh_Fir_reg_pos = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

L29_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L3(dx6)
  // L3(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L3_;

D5_:;
  // deopt 21 [dx5, pos]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_pos;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // pos1 = force? pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r9 = dyn __(dx5, pos1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r9_;
  goto L3_;

D6_:;
  // deopt 25 [ldb11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ldb11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // ldb12 = force? ldb11
  Rsh_Fir_reg_ldb12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldb11_);
  // checkMissing(ldb12)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_ldb12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(ldb12)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_ldb12_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c5 then L33() else L34(ldb12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L33()
    goto L33_;
  } else {
  // L34(ldb12)
    Rsh_Fir_reg_ldb14_ = Rsh_Fir_reg_ldb12_;
    goto L34_;
  }

L32_:;
  // c6 = `is.object`(dx9)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c6 then L36() else L37(dx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L36()
    goto L36_;
  } else {
  // L37(dx9)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    goto L37_;
  }

L33_:;
  // dr6 = tryDispatchBuiltin.1("$", ldb12)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_ldb12_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc3 then L35() else L34(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr6)
    Rsh_Fir_reg_ldb14_ = Rsh_Fir_reg_dr6_;
    goto L34_;
  }

L34_:;
  // r10 = `$`(ldb14, <sym Version>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_ldb14_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L32(r10)
  // L32(r10)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r10_;
  goto L32_;

L35_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L32(dx8)
  // L32(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L32_;

L36_:;
  // dr8 = tryDispatchBuiltin.1("[", dx9)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc4 then L38() else L37(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L38()
    goto L38_;
  } else {
  // L37(dr8)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dr8_;
    goto L37_;
  }

L37_:;
  // pos2 = ld pos
  Rsh_Fir_reg_pos2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

L38_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L4(dx12)
  // L4(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L4_;

D7_:;
  // deopt 28 [dx11, pos2]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_pos2_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // pos3 = force? pos2
  Rsh_Fir_reg_pos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r11 = dyn __1(dx11, pos3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_pos3_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r11_;
  goto L4_;

D8_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p1 = prom<V +>{
  //   sym1 = ldf nzchar;
  //   base1 = ldf nzchar in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   abbrevs = ld abbrevs;
  //   abbrevs1 = force? abbrevs;
  //   checkMissing(abbrevs1);
  //   nzchar = ldf nzchar in base;
  //   r14 = dyn nzchar(abbrevs1);
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base1(<sym abbrevs>);
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner992443750_1, CCP, RHO);
  // p2 = prom<V +>{
  //   abbrevs2 = ld abbrevs;
  //   abbrevs3 = force? abbrevs2;
  //   checkMissing(abbrevs3);
  //   return abbrevs3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner992443750_2, CCP, RHO);
  // p3 = prom<V +>{
  //   ldb15 = ld ldb;
  //   ldb16 = force? ldb15;
  //   checkMissing(ldb16);
  //   c7 = `is.object`(ldb16);
  //   if c7 then L2() else L3(ldb16);
  // L1(dx15):
  //   c8 = `is.object`(dx15);
  //   if c8 then L5() else L6(dx15);
  // L2():
  //   dr10 = tryDispatchBuiltin.1("$", ldb16);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L4() else L3(dr10);
  // L3(ldb18):
  //   r17 = `$`(ldb18, <sym Name>);
  //   goto L1(r17);
  // L0(dx19):
  //   return dx19;
  // L4():
  //   dx14 = getTryDispatchBuiltinValue(dr10);
  //   goto L1(dx14);
  // L5():
  //   dr12 = tryDispatchBuiltin.1("[", dx15);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L7() else L6(dr12);
  // L6(dx17):
  //   pos4 = ld pos;
  //   pos5 = force? pos4;
  //   __2 = ldf `[` in base;
  //   r18 = dyn __2(dx17, pos5);
  //   goto L0(r18);
  // L7():
  //   dx18 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner992443750_3, CCP, RHO);
  // r20 = dyn ifelse(p1, p2, p3)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args53[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L41() else D9()
  // L41()
  goto L41_;

D9_:;
  // deopt 37 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L41_:;
  // l = ld lab
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c9 = `is.object`(l)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c9 then L42() else L43(r20, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L42()
    goto L42_;
  } else {
  // L43(r20, l)
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L43_;
  }

L42_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l, r20)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args55);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc7 then L44() else L43(r20, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L44()
    goto L44_;
  } else {
  // L43(r20, dr14)
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr14_;
    goto L43_;
  }

L43_:;
  // pos6 = ld pos
  Rsh_Fir_reg_pos6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

L44_:;
  // dx20 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L5(dx20)
  // L5(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L5_;

D10_:;
  // deopt 39 [r22, l2, r20, pos6]
  SEXP Rsh_Fir_array_deopt_stack8[4];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_pos6_;
  Rsh_Fir_deopt(39, 4, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L45_:;
  // pos7 = force? pos6
  Rsh_Fir_reg_pos7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos6_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r25 = dyn ___(l2, r20, pos7)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_pos7_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r25)
  // L5(r25)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r25_;
  goto L5_;

L46_:;
  // versions = ld versions
  Rsh_Fir_reg_versions = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

L47_:;
  // r26 = dyn base2(<sym versions>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r26)
  // L6(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L6_;

D11_:;
  // deopt 45 [versions]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_versions;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L48_:;
  // versions1 = force? versions
  Rsh_Fir_reg_versions1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_versions);
  // checkMissing(versions1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_versions1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // nzchar1 = ldf nzchar in base
  Rsh_Fir_reg_nzchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r28 = dyn nzchar1(versions1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_versions1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar1_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

D12_:;
  // deopt 48 [r28]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L6(r28)
  // L6(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L6_;

D13_:;
  // deopt 50 [pos8]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_pos8_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // pos9 = force? pos8
  Rsh_Fir_reg_pos9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos8_);
  // checkMissing(pos9)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_pos9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(pos9)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_pos9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c10 then L51() else L52(pos9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L51()
    goto L51_;
  } else {
  // L52(pos9)
    Rsh_Fir_reg_pos11_ = Rsh_Fir_reg_pos9_;
    goto L52_;
  }

L51_:;
  // dr16 = tryDispatchBuiltin.1("[", pos9)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_pos9_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc8 then L53() else L52(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr16)
    Rsh_Fir_reg_pos11_ = Rsh_Fir_reg_dr16_;
    goto L52_;
  }

L52_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

L53_:;
  // dx22 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L7(dx22)
  // L7(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L7_;

D14_:;
  // deopt 52 [pos11, ind]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_pos11_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L54_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r29 = dyn __3(pos11, ind1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_pos11_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(r29)
  // L7(r29)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r29_;
  goto L7_;

D15_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p4 = prom<V +>{
  //   lab2 = ld lab;
  //   lab3 = force? lab2;
  //   checkMissing(lab3);
  //   c11 = `is.object`(lab3);
  //   if c11 then L1() else L2(lab3);
  // L0(dx25):
  //   return dx25;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", lab3);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(lab5):
  //   pos12 = ld pos;
  //   pos13 = force? pos12;
  //   __4 = ldf `[` in base;
  //   r30 = dyn __4(lab5, pos13);
  //   goto L0(r30);
  // L3():
  //   dx24 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx24);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner992443750_4, CCP, RHO);
  // p5 = prom<V +>{
  //   versions2 = ld versions;
  //   versions3 = force? versions2;
  //   checkMissing(versions3);
  //   c12 = `is.object`(versions3);
  //   if c12 then L1() else L2(versions3);
  // L0(dx27):
  //   return dx27;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("[", versions3);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(versions5):
  //   ind2 = ld ind;
  //   ind3 = force? ind2;
  //   __5 = ldf `[` in base;
  //   r32 = dyn __5(versions5, ind3);
  //   goto L0(r32);
  // L3():
  //   dx26 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx26);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner992443750_5, CCP, RHO);
  // r34 = dyn sprintf("%s version %s", p4, p5)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 3, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L56() else D16()
  // L56()
  goto L56_;

D16_:;
  // deopt 61 [r34]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L56_:;
  // l3 = ld lab
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c13 = `is.object`(l3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c13 then L57() else L58(r34, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L57()
    goto L57_;
  } else {
  // L58(r34, l3)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L58_;
  }

L57_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l3, r34)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args82[2] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args82);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if dc11 then L59() else L58(r34, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L59()
    goto L59_;
  } else {
  // L58(r34, dr22)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr22_;
    goto L58_;
  }

L58_:;
  // pos14 = ld pos
  Rsh_Fir_reg_pos14_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

L59_:;
  // dx28 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L8(dx28)
  // L8(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L8_;

D17_:;
  // deopt 63 [r36, l5, r34, pos14]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_pos14_;
  Rsh_Fir_deopt(63, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L60_:;
  // pos15 = force? pos14
  Rsh_Fir_reg_pos15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos14_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r39 = dyn ___1(l5, r34, pos15)
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args85[2] = Rsh_Fir_reg_pos15_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L8(r39)
  // L8(r39)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r39_;
  goto L8_;

D18_:;
  // deopt 67 [lab6]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_lab6_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L61_:;
  // lab7 = force? lab6
  Rsh_Fir_reg_lab7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lab6_);
  // checkMissing(lab7)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_lab7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return lab7
  return Rsh_Fir_reg_lab7_;
}
SEXP Rsh_Fir_user_promise_inner992443750_(SEXP CCP, SEXP RHO) {
  // lab = ld lab
  Rsh_Fir_reg_lab = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lab1 = force? lab
  Rsh_Fir_reg_lab1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lab);
  // checkMissing(lab1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_lab1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r5 = `==`(lab1, "")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_lab1_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_inner992443750_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf nzchar
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf nzchar in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // abbrevs = ld abbrevs
  Rsh_Fir_reg_abbrevs = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // abbrevs1 = force? abbrevs
  Rsh_Fir_reg_abbrevs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_abbrevs);
  // checkMissing(abbrevs1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_abbrevs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r14 = dyn nzchar(abbrevs1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_abbrevs1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base1(<sym abbrevs>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner992443750_2(SEXP CCP, SEXP RHO) {
  // abbrevs2 = ld abbrevs
  Rsh_Fir_reg_abbrevs2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // abbrevs3 = force? abbrevs2
  Rsh_Fir_reg_abbrevs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_abbrevs2_);
  // checkMissing(abbrevs3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_abbrevs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return abbrevs3
  return Rsh_Fir_reg_abbrevs3_;
}
SEXP Rsh_Fir_user_promise_inner992443750_3(SEXP CCP, SEXP RHO) {
  // ldb15 = ld ldb
  Rsh_Fir_reg_ldb15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ldb16 = force? ldb15
  Rsh_Fir_reg_ldb16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldb15_);
  // checkMissing(ldb16)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_ldb16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(ldb16)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_ldb16_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c7 then L2() else L3(ldb16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L2()
    goto L2_;
  } else {
  // L3(ldb16)
    Rsh_Fir_reg_ldb18_ = Rsh_Fir_reg_ldb16_;
    goto L3_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // c8 = `is.object`(dx15)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c8 then L5() else L6(dx15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx15)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    goto L6_;
  }

L2_:;
  // dr10 = tryDispatchBuiltin.1("$", ldb16)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_ldb16_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc5 then L4() else L3(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr10)
    Rsh_Fir_reg_ldb18_ = Rsh_Fir_reg_dr10_;
    goto L3_;
  }

L3_:;
  // r17 = `$`(ldb18, <sym Name>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_ldb18_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r17_;
  goto L1_;

L4_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L1(dx14)
  // L1(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L1_;

L5_:;
  // dr12 = tryDispatchBuiltin.1("[", dx15)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc6 then L7() else L6(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr12)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dr12_;
    goto L6_;
  }

L6_:;
  // pos4 = ld pos
  Rsh_Fir_reg_pos4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // pos5 = force? pos4
  Rsh_Fir_reg_pos5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos4_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r18 = dyn __2(dx17, pos5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_pos5_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r18_;
  goto L0_;

L7_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner992443750_4(SEXP CCP, SEXP RHO) {
  // lab2 = ld lab
  Rsh_Fir_reg_lab2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lab3 = force? lab2
  Rsh_Fir_reg_lab3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lab2_);
  // checkMissing(lab3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_lab3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(lab3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_lab3_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c11 then L1() else L2(lab3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(lab3)
    Rsh_Fir_reg_lab5_ = Rsh_Fir_reg_lab3_;
    goto L2_;
  }

L0_:;
  // return dx25
  return Rsh_Fir_reg_dx25_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", lab3)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_lab3_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_lab5_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // pos12 = ld pos
  Rsh_Fir_reg_pos12_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // pos13 = force? pos12
  Rsh_Fir_reg_pos13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos12_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r30 = dyn __4(lab5, pos13)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_lab5_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_pos13_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r30_;
  goto L0_;

L3_:;
  // dx24 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L0(dx24)
  // L0(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner992443750_5(SEXP CCP, SEXP RHO) {
  // versions2 = ld versions
  Rsh_Fir_reg_versions2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // versions3 = force? versions2
  Rsh_Fir_reg_versions3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_versions2_);
  // checkMissing(versions3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_versions3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(versions3)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_versions3_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(versions3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(versions3)
    Rsh_Fir_reg_versions5_ = Rsh_Fir_reg_versions3_;
    goto L2_;
  }

L0_:;
  // return dx27
  return Rsh_Fir_reg_dx27_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("[", versions3)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_versions3_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args76);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_versions5_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r32 = dyn __5(versions5, ind3)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_versions5_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r32_;
  goto L0_;

L3_:;
  // dx26 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L0(dx26)
  // L0(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
