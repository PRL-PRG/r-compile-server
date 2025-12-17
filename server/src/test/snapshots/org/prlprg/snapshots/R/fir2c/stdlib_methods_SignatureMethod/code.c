#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner24828451_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner24828451_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner24828451_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24828451_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24828451_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24828451_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner24828451_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner24828451
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner24828451_, RHO, CCP);
  // st SignatureMethod = r
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
SEXP Rsh_Fir_user_function_inner24828451_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner24828451 dynamic dispatch ([names, signature, definition])

  return Rsh_Fir_user_version_inner24828451_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner24828451_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner24828451 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner24828451/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_signature;  // signature
  SEXP Rsh_Fir_reg_definition;  // definition
  SEXP Rsh_Fir_reg__MlistDefunct;  // _MlistDefunct
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_signature1_;  // signature1
  SEXP Rsh_Fir_reg_signature2_;  // signature2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_definition1_;  // definition1
  SEXP Rsh_Fir_reg_definition2_;  // definition2
  SEXP Rsh_Fir_reg_signature3_;  // signature3
  SEXP Rsh_Fir_reg_signature4_;  // signature4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_signature6_;  // signature6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_names3_;  // names3
  SEXP Rsh_Fir_reg_names4_;  // names4
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_names6_;  // names6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_MethodsList;  // MethodsList
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_definition3_;  // definition3
  SEXP Rsh_Fir_reg_definition4_;  // definition4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_slot;  // slot
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_definition6_;  // definition6
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_definition8_;  // definition8
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_Class;  // Class
  SEXP Rsh_Fir_reg_Class1_;  // Class1
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_slot__;  // slot__
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_as_name;  // as_name
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_slot__1_;  // slot__1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_SignatureMethod;  // SignatureMethod
  SEXP Rsh_Fir_reg_names7_;  // names7
  SEXP Rsh_Fir_reg_names8_;  // names8
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_names10_;  // names10
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_signature7_;  // signature7
  SEXP Rsh_Fir_reg_signature8_;  // signature8
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_signature10_;  // signature10
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_n13_;  // n13
  SEXP Rsh_Fir_reg_n14_;  // n14
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r32_;  // r32

  // Bind parameters
  Rsh_Fir_reg_names = PARAMS[0];
  Rsh_Fir_reg_signature = PARAMS[1];
  Rsh_Fir_reg_definition = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st names = names
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_names, RHO);
  (void)(Rsh_Fir_reg_names);
  // st signature = signature
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_signature, RHO);
  (void)(Rsh_Fir_reg_signature);
  // st definition = definition
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_definition, RHO);
  (void)(Rsh_Fir_reg_definition);
  // _MlistDefunct = ldf `.MlistDefunct`
  Rsh_Fir_reg__MlistDefunct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L0_:;
  // st n = r2
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L1_:;
  // r7 = `>`(n4, r5)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L20() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L20()
    goto L20_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

L4_:;
  // signature3 = ld signature
  Rsh_Fir_reg_signature3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

L6_:;
  // st Class = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // names3 = ld names
  Rsh_Fir_reg_names3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L34() else D13()
  // L34()
  goto L34_;

L7_:;
  // st name = dx3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // MethodsList = ldf MethodsList
  Rsh_Fir_reg_MethodsList = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L39() else D15()
  // L39()
  goto L39_;

L8_:;
  // slot__ = ldf `slot<-`
  Rsh_Fir_reg_slot__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L48() else D21()
  // L48()
  goto L48_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // r = dyn _MlistDefunct("SignatureMethod()")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__MlistDefunct, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // signature1 = ld signature
  Rsh_Fir_reg_signature1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r1 = dyn base(<sym signature>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D2_:;
  // deopt 6 [signature1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_signature1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // signature2 = force? signature1
  Rsh_Fir_reg_signature2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature1_);
  // checkMissing(signature2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_signature2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r3 = dyn length(signature2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_signature2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 9 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

