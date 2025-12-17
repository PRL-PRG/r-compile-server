#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4021312349_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4021312349_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4021312349_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_fivenum;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r6_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4021312349
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4021312349_, RHO, CCP);
  // st fivenum = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // fivenum = ldf fivenum
  Rsh_Fir_reg_fivenum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   rnorm = ldf rnorm;
  //   r3 = dyn rnorm(100.0);
  //   c = ldf c in base;
  //   r4 = dyn c(r3, <real -Infinity, NA_REAL, +Infinity>);
  //   goto L0(r4);
  // L2():
  //   r1 = dyn base(<lang rnorm(100.0)>, <lang `/`(`:`(`-`(1.0), 1.0), 0.0)>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r6 = dyn fivenum(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fivenum, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_rnorm;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // rnorm = ldf rnorm
  Rsh_Fir_reg_rnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r3 = dyn rnorm(100.0)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rnorm, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r4 = dyn c(r3, <real -Infinity, NA_REAL, +Infinity>)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r1 = dyn base(<lang rnorm(100.0)>, <lang `/`(`:`(`-`(1.0), 1.0), 0.0)>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner4021312349_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4021312349 dynamic dispatch ([x, `na.rm`])

  return Rsh_Fir_user_version_inner4021312349_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4021312349_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4021312349 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4021312349/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_na_rm;
  SEXP Rsh_Fir_reg_na_rm_isMissing;
  SEXP Rsh_Fir_reg_na_rm_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_xna;
  SEXP Rsh_Fir_reg_xna1_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_na_rm1_;
  SEXP Rsh_Fir_reg_na_rm2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_xna2_;
  SEXP Rsh_Fir_reg_xna3_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sort;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_rep_int1_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_n6_;
  SEXP Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_reg_n9_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_reg_n11_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_n12_;
  SEXP Rsh_Fir_reg_n13_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_d;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_d2_;
  SEXP Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_na_rm = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // na_rm_isMissing = missing.0(na_rm)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_na_rm;
  Rsh_Fir_reg_na_rm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if na_rm_isMissing then L0(TRUE) else L0(na_rm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_rm_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_const(CCP, 8);
    goto L0_;
  } else {
  // L0(na_rm)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_Fir_reg_na_rm;
    goto L0_;
  }

L0_:;
  // st `na.rm` = na_rm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_na_rm_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_rm_orDefault);
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L1_:;
  // st xna = r1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L18_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c then L26() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L26()
    goto L26_;
  } else {
  // L3()
    goto L3_;
  }

L20_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r2 = dyn is_na(x2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

L22_:;
  // xna = ld xna
  Rsh_Fir_reg_xna = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L24() else D2()
  // L24()
  goto L24_;

L23_:;
  // r3 = dyn base1(<sym xna>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L2_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 [xna]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_xna;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

L21_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

L24_:;
  // xna1 = force? xna
  Rsh_Fir_reg_xna1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xna);
  // checkMissing(xna1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_xna1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r5 = dyn any(xna1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_xna1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

L26_:;
  // na_rm1 = ld `na.rm`
  Rsh_Fir_reg_na_rm1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 13 [na_rm1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_na_rm1_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_;
  goto L2_;

L27_:;
  // na_rm2 = force? na_rm1
  Rsh_Fir_reg_na_rm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm1_);
  // checkMissing(na_rm2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_na_rm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(na_rm2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_na_rm2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c1 then L28() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L28()
    goto L28_;
  } else {
  // L4()
    goto L4_;
  }

L40_:;
  // p = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4021312349_, 0, NULL, CCP, RHO);
  // r12 = dyn sort(p)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L41() else D9()
  // L41()
  goto L41_;

D9_:;
  // deopt 34 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L4_:;
  // sym2 = ldf `rep.int`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf `rep.int` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard2 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L28_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

L41_:;
  // st x = r12
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard3 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

D5_:;
  // deopt 15 [x3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;

L9_:;
  // st n = r14
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

L29_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args22);
  // if c2 then L30() else L31(x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L30()
    goto L30_;
  } else {
  // L31(x4)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    goto L31_;
  }

