#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3672137968_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3672137968_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3672137968_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3672137968_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3672137968_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3672137968_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3672137968_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3672137968_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner3672137968
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3672137968_, RHO, CCP);
  // st `open.srcfilecopy` = r
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
SEXP Rsh_Fir_user_function_inner3672137968_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3672137968 dynamic dispatch ([con, line, `...`])

  return Rsh_Fir_user_version_inner3672137968_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3672137968_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3672137968 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3672137968/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_con;  // con
  SEXP Rsh_Fir_reg_line;  // line
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_con1_;  // con1
  SEXP Rsh_Fir_reg_con2_;  // con2
  SEXP Rsh_Fir_reg_srcfile;  // srcfile
  SEXP Rsh_Fir_reg_srcfile1_;  // srcfile1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_srcfile3_;  // srcfile3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_oldline;  // oldline
  SEXP Rsh_Fir_reg_oldline1_;  // oldline1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_oldline2_;  // oldline2
  SEXP Rsh_Fir_reg_oldline3_;  // oldline3
  SEXP Rsh_Fir_reg_line1_;  // line1
  SEXP Rsh_Fir_reg_line2_;  // line2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_close;  // close
  SEXP Rsh_Fir_reg_srcfile4_;  // srcfile4
  SEXP Rsh_Fir_reg_srcfile5_;  // srcfile5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_srcfile6_;  // srcfile6
  SEXP Rsh_Fir_reg_srcfile7_;  // srcfile7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_srcfile9_;  // srcfile9
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_conn;  // conn
  SEXP Rsh_Fir_reg_conn1_;  // conn1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_textConnection;  // textConnection
  SEXP Rsh_Fir_reg_srcfile10_;  // srcfile10
  SEXP Rsh_Fir_reg_srcfile11_;  // srcfile11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_srcfile13_;  // srcfile13
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_isOpen;  // isOpen
  SEXP Rsh_Fir_reg_conn2_;  // conn2
  SEXP Rsh_Fir_reg_conn3_;  // conn3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_open;  // open
  SEXP Rsh_Fir_reg_conn4_;  // conn4
  SEXP Rsh_Fir_reg_conn5_;  // conn5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_oldline4_;  // oldline4
  SEXP Rsh_Fir_reg_oldline5_;  // oldline5
  SEXP Rsh_Fir_reg_line3_;  // line3
  SEXP Rsh_Fir_reg_line4_;  // line4
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_readLines;  // readLines
  SEXP Rsh_Fir_reg_conn6_;  // conn6
  SEXP Rsh_Fir_reg_conn7_;  // conn7
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_line5_;  // line5
  SEXP Rsh_Fir_reg_line6_;  // line6
  SEXP Rsh_Fir_reg_oldline6_;  // oldline6
  SEXP Rsh_Fir_reg_oldline7_;  // oldline7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_line7_;  // line7
  SEXP Rsh_Fir_reg_line8_;  // line8
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_line10_;  // line10
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_line12_;  // line12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_conn8_;  // conn8
  SEXP Rsh_Fir_reg_conn9_;  // conn9
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r43_;  // r43

  // Bind parameters
  Rsh_Fir_reg_con = PARAMS[0];
  Rsh_Fir_reg_line = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st con = con
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_con, RHO);
  (void)(Rsh_Fir_reg_con);
  // st line = line
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_line, RHO);
  (void)(Rsh_Fir_reg_line);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // con1 = ld con
  Rsh_Fir_reg_con1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L0_:;
  // r3 = `!`(r2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L20() else L1(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L20()
    goto L20_;
  } else {
  // L1(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L1_;
  }

L1_:;
  // c8 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c8 then L24() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L24()
    goto L24_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // srcfile6 = ld srcfile
  Rsh_Fir_reg_srcfile6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

L4_:;
  // c11 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c11 then L36() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L36()
    goto L36_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // isOpen = ldf isOpen
  Rsh_Fir_reg_isOpen = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

