#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2301703210_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2301703210_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2301703210_(SEXP CCP, SEXP RHO);
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
  // r = clos inner2301703210
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2301703210_, RHO, CCP);
  // st `.renameClassDef` = r
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
SEXP Rsh_Fir_user_function_inner2301703210_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2301703210 dynamic dispatch ([def, className])

  return Rsh_Fir_user_version_inner2301703210_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2301703210_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2301703210 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2301703210/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_def;  // def
  SEXP Rsh_Fir_reg_className;  // className
  SEXP Rsh_Fir_reg_validObject;  // validObject
  SEXP Rsh_Fir_reg_def1_;  // def1
  SEXP Rsh_Fir_reg_def2_;  // def2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_className1_;  // className1
  SEXP Rsh_Fir_reg_className2_;  // className2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_comp;  // comp
  SEXP Rsh_Fir_reg_comp1_;  // comp1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_className3_;  // className3
  SEXP Rsh_Fir_reg_className4_;  // className4
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_className7_;  // className7
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_className8_;  // className8
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_className11_;  // className11
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_className12_;  // className12
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_className14_;  // className14
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_comp2_;  // comp2
  SEXP Rsh_Fir_reg_comp3_;  // comp3
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_comp4_;  // comp4
  SEXP Rsh_Fir_reg_comp5_;  // comp5
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_className17_;  // className17
  SEXP Rsh_Fir_reg_className18_;  // className18
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_className21_;  // className21
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_className22_;  // className22
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_className25_;  // className25
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_className26_;  // className26
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_className28_;  // className28
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_comp6_;  // comp6
  SEXP Rsh_Fir_reg_comp7_;  // comp7
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_def3_;  // def3
  SEXP Rsh_Fir_reg_def4_;  // def4

  // Bind parameters
  Rsh_Fir_reg_def = PARAMS[0];
  Rsh_Fir_reg_className = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st def = def
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_def, RHO);
  (void)(Rsh_Fir_reg_def);
  // st className = className
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_className, RHO);
  (void)(Rsh_Fir_reg_className);
  // validObject = ldf validObject
  Rsh_Fir_reg_validObject = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L0_:;
  // s = toForSeq(r5)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 4);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c = `<`.1(l1, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c then L18() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L4()
    goto L4_;
  }

L2_:;
  // ___1 = ldf `@<-`
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L24() else D8()
  // L24()
  goto L24_;

L3_:;
  // st comp = dx3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L1(i14)
  // L1(i14)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i14_;
  goto L1_;

L4_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // className3 = ld className
  Rsh_Fir_reg_className3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L5_:;
  // s1 = toForSeq(r13)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // l12 = length(s1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l12_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // i17 = 0
  Rsh_Fir_reg_i17_ = Rsh_const(CCP, 4);
  // goto L6(i17)
  // L6(i17)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i17_;
  goto L6_;

L6_:;
  // i19 = `+`.1(i18, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_i19_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // c3 = `<`.1(l12, i19)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if c3 then L36() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L36()
    goto L36_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // ___3 = ldf `@<-`
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L42() else D17()
  // L42()
  goto L42_;

L8_:;
  // st comp = dx7
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L6(i31)
  // L6(i31)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i31_;
  goto L6_;

L9_:;
  // x1 = `[[`(s1, i19, NULL, TRUE)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // className17 = ld className
  Rsh_Fir_reg_className17_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L37() else D15()
  // L37()
  goto L37_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   def1 = ld def;
  //   def2 = force? def1;
  //   checkMissing(def2);
  //   return def2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2301703210_, CCP, RHO);
  // r1 = dyn validObject(p)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_validObject, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // className1 = ld className
  Rsh_Fir_reg_className1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

