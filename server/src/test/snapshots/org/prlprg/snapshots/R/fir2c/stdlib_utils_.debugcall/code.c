#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner170918803_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner170918803_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner170918803_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner170918803_18(SEXP CCP, SEXP RHO);
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
  // r = clos inner170918803
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner170918803_, RHO, CCP);
  // st `.debugcall` = r
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
SEXP Rsh_Fir_user_function_inner170918803_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner170918803 dynamic dispatch ([call, op])

  return Rsh_Fir_user_version_inner170918803_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner170918803_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner170918803 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner170918803/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_call;  // call
  SEXP Rsh_Fir_reg_op;  // op
  SEXP Rsh_Fir_reg_deparse;  // deparse
  SEXP Rsh_Fir_reg_call1_;  // call1
  SEXP Rsh_Fir_reg_call2_;  // call2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_call4_;  // call4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_get;  // get
  SEXP Rsh_Fir_reg_funsym;  // funsym
  SEXP Rsh_Fir_reg_funsym1_;  // funsym1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_isNamespaceLoaded;  // isNamespaceLoaded
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_is_primitive;  // is_primitive
  SEXP Rsh_Fir_reg_func;  // func
  SEXP Rsh_Fir_reg_func1_;  // func1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_have_methods;  // have_methods
  SEXP Rsh_Fir_reg_have_methods1_;  // have_methods1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_func2_;  // func2
  SEXP Rsh_Fir_reg_func3_;  // func3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_func4_;  // func4
  SEXP Rsh_Fir_reg_func5_;  // func5
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_func6_;  // func6
  SEXP Rsh_Fir_reg_func7_;  // func7
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_func8_;  // func8
  SEXP Rsh_Fir_reg_func9_;  // func9
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_call5_;  // call5
  SEXP Rsh_Fir_reg_call6_;  // call6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_parent_frame1_;  // parent_frame1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_have_methods2_;  // have_methods2
  SEXP Rsh_Fir_reg_have_methods3_;  // have_methods3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_funsym2_;  // funsym2
  SEXP Rsh_Fir_reg_funsym3_;  // funsym3
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_env;  // env
  SEXP Rsh_Fir_reg_env1_;  // env1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_isS4Generic;  // isS4Generic
  SEXP Rsh_Fir_reg_isS4Generic1_;  // isS4Generic1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_isS3stdGeneric;  // isS3stdGeneric
  SEXP Rsh_Fir_reg_func10_;  // func10
  SEXP Rsh_Fir_reg_func11_;  // func11
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_s3ret;  // s3ret
  SEXP Rsh_Fir_reg_s3ret1_;  // s3ret1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_s3ret2_;  // s3ret2
  SEXP Rsh_Fir_reg_s3ret3_;  // s3ret3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_mcall;  // mcall
  SEXP Rsh_Fir_reg_mcall1_;  // mcall1
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_mcall3_;  // mcall3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_env2_;  // env2
  SEXP Rsh_Fir_reg_env3_;  // env3
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_getS3method;  // getS3method
  SEXP Rsh_Fir_reg_genname;  // genname
  SEXP Rsh_Fir_reg_genname1_;  // genname1
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_arg;  // arg
  SEXP Rsh_Fir_reg_arg1_;  // arg1
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg__signatureFromCall;  // _signatureFromCall
  SEXP Rsh_Fir_reg_func12_;  // func12
  SEXP Rsh_Fir_reg_func13_;  // func13
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_mcall4_;  // mcall4
  SEXP Rsh_Fir_reg_mcall5_;  // mcall5
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_env4_;  // env4
  SEXP Rsh_Fir_reg_env5_;  // env5
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_op1_;  // op1
  SEXP Rsh_Fir_reg_func14_;  // func14
  SEXP Rsh_Fir_reg_func15_;  // func15
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_sig;  // sig
  SEXP Rsh_Fir_reg_sig1_;  // sig1
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r53_;  // r53

  // Bind parameters
  Rsh_Fir_reg_call = PARAMS[0];
  Rsh_Fir_reg_op = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st call = call
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_call, RHO);
  (void)(Rsh_Fir_reg_call);
  // st op = op
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_op, RHO);
  (void)(Rsh_Fir_reg_op);
  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L0_:;
  // func4 = ld func
  Rsh_Fir_reg_func4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L29() else D12()
  // L29()
  goto L29_;

