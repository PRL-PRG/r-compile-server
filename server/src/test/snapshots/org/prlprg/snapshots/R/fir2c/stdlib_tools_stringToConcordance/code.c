#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1236783023_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner1236783023
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1236783023_, RHO, CCP);
  // st stringToConcordance = r
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
SEXP Rsh_Fir_user_function_inner1236783023_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1236783023 dynamic dispatch ([s])

  return Rsh_Fir_user_version_inner1236783023_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1236783023_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1236783023 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1236783023/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_strsplit;  // strsplit
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_fixWindowsConcordancePaths;  // fixWindowsConcordancePaths
  SEXP Rsh_Fir_reg_split;  // split
  SEXP Rsh_Fir_reg_split1_;  // split1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_split2_;  // split2
  SEXP Rsh_Fir_reg_split3_;  // split3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_split5_;  // split5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_split6_;  // split6
  SEXP Rsh_Fir_reg_split7_;  // split7
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_split9_;  // split9
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_split10_;  // split10
  SEXP Rsh_Fir_reg_split11_;  // split11
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_split12_;  // split12
  SEXP Rsh_Fir_reg_split13_;  // split13
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_split15_;  // split15
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_strsplit1_;  // strsplit1
  SEXP Rsh_Fir_reg_split16_;  // split16
  SEXP Rsh_Fir_reg_split17_;  // split17
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_split19_;  // split19
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_vi;  // vi
  SEXP Rsh_Fir_reg_vi1_;  // vi1
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_values;  // values
  SEXP Rsh_Fir_reg_values1_;  // values1
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_values3_;  // values3
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_values4_;  // values4
  SEXP Rsh_Fir_reg_values5_;  // values5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_values7_;  // values7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_structure;  // structure
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_rledata;  // rledata
  SEXP Rsh_Fir_reg_rledata1_;  // rledata1
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_rledata4_;  // rledata4
  SEXP Rsh_Fir_reg_rledata5_;  // rledata5
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_inverse_rle;  // inverse_rle
  SEXP Rsh_Fir_reg_rle;  // rle
  SEXP Rsh_Fir_reg_rle1_;  // rle1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_firstline;  // firstline
  SEXP Rsh_Fir_reg_firstline1_;  // firstline1
  SEXP Rsh_Fir_reg_firstline2_;  // firstline2
  SEXP Rsh_Fir_reg_firstline3_;  // firstline3
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_firstline6_;  // firstline6
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_diffs;  // diffs
  SEXP Rsh_Fir_reg_diffs1_;  // diffs1
  SEXP Rsh_Fir_reg_cumsum;  // cumsum
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_structure1_;  // structure1
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_ofs;  // ofs
  SEXP Rsh_Fir_reg_ofs1_;  // ofs1
  SEXP Rsh_Fir_reg_srcFile;  // srcFile
  SEXP Rsh_Fir_reg_srcFile1_;  // srcFile1
  SEXP Rsh_Fir_reg_srcLines;  // srcLines
  SEXP Rsh_Fir_reg_srcLines1_;  // srcLines1
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r56_;  // r56

  // Bind parameters
  Rsh_Fir_reg_s = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st s = s
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_s, RHO);
  (void)(Rsh_Fir_reg_s);
  // strsplit = ldf strsplit
  Rsh_Fir_reg_strsplit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L0_:;
  // st split = dx1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // split2 = ld split
  Rsh_Fir_reg_split2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L3_:;
  // st targetfile = dx5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // split6 = ld split
  Rsh_Fir_reg_split6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L4_:;
  // st srcFile = dx7
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L5_:;
  // r15 = `==`(r13, 4.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c5 then L40() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L40()
    goto L40_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // sym1 = ldf `as.integer`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `as.integer` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L7_:;
  // sym2 = ldf `as.integer`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf `as.integer` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L8_:;
  // st ofs = r18
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // st vi = 5.0
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // goto L7()
  // L7()
  goto L7_;

L9_:;
  // st values = r24
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // values = ld values
  Rsh_Fir_reg_values = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L55() else D15()
  // L55()
  goto L55_;