D4_:;
  // deopt 11 [n]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // names1 = ld names
  Rsh_Fir_reg_names1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L17_:;
  // r4 = dyn base1(<sym names>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(n1, r4)
  // L1(n1, r4)
  Rsh_Fir_reg_n4_ = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D5_:;
  // deopt 14 [n1, names1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_names1_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // names2 = force? names1
  Rsh_Fir_reg_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names1_);
  // checkMissing(names2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r6 = dyn length1(names2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 17 [n1, r6]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L1(n1, r6)
  // L1(n1, r6)
  Rsh_Fir_reg_n4_ = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L20_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L21() else D7()
  // L21()
  goto L21_;

D7_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r8 = dyn stop("arguments 'names' and 'signature' must have the same length")
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

D8_:;
  // deopt 22 [r8]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L3()
  // L3()
  goto L3_;

D9_:;
  // deopt 25 [n5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // r10 = `==`(n6, 0.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c1 then L25() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L4()
    goto L4_;
  }

L25_:;
  // definition1 = ld definition
  Rsh_Fir_reg_definition1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L26() else D10()
  // L26()
  goto L26_;

D10_:;
  // deopt 29 [definition1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_definition1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L26_:;
  // definition2 = force? definition1
  Rsh_Fir_reg_definition2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_definition1_);
  // checkMissing(definition2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_definition2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return definition2
  return Rsh_Fir_reg_definition2_;

D11_:;
  // deopt 34 [signature3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_signature3_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L29_:;
  // signature4 = force? signature3
  Rsh_Fir_reg_signature4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature3_);
  // checkMissing(signature4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_signature4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(signature4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_signature4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c2 then L30() else L31(signature4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L30()
    goto L30_;
  } else {
  // L31(signature4)
    Rsh_Fir_reg_signature6_ = Rsh_Fir_reg_signature4_;
    goto L31_;
  }

L30_:;
  // dr = tryDispatchBuiltin.1("[[", signature4)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_signature4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L32() else L31(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr)
    Rsh_Fir_reg_signature6_ = Rsh_Fir_reg_dr;
    goto L31_;
  }

L31_:;
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L33() else D12()
  // L33()
  goto L33_;

L32_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D12_:;
  // deopt 36 [signature6, n7]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_signature6_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L33_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r13 = dyn __(signature6, n8)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_signature6_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_n8_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_;
  goto L6_;

D13_:;
  // deopt 40 [names3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_names3_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L34_:;
  // names4 = force? names3
  Rsh_Fir_reg_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names3_);
  // checkMissing(names4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(names4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_names4_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c3 then L35() else L36(names4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L35()
    goto L35_;
  } else {
  // L36(names4)
    Rsh_Fir_reg_names6_ = Rsh_Fir_reg_names4_;
    goto L36_;
  }

L35_:;
  // dr2 = tryDispatchBuiltin.1("[[", names4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_names4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc1 then L37() else L36(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L37()
    goto L37_;
  } else {
  // L36(dr2)
    Rsh_Fir_reg_names6_ = Rsh_Fir_reg_dr2_;
    goto L36_;
  }

L36_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L38() else D14()
  // L38()
  goto L38_;

L37_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L7(dx2)
  // L7(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D14_:;
  // deopt 42 [names6, n9]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_names6_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L38_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r14 = dyn __1(names6, n10)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_names6_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r14_;
  goto L7_;

D15_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p = prom<V +>{
  //   name = ld name;
  //   name1 = force? name;
  //   checkMissing(name1);
  //   return name1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24828451_, CCP, RHO);
  // r16 = dyn MethodsList(p)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_MethodsList, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L40() else D16()
  // L40()
  goto L40_;

D16_:;
  // deopt 49 [r16]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L40_:;
  // st m = r16
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // definition3 = ld definition
  Rsh_Fir_reg_definition3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L41() else D17()
  // L41()
  goto L41_;

D17_:;
  // deopt 51 [definition3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_definition3_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L41_:;
  // definition4 = force? definition3
  Rsh_Fir_reg_definition4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_definition3_);
  // checkMissing(definition4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_definition4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // slot = ldf slot
  Rsh_Fir_reg_slot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L42() else D18()
  // L42()
  goto L42_;

