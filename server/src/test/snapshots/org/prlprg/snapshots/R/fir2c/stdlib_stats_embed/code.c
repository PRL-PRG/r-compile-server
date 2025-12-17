#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3264053104_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3264053104_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3264053104_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3264053104_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3264053104_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3264053104_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3264053104_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3264053104_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3264053104_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3264053104_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_embed;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3264053104
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3264053104_, RHO, CCP);
  // st embed = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st x = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // embed = ldf embed
  Rsh_Fir_reg_embed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn embed(p, 3.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_embed, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 10 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_function_inner3264053104_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3264053104 dynamic dispatch ([x, dimension])

  return Rsh_Fir_user_version_inner3264053104_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3264053104_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3264053104 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3264053104/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_dimension;
  SEXP Rsh_Fir_reg_dimension_isMissing;
  SEXP Rsh_Fir_reg_dimension_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_is_matrix;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_dimension1_;
  SEXP Rsh_Fir_reg_dimension2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_dimension3_;
  SEXP Rsh_Fir_reg_dimension4_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_Recall;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_m4_;
  SEXP Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_reg_dimension11_;
  SEXP Rsh_Fir_reg_dimension12_;
  SEXP Rsh_Fir_reg_seq_int;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_is_vector;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_is_ts;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_dimension13_;
  SEXP Rsh_Fir_reg_dimension14_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_dimension15_;
  SEXP Rsh_Fir_reg_dimension16_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_dimension17_;
  SEXP Rsh_Fir_reg_dimension18_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_m6_;
  SEXP Rsh_Fir_reg_m7_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_dimension19_;
  SEXP Rsh_Fir_reg_dimension20_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_x27_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_m8_;
  SEXP Rsh_Fir_reg_m9_;
  SEXP Rsh_Fir_reg_dimension21_;
  SEXP Rsh_Fir_reg_dimension22_;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_rep_int1_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_m10_;
  SEXP Rsh_Fir_reg_m11_;
  SEXP Rsh_Fir_reg_dimension23_;
  SEXP Rsh_Fir_reg_dimension24_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_dim__;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_data;
  SEXP Rsh_Fir_reg_data1_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r75_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_dimension = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // dimension_isMissing = missing.0(dimension)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dimension;
  Rsh_Fir_reg_dimension_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if dimension_isMissing then L0(1.0) else L0(dimension)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dimension_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_dimension_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(dimension)
    Rsh_Fir_reg_dimension_orDefault = Rsh_Fir_reg_dimension;
    goto L0_;
  }

L0_:;
  // st dimension = dimension_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dimension_orDefault, RHO);
  (void)(Rsh_Fir_reg_dimension_orDefault);
  // sym = ldf `is.matrix`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.matrix` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c then L26() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L26()
    goto L26_;
  } else {
  // L2()
    goto L2_;
  }

L22_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L24() else D0()
  // L24()
  goto L24_;

L23_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // sym3 = ldf `is.vector`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf `is.vector` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L24_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn is_matrix(x2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L25() else D1()
  // L25()
  goto L25_;

L26_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // c11 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c11 then L12(c11) else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L12(c11)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c11_;
    goto L12_;
  } else {
  // L63()
    goto L63_;
  }

L25_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L1_;

L27_:;
  // p = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264053104_, 0, NULL, CCP, RHO);
  // r4 = dyn nrow(p)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

L59_:;
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L61() else D21()
  // L61()
  goto L61_;

L60_:;
  // r40 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L11(r40)
  // L11(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L11_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 71 [x12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // c17 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c17 then L67() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L67()
    goto L67_;
  } else {
  // L13()
    goto L13_;
  }

L28_:;
  // st n = r4
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L61_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // is_vector = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r42 = dyn is_vector(x13, "any")
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L62() else D22()
  // L62()
  goto L62_;

L63_:;
  // is_ts = ldf `is.ts`
  Rsh_Fir_reg_is_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L64() else D23()
  // L64()
  goto L64_;