L1_:;
  // goto L2(NULL)
  // L2(NULL)
  Rsh_Fir_reg_r14_ = Rsh_const(CCP, 5);
  goto L2_;

L2_:;
  // goto L3(r14)
  // L3(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L3_;

L3_:;
  // st func = r15
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L4_:;
  // c4 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c4 then L33() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L33()
    goto L33_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L37() else D16()
  // L37()
  goto L37_;

L7_:;
  // st isS4Generic = c7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_c7_, RHO);
  (void)(Rsh_Fir_reg_c7_);
  // isS4Generic = ld isS4Generic
  Rsh_Fir_reg_isS4Generic = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L47() else D24()
  // L47()
  goto L47_;

L8_:;
  // _signatureFromCall = ldf `.signatureFromCall`
  Rsh_Fir_reg__signatureFromCall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L63() else D34()
  // L63()
  goto L63_;

L9_:;
  // goto L11()
  // L11()
  goto L11_;

L10_:;
  // st genname = r33
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L57() else D30()
  // L57()
  goto L57_;

L11_:;
  // st sig = NULL
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 5), RHO);
  (void)(Rsh_const(CCP, 5));
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // op1 = ldf op
  Rsh_Fir_reg_op1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L65() else D36()
  // L65()
  goto L65_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   call1 = ld call;
  //   call2 = force? call1;
  //   checkMissing(call2);
  //   c = `is.object`(call2);
  //   if c then L1() else L2(call2);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", call2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(call4):
  //   __ = ldf `[[` in base;
  //   r = dyn __(call4, 1);
  //   goto L0(r);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_, CCP, RHO);
  // r2 = dyn deparse(p)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // st funsym = r2
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p1 = prom<V +>{
  //   funsym = ld funsym;
  //   funsym1 = force? funsym;
  //   checkMissing(funsym1);
  //   return funsym1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_1, CCP, RHO);
  // p2 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r4 = dyn parent_frame(2);
  //   return r4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_2, CCP, RHO);
  // r6 = dyn get[, , mode](p1, p2, "function")
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // st func = r6
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // isNamespaceLoaded = ldf isNamespaceLoaded
  Rsh_Fir_reg_isNamespaceLoaded = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // r7 = dyn isNamespaceLoaded("methods")
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isNamespaceLoaded, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // st `have.methods` = r7
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // is_primitive = ldf `is.primitive`
  Rsh_Fir_reg_is_primitive = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p3 = prom<V +>{
  //   func = ld func;
  //   func1 = force? func;
  //   checkMissing(func1);
  //   return func1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_3, CCP, RHO);
  // r9 = dyn is_primitive(p3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_primitive, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L20_:;
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L0()
    goto L0_;
  }

L21_:;
  // have_methods = ld `have.methods`
  Rsh_Fir_reg_have_methods = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

D8_:;
  // deopt 22 [have_methods]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_have_methods;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // have_methods1 = force? have_methods
  Rsh_Fir_reg_have_methods1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_have_methods);
  // checkMissing(have_methods1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_have_methods1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(have_methods1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_have_methods1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c2 then L23() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L23()
    goto L23_;
  } else {
  // L1()
    goto L1_;
  }

L23_:;
  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r10 = dyn __1("methods", "getGeneric")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 28 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L25_:;
  // checkFun.0(r10)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r10_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args19));
  // r11 = r10 as cls
  Rsh_Fir_reg_r11_ = Rsh_Fir_cast(Rsh_Fir_reg_r10_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p4 = prom<V +>{
  //   func2 = ld func;
  //   func3 = force? func2;
  //   checkMissing(func3);
  //   return func3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_4, CCP, RHO);
  // r13 = dyn r11(p4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r11_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

D11_:;
  // deopt 31 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L2_;

D12_:;
  // deopt 34 [func4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_func4_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L29_:;
  // func5 = force? func4
  Rsh_Fir_reg_func5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_func4_);
  // checkMissing(func5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_func5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // goto L3(func5)
  // L3(func5)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_func5_;
  goto L3_;

L30_:;
  // func6 = ld func
  Rsh_Fir_reg_func6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

L31_:;
  // r16 = dyn base(<sym func>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L4_;

D13_:;
  // deopt 38 [func6]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_func6_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L32_:;
  // func7 = force? func6
  Rsh_Fir_reg_func7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_func6_);
  // checkMissing(func7)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_func7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c3 = `==`(func7, NULL)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_func7_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L4(c3)
  // L4(c3)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_c3_;
  goto L4_;