D18_:;
  // deopt 54 [definition4, l, definition4]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_definition4_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_definition4_;
  Rsh_Fir_deopt(54, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L42_:;
  // r17 = dyn slot(definition4, NULL, "methods")
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_definition4_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L43() else D19()
  // L43()
  goto L43_;

D19_:;
  // deopt 57 [definition4, l, definition4, r17]
  SEXP Rsh_Fir_array_deopt_stack16[4];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_definition4_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_definition4_;
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(57, 4, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L43_:;
  // c4 = `is.object`(r17)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c4 then L44() else L45(definition4, l, r17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L44()
    goto L44_;
  } else {
  // L45(definition4, l, r17)
    Rsh_Fir_reg_definition6_ = Rsh_Fir_reg_definition4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r17_;
    goto L45_;
  }

L44_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", r17, definition4)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_definition4_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args34);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc2 then L46() else L45(definition4, l, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L46()
    goto L46_;
  } else {
  // L45(definition4, l, dr4)
    Rsh_Fir_reg_definition6_ = Rsh_Fir_reg_definition4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r19_ = Rsh_Fir_reg_dr4_;
    goto L45_;
  }

L45_:;
  // Class = ld Class
  Rsh_Fir_reg_Class = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L47() else D20()
  // L47()
  goto L47_;

L46_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L8(definition4, l, dx4)
  // L8(definition4, l, dx4)
  Rsh_Fir_reg_definition8_ = Rsh_Fir_reg_definition4_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L8_;