D4_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 75 [r42]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 77 [c11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L106() else D47()
  // L106()
  goto L106_;

L29_:;
  // p1 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264053104_1, 0, NULL, CCP, RHO);
  // r6 = dyn ncol(p1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

L62_:;
  // goto L11(r42)
  // L11(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L11_;

L64_:;
  // p7 = prom<V +>{
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   return x15;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264053104_2, 0, NULL, CCP, RHO);
  // r44 = dyn is_ts(p7)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_ts, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L65() else D24()
  // L65()
  goto L65_;

L67_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard4 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

D5_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 79 [c11, r44]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 152 []
  Rsh_Fir_deopt(152, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // st n = r46
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // dimension13 = ld dimension
  Rsh_Fir_reg_dimension13_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L72() else D27()
  // L72()
  goto L72_;

L30_:;
  // st m = r6
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // dimension1 = ld dimension
  Rsh_Fir_reg_dimension1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

L65_:;
  // c14 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // c15 = `||`(c11, c14)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args22);
  // goto L12(c15)
  // L12(c15)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c15_;
  goto L12_;

L68_:;
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L70() else D25()
  // L70()
  goto L70_;

L69_:;
  // r45 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L14(r45)
  // L14(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L14_;

L106_:;
  // r75 = dyn stop2("'x' is not a vector or matrix")
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L107() else D48()
  // L107()
  goto L107_;

D6_:;
  // deopt 16 [dimension1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dimension1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 83 [x16]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 88 [dimension13]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dimension13_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 154 [r75]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L31_:;
  // dimension2 = force? dimension1
  Rsh_Fir_reg_dimension2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension1_);
  // checkMissing(dimension2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dimension2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // r7 = `<`(dimension2, 1.0)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dimension2_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args26);
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c1 then L3(c1) else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L3(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L3_;
  } else {
  // L32()
    goto L32_;
  }

L70_:;
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r47 = dyn length(x17)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L71() else D26()
  // L71()
  goto L71_;

L72_:;
  // dimension14 = force? dimension13
  Rsh_Fir_reg_dimension14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension13_);
  // checkMissing(dimension14)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dimension14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // r48 = `<`(dimension14, 1.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dimension14_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args31);
  // c18 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c18 then L15(c18) else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L15(c18)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c18_;
    goto L15_;
  } else {
  // L73()
    goto L73_;
  }

L107_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r75
  return Rsh_Fir_reg_r75_;

D26_:;
  // deopt 86 [r47]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L3_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c7 then L36() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L36()
    goto L36_;
  } else {
  // L4()
    goto L4_;
  }

L15_:;
  // c24 = `as.logical`(c19)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c24 then L77() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L77()
    goto L77_;
  } else {
  // L16()
    goto L16_;
  }

L32_:;
  // dimension3 = ld dimension
  Rsh_Fir_reg_dimension3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L71_:;
  // goto L14(r47)
  // L14(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L14_;

L73_:;
  // dimension15 = ld dimension
  Rsh_Fir_reg_dimension15_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L74() else D28()
  // L74()
  goto L74_;

D7_:;
  // deopt 20 [c1, dimension3]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_dimension3_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 92 [c18, dimension15]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_dimension15_;
  Rsh_Fir_deopt(92, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L40() else D11()
  // L40()
  goto L40_;

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L81() else D32()
  // L81()
  goto L81_;

L33_:;
  // dimension4 = force? dimension3
  Rsh_Fir_reg_dimension4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension3_);
  // checkMissing(dimension4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dimension4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

L36_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L37() else D9()
  // L37()
  goto L37_;

L74_:;
  // dimension16 = force? dimension15
  Rsh_Fir_reg_dimension16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension15_);
  // checkMissing(dimension16)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dimension16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L75() else D29()
  // L75()
  goto L75_;

L77_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L78() else D30()
  // L78()
  goto L78_;

D8_:;
  // deopt 21 [c1, dimension4, n]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_dimension4_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(21, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 93 [c18, dimension16, n4]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_dimension16_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(93, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 103 [n6]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L34_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r8 = `>`(dimension4, n1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dimension4_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args38);
  // c4 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args40);
  // goto L3(c5)
  // L3(c5)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c5_;
  goto L3_;