L10_:;
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r31 = dyn as_integer1(dx13)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

L11_:;
  // st firstline = dx15
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

L12_:;
  // st srcLines = r46
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // structure1 = ldf structure
  Rsh_Fir_reg_structure1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L74() else D27()
  // L74()
  goto L74_;

L13_:;
  // r50 = `+`(firstline6, r48)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_firstline6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r51 = dyn c13(firstline1, r50)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_firstline1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L73() else D26()
  // L73()
  goto L73_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   s1 = ld s;
  //   s2 = force? s1;
  //   checkMissing(s2);
  //   return s2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_, CCP, RHO);
  // r1 = dyn strsplit(p, ":")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strsplit, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // c = `is.object`(r1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L16() else L17(r1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L16()
    goto L16_;
  } else {
  // L17(r1)
    Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r1_;
    goto L17_;
  }

L16_:;
  // dr = tryDispatchBuiltin.1("[[", r1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr)
    Rsh_Fir_reg_r3_ = Rsh_Fir_reg_dr;
    goto L17_;
  }

L17_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r4 = dyn __(r3, 1.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D2_:;
  // deopt 9 [_Platform]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L22(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L22(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L22_;
  }

L20_:;
  // r6 = `==`(dx3, "windows")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c2 then L24() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L24()
    goto L24_;
  } else {
  // L1()
    goto L1_;
  }

L21_:;
  // dr2 = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc1 then L23() else L22(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L23()
    goto L23_;
  } else {
  // L22(dr2)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr2_;
    goto L22_;
  }

L22_:;
  // r5 = `$`(_Platform3, <sym OS.type>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L20(r5)
  // L20(r5)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r5_;
  goto L20_;

L23_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L20(dx2)
  // L20(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L20_;

L24_:;
  // fixWindowsConcordancePaths = ldf fixWindowsConcordancePaths
  Rsh_Fir_reg_fixWindowsConcordancePaths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

D3_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p1 = prom<V +>{
  //   split = ld split;
  //   split1 = force? split;
  //   checkMissing(split1);
  //   return split1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_1, CCP, RHO);
  // r8 = dyn fixWindowsConcordancePaths(p1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fixWindowsConcordancePaths, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

D4_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // st split = r8
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L2()
  // L2()
  goto L2_;

D5_:;
  // deopt 21 [split2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_split2_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // split3 = force? split2
  Rsh_Fir_reg_split3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split2_);
  // checkMissing(split3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_split3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(split3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_split3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c3 then L29() else L30(split3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L30(split3)
    Rsh_Fir_reg_split5_ = Rsh_Fir_reg_split3_;
    goto L30_;
  }

L29_:;
  // dr4 = tryDispatchBuiltin.1("[", split3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_split3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc2 then L31() else L30(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr4)
    Rsh_Fir_reg_split5_ = Rsh_Fir_reg_dr4_;
    goto L30_;
  }

L30_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r10 = dyn __1(split5, 2.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_split5_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r10_;
  goto L3_;

L31_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L3(dx4)
  // L3(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L3_;

D6_:;
  // deopt 27 [split6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_split6_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L32_:;
  // split7 = force? split6
  Rsh_Fir_reg_split7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split6_);
  // checkMissing(split7)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_split7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(split7)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_split7_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c4 then L33() else L34(split7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L33()
    goto L33_;
  } else {
  // L34(split7)
    Rsh_Fir_reg_split9_ = Rsh_Fir_reg_split7_;
    goto L34_;
  }

L33_:;
  // dr6 = tryDispatchBuiltin.1("[", split7)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_split7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc3 then L35() else L34(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr6)
    Rsh_Fir_reg_split9_ = Rsh_Fir_reg_dr6_;
    goto L34_;
  }

L34_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r11 = dyn __2(split9, 3.0)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_split9_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r11_;
  goto L4_;

L35_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L4(dx6)
  // L4(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L4_;

L36_:;
  // split10 = ld split
  Rsh_Fir_reg_split10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