L6_:;
  // oldline4 = ld oldline
  Rsh_Fir_reg_oldline4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

L7_:;
  // goto L6()
  // L6()
  goto L6_;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym2 = ldf invisible
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf invisible in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;

D0_:;
  // deopt 0 [con1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_con1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // con2 = force? con1
  Rsh_Fir_reg_con2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con1_);
  // checkMissing(con2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_con2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // st srcfile = con2
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_con2_, RHO);
  (void)(Rsh_Fir_reg_con2_);
  // srcfile = ld srcfile
  Rsh_Fir_reg_srcfile = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 3 [srcfile]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_srcfile;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // srcfile1 = force? srcfile
  Rsh_Fir_reg_srcfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile);
  // checkMissing(srcfile1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_srcfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `is.object`(srcfile1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_srcfile1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L14() else L15(srcfile1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L15(srcfile1)
    Rsh_Fir_reg_srcfile3_ = Rsh_Fir_reg_srcfile1_;
    goto L15_;
  }

L13_:;
  // st oldline = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L14_:;
  // dr = tryDispatchBuiltin.1("$", srcfile1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_srcfile1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc then L16() else L15(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L16()
    goto L16_;
  } else {
  // L15(dr)
    Rsh_Fir_reg_srcfile3_ = Rsh_Fir_reg_dr;
    goto L15_;
  }

L15_:;
  // r = `$`(srcfile3, <sym line>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_srcfile3_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L13(r)
  // L13(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L13_;

L16_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L13(dx)
  // L13(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L13_;

L17_:;
  // oldline = ld oldline
  Rsh_Fir_reg_oldline = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L18_:;
  // r1 = dyn base(<sym oldline>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D2_:;
  // deopt 8 [oldline]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_oldline;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // oldline1 = force? oldline
  Rsh_Fir_reg_oldline1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oldline);
  // checkMissing(oldline1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_oldline1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c1 = `==`(oldline1, NULL)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_oldline1_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L0(c1)
  // L0(c1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_c1_;
  goto L0_;

L20_:;
  // oldline2 = ld oldline
  Rsh_Fir_reg_oldline2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

D3_:;
  // deopt 12 [c2, oldline2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_oldline2_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L21_:;
  // oldline3 = force? oldline2
  Rsh_Fir_reg_oldline3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oldline2_);
  // checkMissing(oldline3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_oldline3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // line1 = ld line
  Rsh_Fir_reg_line1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

D4_:;
  // deopt 13 [c2, oldline3, line1]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_oldline3_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_line1_;
  Rsh_Fir_deopt(13, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // line2 = force? line1
  Rsh_Fir_reg_line2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line1_);
  // checkMissing(line2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_line2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r4 = `>`(oldline3, line2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_oldline3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_line2_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c6 = `&&`(c2, c5)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L1(c6)
  // L1(c6)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c6_;
  goto L1_;

L24_:;
  // close = ldf close
  Rsh_Fir_reg_close = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

D5_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p = prom<V +>{
  //   srcfile4 = ld srcfile;
  //   srcfile5 = force? srcfile4;
  //   checkMissing(srcfile5);
  //   return srcfile5;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672137968_, CCP, RHO);
  // r6 = dyn close(p)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_close, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

D6_:;
  // deopt 20 [r6]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L3()
  // L3()
  goto L3_;

D7_:;
  // deopt 23 [srcfile6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_srcfile6_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // srcfile7 = force? srcfile6
  Rsh_Fir_reg_srcfile7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile6_);
  // checkMissing(srcfile7)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_srcfile7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(srcfile7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_srcfile7_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c9 then L30() else L31(srcfile7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L30()
    goto L30_;
  } else {
  // L31(srcfile7)
    Rsh_Fir_reg_srcfile9_ = Rsh_Fir_reg_srcfile7_;
    goto L31_;
  }

