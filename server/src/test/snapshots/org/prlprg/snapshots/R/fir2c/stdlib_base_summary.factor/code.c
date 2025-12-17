#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1286473096_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1286473096_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1286473096_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1286473096_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1286473096_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner1286473096
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1286473096_, RHO, CCP);
  // st `summary.factor` = r
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
SEXP Rsh_Fir_user_function_inner1286473096_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1286473096 dynamic dispatch ([object, maxsum, `...`])

  return Rsh_Fir_user_version_inner1286473096_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1286473096_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1286473096 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1286473096/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_maxsum;  // maxsum
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_maxsum_isMissing;  // maxsum_isMissing
  SEXP Rsh_Fir_reg_maxsum_orDefault;  // maxsum_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_levels;  // levels
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_nas;  // nas
  SEXP Rsh_Fir_reg_nas1_;  // nas1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_maxsum1_;  // maxsum1
  SEXP Rsh_Fir_reg_maxsum2_;  // maxsum2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_table;  // table
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_tbl;  // tbl
  SEXP Rsh_Fir_reg_tbl1_;  // tbl1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_tbl2_;  // tbl2
  SEXP Rsh_Fir_reg_tbl3_;  // tbl3
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_ll;  // ll
  SEXP Rsh_Fir_reg_ll1_;  // ll1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_maxsum3_;  // maxsum3
  SEXP Rsh_Fir_reg_maxsum4_;  // maxsum4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_maxsum5_;  // maxsum5
  SEXP Rsh_Fir_reg_maxsum6_;  // maxsum6
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_maxsum9_;  // maxsum9
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_ll2_;  // ll2
  SEXP Rsh_Fir_reg_ll3_;  // ll3
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sort_list;  // sort_list
  SEXP Rsh_Fir_reg_tt;  // tt
  SEXP Rsh_Fir_reg_tt1_;  // tt1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_tt2_;  // tt2
  SEXP Rsh_Fir_reg_tt3_;  // tt3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_tt5_;  // tt5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_o;  // o
  SEXP Rsh_Fir_reg_o1_;  // o1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_tt7_;  // tt7
  SEXP Rsh_Fir_reg_o3_;  // o3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_tt9_;  // tt9
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_drop;  // drop
  SEXP Rsh_Fir_reg_drop1_;  // drop1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_tt10_;  // tt10
  SEXP Rsh_Fir_reg_tt11_;  // tt11
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_tt13_;  // tt13
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_o4_;  // o4
  SEXP Rsh_Fir_reg_o5_;  // o5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_tt15_;  // tt15
  SEXP Rsh_Fir_reg_o7_;  // o7
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_tt17_;  // tt17
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_drop2_;  // drop2
  SEXP Rsh_Fir_reg_drop3_;  // drop3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_ana;  // ana
  SEXP Rsh_Fir_reg_ana1_;  // ana1
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_tt18_;  // tt18
  SEXP Rsh_Fir_reg_tt19_;  // tt19
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_nas2_;  // nas2
  SEXP Rsh_Fir_reg_nas3_;  // nas3
  SEXP Rsh_Fir_reg_sum1_;  // sum1
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_tt20_;  // tt20
  SEXP Rsh_Fir_reg_tt21_;  // tt21

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_maxsum = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // maxsum_isMissing = missing.0(maxsum)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_maxsum;
  Rsh_Fir_reg_maxsum_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if maxsum_isMissing then L0(100) else L0(maxsum)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_maxsum_isMissing)) {
  // L0(100)
    Rsh_Fir_reg_maxsum_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(maxsum)
    Rsh_Fir_reg_maxsum_orDefault = Rsh_Fir_reg_maxsum;
    goto L0_;
  }

L0_:;
  // st maxsum = maxsum_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_maxsum_orDefault, RHO);
  (void)(Rsh_Fir_reg_maxsum_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L1_:;
  // st nas = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // levels = ldf levels
  Rsh_Fir_reg_levels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L25() else D2()
  // L25()
  goto L25_;

L2_:;
  // st ana = r6
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L31() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L31()
    goto L31_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // table = ldf table
  Rsh_Fir_reg_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

L5_:;
  // st tt = r13
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym3 = ldf dimnames
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf dimnames in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L6_:;
  // c2 = `is.object`(r16)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L44() else L45(r16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L44()
    goto L44_;
  } else {
  // L45(r16)
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r16_;
    goto L45_;
  }