L37_:;
  // r12 = dyn base(<sym split>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D7_:;
  // deopt 35 [split10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_split10_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L38_:;
  // split11 = force? split10
  Rsh_Fir_reg_split11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split10_);
  // checkMissing(split11)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_split11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r14 = dyn length(split11)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_split11_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

D8_:;
  // deopt 38 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L5_;

L40_:;
  // st ofs = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_const(CCP, 31), RHO);
  (void)(Rsh_const(CCP, 31));
  // st vi = 4.0
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 8), RHO);
  (void)(Rsh_const(CCP, 8));
  // goto L7()
  // L7()
  goto L7_;

L42_:;
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

L43_:;
  // r17 = dyn base1(<lang sub("^ofs ([0-9]+)", "\\1", `[`(split, 4.0))>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L8_;

D9_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p2 = prom<V +>{
  //   split12 = ld split;
  //   split13 = force? split12;
  //   checkMissing(split13);
  //   c6 = `is.object`(split13);
  //   if c6 then L1() else L2(split13);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", split13);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(split15):
  //   __3 = ldf `[` in base;
  //   r19 = dyn __3(split15, 4.0);
  //   goto L0(r19);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_2, CCP, RHO);
  // r21 = dyn sub("^ofs ([0-9]+)", "\\1", p2)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L45() else D10()
  // L45()
  goto L45_;

D10_:;
  // deopt 54 [r21]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L45_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r22 = dyn as_integer(r21)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L46() else D11()
  // L46()
  goto L46_;

D11_:;
  // deopt 56 [r22]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r22_;
  goto L8_;

L47_:;
  // strsplit1 = ldf strsplit
  Rsh_Fir_reg_strsplit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

L48_:;
  // r23 = dyn base2(<lang `[[`(strsplit(`[`(split, vi), " "), 1.0)>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L9_;

D12_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p3 = prom<V +>{
  //   split16 = ld split;
  //   split17 = force? split16;
  //   checkMissing(split17);
  //   c7 = `is.object`(split17);
  //   if c7 then L1() else L2(split17);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", split17);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(split19):
  //   vi = ld vi;
  //   vi1 = force? vi;
  //   __4 = ldf `[` in base;
  //   r25 = dyn __4(split19, vi1);
  //   goto L0(r25);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_3, CCP, RHO);
  // r27 = dyn strsplit1(p3, " ")
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strsplit1_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

D13_:;
  // deopt 67 [r27]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L50_:;
  // c8 = `is.object`(r27)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c8 then L51() else L52(r27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L51()
    goto L51_;
  } else {
  // L52(r27)
    Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r27_;
    goto L52_;
  }

L51_:;
  // dr12 = tryDispatchBuiltin.1("[[", r27)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc6 then L53() else L52(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr12)
    Rsh_Fir_reg_r29_ = Rsh_Fir_reg_dr12_;
    goto L52_;
  }

L52_:;
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r30 = dyn __5(r29, 1.0)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(r30)
  // L10(r30)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r30_;
  goto L10_;

L53_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L10(dx12)
  // L10(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L10_;

D14_:;
  // deopt 72 [r31]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L9(r31)
  // L9(r31)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r31_;
  goto L9_;

D15_:;
  // deopt 74 [values]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_values;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L55_:;
  // values1 = force? values
  Rsh_Fir_reg_values1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values);
  // checkMissing(values1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_values1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(values1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_values1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c9 then L56() else L57(values1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L56()
    goto L56_;
  } else {
  // L57(values1)
    Rsh_Fir_reg_values3_ = Rsh_Fir_reg_values1_;
    goto L57_;
  }

L56_:;
  // dr14 = tryDispatchBuiltin.1("[", values1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_values1_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc7 then L58() else L57(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L58()
    goto L58_;
  } else {
  // L57(dr14)
    Rsh_Fir_reg_values3_ = Rsh_Fir_reg_dr14_;
    goto L57_;
  }

L57_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r32 = dyn __6(values3, 1.0)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_values3_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L11(r32)
  // L11(r32)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r32_;
  goto L11_;

L58_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L11(dx14)
  // L11(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L11_;