L29_:;
  // st conn = dx3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L30_:;
  // dr2 = tryDispatchBuiltin.1("$", srcfile7)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_srcfile7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc1 then L32() else L31(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr2)
    Rsh_Fir_reg_srcfile9_ = Rsh_Fir_reg_dr2_;
    goto L31_;
  }

L31_:;
  // r8 = `$`(srcfile9, <sym conn>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_srcfile9_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L29(r8)
  // L29(r8)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r8_;
  goto L29_;

L32_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L29(dx2)
  // L29(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L29_;

L33_:;
  // conn = ld conn
  Rsh_Fir_reg_conn = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

L34_:;
  // r9 = dyn base1(<sym conn>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D8_:;
  // deopt 28 [conn]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_conn;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // conn1 = force? conn
  Rsh_Fir_reg_conn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_conn);
  // checkMissing(conn1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_conn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c10 = `==`(conn1, NULL)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_conn1_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L4(c10)
  // L4(c10)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c10_;
  goto L4_;

L36_:;
  // textConnection = ldf textConnection
  Rsh_Fir_reg_textConnection = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L37() else D9()
  // L37()
  goto L37_;

D9_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p1 = prom<V +>{
  //   srcfile10 = ld srcfile;
  //   srcfile11 = force? srcfile10;
  //   checkMissing(srcfile11);
  //   c12 = `is.object`(srcfile11);
  //   if c12 then L1() else L2(srcfile11);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", srcfile11);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(srcfile13):
  //   r11 = `$`(srcfile13, <sym lines>);
  //   goto L0(r11);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672137968_1, CCP, RHO);
  // r13 = dyn textConnection[, open](p1, "r")
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_textConnection, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L38() else D10()
  // L38()
  goto L38_;

D10_:;
  // deopt 36 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // st conn = r13
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // l = ld srcfile
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c13 = `is.object`(l)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c13 then L40() else L41(r13, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L40()
    goto L40_;
  } else {
  // L41(r13, l)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L41_;
  }

L39_:;
  // st srcfile = dx7
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // l3 = ld srcfile
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c14 = `is.object`(l3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c14 then L44() else L45(1, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L44()
    goto L44_;
  } else {
  // L45(1, l3)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L45_;
  }

L40_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l, r13)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args42);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc3 then L42() else L41(r13, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L42()
    goto L42_;
  } else {
  // L41(r13, dr6)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L41_;
  }

L41_:;
  // r18 = `$<-`(l2, <sym conn>, r13)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args44[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L39(r18)
  // L39(r18)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r18_;
  goto L39_;

L42_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L39(dx6)
  // L39(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L39_;

L43_:;
  // st srcfile = dx9
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // st oldline = 1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_const(CCP, 17), RHO);
  (void)(Rsh_const(CCP, 17));
  // goto L6()
  // L6()
  goto L6_;

L44_:;
  // dr8 = tryDispatchBuiltin.0("$<-", l3, 1)
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args46);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc4 then L46() else L45(1, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L46()
    goto L46_;
  } else {
  // L45(1, dr8)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr8_;
    goto L45_;
  }

L45_:;
  // r23 = `$<-`(l5, <sym line>, 1)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L43(r23)
  // L43(r23)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r23_;
  goto L43_;

L46_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L43(dx8)
  // L43(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L43_;

D11_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p2 = prom<V +>{
  //   conn2 = ld conn;
  //   conn3 = force? conn2;
  //   checkMissing(conn3);
  //   return conn3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672137968_2, CCP, RHO);
  // r26 = dyn isOpen(p2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isOpen, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

D12_:;
  // deopt 52 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // r27 = `!`(r26)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c15 then L50() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L50()
    goto L50_;
  } else {
  // L7()
    goto L7_;
  }

L50_:;
  // open = ldf open
  Rsh_Fir_reg_open = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L51() else D13()
  // L51()
  goto L51_;

