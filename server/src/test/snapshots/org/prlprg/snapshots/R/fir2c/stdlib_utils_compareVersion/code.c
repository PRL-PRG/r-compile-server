#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3950065357_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3950065357_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3950065357_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3950065357_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_compareVersion;  // compareVersion
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_compareVersion1_;  // compareVersion1
  SEXP Rsh_Fir_reg_r2_;  // r2

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3950065357
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3950065357_, RHO, CCP);
  // st compareVersion = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // compareVersion = ldf compareVersion
  Rsh_Fir_reg_compareVersion = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn compareVersion("1.0", "1.0-1")
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_compareVersion, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // compareVersion1 = ldf compareVersion
  Rsh_Fir_reg_compareVersion1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r2 = dyn compareVersion1("7.2-0", "7.1-12")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_compareVersion1_, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_function_inner3950065357_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3950065357 dynamic dispatch ([a, b])

  return Rsh_Fir_user_version_inner3950065357_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3950065357_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3950065357 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3950065357/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_b;  // b
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_a2_;  // a2
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_b1_;  // b1
  SEXP Rsh_Fir_reg_b2_;  // b2
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_strsplit;  // strsplit
  SEXP Rsh_Fir_reg_a3_;  // a3
  SEXP Rsh_Fir_reg_a4_;  // a4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_strsplit1_;  // strsplit1
  SEXP Rsh_Fir_reg_b3_;  // b3
  SEXP Rsh_Fir_reg_b4_;  // b4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_a5_;  // a5
  SEXP Rsh_Fir_reg_a6_;  // a6
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_b5_;  // b5
  SEXP Rsh_Fir_reg_b6_;  // b6
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_a7_;  // a7
  SEXP Rsh_Fir_reg_a8_;  // a8
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_a10_;  // a10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg_k6_;  // k6
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_b7_;  // b7
  SEXP Rsh_Fir_reg_b8_;  // b8
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_b10_;  // b10
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_k7_;  // k7
  SEXP Rsh_Fir_reg_k8_;  // k8
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_a11_;  // a11
  SEXP Rsh_Fir_reg_a12_;  // a12
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_a14_;  // a14
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_k9_;  // k9
  SEXP Rsh_Fir_reg_k10_;  // k10
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_b11_;  // b11
  SEXP Rsh_Fir_reg_b12_;  // b12
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_b14_;  // b14
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_k11_;  // k11
  SEXP Rsh_Fir_reg_k12_;  // k12
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_b15_;  // b15
  SEXP Rsh_Fir_reg_b16_;  // b16
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_a15_;  // a15
  SEXP Rsh_Fir_reg_a16_;  // a16
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c12_;  // c12

  // Bind parameters
  Rsh_Fir_reg_a = PARAMS[0];
  Rsh_Fir_reg_b = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st a = a
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_a, RHO);
  (void)(Rsh_Fir_reg_a);
  // st b = b
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_b, RHO);
  (void)(Rsh_Fir_reg_b);
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L30() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L3_:;
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L37() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L37()
    goto L37_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym2 = ldf `as.integer`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf `as.integer` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L6_:;
  // st a = r11
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L7_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r17 = dyn as_integer(dx1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L47() else D6()
  // L47()
  goto L47_;

L8_:;
  // st b = r19
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym4 = ldf seq_along
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf seq_along in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard4 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L9_:;
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r25 = dyn as_integer1(dx3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L55() else D9()
  // L55()
  goto L55_;

L10_:;
  // s = toForSeq(r27)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 10);
  // goto L11(i)
  // L11(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L11_;

L11_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // c4 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if c4 then L59() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L59()
    goto L59_;
  } else {
  // L22()
    goto L22_;
  }

L12_:;
  // r32 = `<=`(k4, r30)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_k4_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c5 then L65() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L65()
    goto L65_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1
  return Rsh_const(CCP, 11);

L14_:;
  // b7 = ld b
  Rsh_Fir_reg_b7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L71() else D16()
  // L71()
  goto L71_;

L15_:;
  // r35 = `>`(dx10, dx11)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c8 then L76() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L76()
    goto L76_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // a11 = ld a
  Rsh_Fir_reg_a11_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L79() else D18()
  // L79()
  goto L79_;

L18_:;
  // b11 = ld b
  Rsh_Fir_reg_b11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L84() else D20()
  // L84()
  goto L84_;

L19_:;
  // r40 = `<`(dx18, dx19)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c11 then L89() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L89()
    goto L89_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L11(i29)
  // L11(i29)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i29_;
  goto L11_;

L22_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args21[4];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // st k = x
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L60() else D11()
  // L60()
  goto L60_;

L23_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard7 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L24_:;
  // r52 = `>`(r49, r50)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c12 then L102() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L102()
    goto L102_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 0
  return Rsh_const(CCP, 10);

L26_:;
  // a1 = ld a
  Rsh_Fir_reg_a1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L28() else D0()
  // L28()
  goto L28_;

L27_:;
  // r = dyn base(<sym a>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [a1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L28_:;
  // a2 = force? a1
  Rsh_Fir_reg_a2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a1_);
  // checkMissing(a2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_a2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r2 = dyn is_na(a2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_a2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L29() else D1()
  // L29()
  goto L29_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L30_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return -1
  return Rsh_const(CCP, 16);