D16_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // p4 = prom<V +>{
  //   values4 = ld values;
  //   values5 = force? values4;
  //   checkMissing(values5);
  //   c10 = `is.object`(values5);
  //   if c10 then L1() else L2(values5);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", values5);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(values7):
  //   __7 = ldf `[` in base;
  //   r33 = dyn __7(values7, -1.0);
  //   goto L0(r33);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_4, CCP, RHO);
  // r35 = dyn matrix[, nrow](p4, 2.0)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

D17_:;
  // deopt 85 [r35]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L60_:;
  // st rledata = r35
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

D18_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p5 = prom<V +>{
  //   sym3 = ldf list;
  //   base3 = ldf list in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L3() else L4();
  // L0(r37):
  //   return r37;
  // L3():
  //   rledata = ld rledata;
  //   rledata1 = force? rledata;
  //   checkMissing(rledata1);
  //   c11 = `is.object`(rledata1);
  //   if c11 then L5() else L6();
  // L4():
  //   r36 = dyn base3[lengths, values](<lang `[`(rledata, 1.0, )>, <lang `[`(rledata, 2.0, )>);
  //   goto L0(r36);
  // L1(dx19):
  //   rledata4 = ld rledata;
  //   rledata5 = force? rledata4;
  //   checkMissing(rledata5);
  //   c12 = `is.object`(rledata5);
  //   if c12 then L8() else L9();
  // L5():
  //   dr18 = tryDispatchBuiltin.1("[", rledata1);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L7() else L6();
  // L6():
  //   __8 = ldf `[` in base;
  //   r38 = dyn __8(rledata1, 1.0, <missing>);
  //   goto L1(r38);
  // L2(dx21):
  //   list = ldf list in base;
  //   r40 = dyn list(dx19, dx21);
  //   goto L0(r40);
  // L7():
  //   dx18 = getTryDispatchBuiltinValue(dr18);
  //   goto L1(dx18);
  // L8():
  //   dr20 = tryDispatchBuiltin.1("[", rledata5);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L10() else L9();
  // L9():
  //   __9 = ldf `[` in base;
  //   r39 = dyn __9(rledata5, 2.0, <missing>);
  //   goto L2(r39);
  // L10():
  //   dx20 = getTryDispatchBuiltinValue(dr20);
  //   goto L2(dx20);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_5, CCP, RHO);
  // r42 = dyn structure[, class](p5, "rle")
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L62() else D19()
  // L62()
  goto L62_;

D19_:;
  // deopt 92 [r42]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L62_:;
  // st rle = r42
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // inverse_rle = ldf `inverse.rle`
  Rsh_Fir_reg_inverse_rle = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

D20_:;
  // deopt 95 []
  Rsh_Fir_deopt(95, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // p6 = prom<V +>{
  //   rle = ld rle;
  //   rle1 = force? rle;
  //   checkMissing(rle1);
  //   return rle1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_6, CCP, RHO);
  // r44 = dyn inverse_rle(p6)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inverse_rle, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

D21_:;
  // deopt 97 [r44]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L64_:;
  // st diffs = r44
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard4 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L65_:;
  // firstline = ld firstline
  Rsh_Fir_reg_firstline = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L67() else D22()
  // L67()
  goto L67_;

L66_:;
  // r45 = dyn base4(<sym firstline>, <lang `+`(firstline, cumsum(diffs))>)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L12(r45)
  // L12(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L12_;

D22_:;
  // deopt 101 [firstline]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_firstline;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L67_:;
  // firstline1 = force? firstline
  Rsh_Fir_reg_firstline1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_firstline);
  // checkMissing(firstline1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_firstline1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // firstline2 = ld firstline
  Rsh_Fir_reg_firstline2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L68() else D23()
  // L68()
  goto L68_;

D23_:;
  // deopt 103 [firstline2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_firstline2_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L68_:;
  // firstline3 = force? firstline2
  Rsh_Fir_reg_firstline3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_firstline2_);
  // checkMissing(firstline3)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_firstline3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // sym5 = ldf cumsum
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base5 = ldf cumsum in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard5 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L69_:;
  // diffs = ld diffs
  Rsh_Fir_reg_diffs = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L71() else D24()
  // L71()
  goto L71_;

