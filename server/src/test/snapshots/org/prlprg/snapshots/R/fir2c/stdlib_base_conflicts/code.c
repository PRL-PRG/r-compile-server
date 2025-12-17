#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1311136554_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1311136554_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1311136554_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1311136554_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1311136554_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1311136554_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1311136554_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1311136554_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_conflicts;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_remove;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r7_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1311136554
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1311136554_, RHO, CCP);
  // st conflicts = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st lm = <int 1, 2, 3>
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // conflicts = ldf conflicts
  Rsh_Fir_reg_conflicts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn conflicts(<missing>, TRUE)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_conflicts, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 10 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // remove = ldf remove
  Rsh_Fir_reg_remove = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   conflicts1 = ldf conflicts;
  //   r2 = dyn conflicts1[detail](TRUE);
  //   c = `is.object`(r2);
  //   if c then L1() else L2(r2);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", r2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(r4):
  //   r5 = `$`(r4, <sym .GlobalEnv>);
  //   goto L0(r5);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r7 = dyn remove[list](p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_remove, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 15 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_conflicts1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // conflicts1 = ldf conflicts
  Rsh_Fir_reg_conflicts1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r2 = dyn conflicts1[detail](TRUE)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_conflicts1_, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // c = `is.object`(r2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args2);
  // if c then L1() else L2(r2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(r2)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r2_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", r2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r5 = `$`(r4, <sym .GlobalEnv>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args5);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1311136554_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1311136554 dynamic dispatch ([where, detail])

  return Rsh_Fir_user_version_inner1311136554_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1311136554_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1311136554 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1311136554/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_where;
  SEXP Rsh_Fir_reg_detail;
  SEXP Rsh_Fir_reg_where_isMissing;
  SEXP Rsh_Fir_reg_where_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_detail_isMissing;
  SEXP Rsh_Fir_reg_detail_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_where1_;
  SEXP Rsh_Fir_reg_where2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_where3_;
  SEXP Rsh_Fir_reg_where4_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_vector;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_where5_;
  SEXP Rsh_Fir_reg_where6_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_where7_;
  SEXP Rsh_Fir_reg_where8_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_objects;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_unlist;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_duplicated;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_all2_;
  SEXP Rsh_Fir_reg_all3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_all5_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dups;
  SEXP Rsh_Fir_reg_dups1_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_detail1_;
  SEXP Rsh_Fir_reg_detail2_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_where13_;
  SEXP Rsh_Fir_reg_where14_;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_z5_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_i30_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_dups2_;
  SEXP Rsh_Fir_reg_dups3_;
  SEXP Rsh_Fir_reg_z6_;
  SEXP Rsh_Fir_reg_z7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_z9_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_i34_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_reg_i36_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_i38_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_i40_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_i41_;
  SEXP Rsh_Fir_reg_i42_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_reg_vapply;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_z12_;
  SEXP Rsh_Fir_reg_z13_;
  SEXP Rsh_Fir_reg_dups4_;
  SEXP Rsh_Fir_reg_dups5_;

  // Bind parameters
  Rsh_Fir_reg_where = PARAMS[0];
  Rsh_Fir_reg_detail = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // where_isMissing = missing.0(where)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_where;
  Rsh_Fir_reg_where_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if where_isMissing then L0() else L1(where)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_where_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(where)
    Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_where;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   search = ldf search;
  //   r = dyn search();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1311136554_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st where = where_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_where_orDefault, RHO);
  (void)(Rsh_Fir_reg_where_orDefault);
  // detail_isMissing = missing.0(detail)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_detail;
  Rsh_Fir_reg_detail_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if detail_isMissing then L2(FALSE) else L2(detail)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_detail_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_detail_orDefault = Rsh_const(CCP, 12);
    goto L2_;
  } else {
  // L2(detail)
    Rsh_Fir_reg_detail_orDefault = Rsh_Fir_reg_detail;
    goto L2_;
  }

