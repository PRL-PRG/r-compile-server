#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3940039668_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3940039668_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3940039668_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3940039668_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3940039668_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2203017188_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2203017188_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2203017188_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203017188_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3940039668
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3940039668_, RHO, CCP);
  // st `.getAllGroups` = r
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
SEXP Rsh_Fir_user_function_inner3940039668_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3940039668 dynamic dispatch ([funs])

  return Rsh_Fir_user_version_inner3940039668_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3940039668_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3940039668 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3940039668/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_funs;  // funs
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_funs1_;  // funs1
  SEXP Rsh_Fir_reg_funs2_;  // funs2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_funs3_;  // funs3
  SEXP Rsh_Fir_reg_funs4_;  // funs4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_funs5_;  // funs5
  SEXP Rsh_Fir_reg_funs6_;  // funs6
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_groups;  // groups
  SEXP Rsh_Fir_reg_groups1_;  // groups1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_funs7_;  // funs7
  SEXP Rsh_Fir_reg_funs8_;  // funs8
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_start;  // start
  SEXP Rsh_Fir_reg_start1_;  // start1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_funs9_;  // funs9
  SEXP Rsh_Fir_reg_funs10_;  // funs10
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_start2_;  // start2
  SEXP Rsh_Fir_reg_start3_;  // start3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_Recall;  // Recall
  SEXP Rsh_Fir_reg_funs11_;  // funs11
  SEXP Rsh_Fir_reg_funs12_;  // funs12
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_funs14_;  // funs14
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_start4_;  // start4
  SEXP Rsh_Fir_reg_start5_;  // start5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_funs17_;  // funs17
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_funs18_;  // funs18
  SEXP Rsh_Fir_reg_funs19_;  // funs19
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_more;  // more
  SEXP Rsh_Fir_reg_more1_;  // more1
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_nmore;  // nmore
  SEXP Rsh_Fir_reg_nmore1_;  // nmore1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_funs20_;  // funs20
  SEXP Rsh_Fir_reg_funs21_;  // funs21
  SEXP Rsh_Fir_reg_more2_;  // more2
  SEXP Rsh_Fir_reg_more3_;  // more3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_more5_;  // more5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_nmore2_;  // nmore2
  SEXP Rsh_Fir_reg_nmore3_;  // nmore3
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_more8_;  // more8
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_more9_;  // more9
  SEXP Rsh_Fir_reg_more10_;  // more10
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_funs22_;  // funs22
  SEXP Rsh_Fir_reg_funs23_;  // funs23

  // Bind parameters
  Rsh_Fir_reg_funs = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st funs = funs
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_funs, RHO);
  (void)(Rsh_Fir_reg_funs);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L0_:;
  // st start = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf seq_along
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf seq_along in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L1_:;
  // s = toForSeq(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 5);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if c then L22() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // st funs = r8
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L2(i7)
  // L2(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L2_;

L4_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r6 = dyn __(<lang `[[`(funs, i)>, <sym group>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // st groups = r6
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L5_:;
  // start = ld start
  Rsh_Fir_reg_start = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

L6_:;
  // goto L14()
  // L14()
  goto L14_;

L7_:;
  // start2 = ld start
  Rsh_Fir_reg_start2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

L8_:;
  // nmore = ld nmore
  Rsh_Fir_reg_nmore = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L46() else D17()
  // L46()
  goto L46_;

L9_:;
  // goto L13(NULL)
  // L13(NULL)
  Rsh_Fir_reg_r49_ = Rsh_const(CCP, 7);
  goto L13_;

L10_:;
  // st funs = r38
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // goto L13(r38)
  // L13(r38)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r38_;
  goto L13_;

L11_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r48 = dyn c6(funs21, dx3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_funs21_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L60() else D23()
  // L60()
  goto L60_;

L12_:;
  // r46 = `:`(r43, r44)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r47 = dyn __2(more8, r46)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_more8_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L11(r47)
  // L11(r47)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r47_;
  goto L11_;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // funs22 = ld funs
  Rsh_Fir_reg_funs22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L63() else D24()
  // L63()
  goto L63_;

L15_:;
  // funs1 = ld funs
  Rsh_Fir_reg_funs1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L16_:;
  // r = dyn base(<sym funs>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [funs1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_funs1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // funs2 = force? funs1
  Rsh_Fir_reg_funs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs1_);
  // checkMissing(funs2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_funs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn length(funs2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_funs2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L19_:;
  // funs3 = ld funs
  Rsh_Fir_reg_funs3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L21() else D2()
  // L21()
  goto L21_;

L20_:;
  // r3 = dyn base1(<sym funs>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 8 [funs3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_funs3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // funs4 = force? funs3
  Rsh_Fir_reg_funs4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs3_);
  // checkMissing(funs4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_funs4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // r5 = seq_along(funs4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_funs4_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L22_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard3 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L23_:;
  // funs5 = ld funs
  Rsh_Fir_reg_funs5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

