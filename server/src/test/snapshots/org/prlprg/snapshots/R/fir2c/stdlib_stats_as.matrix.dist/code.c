#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st `as.matrix.dist` = r
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
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_size3_;  // size3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_size4_;  // size4
  SEXP Rsh_Fir_reg_size5_;  // size5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_size6_;  // size6
  SEXP Rsh_Fir_reg_size7_;  // size7
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_size8_;  // size8
  SEXP Rsh_Fir_reg_size9_;  // size9
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sequence_default;  // sequence_default
  SEXP Rsh_Fir_reg_n__1_;  // n__1
  SEXP Rsh_Fir_reg_n__2_;  // n__2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_s_1_;  // s_1
  SEXP Rsh_Fir_reg_s_2_;  // s_2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_df;  // df
  SEXP Rsh_Fir_reg_df1_;  // df1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_s_3_;  // s_3
  SEXP Rsh_Fir_reg_s_4_;  // s_4
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_size10_;  // size10
  SEXP Rsh_Fir_reg_size11_;  // size11
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sequence_default1_;  // sequence_default1
  SEXP Rsh_Fir_reg_n__3_;  // n__3
  SEXP Rsh_Fir_reg_n__4_;  // n__4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_df2_;  // df2
  SEXP Rsh_Fir_reg_df3_;  // df3
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_s_5_;  // s_5
  SEXP Rsh_Fir_reg_s_6_;  // s_6
  SEXP Rsh_Fir_reg_seq_int1_;  // seq_int1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_lo;  // lo
  SEXP Rsh_Fir_reg_lo1_;  // lo1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_up;  // up
  SEXP Rsh_Fir_reg_up1_;  // up1
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_size12_;  // size12
  SEXP Rsh_Fir_reg_size13_;  // size13
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_labels3_;  // labels3
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_df4_;  // df4
  SEXP Rsh_Fir_reg_df5_;  // df5

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf attr
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // st size = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L1_:;
  // goto L4()
  // L4()
  goto L4_;

L2_:;
  // st df = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // l3 = ld df
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c2 = `is.object`(l3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L25() else L26(x8, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L25()
    goto L25_;
  } else {
  // L26(x8, l3)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x8_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L26_;
  }

L3_:;
  // st df = dx3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // ____ = ldf `%||%`
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L30() else D14()
  // L30()
  goto L30_;

L5_:;
  // l6 = ld df
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L37() else D19()
  // L37()
  goto L37_;

L6_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<sym x>, "Size")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn attr(x2, "Size")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   size = ld size;
  //   size1 = force? size;
  //   checkMissing(size1);
  //   return size1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_, CCP, RHO);
  // p1 = prom<V +>{
  //   size2 = ld size;
  //   size3 = force? size2;
  //   checkMissing(size3);
  //   return size3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_1, CCP, RHO);
  // r5 = dyn matrix(0.0, p, p1)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // st df = r5
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // size4 = ld size
  Rsh_Fir_reg_size4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

D4_:;
  // deopt 15 [size4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_size4_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // size5 = force? size4
  Rsh_Fir_reg_size5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size4_);
  // checkMissing(size5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_size5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // r6 = `>`(size5, 1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_size5_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L13() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L1()
    goto L1_;
  }

L13_:;
  // size6 = ld size
  Rsh_Fir_reg_size6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L14() else D5()
  // L14()
  goto L14_;

D5_:;
  // deopt 19 [size6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_size6_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // size7 = force? size6
  Rsh_Fir_reg_size7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size6_);
  // checkMissing(size7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_size7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // r7 = `-`(size7, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_size7_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // r8 = `:`(r7, 1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // st `n..1` = r8
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // size8 = ld size
  Rsh_Fir_reg_size8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L15() else D6()
  // L15()
  goto L15_;

D6_:;
  // deopt 26 [size8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_size8_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L15_:;
  // size9 = force? size8
  Rsh_Fir_reg_size9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size8_);
  // checkMissing(size9)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_size9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // r9 = `+`(size9, 1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_size9_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // st `s.1` = r9
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sequence_default = ldf `sequence.default`
  Rsh_Fir_reg_sequence_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L16() else D7()
  // L16()
  goto L16_;