L2_:;
  // st detail = detail_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_detail_orDefault, RHO);
  (void)(Rsh_Fir_reg_detail_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L3_:;
  // r5 = `<`(r3, 1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args11);
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c then L26() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L26()
    goto L26_;
  } else {
  // L4()
    goto L4_;
  }

L22_:;
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L24() else D0()
  // L24()
  goto L24_;

L23_:;
  // r2 = dyn base(<sym where>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_1;
  goto L3_;

D0_:;
  // deopt 2 [where1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_where1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym1 = ldf vector
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf vector in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L24_:;
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r4 = dyn length(where2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_where2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

L26_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

D1_:;
  // deopt 5 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // st z = r9
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

L25_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_1;
  goto L3_;

L27_:;
  // r6 = dyn stop("argument 'where' of length 0")
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

L30_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L31_:;
  // r8 = dyn base1[, mode](<lang length(where)>, "list")
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L6_;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 26 [where5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_where5_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L7_:;
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r13 = dyn vector("list", r11)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

L28_:;
  // goto L5()
  // L5()
  goto L5_;

L32_:;
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

L33_:;
  // r10 = dyn base2(<sym where>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L7_;

L37_:;
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // l = ld z
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

D4_:;
  // deopt 19 [where3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_where3_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 24 [r13]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 29 [where6, l, where6]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_where6_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_where6_;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L34_:;
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r12 = dyn length1(where4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_where4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L35() else D5()
  // L35()
  goto L35_;

L36_:;
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r13_;
  goto L6_;

L38_:;
  // r14 = dyn names__(l, NULL, where6)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_where6_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

D5_:;
  // deopt 22 [r12]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 31 [where6, r14]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_where6_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L7_;

L39_:;
  // st z = r14
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym3 = ldf seq_along
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base3 = ldf seq_along in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard3 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L8_:;
  // s = toForSeq(r16)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args28);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 25);
  // goto L9(i)
  // L9(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L9_;

L40_:;
  // where7 = ld where
  Rsh_Fir_reg_where7_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L42() else D10()
  // L42()
  goto L42_;

L41_:;
  // r15 = dyn base3(<sym where>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L8_;

D10_:;
  // deopt 34 [where7]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_where7_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L9_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // c1 = `<`.1(l1, i2)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if c1 then L43() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L43()
    goto L43_;
  } else {
  // L11()
    goto L11_;
  }

L42_:;
  // where8 = force? where7
  Rsh_Fir_reg_where8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where7_);
  // checkMissing(where8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_where8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // r17 = seq_along(where8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_where8_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args33);
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L8_;

L11_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args34[4];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args34);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // objects = ldf objects
  Rsh_Fir_reg_objects = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L44() else D11()
  // L44()
  goto L44_;

L43_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L50() else D14()
  // L50()
  goto L50_;

D11_:;
  // deopt 38 [i2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p1 = prom<V +>{
  //   where9 = ld where;
  //   where10 = force? where9;
  //   checkMissing(where10);
  //   c2 = `is.object`(where10);
  //   if c2 then L1() else L2(where10);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", where10);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(where12):
  //   i5 = ld i;
  //   i6 = force? i5;
  //   __ = ldf `[` in base;
  //   r18 = dyn __(where12, i6);
  //   goto L0(r18);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1311136554_1, 0, NULL, CCP, RHO);
  // r20 = dyn objects[pos](p1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_objects, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L45() else D12()
  // L45()
  goto L45_;

L50_:;
  // p2 = prom<V +>{
  //   z = ld z;
  //   z1 = force? z;
  //   checkMissing(z1);
  //   return z1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1311136554_2, 0, NULL, CCP, RHO);
  // r27 = dyn unlist[, `use.names`](p2, FALSE)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L51() else D15()
  // L51()
  goto L51_;

