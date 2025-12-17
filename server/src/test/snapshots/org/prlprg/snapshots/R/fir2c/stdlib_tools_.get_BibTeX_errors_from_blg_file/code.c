#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1019204350_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1019204350_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1019204350_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1019204350_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1019204350_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1019204350_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1019204350_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1019204350
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1019204350_, RHO, CCP);
  // st `.get_BibTeX_errors_from_blg_file` = r
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
SEXP Rsh_Fir_user_function_inner1019204350_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1019204350 dynamic dispatch ([con])

  return Rsh_Fir_user_version_inner1019204350_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1019204350_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1019204350 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1019204350/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_con;  // con
  SEXP Rsh_Fir_reg_readLines;  // readLines
  SEXP Rsh_Fir_reg_con1_;  // con1
  SEXP Rsh_Fir_reg_con2_;  // con2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_lines;  // lines
  SEXP Rsh_Fir_reg_lines1_;  // lines1
  SEXP Rsh_Fir_reg_nchar;  // nchar
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_iconv;  // iconv
  SEXP Rsh_Fir_reg_lines2_;  // lines2
  SEXP Rsh_Fir_reg_lines3_;  // lines3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_lines5_;  // lines5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_startsWith;  // startsWith
  SEXP Rsh_Fir_reg_lines6_;  // lines6
  SEXP Rsh_Fir_reg_lines7_;  // lines7
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_regexpr;  // regexpr
  SEXP Rsh_Fir_reg_lines8_;  // lines8
  SEXP Rsh_Fir_reg_lines9_;  // lines9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_lines11_;  // lines11
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_lines14_;  // lines14
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_lines15_;  // lines15
  SEXP Rsh_Fir_reg_lines16_;  // lines16
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_lines17_;  // lines17
  SEXP Rsh_Fir_reg_lines18_;  // lines18
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_really_has_errors;  // really_has_errors
  SEXP Rsh_Fir_reg_really_has_errors1_;  // really_has_errors1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_pos;  // pos
  SEXP Rsh_Fir_reg_pos1_;  // pos1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_pos2_;  // pos2
  SEXP Rsh_Fir_reg_pos3_;  // pos3
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_pos5_;  // pos5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_lines19_;  // lines19
  SEXP Rsh_Fir_reg_lines20_;  // lines20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_lines22_;  // lines22
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r47_;  // r47

  // Bind parameters
  Rsh_Fir_reg_con = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st con = con
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_con, RHO);
  (void)(Rsh_Fir_reg_con);
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L0_:;
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c then L27() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L27()
    goto L27_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // st ind = r5
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r10 = dyn any(r5)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L2_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r9 = dyn is_na(r7)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L3_:;
  // goto L5()
  // L5()
  goto L5_;

L4_:;
  // st lines = dx3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym3 = ldf any
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base3 = ldf any in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L6_:;
  // c3 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L7(c3) else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L7(c3)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c3_;
    goto L7_;
  } else {
  // L40()
    goto L40_;
  }

L7_:;
  // st really_has_errors = c4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_c4_, RHO);
  (void)(Rsh_Fir_reg_c4_);
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

L8_:;
  // c19 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c19 then L53() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L53()
    goto L53_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // r38 = `!`(r36)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c17 = `||`(c15, c16)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L8(c17)
  // L8(c17)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c17_;
  goto L8_;

L10_:;
  // sym6 = ldf `seq.int`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base6 = ldf `seq.int` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard6 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L12_:;
  // st ind = r43
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // lines19 = ld lines
  Rsh_Fir_reg_lines19_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L65() else D23()
  // L65()
  goto L65_;

L13_:;
  // r45 = `-`(dx7, 3)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r46 = dyn seq_int(3, r45)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L64() else D22()
  // L64()
  goto L64_;

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx9
  return Rsh_Fir_reg_dx9_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   con1 = ld con;
  //   con2 = force? con1;
  //   checkMissing(con2);
  //   return con2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1019204350_, CCP, RHO);
  // r1 = dyn readLines[, warn](p, FALSE)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // st lines = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf any
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf any in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L18_:;
  // r2 = dyn base(<lang `<-`(ind, is.na(nchar(lines, allowNA=TRUE)))>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