L33_:;
  // b1 = ld b
  Rsh_Fir_reg_b1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

L34_:;
  // r5 = dyn base1(<sym b>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D2_:;
  // deopt 13 [b1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_b1_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L35_:;
  // b2 = force? b1
  Rsh_Fir_reg_b2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b1_);
  // checkMissing(b2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_b2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r7 = dyn is_na1(b2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_b2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

D3_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

L37_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1
  return Rsh_const(CCP, 11);

L40_:;
  // strsplit = ldf strsplit
  Rsh_Fir_reg_strsplit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L42() else D4()
  // L42()
  goto L42_;

L41_:;
  // r10 = dyn base2(<lang `[[`(strsplit(a, "[.-]"), 1)>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L6_;

D4_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p = prom<V +>{
  //   a3 = ld a;
  //   a4 = force? a3;
  //   checkMissing(a4);
  //   return a4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3950065357_, CCP, RHO);
  // r13 = dyn strsplit(p, "[.-]")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strsplit, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L43() else D5()
  // L43()
  goto L43_;

D5_:;
  // deopt 28 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L43_:;
  // c2 = `is.object`(r13)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c2 then L44() else L45(r13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L44()
    goto L44_;
  } else {
  // L45(r13)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r13_;
    goto L45_;
  }

L44_:;
  // dr = tryDispatchBuiltin.1("[[", r13)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L46() else L45(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr)
    Rsh_Fir_reg_r15_ = Rsh_Fir_reg_dr;
    goto L45_;
  }

L45_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r16 = dyn __(r15, 1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r16_;
  goto L7_;

L46_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L7(dx)
  // L7(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D6_:;
  // deopt 33 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r17_;
  goto L6_;

L48_:;
  // strsplit1 = ldf strsplit
  Rsh_Fir_reg_strsplit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L50() else D7()
  // L50()
  goto L50_;

L49_:;
  // r18 = dyn base3(<lang `[[`(strsplit(b, "[.-]"), 1)>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L8_;

D7_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p1 = prom<V +>{
  //   b3 = ld b;
  //   b4 = force? b3;
  //   checkMissing(b4);
  //   return b4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3950065357_1, CCP, RHO);
  // r21 = dyn strsplit1(p1, "[.-]")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strsplit1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L51() else D8()
  // L51()
  goto L51_;

D8_:;
  // deopt 41 [r21]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L51_:;
  // c3 = `is.object`(r21)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c3 then L52() else L53(r21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L52()
    goto L52_;
  } else {
  // L53(r21)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r21_;
    goto L53_;
  }

L52_:;
  // dr2 = tryDispatchBuiltin.1("[[", r21)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc1 then L54() else L53(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L54()
    goto L54_;
  } else {
  // L53(dr2)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_dr2_;
    goto L53_;
  }

L53_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r24 = dyn __1(r23, 1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(r24)
  // L9(r24)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r24_;
  goto L9_;

L54_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

D9_:;
  // deopt 46 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L8(r25)
  // L8(r25)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r25_;
  goto L8_;

L56_:;
  // a5 = ld a
  Rsh_Fir_reg_a5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L58() else D10()
  // L58()
  goto L58_;

L57_:;
  // r26 = dyn base4(<sym a>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(r26)
  // L10(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L10_;

D10_:;
  // deopt 49 [a5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_a5_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L58_:;
  // a6 = force? a5
  Rsh_Fir_reg_a6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a5_);
  // checkMissing(a6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_a6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // r28 = seq_along(a6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_a6_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L10(r28)
  // L10(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L10_;

L59_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard6 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

D11_:;
  // deopt 52 [i2, k]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L60_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard5 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L61_:;
  // b5 = ld b
  Rsh_Fir_reg_b5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L63() else D12()
  // L63()
  goto L63_;