D12_:;
  // deopt 41 [i2, r20]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 55 [r27]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L45_:;
  // l2 = ld z
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c3 = `is.object`(l2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args44);
  // if c3 then L46() else L47(i2, r20, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L46()
    goto L46_;
  } else {
  // L47(i2, r20, l2)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L47_;
  }

L51_:;
  // st all = r27
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // duplicated = ldf duplicated
  Rsh_Fir_reg_duplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L52() else D16()
  // L52()
  goto L52_;

D16_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // st z = dx3
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L9(i10)
  // L9(i10)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i10_;
  goto L9_;

L46_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l2, r20)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args45);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc1 then L48() else L47(i2, r20, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L48()
    goto L48_;
  } else {
  // L47(i2, r20, dr2)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr2_;
    goto L47_;
  }

L47_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

L52_:;
  // p3 = prom<V +>{
  //   all = ld all;
  //   all1 = force? all;
  //   checkMissing(all1);
  //   return all1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1311136554_3, 0, NULL, CCP, RHO);
  // r29 = dyn duplicated(p3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L53() else D17()
  // L53()
  goto L53_;

D13_:;
  // deopt 43 [i8, r22, l4, r20, i11]
  SEXP Rsh_Fir_array_deopt_stack15[5];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack15[4] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(43, 5, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 60 [r29]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L48_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L10(i2, dx2)
  // L10(i2, dx2)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L10_;

L49_:;
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r25 = dyn ____(l4, r20, i12)
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args50[2] = Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(i8, r25)
  // L10(i8, r25)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r25_;
  goto L10_;

L53_:;
  // st dups = r29
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // all2 = ld all
  Rsh_Fir_reg_all2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L54() else D18()
  // L54()
  goto L54_;

D18_:;
  // deopt 62 [all2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_all2_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L54_:;
  // all3 = force? all2
  Rsh_Fir_reg_all3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all2_);
  // checkMissing(all3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_all3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(all3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_all3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args52);
  // if c4 then L55() else L56(all3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L55()
    goto L55_;
  } else {
  // L56(all3)
    Rsh_Fir_reg_all5_ = Rsh_Fir_reg_all3_;
    goto L56_;
  }

L12_:;
  // st dups = dx5
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // detail1 = ld detail
  Rsh_Fir_reg_detail1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L59() else D20()
  // L59()
  goto L59_;

L55_:;
  // dr4 = tryDispatchBuiltin.1("[", all3)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_all3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc2 then L57() else L56(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L57()
    goto L57_;
  } else {
  // L56(dr4)
    Rsh_Fir_reg_all5_ = Rsh_Fir_reg_dr4_;
    goto L56_;
  }

L56_:;
  // dups = ld dups
  Rsh_Fir_reg_dups = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L58() else D19()
  // L58()
  goto L58_;

D19_:;
  // deopt 64 [all5, dups]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_all5_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_dups;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 68 [detail1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_detail1_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L57_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L12(dx4)
  // L12(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L12_;

L58_:;
  // dups1 = force? dups
  Rsh_Fir_reg_dups1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dups);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r30 = dyn __1(all5, dups1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_all5_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_dups1_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L12(r30)
  // L12(r30)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r30_;
  goto L12_;

L59_:;
  // detail2 = force? detail1
  Rsh_Fir_reg_detail2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_detail1_);
  // checkMissing(detail2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_detail2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(detail2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_detail2_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args58);
  // if c5 then L60() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L60()
    goto L60_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // dups4 = ld dups
  Rsh_Fir_reg_dups4_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L91() else D32()
  // L91()
  goto L91_;

L60_:;
  // where13 = ld where
  Rsh_Fir_reg_where13_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L61() else D21()
  // L61()
  goto L61_;