L24_:;
  // r7 = dyn base2(<sym funs>, <lang lapply(groups, function((what=), {
  //       `<-`(f, getGeneric(what));
  //       if(`!`(is.function(f)), stop("failed to find expected group generic function: ", what));
  //       f
  //     }, NULL))>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(i2, r7)
  // L3(i2, r7)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D3_:;
  // deopt 16 [i2, funs5]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_funs5_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // funs6 = force? funs5
  Rsh_Fir_reg_funs6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs5_);
  // checkMissing(funs6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_funs6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

D4_:;
  // deopt 19 [i2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // p = prom<V +>{
  //   groups = ld groups;
  //   groups1 = force? groups;
  //   checkMissing(groups1);
  //   return groups1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3940039668_, CCP, RHO);
  // p1 = prom<V +>{
  //   r10 = clos inner2203017188;
  //   return r10;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3940039668_1, CCP, RHO);
  // r12 = dyn lapply(p, p1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

D5_:;
  // deopt 22 [i2, r12]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r13 = dyn c1(funs6, r12)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_funs6_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

D6_:;
  // deopt 24 [i2, r13]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L3(i2, r13)
  // L3(i2, r13)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r13_;
  goto L3_;

L29_:;
  // funs7 = ld funs
  Rsh_Fir_reg_funs7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L30_:;
  // r14 = dyn base3(<sym funs>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L5_;

D7_:;
  // deopt 31 [funs7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_funs7_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L31_:;
  // funs8 = force? funs7
  Rsh_Fir_reg_funs8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs7_);
  // checkMissing(funs8)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_funs8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r16 = dyn length1(funs8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_funs8_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 34 [r16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L5_;

D9_:;
  // deopt 34 [r15, start]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_start;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L33_:;
  // start1 = force? start
  Rsh_Fir_reg_start1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start);
  // checkMissing(start1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_start1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r17 = `>`(r15, start1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_start1_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c2 then L34() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L6()
    goto L6_;
  }

L34_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard4 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // funs9 = ld funs
  Rsh_Fir_reg_funs9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L36_:;
  // r18 = dyn base4(<sym funs>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D10_:;
  // deopt 39 [funs9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_funs9_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // funs10 = force? funs9
  Rsh_Fir_reg_funs10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs9_);
  // checkMissing(funs10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_funs10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r20 = dyn length2(funs10)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_funs10_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

D11_:;
  // deopt 42 [r20]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L7_;

D12_:;
  // deopt 42 [r19, start2]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_start2_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L39_:;
  // start3 = force? start2
  Rsh_Fir_reg_start3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start2_);
  // checkMissing(start3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_start3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r21 = `-`(r19, start3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_start3_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // st nmore = r21
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // Recall = ldf Recall
  Rsh_Fir_reg_Recall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

D13_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p2 = prom<V +>{
  //   funs11 = ld funs;
  //   funs12 = force? funs11;
  //   checkMissing(funs12);
  //   c3 = `is.object`(funs12);
  //   if c3 then L2() else L3(funs12);
  // L0(dx1):
  //   return dx1;
  // L2():
  //   dr = tryDispatchBuiltin.1("[", funs12);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L4() else L3(dr);
  // L3(funs14):
  //   start4 = ld start;
  //   start5 = force? start4;
  //   checkMissing(start5);
  //   r22 = `+`(start5, 1.0);
  //   sym5 = ldf length;
  //   base5 = ldf length in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L5() else L6();
  // L1(funs17, r26, r27):
  //   r29 = `:`(r26, r27);
  //   __1 = ldf `[` in base;
  //   r30 = dyn __1(funs17, r29);
  //   goto L0(r30);
  // L4():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L5():
  //   funs18 = ld funs;
  //   funs19 = force? funs18;
  //   checkMissing(funs19);
  //   length3 = ldf length in base;
  //   r28 = dyn length3(funs19);
  //   goto L1(funs14, r22, r28);
  // L6():
  //   r25 = dyn base5(<sym funs>);
  //   goto L1(funs14, r22, r25);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3940039668_2, CCP, RHO);
  // r32 = dyn Recall(p2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Recall, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L41() else D14()
  // L41()
  goto L41_;

D14_:;
  // deopt 49 [r32]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L41_:;
  // st more = r32
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard6 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // more = ld more
  Rsh_Fir_reg_more = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L44() else D15()
  // L44()
  goto L44_;

L43_:;
  // r33 = dyn base6(<sym more>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r33)
  // L8(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L8_;

D15_:;
  // deopt 53 [more]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_more;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L44_:;
  // more1 = force? more
  Rsh_Fir_reg_more1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_more);
  // checkMissing(more1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_more1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r35 = dyn length4(more1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_more1_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L45() else D16()
  // L45()
  goto L45_;

