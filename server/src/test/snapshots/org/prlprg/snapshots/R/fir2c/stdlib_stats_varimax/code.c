#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner728015849_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner728015849_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner728015849_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner728015849_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner728015849_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner728015849_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner728015849_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner728015849_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner728015849_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner728015849_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_factanal;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_varimax;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_promax;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r12_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner728015849
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner728015849_, RHO, CCP);
  // st varimax = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // factanal = ldf factanal
  Rsh_Fir_reg_factanal = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   __ = ldf `~` in base;
  //   r1 = dyn __(<sym .>);
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   swiss = ld swiss;
  //   swiss1 = force? swiss;
  //   checkMissing(swiss1);
  //   return swiss1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r4 = dyn factanal[, , data](p, 2.0, p1)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factanal, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st fa = r4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // varimax = ldf varimax
  Rsh_Fir_reg_varimax = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p3 = prom<V +>{
  //   loadings = ldf loadings;
  //   p2 = prom<V +>{
  //     fa = ld fa;
  //     fa1 = force? fa;
  //     checkMissing(fa1);
  //     return fa1;
  //   };
  //   r6 = dyn loadings(p2);
  //   return r6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r8 = dyn varimax[, normalize](p3, FALSE)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_varimax, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 16 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // promax = ldf promax
  Rsh_Fir_reg_promax = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p5 = prom<V +>{
  //   loadings1 = ldf loadings;
  //   p4 = prom<V +>{
  //     fa2 = ld fa;
  //     fa3 = force? fa2;
  //     checkMissing(fa3);
  //     return fa3;
  //   };
  //   r10 = dyn loadings1(p4);
  //   return r10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r12 = dyn promax(p5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_promax, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 20 [r12]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r1 = dyn __(<sym .>)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_swiss;
  SEXP Rsh_Fir_reg_swiss1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // swiss = ld swiss
  Rsh_Fir_reg_swiss = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // swiss1 = force? swiss
  Rsh_Fir_reg_swiss1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_swiss);
  // checkMissing(swiss1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_swiss1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return swiss1
  return Rsh_Fir_reg_swiss1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_loadings;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // loadings = ldf loadings
  Rsh_Fir_reg_loadings = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // p2 = prom<V +>{
  //   fa = ld fa;
  //   fa1 = force? fa;
  //   checkMissing(fa1);
  //   return fa1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r6 = dyn loadings(p2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_loadings, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fa;
  SEXP Rsh_Fir_reg_fa1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fa = ld fa
  Rsh_Fir_reg_fa = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // fa1 = force? fa
  Rsh_Fir_reg_fa1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fa);
  // checkMissing(fa1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_fa1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return fa1
  return Rsh_Fir_reg_fa1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_loadings1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // loadings1 = ldf loadings
  Rsh_Fir_reg_loadings1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // p4 = prom<V +>{
  //   fa2 = ld fa;
  //   fa3 = force? fa2;
  //   checkMissing(fa3);
  //   return fa3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r10 = dyn loadings1(p4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_loadings1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fa2_;
  SEXP Rsh_Fir_reg_fa3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fa2 = ld fa
  Rsh_Fir_reg_fa2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // fa3 = force? fa2
  Rsh_Fir_reg_fa3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fa2_);
  // checkMissing(fa3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_fa3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return fa3
  return Rsh_Fir_reg_fa3_;
}
SEXP Rsh_Fir_user_function_inner728015849_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner728015849 dynamic dispatch ([x, normalize, eps])

  return Rsh_Fir_user_version_inner728015849_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner728015849_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner728015849 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner728015849/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_normalize;
  SEXP Rsh_Fir_reg_eps;
  SEXP Rsh_Fir_reg_normalize_isMissing;
  SEXP Rsh_Fir_reg_normalize_orDefault;
  SEXP Rsh_Fir_reg_eps_isMissing;
  SEXP Rsh_Fir_reg_eps_orDefault;
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_nc;
  SEXP Rsh_Fir_reg_nc1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_normalize1_;
  SEXP Rsh_Fir_reg_normalize2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_apply;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_drop;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_sc;
  SEXP Rsh_Fir_reg_sc1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_diag;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_TT;
  SEXP Rsh_Fir_reg_TT1_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_diag1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg____3_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_La_svd;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sB;
  SEXP Rsh_Fir_reg_sB1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg_sB3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sB4_;
  SEXP Rsh_Fir_reg_sB5_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_sB7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg____4_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_d;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_sB8_;
  SEXP Rsh_Fir_reg_sB9_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_sB11_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_sum;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_d2_;
  SEXP Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_reg_dpast;
  SEXP Rsh_Fir_reg_dpast1_;
  SEXP Rsh_Fir_reg_eps1_;
  SEXP Rsh_Fir_reg_eps2_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_TT2_;
  SEXP Rsh_Fir_reg_TT3_;
  SEXP Rsh_Fir_reg____5_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_normalize3_;
  SEXP Rsh_Fir_reg_normalize4_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_z6_;
  SEXP Rsh_Fir_reg_z7_;
  SEXP Rsh_Fir_reg_sc2_;
  SEXP Rsh_Fir_reg_sc3_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_z8_;
  SEXP Rsh_Fir_reg_z9_;
  SEXP Rsh_Fir_reg_TT4_;
  SEXP Rsh_Fir_reg_TT5_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r63_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_normalize = PARAMS[1];
  Rsh_Fir_reg_eps = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // normalize_isMissing = missing.0(normalize)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_normalize;
  Rsh_Fir_reg_normalize_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if normalize_isMissing then L0(TRUE) else L0(normalize)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_normalize_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_normalize_orDefault = Rsh_const(CCP, 13);
    goto L0_;
  } else {
  // L0(normalize)
    Rsh_Fir_reg_normalize_orDefault = Rsh_Fir_reg_normalize;
    goto L0_;
  }

