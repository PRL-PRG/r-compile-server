#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2337378497_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2337378497_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2337378497_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3817890781_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3817890781_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3817890781_(SEXP CCP, SEXP RHO);
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
  // r = clos inner2337378497
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2337378497_, RHO, CCP);
  // st optimHess = r
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
SEXP Rsh_Fir_user_function_inner2337378497_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2337378497 dynamic dispatch ([par, fn, gr, `...`, control])

  return Rsh_Fir_user_version_inner2337378497_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2337378497_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2337378497 version 0 (*, *, *, dots, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2337378497/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_fn;  // fn
  SEXP Rsh_Fir_reg_gr;  // gr
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_control;  // control
  SEXP Rsh_Fir_reg_gr_isMissing;  // gr_isMissing
  SEXP Rsh_Fir_reg_gr_orDefault;  // gr_orDefault
  SEXP Rsh_Fir_reg_control_isMissing;  // control_isMissing
  SEXP Rsh_Fir_reg_control_orDefault;  // control_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_gr1_;  // gr1
  SEXP Rsh_Fir_reg_gr2_;  // gr2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_par1_;  // par1
  SEXP Rsh_Fir_reg_par2_;  // par2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_npar;  // npar
  SEXP Rsh_Fir_reg_npar1_;  // npar1
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_npar2_;  // npar2
  SEXP Rsh_Fir_reg_npar3_;  // npar3
  SEXP Rsh_Fir_reg_rep_int1_;  // rep_int1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_control1_;  // control1
  SEXP Rsh_Fir_reg_control2_;  // control2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_control4_;  // control4
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_control11_;  // control11
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_control12_;  // control12
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_control13_;  // control13
  SEXP Rsh_Fir_reg_control14_;  // control14
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_C_optimhess;  // C_optimhess
  SEXP Rsh_Fir_reg_C_optimhess1_;  // C_optimhess1
  SEXP Rsh_Fir_reg_par3_;  // par3
  SEXP Rsh_Fir_reg_par4_;  // par4
  SEXP Rsh_Fir_reg_fn1_;  // fn1
  SEXP Rsh_Fir_reg_fn2_;  // fn2
  SEXP Rsh_Fir_reg_gr3_;  // gr3
  SEXP Rsh_Fir_reg_gr4_;  // gr4
  SEXP Rsh_Fir_reg_con;  // con
  SEXP Rsh_Fir_reg_con1_;  // con1
  SEXP Rsh_Fir_reg__External2_;  // _External2
  SEXP Rsh_Fir_reg_r28_;  // r28

  // Bind parameters
  Rsh_Fir_reg_par = PARAMS[0];
  Rsh_Fir_reg_fn = PARAMS[1];
  Rsh_Fir_reg_gr = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];
  Rsh_Fir_reg_control = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st par = par
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_par, RHO);
  (void)(Rsh_Fir_reg_par);
  // st fn = fn
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_fn, RHO);
  (void)(Rsh_Fir_reg_fn);
  // gr_isMissing = missing.0(gr)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_gr;
  Rsh_Fir_reg_gr_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if gr_isMissing then L0(NULL) else L0(gr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_gr_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_gr_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(gr)
    Rsh_Fir_reg_gr_orDefault = Rsh_Fir_reg_gr;
    goto L0_;
  }

L0_:;
  // st gr = gr_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_gr_orDefault, RHO);
  (void)(Rsh_Fir_reg_gr_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // control_isMissing = missing.0(control)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_control;
  Rsh_Fir_reg_control_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if control_isMissing then L1() else L2(control)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_control_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(control)
    Rsh_Fir_reg_control_orDefault = Rsh_Fir_reg_control;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   list = ldf list in base;
  //   r2 = dyn list();
  //   goto L0(r2);
  // L2():
  //   r = dyn base();
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2337378497_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_control_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st control = control_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_control_orDefault, RHO);
  (void)(Rsh_Fir_reg_control_orDefault);
  // r4 = clos inner3817890781
  Rsh_Fir_reg_r4_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3817890781_, RHO, CCP);
  // st fn1 = r4
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L3_:;
  // r7 = `!`(r6)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L16() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r9_ = Rsh_const(CCP, 3);
  goto L5_;

L5_:;
  // st gr1 = r9
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L6_:;
  // st npar = r11
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L7_:;
  // st con = r14
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // control1 = ld control
  Rsh_Fir_reg_control1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

