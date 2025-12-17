#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1074782916_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1074782916_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1074782916_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1074782916_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1074782916_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1074782916_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1074782916_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1074782916_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1074782916_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1074782916_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1074782916_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_Sys_which;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1074782916
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1074782916_, RHO, CCP);
  // st `Sys.which` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // Sys_which = ldf `Sys.which`
  Rsh_Fir_reg_Sys_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
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
  //   c = ldf c in base;
  //   r3 = dyn c("ftp", "ping", "texi2dvi", "this-does-not-exist");
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base("ftp", "ping", "texi2dvi", "this-does-not-exist");
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn Sys_which(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_which, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c("ftp", "ping", "texi2dvi", "this-does-not-exist")
  SEXP Rsh_Fir_array_args1[4];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base("ftp", "ping", "texi2dvi", "this-does-not-exist")
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1074782916_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1074782916 dynamic dispatch ([names])

  return Rsh_Fir_user_version_inner1074782916_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1074782916_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1074782916 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1074782916/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_names3_;
  SEXP Rsh_Fir_reg_names4_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_which;
  SEXP Rsh_Fir_reg_which1_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_res;
  SEXP Rsh_Fir_reg_res1_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_names5_;
  SEXP Rsh_Fir_reg_names6_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_names7_;
  SEXP Rsh_Fir_reg_names8_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_names10_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_suppressWarnings;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_grepl;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_strsplit;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_i29_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_i31_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_i34_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_tmp;
  SEXP Rsh_Fir_reg_tmp1_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_i36_;
  SEXP Rsh_Fir_reg_tmp3_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_i38_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_i41_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_i42_;
  SEXP Rsh_Fir_reg_i43_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_i46_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_i47_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_i50_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_ans4_;
  SEXP Rsh_Fir_reg_ans5_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_ans6_;
  SEXP Rsh_Fir_reg_ans7_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_i54_;
  SEXP Rsh_Fir_reg_ans9_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_i56_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_i57_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_i59_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_i61_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_i62_;
  SEXP Rsh_Fir_reg_i63_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_file_exists;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_i69_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_i71_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_dx26_;
  SEXP Rsh_Fir_reg_i72_;
  SEXP Rsh_Fir_reg_i73_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_i74_;
  SEXP Rsh_Fir_reg_res6_;
  SEXP Rsh_Fir_reg_res7_;

  // Bind parameters
  Rsh_Fir_reg_names = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st names = names
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_names, RHO);
  (void)(Rsh_Fir_reg_names);
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L27() else D0()
  // L27()
  goto L27_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   names1 = ld names;
  //   names2 = force? names1;
  //   checkMissing(names2);
  //   length = ldf length in base;
  //   r2 = dyn length(names2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym names>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1074782916_, 0, NULL, CCP, RHO);
  // r4 = dyn character(p)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

D1_:;
  // deopt 3 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // st res = r4
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // names3 = ld names
  Rsh_Fir_reg_names3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

D2_:;
  // deopt 5 [names3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_names3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L29_:;
  // names4 = force? names3
  Rsh_Fir_reg_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names3_);
  // checkMissing(names4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // l = ld res
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

D3_:;
  // deopt 8 [names4, l, names4]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_names4_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_names4_;
  Rsh_Fir_deopt(8, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // r5 = dyn names__(l, NULL, names4)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_names4_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

D4_:;
  // deopt 10 [names4, r5]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_names4_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // st res = r5
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r5_1, RHO);
  (void)(Rsh_Fir_reg_r5_1);
  // st which = "/usr/bin/which"
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 12), RHO);
  (void)(Rsh_const(CCP, 12));
  // sym1 = ldf nzchar
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf nzchar in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L0_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args12);
  // c = `as.logical`(r9)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c then L36() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L36()
    goto L36_;
  } else {
  // L1()
    goto L1_;
  }

L32_:;
  // which = ld which
  Rsh_Fir_reg_which = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L34() else D5()
  // L34()
  goto L34_;

L33_:;
  // r6 = dyn base1(<sym which>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;