L37_:;
  // r9 = dyn stop("wrong embedding dimension")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L38() else D10()
  // L38()
  goto L38_;

L40_:;
  // p2 = prom<V +>{
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   dimension5 = ld dimension;
  //   dimension6 = force? dimension5;
  //   checkMissing(dimension6);
  //   r11 = `-`(n3, dimension6);
  //   r12 = `+`(r11, 1);
  //   return r12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264053104_3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   dimension7 = ld dimension;
  //   dimension8 = force? dimension7;
  //   checkMissing(dimension8);
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   r14 = `*`(dimension8, m1);
  //   return r14;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264053104_4, 0, NULL, CCP, RHO);
  // r16 = dyn matrix(0.0, p2, p3)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L41() else D12()
  // L41()
  goto L41_;

L75_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r49 = `>`(dimension16, n5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dimension16_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args51);
  // c21 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // c22 = `||`(c18, c21)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args53);
  // goto L15(c22)
  // L15(c22)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c22_;
  goto L15_;

L78_:;
  // r50 = dyn stop1("wrong embedding dimension")
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L79() else D31()
  // L79()
  goto L79_;

L81_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // dimension17 = ld dimension
  Rsh_Fir_reg_dimension17_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L82() else D33()
  // L82()
  goto L82_;

D10_:;
  // deopt 28 [r9]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 36 [r16]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 100 [r50]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 104 [n7, dimension17]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_dimension17_;
  Rsh_Fir_deopt(104, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L5()
  // L5()
  goto L5_;

L41_:;
  // st y = r16
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym1 = ldf seq_len
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base1 = ldf seq_len in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard1 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L79_:;
  // goto L17()
  // L17()
  goto L17_;

L82_:;
  // dimension18 = force? dimension17
  Rsh_Fir_reg_dimension18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension17_);
  // checkMissing(dimension18)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dimension18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // r52 = `-`(n7, dimension18)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_dimension18_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args58);
  // r53 = `+`(r52, 1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args59);
  // st m = r53
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L83() else D34()
  // L83()
  goto L83_;

D34_:;
  // deopt 110 [x18]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L6_:;
  // s = toForSeq(r18)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args61);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 23);
  // goto L7(i)
  // L7(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L7_;

L42_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L44() else D13()
  // L44()
  goto L44_;

L43_:;
  // r17 = dyn base1(<sym m>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L6_;

L83_:;
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(x19)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args64);
  // if c25 then L84() else L85(x19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L84()
    goto L84_;
  } else {
  // L85(x19)
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_x19_;
    goto L85_;
  }

D13_:;
  // deopt 39 [m2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L7_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // c8 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if c8 then L45() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L45()
    goto L45_;
  } else {
  // L10()
    goto L10_;
  }

L18_:;
  // st data = dx5
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard7 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L44_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // r19 = seq_len(m3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args69);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L6_;

L84_:;
  // dr4 = tryDispatchBuiltin.1("[", x19)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc2 then L86() else L85(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L86()
    goto L86_;
  } else {
  // L85(dr4)
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_dr4_;
    goto L85_;
  }

L85_:;
  // m6 = ld m
  Rsh_Fir_reg_m6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L87() else D35()
  // L87()
  goto L87_;

D35_:;
  // deopt 113 [x21, 1, m6]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_m6_;
  Rsh_Fir_deopt(113, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L10_:;
  // x7 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args72[4];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args72[3] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_x7_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args72);
  // st i = x7
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_x7_, RHO);
  (void)(Rsh_Fir_reg_x7_);
  // Recall = ldf Recall
  Rsh_Fir_reg_Recall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L46() else D14()
  // L46()
  goto L46_;

L21_:;
  // l7 = ld data
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L102() else D44()
  // L102()
  goto L102_;

L45_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L57() else D20()
  // L57()
  goto L57_;

L86_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L18(dx4)
  // L18(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L18_;