L7_:;
  // l = ld tt
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L47() else D13()
  // L47()
  goto L47_;

L8_:;
  // maxsum3 = ld maxsum
  Rsh_Fir_reg_maxsum3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L53() else D17()
  // L53()
  goto L53_;

L9_:;
  // goto L17()
  // L17()
  goto L17_;

L10_:;
  // r29 = `:`(maxsum9, r27)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_maxsum9_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // st drop = r29
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // sort_list = ldf `sort.list`
  Rsh_Fir_reg_sort_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L60() else D21()
  // L60()
  goto L60_;

L11_:;
  // st tt = r33
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // goto L17()
  // L17()
  goto L17_;

L12_:;
  // sym7 = ldf sum
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base7 = ldf sum in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard7 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L13_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r36 = dyn __2(tt9, dx5)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_tt9_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L12(r36)
  // L12(r36)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r36_;
  goto L12_;

L14_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r42 = dyn c8(dx3, r38)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L85() else D30()
  // L85()
  goto L85_;

L15_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r41 = dyn sum(dx7)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L84() else D29()
  // L84()
  goto L84_;

L16_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r40 = dyn __4(tt17, dx9)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_tt17_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L15(r40)
  // L15(r40)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r40_;
  goto L15_;

L17_:;
  // ana = ld ana
  Rsh_Fir_reg_ana = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L87() else D31()
  // L87()
  goto L87_;

L18_:;
  // tt20 = ld tt
  Rsh_Fir_reg_tt20_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L98() else D36()
  // L98()
  goto L98_;

L19_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r45
  return Rsh_Fir_reg_r45_;

L20_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r49 = dyn c10(tt19, r47)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_tt19_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L96() else D35()
  // L96()
  goto L96_;

L21_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r = dyn base(<sym object>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L23_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn is_na(object2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_object2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p = prom<V +>{
  //   object3 = ld object;
  //   object4 = force? object3;
  //   checkMissing(object4);
  //   return object4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1286473096_, CCP, RHO);
  // r4 = dyn levels(p)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_levels, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

D3_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // st ll = r4
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // nas = ld nas
  Rsh_Fir_reg_nas = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L28_:;
  // r5 = dyn base1(<sym nas>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D4_:;
  // deopt 14 [nas]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_nas;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // nas1 = force? nas
  Rsh_Fir_reg_nas1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas);
  // checkMissing(nas1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_nas1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r7 = dyn any(nas1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_nas1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;

L31_:;
  // maxsum1 = ld maxsum
  Rsh_Fir_reg_maxsum1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

D6_:;
  // deopt 19 [maxsum1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_maxsum1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // maxsum2 = force? maxsum1
  Rsh_Fir_reg_maxsum2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxsum1_);
  // checkMissing(maxsum2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_maxsum2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // r8 = `-`(maxsum2, 1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_maxsum2_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // st maxsum = r8
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L4()
  // L4()
  goto L4_;

D7_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p1 = prom<V +>{
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   return object6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1286473096_1, CCP, RHO);
  // r11 = dyn table(p1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

D8_:;
  // deopt 29 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // st tbl = r11
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard2 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // tbl = ld tbl
  Rsh_Fir_reg_tbl = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

L37_:;
  // r12 = dyn base2(<sym tbl>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D9_:;
  // deopt 33 [tbl]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_tbl;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // tbl1 = force? tbl
  Rsh_Fir_reg_tbl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tbl);
  // checkMissing(tbl1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_tbl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r14 = dyn c1(tbl1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_tbl1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

D10_:;
  // deopt 36 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L5_;

L40_:;
  // tbl2 = ld tbl
  Rsh_Fir_reg_tbl2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

L41_:;
  // r15 = dyn base3(<sym tbl>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6(r15)
  // L6(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L6_;

D11_:;
  // deopt 40 [tbl2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_tbl2_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L42_:;
  // tbl3 = force? tbl2
  Rsh_Fir_reg_tbl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tbl2_);
  // checkMissing(tbl3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_tbl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r17 = dyn dimnames(tbl3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_tbl3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L43() else D12()
  // L43()
  goto L43_;

D12_:;
  // deopt 43 [r17]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L6_;