D2_:;
  // deopt 4 [className1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_className1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // className2 = force? className1
  Rsh_Fir_reg_className2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_className1_);
  // checkMissing(className2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_className2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // l = ld def
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ___ = ldf `@<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 7 [className2, l, className2]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_className2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_className2_;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // r2 = dyn ___(l, NULL, "className", className2)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args13[3] = Rsh_Fir_reg_className2_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D4_:;
  // deopt 10 [className2, r2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_className2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // st def = r2
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // __ = ldf `@` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r3 = dyn __(<sym def>, <sym contains>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // st comp = r3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym = ldf seq_along
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // comp = ld comp
  Rsh_Fir_reg_comp = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L16_:;
  // r4 = dyn base(<sym comp>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;

D5_:;
  // deopt 16 [comp]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_comp;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // comp1 = force? comp
  Rsh_Fir_reg_comp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_comp);
  // checkMissing(comp1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_comp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r6 = seq_along(comp1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_comp1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L18_:;
  // comp2 = ld comp
  Rsh_Fir_reg_comp2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D6_:;
  // deopt 19 [i2, className3]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_className3_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // className4 = force? className3
  Rsh_Fir_reg_className4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_className3_);
  // checkMissing(className4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_className4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // l2 = ld comp
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c1 = `is.object`(l2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L21(i2, className4, l2, className4, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L21(i2, className4, l2, className4, l2)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_className7_ = Rsh_Fir_reg_className4_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_className8_ = Rsh_Fir_reg_className4_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l2_;
    goto L21_;
  }

L20_:;
  // dr = tryDispatchBuiltin.1("[[", l2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc then L22() else L21(i2, className4, l2, className4, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L22()
    goto L22_;
  } else {
  // L21(i2, className4, l2, className4, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_className7_ = Rsh_Fir_reg_className4_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_className8_ = Rsh_Fir_reg_className4_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr;
    goto L21_;
  }

L21_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

L22_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L2(i2, className4, l2, className4, dx)
  // L2(i2, className4, l2, className4, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_className11_ = Rsh_Fir_reg_className4_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_className12_ = Rsh_Fir_reg_className4_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D7_:;
  // deopt 23 [i6, className7, l5, className8, l6, i9]
  SEXP Rsh_Fir_array_deopt_stack6[6];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_className7_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_className8_;
  Rsh_Fir_array_deopt_stack6[4] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack6[5] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(23, 6, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r7 = dyn __1(l6, i10)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(i6, className7, l5, className8, r7)
  // L2(i6, className7, l5, className8, r7)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_className11_ = Rsh_Fir_reg_className7_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_className12_ = Rsh_Fir_reg_className8_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L2_;

D8_:;
  // deopt 27 [i8, className11, l8, dx1, className12]
  SEXP Rsh_Fir_array_deopt_stack7[5];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_className11_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack7[4] = Rsh_Fir_reg_className12_;
  Rsh_Fir_deopt(27, 5, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // r8 = dyn ___1(dx1, NULL, "subClass", className12)
  SEXP Rsh_Fir_array_args25[4];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args25[3] = Rsh_Fir_reg_className12_;
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L25() else D9()
  // L25()
  goto L25_;

D9_:;
  // deopt 30 [i8, className11, l8, r8]
  SEXP Rsh_Fir_array_deopt_stack8[4];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_className11_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(30, 4, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // c2 = `is.object`(l8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c2 then L26() else L27(i8, className11, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L26()
    goto L26_;
  } else {
  // L27(i8, className11, l8)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_className14_ = Rsh_Fir_reg_className11_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L27_;
  }

L26_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l8, r8)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args27);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc1 then L28() else L27(i8, className11, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L28()
    goto L28_;
  } else {
  // L27(i8, className11, dr2)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_className14_ = Rsh_Fir_reg_className11_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr2_;
    goto L27_;
  }

L27_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L28_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L3(i8, dx2)
  // L3(i8, dx2)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

D10_:;
  // deopt 31 [i12, className14, l10, r8, i15]
  SEXP Rsh_Fir_array_deopt_stack9[5];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_className14_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack9[4] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(31, 5, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L29_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r9 = dyn ____(l10, r8, i16)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(i12, r9)
  // L3(i12, r9)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r9_;
  goto L3_;

D11_:;
  // deopt 38 [comp2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_comp2_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L30_:;
  // comp3 = force? comp2
  Rsh_Fir_reg_comp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_comp2_);
  // checkMissing(comp3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_comp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // l11 = ld def
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ___2 = ldf `@<-`
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

D12_:;
  // deopt 41 [comp3, l11, comp3]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_comp3_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_comp3_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L31_:;
  // r10 = dyn ___2(l11, NULL, "contains", comp3)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args32[3] = Rsh_Fir_reg_comp3_;
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 4, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

D13_:;
  // deopt 44 [comp3, r10]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_comp3_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L32_:;
  // st def = r10
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // __2 = ldf `@` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r11 = dyn __2(<sym def>, <sym subclasses>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // st comp = r11
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym1 = ldf seq_along
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf seq_along in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // comp4 = ld comp
  Rsh_Fir_reg_comp4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L35() else D14()
  // L35()
  goto L35_;

L34_:;
  // r12 = dyn base1(<sym comp>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D14_:;
  // deopt 50 [comp4]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_comp4_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L35_:;
  // comp5 = force? comp4
  Rsh_Fir_reg_comp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_comp4_);
  // checkMissing(comp5)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_comp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r14 = seq_along(comp5)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_comp5_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L5_;

L36_:;
  // comp6 = ld comp
  Rsh_Fir_reg_comp6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L48() else D20()
  // L48()
  goto L48_;

D15_:;
  // deopt 53 [i19, className17]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_className17_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L37_:;
  // className18 = force? className17
  Rsh_Fir_reg_className18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_className17_);
  // checkMissing(className18)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_className18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // l13 = ld comp
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c4 = `is.object`(l13)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c4 then L38() else L39(i19, className18, l13, className18, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L38()
    goto L38_;
  } else {
  // L39(i19, className18, l13, className18, l13)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_className21_ = Rsh_Fir_reg_className18_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l13_;
    Rsh_Fir_reg_className22_ = Rsh_Fir_reg_className18_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l13_;
    goto L39_;
  }

L38_:;
  // dr4 = tryDispatchBuiltin.1("[[", l13)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc2 then L40() else L39(i19, className18, l13, className18, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L40()
    goto L40_;
  } else {
  // L39(i19, className18, l13, className18, dr4)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_className21_ = Rsh_Fir_reg_className18_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l13_;
    Rsh_Fir_reg_className22_ = Rsh_Fir_reg_className18_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr4_;
    goto L39_;
  }

L39_:;
  // i26 = ld i
  Rsh_Fir_reg_i26_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L41() else D16()
  // L41()
  goto L41_;

L40_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L7(i19, className18, l13, className18, dx4)
  // L7(i19, className18, l13, className18, dx4)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_className25_ = Rsh_Fir_reg_className18_;
  Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_className26_ = Rsh_Fir_reg_className18_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L7_;

D16_:;
  // deopt 57 [i23, className21, l16, className22, l17, i26]
  SEXP Rsh_Fir_array_deopt_stack15[6];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_className21_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_className22_;
  Rsh_Fir_array_deopt_stack15[4] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack15[5] = Rsh_Fir_reg_i26_;
  Rsh_Fir_deopt(57, 6, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L41_:;
  // i27 = force? i26
  Rsh_Fir_reg_i27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i26_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r15 = dyn __3(l17, i27)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(i23, className21, l16, className22, r15)
  // L7(i23, className21, l16, className22, r15)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_className25_ = Rsh_Fir_reg_className21_;
  Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_className26_ = Rsh_Fir_reg_className22_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r15_;
  goto L7_;

D17_:;
  // deopt 61 [i25, className25, l19, dx5, className26]
  SEXP Rsh_Fir_array_deopt_stack16[5];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_className25_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack16[4] = Rsh_Fir_reg_className26_;
  Rsh_Fir_deopt(61, 5, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L42_:;
  // r16 = dyn ___3(dx5, NULL, "superClass", className26)
  SEXP Rsh_Fir_array_args44[4];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args44[3] = Rsh_Fir_reg_className26_;
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 4, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L43() else D18()
  // L43()
  goto L43_;

D18_:;
  // deopt 64 [i25, className25, l19, r16]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_className25_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(64, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L43_:;
  // c5 = `is.object`(l19)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c5 then L44() else L45(i25, className25, l19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L44()
    goto L44_;
  } else {
  // L45(i25, className25, l19)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_className28_ = Rsh_Fir_reg_className25_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l19_;
    goto L45_;
  }

L44_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l19, r16)
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args46[2] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args46);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc3 then L46() else L45(i25, className25, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L46()
    goto L46_;
  } else {
  // L45(i25, className25, dr6)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_className28_ = Rsh_Fir_reg_className25_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_dr6_;
    goto L45_;
  }

L45_:;
  // i32 = ld i
  Rsh_Fir_reg_i32_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L47() else D19()
  // L47()
  goto L47_;

L46_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L8(i25, dx6)
  // L8(i25, dx6)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L8_;

D19_:;
  // deopt 65 [i29, className28, l21, r16, i32]
  SEXP Rsh_Fir_array_deopt_stack18[5];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_className28_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack18[4] = Rsh_Fir_reg_i32_;
  Rsh_Fir_deopt(65, 5, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L47_:;
  // i33 = force? i32
  Rsh_Fir_reg_i33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i32_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r17 = dyn ____1(l21, r16, i33)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_i33_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(i29, r17)
  // L8(i29, r17)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r17_;
  goto L8_;

D20_:;
  // deopt 72 [comp6]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_comp6_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L48_:;
  // comp7 = force? comp6
  Rsh_Fir_reg_comp7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_comp6_);
  // checkMissing(comp7)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_comp7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // l22 = ld def
  Rsh_Fir_reg_l22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ___4 = ldf `@<-`
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L49() else D21()
  // L49()
  goto L49_;

D21_:;
  // deopt 75 [comp7, l22, comp7]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_comp7_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_comp7_;
  Rsh_Fir_deopt(75, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L49_:;
  // r18 = dyn ___4(l22, NULL, "subclasses", comp7)
  SEXP Rsh_Fir_array_args51[4];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args51[3] = Rsh_Fir_reg_comp7_;
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 4, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L50() else D22()
  // L50()
  goto L50_;

D22_:;
  // deopt 78 [comp7, r18]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_comp7_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L50_:;
  // st def = r18
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // def3 = ld def
  Rsh_Fir_reg_def3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L51() else D23()
  // L51()
  goto L51_;

D23_:;
  // deopt 80 [def3]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_def3_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L51_:;
  // def4 = force? def3
  Rsh_Fir_reg_def4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def3_);
  // checkMissing(def4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_def4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return def4
  return Rsh_Fir_reg_def4_;
}
SEXP Rsh_Fir_user_promise_inner2301703210_(SEXP CCP, SEXP RHO) {
  // def1 = ld def
  Rsh_Fir_reg_def1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // def2 = force? def1
  Rsh_Fir_reg_def2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_def1_);
  // checkMissing(def2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_def2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return def2
  return Rsh_Fir_reg_def2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