D21_:;
  // deopt 70 [where13]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_where13_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 112 [dups4]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_dups4_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L61_:;
  // where14 = force? where13
  Rsh_Fir_reg_where14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where13_);
  // checkMissing(where14)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_where14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(where14)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_where14_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // l5 = length(s1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args61);
  // i13 = 0
  Rsh_Fir_reg_i13_ = Rsh_const(CCP, 25);
  // goto L14(i13)
  // L14(i13)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i13_;
  goto L14_;

L91_:;
  // dups5 = force? dups4
  Rsh_Fir_reg_dups5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dups4_);
  // checkMissing(dups5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dups5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dups5
  return Rsh_Fir_reg_dups5_;

L14_:;
  // i15 = `+`.1(i14, 1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_i15_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // c6 = `<`.1(l5, i15)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if c6 then L62() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L62()
    goto L62_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // x1 = `[[`(s1, i15, NULL, TRUE)
  SEXP Rsh_Fir_array_args65[4];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args65[3] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args65);
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L63() else D22()
  // L63()
  goto L63_;

L62_:;
  // l9 = ld z
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c11 = `is.object`(l9)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args66);
  // if c11 then L84() else L85(NULL, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L84()
    goto L84_;
  } else {
  // L85(NULL, l9)
    Rsh_Fir_reg_r39_ = Rsh_const(CCP, 23);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L85_;
  }

D22_:;
  // deopt 72 [i15, z2]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_z2_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L21_:;
  // st z = dx28
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx28_, RHO);
  (void)(Rsh_Fir_reg_dx28_);
  // z12 = ld z
  Rsh_Fir_reg_z12_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L89() else D31()
  // L89()
  goto L89_;

L63_:;
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(z3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args68);
  // if c7 then L64() else L65(i15, z3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L64()
    goto L64_;
  } else {
  // L65(i15, z3)
    Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i15_;
    Rsh_Fir_reg_z5_ = Rsh_Fir_reg_z3_;
    goto L65_;
  }

L84_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l9, NULL)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args69);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc7 then L86() else L85(NULL, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L86()
    goto L86_;
  } else {
  // L85(NULL, dr14)
    Rsh_Fir_reg_r39_ = Rsh_const(CCP, 23);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr14_;
    goto L85_;
  }

L85_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L87() else D29()
  // L87()
  goto L87_;

D29_:;
  // deopt 103 [r39, l11, NULL]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_const(CCP, 23);
  Rsh_Fir_deopt(103, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 110 [z12]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_z12_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L15_:;
  // c8 = `is.object`(dx7)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args71);
  // if c8 then L68() else L69(i21, dx7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L68()
    goto L68_;
  } else {
  // L69(i21, dx7)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    goto L69_;
  }

L64_:;
  // dr6 = tryDispatchBuiltin.1("[[", z3)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args72);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc3 then L66() else L65(i15, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L66()
    goto L66_;
  } else {
  // L65(i15, dr6)
    Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i15_;
    Rsh_Fir_reg_z5_ = Rsh_Fir_reg_dr6_;
    goto L65_;
  }

L65_:;
  // i22 = ld i
  Rsh_Fir_reg_i22_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L67() else D23()
  // L67()
  goto L67_;

L86_:;
  // dx27 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L21(dx27)
  // L21(dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L21_;

L87_:;
  // p4 = prom<V +>{
  //   z10 = ld z;
  //   z11 = force? z10;
  //   checkMissing(z11);
  //   return z11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1311136554_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   r43 = clos inner2501545716;
  //   return r43;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1311136554_5, 0, NULL, CCP, RHO);
  // r45 = dyn vapply(p4, p5, NA_LGL)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args76[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L88() else D30()
  // L88()
  goto L88_;

L89_:;
  // z13 = force? z12
  Rsh_Fir_reg_z13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z12_);
  // checkMissing(z13)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_z13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z13
  return Rsh_Fir_reg_z13_;