D20_:;
  // deopt 59 [definition6, l2, r19, definition4, Class]
  SEXP Rsh_Fir_array_deopt_stack17[5];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_definition6_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_definition4_;
  Rsh_Fir_array_deopt_stack17[4] = Rsh_Fir_reg_Class;
  Rsh_Fir_deopt(59, 5, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L47_:;
  // Class1 = force? Class
  Rsh_Fir_reg_Class1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r20 = dyn ____(r19, definition4, Class1)
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_definition4_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_Class1_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(definition6, l2, r20)
  // L8(definition6, l2, r20)
  Rsh_Fir_reg_definition8_ = Rsh_Fir_reg_definition6_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r20_;
  goto L8_;

D21_:;
  // deopt 62 [definition8, l4, dx5]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_definition8_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_deopt(62, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L48_:;
  // r21 = dyn slot__(l4, NULL, "methods", dx5)
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args38[3] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot__, 4, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L49() else D22()
  // L49()
  goto L49_;

D22_:;
  // deopt 65 [definition8, r21]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_definition8_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L49_:;
  // st m = r21
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // as_name = ldf `as.name`
  Rsh_Fir_reg_as_name = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L50() else D23()
  // L50()
  goto L50_;

D23_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p1 = prom<V +>{
  //   name2 = ld name;
  //   name3 = force? name2;
  //   checkMissing(name3);
  //   return name3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24828451_1, CCP, RHO);
  // r23 = dyn as_name(p1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L51() else D24()
  // L51()
  goto L51_;

D24_:;
  // deopt 70 [r23]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L51_:;
  // l5 = ld m
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // slot__1 = ldf `slot<-`
  Rsh_Fir_reg_slot__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L52() else D25()
  // L52()
  goto L52_;

D25_:;
  // deopt 72 [r23, l5, r23]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(72, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L52_:;
  // r24 = dyn slot__1(l5, NULL, "argument", r23)
  SEXP Rsh_Fir_array_args41[4];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args41[3] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names13[4];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot__1_, 4, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L53() else D26()
  // L53()
  goto L53_;

D26_:;
  // deopt 75 [r23, r24]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L53_:;
  // st m = r24
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // SignatureMethod = ldf SignatureMethod
  Rsh_Fir_reg_SignatureMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L54() else D27()
  // L54()
  goto L54_;

D27_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p2 = prom<V +>{
  //   names7 = ld names;
  //   names8 = force? names7;
  //   checkMissing(names8);
  //   c5 = `is.object`(names8);
  //   if c5 then L1() else L2(names8);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", names8);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(names10):
  //   n11 = ld n;
  //   n12 = force? n11;
  //   checkMissing(n12);
  //   r25 = `-`(<missing>, n12);
  //   __2 = ldf `[` in base;
  //   r26 = dyn __2(names10, r25);
  //   goto L0(r26);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24828451_2, CCP, RHO);
  // p3 = prom<V +>{
  //   signature7 = ld signature;
  //   signature8 = force? signature7;
  //   checkMissing(signature8);
  //   c6 = `is.object`(signature8);
  //   if c6 then L1() else L2(signature8);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", signature8);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(signature10):
  //   n13 = ld n;
  //   n14 = force? n13;
  //   checkMissing(n14);
  //   r28 = `-`(<missing>, n14);
  //   __3 = ldf `[` in base;
  //   r29 = dyn __3(signature10, r28);
  //   goto L0(r29);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24828451_3, CCP, RHO);
  // p4 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner24828451_4, CCP, RHO);
  // r32 = dyn SignatureMethod(p2, p3, p4)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_SignatureMethod, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L55() else D28()
  // L55()
  goto L55_;

D28_:;
  // deopt 82 [r32]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L55_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_inner24828451_(SEXP CCP, SEXP RHO) {
  // name = ld name
  Rsh_Fir_reg_name = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // name1 = force? name
  Rsh_Fir_reg_name1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name);
  // checkMissing(name1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_name1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return name1
  return Rsh_Fir_reg_name1_;
}
SEXP Rsh_Fir_user_promise_inner24828451_1(SEXP CCP, SEXP RHO) {
  // name2 = ld name
  Rsh_Fir_reg_name2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // name3 = force? name2
  Rsh_Fir_reg_name3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name2_);
  // checkMissing(name3)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_name3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return name3
  return Rsh_Fir_reg_name3_;
}
SEXP Rsh_Fir_user_promise_inner24828451_2(SEXP CCP, SEXP RHO) {
  // names7 = ld names
  Rsh_Fir_reg_names7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // names8 = force? names7
  Rsh_Fir_reg_names8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names7_);
  // checkMissing(names8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_names8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(names8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_names8_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(names8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(names8)
    Rsh_Fir_reg_names10_ = Rsh_Fir_reg_names8_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", names8)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_names8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args44);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_names10_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // n11 = ld n
  Rsh_Fir_reg_n11_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // n12 = force? n11
  Rsh_Fir_reg_n12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n11_);
  // checkMissing(n12)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_n12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // r25 = `-`(<missing>, n12)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_n12_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r26 = dyn __2(names10, r25)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_names10_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r26_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner24828451_3(SEXP CCP, SEXP RHO) {
  // signature7 = ld signature
  Rsh_Fir_reg_signature7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // signature8 = force? signature7
  Rsh_Fir_reg_signature8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_signature7_);
  // checkMissing(signature8)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_signature8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(signature8)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_signature8_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(signature8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(signature8)
    Rsh_Fir_reg_signature10_ = Rsh_Fir_reg_signature8_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", signature8)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_signature8_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_signature10_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // n13 = ld n
  Rsh_Fir_reg_n13_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // n14 = force? n13
  Rsh_Fir_reg_n14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n13_);
  // checkMissing(n14)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_n14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r28 = `-`(<missing>, n14)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_n14_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r29 = dyn __3(signature10, r28)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_signature10_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r29_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner24828451_4(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