L19_:;
  // sym2 = ldf nchar
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf nchar in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L20_:;
  // r4 = dyn base1(<lang nchar(lines, allowNA=TRUE)>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

L21_:;
  // lines = ld lines
  Rsh_Fir_reg_lines = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

L22_:;
  // r6 = dyn base2[, allowNA](<sym lines>, TRUE)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D2_:;
  // deopt 13 [lines]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_lines;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // lines1 = force? lines
  Rsh_Fir_reg_lines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines);
  // checkMissing(lines1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_lines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r8 = dyn nchar(lines1, "chars", TRUE, NA_LGL)
  SEXP Rsh_Fir_array_args21[4];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_lines1_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

D3_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

D4_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r9_;
  goto L1_;

D5_:;
  // deopt 24 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r10_;
  goto L0_;

L27_:;
  // iconv = ldf iconv
  Rsh_Fir_reg_iconv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

D6_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p1 = prom<V +>{
  //   lines2 = ld lines;
  //   lines3 = force? lines2;
  //   checkMissing(lines3);
  //   c1 = `is.object`(lines3);
  //   if c1 then L1() else L2(lines3);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", lines3);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(lines5):
  //   ind = ld ind;
  //   ind1 = force? ind;
  //   __ = ldf `[` in base;
  //   r11 = dyn __(lines5, ind1);
  //   goto L0(r11);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1019204350_1, CCP, RHO);
  // r13 = dyn iconv[, , , sub](p1, "", "", "byte")
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_iconv, 4, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L29() else D7()
  // L29()
  goto L29_;

D7_:;
  // deopt 32 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L29_:;
  // l = ld lines
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c2 then L30() else L31(r13, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L30()
    goto L30_;
  } else {
  // L31(r13, l)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L31_;
  }

L30_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, r13)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args30);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc1 then L32() else L31(r13, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L32()
    goto L32_;
  } else {
  // L31(r13, dr2)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L31_;
  }

L31_:;
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

L32_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L4(r13, dx2)
  // L4(r13, dx2)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

