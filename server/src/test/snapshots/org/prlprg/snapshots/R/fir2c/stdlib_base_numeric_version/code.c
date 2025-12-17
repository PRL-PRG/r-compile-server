#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1330250198_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1330250198_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1330250198_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1330250198_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1330250198_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1330250198_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_package_version;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_getRversion;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_x23_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_x30_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_x34_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_x36_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_x37_;
  SEXP Rsh_Fir_reg_x38_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_____2_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_x39_;
  SEXP Rsh_Fir_reg_x40_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_x41_;
  SEXP Rsh_Fir_reg_x42_;
  SEXP Rsh_Fir_reg_package_version1_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_l14_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_l16_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_is_na__;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r89_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1330250198
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1330250198_, RHO, CCP);
  // st numeric_version = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // package_version = ldf package_version
  Rsh_Fir_reg_package_version = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   c = ldf c in base;
  //   r3 = dyn c("1.2-4", "1.2-3", "2.1");
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base("1.2-4", "1.2-3", "2.1");
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn package_version(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_package_version, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

D1_:;
  // deopt 6 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L18_:;
  // st x = r5
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 8 [x]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // `<`(x1, "1.4-2.3")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  (void)(Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args5));
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L0_:;
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L20_:;
  // sym2 = ldf min
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf min in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L21_:;
  // r7 = dyn base1(<lang min(x)>, <lang max(x)>)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D8_:;
  // deopt 28 [x6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L1_:;
  // sym3 = ldf max
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf max in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L22_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

L23_:;
  // r9 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r9)
  // L1(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L1_;

L31_:;
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x7)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args12);
  // if c2 then L32() else L33(x7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L32()
    goto L32_;
  } else {
  // L33(x7)
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_x7_;
    goto L33_;
  }

D3_:;
  // deopt 16 [x2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L2_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r15 = dyn c1(r10, r13)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

L3_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

L24_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r11 = dyn min(x3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L26_:;
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L27_:;
  // r12 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L2_;

L32_:;
  // dr = tryDispatchBuiltin.1("[", x7)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc then L34() else L33(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L34()
    goto L34_;
  } else {
  // L33(dr)
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_dr;
    goto L33_;
  }

L33_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r16 = dyn __(x9, 2.0, 2.0)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D4_:;
  // deopt 19 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 22 [x4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 27 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 34 [x10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L1(r11)
  // L1(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L1_;

L28_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r14 = dyn max(x5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L30_:;
  // goto L0()
  // L0()
  goto L0_;

L34_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L3()
  // L3()
  goto L3_;

L35_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(x11)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args24);
  // if c3 then L37() else L38(x11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L37()
    goto L37_;
  } else {
  // L38(x11)
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_x11_;
    goto L38_;
  }

D6_:;
  // deopt 25 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L2(r14)
  // L2(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L2_;

L36_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

L37_:;
  // dr2 = tryDispatchBuiltin.1("$", x11)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc1 then L39() else L38(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L39()
    goto L39_;
  } else {
  // L38(dr2)
    Rsh_Fir_reg_x13_ = Rsh_Fir_reg_dr2_;
    goto L38_;
  }

L38_:;
  // r17 = `$`(x13, <sym major>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args27);
  // goto L36()
  // L36()
  goto L36_;

D10_:;
  // deopt 37 [x14]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L36()
  // L36()
  goto L36_;

L40_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(x15)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args30);
  // if c4 then L42() else L43(x15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L42()
    goto L42_;
  } else {
  // L43(x15)
    Rsh_Fir_reg_x17_ = Rsh_Fir_reg_x15_;
    goto L43_;
  }

L41_:;
  // getRversion = ldf getRversion
  Rsh_Fir_reg_getRversion = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L45() else D11()
  // L45()
  goto L45_;

L42_:;
  // dr4 = tryDispatchBuiltin.1("$", x15)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_x15_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc2 then L44() else L43(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L44()
    goto L44_;
  } else {
  // L43(dr4)
    Rsh_Fir_reg_x17_ = Rsh_Fir_reg_dr4_;
    goto L43_;
  }

L43_:;
  // r18 = `$`(x17, <sym minor>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args33);
  // goto L41()
  // L41()
  goto L41_;

D11_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L41()
  // L41()
  goto L41_;

L45_:;
  // r19 = dyn getRversion()
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getRversion, 0, NULL, NULL, CCP, RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