L70_:;
  // r47 = dyn base5(<sym diffs>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L13(firstline3, r47)
  // L13(firstline3, r47)
  Rsh_Fir_reg_firstline6_ = Rsh_Fir_reg_firstline3_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L13_;

D24_:;
  // deopt 106 [firstline3, diffs]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_firstline3_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_diffs;
  Rsh_Fir_deopt(106, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L71_:;
  // diffs1 = force? diffs
  Rsh_Fir_reg_diffs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_diffs);
  // checkMissing(diffs1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_diffs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // cumsum = ldf cumsum in base
  Rsh_Fir_reg_cumsum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r49 = dyn cumsum(diffs1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_diffs1_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cumsum, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L72() else D25()
  // L72()
  goto L72_;

D25_:;
  // deopt 109 [firstline3, r49]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_firstline3_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L13(firstline3, r49)
  // L13(firstline3, r49)
  Rsh_Fir_reg_firstline6_ = Rsh_Fir_reg_firstline3_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L13_;

D26_:;
  // deopt 112 [r51]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L12(r51)
  // L12(r51)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r51_;
  goto L12_;

D27_:;
  // deopt 115 []
  Rsh_Fir_deopt(115, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p7 = prom<V +>{
  //   sym6 = ldf list;
  //   base6 = ldf list in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r53):
  //   return r53;
  // L1():
  //   ofs = ld ofs;
  //   ofs1 = force? ofs;
  //   checkMissing(ofs1);
  //   srcFile = ld srcFile;
  //   srcFile1 = force? srcFile;
  //   checkMissing(srcFile1);
  //   srcLines = ld srcLines;
  //   srcLines1 = force? srcLines;
  //   checkMissing(srcLines1);
  //   list1 = ldf list in base;
  //   r54 = dyn list1(ofs1, srcFile1, srcLines1);
  //   goto L0(r54);
  // L2():
  //   r52 = dyn base6[offset, srcFile, srcLine](<sym ofs>, <sym srcFile>, <sym srcLines>);
  //   goto L0(r52);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1236783023_7, CCP, RHO);
  // r56 = dyn structure1[, class](p7, "Rconcordance")
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure1_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L75() else D28()
  // L75()
  goto L75_;

D28_:;
  // deopt 119 [r56]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L75_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_(SEXP CCP, SEXP RHO) {
  // s1 = ld s
  Rsh_Fir_reg_s1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s2 = force? s1
  Rsh_Fir_reg_s2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s1_);
  // checkMissing(s2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return s2
  return Rsh_Fir_reg_s2_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_1(SEXP CCP, SEXP RHO) {
  // split = ld split
  Rsh_Fir_reg_split = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // split1 = force? split
  Rsh_Fir_reg_split1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split);
  // checkMissing(split1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_split1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return split1
  return Rsh_Fir_reg_split1_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_2(SEXP CCP, SEXP RHO) {
  // split12 = ld split
  Rsh_Fir_reg_split12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // split13 = force? split12
  Rsh_Fir_reg_split13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split12_);
  // checkMissing(split13)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_split13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(split13)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_split13_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(split13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(split13)
    Rsh_Fir_reg_split15_ = Rsh_Fir_reg_split13_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", split13)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_split13_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_split15_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r19 = dyn __3(split15, 4.0)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_split15_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r19_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_3(SEXP CCP, SEXP RHO) {
  // split16 = ld split
  Rsh_Fir_reg_split16_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // split17 = force? split16
  Rsh_Fir_reg_split17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split16_);
  // checkMissing(split17)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_split17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(split17)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_split17_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c7 then L1() else L2(split17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L1()
    goto L1_;
  } else {
  // L2(split17)
    Rsh_Fir_reg_split19_ = Rsh_Fir_reg_split17_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", split17)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_split17_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_split19_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // vi = ld vi
  Rsh_Fir_reg_vi = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // vi1 = force? vi
  Rsh_Fir_reg_vi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vi);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r25 = dyn __4(split19, vi1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_split19_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_vi1_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r25_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_4(SEXP CCP, SEXP RHO) {
  // values4 = ld values
  Rsh_Fir_reg_values4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // values5 = force? values4
  Rsh_Fir_reg_values5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_values4_);
  // checkMissing(values5)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_values5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(values5)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_values5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c10 then L1() else L2(values5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L1()
    goto L1_;
  } else {
  // L2(values5)
    Rsh_Fir_reg_values7_ = Rsh_Fir_reg_values5_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", values5)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_values5_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_values7_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r33 = dyn __7(values7, -1.0)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_values7_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r33_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_5(SEXP CCP, SEXP RHO) {
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard3 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r37
  return Rsh_Fir_reg_r37_;

L1_:;
  // rledata4 = ld rledata
  Rsh_Fir_reg_rledata4_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // rledata5 = force? rledata4
  Rsh_Fir_reg_rledata5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rledata4_);
  // checkMissing(rledata5)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_rledata5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(rledata5)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_rledata5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c12 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r40 = dyn list(dx19, dx21)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r40_;
  goto L0_;