L87_:;
  // m7 = force? m6
  Rsh_Fir_reg_m7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m6_);
  // checkMissing(m7)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_m7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r54 = `:`(1, m7)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_m7_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args75);
  // sym5 = ldf `rep.int`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base5 = ldf `rep.int` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard5 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L97_:;
  // m10 = ld m
  Rsh_Fir_reg_m10_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L99() else D41()
  // L99()
  goto L99_;

L98_:;
  // r71 = dyn base7(<sym m>, <sym dimension>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L21(r71)
  // L21(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L21_;

D14_:;
  // deopt 43 [i2]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 67 [y]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 138 [m10]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_m10_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 145 [r72, l7, r72]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(145, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L19_:;
  // r68 = `+`(r58, r59)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args78);
  // r69 = `-`(r68, 1)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args79);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r70 = dyn __1(x24, r69)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L18(r70)
  // L18(r70)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r70_;
  goto L18_;

L46_:;
  // p5 = prom<V +>{
  //   as_vector = ldf `as.vector`;
  //   p4 = prom<V +>{
  //     x8 = ld x;
  //     x9 = force? x8;
  //     checkMissing(x9);
  //     c9 = `is.object`(x9);
  //     if c9 then L1() else L2();
  //   L0(dx1):
  //     return dx1;
  //   L1():
  //     dr = tryDispatchBuiltin.1("[", x9);
  //     dc = getTryDispatchBuiltinDispatched(dr);
  //     if dc then L3() else L2();
  //   L2():
  //     i5 = ld i;
  //     i6 = force? i5;
  //     __ = ldf `[` in base;
  //     r20 = dyn __(x9, <missing>, i6);
  //     goto L0(r20);
  //   L3():
  //     dx = getTryDispatchBuiltinValue(dr);
  //     goto L0(dx);
  //   };
  //   r22 = dyn as_vector(p4);
  //   return r22;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264053104_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   dimension9 = ld dimension;
  //   dimension10 = force? dimension9;
  //   checkMissing(dimension10);
  //   return dimension10;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264053104_7, 0, NULL, CCP, RHO);
  // r25 = dyn Recall(p5, p6)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Recall, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L47() else D15()
  // L47()
  goto L47_;

L57_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y1
  return Rsh_Fir_reg_y1_;

L88_:;
  // dimension19 = ld dimension
  Rsh_Fir_reg_dimension19_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L90() else D36()
  // L90()
  goto L90_;

L89_:;
  // r57 = dyn base5(<lang `:`(dimension, 1)>, <lang rep.int(m, dimension)>)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L19(x21, r54, r57)
  // L19(x21, r54, r57)
  Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x21_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r57_;
  goto L19_;

L99_:;
  // m11 = force? m10
  Rsh_Fir_reg_m11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m10_);
  // checkMissing(m11)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_m11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // dimension23 = ld dimension
  Rsh_Fir_reg_dimension23_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L100() else D42()
  // L100()
  goto L100_;

L102_:;
  // r74 = dyn dim__(l7, NULL, r72)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L103() else D45()
  // L103()
  goto L103_;

D15_:;
  // deopt 46 [i2, r25]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 117 [x21, r54, dimension19]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_dimension19_;
  Rsh_Fir_deopt(117, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 140 [dimension23]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_dimension23_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 147 [r72, r74]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L47_:;
  // l1 = ld y
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c10 = `is.object`(l1)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args94);
  // if c10 then L48() else L49(i2, r25, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L48()
    goto L48_;
  } else {
  // L49(i2, r25, l1)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r25_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L49_;
  }

L90_:;
  // dimension20 = force? dimension19
  Rsh_Fir_reg_dimension20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension19_);
  // checkMissing(dimension20)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dimension20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // r60 = `:`(dimension20, 1)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dimension20_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args96);
  // sym6 = ldf `rep.int`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base6 = ldf `rep.int` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard6 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L100_:;
  // dimension24 = force? dimension23
  Rsh_Fir_reg_dimension24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension23_);
  // checkMissing(dimension24)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dimension24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c26 = ldf c in base
  Rsh_Fir_reg_c26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r73 = dyn c26(m11, dimension24)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_m11_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_dimension24_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c26_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L101() else D43()
  // L101()
  goto L101_;

