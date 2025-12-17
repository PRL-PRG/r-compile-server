#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner64320599_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner64320599_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner64320599_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner64320599_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner64320599
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner64320599_, RHO, CCP);
  // st `logLik.glm` = r
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
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner64320599 dynamic dispatch ([object, `...`])

  return Rsh_Fir_user_version_inner64320599_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner64320599 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner64320599/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_family;  // family
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_family1_;  // family1
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_dispersion;  // dispersion
  SEXP Rsh_Fir_reg_dispersion1_;  // dispersion1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_dispersion2_;  // dispersion2
  SEXP Rsh_Fir_reg_dispersion3_;  // dispersion3
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_fam;  // fam
  SEXP Rsh_Fir_reg_fam1_;  // fam1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_val1_;  // val1

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L0_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L14() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // family = ldf family
  Rsh_Fir_reg_family = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

L3_:;
  // r19 = `!`(r18)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c5 then L38() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L38()
    goto L38_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

L5_:;
  // c6 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c6 then L43() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L43()
    goto L43_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L7(NULL)
  // L7(NULL)
  Rsh_Fir_reg_r24_ = Rsh_const(CCP, 6);
  goto L7_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // p8 = ld p
  Rsh_Fir_reg_p8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L52() else D14()
  // L52()
  goto L52_;

L9_:;
  // goto L8()
  // L8()
  goto L8_;

L10_:;
  // l = ld val
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L69() else D19()
  // L69()
  goto L69_;

L11_:;
  // r42 = `!`(r39)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r43 = dyn sum(r42)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

L12_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn missing(<sym ...>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L13_:;
  // r = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L14_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r4 = dyn warning("extra arguments discarded")
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L2()
  // L2()
  goto L2_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   return object2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_, CCP, RHO);
  // r7 = dyn family(p)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_family, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 13 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // c1 = `is.object`(r7)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L22(r7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L22(r7)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
    goto L22_;
  }

L20_:;
  // st fam = dx1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // family1 = ldf family
  Rsh_Fir_reg_family1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L21_:;
  // dr = tryDispatchBuiltin.1("$", r7)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(dr)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // r10 = `$`(r9, <sym family>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L20(r10)
  // L20(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L20_;

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L20(dx)
  // L20(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L20_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p1 = prom<V +>{
  //   object3 = ld object;
  //   object4 = force? object3;
  //   checkMissing(object4);
  //   return object4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_1, CCP, RHO);
  // r12 = dyn family1(p1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_family1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L25() else D5()
  // L25()
  goto L25_;

D5_:;
  // deopt 19 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L25_:;
  // c2 = `is.object`(r12)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c2 then L27() else L28(r12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L28(r12)
    Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_;
    goto L28_;
  }

L26_:;
  // st dispersion = dx3
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L27_:;
  // dr2 = tryDispatchBuiltin.1("$", r12)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L29() else L28(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr2)
    Rsh_Fir_reg_r14_ = Rsh_Fir_reg_dr2_;
    goto L28_;
  }

L28_:;
  // r15 = `$`(r14, <sym dispersion>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L26(r15)
  // L26(r15)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L26_;

L29_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L26(dx2)
  // L26(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L26_;

D6_:;
  // deopt 22 [object5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c3 then L32() else L33(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L32()
    goto L32_;
  } else {
  // L33(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L33_;
  }

L31_:;
  // st p = dx5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L32_:;
  // dr4 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc2 then L34() else L33(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L34()
    goto L34_;
  } else {
  // L33(dr4)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr4_;
    goto L33_;
  }

L33_:;
  // r16 = `$`(object8, <sym rank>)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L31(r16)
  // L31(r16)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r16_;
  goto L31_;

L34_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L31(dx4)
  // L31(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L31_;

L35_:;
  // dispersion = ld dispersion
  Rsh_Fir_reg_dispersion = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

L36_:;
  // r17 = dyn base1(<sym dispersion>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r17)
  // L3(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L3_;