L62_:;
  // r29 = dyn base5(<sym b>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(i2, k1, r29)
  // L12(i2, k1, r29)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_k4_ = Rsh_Fir_reg_k1_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L12_;

D12_:;
  // deopt 55 [i2, k1, b5]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_b5_;
  Rsh_Fir_deopt(55, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L63_:;
  // b6 = force? b5
  Rsh_Fir_reg_b6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b5_);
  // checkMissing(b6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_b6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r31 = dyn length(b6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_b6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L64() else D13()
  // L64()
  goto L64_;

D13_:;
  // deopt 58 [i2, k1, r31]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(58, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L12(i2, k1, r31)
  // L12(i2, k1, r31)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_k4_ = Rsh_Fir_reg_k1_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L12_;

L65_:;
  // a7 = ld a
  Rsh_Fir_reg_a7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L66() else D14()
  // L66()
  goto L66_;

D14_:;
  // deopt 60 [i7, a7]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_a7_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L66_:;
  // a8 = force? a7
  Rsh_Fir_reg_a8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a7_);
  // checkMissing(a8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_a8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(a8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_a8_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c6 then L67() else L68(i7, a8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L67()
    goto L67_;
  } else {
  // L68(i7, a8)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_a10_ = Rsh_Fir_reg_a8_;
    goto L68_;
  }

L67_:;
  // dr4 = tryDispatchBuiltin.1("[", a8)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_a8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc2 then L69() else L68(i7, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L69()
    goto L69_;
  } else {
  // L68(i7, dr4)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_a10_ = Rsh_Fir_reg_dr4_;
    goto L68_;
  }

L68_:;
  // k5 = ld k
  Rsh_Fir_reg_k5_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L70() else D15()
  // L70()
  goto L70_;

L69_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L14(i7, dx4)
  // L14(i7, dx4)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L14_;

D15_:;
  // deopt 62 [i11, a10, k5]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_a10_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_k5_;
  Rsh_Fir_deopt(62, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L70_:;
  // k6 = force? k5
  Rsh_Fir_reg_k6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k5_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r33 = dyn __2(a10, k6)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_a10_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_k6_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(i11, r33)
  // L14(i11, r33)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r33_;
  goto L14_;

D16_:;
  // deopt 64 [i13, dx5, b7]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_b7_;
  Rsh_Fir_deopt(64, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L71_:;
  // b8 = force? b7
  Rsh_Fir_reg_b8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b7_);
  // checkMissing(b8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_b8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(b8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_b8_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c7 then L72() else L73(i13, dx5, b8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L72()
    goto L72_;
  } else {
  // L73(i13, dx5, b8)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_b10_ = Rsh_Fir_reg_b8_;
    goto L73_;
  }

L72_:;
  // dr6 = tryDispatchBuiltin.1("[", b8)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_b8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc3 then L74() else L73(i13, dx5, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L74()
    goto L74_;
  } else {
  // L73(i13, dx5, dr6)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_b10_ = Rsh_Fir_reg_dr6_;
    goto L73_;
  }

L73_:;
  // k7 = ld k
  Rsh_Fir_reg_k7_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L75() else D17()
  // L75()
  goto L75_;

L74_:;
  // dx9 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L15(i13, dx5, dx9)
  // L15(i13, dx5, dx9)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
  goto L15_;

D17_:;
  // deopt 66 [i15, dx7, b10, k7]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_b10_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_k7_;
  Rsh_Fir_deopt(66, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L75_:;
  // k8 = force? k7
  Rsh_Fir_reg_k8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k7_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r34 = dyn __3(b10, k8)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_b10_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_k8_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(i15, dx7, r34)
  // L15(i15, dx7, r34)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r34_;
  goto L15_;

L76_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1.0
  return Rsh_const(CCP, 25);

D18_:;
  // deopt 73 [i17, a11]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_a11_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L79_:;
  // a12 = force? a11
  Rsh_Fir_reg_a12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a11_);
  // checkMissing(a12)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_a12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(a12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_a12_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c9 then L80() else L81(i17, a12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L80()
    goto L80_;
  } else {
  // L81(i17, a12)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i17_;
    Rsh_Fir_reg_a14_ = Rsh_Fir_reg_a12_;
    goto L81_;
  }

L80_:;
  // dr8 = tryDispatchBuiltin.1("[", a12)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_a12_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc4 then L82() else L81(i17, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L82()
    goto L82_;
  } else {
  // L81(i17, dr8)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i17_;
    Rsh_Fir_reg_a14_ = Rsh_Fir_reg_dr8_;
    goto L81_;
  }