L0_:;
  // st normalize = normalize_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_normalize_orDefault, RHO);
  (void)(Rsh_Fir_reg_normalize_orDefault);
  // eps_isMissing = missing.0(eps)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_eps;
  Rsh_Fir_reg_eps_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if eps_isMissing then L1(1.0E-5) else L1(eps)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_eps_isMissing)) {
  // L1(1.0E-5)
    Rsh_Fir_reg_eps_orDefault = Rsh_const(CCP, 14);
    goto L1_;
  } else {
  // L1(eps)
    Rsh_Fir_reg_eps_orDefault = Rsh_Fir_reg_eps;
    goto L1_;
  }

L1_:;
  // st eps = eps_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_eps_orDefault, RHO);
  (void)(Rsh_Fir_reg_eps_orDefault);
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner728015849_, 0, NULL, CCP, RHO);
  // r1 = dyn ncol(p)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // st nc = r1
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D2_:;
  // deopt 5 [nc]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_nc;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r2 = `<`(nc1, 2.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args14);
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c then L21() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // normalize1 = ld normalize
  Rsh_Fir_reg_normalize1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L21_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L22() else D3()
  // L22()
  goto L22_;

D3_:;
  // deopt 9 [x3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 14 [normalize1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_normalize1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x4
  return Rsh_Fir_reg_x4_;

L25_:;
  // normalize2 = force? normalize1
  Rsh_Fir_reg_normalize2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normalize1_);
  // checkMissing(normalize2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_normalize2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(normalize2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_normalize2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c1 then L26() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L26_:;
  // sym = ldf sqrt
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf sqrt in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

D10_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // st sc = r6
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r6_1, RHO);
  (void)(Rsh_Fir_reg_r6_1);
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

L27_:;
  // sym1 = ldf drop
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf drop in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L28_:;
  // r5 = dyn base(<lang drop(apply(x, 1, function((x=), sum(`^`(x, 2.0)), NULL)))>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r5)
  // L5(r5)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_;
  goto L5_;

L37_:;
  // p3 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner728015849_1, 0, NULL, CCP, RHO);
  // r18 = dyn nrow(p3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