L3_:;
  // rledata = ld rledata
  Rsh_Fir_reg_rledata = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // rledata1 = force? rledata
  Rsh_Fir_reg_rledata1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rledata);
  // checkMissing(rledata1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_rledata1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(rledata1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_rledata1_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c11 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r36 = dyn base3[lengths, values](<lang `[`(rledata, 1.0, )>, <lang `[`(rledata, 2.0, )>)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L0_;

L5_:;
  // dr18 = tryDispatchBuiltin.1("[", rledata1)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_rledata1_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args82);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if dc9 then L7() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L7()
    goto L7_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r38 = dyn __8(rledata1, 1.0, <missing>)
  SEXP Rsh_Fir_array_args84[3];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_rledata1_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args84[2] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 3, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L1(r38)
  // L1(r38)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r38_;
  goto L1_;

L7_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L1(dx18)
  // L1(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L1_;

L8_:;
  // dr20 = tryDispatchBuiltin.1("[", rledata5)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_rledata5_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc10 then L10() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L10()
    goto L10_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r39 = dyn __9(rledata5, 2.0, <missing>)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_rledata5_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args88[2] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 3, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L2(r39)
  // L2(r39)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r39_;
  goto L2_;

L10_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L2(dx20)
  // L2(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_6(SEXP CCP, SEXP RHO) {
  // rle = ld rle
  Rsh_Fir_reg_rle = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // rle1 = force? rle
  Rsh_Fir_reg_rle1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rle);
  // checkMissing(rle1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_rle1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return rle1
  return Rsh_Fir_reg_rle1_;
}
SEXP Rsh_Fir_user_promise_inner1236783023_7(SEXP CCP, SEXP RHO) {
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r53
  return Rsh_Fir_reg_r53_;

L1_:;
  // ofs = ld ofs
  Rsh_Fir_reg_ofs = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // ofs1 = force? ofs
  Rsh_Fir_reg_ofs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ofs);
  // checkMissing(ofs1)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_ofs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // srcFile = ld srcFile
  Rsh_Fir_reg_srcFile = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // srcFile1 = force? srcFile
  Rsh_Fir_reg_srcFile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcFile);
  // checkMissing(srcFile1)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_srcFile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // srcLines = ld srcLines
  Rsh_Fir_reg_srcLines = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // srcLines1 = force? srcLines
  Rsh_Fir_reg_srcLines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcLines);
  // checkMissing(srcLines1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_srcLines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r54 = dyn list1(ofs1, srcFile1, srcLines1)
  SEXP Rsh_Fir_array_args105[3];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_ofs1_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_srcFile1_;
  Rsh_Fir_array_args105[2] = Rsh_Fir_reg_srcLines1_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 3, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r54)
  // L0(r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L0_;

L2_:;
  // r52 = dyn base6[offset, srcFile, srcLine](<sym ofs>, <sym srcFile>, <sym srcLines>)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args106[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names30[2] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 3, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