D7_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p2 = prom<V +>{
  //   n__1 = ld `n..1`;
  //   n__2 = force? n__1;
  //   checkMissing(n__2);
  //   return n__2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym1 = ldf `seq.int`;
  //   base1 = ldf `seq.int` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r12):
  //   return r12;
  // L2():
  //   s_1 = ld `s.1`;
  //   s_2 = force? s_1;
  //   checkMissing(s_2);
  //   sym2 = ldf length;
  //   base2 = ldf length in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L4() else L5();
  // L3():
  //   r11 = dyn base1(<sym s.1>, <lang length(df)>, <sym s.1>);
  //   goto L0(r11);
  // L1(r14):
  //   s_3 = ld `s.1`;
  //   s_4 = force? s_3;
  //   checkMissing(s_4);
  //   seq_int = ldf `seq.int` in base;
  //   r16 = dyn seq_int(s_2, r14, s_4);
  //   goto L0(r16);
  // L4():
  //   df = ld df;
  //   df1 = force? df;
  //   checkMissing(df1);
  //   length = ldf length in base;
  //   r15 = dyn length(df1);
  //   goto L1(r15);
  // L5():
  //   r13 = dyn base2(<sym df>);
  //   goto L1(r13);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_3, CCP, RHO);
  // p4 = prom<V +>{
  //   size10 = ld size;
  //   size11 = force? size10;
  //   checkMissing(size11);
  //   return size11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_4, CCP, RHO);
  // r19 = dyn sequence_default[, from, by](p2, p3, p4)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sequence_default, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L17() else D8()
  // L17()
  goto L17_;

D8_:;
  // deopt 38 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // st up = r19
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sequence_default1 = ldf `sequence.default`
  Rsh_Fir_reg_sequence_default1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L18() else D9()
  // L18()
  goto L18_;

D9_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p5 = prom<V +>{
  //   n__3 = ld `n..1`;
  //   n__4 = force? n__3;
  //   checkMissing(n__4);
  //   return n__4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_5, CCP, RHO);
  // p6 = prom<V +>{
  //   sym3 = ldf `seq.int`;
  //   base3 = ldf `seq.int` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L2() else L3();
  // L0(r22):
  //   return r22;
  // L2():
  //   sym4 = ldf length;
  //   base4 = ldf length in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L4() else L5();
  // L3():
  //   r21 = dyn base3(2, <lang `+`(length(df), 1)>, <sym s.1>);
  //   goto L0(r21);
  // L1(r24):
  //   r26 = `+`(r24, 1);
  //   s_5 = ld `s.1`;
  //   s_6 = force? s_5;
  //   checkMissing(s_6);
  //   seq_int1 = ldf `seq.int` in base;
  //   r27 = dyn seq_int1(2, r26, s_6);
  //   goto L0(r27);
  // L4():
  //   df2 = ld df;
  //   df3 = force? df2;
  //   checkMissing(df3);
  //   length1 = ldf length in base;
  //   r25 = dyn length1(df3);
  //   goto L1(r25);
  // L5():
  //   r23 = dyn base4(<sym df>);
  //   goto L1(r23);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_6, CCP, RHO);
  // r29 = dyn sequence_default1[, from](p5, p6)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sequence_default1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L19() else D10()
  // L19()
  goto L19_;

D10_:;
  // deopt 45 [r29]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // st lo = r29
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D11()
  // L20()
  goto L20_;

D11_:;
  // deopt 47 [x3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L20_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // l = ld df
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L22(x4, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L22(x4, l)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L22_;
  }

L21_:;
  // dr = tryDispatchBuiltin.0("[<-", l, x4)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args41);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(x4, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(x4, dr)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // lo = ld lo
  Rsh_Fir_reg_lo = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L24() else D12()
  // L24()
  goto L24_;

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L2(x4, dx)
  // L2(x4, dx)
  Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D12_:;
  // deopt 50 [x6, l2, x4, lo]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_lo;
  Rsh_Fir_deopt(50, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // lo1 = force? lo
  Rsh_Fir_reg_lo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lo);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r30 = dyn ___(l2, x4, lo1)
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args44[2] = Rsh_Fir_reg_lo1_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L2(x6, r30)
  // L2(x6, r30)
  Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r30_;
  goto L2_;

L25_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l3, x8)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args45);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc1 then L27() else L26(x8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L27()
    goto L27_;
  } else {
  // L26(x8, dr2)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x8_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L26_;
  }