D16_:;
  // deopt 56 [r35]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L8(r35)
  // L8(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L8_;

D17_:;
  // deopt 56 [r34, nmore]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_nmore;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L46_:;
  // nmore1 = force? nmore
  Rsh_Fir_reg_nmore1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nmore);
  // checkMissing(nmore1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_nmore1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r36 = `>`(r34, nmore1)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_nmore1_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c4 then L47() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L47()
    goto L47_;
  } else {
  // L9()
    goto L9_;
  }

L47_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard7 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // funs20 = ld funs
  Rsh_Fir_reg_funs20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D18()
  // L50()
  goto L50_;

L49_:;
  // r37 = dyn base7(<sym funs>, <lang `[`(more, `:`(`(`(`+`(nmore, 1.0)), length(more)))>)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L10(r37)
  // L10(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L10_;

D18_:;
  // deopt 61 [funs20]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_funs20_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L50_:;
  // funs21 = force? funs20
  Rsh_Fir_reg_funs21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs20_);
  // checkMissing(funs21)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_funs21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // more2 = ld more
  Rsh_Fir_reg_more2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L51() else D19()
  // L51()
  goto L51_;

D19_:;
  // deopt 63 [more2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_more2_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L51_:;
  // more3 = force? more2
  Rsh_Fir_reg_more3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_more2_);
  // checkMissing(more3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_more3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(more3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_more3_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c5 then L52() else L53(more3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L52()
    goto L52_;
  } else {
  // L53(more3)
    Rsh_Fir_reg_more5_ = Rsh_Fir_reg_more3_;
    goto L53_;
  }

L52_:;
  // dr2 = tryDispatchBuiltin.1("[", more3)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_more3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args62);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc1 then L54() else L53(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L54()
    goto L54_;
  } else {
  // L53(dr2)
    Rsh_Fir_reg_more5_ = Rsh_Fir_reg_dr2_;
    goto L53_;
  }

L53_:;
  // nmore2 = ld nmore
  Rsh_Fir_reg_nmore2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L55() else D20()
  // L55()
  goto L55_;

L54_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L11(dx2)
  // L11(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L11_;

D20_:;
  // deopt 65 [more5, nmore2]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_more5_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_nmore2_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L55_:;
  // nmore3 = force? nmore2
  Rsh_Fir_reg_nmore3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nmore2_);
  // checkMissing(nmore3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_nmore3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r39 = `+`(nmore3, 1.0)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_nmore3_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard8 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // more9 = ld more
  Rsh_Fir_reg_more9_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L58() else D21()
  // L58()
  goto L58_;

L57_:;
  // r42 = dyn base8(<sym more>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L12(more5, r39, r42)
  // L12(more5, r39, r42)
  Rsh_Fir_reg_more8_ = Rsh_Fir_reg_more5_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r42_;
  goto L12_;

D21_:;
  // deopt 70 [more5, r39, more9]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_more5_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_more9_;
  Rsh_Fir_deopt(70, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L58_:;
  // more10 = force? more9
  Rsh_Fir_reg_more10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_more9_);
  // checkMissing(more10)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_more10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r45 = dyn length5(more10)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_more10_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L59() else D22()
  // L59()
  goto L59_;

D22_:;
  // deopt 73 [more5, r39, r45]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_more5_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(73, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L12(more5, r39, r45)
  // L12(more5, r39, r45)
  Rsh_Fir_reg_more8_ = Rsh_Fir_reg_more5_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L12_;

D23_:;
  // deopt 77 [r48]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L10(r48)
  // L10(r48)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r48_;
  goto L10_;