D12_:;
  // deopt 42 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L46_:;
  // r20 = `<=`(r19, "2.5.0")
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args35);
  // c5 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c5 then L47() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L47()
    goto L47_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L51() else D15()
  // L51()
  goto L51_;

L47_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L48() else D13()
  // L48()
  goto L48_;

D13_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 56 [x18]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L48_:;
  // p1 = prom<V +>{
  //   sym4 = ldf `as.character`;
  //   base4 = ldf `as.character` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   getRversion1 = ldf getRversion;
  //   r23 = dyn getRversion1();
  //   as_character = ldf `as.character` in base;
  //   r24 = dyn as_character(r23);
  //   goto L0(r24);
  // L2():
  //   r21 = dyn base4(<lang getRversion()>);
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r26 = dyn cat[, , , , sep]("Your version of R, ", p1, ", is outdated.\n", "Now trying to work around that ...\n", "")
  SEXP Rsh_Fir_array_args40[5];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args40[4] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[5];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 5, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

L51_:;
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(x19)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args42);
  // if c6 then L52() else L53(x19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L52()
    goto L52_;
  } else {
  // L53(x19)
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_x19_;
    goto L53_;
  }

D14_:;
  // deopt 53 [r26]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L6_:;
  // x22 = ld x
  Rsh_Fir_reg_x22_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L55() else D16()
  // L55()
  goto L55_;

L49_:;
  // goto L5()
  // L5()
  goto L5_;

L52_:;
  // dr6 = tryDispatchBuiltin.1("[[", x19)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc3 then L54() else L53(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L54()
    goto L54_;
  } else {
  // L53(dr6)
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_dr6_;
    goto L53_;
  }

L53_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r28 = dyn __1(x21, 1.0)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

D16_:;
  // deopt 61 [x22]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L54_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L6()
  // L6()
  goto L6_;

L55_:;
  // x23 = force? x22
  Rsh_Fir_reg_x23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x22_);
  // checkMissing(x23)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(x23)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args48);
  // if c7 then L56() else L57(x23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L56()
    goto L56_;
  } else {
  // L57(x23)
    Rsh_Fir_reg_x25_ = Rsh_Fir_reg_x23_;
    goto L57_;
  }

L7_:;
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L62() else D18()
  // L62()
  goto L62_;

L56_:;
  // dr8 = tryDispatchBuiltin.1("[[", x23)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_x23_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc4 then L58() else L57(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L58()
    goto L58_;
  } else {
  // L57(dr8)
    Rsh_Fir_reg_x25_ = Rsh_Fir_reg_dr8_;
    goto L57_;
  }

L57_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard5 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

D18_:;
  // deopt 70 [x29]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L8_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r32 = dyn __2(x28, r30)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L7()
  // L7()
  goto L7_;

L58_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L7()
  // L7()
  goto L7_;

L59_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r31 = dyn c8(1.0, 3.0)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L61() else D17()
  // L61()
  goto L61_;

L60_:;
  // r29 = dyn base5(1.0, 3.0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L8(x25, r29)
  // L8(x25, r29)
  Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x25_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L8_;

L62_:;
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(x30)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args57);
  // if c9 then L63() else L64(x30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L63()
    goto L63_;
  } else {
  // L64(x30)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_x30_;
    goto L64_;
  }

D17_:;
  // deopt 68 [x25, r31]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L9_:;
  // x33 = ld x
  Rsh_Fir_reg_x33_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L66() else D19()
  // L66()
  goto L66_;

L61_:;
  // goto L8(x25, r31)
  // L8(x25, r31)
  Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x25_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L8_;

L63_:;
  // dr10 = tryDispatchBuiltin.1("[", x30)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc5 then L65() else L64(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L65()
    goto L65_;
  } else {
  // L64(dr10)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_dr10_;
    goto L64_;
  }

L64_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r33 = dyn __3(x32, 1.0, 3.0)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L9()
  // L9()
  goto L9_;

D19_:;
  // deopt 76 [x33]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x33_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L65_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L9()
  // L9()
  goto L9_;

L66_:;
  // x34 = force? x33
  Rsh_Fir_reg_x34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x33_);
  // checkMissing(x34)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(x34)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args63);
  // if c10 then L67() else L68(x34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L67()
    goto L67_;
  } else {
  // L68(x34)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_x34_;
    goto L68_;
  }