L26_:;
  // up = ld up
  Rsh_Fir_reg_up = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L28() else D13()
  // L28()
  goto L28_;

L27_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L3(x8, dx2)
  // L3(x8, dx2)
  Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

D13_:;
  // deopt 55 [x10, l5, x8, up]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_up;
  Rsh_Fir_deopt(55, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L28_:;
  // up1 = force? up
  Rsh_Fir_reg_up1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_up);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r31 = dyn ___1(l5, x8, up1)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args48[2] = Rsh_Fir_reg_up1_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L3(x10, r31)
  // L3(x10, r31)
  Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r31_;
  goto L3_;

D14_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p7 = prom<V +>{
  //   sym5 = ldf attr;
  //   base5 = ldf attr in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r33):
  //   return r33;
  // L1():
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   attr1 = ldf attr in base;
  //   r34 = dyn attr1(x15, "Labels");
  //   goto L0(r34);
  // L2():
  //   r32 = dyn base5(<sym x>, "Labels");
  //   goto L0(r32);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_7, CCP, RHO);
  // p8 = prom<V +>{
  //   sym6 = ldf seq_len;
  //   base6 = ldf seq_len in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r37):
  //   return r37;
  // L1():
  //   size12 = ld size;
  //   size13 = force? size12;
  //   checkMissing(size13);
  //   r38 = seq_len(size13);
  //   goto L0(r38);
  // L2():
  //   r36 = dyn base6(<sym size>);
  //   goto L0(r36);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_8, CCP, RHO);
  // r40 = dyn ____(p7, p8)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L31() else D15()
  // L31()
  goto L31_;

D15_:;
  // deopt 65 [r40]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L31_:;
  // st labels = r40
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym7 = ldf list
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base7 = ldf list in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard7 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L32_:;
  // labels = ld labels
  Rsh_Fir_reg_labels = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L34() else D16()
  // L34()
  goto L34_;

L33_:;
  // r41 = dyn base7(<sym labels>, <sym labels>)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L5(r41)
  // L5(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L5_;

D16_:;
  // deopt 69 [labels]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_labels;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L34_:;
  // labels1 = force? labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels);
  // checkMissing(labels1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_labels1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // labels2 = ld labels
  Rsh_Fir_reg_labels2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L35() else D17()
  // L35()
  goto L35_;

D17_:;
  // deopt 71 [labels2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_labels2_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L35_:;
  // labels3 = force? labels2
  Rsh_Fir_reg_labels3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels2_);
  // checkMissing(labels3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_labels3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r43 = dyn list(labels1, labels3)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_labels1_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_labels3_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L36() else D18()
  // L36()
  goto L36_;

D18_:;
  // deopt 74 [r43]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L5(r43)
  // L5(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L5_;

D19_:;
  // deopt 76 [r42, l6, r42]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(76, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // r44 = dyn dimnames__(l6, NULL, r42)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L38() else D20()
  // L38()
  goto L38_;

D20_:;
  // deopt 78 [r42, r44]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L38_:;
  // st df = r44
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // df4 = ld df
  Rsh_Fir_reg_df4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L39() else D21()
  // L39()
  goto L39_;