D7_:;
  // deopt 27 [dispersion]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dispersion;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L37_:;
  // dispersion1 = force? dispersion
  Rsh_Fir_reg_dispersion1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dispersion);
  // checkMissing(dispersion1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dispersion1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c4 = `==`(dispersion1, NULL)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dispersion1_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L3(c4)
  // L3(c4)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_c4_;
  goto L3_;

L38_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // dispersion2 = ld dispersion
  Rsh_Fir_reg_dispersion2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

L40_:;
  // r20 = dyn base2(<sym dispersion>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r20)
  // L5(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L5_;

D8_:;
  // deopt 33 [dispersion2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_dispersion2_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L41_:;
  // dispersion3 = force? dispersion2
  Rsh_Fir_reg_dispersion3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dispersion2_);
  // checkMissing(dispersion3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dispersion3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r22 = dyn is_na(dispersion3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dispersion3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L42() else D9()
  // L42()
  goto L42_;

D9_:;
  // deopt 36 [r22]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L5(r22)
  // L5(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L5_;

L43_:;
  // p2 = ld p
  Rsh_Fir_reg_p2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

D10_:;
  // deopt 37 [p2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // p3 = force? p2
  Rsh_Fir_reg_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r23 = `+`(p3, 1.0)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // st p = r23
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L7(r23)
  // L7(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L7_;

D11_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p4 = prom<V +>{
  //   fam = ld fam;
  //   fam1 = force? fam;
  //   checkMissing(fam1);
  //   return fam1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_2, CCP, RHO);
  // p5 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r28):
  //   return r28;
  // L1():
  //   c7 = ldf c in base;
  //   r29 = dyn c7("gaussian", "Gamma", "inverse.gaussian");
  //   goto L0(r29);
  // L2():
  //   r27 = dyn base3("gaussian", "Gamma", "inverse.gaussian");
  //   goto L0(r27);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner64320599_3, CCP, RHO);
  // r31 = dyn _in_(p4, p5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L48() else D12()
  // L48()
  goto L48_;

D12_:;
  // deopt 48 [r31]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L48_:;
  // c8 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c8 then L49() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L49()
    goto L49_;
  } else {
  // L9()
    goto L9_;
  }

L49_:;
  // p6 = ld p
  Rsh_Fir_reg_p6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

D13_:;
  // deopt 49 [p6]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L50_:;
  // p7 = force? p6
  Rsh_Fir_reg_p7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p6_);
  // checkMissing(p7)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r32 = `+`(p7, 1.0)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // st p = r32
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // goto L8()
  // L8()
  goto L8_;

D14_:;
  // deopt 56 [p8]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L52_:;
  // p9 = force? p8
  Rsh_Fir_reg_p9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p8_);
  // checkMissing(p9)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L53() else D15()
  // L53()
  goto L53_;

D15_:;
  // deopt 57 [p9, object9]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L53_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(object10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c9 then L55() else L56(p9, object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L55()
    goto L55_;
  } else {
  // L56(p9, object10)
    Rsh_Fir_reg_p11_ = Rsh_Fir_reg_p9_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L56_;
  }

L54_:;
  // r34 = `/`(dx7, 2.0)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // r35 = `-`(p13, r34)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // st val = r35
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // sym4 = ldf sum
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf sum in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard4 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L55_:;
  // dr6 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc3 then L57() else L56(p9, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L57()
    goto L57_;
  } else {
  // L56(p9, dr6)
    Rsh_Fir_reg_p11_ = Rsh_Fir_reg_p9_;
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr6_;
    goto L56_;
  }

L56_:;
  // r33 = `$`(object12, <sym aic>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L54(p11, r33)
  // L54(p11, r33)
  Rsh_Fir_reg_p13_ = Rsh_Fir_reg_p11_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r33_;
  goto L54_;

L57_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L54(p9, dx6)
  // L54(p9, dx6)
  Rsh_Fir_reg_p13_ = Rsh_Fir_reg_p9_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L54_;