L10_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c11 = `is.object`(l)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args64);
  // if c11 then L70() else L71(0.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L70()
    goto L70_;
  } else {
  // L71(0.0, l)
    Rsh_Fir_reg_r36_ = Rsh_const(CCP, 32);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L71_;
  }

L67_:;
  // dr12 = tryDispatchBuiltin.1("[[", x34)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc6 then L69() else L68(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L69()
    goto L69_;
  } else {
  // L68(dr12)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_dr12_;
    goto L68_;
  }

L68_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r34 = dyn __4(x36, 1.0, 3.0)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10()
  // L10()
  goto L10_;

L11_:;
  // st x = dx15
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // l3 = ld x
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c12 = `is.object`(l3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args68);
  // if c12 then L73() else L74(0.0, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L73()
    goto L73_;
  } else {
  // L74(0.0, l3)
    Rsh_Fir_reg_r41_ = Rsh_const(CCP, 32);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L74_;
  }

L69_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L10()
  // L10()
  goto L10_;

L70_:;
  // dr14 = tryDispatchBuiltin.0("[[<-", l, 0.0)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args70);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc7 then L72() else L71(0.0, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L72()
    goto L72_;
  } else {
  // L71(0.0, dr14)
    Rsh_Fir_reg_r36_ = Rsh_const(CCP, 32);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr14_;
    goto L71_;
  }

L71_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r39 = dyn ____(l2, 0.0, 2.0, 3.0)
  SEXP Rsh_Fir_array_args72[4];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args72[3] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 4, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L11(r39)
  // L11(r39)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r39_;
  goto L11_;

L12_:;
  // st x = dx17
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L79() else D21()
  // L79()
  goto L79_;

L72_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L11(dx14)
  // L11(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L11_;

L73_:;
  // dr16 = tryDispatchBuiltin.0("[[<-", l3, 0.0)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args74[2] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args74);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc8 then L75() else L74(0.0, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L75()
    goto L75_;
  } else {
  // L74(0.0, dr16)
    Rsh_Fir_reg_r41_ = Rsh_const(CCP, 32);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr16_;
    goto L74_;
  }

L74_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard6 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

D21_:;
  // deopt 101 [x37]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L13_:;
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r53 = dyn ____1(l8, r50, r51)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L12(r53)
  // L12(r53)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r53_;
  goto L12_;

L75_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L12(dx16)
  // L12(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L12_;

L76_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r52 = dyn c13(2.0, 3.0)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L78() else D20()
  // L78()
  goto L78_;

L77_:;
  // r48 = dyn base6(2.0, 3.0)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L13(r41, l5, 0.0, r48)
  // L13(r41, l5, 0.0, r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_r50_ = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r48_;
  goto L13_;

L79_:;
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // l9 = ld x
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c14 = `is.object`(l9)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args82);
  // if c14 then L80() else L81("2.2.3", l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L80()
    goto L80_;
  } else {
  // L81("2.2.3", l9)
    Rsh_Fir_reg_r55_ = Rsh_const(CCP, 35);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L81_;
  }

D20_:;
  // deopt 98 [r41, l5, 0.0, r52]
  SEXP Rsh_Fir_array_deopt_stack18[4];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(98, 4, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L14_:;
  // st x = dx19
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // x39 = ld x
  Rsh_Fir_reg_x39_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L83() else D22()
  // L83()
  goto L83_;

L78_:;
  // goto L13(r41, l5, 0.0, r52)
  // L13(r41, l5, 0.0, r52)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_r50_ = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L13_;

L80_:;
  // dr18 = tryDispatchBuiltin.0("[[<-", l9, "2.2.3")
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args83[2] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args83);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc9 then L82() else L81("2.2.3", dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L82()
    goto L82_;
  } else {
  // L81("2.2.3", dr18)
    Rsh_Fir_reg_r55_ = Rsh_const(CCP, 35);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr18_;
    goto L81_;
  }

L81_:;
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r58 = dyn ____2(l11, "2.2.3", 3.0)
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args85[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L14(r58)
  // L14(r58)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r58_;
  goto L14_;

D22_:;
  // deopt 110 [x39]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x39_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L82_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L14(dx18)
  // L14(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L14_;

L83_:;
  // x40 = force? x39
  Rsh_Fir_reg_x40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x39_);
  // checkMissing(x40)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_x40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard7 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L15_:;
  // st x = r60
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // l12 = ld x
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // is_na = ldf `is.na`
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L90() else D27()
  // L90()
  goto L90_;