D5_:;
  // deopt 17 [which]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_which;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L1_:;
  // sym2 = ldf seq_along
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf seq_along in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard2 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L34_:;
  // which1 = force? which
  Rsh_Fir_reg_which1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which);
  // checkMissing(which1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_which1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r8 = dyn nzchar(which1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_which1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

L36_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L37() else D7()
  // L37()
  goto L37_;

D6_:;
  // deopt 20 [r8]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // s = toForSeq(r14)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args19);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 17);
  // goto L4(i)
  // L4(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L4_;

L35_:;
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L37_:;
  // r10 = dyn warning("'which' was not found on this platform")
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

L42_:;
  // names5 = ld names
  Rsh_Fir_reg_names5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

L43_:;
  // r13 = dyn base2(<sym names>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L3_;

D8_:;
  // deopt 25 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 32 [names5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_names5_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L4_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // c1 = `<`.1(l1, i2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if c1 then L45() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L45()
    goto L45_;
  } else {
  // L26()
    goto L26_;
  }

L38_:;
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L39() else D9()
  // L39()
  goto L39_;

L44_:;
  // names6 = force? names5
  Rsh_Fir_reg_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names5_);
  // checkMissing(names6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r15 = seq_along(names6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_names6_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(424, RHO, 1, Rsh_Fir_array_args25);
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L3_;

D9_:;
  // deopt 26 [res]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L26_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args26[4];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args26);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard3 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L39_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res1
  return Rsh_Fir_reg_res1_;

L45_:;
  // res6 = ld res
  Rsh_Fir_reg_res6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L107() else D32()
  // L107()
  goto L107_;

D32_:;
  // deopt 142 [res6]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_res6_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L5_:;
  // c3 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // if c3 then L54() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L54()
    goto L54_;
  } else {
  // L7()
    goto L7_;
  }

L46_:;
  // names7 = ld names
  Rsh_Fir_reg_names7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

L47_:;
  // r16 = dyn base3(<lang `[`(names, i)>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L5(i2, r16)
  // L5(i2, r16)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L5_;

L107_:;
  // res7 = force? res6
  Rsh_Fir_reg_res7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res6_);
  // checkMissing(res7)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_res7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res7
  return Rsh_Fir_reg_res7_;

D11_:;
  // deopt 37 [i2, names7]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_names7_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L7_:;
  // suppressWarnings = ldf suppressWarnings
  Rsh_Fir_reg_suppressWarnings = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L61() else D15()
  // L61()
  goto L61_;

L48_:;
  // names8 = force? names7
  Rsh_Fir_reg_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names7_);
  // checkMissing(names8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(names8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_names8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args33);
  // if c2 then L49() else L50(i2, names8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L49()
    goto L49_;
  } else {
  // L50(i2, names8)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_names10_ = Rsh_Fir_reg_names8_;
    goto L50_;
  }

L54_:;
  // l2 = ld res
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c4 = `is.object`(l2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args34);
  // if c4 then L55() else L56(i7, NA_LGL, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L55()
    goto L55_;
  } else {
  // L56(i7, NA_LGL, l2)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r21_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L56_;
  }

D15_:;
  // deopt 56 [i7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L6_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r19 = dyn is_na(dx1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

L8_:;
  // st res = dx3
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L4(i19)
  // L4(i19)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i19_;
  goto L4_;

L49_:;
  // dr = tryDispatchBuiltin.1("[", names8)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_names8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc then L51() else L50(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L51()
    goto L51_;
  } else {
  // L50(i2, dr)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_names10_ = Rsh_Fir_reg_dr;
    goto L50_;
  }

L50_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L52() else D12()
  // L52()
  goto L52_;

L55_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l2, NA_LGL)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args38);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc1 then L57() else L56(i7, NA_LGL, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L57()
    goto L57_;
  } else {
  // L56(i7, NA_LGL, dr2)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r21_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr2_;
    goto L56_;
  }

L56_:;
  // i20 = ld i
  Rsh_Fir_reg_i20_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L58() else D14()
  // L58()
  goto L58_;