L33_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L34() else D14()
  // L34()
  goto L34_;

D14_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // r18 = dyn stop("Cannot debug primitive functions unless they are implicit generics (requires loading the methods package)")
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L35() else D15()
  // L35()
  goto L35_;

D15_:;
  // deopt 44 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L6()
  // L6()
  goto L6_;

D16_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p5 = prom<V +>{
  //   func8 = ld func;
  //   func9 = force? func8;
  //   checkMissing(func9);
  //   return func9;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_5, CCP, RHO);
  // p6 = prom<V +>{
  //   call5 = ld call;
  //   call6 = force? call5;
  //   checkMissing(call6);
  //   return call6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_6, CCP, RHO);
  // r22 = dyn match_call(p5, p6)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L38() else D17()
  // L38()
  goto L38_;

D17_:;
  // deopt 51 [r22]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // st mcall = r22
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // parent_frame1 = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L39() else D18()
  // L39()
  goto L39_;

D18_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // r23 = dyn parent_frame1(2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame1_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L40() else D19()
  // L40()
  goto L40_;

D19_:;
  // deopt 56 [r23]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L40_:;
  // st env = r23
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // have_methods2 = ld `have.methods`
  Rsh_Fir_reg_have_methods2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L41() else D20()
  // L41()
  goto L41_;

D20_:;
  // deopt 58 [have_methods2]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_have_methods2_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L41_:;
  // have_methods3 = force? have_methods2
  Rsh_Fir_reg_have_methods3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_have_methods2_);
  // checkMissing(have_methods3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_have_methods3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(have_methods3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_have_methods3_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c5 then L42() else L7(c5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L42()
    goto L42_;
  } else {
  // L7(c5)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
    goto L7_;
  }

L42_:;
  // __2 = ldf `::`
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L43() else D21()
  // L43()
  goto L43_;

D21_:;
  // deopt 61 [c5]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L43_:;
  // r24 = dyn __2("methods", "isGeneric")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L44() else D22()
  // L44()
  goto L44_;

D22_:;
  // deopt 64 [c5, r24]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L44_:;
  // checkFun.0(r24)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r24_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args34));
  // r25 = r24 as cls
  Rsh_Fir_reg_r25_ = Rsh_Fir_cast(Rsh_Fir_reg_r24_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p7 = prom<V +>{
  //   funsym2 = ld funsym;
  //   funsym3 = force? funsym2;
  //   checkMissing(funsym3);
  //   return funsym3;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_7, CCP, RHO);
  // p8 = prom<V +>{
  //   env = ld env;
  //   env1 = force? env;
  //   checkMissing(env1);
  //   return env1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_8, CCP, RHO);
  // r28 = dyn r25(p7, p8)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r25_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L45() else D23()
  // L45()
  goto L45_;

D23_:;
  // deopt 68 [c5, r28]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L45_:;
  // c8 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // c9 = `&&`(c5, c8)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L7(c9)
  // L7(c9)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c9_;
  goto L7_;

D24_:;
  // deopt 71 [isS4Generic]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_isS4Generic;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L47_:;
  // isS4Generic1 = force? isS4Generic
  Rsh_Fir_reg_isS4Generic1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_isS4Generic);
  // checkMissing(isS4Generic1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_isS4Generic1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r29 = `!`(isS4Generic1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_isS4Generic1_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c11 then L48() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L48()
    goto L48_;
  } else {
  // L8()
    goto L8_;
  }

L48_:;
  // isS3stdGeneric = ldf isS3stdGeneric
  Rsh_Fir_reg_isS3stdGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L49() else D25()
  // L49()
  goto L49_;