L81_:;
  // k9 = ld k
  Rsh_Fir_reg_k9_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L83() else D19()
  // L83()
  goto L83_;

L82_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L18(i17, dx12)
  // L18(i17, dx12)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L18_;

D19_:;
  // deopt 75 [i23, a14, k9]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_a14_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_k9_;
  Rsh_Fir_deopt(75, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L83_:;
  // k10 = force? k9
  Rsh_Fir_reg_k10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k9_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r38 = dyn __4(a14, k10)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_a14_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_k10_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L18(i23, r38)
  // L18(i23, r38)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r38_;
  goto L18_;

D20_:;
  // deopt 77 [i25, dx13, b11]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_b11_;
  Rsh_Fir_deopt(77, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L84_:;
  // b12 = force? b11
  Rsh_Fir_reg_b12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b11_);
  // checkMissing(b12)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_b12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(b12)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_b12_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if c10 then L85() else L86(i25, dx13, b12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L85()
    goto L85_;
  } else {
  // L86(i25, dx13, b12)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_b14_ = Rsh_Fir_reg_b12_;
    goto L86_;
  }

L85_:;
  // dr10 = tryDispatchBuiltin.1("[", b12)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_b12_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args76);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if dc5 then L87() else L86(i25, dx13, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L87()
    goto L87_;
  } else {
  // L86(i25, dx13, dr10)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_b14_ = Rsh_Fir_reg_dr10_;
    goto L86_;
  }

L86_:;
  // k11 = ld k
  Rsh_Fir_reg_k11_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L88() else D21()
  // L88()
  goto L88_;

L87_:;
  // dx17 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L19(i25, dx13, dx17)
  // L19(i25, dx13, dx17)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
  goto L19_;

D21_:;
  // deopt 79 [i27, dx15, b14, k11]
  SEXP Rsh_Fir_array_deopt_stack21[4];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_b14_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_k11_;
  Rsh_Fir_deopt(79, 4, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L88_:;
  // k12 = force? k11
  Rsh_Fir_reg_k12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k11_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r39 = dyn __5(b14, k12)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_b14_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_k12_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L19(i27, dx15, r39)
  // L19(i27, dx15, r39)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r39_;
  goto L19_;

L89_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return -1
  return Rsh_const(CCP, 16);

L94_:;
  // b15 = ld b
  Rsh_Fir_reg_b15_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L96() else D22()
  // L96()
  goto L96_;

L95_:;
  // r43 = dyn base6(<sym b>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L23(r43)
  // L23(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L23_;

D22_:;
  // deopt 96 [b15]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_b15_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L96_:;
  // b16 = force? b15
  Rsh_Fir_reg_b16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b15_);
  // checkMissing(b16)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_b16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r45 = dyn length1(b16)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_b16_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L97() else D23()
  // L97()
  goto L97_;

D23_:;
  // deopt 99 [r45]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L23(r45)
  // L23(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L23_;

L98_:;
  // a15 = ld a
  Rsh_Fir_reg_a15_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L100() else D24()
  // L100()
  goto L100_;

L99_:;
  // r48 = dyn base7(<sym a>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L24(r44, r48)
  // L24(r44, r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
  goto L24_;

D24_:;
  // deopt 101 [r44, a15]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_a15_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L100_:;
  // a16 = force? a15
  Rsh_Fir_reg_a16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a15_);
  // checkMissing(a16)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_a16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r51 = dyn length2(a16)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_a16_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L101() else D25()
  // L101()
  goto L101_;

D25_:;
  // deopt 104 [r44, r51]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(104, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L24(r44, r51)
  // L24(r44, r51)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L24_;

L102_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return -1
  return Rsh_const(CCP, 16);
}
SEXP Rsh_Fir_user_promise_inner3950065357_(SEXP CCP, SEXP RHO) {
  // a3 = ld a
  Rsh_Fir_reg_a3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // a4 = force? a3
  Rsh_Fir_reg_a4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a3_);
  // checkMissing(a4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_a4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return a4
  return Rsh_Fir_reg_a4_;
}
SEXP Rsh_Fir_user_promise_inner3950065357_1(SEXP CCP, SEXP RHO) {
  // b3 = ld b
  Rsh_Fir_reg_b3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // b4 = force? b3
  Rsh_Fir_reg_b4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_b3_);
  // checkMissing(b4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_b4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return b4
  return Rsh_Fir_reg_b4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