L44_:;
  // dr = tryDispatchBuiltin.1("[[", r16)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc then L46() else L45(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr)
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_dr;
    goto L45_;
  }

L45_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r20 = dyn __(r19, 1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L7_;

L46_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L7(dx)
  // L7(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D13_:;
  // deopt 48 [dx1, l, dx1]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(48, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L47_:;
  // r21 = dyn names__(l, NULL, dx1)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L48() else D14()
  // L48()
  goto L48_;

D14_:;
  // deopt 50 [dx1, r21]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L48_:;
  // st tt = r21
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard4 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // ll = ld ll
  Rsh_Fir_reg_ll = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L51() else D15()
  // L51()
  goto L51_;

L50_:;
  // r22 = dyn base4(<sym ll>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L8_;

D15_:;
  // deopt 54 [ll]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_ll;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L51_:;
  // ll1 = force? ll
  Rsh_Fir_reg_ll1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll);
  // checkMissing(ll1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_ll1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r24 = dyn length(ll1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ll1_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L52() else D16()
  // L52()
  goto L52_;

D16_:;
  // deopt 57 [r24]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L8(r24)
  // L8(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L8_;

D17_:;
  // deopt 57 [r23, maxsum3]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_maxsum3_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L53_:;
  // maxsum4 = force? maxsum3
  Rsh_Fir_reg_maxsum4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxsum3_);
  // checkMissing(maxsum4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_maxsum4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // r25 = `>`(r23, maxsum4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_maxsum4_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c3 then L54() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L54()
    goto L54_;
  } else {
  // L9()
    goto L9_;
  }

L54_:;
  // maxsum5 = ld maxsum
  Rsh_Fir_reg_maxsum5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L55() else D18()
  // L55()
  goto L55_;

D18_:;
  // deopt 60 [maxsum5]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_maxsum5_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // maxsum6 = force? maxsum5
  Rsh_Fir_reg_maxsum6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maxsum5_);
  // checkMissing(maxsum6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_maxsum6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard5 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // ll2 = ld ll
  Rsh_Fir_reg_ll2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L58() else D19()
  // L58()
  goto L58_;

L57_:;
  // r26 = dyn base5(<sym ll>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L10(maxsum6, r26)
  // L10(maxsum6, r26)
  Rsh_Fir_reg_maxsum9_ = Rsh_Fir_reg_maxsum6_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L10_;

D19_:;
  // deopt 63 [maxsum6, ll2]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_maxsum6_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_ll2_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L58_:;
  // ll3 = force? ll2
  Rsh_Fir_reg_ll3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll2_);
  // checkMissing(ll3)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_ll3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r28 = dyn length1(ll3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ll3_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L59() else D20()
  // L59()
  goto L59_;

D20_:;
  // deopt 66 [maxsum6, r28]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_maxsum6_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L10(maxsum6, r28)
  // L10(maxsum6, r28)
  Rsh_Fir_reg_maxsum9_ = Rsh_Fir_reg_maxsum6_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L10_;

D21_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p2 = prom<V +>{
  //   tt = ld tt;
  //   tt1 = force? tt;
  //   checkMissing(tt1);
  //   return tt1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1286473096_2, CCP, RHO);
  // r31 = dyn sort_list[, decreasing](p2, TRUE)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_list, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L61() else D22()
  // L61()
  goto L61_;

D22_:;
  // deopt 74 [r31]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L61_:;
  // st o = r31
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard6 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L62_:;
  // tt2 = ld tt
  Rsh_Fir_reg_tt2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L64() else D23()
  // L64()
  goto L64_;

L63_:;
  // r32 = dyn base6[, `(Other)`](<lang `[`(tt, `[`(o, `-`(drop)))>, <lang sum(`[`(tt, `[`(o, drop)))>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L11(r32)
  // L11(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L11_;

D23_:;
  // deopt 78 [tt2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_tt2_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L64_:;
  // tt3 = force? tt2
  Rsh_Fir_reg_tt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt2_);
  // checkMissing(tt3)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_tt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(tt3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_tt3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c4 then L65() else L66(tt3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L65()
    goto L65_;
  } else {
  // L66(tt3)
    Rsh_Fir_reg_tt5_ = Rsh_Fir_reg_tt3_;
    goto L66_;
  }

