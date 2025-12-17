#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3708401697_6(SEXP CCP, SEXP RHO);
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
  // st `.Rd_get_xrefs` = r
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
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_recurse;  // recurse
  SEXP Rsh_Fir_reg_recurse1_;  // recurse1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_out;  // out
  SEXP Rsh_Fir_reg_out1_;  // out1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L0_:;
  // l = ld out
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r12 = dyn list(NULL, r10)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   character = ldf character;
  //   r = dyn character();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // r2 = dyn matrix[, nrow, ncol](p, 0, 2)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st out = r2
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // r3 = clos inner3708401697
  Rsh_Fir_reg_r3_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // st recurse = r3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // p2 = prom<V +>{
  //   recurse = ld recurse;
  //   recurse1 = force? recurse;
  //   checkMissing(recurse1);
  //   return recurse1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // r6 = dyn lapply(p1, p2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 16 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L6_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // r7 = dyn base(NULL, <lang c("Target", "Anchor")>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;

L8_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r11 = dyn c("Target", "Anchor")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

L9_:;
  // r9 = dyn base1("Target", "Anchor")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L1_;

D4_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L1(r11)
  // L1(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L1_;

D5_:;
  // deopt 27 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r12_;
  goto L0_;

D6_:;
  // deopt 29 [r8, l, r8]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // r13 = dyn dimnames__(l, NULL, r8)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D7_:;
  // deopt 31 [r8, r13]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // st out = r13
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D8_:;
  // deopt 33 [out]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_out;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L14_:;
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return out1
  return Rsh_Fir_reg_out1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // r = dyn character()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // recurse = ld recurse
  Rsh_Fir_reg_recurse = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // recurse1 = force? recurse
  Rsh_Fir_reg_recurse1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recurse);
  // checkMissing(recurse1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_recurse1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return recurse1
  return Rsh_Fir_reg_recurse1_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_e;  // e
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_tag;  // tag
  SEXP Rsh_Fir_reg_tag1_;  // tag1
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_e4_;  // e4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_e5_;  // e5
  SEXP Rsh_Fir_reg_e6_;  // e6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_e8_;  // e8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_e9_;  // e9
  SEXP Rsh_Fir_reg_e10_;  // e10
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_arg;  // arg
  SEXP Rsh_Fir_reg_arg1_;  // arg1
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_opt;  // opt
  SEXP Rsh_Fir_reg_opt1_;  // opt1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_opt2_;  // opt2
  SEXP Rsh_Fir_reg_opt3_;  // opt3
  SEXP Rsh_Fir_reg_as_character1_;  // as_character1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_rbind;  // rbind
  SEXP Rsh_Fir_reg_out1;  // out
  SEXP Rsh_Fir_reg_out1_1;  // out1
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_val;  // val
  SEXP Rsh_Fir_reg_val1_;  // val1
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_tag2_;  // tag2
  SEXP Rsh_Fir_reg_tag3_;  // tag3
  SEXP Rsh_Fir_reg_identical1_;  // identical1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_e11_;  // e11
  SEXP Rsh_Fir_reg_e12_;  // e12
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_e14_;  // e14
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_as_character2_;  // as_character2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_arg2_;  // arg2
  SEXP Rsh_Fir_reg_arg3_;  // arg3
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_arg4_;  // arg4
  SEXP Rsh_Fir_reg_arg5_;  // arg5
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_rbind1_;  // rbind1
  SEXP Rsh_Fir_reg_out2_;  // out2
  SEXP Rsh_Fir_reg_out3_;  // out3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_val2_;  // val2
  SEXP Rsh_Fir_reg_val3_;  // val3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_e15_;  // e15
  SEXP Rsh_Fir_reg_e16_;  // e16
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_lapply1;  // lapply
  SEXP Rsh_Fir_reg_e17_;  // e17
  SEXP Rsh_Fir_reg_e18_;  // e18
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_recurse1;  // recurse
  SEXP Rsh_Fir_reg_recurse1_1;  // recurse1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r51_;  // r51

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // sym = ldf attr
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf attr in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L0_:;
  // st tag = r1
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L1_:;
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c then L29() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L29()
    goto L29_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym9 = ldf identical
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base9 = ldf identical in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard9 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L3_:;
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c1 then L34() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L34()
    goto L34_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard8 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L5_:;
  // st arg = r10
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard4 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L6_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r12 = dyn as_character(dx1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

L7_:;
  // st opt = r14
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard5 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L8_:;
  // goto L12(r17)
  // L12(r17)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r17_;
  goto L12_;

L9_:;
  // c4 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c4 then L52() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L52()
    goto L52_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // sym7 = ldf `as.character`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base7 = ldf `as.character` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard7 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L11_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r23 = dyn c5(arg1, r20)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_arg1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

L12_:;
  // st val = r24
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // rbind = ldf rbind
  Rsh_Fir_reg_rbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L63() else D16()
  // L63()
  goto L63_;

L13_:;
  // sym12 = ldf `is.list`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base12 = ldf `is.list` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard12 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L14_:;
  // c7 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c7 then L70() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L70()
    goto L70_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // goto L13()
  // L13()
  goto L13_;

L16_:;
  // st arg = r35
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard11 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L17_:;
  // as_character2 = ldf `as.character` in base
  Rsh_Fir_reg_as_character2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r37 = dyn as_character2(dx3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L77() else D21()
  // L77()
  goto L77_;

L18_:;
  // st val = r39
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // rbind1 = ldf rbind
  Rsh_Fir_reg_rbind1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L84() else D26()
  // L84()
  goto L84_;

L19_:;
  // c10 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c10 then L91() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L91()
    goto L91_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 6);

L21_:;
  // e1 = ld e
  Rsh_Fir_reg_e1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r = dyn base(<sym e>, "Rd_tag")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [e1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_e1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // e2 = force? e1
  Rsh_Fir_reg_e2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e1_);
  // checkMissing(e2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_e2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r2 = dyn attr(e2, "Rd_tag")
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_e2_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L24() else D1()
  // L24()
  goto L24_;

D1_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L0_;

L25_:;
  // tag = ld tag
  Rsh_Fir_reg_tag = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r3 = dyn base1(<sym tag>, "\\link")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_1;
  goto L1_;

D2_:;
  // deopt 10 [tag]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_tag;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // tag1 = force? tag
  Rsh_Fir_reg_tag1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag);
  // checkMissing(tag1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_tag1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r5 = dyn identical(tag1, "\\link", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args34[9];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_tag1_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args34[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args34[5] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args34[6] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args34[7] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args34[8] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names13[9];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_array_arg_names13[6] = R_MissingArg;
  Rsh_Fir_array_arg_names13[7] = R_MissingArg;
  Rsh_Fir_array_arg_names13[8] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 21 [r5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L29_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // e3 = ld e
  Rsh_Fir_reg_e3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L32() else D4()
  // L32()
  goto L32_;

L31_:;
  // r6 = dyn base2(<sym e>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L3_;

D4_:;
  // deopt 24 [e3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_e3_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // e4 = force? e3
  Rsh_Fir_reg_e4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e3_);
  // checkMissing(e4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_e4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r8 = dyn length(e4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_e4_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L33() else D5()
  // L33()
  goto L33_;