D13_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p3 = prom<V +>{
  //   conn4 = ld conn;
  //   conn5 = force? conn4;
  //   checkMissing(conn5);
  //   return conn5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672137968_3, CCP, RHO);
  // r29 = dyn open[, open](p3, "r")
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_open, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L52() else D14()
  // L52()
  goto L52_;

D14_:;
  // deopt 59 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L52_:;
  // l6 = ld srcfile
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c16 = `is.object`(l6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c16 then L54() else L55(1, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L54()
    goto L54_;
  } else {
  // L55(1, l6)
    Rsh_Fir_reg_r31_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L55_;
  }

L53_:;
  // st srcfile = dx11
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // st oldline = 1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_const(CCP, 17), RHO);
  (void)(Rsh_const(CCP, 17));
  // goto L6()
  // L6()
  goto L6_;

L54_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l6, 1)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args57);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc5 then L56() else L55(1, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L56()
    goto L56_;
  } else {
  // L55(1, dr10)
    Rsh_Fir_reg_r31_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr10_;
    goto L55_;
  }

L55_:;
  // r34 = `$<-`(l8, <sym line>, 1)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L53(r34)
  // L53(r34)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r34_;
  goto L53_;

L56_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L53(dx10)
  // L53(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L53_;

D15_:;
  // deopt 70 [oldline4]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_oldline4_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L58_:;
  // oldline5 = force? oldline4
  Rsh_Fir_reg_oldline5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oldline4_);
  // checkMissing(oldline5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_oldline5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // line3 = ld line
  Rsh_Fir_reg_line3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

D16_:;
  // deopt 71 [oldline5, line3]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_oldline5_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_line3_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L59_:;
  // line4 = force? line3
  Rsh_Fir_reg_line4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line3_);
  // checkMissing(line4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_line4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // r35 = `<`(oldline5, line4)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_oldline5_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_line4_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c17 then L60() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L60()
    goto L60_;
  } else {
  // L8()
    goto L8_;
  }

L60_:;
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L61() else D17()
  // L61()
  goto L61_;

D17_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p4 = prom<V +>{
  //   conn6 = ld conn;
  //   conn7 = force? conn6;
  //   checkMissing(conn7);
  //   return conn7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672137968_4, CCP, RHO);
  // p5 = prom<V +>{
  //   line5 = ld line;
  //   line6 = force? line5;
  //   checkMissing(line6);
  //   oldline6 = ld oldline;
  //   oldline7 = force? oldline6;
  //   checkMissing(oldline7);
  //   r37 = `-`(line6, oldline7);
  //   return r37;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672137968_5, CCP, RHO);
  // r39 = dyn readLines[, , warn](p4, p5, FALSE)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 3, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L62() else D18()
  // L62()
  goto L62_;

D18_:;
  // deopt 80 [r39]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L62_:;
  // line7 = ld line
  Rsh_Fir_reg_line7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L63() else D19()
  // L63()
  goto L63_;

D19_:;
  // deopt 81 [line7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_line7_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L63_:;
  // line8 = force? line7
  Rsh_Fir_reg_line8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line7_);
  // checkMissing(line8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_line8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // l9 = ld srcfile
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c18 = `is.object`(l9)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c18 then L65() else L66(line8, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L65()
    goto L65_;
  } else {
  // L66(line8, l9)
    Rsh_Fir_reg_line10_ = Rsh_Fir_reg_line8_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L66_;
  }

L64_:;
  // st srcfile = dx13
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L9()
  // L9()
  goto L9_;

L65_:;
  // dr12 = tryDispatchBuiltin.0("$<-", l9, line8)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_line8_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args72);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc6 then L67() else L66(line8, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L67()
    goto L67_;
  } else {
  // L66(line8, dr12)
    Rsh_Fir_reg_line10_ = Rsh_Fir_reg_line8_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr12_;
    goto L66_;
  }