L35_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r10 = dyn rep_int(NA_LGL, 5.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

L36_:;
  // r8 = dyn base2(NA_LGL, 5.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(r8)
  // L7(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L7_;

L42_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

L43_:;
  // r13 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(r13)
  // L9(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L9_;

D7_:;
  // deopt 27 [r10]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 38 [x9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 43 [n]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L5_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L8()
  // L8()
  goto L8_;

L30_:;
  // dr = tryDispatchBuiltin.1("[", x4)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc then L32() else L31(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_dr;
    goto L31_;
  }

L31_:;
  // xna2 = ld xna
  Rsh_Fir_reg_xna2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

L37_:;
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L7_;

L44_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r15 = dyn length(x10)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L45() else D11()
  // L45()
  goto L45_;

L46_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // r16 = `==`(n1, 0.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args31);
  // c3 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c3 then L47() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L47()
    goto L47_;
  } else {
  // L10()
    goto L10_;
  }

D6_:;
  // deopt 17 [x6, xna2]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_xna2_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 41 [r15]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L10_:;
  // sym5 = ldf floor
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base5 = ldf floor in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard5 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L32_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

L33_:;
  // xna3 = force? xna2
  Rsh_Fir_reg_xna3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xna2_);
  // checkMissing(xna3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_xna3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // r6 = `!`(xna3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_xna3_;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args36);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r7 = dyn __(x6, r6)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L5_;

L45_:;
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L9_;

L47_:;
  // sym4 = ldf `rep.int`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf `rep.int` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard4 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_;

L12_:;
  // r25 = `/`(r21, 2.0)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args39);
  // st n4 = r25
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard6 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L48_:;
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r19 = dyn rep_int1(NA_LGL, 5.0)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L50() else D13()
  // L50()
  goto L50_;

L49_:;
  // r17 = dyn base4(NA_LGL, 5.0)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r17)
  // L11(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L11_;

L52_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

L53_:;
  // r20 = dyn base5(<lang `/`(`(`(`+`(n, 3.0)), 2.0)>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(r20)
  // L12(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L12_;

D13_:;
  // deopt 52 [r19]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 54 [n2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L13_:;
  // st d = r27
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L63() else D21()
  // L63()
  goto L63_;

L50_:;
  // goto L11(r19)
  // L11(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L11_;

L54_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r22 = `+`(n3, 3.0)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args45);
  // r23 = `/`(r22, 2.0)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args46);
  // r24 = floor(r23)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(167, RHO, 1, Rsh_Fir_array_args47);
  // goto L12(r24)
  // L12(r24)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r24_;
  goto L12_;

L55_:;
  // n4 = ld n4
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L57() else D15()
  // L57()
  goto L57_;

L56_:;
  // r26 = dyn base6(1.0, <sym n4>, <lang `/`(`(`(`+`(n, 1.0)), 2.0)>, <lang `-`(`+`(n, 1.0), n4)>, <sym n>)
  SEXP Rsh_Fir_array_args48[5];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args48[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args48[4] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names17[5];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 5, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L13(r26)
  // L13(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L13_;

D15_:;
  // deopt 67 [n4]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 87 [0.5, x11]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L57_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

L63_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(x12)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args51);
  // if c5 then L64() else L65(0.5, x12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L64()
    goto L64_;
  } else {
  // L65(0.5, x12)
    Rsh_Fir_reg_r34_ = Rsh_const(CCP, 31);
    Rsh_Fir_reg_x14_ = Rsh_Fir_reg_x12_;
    goto L65_;
  }

D16_:;
  // deopt 69 [n6]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L14_:;
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L70() else D23()
  // L70()
  goto L70_;

L58_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r28 = `+`(n7, 1.0)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args53);
  // r29 = `/`(r28, 2.0)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args54);
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L59() else D17()
  // L59()
  goto L59_;

L64_:;
  // dr2 = tryDispatchBuiltin.1("[", x12)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_x12_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc1 then L66() else L65(0.5, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L66()
    goto L66_;
  } else {
  // L65(0.5, dr2)
    Rsh_Fir_reg_r34_ = Rsh_const(CCP, 31);
    Rsh_Fir_reg_x14_ = Rsh_Fir_reg_dr2_;
    goto L65_;
  }