D8_:;
  // deopt 29 [x7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 39 [r18]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L6_:;
  // r14 = sqrt(r8)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args24);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r14_;
  goto L5_;

L29_:;
  // apply = ldf apply
  Rsh_Fir_reg_apply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

L30_:;
  // r7 = dyn base1(<lang apply(x, 1, function((x=), sum(`^`(x, 2.0)), NULL))>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_;
  goto L6_;

L34_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // sc = ld sc
  Rsh_Fir_reg_sc = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

L38_:;
  // st p = r18
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // diag = ldf diag
  Rsh_Fir_reg_diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 30 [x8, sc]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_sc;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p1 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner728015849_2, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   r10 = clos inner2501545716;
  //   return r10;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner728015849_3, 0, NULL, CCP, RHO);
  // r12 = dyn apply(p1, 1, p2)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_apply, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

L35_:;
  // sc1 = force? sc
  Rsh_Fir_reg_sc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sc);
  // checkMissing(sc1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r15 = `/`(x8, sc1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_sc1_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args30);
  // st x = r15
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L7()
  // L7()
  goto L7_;

L39_:;
  // p4 = prom<V +>{
  //   nc2 = ld nc;
  //   nc3 = force? nc2;
  //   checkMissing(nc3);
  //   return nc3;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner728015849_4, 0, NULL, CCP, RHO);
  // r20 = dyn diag(p4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

D6_:;
  // deopt 24 [r12]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 44 [r20]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // drop = ldf drop in base
  Rsh_Fir_reg_drop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r13 = dyn drop(r12)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L40_:;
  // st TT = r20
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // st d = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_const(CCP, 29), RHO);
  (void)(Rsh_const(CCP, 29));
  // r21 = `:`(1, 1000)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args34);
  // s = toForSeq(r21)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args36);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 32);
  // goto L8(i)
  // L8(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L8_;

D7_:;
  // deopt 26 [r13]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L8_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // c2 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if c2 then L41() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L41()
    goto L41_;
  } else {
  // L13()
    goto L13_;
  }

L33_:;
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r13_;
  goto L6_;

L11_:;
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L82() else D37()
  // L82()
  goto L82_;

L13_:;
  // x11 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x11_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args39);
  // st i = x11
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_x11_, RHO);
  (void)(Rsh_Fir_reg_x11_);
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L42() else D14()
  // L42()
  goto L42_;

L41_:;
  // goto L11()
  // L11()
  goto L11_;

D14_:;
  // deopt 54 [i2, x12]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 126 [x16]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L42_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // TT = ld TT
  Rsh_Fir_reg_TT = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L43() else D15()
  // L43()
  goto L43_;

L82_:;
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // TT2 = ld TT
  Rsh_Fir_reg_TT2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L83() else D38()
  // L83()
  goto L83_;

D15_:;
  // deopt 56 [i2, TT]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_TT;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 128 [TT2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_TT2_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L43_:;
  // TT1 = force? TT
  Rsh_Fir_reg_TT1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TT);
  // checkMissing(TT1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_TT1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%*%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r22 = dyn ___(x13, TT1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_TT1_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L44() else D16()
  // L44()
  goto L44_;

L83_:;
  // TT3 = force? TT2
  Rsh_Fir_reg_TT3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TT2_);
  // checkMissing(TT3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_TT3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // ___5 = ldf `%*%` in base
  Rsh_Fir_reg____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r53 = dyn ___5(x17, TT3)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_TT3_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____5_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L84() else D39()
  // L84()
  goto L84_;

D16_:;
  // deopt 59 [i2, r22]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 131 [r53]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L44_:;
  // st z = r22
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L45() else D17()
  // L45()
  goto L45_;

L84_:;
  // st z = r53
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // normalize3 = ld normalize
  Rsh_Fir_reg_normalize3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L85() else D40()
  // L85()
  goto L85_;

D17_:;
  // deopt 63 [i2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 133 [normalize3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_normalize3_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L45_:;
  // p5 = prom<V +>{
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   return x15;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner728015849_5, 0, NULL, CCP, RHO);
  // r24 = dyn t(p5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L46() else D18()
  // L46()
  goto L46_;