D5_:;
  // deopt 27 [r8]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_1;
  goto L3_;

L34_:;
  // sym3 = ldf `as.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf `as.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard3 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // e5 = ld e
  Rsh_Fir_reg_e5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L37() else D6()
  // L37()
  goto L37_;

L36_:;
  // r9 = dyn base3(<lang `[[`(e, 1)>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_1;
  goto L5_;

D6_:;
  // deopt 30 [e5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L37_:;
  // e6 = force? e5
  Rsh_Fir_reg_e6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e5_);
  // checkMissing(e6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_e6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(e6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_e6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c2 then L38() else L39(e6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L38()
    goto L38_;
  } else {
  // L39(e6)
    Rsh_Fir_reg_e8_ = Rsh_Fir_reg_e6_;
    goto L39_;
  }

L38_:;
  // dr = tryDispatchBuiltin.1("[[", e6)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_e6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc then L40() else L39(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L40()
    goto L40_;
  } else {
  // L39(dr)
    Rsh_Fir_reg_e8_ = Rsh_Fir_reg_dr;
    goto L39_;
  }

L39_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r11 = dyn __(e8, 1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_e8_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_1;
  goto L6_;

L40_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D7_:;
  // deopt 36 [r12]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r12_1;
  goto L5_;

L42_:;
  // e9 = ld e
  Rsh_Fir_reg_e9_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L44() else D8()
  // L44()
  goto L44_;

L43_:;
  // r13 = dyn base4(<sym e>, "Rd_option")
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_1;
  goto L7_;

D8_:;
  // deopt 40 [e9]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_e9_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L44_:;
  // e10 = force? e9
  Rsh_Fir_reg_e10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e9_);
  // checkMissing(e10)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_e10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r15 = dyn attr1(e10, "Rd_option")
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_e10_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L45() else D9()
  // L45()
  goto L45_;

