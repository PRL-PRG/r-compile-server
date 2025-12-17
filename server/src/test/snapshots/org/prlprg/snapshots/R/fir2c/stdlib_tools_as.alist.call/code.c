#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner2501545716
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st `as.alist.call` = r
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
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_as_list;  // as_list
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
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
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_y9_;  // y9
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_alist;  // alist
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_ind6_;  // ind6
  SEXP Rsh_Fir_reg_ind7_;  // ind7
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_ind8_;  // ind8
  SEXP Rsh_Fir_reg_ind9_;  // ind9
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_y10_;  // y10
  SEXP Rsh_Fir_reg_y11_;  // y11

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // as_list = ldf `as.list`
  Rsh_Fir_reg_as_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L0_:;
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c1 then L22() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L22()
    goto L22_;
  } else {
  // L2()
    goto L2_;
  }

L1_:;
  // c = `==`(r5, NULL)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c;
  goto L0_;

L2_:;
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

L3_:;
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r8_;
  goto L4_;

L4_:;
  // st ind = r10
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard4 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L5_:;
  // c2 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c2 then L33() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L33()
    goto L33_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L13()
  // L13()
  goto L13_;

L7_:;
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L42() else D14()
  // L42()
  goto L42_;

L8_:;
  // l5 = ld y
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c6 = `is.object`(l5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c6 then L59() else L60(r34, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L59()
    goto L59_;
  } else {
  // L60(r34, l5)
    Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L60_;
  }

L9_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard7 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L10_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r41 = dyn list(dx5)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L53() else D18()
  // L53()
  goto L53_;

L11_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r45 = dyn rep_int(r36, r43)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L58() else D21()
  // L58()
  goto L58_;

L12_:;
  // st y = dx7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // y10 = ld y
  Rsh_Fir_reg_y10_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L64() else D23()
  // L64()
  goto L64_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // r1 = dyn as_list(p)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // st y = r1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L17_:;
  // r2 = dyn base(<lang names(y)>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

L18_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L19_:;
  // r4 = dyn base1(<sym y>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D2_:;
  // deopt 8 [y]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r6 = dyn names(y1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L22_:;
  // sym2 = ldf seq_along
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf seq_along in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard2 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L24_:;
  // r7 = dyn base2(<sym y>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D4_:;
  // deopt 14 [y2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L25_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r9 = seq_along(y3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L3_;

D5_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p1 = prom<V +>{
  //   sym3 = ldf names;
  //   base3 = ldf names in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r12):
  //   r14 = `==`(r12, "");
  //   return r14;
  // L1():
  //   y4 = ld y;
  //   y5 = force? y4;
  //   checkMissing(y5);
  //   names1 = ldf names in base;
  //   r13 = dyn names1(y5);
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base3(<sym y>);
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // r16 = dyn which(p1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

D6_:;
  // deopt 20 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r16_;
  goto L4_;

L29_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L30_:;
  // r17 = dyn base4(<sym ind>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L5_;

D7_:;
  // deopt 24 [ind]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r19 = dyn length(ind1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 27 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L5(r19)
  // L5(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L5_;

L33_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

D9_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p2 = prom<V +>{
  //   y6 = ld y;
  //   y7 = force? y6;
  //   checkMissing(y7);
  //   c3 = `is.object`(y7);
  //   if c3 then L1() else L2(y7);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", y7);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(y9):
  //   ind2 = ld ind;
  //   ind3 = force? ind2;
  //   __ = ldf `[` in base;
  //   r20 = dyn __(y9, ind3);
  //   goto L0(r20);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // p3 = prom<V +>{
  //   paste = ld paste;
  //   paste1 = force? paste;
  //   checkMissing(paste1);
  //   return paste1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_3, CCP, RHO);
  // r23 = dyn vapply[, , , collapse](p2, p3, "", " ")
  SEXP Rsh_Fir_array_args36[4];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args36[3] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 4, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

D10_:;
  // deopt 35 [r23]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // l = ld y
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // names2 = ldf names
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

D11_:;
  // deopt 37 [r23, l, r23]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(37, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L36_:;
  // r24 = dyn names2(r23, NULL)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D12_:;
  // deopt 39 [r23, l, r23, r24]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(39, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // c4 = `is.object`(r24)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c4 then L38() else L39(r23, l, r24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L38()
    goto L38_;
  } else {
  // L39(r23, l, r24)
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r24_;
    goto L39_;
  }

L38_:;
  // dr2 = tryDispatchBuiltin.0("[<-", r24, r23)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args39);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc1 then L40() else L39(r23, l, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L40()
    goto L40_;
  } else {
  // L39(r23, l, dr2)
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_dr2_;
    goto L39_;
  }

L39_:;
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L41() else D13()
  // L41()
  goto L41_;

L40_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L7(r23, l, dx2)
  // L7(r23, l, dx2)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D13_:;
  // deopt 41 [r27, l2, r28, r23, ind4]
  SEXP Rsh_Fir_array_deopt_stack10[5];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_deopt(41, 5, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L41_:;
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r31 = dyn ___(r28, r23, ind5)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_ind5_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7(r27, l2, r31)
  // L7(r27, l2, r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r31_;
  goto L7_;

D14_:;
  // deopt 44 [r30, l4, dx3]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_deopt(44, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L42_:;
  // r32 = dyn names__(l4, NULL, dx3)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L43() else D15()
  // L43()
  goto L43_;

D15_:;
  // deopt 46 [r30, r32]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L43_:;
  // st y = r32
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym5 = ldf `rep.int`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base5 = ldf `rep.int` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard5 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard6 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L45_:;
  // r33 = dyn base5(<lang list(`[[`(alist(irrelevant=), 1))>, <lang length(ind)>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r33)
  // L8(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L8_;

L46_:;
  // alist = ldf alist
  Rsh_Fir_reg_alist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L48() else D16()
  // L48()
  goto L48_;

L47_:;
  // r35 = dyn base6(<lang `[[`(alist(irrelevant=), 1)>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L9(r35)
  // L9(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L9_;

D16_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // r37 = dyn alist[irrelevant](<missing>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_alist, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L49() else D17()
  // L49()
  goto L49_;

D17_:;
  // deopt 56 [r37]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L49_:;
  // c5 = `is.object`(r37)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c5 then L50() else L51(r37)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L50()
    goto L50_;
  } else {
  // L51(r37)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
    goto L51_;
  }

L50_:;
  // dr4 = tryDispatchBuiltin.1("[[", r37)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc2 then L52() else L51(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L52()
    goto L52_;
  } else {
  // L51(dr4)
    Rsh_Fir_reg_r39_ = Rsh_Fir_reg_dr4_;
    goto L51_;
  }