D25_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p9 = prom<V +>{
  //   func10 = ld func;
  //   func11 = force? func10;
  //   checkMissing(func11);
  //   return func11;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_9, CCP, RHO);
  // r31 = dyn isS3stdGeneric(p9)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isS3stdGeneric, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L50() else D26()
  // L50()
  goto L50_;

D26_:;
  // deopt 77 [r31]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L50_:;
  // st s3ret = r31
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // s3ret = ld s3ret
  Rsh_Fir_reg_s3ret = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L51() else D27()
  // L51()
  goto L51_;

D27_:;
  // deopt 79 [s3ret]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_s3ret;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L51_:;
  // s3ret1 = force? s3ret
  Rsh_Fir_reg_s3ret1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s3ret);
  // checkMissing(s3ret1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_s3ret1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c12 = `as.logical`(s3ret1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_s3ret1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c12 then L52() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L52()
    goto L52_;
  } else {
  // L9()
    goto L9_;
  }

L52_:;
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard1 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L53_:;
  // s3ret2 = ld s3ret
  Rsh_Fir_reg_s3ret2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L55() else D28()
  // L55()
  goto L55_;

L54_:;
  // r32 = dyn base1(<sym s3ret>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r32)
  // L10(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L10_;

D28_:;
  // deopt 83 [s3ret2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_s3ret2_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L55_:;
  // s3ret3 = force? s3ret2
  Rsh_Fir_reg_s3ret3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s3ret2_);
  // checkMissing(s3ret3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_s3ret3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r34 = dyn names(s3ret3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_s3ret3_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L56() else D29()
  // L56()
  goto L56_;

D29_:;
  // deopt 86 [r34]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L10(r34)
  // L10(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L10_;