L103_:;
  // st data = r74
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // data = ld data
  Rsh_Fir_reg_data = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L104() else D46()
  // L104()
  goto L104_;

D43_:;
  // deopt 143 [r73]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 149 [data]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_data;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L8_:;
  // st y = dx3
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L7(i10)
  // L7(i10)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i10_;
  goto L7_;

L20_:;
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r67 = dyn rep_int1(r60, r65)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L96() else D40()
  // L96()
  goto L96_;

L48_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l1, r25)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args101[2] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args101);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if dc1 then L50() else L49(i2, r25, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L50()
    goto L50_;
  } else {
  // L49(i2, r25, dr2)
    Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r25_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr2_;
    goto L49_;
  }

L49_:;
  // sym2 = ldf `seq.int`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base2 = ldf `seq.int` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard2 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L91_:;
  // m8 = ld m
  Rsh_Fir_reg_m8_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L93() else D37()
  // L93()
  goto L93_;

L92_:;
  // r63 = dyn base6(<sym m>, <sym dimension>)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L20(x21, r54, r63)
  // L20(x21, r54, r63)
  Rsh_Fir_reg_x27_ = Rsh_Fir_reg_x21_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r63_;
  goto L20_;

L101_:;
  // goto L21(r73)
  // L21(r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r73_;
  goto L21_;

L104_:;
  // data1 = force? data
  Rsh_Fir_reg_data1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data);
  // checkMissing(data1)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_data1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return data1
  return Rsh_Fir_reg_data1_;