L65_:;
  // sym7 = ldf floor
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base7 = ldf floor in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard7 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

D17_:;
  // deopt 75 [n8]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 93 [r36, dx5, x18]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(93, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L15_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r43 = dyn __1(x17, r41)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L14(r40, r43)
  // L14(r40, r43)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r43_;
  goto L14_;

L59_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // r30 = `+`(n9, 1.0)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args60);
  // n10 = ld n4
  Rsh_Fir_reg_n10_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L60() else D18()
  // L60()
  goto L60_;

L66_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L14(0.5, dx4)
  // L14(0.5, dx4)
  Rsh_Fir_reg_r36_ = Rsh_const(CCP, 31);
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L14_;

L67_:;
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L69() else D22()
  // L69()
  goto L69_;

L68_:;
  // r39 = dyn base7(<sym d>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(r34, x14, r39)
  // L15(r34, x14, r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_x17_ = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
  goto L15_;

L70_:;
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(x19)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args64);
  // if c6 then L71() else L72(r36, dx5, x19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L71()
    goto L71_;
  } else {
  // L72(r36, dx5, x19)
    Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r36_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_x19_;
    goto L72_;
  }

D18_:;
  // deopt 78 [r30, n10]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_n10_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 90 [r34, x14, d]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(90, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L16_:;
  // r55 = `+`(dx10, dx11)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args65);
  // r56 = `*`(r47, r55)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args66);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r56
  return Rsh_Fir_reg_r56_;

L60_:;
  // n11 = force? n10
  Rsh_Fir_reg_n11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n10_);
  // checkMissing(n11)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_n11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r31 = `-`(r30, n11)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_n11_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args68);
  // n12 = ld n
  Rsh_Fir_reg_n12_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L61() else D19()
  // L61()
  goto L61_;

L69_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r42 = floor(d1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(167, RHO, 1, Rsh_Fir_array_args70);
  // goto L15(r34, x14, r42)
  // L15(r34, x14, r42)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_x17_ = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L15_;

L71_:;
  // dr4 = tryDispatchBuiltin.1("[", x19)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc2 then L73() else L72(r36, dx5, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L73()
    goto L73_;
  } else {
  // L72(r36, dx5, dr4)
    Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r36_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_dr4_;
    goto L72_;
  }

L72_:;
  // sym8 = ldf ceiling
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base8 = ldf ceiling in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard8 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

D19_:;
  // deopt 81 [n12]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L17_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r54 = dyn __2(x24, r52)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L16(r51, dx14, r54)
  // L16(r51, dx14, r54)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx14_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r54_;
  goto L16_;

L61_:;
  // n13 = force? n12
  Rsh_Fir_reg_n13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n12_);
  // checkMissing(n13)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_n13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r32 = dyn c4(1.0, n5, r29, r31, n13)
  SEXP Rsh_Fir_array_args76[5];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args76[3] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args76[4] = Rsh_Fir_reg_n13_;
  SEXP Rsh_Fir_array_arg_names21[5];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 5, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L62() else D20()
  // L62()
  goto L62_;

L73_:;
  // dx9 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L16(r36, dx5, dx9)
  // L16(r36, dx5, dx9)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
  goto L16_;

L74_:;
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L76() else D24()
  // L76()
  goto L76_;

L75_:;
  // r50 = dyn base8(<sym d>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L17(r45, dx7, x21, r50)
  // L17(r45, dx7, x21, r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x21_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
  goto L17_;

D20_:;
  // deopt 84 [r32]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 96 [r45, dx7, x21, d2]
  SEXP Rsh_Fir_array_deopt_stack24[4];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_d2_;
  Rsh_Fir_deopt(96, 4, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L13(r32)
  // L13(r32)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r32_;
  goto L13_;

L76_:;
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r53 = ceiling(d3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(168, RHO, 1, Rsh_Fir_array_args80);
  // goto L17(r45, dx7, x21, r53)
  // L17(r45, dx7, x21, r53)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x21_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L17_;
}
SEXP Rsh_Fir_user_promise_inner4021312349_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4021312349/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