L65_:;
  // dr2 = tryDispatchBuiltin.1("[", tt3)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_tt3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc1 then L67() else L66(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L67()
    goto L67_;
  } else {
  // L66(dr2)
    Rsh_Fir_reg_tt5_ = Rsh_Fir_reg_dr2_;
    goto L66_;
  }

L66_:;
  // o = ld o
  Rsh_Fir_reg_o = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L68() else D24()
  // L68()
  goto L68_;

L67_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L12(dx2)
  // L12(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L12_;

D24_:;
  // deopt 80 [tt5, o]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_tt5_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_o;
  Rsh_Fir_deopt(80, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L68_:;
  // o1 = force? o
  Rsh_Fir_reg_o1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_o);
  // checkMissing(o1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_o1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(o1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_o1_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c5 then L69() else L70(tt5, o1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L69()
    goto L69_;
  } else {
  // L70(tt5, o1)
    Rsh_Fir_reg_tt7_ = Rsh_Fir_reg_tt5_;
    Rsh_Fir_reg_o3_ = Rsh_Fir_reg_o1_;
    goto L70_;
  }

L69_:;
  // dr4 = tryDispatchBuiltin.1("[", o1)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_o1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc2 then L71() else L70(tt5, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L71()
    goto L71_;
  } else {
  // L70(tt5, dr4)
    Rsh_Fir_reg_tt7_ = Rsh_Fir_reg_tt5_;
    Rsh_Fir_reg_o3_ = Rsh_Fir_reg_dr4_;
    goto L70_;
  }

L70_:;
  // drop = ld drop
  Rsh_Fir_reg_drop = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L72() else D25()
  // L72()
  goto L72_;

L71_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L13(tt5, dx4)
  // L13(tt5, dx4)
  Rsh_Fir_reg_tt9_ = Rsh_Fir_reg_tt5_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L13_;

D25_:;
  // deopt 82 [tt7, o3, drop]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_tt7_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_o3_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_drop;
  Rsh_Fir_deopt(82, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L72_:;
  // drop1 = force? drop
  Rsh_Fir_reg_drop1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop);
  // checkMissing(drop1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_drop1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r34 = `-`(<missing>, drop1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_drop1_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r35 = dyn __1(o3, r34)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_o3_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L13(tt7, r35)
  // L13(tt7, r35)
  Rsh_Fir_reg_tt9_ = Rsh_Fir_reg_tt7_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r35_;
  goto L13_;

L73_:;
  // tt10 = ld tt
  Rsh_Fir_reg_tt10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L75() else D26()
  // L75()
  goto L75_;

L74_:;
  // r37 = dyn base7(<lang `[`(tt, `[`(o, drop))>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L14(r37)
  // L14(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L14_;

D26_:;
  // deopt 89 [tt10]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_tt10_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L75_:;
  // tt11 = force? tt10
  Rsh_Fir_reg_tt11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt10_);
  // checkMissing(tt11)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_tt11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(tt11)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_tt11_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c6 then L76() else L77(tt11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L76()
    goto L76_;
  } else {
  // L77(tt11)
    Rsh_Fir_reg_tt13_ = Rsh_Fir_reg_tt11_;
    goto L77_;
  }

L76_:;
  // dr6 = tryDispatchBuiltin.1("[", tt11)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_tt11_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc3 then L78() else L77(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L78()
    goto L78_;
  } else {
  // L77(dr6)
    Rsh_Fir_reg_tt13_ = Rsh_Fir_reg_dr6_;
    goto L77_;
  }

L77_:;
  // o4 = ld o
  Rsh_Fir_reg_o4_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L79() else D27()
  // L79()
  goto L79_;

L78_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L15(dx6)
  // L15(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L15_;

D27_:;
  // deopt 91 [tt13, o4]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_tt13_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_o4_;
  Rsh_Fir_deopt(91, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L79_:;
  // o5 = force? o4
  Rsh_Fir_reg_o5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_o4_);
  // checkMissing(o5)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_o5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(o5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_o5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c7 then L80() else L81(tt13, o5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L80()
    goto L80_;
  } else {
  // L81(tt13, o5)
    Rsh_Fir_reg_tt15_ = Rsh_Fir_reg_tt13_;
    Rsh_Fir_reg_o7_ = Rsh_Fir_reg_o5_;
    goto L81_;
  }