L61_:;
  // p5 = prom<V +>{
  //   system = ldf system;
  //   p4 = prom<V +>{
  //     paste = ldf paste;
  //     p1 = prom<V +>{
  //       which2 = ld which;
  //       which3 = force? which2;
  //       checkMissing(which3);
  //       return which3;
  //     };
  //     p3 = prom<V +>{
  //       shQuote = ldf shQuote;
  //       p2 = prom<V +>{
  //         names11 = ld names;
  //         names12 = force? names11;
  //         checkMissing(names12);
  //         c5 = `is.object`(names12);
  //         if c5 then L1() else L2(names12);
  //       L0(dx5):
  //         return dx5;
  //       L1():
  //         dr4 = tryDispatchBuiltin.1("[", names12);
  //         dc2 = getTryDispatchBuiltinDispatched(dr4);
  //         if dc2 then L3() else L2(dr4);
  //       L2(names14):
  //         i24 = ld i;
  //         i25 = force? i24;
  //         __1 = ldf `[` in base;
  //         r27 = dyn __1(names14, i25);
  //         goto L0(r27);
  //       L3():
  //         dx4 = getTryDispatchBuiltinValue(dr4);
  //         goto L0(dx4);
  //       };
  //       r29 = dyn shQuote(p2);
  //       return r29;
  //     };
  //     r31 = dyn paste(p1, p3);
  //     return r31;
  //   };
  //   r33 = dyn system[, intern, `ignore.stderr`](p4, TRUE, TRUE);
  //   return r33;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1074782916_1, 0, NULL, CCP, RHO);
  // r35 = dyn suppressWarnings(p5)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_suppressWarnings, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L62() else D16()
  // L62()
  goto L62_;

D12_:;
  // deopt 39 [i9, names10, i12]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_names10_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(39, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 43 [i11, r19]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 47 [i17, r21, l4, NA_LGL, i20]
  SEXP Rsh_Fir_array_deopt_stack15[5];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_const(CCP, 25);
  Rsh_Fir_array_deopt_stack15[4] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(47, 5, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 58 [i7, r35]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L51_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L6(i2, dx)
  // L6(i2, dx)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

L52_:;
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r18 = dyn __(names10, i13)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_names10_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L6(i9, r18)
  // L6(i9, r18)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L6_;

L53_:;
  // goto L5(i11, r19)
  // L5(i11, r19)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r19_;
  goto L5_;

L57_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L8(i7, dx2)
  // L8(i7, dx2)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L58_:;
  // i21 = force? i20
  Rsh_Fir_reg_i21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i20_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r24 = dyn ___(l4, NA_LGL, i21)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L8(i17, r24)
  // L8(i17, r24)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r24_;
  goto L8_;

L62_:;
  // st ans = r35
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L63() else D17()
  // L63()
  goto L63_;

D17_:;
  // deopt 61 [i7]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L63_:;
  // p6 = prom<V +>{
  //   R_version = ld `R.version`;
  //   R_version1 = force? R_version;
  //   checkMissing(R_version1);
  //   c6 = `is.object`(R_version1);
  //   if c6 then L1() else L2(R_version1);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("$", R_version1);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(R_version3):
  //   r36 = `$`(R_version3, <sym os>);
  //   goto L0(r36);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1074782916_6, 0, NULL, CCP, RHO);
  // r38 = dyn grepl("solaris", p6)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L64() else D18()
  // L64()
  goto L64_;

D18_:;
  // deopt 64 [i7, r38]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L64_:;
  // c7 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c7 then L65() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L65()
    goto L65_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L17(i7)
  // L17(i7)
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i7_;
  goto L17_;

L17_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard6 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L65_:;
  // strsplit = ldf strsplit
  Rsh_Fir_reg_strsplit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L66() else D19()
  // L66()
  goto L66_;

D19_:;
  // deopt 66 [i7]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L18_:;
  // c13 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args64);
  // if c13 then L89() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L89()
    goto L89_;
  } else {
  // L19()
    goto L19_;
  }