L84_:;
  // x41 = ld x
  Rsh_Fir_reg_x41_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L86() else D23()
  // L86()
  goto L86_;

L85_:;
  // r59 = dyn base7(<sym x>, <lang package_version("0.0")>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L15(r59)
  // L15(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L15_;

D23_:;
  // deopt 114 [x41]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_x41_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 126 [TRUE, l12, TRUE]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_const(CCP, 38);
  Rsh_Fir_deopt(126, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L86_:;
  // x42 = force? x41
  Rsh_Fir_reg_x42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x41_);
  // checkMissing(x42)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // package_version1 = ldf package_version
  Rsh_Fir_reg_package_version1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L87() else D24()
  // L87()
  goto L87_;

L90_:;
  // r63 = dyn is_na(TRUE, NULL)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L91() else D28()
  // L91()
  goto L91_;

D24_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 128 [TRUE, l12, TRUE, r63]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_const(CCP, 38);
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(128, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L87_:;
  // r61 = dyn package_version1("0.0")
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_package_version1_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L88() else D25()
  // L88()
  goto L88_;

L91_:;
  // c16 = `is.object`(r63)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args93);
  // if c16 then L92() else L93(TRUE, l12, r63)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L92()
    goto L92_;
  } else {
  // L93(TRUE, l12, r63)
    Rsh_Fir_reg_r66_ = Rsh_const(CCP, 38);
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r63_;
    goto L93_;
  }

D25_:;
  // deopt 119 [r61]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L16_:;
  // is_na__ = ldf `is.na<-`
  Rsh_Fir_reg_is_na__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L95() else D29()
  // L95()
  goto L95_;

L88_:;
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r62 = dyn c15(x42, r61)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x42_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L89() else D26()
  // L89()
  goto L89_;

L92_:;
  // dr20 = tryDispatchBuiltin.0("[<-", r63, TRUE)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args95[2] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args95);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc10 then L94() else L93(TRUE, l12, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L94()
    goto L94_;
  } else {
  // L93(TRUE, l12, dr20)
    Rsh_Fir_reg_r66_ = Rsh_const(CCP, 38);
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    Rsh_Fir_reg_r67_ = Rsh_Fir_reg_dr20_;
    goto L93_;
  }

L93_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r70 = dyn ___(r67, TRUE, 4.0)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args97[2] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L16(r66, l14, r70)
  // L16(r66, l14, r70)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l14_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r70_;
  goto L16_;

D26_:;
  // deopt 121 [r62]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 133 [r69, l16, dx21]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_deopt(133, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L15(r62)
  // L15(r62)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r62_;
  goto L15_;

L94_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L16(TRUE, l12, dx20)
  // L16(TRUE, l12, dx20)
  Rsh_Fir_reg_r69_ = Rsh_const(CCP, 38);
  Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L16_;

L95_:;
  // r71 = dyn is_na__(l16, NULL, dx21)
  SEXP Rsh_Fir_array_args99[3];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args99[2] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na__, 3, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L96() else D30()
  // L96()
  goto L96_;