L80_:;
  // dr8 = tryDispatchBuiltin.1("[", o5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_o5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc4 then L82() else L81(tt13, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L82()
    goto L82_;
  } else {
  // L81(tt13, dr8)
    Rsh_Fir_reg_tt15_ = Rsh_Fir_reg_tt13_;
    Rsh_Fir_reg_o7_ = Rsh_Fir_reg_dr8_;
    goto L81_;
  }

L81_:;
  // drop2 = ld drop
  Rsh_Fir_reg_drop2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L83() else D28()
  // L83()
  goto L83_;

L82_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L16(tt13, dx8)
  // L16(tt13, dx8)
  Rsh_Fir_reg_tt17_ = Rsh_Fir_reg_tt13_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L16_;

D28_:;
  // deopt 93 [tt15, o7, drop2]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_tt15_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_o7_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_drop2_;
  Rsh_Fir_deopt(93, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L83_:;
  // drop3 = force? drop2
  Rsh_Fir_reg_drop3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop2_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r39 = dyn __3(o7, drop3)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_o7_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_drop3_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L16(tt15, r39)
  // L16(tt15, r39)
  Rsh_Fir_reg_tt17_ = Rsh_Fir_reg_tt15_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r39_;
  goto L16_;

D29_:;
  // deopt 98 [r41]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L14(r41)
  // L14(r41)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r41_;
  goto L14_;

D30_:;
  // deopt 101 [r42]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L11(r42)
  // L11(r42)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r42_;
  goto L11_;

D31_:;
  // deopt 105 [ana]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_ana;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L87_:;
  // ana1 = force? ana
  Rsh_Fir_reg_ana1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ana);
  // checkMissing(ana1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_ana1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(ana1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_ana1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c9 then L88() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L88()
    goto L88_;
  } else {
  // L18()
    goto L18_;
  }

L88_:;
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard8 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L89_:;
  // tt18 = ld tt
  Rsh_Fir_reg_tt18_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L91() else D32()
  // L91()
  goto L91_;

L90_:;
  // r44 = dyn base8[, `NA's`](<sym tt>, <lang sum(nas)>)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L19(r44)
  // L19(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L19_;

D32_:;
  // deopt 109 [tt18]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_tt18_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L91_:;
  // tt19 = force? tt18
  Rsh_Fir_reg_tt19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt18_);
  // checkMissing(tt19)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_tt19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // sym9 = ldf sum
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base9 = ldf sum in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard9 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L92_:;
  // nas2 = ld nas
  Rsh_Fir_reg_nas2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L94() else D33()
  // L94()
  goto L94_;

L93_:;
  // r46 = dyn base9(<sym nas>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L20(r46)
  // L20(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L20_;

D33_:;
  // deopt 113 [nas2]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_nas2_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L94_:;
  // nas3 = force? nas2
  Rsh_Fir_reg_nas3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas2_);
  // checkMissing(nas3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_nas3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // sum1 = ldf sum in base
  Rsh_Fir_reg_sum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r48 = dyn sum1(nas3)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_nas3_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L95() else D34()
  // L95()
  goto L95_;

D34_:;
  // deopt 116 [r48]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L20(r48)
  // L20(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L20_;

D35_:;
  // deopt 119 [r49]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L19(r49)
  // L19(r49)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r49_;
  goto L19_;

D36_:;
  // deopt 120 [tt20]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_tt20_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L98_:;
  // tt21 = force? tt20
  Rsh_Fir_reg_tt21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt20_);
  // checkMissing(tt21)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_tt21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return tt21
  return Rsh_Fir_reg_tt21_;
}
SEXP Rsh_Fir_user_promise_inner1286473096_(SEXP CCP, SEXP RHO) {
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return object4
  return Rsh_Fir_reg_object4_;
}
SEXP Rsh_Fir_user_promise_inner1286473096_1(SEXP CCP, SEXP RHO) {
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return object6
  return Rsh_Fir_reg_object6_;
}
SEXP Rsh_Fir_user_promise_inner1286473096_2(SEXP CCP, SEXP RHO) {
  // tt = ld tt
  Rsh_Fir_reg_tt = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // tt1 = force? tt
  Rsh_Fir_reg_tt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt);
  // checkMissing(tt1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_tt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return tt1
  return Rsh_Fir_reg_tt1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