D9_:;
  // deopt 44 [r15]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

L46_:;
  // arg = ld arg
  Rsh_Fir_reg_arg = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L48() else D10()
  // L48()
  goto L48_;

L47_:;
  // r16 = dyn base5(<sym arg>, <lang if(is.null(opt), "", as.character(opt))>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L8_;

D10_:;
  // deopt 48 [arg]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_arg;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L48_:;
  // arg1 = force? arg
  Rsh_Fir_reg_arg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arg);
  // checkMissing(arg1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_arg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard6 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // opt = ld opt
  Rsh_Fir_reg_opt = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

L50_:;
  // r18 = dyn base6(<sym opt>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D11_:;
  // deopt 51 [opt]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_opt;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L51_:;
  // opt1 = force? opt
  Rsh_Fir_reg_opt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opt);
  // checkMissing(opt1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_opt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c3 = `==`(opt1, NULL)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_opt1_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L9(c3)
  // L9(c3)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_c3_;
  goto L9_;

L52_:;
  // goto L11("")
  // L11("")
  Rsh_Fir_reg_r20_ = Rsh_const(CCP, 40);
  goto L11_;

L54_:;
  // opt2 = ld opt
  Rsh_Fir_reg_opt2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L56() else D12()
  // L56()
  goto L56_;

L55_:;
  // r21 = dyn base7(<sym opt>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L11_;

D12_:;
  // deopt 58 [opt2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_opt2_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L56_:;
  // opt3 = force? opt2
  Rsh_Fir_reg_opt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opt2_);
  // checkMissing(opt3)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_opt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r22 = dyn as_character1(opt3)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_opt3_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

D13_:;
  // deopt 61 [r22]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r22_;
  goto L11_;

D14_:;
  // deopt 63 [r23]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r23_;
  goto L8_;

L60_:;
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r26 = dyn c6("", "")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

L61_:;
  // r25 = dyn base8("", "")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L12(r25)
  // L12(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L12_;

D15_:;
  // deopt 69 [r26]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L12(r26)
  // L12(r26)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r26_;
  goto L12_;

D16_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // p = prom<V +>{
  //   out = ld out;
  //   out1 = force? out;
  //   checkMissing(out1);
  //   return out1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_, CCP, RHO);
  // p1 = prom<V +>{
  //   val = ld val;
  //   val1 = force? val;
  //   checkMissing(val1);
  //   return val1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_1, CCP, RHO);
  // r29 = dyn rbind(p, p1)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rbind, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

D17_:;
  // deopt 75 [r29]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L64_:;
  // sst out = r29
  Rsh_Fir_super_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // goto L13()
  // L13()
  goto L13_;