D37_:;
  // deopt 123 [x21, r54, m8]
  SEXP Rsh_Fir_array_deopt_stack36[3];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_m8_;
  Rsh_Fir_deopt(123, 3, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 130 [x27, r64, r67]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x27_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(130, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L9_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r39 = dyn ___(l1, <missing>, r37, r36)
  SEXP Rsh_Fir_array_args106[4];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args106[3] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L8(i13, r39)
  // L8(i13, r39)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r39_;
  goto L8_;

L50_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L8(i2, dx2)
  // L8(i2, dx2)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L51_:;
  // i14 = ld i
  Rsh_Fir_reg_i14_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L53() else D16()
  // L53()
  goto L53_;

L52_:;
  // r34 = dyn base2[, by, `length.out`](<sym i>, <sym m>, <sym dimension>)
  SEXP Rsh_Fir_array_args108[3];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args108[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L9(i8, r27, r25, r34)
  // L9(i8, r27, r25, r34)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r34_;
  goto L9_;

L93_:;
  // m9 = force? m8
  Rsh_Fir_reg_m9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m8_);
  // checkMissing(m9)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_m9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // dimension21 = ld dimension
  Rsh_Fir_reg_dimension21_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L94() else D38()
  // L94()
  goto L94_;

L96_:;
  // goto L19(x27, r64, r67)
  // L19(x27, r64, r67)
  Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x27_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r67_;
  goto L19_;

D16_:;
  // deopt 51 [i8, r27, l3, r25, i14]
  SEXP Rsh_Fir_array_deopt_stack38[5];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack38[4] = Rsh_Fir_reg_i14_;
  Rsh_Fir_deopt(51, 5, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 125 [x21, r54, dimension21]
  SEXP Rsh_Fir_array_deopt_stack39[3];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_dimension21_;
  Rsh_Fir_deopt(125, 3, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L53_:;
  // i15 = force? i14
  Rsh_Fir_reg_i15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i14_);
  // checkMissing(i15)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_i15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L54() else D17()
  // L54()
  goto L54_;

L94_:;
  // dimension22 = force? dimension21
  Rsh_Fir_reg_dimension22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension21_);
  // checkMissing(dimension22)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dimension22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r66 = dyn rep_int(m9, dimension22)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_m9_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_dimension22_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L95() else D39()
  // L95()
  goto L95_;

D17_:;
  // deopt 53 [i8, r27, l3, r25, m4]
  SEXP Rsh_Fir_array_deopt_stack40[5];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack40[4] = Rsh_Fir_reg_m4_;
  Rsh_Fir_deopt(53, 5, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 128 [x21, r54, r66]
  SEXP Rsh_Fir_array_deopt_stack41[3];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(128, 3, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L54_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // dimension11 = ld dimension
  Rsh_Fir_reg_dimension11_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L55() else D18()
  // L55()
  goto L55_;

L95_:;
  // goto L20(x21, r54, r66)
  // L20(x21, r54, r66)
  Rsh_Fir_reg_x27_ = Rsh_Fir_reg_x21_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r66_;
  goto L20_;

D18_:;
  // deopt 56 [i8, r27, l3, r25, dimension11]
  SEXP Rsh_Fir_array_deopt_stack42[5];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack42[4] = Rsh_Fir_reg_dimension11_;
  Rsh_Fir_deopt(56, 5, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L55_:;
  // dimension12 = force? dimension11
  Rsh_Fir_reg_dimension12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension11_);
  // checkMissing(dimension12)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dimension12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r38 = dyn seq_int(i15, m5, dimension12)
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_m5_;
  Rsh_Fir_array_args115[2] = Rsh_Fir_reg_dimension12_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L56() else D19()
  // L56()
  goto L56_;

D19_:;
  // deopt 60 [i8, r27, l3, r25, r38]
  SEXP Rsh_Fir_array_deopt_stack43[5];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack43[3] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack43[4] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(60, 5, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L9(i8, r27, r25, r38)
  // L9(i8, r27, r25, r38)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner3264053104_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3264053104/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner3264053104_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3264053104/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner3264053104_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3264053104/0: expected 0, got %d", NCAPTURES);

  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_user_promise_inner3264053104_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_dimension5_;
  SEXP Rsh_Fir_reg_dimension6_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3264053104/0: expected 0, got %d", NCAPTURES);

  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // dimension5 = ld dimension
  Rsh_Fir_reg_dimension5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // dimension6 = force? dimension5
  Rsh_Fir_reg_dimension6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension5_);
  // checkMissing(dimension6)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dimension6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r11 = `-`(n3, dimension6)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_dimension6_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args44);
  // r12 = `+`(r11, 1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args45);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner3264053104_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dimension7_;
  SEXP Rsh_Fir_reg_dimension8_;
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3264053104/0: expected 0, got %d", NCAPTURES);

  // dimension7 = ld dimension
  Rsh_Fir_reg_dimension7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // dimension8 = force? dimension7
  Rsh_Fir_reg_dimension8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension7_);
  // checkMissing(dimension8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dimension8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r14 = `*`(dimension8, m1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dimension8_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args48);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner3264053104_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_vector;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3264053104/0: expected 0, got %d", NCAPTURES);

  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // p4 = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   c9 = `is.object`(x9);
  //   if c9 then L1() else L2();
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", x9);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2();
  // L2():
  //   i5 = ld i;
  //   i6 = force? i5;
  //   __ = ldf `[` in base;
  //   r20 = dyn __(x9, <missing>, i6);
  //   goto L0(r20);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264053104_6, 0, NULL, CCP, RHO);
  // r22 = dyn as_vector(p4)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names18, CCP, RHO);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_inner3264053104_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3264053104/0: expected 0, got %d", NCAPTURES);

  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(x9)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args82);
  // if c9 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", x9)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r20 = dyn __(x9, <missing>, i6)
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args85[2] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3264053104_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dimension9_;
  SEXP Rsh_Fir_reg_dimension10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3264053104/0: expected 0, got %d", NCAPTURES);

  // dimension9 = ld dimension
  Rsh_Fir_reg_dimension9_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // dimension10 = force? dimension9
  Rsh_Fir_reg_dimension10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dimension9_);
  // checkMissing(dimension10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dimension10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // return dimension10
  return Rsh_Fir_reg_dimension10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