D21_:;
  // deopt 80 [df4]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_df4_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L39_:;
  // df5 = force? df4
  Rsh_Fir_reg_df5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df4_);
  // checkMissing(df5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_df5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return df5
  return Rsh_Fir_reg_df5_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO) {
  // size = ld size
  Rsh_Fir_reg_size = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // size1 = force? size
  Rsh_Fir_reg_size1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size);
  // checkMissing(size1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_size1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return size1
  return Rsh_Fir_reg_size1_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO) {
  // size2 = ld size
  Rsh_Fir_reg_size2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // size3 = force? size2
  Rsh_Fir_reg_size3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size2_);
  // checkMissing(size3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_size3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return size3
  return Rsh_Fir_reg_size3_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO) {
  // n__1 = ld `n..1`
  Rsh_Fir_reg_n__1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // n__2 = force? n__1
  Rsh_Fir_reg_n__2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n__1_);
  // checkMissing(n__2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_n__2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return n__2
  return Rsh_Fir_reg_n__2_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO) {
  // sym1 = ldf `seq.int`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf `seq.int` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r12
  return Rsh_Fir_reg_r12_;

L1_:;
  // s_3 = ld `s.1`
  Rsh_Fir_reg_s_3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // s_4 = force? s_3
  Rsh_Fir_reg_s_4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_3_);
  // checkMissing(s_4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s_4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r16 = dyn seq_int(s_2, r14, s_4)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s_2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_s_4_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // s_1 = ld `s.1`
  Rsh_Fir_reg_s_1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // s_2 = force? s_1
  Rsh_Fir_reg_s_2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_1_);
  // checkMissing(s_2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_s_2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r11 = dyn base1(<sym s.1>, <lang length(df)>, <sym s.1>)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;

L4_:;
  // df = ld df
  Rsh_Fir_reg_df = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // df1 = force? df
  Rsh_Fir_reg_df1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df);
  // checkMissing(df1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_df1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r15 = dyn length(df1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_df1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r15)
  // L1(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L1_;

L5_:;
  // r13 = dyn base2(<sym df>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(r13)
  // L1(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO) {
  // size10 = ld size
  Rsh_Fir_reg_size10_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // size11 = force? size10
  Rsh_Fir_reg_size11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size10_);
  // checkMissing(size11)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_size11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return size11
  return Rsh_Fir_reg_size11_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_5(SEXP CCP, SEXP RHO) {
  // n__3 = ld `n..1`
  Rsh_Fir_reg_n__3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // n__4 = force? n__3
  Rsh_Fir_reg_n__4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n__3_);
  // checkMissing(n__4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_n__4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return n__4
  return Rsh_Fir_reg_n__4_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_6(SEXP CCP, SEXP RHO) {
  // sym3 = ldf `seq.int`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base3 = ldf `seq.int` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard3 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // r26 = `+`(r24, 1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // s_5 = ld `s.1`
  Rsh_Fir_reg_s_5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // s_6 = force? s_5
  Rsh_Fir_reg_s_6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_5_);
  // checkMissing(s_6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_s_6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // seq_int1 = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r27 = dyn seq_int1(2, r26, s_6)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args32[2] = Rsh_Fir_reg_s_6_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int1_, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r27_;
  goto L0_;

L2_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard4 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r21 = dyn base3(2, <lang `+`(length(df), 1)>, <sym s.1>)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;

L4_:;
  // df2 = ld df
  Rsh_Fir_reg_df2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // df3 = force? df2
  Rsh_Fir_reg_df3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df2_);
  // checkMissing(df3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_df3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r25 = dyn length1(df3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_df3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(r25)
  // L1(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L1_;

L5_:;
  // r23 = dyn base4(<sym df>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(r23)
  // L1(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_7(SEXP CCP, SEXP RHO) {
  // sym5 = ldf attr
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base5 = ldf attr in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r33
  return Rsh_Fir_reg_r33_;

L1_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r34 = dyn attr1(x15, "Labels")
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L0_;

L2_:;
  // r32 = dyn base5(<sym x>, "Labels")
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_8(SEXP CCP, SEXP RHO) {
  // sym6 = ldf seq_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base6 = ldf seq_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r37
  return Rsh_Fir_reg_r37_;

L1_:;
  // size12 = ld size
  Rsh_Fir_reg_size12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // size13 = force? size12
  Rsh_Fir_reg_size13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size12_);
  // checkMissing(size13)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_size13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r38 = seq_len(size13)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_size13_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L0_;

L2_:;
  // r36 = dyn base6(<sym size>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