L8_:;
  // sym5 = ldf `rep.int`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf `rep.int` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard5 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L9_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r21 = dyn list1(1.0, r16, r19)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

L10_:;
  // st con = dx1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym7 = ldf `.External2`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base7 = ldf `.External2` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard7 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L11_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r25 = dyn ___(l5, control12, r23)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_control12_;
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L10(r25)
  // L10(r25)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r25_;
  goto L10_;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r27
  return Rsh_Fir_reg_r27_;

L13_:;
  // gr1 = ld gr
  Rsh_Fir_reg_gr1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r5 = dyn base1(<sym gr>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D0_:;
  // deopt 4 [gr1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_gr1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // gr2 = force? gr1
  Rsh_Fir_reg_gr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gr1_);
  // checkMissing(gr2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_gr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `==`(gr2, NULL)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_gr2_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L3(c)
  // L3(c)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_c;
  goto L3_;

L16_:;
  // r8 = clos inner3817890781
  Rsh_Fir_reg_r8_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3817890781_, RHO, CCP);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L5_;

L18_:;
  // par1 = ld par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D1()
  // L20()
  goto L20_;

L19_:;
  // r10 = dyn base2(<sym par>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L6_;

D1_:;
  // deopt 15 [par1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_par1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // par2 = force? par1
  Rsh_Fir_reg_par2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_par1_);
  // checkMissing(par2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_par2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r12 = dyn length(par2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_par2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L21() else D2()
  // L21()
  goto L21_;

D2_:;
  // deopt 18 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L6_;

L22_:;
  // sym4 = ldf `rep.int`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf `rep.int` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard4 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L23_:;
  // r13 = dyn base3[fnscale, parscale, ndeps](1.0, <lang rep.int(1.0, npar)>, <lang rep.int(0.001, npar)>)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

L24_:;
  // npar = ld npar
  Rsh_Fir_reg_npar = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

L25_:;
  // r15 = dyn base4(1.0, <sym npar>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L8_;

D3_:;
  // deopt 27 [npar]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_npar;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L26_:;
  // npar1 = force? npar
  Rsh_Fir_reg_npar1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npar);
  // checkMissing(npar1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_npar1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r17 = dyn rep_int(1.0, npar1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_npar1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

D4_:;
  // deopt 30 [r17]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L8_;

L28_:;
  // npar2 = ld npar
  Rsh_Fir_reg_npar2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

L29_:;
  // r18 = dyn base5(0.001, <sym npar>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D5_:;
  // deopt 35 [npar2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_npar2_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // npar3 = force? npar2
  Rsh_Fir_reg_npar3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npar2_);
  // checkMissing(npar3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_npar3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r20 = dyn rep_int1(0.001, npar3)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_npar3_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

D6_:;
  // deopt 38 [r20]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L9(r20)
  // L9(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L9_;

D7_:;
  // deopt 41 [r21]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r21_;
  goto L7_;

D8_:;
  // deopt 43 [control1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_control1_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // control2 = force? control1
  Rsh_Fir_reg_control2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control1_);
  // checkMissing(control2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_control2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // l = ld con
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c2 then L34() else L35(control2, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L35(control2, l)
    Rsh_Fir_reg_control4_ = Rsh_Fir_reg_control2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L35_;
  }

L34_:;
  // dr = tryDispatchBuiltin.0("[<-", l, control2)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_control2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args28);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc then L36() else L35(control2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L36()
    goto L36_;
  } else {
  // L35(control2, dr)
    Rsh_Fir_reg_control4_ = Rsh_Fir_reg_control2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L35_;
  }

L35_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard6 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L36_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L10(dx)
  // L10(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L10_;

L37_:;
  // control13 = ld control
  Rsh_Fir_reg_control13_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

L38_:;
  // r22 = dyn base6(<sym control>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L11(control4, l2, control2, r22)
  // L11(control4, l2, control2, r22)
  Rsh_Fir_reg_control11_ = Rsh_Fir_reg_control4_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_control12_ = Rsh_Fir_reg_control2_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L11_;

D9_:;
  // deopt 48 [control4, l2, control2, control13]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_control4_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_control2_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_control13_;
  Rsh_Fir_deopt(48, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // control14 = force? control13
  Rsh_Fir_reg_control14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_control13_);
  // checkMissing(control14)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_control14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r24 = dyn names(control14)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_control14_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