L85_:;
  // normalize4 = force? normalize3
  Rsh_Fir_reg_normalize4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normalize3_);
  // checkMissing(normalize4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_normalize4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c7 = `as.logical`(normalize4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_normalize4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args49);
  // if c7 then L86() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L86()
    goto L86_;
  } else {
  // L14()
    goto L14_;
  }

D18_:;
  // deopt 65 [i2, r24]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym5 = ldf dimnames
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base5 = ldf dimnames in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard5 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L46_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L47() else D19()
  // L47()
  goto L47_;

L86_:;
  // z6 = ld z
  Rsh_Fir_reg_z6_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L87() else D41()
  // L87()
  goto L87_;

D19_:;
  // deopt 66 [i2, z]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 135 [z6]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_z6_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L16_:;
  // l1 = ld z
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L94() else D45()
  // L94()
  goto L94_;

L47_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // r25 = `^`(z1, 3.0)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args52);
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L48() else D20()
  // L48()
  goto L48_;

L87_:;
  // z7 = force? z6
  Rsh_Fir_reg_z7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z6_);
  // checkMissing(z7)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_z7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // sc2 = ld sc
  Rsh_Fir_reg_sc2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L88() else D42()
  // L88()
  goto L88_;

L90_:;
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L92() else D43()
  // L92()
  goto L92_;

L91_:;
  // r56 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L16(r56)
  // L16(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L16_;