D23_:;
  // deopt 74 [i19, z5, i22]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_i22_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 107 [r39, l11, NULL, r45]
  SEXP Rsh_Fir_array_deopt_stack26[4];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(107, 4, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L16_:;
  // l6 = ld z
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // c10 = `is.object`(l6)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args78);
  // if c10 then L80() else L81(i27, dx11, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L80()
    goto L80_;
  } else {
  // L81(i27, dx11, l6)
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i27_;
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L81_;
  }

L66_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L15(i15, dx6)
  // L15(i15, dx6)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L15_;

L67_:;
  // i23 = force? i22
  Rsh_Fir_reg_i23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i22_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r31 = dyn __2(z5, i23)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_i23_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(i19, r31)
  // L15(i19, r31)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r31_;
  goto L15_;

L68_:;
  // dr8 = tryDispatchBuiltin.1("[", dx7)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args81);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc4 then L70() else L69(i21, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L70()
    goto L70_;
  } else {
  // L69(i21, dr8)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dr8_;
    goto L69_;
  }

L69_:;
  // sym4 = ldf match
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base4 = ldf match in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard4 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L88_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r46 = dyn ___(l11, NULL, r45)
  SEXP Rsh_Fir_array_args84[3];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args84[2] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L21(r46)
  // L21(r46)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r46_;
  goto L21_;

L17_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r36 = dyn __4(dx14, r33)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L16(i30, r36)
  // L16(i30, r36)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r36_;
  goto L16_;

L19_:;
  // st z = dx26
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx26_, RHO);
  (void)(Rsh_Fir_reg_dx26_);
  // goto L14(i40)
  // L14(i40)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i40_;
  goto L14_;

L70_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L16(i21, dx10)
  // L16(i21, dx10)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L16_;

L71_:;
  // dups2 = ld dups
  Rsh_Fir_reg_dups2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L73() else D24()
  // L73()
  goto L73_;

L72_:;
  // r32 = dyn base4(<sym dups>, <lang `[[`(z, i)>, 0)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args87[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L17(i25, dx9, r32)
  // L17(i25, dx9, r32)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L17_;

L80_:;
  // dr12 = tryDispatchBuiltin.0("[[<-", l6, dx11)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args88);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc6 then L82() else L81(i27, dx11, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L82()
    goto L82_;
  } else {
  // L81(i27, dx11, dr12)
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i27_;
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr12_;
    goto L81_;
  }

L81_:;
  // i41 = ld i
  Rsh_Fir_reg_i41_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L83() else D28()
  // L83()
  goto L83_;

D24_:;
  // deopt 79 [i25, dx9, dups2]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_dups2_;
  Rsh_Fir_deopt(79, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 92 [i38, dx22, l8, dx11, i41]
  SEXP Rsh_Fir_array_deopt_stack28[5];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack28[4] = Rsh_Fir_reg_i41_;
  Rsh_Fir_deopt(92, 5, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L73_:;
  // dups3 = force? dups2
  Rsh_Fir_reg_dups3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dups2_);
  // checkMissing(dups3)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dups3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // z6 = ld z
  Rsh_Fir_reg_z6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L74() else D25()
  // L74()
  goto L74_;

L82_:;
  // dx24 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L19(i27, dx24)
  // L19(i27, dx24)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx24_;
  goto L19_;

L83_:;
  // i42 = force? i41
  Rsh_Fir_reg_i42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i41_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r37 = dyn ____1(l8, dx11, i42)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_i42_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L19(i38, r37)
  // L19(i38, r37)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r37_;
  goto L19_;

D25_:;
  // deopt 81 [i25, dx9, z6]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_z6_;
  Rsh_Fir_deopt(81, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L74_:;
  // z7 = force? z6
  Rsh_Fir_reg_z7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z6_);
  // checkMissing(z7)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_z7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(z7)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args94);
  // if c9 then L75() else L76(i25, dx9, z7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L75()
    goto L75_;
  } else {
  // L76(i25, dx9, z7)
    Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_z9_ = Rsh_Fir_reg_z7_;
    goto L76_;
  }