L51_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r40 = dyn __1(r39, 1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L10(r40)
  // L10(r40)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r40_;
  goto L10_;

L52_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L10(dx4)
  // L10(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

D18_:;
  // deopt 61 [r41]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L9(r41)
  // L9(r41)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r41_;
  goto L9_;

L54_:;
  // ind6 = ld ind
  Rsh_Fir_reg_ind6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L56() else D19()
  // L56()
  goto L56_;

L55_:;
  // r42 = dyn base7(<sym ind>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L11(r42)
  // L11(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L11_;

D19_:;
  // deopt 64 [ind6]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_ind6_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L56_:;
  // ind7 = force? ind6
  Rsh_Fir_reg_ind7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind6_);
  // checkMissing(ind7)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ind7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r44 = dyn length1(ind7)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_ind7_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L57() else D20()
  // L57()
  goto L57_;

D20_:;
  // deopt 67 [r44]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L11(r44)
  // L11(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L11_;

D21_:;
  // deopt 69 [r45]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L8(r45)
  // L8(r45)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r45_;
  goto L8_;

L59_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l5, r34)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args57);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc3 then L61() else L60(r34, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L61()
    goto L61_;
  } else {
  // L60(r34, dr6)
    Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r34_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr6_;
    goto L60_;
  }

L60_:;
  // ind8 = ld ind
  Rsh_Fir_reg_ind8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L62() else D22()
  // L62()
  goto L62_;

L61_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L12(r34, dx6)
  // L12(r34, dx6)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L12_;

D22_:;
  // deopt 71 [r47, l7, r34, ind8]
  SEXP Rsh_Fir_array_deopt_stack18[4];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_ind8_;
  Rsh_Fir_deopt(71, 4, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L62_:;
  // ind9 = force? ind8
  Rsh_Fir_reg_ind9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind8_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r50 = dyn ___1(l7, r34, ind9)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_ind9_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L12(r47, r50)
  // L12(r47, r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r50_;
  goto L12_;

D23_:;
  // deopt 77 [y10]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_y10_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L64_:;
  // y11 = force? y10
  Rsh_Fir_reg_y11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y10_);
  // checkMissing(y11)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_y11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y11
  return Rsh_Fir_reg_y11_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // sym3 = ldf names
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r14 = `==`(r12, "")
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r13 = dyn names1(y5)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base3(<sym y>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // y6 = ld y
  Rsh_Fir_reg_y6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // y7 = force? y6
  Rsh_Fir_reg_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y6_);
  // checkMissing(y7)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(y7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2(y7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y7)
    Rsh_Fir_reg_y9_ = Rsh_Fir_reg_y7_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", y7)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_y9_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r20 = dyn __(y9, ind3)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_y9_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO) {
  // paste = ld paste
  Rsh_Fir_reg_paste = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // paste1 = force? paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paste);
  // checkMissing(paste1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_paste1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return paste1
  return Rsh_Fir_reg_paste1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