L66_:;
  // p7 = prom<V +>{
  //   ans = ld ans;
  //   ans1 = force? ans;
  //   checkMissing(ans1);
  //   c8 = `is.object`(ans1);
  //   if c8 then L1() else L2(ans1);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", ans1);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(ans3):
  //   __2 = ldf `[` in base;
  //   r39 = dyn __2(ans3, 1.0);
  //   goto L0(r39);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1074782916_7, 0, NULL, CCP, RHO);
  // r41 = dyn strsplit[, , fixed](p7, " ", TRUE)
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args71[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strsplit, 3, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L67() else D20()
  // L67()
  goto L67_;

L85_:;
  // ans4 = ld ans
  Rsh_Fir_reg_ans4_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L87() else D25()
  // L87()
  goto L87_;

L86_:;
  // r54 = dyn base6(<sym ans>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L18(i47, r54)
  // L18(i47, r54)
  Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i47_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L18_;

D20_:;
  // deopt 71 [i7, r41]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 109 [i47, ans4]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i47_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_ans4_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L21(i50, "")
  // L21(i50, "")
  Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i50_;
  Rsh_Fir_reg_dx16_ = Rsh_const(CCP, 45);
  goto L21_;

L21_:;
  // l5 = ld res
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c15 = `is.object`(l5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args73);
  // if c15 then L95() else L96(i57, dx16, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L95()
    goto L95_;
  } else {
  // L96(i57, dx16, l5)
    Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i57_;
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L96_;
  }

L67_:;
  // c9 = `is.object`(r41)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args74);
  // if c9 then L68() else L69(i7, r41)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L68()
    goto L68_;
  } else {
  // L69(i7, r41)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r41_;
    goto L69_;
  }

L87_:;
  // ans5 = force? ans4
  Rsh_Fir_reg_ans5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans4_);
  // checkMissing(ans5)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_ans5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r56 = dyn length1(ans5)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_ans5_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L88() else D26()
  // L88()
  goto L88_;

L89_:;
  // ans6 = ld ans
  Rsh_Fir_reg_ans6_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L90() else D27()
  // L90()
  goto L90_;

D26_:;
  // deopt 112 [i47, r56]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i47_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 113 [i50, ans6]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i50_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_ans6_;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L11_:;
  // st tmp = dx11
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard4 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L22_:;
  // st res = dx22
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx22_, RHO);
  (void)(Rsh_Fir_reg_dx22_);
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L99() else D29()
  // L99()
  goto L99_;

L68_:;
  // dr10 = tryDispatchBuiltin.1("[[", r41)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc5 then L70() else L69(i7, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L70()
    goto L70_;
  } else {
  // L69(i7, dr10)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_dr10_;
    goto L69_;
  }

L69_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r44 = dyn __3(r43, 1.0)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L11(i29, r44)
  // L11(i29, r44)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r44_;
  goto L11_;

L88_:;
  // goto L18(i47, r56)
  // L18(i47, r56)
  Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i47_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L18_;

L90_:;
  // ans7 = force? ans6
  Rsh_Fir_reg_ans7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans6_);
  // checkMissing(ans7)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_ans7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(ans7)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_ans7_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args82);
  // if c14 then L91() else L92(i50, ans7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L91()
    goto L91_;
  } else {
  // L92(i50, ans7)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i50_;
    Rsh_Fir_reg_ans9_ = Rsh_Fir_reg_ans7_;
    goto L92_;
  }

L95_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l5, dx16)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args83);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc8 then L97() else L96(i57, dx16, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L97()
    goto L97_;
  } else {
  // L96(i57, dx16, dr16)
    Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i57_;
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr16_;
    goto L96_;
  }

L96_:;
  // i62 = ld i
  Rsh_Fir_reg_i62_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L98() else D28()
  // L98()
  goto L98_;

D28_:;
  // deopt 121 [i59, dx18, l7, dx16, i62]
  SEXP Rsh_Fir_array_deopt_stack24[5];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i59_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_i62_;
  Rsh_Fir_deopt(121, 5, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 126 [i61]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L12_:;
  // c12 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args85);
  // if c12 then L82() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L82()
    goto L82_;
  } else {
  // L15()
    goto L15_;
  }