L18_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r35 = dyn match(dups3, dx20, 0, NULL)
  SEXP Rsh_Fir_array_args95[4];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dups3_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_args95[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args95[3] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L79() else D27()
  // L79()
  goto L79_;

L75_:;
  // dr10 = tryDispatchBuiltin.1("[[", z7)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_z7_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc5 then L77() else L76(i25, dx9, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L77()
    goto L77_;
  } else {
  // L76(i25, dx9, dr10)
    Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_z9_ = Rsh_Fir_reg_dr10_;
    goto L76_;
  }

L76_:;
  // i35 = ld i
  Rsh_Fir_reg_i35_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L78() else D26()
  // L78()
  goto L78_;

D26_:;
  // deopt 83 [i32, dx16, z9, i35]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_z9_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_i35_;
  Rsh_Fir_deopt(83, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 89 [i34, dx19, r35]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(89, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L77_:;
  // dx18 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L18(i25, dx9, dx18)
  // L18(i25, dx9, dx18)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx18_;
  goto L18_;

L78_:;
  // i36 = force? i35
  Rsh_Fir_reg_i36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i35_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r34 = dyn __3(z9, i36)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_z9_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_i36_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L18(i32, dx16, r34)
  // L18(i32, dx16, r34)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r34_;
  goto L18_;

L79_:;
  // goto L17(i34, dx19, r35)
  // L17(i34, dx19, r35)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r35_;
  goto L17_;
}
SEXP Rsh_Fir_user_promise_inner1311136554_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_search;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1311136554/0: expected 0, got %d", NCAPTURES);

  // search = ldf search
  Rsh_Fir_reg_search = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // r = dyn search()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1311136554_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_where9_;
  SEXP Rsh_Fir_reg_where10_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_where12_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1311136554/0: expected 0, got %d", NCAPTURES);

  // where9 = ld where
  Rsh_Fir_reg_where9_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // where10 = force? where9
  Rsh_Fir_reg_where10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where9_);
  // checkMissing(where10)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_where10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(where10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_where10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args36);
  // if c2 then L1() else L2(where10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(where10)
    Rsh_Fir_reg_where12_ = Rsh_Fir_reg_where10_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L1_:;
  // dr = tryDispatchBuiltin.1("[", where10)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_where10_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_where12_ = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r18 = dyn __(where12, i6)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_where12_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r18_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1311136554_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1311136554/0: expected 0, got %d", NCAPTURES);

  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return z1
  return Rsh_Fir_reg_z1_;
}
SEXP Rsh_Fir_user_promise_inner1311136554_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_all1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1311136554/0: expected 0, got %d", NCAPTURES);

  // all = ld all
  Rsh_Fir_reg_all = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // all1 = force? all
  Rsh_Fir_reg_all1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all);
  // checkMissing(all1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_all1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return all1
  return Rsh_Fir_reg_all1_;
}
SEXP Rsh_Fir_user_promise_inner1311136554_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z10_;
  SEXP Rsh_Fir_reg_z11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1311136554/0: expected 0, got %d", NCAPTURES);

  // z10 = ld z
  Rsh_Fir_reg_z10_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // z11 = force? z10
  Rsh_Fir_reg_z11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z10_);
  // checkMissing(z11)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_z11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return z11
  return Rsh_Fir_reg_z11_;
}
SEXP Rsh_Fir_user_promise_inner1311136554_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1311136554/0: expected 0, got %d", NCAPTURES);

  // r43 = clos inner2501545716
  Rsh_Fir_reg_r43_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // return r43
  return Rsh_Fir_reg_r43_;
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
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_length1;
  SEXP Rsh_Fir_reg_r2_2;
  SEXP Rsh_Fir_reg_r3_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r3 = `==`(r1, 0)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args101);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_1;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L3_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r2 = dyn length(x2)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_2;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