D30_:;
  // deopt 135 [r69, r71]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(135, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L96_:;
  // st x = r71
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r71_, RHO);
  (void)(Rsh_Fir_reg_r71_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L97() else D31()
  // L97()
  goto L97_;

D31_:;
  // deopt 138 []
  Rsh_Fir_deopt(138, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // p2 = prom<V +>{
  //   sym8 = ldf identical;
  //   base8 = ldf identical in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L4() else L5();
  // L0(r73):
  //   return r73;
  // L4():
  //   sym9 = ldf `is.na`;
  //   base9 = ldf `is.na` in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L6() else L7();
  // L5():
  //   r72 = dyn base8(<lang is.na(x)>, <lang c(rep(FALSE, 3.0), TRUE)>);
  //   goto L0(r72);
  // L1(r75):
  //   sym10 = ldf c;
  //   base10 = ldf c in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L8() else L9();
  // L6():
  //   x43 = ld x;
  //   x44 = force? x43;
  //   checkMissing(x44);
  //   is_na1 = ldf `is.na` in base;
  //   r76 = dyn is_na1(x44);
  //   goto L1(r76);
  // L7():
  //   r74 = dyn base9(<sym x>);
  //   goto L1(r74);
  // L2(r78):
  //   identical = ldf identical in base;
  //   r83 = dyn identical(r75, r78, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r83);
  // L8():
  //   sym11 = ldf rep;
  //   base11 = ldf rep in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L10() else L11();
  // L9():
  //   r77 = dyn base10(<lang rep(FALSE, 3.0)>, TRUE);
  //   goto L2(r77);
  // L3(r80):
  //   c17 = ldf c in base;
  //   r82 = dyn c17(r80, TRUE);
  //   goto L2(r82);
  // L10():
  //   rep = ldf rep in base;
  //   r81 = dyn rep(FALSE, 3.0);
  //   goto L3(r81);
  // L11():
  //   r79 = dyn base11(FALSE, 3.0);
  //   goto L3(r79);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym12 = ldf anyNA;
  //   base12 = ldf anyNA in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L1() else L2();
  // L0(r86):
  //   return r86;
  // L1():
  //   x45 = ld x;
  //   x46 = force? x45;
  //   checkMissing(x46);
  //   anyNA = ldf anyNA in base;
  //   r87 = dyn anyNA(x46);
  //   goto L0(r87);
  // L2():
  //   r85 = dyn base12(<sym x>);
  //   goto L0(r85);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r89 = dyn stopifnot(p2, p3)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L98() else D32()
  // L98()
  goto L98_;

D32_:;
  // deopt 141 [r89]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L98_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r89
  return Rsh_Fir_reg_r89_;
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
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
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
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn c("1.2-4", "1.2-3", "2.1")
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base("1.2-4", "1.2-3", "2.1")
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_getRversion1_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf `as.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base4 = ldf `as.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // getRversion1 = ldf getRversion
  Rsh_Fir_reg_getRversion1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // r23 = dyn getRversion1()
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getRversion1_, 0, NULL, NULL, CCP, RHO);
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r24 = dyn as_character(r23)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r24_;
  goto L0_;

L2_:;
  // r21 = dyn base4(<lang getRversion()>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_x43_;
  SEXP Rsh_Fir_reg_x44_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r83_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf identical
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base8 = ldf identical in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard8 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // return r73
  return Rsh_Fir_reg_r73_;

L4_:;
  // sym9 = ldf `is.na`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base9 = ldf `is.na` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard9 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L5_:;
  // r72 = dyn base8(<lang is.na(x)>, <lang c(rep(FALSE, 3.0), TRUE)>)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r72)
  // L0(r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r72_;
  goto L0_;

L1_:;
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard10 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L6_:;
  // x43 = ld x
  Rsh_Fir_reg_x43_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x44 = force? x43
  Rsh_Fir_reg_x44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x43_);
  // checkMissing(x44)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r76 = dyn is_na1(x44)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x44_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L1(r76)
  // L1(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L1_;

L7_:;
  // r74 = dyn base9(<sym x>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L1(r74)
  // L1(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L1_;

L2_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r83 = dyn identical(r75, r78, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args107[9];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_args107[2] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args107[3] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args107[4] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args107[5] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args107[6] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args107[7] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args107[8] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names33[9];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_array_arg_names33[4] = R_MissingArg;
  Rsh_Fir_array_arg_names33[5] = R_MissingArg;
  Rsh_Fir_array_arg_names33[6] = R_MissingArg;
  Rsh_Fir_array_arg_names33[7] = R_MissingArg;
  Rsh_Fir_array_arg_names33[8] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r83)
  // L0(r83)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r83_;
  goto L0_;

L8_:;
  // sym11 = ldf rep
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base11 = ldf rep in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args108);
  // if guard11 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L9_:;
  // r77 = dyn base10(<lang rep(FALSE, 3.0)>, TRUE)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L2(r77)
  // L2(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L2_;

L3_:;
  // c17 = ldf c in base
  Rsh_Fir_reg_c17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r82 = dyn c17(r80, TRUE)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c17_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L2(r82)
  // L2(r82)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r82_;
  goto L2_;

L10_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r81 = dyn rep(FALSE, 3.0)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L3(r81)
  // L3(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L3_;