L66_:;
  // tag2 = ld tag
  Rsh_Fir_reg_tag2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

L67_:;
  // r31 = dyn base9(<sym tag>, "\\linkS4class")
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L14(r31)
  // L14(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L14_;

D18_:;
  // deopt 79 [tag2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_tag2_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L68_:;
  // tag3 = force? tag2
  Rsh_Fir_reg_tag3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tag2_);
  // checkMissing(tag3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_tag3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r33 = dyn identical1(tag3, "\\linkS4class", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args66[9];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_tag3_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args66[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args66[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args66[4] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args66[5] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args66[6] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args66[7] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args66[8] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names28[9];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_array_arg_names28[4] = R_MissingArg;
  Rsh_Fir_array_arg_names28[5] = R_MissingArg;
  Rsh_Fir_array_arg_names28[6] = R_MissingArg;
  Rsh_Fir_array_arg_names28[7] = R_MissingArg;
  Rsh_Fir_array_arg_names28[8] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L69() else D19()
  // L69()
  goto L69_;

D19_:;
  // deopt 90 [r33]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L14(r33)
  // L14(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L14_;

L70_:;
  // sym10 = ldf `as.character`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base10 = ldf `as.character` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard10 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L71_:;
  // e11 = ld e
  Rsh_Fir_reg_e11_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

L72_:;
  // r34 = dyn base10(<lang `[[`(e, 1)>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L16(r34)
  // L16(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L16_;

D20_:;
  // deopt 93 [e11]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_e11_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L73_:;
  // e12 = force? e11
  Rsh_Fir_reg_e12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e11_);
  // checkMissing(e12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_e12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(e12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_e12_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c8 then L74() else L75(e12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L74()
    goto L74_;
  } else {
  // L75(e12)
    Rsh_Fir_reg_e14_ = Rsh_Fir_reg_e12_;
    goto L75_;
  }

L74_:;
  // dr2 = tryDispatchBuiltin.1("[[", e12)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_e12_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc1 then L76() else L75(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L76()
    goto L76_;
  } else {
  // L75(dr2)
    Rsh_Fir_reg_e14_ = Rsh_Fir_reg_dr2_;
    goto L75_;
  }

L75_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r36 = dyn __1(e14, 1)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_e14_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L17(r36)
  // L17(r36)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r36_;
  goto L17_;

L76_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L17(dx2)
  // L17(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L17_;

D21_:;
  // deopt 99 [r37]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L16(r37)
  // L16(r37)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r37_;
  goto L16_;

L78_:;
  // arg2 = ld arg
  Rsh_Fir_reg_arg2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L80() else D22()
  // L80()
  goto L80_;

L79_:;
  // r38 = dyn base11(<sym arg>, <lang sprintf("=%s-class", arg)>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L18(r38)
  // L18(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L18_;

D22_:;
  // deopt 103 [arg2]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_arg2_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L80_:;
  // arg3 = force? arg2
  Rsh_Fir_reg_arg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arg2_);
  // checkMissing(arg3)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_arg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L81() else D23()
  // L81()
  goto L81_;

D23_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // p2 = prom<V +>{
  //   arg4 = ld arg;
  //   arg5 = force? arg4;
  //   checkMissing(arg5);
  //   return arg5;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_2, CCP, RHO);
  // r41 = dyn sprintf("=%s-class", p2)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L82() else D24()
  // L82()
  goto L82_;

D24_:;
  // deopt 109 [r41]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L82_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r42 = dyn c9(arg3, r41)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_arg3_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L83() else D25()
  // L83()
  goto L83_;

D25_:;
  // deopt 111 [r42]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L18(r42)
  // L18(r42)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r42_;
  goto L18_;

D26_:;
  // deopt 114 []
  Rsh_Fir_deopt(114, 0, NULL, CCP, RHO);
  return R_NilValue;