D24_:;
  // deopt 83 [funs22]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_funs22_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L63_:;
  // funs23 = force? funs22
  Rsh_Fir_reg_funs23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs22_);
  // checkMissing(funs23)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_funs23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return funs23
  return Rsh_Fir_reg_funs23_;
}
SEXP Rsh_Fir_user_promise_inner3940039668_(SEXP CCP, SEXP RHO) {
  // groups = ld groups
  Rsh_Fir_reg_groups = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // groups1 = force? groups
  Rsh_Fir_reg_groups1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups);
  // checkMissing(groups1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_groups1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return groups1
  return Rsh_Fir_reg_groups1_;
}
SEXP Rsh_Fir_user_promise_inner3940039668_1(SEXP CCP, SEXP RHO) {
  // r10 = clos inner2203017188
  Rsh_Fir_reg_r10_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2203017188_, RHO, CCP);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner3940039668_2(SEXP CCP, SEXP RHO) {
  // funs11 = ld funs
  Rsh_Fir_reg_funs11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // funs12 = force? funs11
  Rsh_Fir_reg_funs12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs11_);
  // checkMissing(funs12)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_funs12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(funs12)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_funs12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c3 then L2() else L3(funs12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L2()
    goto L2_;
  } else {
  // L3(funs12)
    Rsh_Fir_reg_funs14_ = Rsh_Fir_reg_funs12_;
    goto L3_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // r29 = `:`(r26, r27)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r30 = dyn __1(funs17, r29)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_funs17_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r30_;
  goto L0_;

L2_:;
  // dr = tryDispatchBuiltin.1("[", funs12)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_funs12_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_funs14_ = Rsh_Fir_reg_dr;
    goto L3_;
  }

L3_:;
  // start4 = ld start
  Rsh_Fir_reg_start4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // start5 = force? start4
  Rsh_Fir_reg_start5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start4_);
  // checkMissing(start5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_start5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r22 = `+`(start5, 1.0)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_start5_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard5 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L5_:;
  // funs18 = ld funs
  Rsh_Fir_reg_funs18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // funs19 = force? funs18
  Rsh_Fir_reg_funs19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funs18_);
  // checkMissing(funs19)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_funs19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r28 = dyn length3(funs19)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_funs19_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(funs14, r22, r28)
  // L1(funs14, r22, r28)
  Rsh_Fir_reg_funs17_ = Rsh_Fir_reg_funs14_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L1_;

L6_:;
  // r25 = dyn base5(<sym funs>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(funs14, r22, r25)
  // L1(funs14, r22, r25)
  Rsh_Fir_reg_funs17_ = Rsh_Fir_reg_funs14_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r25_;
  goto L1_;
}
SEXP Rsh_Fir_user_function_inner2203017188_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2203017188 dynamic dispatch ([what])

  return Rsh_Fir_user_version_inner2203017188_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2203017188_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2203017188 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2203017188/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_getGeneric;  // getGeneric
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_what2_;  // what2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_is_function;  // is_function
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_what3_;  // what3
  SEXP Rsh_Fir_reg_what4_;  // what4
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_f3_;  // f3

  // Bind parameters
  Rsh_Fir_reg_what = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st what = what
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_what, RHO);
  (void)(Rsh_Fir_reg_what);
  // getGeneric = ldf getGeneric
  Rsh_Fir_reg_getGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c then L9() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L9()
    goto L9_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L13() else D6()
  // L13()
  goto L13_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   what1 = ld what;
  //   what2 = force? what1;
  //   checkMissing(what2);
  //   return what2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203017188_, CCP, RHO);
  // r1 = dyn getGeneric(p)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getGeneric, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L4_:;
  // st f = r1
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym = ldf `is.function`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf `is.function` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

L6_:;
  // r2 = dyn base(<sym f>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

D2_:;
  // deopt 7 [f]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_f;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L7_:;
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r4 = dyn is_function(f1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D3_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_1;
  goto L0_;

L9_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p1 = prom<V +>{
  //   what3 = ld what;
  //   what4 = force? what3;
  //   checkMissing(what4);
  //   return what4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203017188_1, CCP, RHO);
  // r7 = dyn stop("failed to find expected group generic function: ", p1)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L2()
  // L2()
  goto L2_;

D6_:;
  // deopt 19 [f2]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_f2_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L13_:;
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return f3
  return Rsh_Fir_reg_f3_;
}
SEXP Rsh_Fir_user_promise_inner2203017188_(SEXP CCP, SEXP RHO) {
  // what1 = ld what
  Rsh_Fir_reg_what1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // what2 = force? what1
  Rsh_Fir_reg_what2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what1_);
  // checkMissing(what2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_what2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return what2
  return Rsh_Fir_reg_what2_;
}
SEXP Rsh_Fir_user_promise_inner2203017188_1(SEXP CCP, SEXP RHO) {
  // what3 = ld what
  Rsh_Fir_reg_what3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // what4 = force? what3
  Rsh_Fir_reg_what4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what3_);
  // checkMissing(what4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_what4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return what4
  return Rsh_Fir_reg_what4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