L66_:;
  // r40 = `$<-`(l11, <sym line>, line8)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args74[2] = Rsh_Fir_reg_line8_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L64(line10, r40)
  // L64(line10, r40)
  Rsh_Fir_reg_line12_ = Rsh_Fir_reg_line10_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r40_;
  goto L64_;

L67_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L64(line8, dx12)
  // L64(line8, dx12)
  Rsh_Fir_reg_line12_ = Rsh_Fir_reg_line8_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L64_;

L69_:;
  // conn8 = ld conn
  Rsh_Fir_reg_conn8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L71() else D20()
  // L71()
  goto L71_;

L70_:;
  // r41 = dyn base2(<sym conn>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L10(r41)
  // L10(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L10_;

D20_:;
  // deopt 90 [conn8]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_conn8_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L71_:;
  // conn9 = force? conn8
  Rsh_Fir_reg_conn9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_conn8_);
  // checkMissing(conn9)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_conn9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r43 = dyn invisible(conn9)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_conn9_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L72() else D21()
  // L72()
  goto L72_;

D21_:;
  // deopt 93 [r43]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L10(r43)
  // L10(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_inner3672137968_(SEXP CCP, SEXP RHO) {
  // srcfile4 = ld srcfile
  Rsh_Fir_reg_srcfile4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // srcfile5 = force? srcfile4
  Rsh_Fir_reg_srcfile5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile4_);
  // checkMissing(srcfile5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_srcfile5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return srcfile5
  return Rsh_Fir_reg_srcfile5_;
}
SEXP Rsh_Fir_user_promise_inner3672137968_1(SEXP CCP, SEXP RHO) {
  // srcfile10 = ld srcfile
  Rsh_Fir_reg_srcfile10_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // srcfile11 = force? srcfile10
  Rsh_Fir_reg_srcfile11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile10_);
  // checkMissing(srcfile11)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_srcfile11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(srcfile11)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_srcfile11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(srcfile11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(srcfile11)
    Rsh_Fir_reg_srcfile13_ = Rsh_Fir_reg_srcfile11_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", srcfile11)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_srcfile11_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_srcfile13_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r11 = `$`(srcfile13, <sym lines>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_srcfile13_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r11_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3672137968_2(SEXP CCP, SEXP RHO) {
  // conn2 = ld conn
  Rsh_Fir_reg_conn2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // conn3 = force? conn2
  Rsh_Fir_reg_conn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_conn2_);
  // checkMissing(conn3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_conn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return conn3
  return Rsh_Fir_reg_conn3_;
}
SEXP Rsh_Fir_user_promise_inner3672137968_3(SEXP CCP, SEXP RHO) {
  // conn4 = ld conn
  Rsh_Fir_reg_conn4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // conn5 = force? conn4
  Rsh_Fir_reg_conn5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_conn4_);
  // checkMissing(conn5)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_conn5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return conn5
  return Rsh_Fir_reg_conn5_;
}
SEXP Rsh_Fir_user_promise_inner3672137968_4(SEXP CCP, SEXP RHO) {
  // conn6 = ld conn
  Rsh_Fir_reg_conn6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // conn7 = force? conn6
  Rsh_Fir_reg_conn7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_conn6_);
  // checkMissing(conn7)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_conn7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return conn7
  return Rsh_Fir_reg_conn7_;
}
SEXP Rsh_Fir_user_promise_inner3672137968_5(SEXP CCP, SEXP RHO) {
  // line5 = ld line
  Rsh_Fir_reg_line5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // line6 = force? line5
  Rsh_Fir_reg_line6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line5_);
  // checkMissing(line6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_line6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // oldline6 = ld oldline
  Rsh_Fir_reg_oldline6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // oldline7 = force? oldline6
  Rsh_Fir_reg_oldline7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oldline6_);
  // checkMissing(oldline7)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_oldline7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r37 = `-`(line6, oldline7)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_line6_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_oldline7_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