L84_:;
  // p3 = prom<V +>{
  //   out2 = ld out;
  //   out3 = force? out2;
  //   checkMissing(out3);
  //   return out3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_3, CCP, RHO);
  // p4 = prom<V +>{
  //   val2 = ld val;
  //   val3 = force? val2;
  //   checkMissing(val3);
  //   return val3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_4, CCP, RHO);
  // r45 = dyn rbind1(p3, p4)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rbind1_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L85() else D27()
  // L85()
  goto L85_;

D27_:;
  // deopt 117 [r45]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L85_:;
  // sst out = r45
  Rsh_Fir_super_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // goto L13()
  // L13()
  goto L13_;

L87_:;
  // e15 = ld e
  Rsh_Fir_reg_e15_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L89() else D28()
  // L89()
  goto L89_;

L88_:;
  // r46 = dyn base12(<sym e>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L19(r46)
  // L19(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L19_;

D28_:;
  // deopt 123 [e15]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_e15_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L89_:;
  // e16 = force? e15
  Rsh_Fir_reg_e16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e15_);
  // checkMissing(e16)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_e16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r48 = dyn is_list(e16)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_e16_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L90() else D29()
  // L90()
  goto L90_;

D29_:;
  // deopt 126 [r48]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L19(r48)
  // L19(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L19_;

L91_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L92() else D30()
  // L92()
  goto L92_;

D30_:;
  // deopt 128 []
  Rsh_Fir_deopt(128, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // p5 = prom<V +>{
  //   e17 = ld e;
  //   e18 = force? e17;
  //   checkMissing(e18);
  //   return e18;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_5, CCP, RHO);
  // p6 = prom<V +>{
  //   recurse = ld recurse;
  //   recurse1 = force? recurse;
  //   checkMissing(recurse1);
  //   return recurse1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_6, CCP, RHO);
  // r51 = dyn lapply(p5, p6)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply1, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L93() else D31()
  // L93()
  goto L93_;

D31_:;
  // deopt 131 [r51]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L93_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r51
  return Rsh_Fir_reg_r51_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO) {
  // out = ld out
  Rsh_Fir_reg_out1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // out1 = force? out
  Rsh_Fir_reg_out1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_out1);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_out1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return out1
  return Rsh_Fir_reg_out1_1;
}
SEXP Rsh_Fir_user_promise_inner3708401697_1(SEXP CCP, SEXP RHO) {
  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return val1
  return Rsh_Fir_reg_val1_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_2(SEXP CCP, SEXP RHO) {
  // arg4 = ld arg
  Rsh_Fir_reg_arg4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // arg5 = force? arg4
  Rsh_Fir_reg_arg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arg4_);
  // checkMissing(arg5)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_arg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return arg5
  return Rsh_Fir_reg_arg5_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_3(SEXP CCP, SEXP RHO) {
  // out2 = ld out
  Rsh_Fir_reg_out2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // out3 = force? out2
  Rsh_Fir_reg_out3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out2_);
  // checkMissing(out3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_out3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return out3
  return Rsh_Fir_reg_out3_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_4(SEXP CCP, SEXP RHO) {
  // val2 = ld val
  Rsh_Fir_reg_val2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // val3 = force? val2
  Rsh_Fir_reg_val3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val2_);
  // checkMissing(val3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_val3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return val3
  return Rsh_Fir_reg_val3_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_5(SEXP CCP, SEXP RHO) {
  // e17 = ld e
  Rsh_Fir_reg_e17_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // e18 = force? e17
  Rsh_Fir_reg_e18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e17_);
  // checkMissing(e18)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_e18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return e18
  return Rsh_Fir_reg_e18_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_6(SEXP CCP, SEXP RHO) {
  // recurse = ld recurse
  Rsh_Fir_reg_recurse1 = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // recurse1 = force? recurse
  Rsh_Fir_reg_recurse1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_recurse1);
  // checkMissing(recurse1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_recurse1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return recurse1
  return Rsh_Fir_reg_recurse1_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