D20_:;
  // deopt 70 [i2, r25, z2]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_z2_;
  Rsh_Fir_deopt(70, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 136 [z7, sc2]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_sc2_;
  Rsh_Fir_deopt(136, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 144 [x18]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 149 [r57, l1, r57]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(149, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L48_:;
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // diag1 = ldf diag
  Rsh_Fir_reg_diag1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L49() else D21()
  // L49()
  goto L49_;

L88_:;
  // sc3 = force? sc2
  Rsh_Fir_reg_sc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sc2_);
  // checkMissing(sc3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r54 = `*`(z7, sc3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_sc3_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args57);
  // st z = r54
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // goto L15()
  // L15()
  goto L15_;

L92_:;
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r58 = dyn dimnames(x19)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L93() else D44()
  // L93()
  goto L93_;

L94_:;
  // r59 = dyn dimnames__(l1, NULL, r57)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L95() else D46()
  // L95()
  goto L95_;

D21_:;
  // deopt 73 [i2, r25]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 147 [r58]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 151 [r57, r59]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(151, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L49_:;
  // p6 = prom<V +>{
  //   sym2 = ldf drop;
  //   base2 = ldf drop in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r27):
  //   return r27;
  // L2():
  //   sym3 = ldf rep;
  //   base3 = ldf rep in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L4() else L5();
  // L3():
  //   r26 = dyn base2(<lang `%*%`(rep(1.0, p), `^`(z, 2.0))>);
  //   goto L0(r26);
  // L1(r29):
  //   z4 = ld z;
  //   z5 = force? z4;
  //   checkMissing(z5);
  //   r31 = `^`(z5, 2.0);
  //   ___1 = ldf `%*%` in base;
  //   r32 = dyn ___1(r29, r31);
  //   drop1 = ldf drop in base;
  //   r33 = dyn drop1(r32);
  //   goto L0(r33);
  // L4():
  //   rep = ldf rep in base;
  //   r30 = dyn rep(1.0, <sym p>);
  //   goto L1(r30);
  // L5():
  //   r28 = dyn base3(1.0, <sym p>);
  //   goto L1(r28);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner728015849_6, 0, NULL, CCP, RHO);
  // r35 = dyn diag1(p6)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag1_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L50() else D22()
  // L50()
  goto L50_;

L93_:;
  // goto L16(r58)
  // L16(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L16_;

L95_:;
  // st z = r59
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // l2 = ld z
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L96() else D47()
  // L96()
  goto L96_;

D22_:;
  // deopt 75 [i2, r25, r35]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(75, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 156 ["loadings", l2, "loadings"]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_const(CCP, 45);
  Rsh_Fir_deopt(156, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L50_:;
  // ___2 = ldf `%*%` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r36 = dyn ___2(z3, r35)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L51() else D23()
  // L51()
  goto L51_;

L96_:;
  // r60 = dyn class__(l2, NULL, "loadings")
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L97() else D48()
  // L97()
  goto L97_;

D23_:;
  // deopt 77 [i2, r25, r36]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(77, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 158 ["loadings", r60]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L51_:;
  // p7 = ld p
  Rsh_Fir_reg_p7_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L52() else D24()
  // L52()
  goto L52_;

L97_:;
  // st z = r60
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard6 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

D24_:;
  // deopt 77 [i2, r25, r36, p7]
  SEXP Rsh_Fir_array_deopt_stack35[4];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack35[3] = Rsh_Fir_reg_p7_;
  Rsh_Fir_deopt(77, 4, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r62
  return Rsh_Fir_reg_r62_;

L52_:;
  // p8 = force? p7
  Rsh_Fir_reg_p8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p7_);
  // checkMissing(p8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r37 = `/`(r36, p8)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args75);
  // r38 = `-`(r25, r37)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args76);
  // ___3 = ldf `%*%` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r39 = dyn ___3(r24, r38)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L53() else D25()
  // L53()
  goto L53_;

L98_:;
  // z8 = ld z
  Rsh_Fir_reg_z8_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L100() else D49()
  // L100()
  goto L100_;

L99_:;
  // r61 = dyn base6[loadings, rotmat](<sym z>, <sym TT>)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names28[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L17(r61)
  // L17(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L17_;

D25_:;
  // deopt 82 [i2, r39]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 162 [z8]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_z8_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L53_:;
  // st B = r39
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // La_svd = ldf `La.svd`
  Rsh_Fir_reg_La_svd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L54() else D26()
  // L54()
  goto L54_;

L100_:;
  // z9 = force? z8
  Rsh_Fir_reg_z9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z8_);
  // checkMissing(z9)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_z9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // TT4 = ld TT
  Rsh_Fir_reg_TT4_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L101() else D50()
  // L101()
  goto L101_;

D26_:;
  // deopt 85 [i2]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 165 [TT4]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_TT4_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L54_:;
  // p9 = prom<V +>{
  //   B = ld B;
  //   B1 = force? B;
  //   checkMissing(B1);
  //   return B1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner728015849_7, 0, NULL, CCP, RHO);
  // r41 = dyn La_svd(p9)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_svd, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L55() else D27()
  // L55()
  goto L55_;

L101_:;
  // TT5 = force? TT4
  Rsh_Fir_reg_TT5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TT4_);
  // checkMissing(TT5)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_TT5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r63 = dyn list(z9, TT5)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_z9_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_TT5_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L102() else D51()
  // L102()
  goto L102_;

D27_:;
  // deopt 87 [i2, r41]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 169 [r63]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L55_:;
  // st sB = r41
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // sB = ld sB
  Rsh_Fir_reg_sB = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L56() else D28()
  // L56()
  goto L56_;

L102_:;
  // goto L17(r63)
  // L17(r63)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L17_;

D28_:;
  // deopt 90 [i2, sB]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_sB;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L56_:;
  // sB1 = force? sB
  Rsh_Fir_reg_sB1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sB);
  // checkMissing(sB1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sB1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(sB1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sB1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args85);
  // if c3 then L58() else L59(i2, sB1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L58()
    goto L58_;
  } else {
  // L59(i2, sB1)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_sB3_ = Rsh_Fir_reg_sB1_;
    goto L59_;
  }

L57_:;
  // sB4 = ld sB
  Rsh_Fir_reg_sB4_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L61() else D29()
  // L61()
  goto L61_;

L58_:;
  // dr = tryDispatchBuiltin.1("$", sB1)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_sB1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc then L60() else L59(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L60()
    goto L60_;
  } else {
  // L59(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_sB3_ = Rsh_Fir_reg_dr;
    goto L59_;
  }