L20_:;
  // goto L21(i56, dx15)
  // L21(i56, dx15)
  Rsh_Fir_reg_i57_ = Rsh_Fir_reg_i56_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L21_;

L70_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L11(i7, dx10)
  // L11(i7, dx10)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L11_;

L71_:;
  // tmp = ld tmp
  Rsh_Fir_reg_tmp = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L73() else D21()
  // L73()
  goto L73_;

L72_:;
  // r45 = dyn base4(<lang `[`(tmp, `:`(1.0, 3.0))>, <lang c("no", i, "in")>)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L12(i31, r45)
  // L12(i31, r45)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L12_;

L91_:;
  // dr14 = tryDispatchBuiltin.1("[", ans7)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_ans7_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args88);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc7 then L93() else L92(i50, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L93()
    goto L93_;
  } else {
  // L92(i50, dr14)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i50_;
    Rsh_Fir_reg_ans9_ = Rsh_Fir_reg_dr14_;
    goto L92_;
  }

L92_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r57 = dyn __5(ans9, 1.0)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_ans9_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L20(i54, r57)
  // L20(i54, r57)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r57_;
  goto L20_;

L97_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L22(i57, dx20)
  // L22(i57, dx20)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i57_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx20_;
  goto L22_;

L98_:;
  // i63 = force? i62
  Rsh_Fir_reg_i63_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i62_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r58 = dyn ___1(l7, dx16, i63)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_i63_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L22(i59, r58)
  // L22(i59, r58)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i59_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r58_;
  goto L22_;

L99_:;
  // p8 = prom<V +>{
  //   res2 = ld res;
  //   res3 = force? res2;
  //   checkMissing(res3);
  //   c16 = `is.object`(res3);
  //   if c16 then L1() else L2(res3);
  // L0(dx24):
  //   return dx24;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", res3);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(res5):
  //   i64 = ld i;
  //   i65 = force? i64;
  //   __6 = ldf `[` in base;
  //   r59 = dyn __6(res5, i65);
  //   goto L0(r59);
  // L3():
  //   dx23 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx23);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1074782916_8, 0, NULL, CCP, RHO);
  // r61 = dyn file_exists(p8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L100() else D30()
  // L100()
  goto L100_;

D21_:;
  // deopt 78 [i31, tmp]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_tmp;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 128 [i61, r61]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(128, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L16(i34, NULL)
  // L16(i34, NULL)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_r52_ = Rsh_const(CCP, 11);
  goto L16_;

L16_:;
  // goto L17(i46)
  // L17(i46)
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i46_;
  goto L17_;

L73_:;
  // tmp1 = force? tmp
  Rsh_Fir_reg_tmp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp);
  // checkMissing(tmp1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_tmp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(tmp1)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_tmp1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args101);
  // if c10 then L74() else L75(i31, tmp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L74()
    goto L74_;
  } else {
  // L75(i31, tmp1)
    Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_tmp3_ = Rsh_Fir_reg_tmp1_;
    goto L75_;
  }

L82_:;
  // st ans = ""
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_const(CCP, 45), RHO);
  (void)(Rsh_const(CCP, 45));
  // goto L16(i34, "")
  // L16(i34, "")
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_r52_ = Rsh_const(CCP, 45);
  goto L16_;

L93_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L20(i50, dx14)
  // L20(i50, dx14)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i50_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L20_;

L100_:;
  // r62 = `!`(r61)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args103);
  // c17 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args104);
  // if c17 then L101() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L101()
    goto L101_;
  } else {
  // L23()
    goto L23_;
  }

L13_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard5 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L23_:;
  // goto L25(i61)
  // L25(i61)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i61_;
  goto L25_;

L25_:;
  // goto L4(i74)
  // L4(i74)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i74_;
  goto L4_;