D10_:;
  // deopt 51 [control4, l2, control2, r24]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_control4_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_control2_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(51, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L11(control4, l2, control2, r24)
  // L11(control4, l2, control2, r24)
  Rsh_Fir_reg_control11_ = Rsh_Fir_reg_control4_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_control12_ = Rsh_Fir_reg_control2_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L11_;

L41_:;
  // C_optimhess = ld C_optimhess
  Rsh_Fir_reg_C_optimhess = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L43() else D11()
  // L43()
  goto L43_;

L42_:;
  // r26 = dyn base7(<sym C_optimhess>, <sym par>, <sym fn1>, <sym gr1>, <sym con>)
  SEXP Rsh_Fir_array_args35[5];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args35[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args35[4] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names12[5];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 5, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(r26)
  // L12(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L12_;

D11_:;
  // deopt 56 [C_optimhess]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_C_optimhess;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L43_:;
  // C_optimhess1 = force? C_optimhess
  Rsh_Fir_reg_C_optimhess1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_optimhess);
  // checkMissing(C_optimhess1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_C_optimhess1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // par3 = ld par
  Rsh_Fir_reg_par3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

D12_:;
  // deopt 58 [par3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_par3_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L44_:;
  // par4 = force? par3
  Rsh_Fir_reg_par4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_par3_);
  // checkMissing(par4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_par4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // fn1 = ld fn1
  Rsh_Fir_reg_fn1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L45() else D13()
  // L45()
  goto L45_;

D13_:;
  // deopt 60 [fn1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_fn1_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L45_:;
  // fn2 = force? fn1
  Rsh_Fir_reg_fn2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fn1_);
  // checkMissing(fn2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_fn2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // gr3 = ld gr1
  Rsh_Fir_reg_gr3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L46() else D14()
  // L46()
  goto L46_;

D14_:;
  // deopt 62 [gr3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_gr3_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L46_:;
  // gr4 = force? gr3
  Rsh_Fir_reg_gr4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gr3_);
  // checkMissing(gr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_gr4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // con = ld con
  Rsh_Fir_reg_con = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L47() else D15()
  // L47()
  goto L47_;

D15_:;
  // deopt 64 [con]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_con;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L47_:;
  // con1 = force? con
  Rsh_Fir_reg_con1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con);
  // checkMissing(con1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_con1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // _External2 = ldf `.External2` in base
  Rsh_Fir_reg__External2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r28 = dyn _External2(C_optimhess1, par4, fn2, gr4, con1)
  SEXP Rsh_Fir_array_args41[5];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_C_optimhess1_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_par4_;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_fn2_;
  Rsh_Fir_array_args41[3] = Rsh_Fir_reg_gr4_;
  Rsh_Fir_array_args41[4] = Rsh_Fir_reg_con1_;
  SEXP Rsh_Fir_array_arg_names13[5];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External2_, 5, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L48() else D16()
  // L48()
  goto L48_;

D16_:;
  // deopt 67 [r28]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner2337378497_(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner3817890781_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3817890781 dynamic dispatch ([par])

  return Rsh_Fir_user_version_inner3817890781_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3817890781_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3817890781 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3817890781/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_par1;  // par
  SEXP Rsh_Fir_reg_fn1;  // fn
  SEXP Rsh_Fir_reg_par1_1;  // par1
  SEXP Rsh_Fir_reg_par2_1;  // par2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_ddd1;  // ddd
  SEXP Rsh_Fir_reg_r1_1;  // r1

  // Bind parameters
  Rsh_Fir_reg_par1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st par = par
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_par1, RHO);
  (void)(Rsh_Fir_reg_par1);
  // fn = ldf fn
  Rsh_Fir_reg_fn1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   par1 = ld par;
  //   par2 = force? par1;
  //   checkMissing(par2);
  //   return par2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3817890781_, CCP, RHO);
  // ddd = ld `...`
  Rsh_Fir_reg_ddd1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // r1 = dyn fn[, `...`](p, ddd)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fn1, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner3817890781_(SEXP CCP, SEXP RHO) {
  // par1 = ld par
  Rsh_Fir_reg_par1_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // par2 = force? par1
  Rsh_Fir_reg_par2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_par1_1);
  // checkMissing(par2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_par2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return par2
  return Rsh_Fir_reg_par2_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