L59_:;
  // r42 = `$`(sB3, <sym u>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sB3_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args88);
  // goto L57(i6, r42)
  // L57(i6, r42)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r42_;
  goto L57_;

D29_:;
  // deopt 93 [i8, sB4]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_sB4_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L60_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L57(i2, dx)
  // L57(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L57_;

L61_:;
  // sB5 = force? sB4
  Rsh_Fir_reg_sB5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sB4_);
  // checkMissing(sB5)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sB5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(sB5)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sB5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args91);
  // if c4 then L63() else L64(i8, sB5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L63()
    goto L63_;
  } else {
  // L64(i8, sB5)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_sB7_ = Rsh_Fir_reg_sB5_;
    goto L64_;
  }

L62_:;
  // ___4 = ldf `%*%` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r44 = dyn ___4(dx1, dx3)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L66() else D30()
  // L66()
  goto L66_;

L63_:;
  // dr2 = tryDispatchBuiltin.1("$", sB5)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_sB5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc1 then L65() else L64(i8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L65()
    goto L65_;
  } else {
  // L64(i8, dr2)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_sB7_ = Rsh_Fir_reg_dr2_;
    goto L64_;
  }

L64_:;
  // r43 = `$`(sB7, <sym vt>)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sB7_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args95);
  // goto L62(i10, r43)
  // L62(i10, r43)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r43_;
  goto L62_;

D30_:;
  // deopt 97 [i12, r44]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L65_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L62(i8, dx2)
  // L62(i8, dx2)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L62_;

L66_:;
  // st TT = r44
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L67() else D31()
  // L67()
  goto L67_;

D31_:;
  // deopt 99 [i12, d]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(99, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L67_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // st dpast = d1
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_d1_, RHO);
  (void)(Rsh_Fir_reg_d1_);
  // sym4 = ldf sum
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base4 = ldf sum in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard4 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L9_:;
  // st d = r46
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L76() else D34()
  // L76()
  goto L76_;

L68_:;
  // sB8 = ld sB
  Rsh_Fir_reg_sB8_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L70() else D32()
  // L70()
  goto L70_;

L69_:;
  // r45 = dyn base4(<lang `$`(sB, d)>)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L9(i12, r45)
  // L9(i12, r45)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L9_;

D32_:;
  // deopt 104 [i12, sB8]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_sB8_;
  Rsh_Fir_deopt(104, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 110 [i15, d2]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_d2_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L70_:;
  // sB9 = force? sB8
  Rsh_Fir_reg_sB9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sB8_);
  // checkMissing(sB9)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sB9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(sB9)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sB9_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args101);
  // if c5 then L72() else L73(i12, sB9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L72()
    goto L72_;
  } else {
  // L73(i12, sB9)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_sB11_ = Rsh_Fir_reg_sB9_;
    goto L73_;
  }

L76_:;
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // dpast = ld dpast
  Rsh_Fir_reg_dpast = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L77() else D35()
  // L77()
  goto L77_;

D35_:;
  // deopt 111 [i15, d3, dpast]
  SEXP Rsh_Fir_array_deopt_stack48[3];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_deopt_stack48[2] = Rsh_Fir_reg_dpast;
  Rsh_Fir_deopt(111, 3, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L71_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r48 = dyn sum(dx5)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L75() else D33()
  // L75()
  goto L75_;

L72_:;
  // dr4 = tryDispatchBuiltin.1("$", sB9)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_sB9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc2 then L74() else L73(i12, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L74()
    goto L74_;
  } else {
  // L73(i12, dr4)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_sB11_ = Rsh_Fir_reg_dr4_;
    goto L73_;
  }

L73_:;
  // r47 = `$`(sB11, <sym d>)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sB11_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args106);
  // goto L71(i17, r47)
  // L71(i17, r47)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r47_;
  goto L71_;