L74_:;
  // dr12 = tryDispatchBuiltin.1("[", tmp1)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_tmp1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc6 then L76() else L75(i31, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L76()
    goto L76_;
  } else {
  // L75(i31, dr12)
    Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_tmp3_ = Rsh_Fir_reg_dr12_;
    goto L75_;
  }

L75_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r47 = dyn __4(tmp3, <int 1, 2, 3>)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_tmp3_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L13(i36, r47)
  // L13(i36, r47)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r47_;
  goto L13_;

L101_:;
  // l8 = ld res
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c18 = `is.object`(l8)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args109);
  // if c18 then L102() else L103(i61, "", l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L102()
    goto L102_;
  } else {
  // L103(i61, "", l8)
    Rsh_Fir_reg_i69_ = Rsh_Fir_reg_i61_;
    Rsh_Fir_reg_r64_ = Rsh_const(CCP, 45);
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L103_;
  }

L14_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r51 = dyn identical(dx13, r49, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args110[9];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args110[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args110[3] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args110[4] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args110[5] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args110[6] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args110[7] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args110[8] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names32[9];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_array_arg_names32[3] = R_MissingArg;
  Rsh_Fir_array_arg_names32[4] = R_MissingArg;
  Rsh_Fir_array_arg_names32[5] = R_MissingArg;
  Rsh_Fir_array_arg_names32[6] = R_MissingArg;
  Rsh_Fir_array_arg_names32[7] = R_MissingArg;
  Rsh_Fir_array_arg_names32[8] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L81() else D24()
  // L81()
  goto L81_;

L24_:;
  // st res = dx26
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx26_, RHO);
  (void)(Rsh_Fir_reg_dx26_);
  // goto L25(i71)
  // L25(i71)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i71_;
  goto L25_;

L76_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L13(i31, dx12)
  // L13(i31, dx12)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L13_;

L77_:;
  // i42 = ld i
  Rsh_Fir_reg_i42_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L79() else D22()
  // L79()
  goto L79_;

L78_:;
  // r48 = dyn base5("no", <sym i>, "in")
  SEXP Rsh_Fir_array_args112[3];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args112[2] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L14(i38, r48)
  // L14(i38, r48)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L14_;

L102_:;
  // dr20 = tryDispatchBuiltin.0("[<-", l8, "")
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args113[2] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args113);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc10 then L104() else L103(i61, "", dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L104()
    goto L104_;
  } else {
  // L103(i61, "", dr20)
    Rsh_Fir_reg_i69_ = Rsh_Fir_reg_i61_;
    Rsh_Fir_reg_r64_ = Rsh_const(CCP, 45);
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr20_;
    goto L103_;
  }

L103_:;
  // i72 = ld i
  Rsh_Fir_reg_i72_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L105() else D31()
  // L105()
  goto L105_;