L11_:;
  // r79 = dyn base11(FALSE, 3.0)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L3(r79)
  // L3(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_x45_;
  SEXP Rsh_Fir_reg_x46_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r87_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym12 = ldf anyNA
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base12 = ldf anyNA in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard12 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r86
  return Rsh_Fir_reg_r86_;

L1_:;
  // x45 = ld x
  Rsh_Fir_reg_x45_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x46 = force? x45
  Rsh_Fir_reg_x46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x45_);
  // checkMissing(x46)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_x46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r87 = dyn anyNA(x46)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_x46_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r87)
  // L0(r87)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r87_;
  goto L0_;

L2_:;
  // r85 = dyn base12(<sym x>)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r85)
  // L0(r85)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r85_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1330250198_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1330250198 dynamic dispatch ([x, strict])

  return Rsh_Fir_user_version_inner1330250198_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1330250198_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1330250198 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1330250198/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_strict;
  SEXP Rsh_Fir_reg_strict_isMissing;
  SEXP Rsh_Fir_reg_strict_orDefault;
  SEXP Rsh_Fir_reg_is_numeric_version;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg__make_numeric_version;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r11_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_strict = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // strict_isMissing = missing.0(strict)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_strict;
  Rsh_Fir_reg_strict_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args118);
  // if strict_isMissing then L0(TRUE) else L0(strict)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_strict_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_strict_orDefault = Rsh_const(CCP, 38);
    goto L0_;
  } else {
  // L0(strict)
    Rsh_Fir_reg_strict_orDefault = Rsh_Fir_reg_strict;
    goto L0_;
  }

L0_:;
  // st strict = strict_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_strict_orDefault, RHO);
  (void)(Rsh_Fir_reg_strict_orDefault);
  // is_numeric_version = ldf `is.numeric_version`
  Rsh_Fir_reg_is_numeric_version = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1330250198_, 0, NULL, CCP, RHO);
  // r1 = dyn is_numeric_version(p)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric_version, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L4_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args121);
  // if c then L5() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L5()
    goto L5_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // _make_numeric_version = ldf `.make_numeric_version`
  Rsh_Fir_reg__make_numeric_version = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

L5_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 4 [x3]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x4
  return Rsh_Fir_reg_x4_1;

L9_:;
  // p1 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1330250198_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   strict1 = ld strict;
  //   strict2 = force? strict1;
  //   checkMissing(strict2);
  //   return strict2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1330250198_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   _standard_regexps = ldf `.standard_regexps`;
  //   r6 = dyn _standard_regexps();
  //   c1 = `is.object`(r6);
  //   if c1 then L1() else L2(r6);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", r6);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(r8):
  //   r9 = `$`(r8, <sym valid_numeric_version>);
  //   goto L0(r9);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1330250198_3, 0, NULL, CCP, RHO);
  // r11 = dyn _make_numeric_version(p1, p2, p3)
  SEXP Rsh_Fir_array_args130[3];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args130[2] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__make_numeric_version, 3, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 14 [r11]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_1;
}
SEXP Rsh_Fir_user_promise_inner1330250198_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1330250198/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_user_promise_inner1330250198_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x5_1;
  SEXP Rsh_Fir_reg_x6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1330250198/0: expected 0, got %d", NCAPTURES);

  // x5 = ld x
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_x6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_1;
}
SEXP Rsh_Fir_user_promise_inner1330250198_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_strict1_;
  SEXP Rsh_Fir_reg_strict2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1330250198/0: expected 0, got %d", NCAPTURES);

  // strict1 = ld strict
  Rsh_Fir_reg_strict1_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // strict2 = force? strict1
  Rsh_Fir_reg_strict2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strict1_);
  // checkMissing(strict2)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_strict2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // return strict2
  return Rsh_Fir_reg_strict2_;
}
SEXP Rsh_Fir_user_promise_inner1330250198_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__standard_regexps;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r9_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1330250198/0: expected 0, got %d", NCAPTURES);

  // _standard_regexps = ldf `.standard_regexps`
  Rsh_Fir_reg__standard_regexps = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // r6 = dyn _standard_regexps()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__standard_regexps, 0, NULL, NULL, CCP, RHO);
  // c1 = `is.object`(r6)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args125);
  // if c1 then L1() else L2(r6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(r6)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", r6)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args126);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // r9 = `$`(r8, <sym valid_numeric_version>)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args128[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args128);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