D30_:;
  // deopt 89 []
  Rsh_Fir_deopt(89, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // p10 = prom<V +>{
  //   mcall = ld mcall;
  //   mcall1 = force? mcall;
  //   checkMissing(mcall1);
  //   c13 = `is.object`(mcall1);
  //   if c13 then L1() else L2(mcall1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[[", mcall1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(mcall3):
  //   __3 = ldf `[[` in base;
  //   r35 = dyn __3(mcall3, 2);
  //   goto L0(r35);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_10, CCP, RHO);
  // p11 = prom<V +>{
  //   env2 = ld env;
  //   env3 = force? env2;
  //   checkMissing(env3);
  //   return env3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_11, CCP, RHO);
  // r38 = dyn eval[, envir](p10, p11)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L58() else D31()
  // L58()
  goto L58_;

D31_:;
  // deopt 93 [r38]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L58_:;
  // st arg = r38
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // getS3method = ldf getS3method
  Rsh_Fir_reg_getS3method = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L59() else D32()
  // L59()
  goto L59_;

D32_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // p12 = prom<V +>{
  //   genname = ld genname;
  //   genname1 = force? genname;
  //   checkMissing(genname1);
  //   return genname1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_12, CCP, RHO);
  // p13 = prom<V +>{
  //   sym2 = ldf class;
  //   base2 = ldf class in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r41):
  //   return r41;
  // L1():
  //   arg = ld arg;
  //   arg1 = force? arg;
  //   checkMissing(arg1);
  //   class = ldf class in base;
  //   r42 = dyn class(arg1);
  //   goto L0(r42);
  // L2():
  //   r40 = dyn base2(<sym arg>);
  //   goto L0(r40);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_13, CCP, RHO);
  // r44 = dyn getS3method(p12, p13)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getS3method, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L60() else D33()
  // L60()
  goto L60_;

D33_:;
  // deopt 99 [r44]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L60_:;
  // st func = r44
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // goto L11()
  // L11()
  goto L11_;

D34_:;
  // deopt 107 []
  Rsh_Fir_deopt(107, 0, NULL, CCP, RHO);
  return R_NilValue;

L63_:;
  // p14 = prom<V +>{
  //   func12 = ld func;
  //   func13 = force? func12;
  //   checkMissing(func13);
  //   return func13;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_14, CCP, RHO);
  // p15 = prom<V +>{
  //   mcall4 = ld mcall;
  //   mcall5 = force? mcall4;
  //   checkMissing(mcall5);
  //   return mcall5;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_15, CCP, RHO);
  // p16 = prom<V +>{
  //   env4 = ld env;
  //   env5 = force? env4;
  //   checkMissing(env5);
  //   return env5;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_16, CCP, RHO);
  // r50 = dyn _signatureFromCall(p14, p15, p16)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args68[2] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__signatureFromCall, 3, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L64() else D35()
  // L64()
  goto L64_;

D35_:;
  // deopt 111 [r50]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L64_:;
  // st sig = r50
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // goto L12()
  // L12()
  goto L12_;

D36_:;
  // deopt 114 []
  Rsh_Fir_deopt(114, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p17 = prom<V +>{
  //   func14 = ld func;
  //   func15 = force? func14;
  //   checkMissing(func15);
  //   return func15;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_17, CCP, RHO);
  // p18 = prom<V +>{
  //   sig = ld sig;
  //   sig1 = force? sig;
  //   checkMissing(sig1);
  //   return sig1;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner170918803_18, CCP, RHO);
  // r53 = dyn op1[, signature](p17, p18)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_op1_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L66() else D37()
  // L66()
  goto L66_;

D37_:;
  // deopt 118 [r53]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L66_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r53
  return Rsh_Fir_reg_r53_;
}
SEXP Rsh_Fir_user_promise_inner170918803_(SEXP CCP, SEXP RHO) {
  // call1 = ld call
  Rsh_Fir_reg_call1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // call2 = force? call1
  Rsh_Fir_reg_call2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call1_);
  // checkMissing(call2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_call2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // c = `is.object`(call2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_call2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(call2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(call2)
    Rsh_Fir_reg_call4_ = Rsh_Fir_reg_call2_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", call2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_call2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_call4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r = dyn __(call4, 1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_call4_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner170918803_1(SEXP CCP, SEXP RHO) {
  // funsym = ld funsym
  Rsh_Fir_reg_funsym = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // funsym1 = force? funsym
  Rsh_Fir_reg_funsym1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funsym);
  // checkMissing(funsym1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_funsym1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return funsym1
  return Rsh_Fir_reg_funsym1_;
}
SEXP Rsh_Fir_user_promise_inner170918803_2(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // r4 = dyn parent_frame(2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner170918803_3(SEXP CCP, SEXP RHO) {
  // func = ld func
  Rsh_Fir_reg_func = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // func1 = force? func
  Rsh_Fir_reg_func1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_func);
  // checkMissing(func1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_func1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return func1
  return Rsh_Fir_reg_func1_;
}
SEXP Rsh_Fir_user_promise_inner170918803_4(SEXP CCP, SEXP RHO) {
  // func2 = ld func
  Rsh_Fir_reg_func2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // func3 = force? func2
  Rsh_Fir_reg_func3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_func2_);
  // checkMissing(func3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_func3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return func3
  return Rsh_Fir_reg_func3_;
}
SEXP Rsh_Fir_user_promise_inner170918803_5(SEXP CCP, SEXP RHO) {
  // func8 = ld func
  Rsh_Fir_reg_func8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // func9 = force? func8
  Rsh_Fir_reg_func9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_func8_);
  // checkMissing(func9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_func9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return func9
  return Rsh_Fir_reg_func9_;
}
SEXP Rsh_Fir_user_promise_inner170918803_6(SEXP CCP, SEXP RHO) {
  // call5 = ld call
  Rsh_Fir_reg_call5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // call6 = force? call5
  Rsh_Fir_reg_call6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call5_);
  // checkMissing(call6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_call6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return call6
  return Rsh_Fir_reg_call6_;
}
SEXP Rsh_Fir_user_promise_inner170918803_7(SEXP CCP, SEXP RHO) {
  // funsym2 = ld funsym
  Rsh_Fir_reg_funsym2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // funsym3 = force? funsym2
  Rsh_Fir_reg_funsym3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_funsym2_);
  // checkMissing(funsym3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_funsym3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return funsym3
  return Rsh_Fir_reg_funsym3_;
}
SEXP Rsh_Fir_user_promise_inner170918803_8(SEXP CCP, SEXP RHO) {
  // env = ld env
  Rsh_Fir_reg_env = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // env1 = force? env
  Rsh_Fir_reg_env1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env);
  // checkMissing(env1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_env1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return env1
  return Rsh_Fir_reg_env1_;
}
SEXP Rsh_Fir_user_promise_inner170918803_9(SEXP CCP, SEXP RHO) {
  // func10 = ld func
  Rsh_Fir_reg_func10_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // func11 = force? func10
  Rsh_Fir_reg_func11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_func10_);
  // checkMissing(func11)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_func11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return func11
  return Rsh_Fir_reg_func11_;
}
SEXP Rsh_Fir_user_promise_inner170918803_10(SEXP CCP, SEXP RHO) {
  // mcall = ld mcall
  Rsh_Fir_reg_mcall = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // mcall1 = force? mcall
  Rsh_Fir_reg_mcall1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mcall);
  // checkMissing(mcall1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_mcall1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(mcall1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_mcall1_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c13 then L1() else L2(mcall1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mcall1)
    Rsh_Fir_reg_mcall3_ = Rsh_Fir_reg_mcall1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[[", mcall1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_mcall1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_mcall3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r35 = dyn __3(mcall3, 2)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_mcall3_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r35_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner170918803_11(SEXP CCP, SEXP RHO) {
  // env2 = ld env
  Rsh_Fir_reg_env2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // env3 = force? env2
  Rsh_Fir_reg_env3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env2_);
  // checkMissing(env3)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_env3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return env3
  return Rsh_Fir_reg_env3_;
}
SEXP Rsh_Fir_user_promise_inner170918803_12(SEXP CCP, SEXP RHO) {
  // genname = ld genname
  Rsh_Fir_reg_genname = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // genname1 = force? genname
  Rsh_Fir_reg_genname1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_genname);
  // checkMissing(genname1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_genname1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return genname1
  return Rsh_Fir_reg_genname1_;
}
SEXP Rsh_Fir_user_promise_inner170918803_13(SEXP CCP, SEXP RHO) {
  // sym2 = ldf class
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base2 = ldf class in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // arg = ld arg
  Rsh_Fir_reg_arg = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // arg1 = force? arg
  Rsh_Fir_reg_arg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arg);
  // checkMissing(arg1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_arg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r42 = dyn class(arg1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_arg1_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L0_;