D22_:;
  // deopt 86 [i38, i42]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_i42_;
  Rsh_Fir_deopt(86, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 99 [i41, r51]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(99, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 133 [i69, r64, l10, "", i72]
  SEXP Rsh_Fir_array_deopt_stack30[5];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i69_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_const(CCP, 45);
  Rsh_Fir_array_deopt_stack30[4] = Rsh_Fir_reg_i72_;
  Rsh_Fir_deopt(133, 5, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L79_:;
  // i43 = force? i42
  Rsh_Fir_reg_i43_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i42_);
  // checkMissing(i43)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_i43_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r50 = dyn c11("no", i43, "in")
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_args116[2] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 3, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L80() else D23()
  // L80()
  goto L80_;

L81_:;
  // goto L12(i41, r51)
  // L12(i41, r51)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r51_;
  goto L12_;

L104_:;
  // dx25 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // goto L24(i61, "", dx25)
  // L24(i61, "", dx25)
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_r66_ = Rsh_const(CCP, 45);
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L24_;

L105_:;
  // i73 = force? i72
  Rsh_Fir_reg_i73_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i72_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r67 = dyn ___2(l10, "", i73)
  SEXP Rsh_Fir_array_args118[3];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args118[2] = Rsh_Fir_reg_i73_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L24(i69, r64, r67)
  // L24(i69, r64, r67)
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i69_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r67_;
  goto L24_;

D23_:;
  // deopt 90 [i38, r50]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L14(i38, r50)
  // L14(i38, r50)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L14_;
}
SEXP Rsh_Fir_user_promise_inner1074782916_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1074782916/0: expected 0, got %d", NCAPTURES);

  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // names1 = ld names
  Rsh_Fir_reg_names1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // names2 = force? names1
  Rsh_Fir_reg_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names1_);
  // checkMissing(names2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn length(names2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(<sym names>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1074782916_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_system;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r33_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1074782916/0: expected 0, got %d", NCAPTURES);

  // system = ldf system
  Rsh_Fir_reg_system = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // p4 = prom<V +>{
  //   paste = ldf paste;
  //   p1 = prom<V +>{
  //     which2 = ld which;
  //     which3 = force? which2;
  //     checkMissing(which3);
  //     return which3;
  //   };
  //   p3 = prom<V +>{
  //     shQuote = ldf shQuote;
  //     p2 = prom<V +>{
  //       names11 = ld names;
  //       names12 = force? names11;
  //       checkMissing(names12);
  //       c5 = `is.object`(names12);
  //       if c5 then L1() else L2(names12);
  //     L0(dx5):
  //       return dx5;
  //     L1():
  //       dr4 = tryDispatchBuiltin.1("[", names12);
  //       dc2 = getTryDispatchBuiltinDispatched(dr4);
  //       if dc2 then L3() else L2(dr4);
  //     L2(names14):
  //       i24 = ld i;
  //       i25 = force? i24;
  //       __1 = ldf `[` in base;
  //       r27 = dyn __1(names14, i25);
  //       goto L0(r27);
  //     L3():
  //       dx4 = getTryDispatchBuiltinValue(dr4);
  //       goto L0(dx4);
  //     };
  //     r29 = dyn shQuote(p2);
  //     return r29;
  //   };
  //   r31 = dyn paste(p1, p3);
  //   return r31;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1074782916_2, 0, NULL, CCP, RHO);
  // r33 = dyn system[, intern, `ignore.stderr`](p4, TRUE, TRUE)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // return r33
  return Rsh_Fir_reg_r33_;
}
SEXP Rsh_Fir_user_promise_inner1074782916_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r31_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1074782916/0: expected 0, got %d", NCAPTURES);

  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // p1 = prom<V +>{
  //   which2 = ld which;
  //   which3 = force? which2;
  //   checkMissing(which3);
  //   return which3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1074782916_3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   shQuote = ldf shQuote;
  //   p2 = prom<V +>{
  //     names11 = ld names;
  //     names12 = force? names11;
  //     checkMissing(names12);
  //     c5 = `is.object`(names12);
  //     if c5 then L1() else L2(names12);
  //   L0(dx5):
  //     return dx5;
  //   L1():
  //     dr4 = tryDispatchBuiltin.1("[", names12);
  //     dc2 = getTryDispatchBuiltinDispatched(dr4);
  //     if dc2 then L3() else L2(dr4);
  //   L2(names14):
  //     i24 = ld i;
  //     i25 = force? i24;
  //     __1 = ldf `[` in base;
  //     r27 = dyn __1(names14, i25);
  //     goto L0(r27);
  //   L3():
  //     dx4 = getTryDispatchBuiltinValue(dr4);
  //     goto L0(dx4);
  //   };
  //   r29 = dyn shQuote(p2);
  //   return r29;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1074782916_4, 0, NULL, CCP, RHO);
  // r31 = dyn paste(p1, p3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // return r31
  return Rsh_Fir_reg_r31_;
}
SEXP Rsh_Fir_user_promise_inner1074782916_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_which2_;
  SEXP Rsh_Fir_reg_which3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1074782916/0: expected 0, got %d", NCAPTURES);

  // which2 = ld which
  Rsh_Fir_reg_which2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // which3 = force? which2
  Rsh_Fir_reg_which3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which2_);
  // checkMissing(which3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_which3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return which3
  return Rsh_Fir_reg_which3_;
}
SEXP Rsh_Fir_user_promise_inner1074782916_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_shQuote;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1074782916/0: expected 0, got %d", NCAPTURES);

  // shQuote = ldf shQuote
  Rsh_Fir_reg_shQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // p2 = prom<V +>{
  //   names11 = ld names;
  //   names12 = force? names11;
  //   checkMissing(names12);
  //   c5 = `is.object`(names12);
  //   if c5 then L1() else L2(names12);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", names12);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(names14):
  //   i24 = ld i;
  //   i25 = force? i24;
  //   __1 = ldf `[` in base;
  //   r27 = dyn __1(names14, i25);
  //   goto L0(r27);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1074782916_5, 0, NULL, CCP, RHO);
  // r29 = dyn shQuote(p2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_shQuote, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_inner1074782916_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_names11_;
  SEXP Rsh_Fir_reg_names12_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_names14_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_i24_;
  SEXP Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1074782916/0: expected 0, got %d", NCAPTURES);

  // names11 = ld names
  Rsh_Fir_reg_names11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // names12 = force? names11
  Rsh_Fir_reg_names12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names11_);
  // checkMissing(names12)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_names12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(names12)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_names12_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args42);
  // if c5 then L1() else L2(names12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(names12)
    Rsh_Fir_reg_names14_ = Rsh_Fir_reg_names12_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", names12)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_names12_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_names14_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // i24 = ld i
  Rsh_Fir_reg_i24_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i25 = force? i24
  Rsh_Fir_reg_i25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i24_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r27 = dyn __1(names14, i25)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_names14_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_i25_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r27_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1074782916_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R_version;
  SEXP Rsh_Fir_reg_R_version1_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_R_version3_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1074782916/0: expected 0, got %d", NCAPTURES);

  // R_version = ld `R.version`
  Rsh_Fir_reg_R_version = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // R_version1 = force? R_version
  Rsh_Fir_reg_R_version1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R_version);
  // checkMissing(R_version1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_R_version1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(R_version1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_R_version1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args56);
  // if c6 then L1() else L2(R_version1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(R_version1)
    Rsh_Fir_reg_R_version3_ = Rsh_Fir_reg_R_version1_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("$", R_version1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_R_version1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_R_version3_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // r36 = `$`(R_version3, <sym os>)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_R_version3_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args59);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r36_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1074782916_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ans;
  SEXP Rsh_Fir_reg_ans1_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_ans3_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r39_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1074782916/0: expected 0, got %d", NCAPTURES);

  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(ans1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_ans1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args66);
  // if c8 then L1() else L2(ans1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(ans1)
    Rsh_Fir_reg_ans3_ = Rsh_Fir_reg_ans1_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", ans1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_ans1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_ans3_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r39 = dyn __2(ans3, 1.0)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_ans3_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r39_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1074782916_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_res2_;
  SEXP Rsh_Fir_reg_res3_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_res5_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_i64_;
  SEXP Rsh_Fir_reg_i65_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r59_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1074782916/0: expected 0, got %d", NCAPTURES);

  // res2 = ld res
  Rsh_Fir_reg_res2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // res3 = force? res2
  Rsh_Fir_reg_res3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res2_);
  // checkMissing(res3)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_res3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(res3)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args94);
  // if c16 then L1() else L2(res3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L1()
    goto L1_;
  } else {
  // L2(res3)
    Rsh_Fir_reg_res5_ = Rsh_Fir_reg_res3_;
    goto L2_;
  }

L0_:;
  // return dx24
  return Rsh_Fir_reg_dx24_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", res3)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_res3_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args95);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_res5_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // i64 = ld i
  Rsh_Fir_reg_i64_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // i65 = force? i64
  Rsh_Fir_reg_i65_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i64_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r59 = dyn __6(res5, i65)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_res5_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_i65_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r59)
  // L0(r59)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r59_;
  goto L0_;

L3_:;
  // dx23 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L0(dx23)
  // L0(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