D8_:;
  // deopt 34 [r15, l2, r13, ind2]
  SEXP Rsh_Fir_array_deopt_stack6[4];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_deopt(34, 4, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r18 = dyn ___(l2, r13, ind3)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(r15, r18)
  // L4(r15, r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r18_;
  goto L4_;

L35_:;
  // startsWith = ldf startsWith
  Rsh_Fir_reg_startsWith = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L37() else D9()
  // L37()
  goto L37_;

L36_:;
  // r20 = dyn base3(<lang startsWith(lines, "---")>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(r20)
  // L6(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L6_;

D9_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p2 = prom<V +>{
  //   lines6 = ld lines;
  //   lines7 = force? lines6;
  //   checkMissing(lines7);
  //   return lines7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1019204350_2, CCP, RHO);
  // r23 = dyn startsWith(p2, "---")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_startsWith, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L38() else D10()
  // L38()
  goto L38_;

D10_:;
  // deopt 46 [r23]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r24 = dyn any1(r23)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L39() else D11()
  // L39()
  goto L39_;

D11_:;
  // deopt 48 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L6(r24)
  // L6(r24)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r24_;
  goto L6_;

L40_:;
  // regexpr = ldf regexpr
  Rsh_Fir_reg_regexpr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L41() else D12()
  // L41()
  goto L41_;

D12_:;
  // deopt 50 [c3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // p3 = prom<V +>{
  //   lines8 = ld lines;
  //   lines9 = force? lines8;
  //   checkMissing(lines9);
  //   c6 = `is.object`(lines9);
  //   if c6 then L2() else L3(lines9);
  // L0(dx5):
  //   return dx5;
  // L2():
  //   dr4 = tryDispatchBuiltin.1("[", lines9);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L4() else L3(dr4);
  // L3(lines11):
  //   sym4 = ldf length;
  //   base4 = ldf length in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L5() else L6();
  // L1(lines14, r26):
  //   __1 = ldf `[` in base;
  //   r28 = dyn __1(lines14, r26);
  //   goto L0(r28);
  // L4():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // L5():
  //   lines15 = ld lines;
  //   lines16 = force? lines15;
  //   checkMissing(lines16);
  //   length = ldf length in base;
  //   r27 = dyn length(lines16);
  //   goto L1(lines11, r27);
  // L6():
  //   r25 = dyn base4(<sym lines>);
  //   goto L1(lines11, r25);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1019204350_3, CCP, RHO);
  // r30 = dyn regexpr("There (was|were) ([0123456789]+) error messages?", p3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_regexpr, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L42() else D13()
  // L42()
  goto L42_;

D13_:;
  // deopt 53 [c3, r30]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L42_:;
  // r31 = `>`(r30, -1)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // c8 = `||`(c3, c7)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L7(c8)
  // L7(c8)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c8_;
  goto L7_;

D14_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p4 = prom<V +>{
  //   lines17 = ld lines;
  //   lines18 = force? lines17;
  //   checkMissing(lines18);
  //   return lines18;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1019204350_4, CCP, RHO);
  // r33 = dyn grep("^(Warning|You|\\(There)", p4)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L45() else D15()
  // L45()
  goto L45_;

D15_:;
  // deopt 62 [r33]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L45_:;
  // st pos = r33
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // really_has_errors = ld really_has_errors
  Rsh_Fir_reg_really_has_errors = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L46() else D16()
  // L46()
  goto L46_;

D16_:;
  // deopt 64 [really_has_errors]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_really_has_errors;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L46_:;
  // really_has_errors1 = force? really_has_errors
  Rsh_Fir_reg_really_has_errors1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_really_has_errors);
  // checkMissing(really_has_errors1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_really_has_errors1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r34 = `!`(really_has_errors1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_really_has_errors1_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c10 then L8(c10) else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L8(c10)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c10_;
    goto L8_;
  } else {
  // L47()
    goto L47_;
  }

L47_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard5 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // pos = ld pos
  Rsh_Fir_reg_pos = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L50() else D17()
  // L50()
  goto L50_;

L49_:;
  // r35 = dyn base5(<sym pos>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L9(c10, r35)
  // L9(c10, r35)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L9_;

D17_:;
  // deopt 69 [c10, pos]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_pos;
  Rsh_Fir_deopt(69, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L50_:;
  // pos1 = force? pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos);
  // checkMissing(pos1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_pos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r37 = dyn length1(pos1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L51() else D18()
  // L51()
  goto L51_;

D18_:;
  // deopt 72 [c10, r37]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L9(c10, r37)
  // L9(c10, r37)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L9_;

L53_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L54() else D19()
  // L54()
  goto L54_;

D19_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // r39 = dyn character()
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L55() else D20()
  // L55()
  goto L55_;

D20_:;
  // deopt 77 [r39]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L55_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r39
  return Rsh_Fir_reg_r39_;

L58_:;
  // pos2 = ld pos
  Rsh_Fir_reg_pos2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L60() else D21()
  // L60()
  goto L60_;

L59_:;
  // r42 = dyn base6[from, `length.out`](3, <lang `-`(`[`(pos, 1), 3)>)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L12(r42)
  // L12(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L12_;

D21_:;
  // deopt 85 [pos2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_pos2_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L60_:;
  // pos3 = force? pos2
  Rsh_Fir_reg_pos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos2_);
  // checkMissing(pos3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_pos3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(pos3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c20 then L61() else L62(pos3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L61()
    goto L61_;
  } else {
  // L62(pos3)
    Rsh_Fir_reg_pos5_ = Rsh_Fir_reg_pos3_;
    goto L62_;
  }

L61_:;
  // dr6 = tryDispatchBuiltin.1("[", pos3)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc3 then L63() else L62(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L63()
    goto L63_;
  } else {
  // L62(dr6)
    Rsh_Fir_reg_pos5_ = Rsh_Fir_reg_dr6_;
    goto L62_;
  }

L62_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r44 = dyn __2(pos5, 1)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_pos5_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L13(r44)
  // L13(r44)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r44_;
  goto L13_;

L63_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L13(dx6)
  // L13(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L13_;

D22_:;
  // deopt 94 [r46]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L12(r46)
  // L12(r46)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r46_;
  goto L12_;