L2_:;
  // r40 = dyn base2(<sym arg>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner170918803_14(SEXP CCP, SEXP RHO) {
  // func12 = ld func
  Rsh_Fir_reg_func12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // func13 = force? func12
  Rsh_Fir_reg_func13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_func12_);
  // checkMissing(func13)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_func13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return func13
  return Rsh_Fir_reg_func13_;
}
SEXP Rsh_Fir_user_promise_inner170918803_15(SEXP CCP, SEXP RHO) {
  // mcall4 = ld mcall
  Rsh_Fir_reg_mcall4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // mcall5 = force? mcall4
  Rsh_Fir_reg_mcall5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mcall4_);
  // checkMissing(mcall5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_mcall5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return mcall5
  return Rsh_Fir_reg_mcall5_;
}
SEXP Rsh_Fir_user_promise_inner170918803_16(SEXP CCP, SEXP RHO) {
  // env4 = ld env
  Rsh_Fir_reg_env4_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // env5 = force? env4
  Rsh_Fir_reg_env5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env4_);
  // checkMissing(env5)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_env5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return env5
  return Rsh_Fir_reg_env5_;
}
SEXP Rsh_Fir_user_promise_inner170918803_17(SEXP CCP, SEXP RHO) {
  // func14 = ld func
  Rsh_Fir_reg_func14_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // func15 = force? func14
  Rsh_Fir_reg_func15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_func14_);
  // checkMissing(func15)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_func15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return func15
  return Rsh_Fir_reg_func15_;
}
SEXP Rsh_Fir_user_promise_inner170918803_18(SEXP CCP, SEXP RHO) {
  // sig = ld sig
  Rsh_Fir_reg_sig = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // sig1 = force? sig
  Rsh_Fir_reg_sig1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sig);
  // checkMissing(sig1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sig1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return sig1
  return Rsh_Fir_reg_sig1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