L58_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard5 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L59_:;
  // r36 = dyn base4(<lang `!`(is.na(`$`(object, residuals)))>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(r36)
  // L10(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L10_;

L60_:;
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L62() else D16()
  // L62()
  goto L62_;

L61_:;
  // r38 = dyn base5(<lang `$`(object, residuals)>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r38)
  // L11(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L11_;

D16_:;
  // deopt 68 [object13]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_object13_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L62_:;
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(object14)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c10 then L64() else L65(object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L64()
    goto L64_;
  } else {
  // L65(object14)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L65_;
  }

L63_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r41 = dyn is_na1(dx9)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

L64_:;
  // dr8 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc4 then L66() else L65(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L66()
    goto L66_;
  } else {
  // L65(dr8)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr8_;
    goto L65_;
  }

L65_:;
  // r40 = `$`(object16, <sym residuals>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L63(r40)
  // L63(r40)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r40_;
  goto L63_;

L66_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L63(dx8)
  // L63(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L63_;

D17_:;
  // deopt 72 [r41]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L11(r41)
  // L11(r41)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r41_;
  goto L11_;

D18_:;
  // deopt 75 [r43]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L10(r43)
  // L10(r43)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r43_;
  goto L10_;

D19_:;
  // deopt 77 [r37, l, r37]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(77, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L69_:;
  // r44 = dyn attr__(l, NULL, "nobs", r37)
  SEXP Rsh_Fir_array_args69[4];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args69[3] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L70() else D20()
  // L70()
  goto L70_;

D20_:;
  // deopt 80 [r37, r44]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(80, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L70_:;
  // st val = r44
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // p14 = ld p
  Rsh_Fir_reg_p14_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L71() else D21()
  // L71()
  goto L71_;

D21_:;
  // deopt 82 [p14]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L71_:;
  // p15 = force? p14
  Rsh_Fir_reg_p15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p14_);
  // checkMissing(p15)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // l1 = ld val
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L72() else D22()
  // L72()
  goto L72_;

D22_:;
  // deopt 85 [p15, l1, p15]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_p15_;
  Rsh_Fir_deopt(85, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L72_:;
  // r45 = dyn attr__1(l1, NULL, "df", p15)
  SEXP Rsh_Fir_array_args71[4];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args71[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args71[3] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L73() else D23()
  // L73()
  goto L73_;

D23_:;
  // deopt 88 [p15, r45]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L73_:;
  // st val = r45
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // l2 = ld val
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L74() else D24()
  // L74()
  goto L74_;

D24_:;
  // deopt 93 ["logLik", l2, "logLik"]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_const(CCP, 32);
  Rsh_Fir_deopt(93, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L74_:;
  // r46 = dyn class__(l2, NULL, "logLik")
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L75() else D25()
  // L75()
  goto L75_;

D25_:;
  // deopt 95 ["logLik", r46]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(95, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L75_:;
  // st val = r46
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L76() else D26()
  // L76()
  goto L76_;

D26_:;
  // deopt 97 [val]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_val;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L76_:;
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return val1
  return Rsh_Fir_reg_val1_;
}
SEXP Rsh_Fir_user_promise_inner64320599_(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return object2
  return Rsh_Fir_reg_object2_;
}
SEXP Rsh_Fir_user_promise_inner64320599_1(SEXP CCP, SEXP RHO) {
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return object4
  return Rsh_Fir_reg_object4_;
}
SEXP Rsh_Fir_user_promise_inner64320599_2(SEXP CCP, SEXP RHO) {
  // fam = ld fam
  Rsh_Fir_reg_fam = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // fam1 = force? fam
  Rsh_Fir_reg_fam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fam);
  // checkMissing(fam1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_fam1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return fam1
  return Rsh_Fir_reg_fam1_;
}
SEXP Rsh_Fir_user_promise_inner64320599_3(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r29 = dyn c7("gaussian", "Gamma", "inverse.gaussian")
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r27 = dyn base3("gaussian", "Gamma", "inverse.gaussian")
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