L77_:;
  // dpast1 = force? dpast
  Rsh_Fir_reg_dpast1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dpast);
  // checkMissing(dpast1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dpast1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // eps1 = ld eps
  Rsh_Fir_reg_eps1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L78() else D36()
  // L78()
  goto L78_;

D33_:;
  // deopt 108 [i19, r48]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 113 [i15, d3, dpast1, 1.0, eps1]
  SEXP Rsh_Fir_array_deopt_stack50[5];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_dpast1_;
  Rsh_Fir_array_deopt_stack50[3] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack50[4] = Rsh_Fir_reg_eps1_;
  Rsh_Fir_deopt(113, 5, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L74_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L71(i12, dx4)
  // L71(i12, dx4)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L71_;

L75_:;
  // goto L9(i19, r48)
  // L9(i19, r48)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r48_;
  goto L9_;

L78_:;
  // eps2 = force? eps1
  Rsh_Fir_reg_eps2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eps1_);
  // checkMissing(eps2)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_eps2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // r49 = `+`(1.0, eps2)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_eps2_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args110);
  // r50 = `*`(dpast1, r49)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dpast1_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args111);
  // r51 = `<`(d3, r50)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args112);
  // c6 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args113);
  // if c6 then L79() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L79()
    goto L79_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L8(i15)
  // L8(i15)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i15_;
  goto L8_;

L79_:;
  // goto L11()
  // L11()
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner728015849_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner728015849/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner728015849_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner728015849/0: expected 0, got %d", NCAPTURES);

  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner728015849_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner728015849/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner728015849_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r10_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner728015849/0: expected 0, got %d", NCAPTURES);

  // r10 = clos inner2501545716
  Rsh_Fir_reg_r10_1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // return r10
  return Rsh_Fir_reg_r10_1;
}
SEXP Rsh_Fir_user_promise_inner728015849_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nc2_;
  SEXP Rsh_Fir_reg_nc3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner728015849/0: expected 0, got %d", NCAPTURES);

  // nc2 = ld nc
  Rsh_Fir_reg_nc2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // nc3 = force? nc2
  Rsh_Fir_reg_nc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc2_);
  // checkMissing(nc3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_nc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return nc3
  return Rsh_Fir_reg_nc3_;
}
SEXP Rsh_Fir_user_promise_inner728015849_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner728015849/0: expected 0, got %d", NCAPTURES);

  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_user_promise_inner728015849_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_z4_;
  SEXP Rsh_Fir_reg_z5_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_drop1_;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner728015849/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf drop
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf drop in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r27
  return Rsh_Fir_reg_r27_;

L2_:;
  // sym3 = ldf rep
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base3 = ldf rep in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard3 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r26 = dyn base2(<lang `%*%`(rep(1.0, p), `^`(z, 2.0))>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L0_;

L1_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r31 = `^`(z5, 2.0)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args65);
  // ___1 = ldf `%*%` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r32 = dyn ___1(r29, r31)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names20, CCP, RHO);
  // drop1 = ldf drop in base
  Rsh_Fir_reg_drop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r33 = dyn drop1(r32)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_drop1_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r33_;
  goto L0_;

L4_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r30 = dyn rep(1.0, <sym p>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L1(r30)
  // L1(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L1_;

L5_:;
  // r28 = dyn base3(1.0, <sym p>)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L1(r28)
  // L1(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner728015849_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_B;
  SEXP Rsh_Fir_reg_B1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner728015849/0: expected 0, got %d", NCAPTURES);

  // B = ld B
  Rsh_Fir_reg_B = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // B1 = force? B
  Rsh_Fir_reg_B1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_B);
  // checkMissing(B1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_B1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return B1
  return Rsh_Fir_reg_B1_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_sum1;
  SEXP Rsh_Fir_reg_r3_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // sym = ldf sum
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base = ldf sum in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args114);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_2;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang `^`(x, 2.0)>)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L3_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // r2 = `^`(x2, 2.0)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args117);
  // sum = ldf sum in base
  Rsh_Fir_reg_sum1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r3 = dyn sum(r2)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum1, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