D23_:;
  // deopt 96 [lines19]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_lines19_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L65_:;
  // lines20 = force? lines19
  Rsh_Fir_reg_lines20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines19_);
  // checkMissing(lines20)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_lines20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(lines20)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_lines20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c21 then L66() else L67(lines20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L66()
    goto L66_;
  } else {
  // L67(lines20)
    Rsh_Fir_reg_lines22_ = Rsh_Fir_reg_lines20_;
    goto L67_;
  }

L66_:;
  // dr8 = tryDispatchBuiltin.1("[", lines20)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_lines20_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc4 then L68() else L67(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L68()
    goto L68_;
  } else {
  // L67(dr8)
    Rsh_Fir_reg_lines22_ = Rsh_Fir_reg_dr8_;
    goto L67_;
  }

L67_:;
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L69() else D24()
  // L69()
  goto L69_;

L68_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L14(dx8)
  // L14(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L14_;

D24_:;
  // deopt 98 [lines22, ind4]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_lines22_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L69_:;
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r47 = dyn __3(lines22, ind5)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_lines22_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_ind5_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L14(r47)
  // L14(r47)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r47_;
  goto L14_;
}
SEXP Rsh_Fir_user_promise_inner1019204350_(SEXP CCP, SEXP RHO) {
  // con1 = ld con
  Rsh_Fir_reg_con1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // con2 = force? con1
  Rsh_Fir_reg_con2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con1_);
  // checkMissing(con2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_con2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return con2
  return Rsh_Fir_reg_con2_;
}
SEXP Rsh_Fir_user_promise_inner1019204350_1(SEXP CCP, SEXP RHO) {
  // lines2 = ld lines
  Rsh_Fir_reg_lines2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lines3 = force? lines2
  Rsh_Fir_reg_lines3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines2_);
  // checkMissing(lines3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_lines3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(lines3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_lines3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(lines3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(lines3)
    Rsh_Fir_reg_lines5_ = Rsh_Fir_reg_lines3_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", lines3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_lines3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_lines5_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r11 = dyn __(lines5, ind1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_lines5_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1019204350_2(SEXP CCP, SEXP RHO) {
  // lines6 = ld lines
  Rsh_Fir_reg_lines6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lines7 = force? lines6
  Rsh_Fir_reg_lines7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines6_);
  // checkMissing(lines7)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_lines7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return lines7
  return Rsh_Fir_reg_lines7_;
}
SEXP Rsh_Fir_user_promise_inner1019204350_3(SEXP CCP, SEXP RHO) {
  // lines8 = ld lines
  Rsh_Fir_reg_lines8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lines9 = force? lines8
  Rsh_Fir_reg_lines9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines8_);
  // checkMissing(lines9)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_lines9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(lines9)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_lines9_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c6 then L2() else L3(lines9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L2()
    goto L2_;
  } else {
  // L3(lines9)
    Rsh_Fir_reg_lines11_ = Rsh_Fir_reg_lines9_;
    goto L3_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r28 = dyn __1(lines14, r26)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_lines14_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // dr4 = tryDispatchBuiltin.1("[", lines9)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_lines9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc2 then L4() else L3(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr4)
    Rsh_Fir_reg_lines11_ = Rsh_Fir_reg_dr4_;
    goto L3_;
  }

L3_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard4 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;

L5_:;
  // lines15 = ld lines
  Rsh_Fir_reg_lines15_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lines16 = force? lines15
  Rsh_Fir_reg_lines16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines15_);
  // checkMissing(lines16)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_lines16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r27 = dyn length(lines16)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_lines16_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(lines11, r27)
  // L1(lines11, r27)
  Rsh_Fir_reg_lines14_ = Rsh_Fir_reg_lines11_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L1_;

L6_:;
  // r25 = dyn base4(<sym lines>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L1(lines11, r25)
  // L1(lines11, r25)
  Rsh_Fir_reg_lines14_ = Rsh_Fir_reg_lines11_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1019204350_4(SEXP CCP, SEXP RHO) {
  // lines17 = ld lines
  Rsh_Fir_reg_lines17_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lines18 = force? lines17
  Rsh_Fir_reg_lines18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines17_);
  // checkMissing(lines18)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_lines18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return lines18
  return Rsh_Fir_reg_lines18_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
