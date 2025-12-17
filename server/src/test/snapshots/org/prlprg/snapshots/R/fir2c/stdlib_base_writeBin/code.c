#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1738296145_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1738296145_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1738296145_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1738296145_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1738296145_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1738296145_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1738296145_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1738296145
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1738296145_, RHO, CCP);
  // st writeBin = r
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
SEXP Rsh_Fir_user_function_inner1738296145_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1738296145 dynamic dispatch ([object, con, size, endian, useBytes])

  return Rsh_Fir_user_version_inner1738296145_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1738296145_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1738296145 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1738296145/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_con;  // con
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_endian;  // endian
  SEXP Rsh_Fir_reg_useBytes;  // useBytes
  SEXP Rsh_Fir_reg_size_isMissing;  // size_isMissing
  SEXP Rsh_Fir_reg_size_orDefault;  // size_orDefault
  SEXP Rsh_Fir_reg_endian_isMissing;  // endian_isMissing
  SEXP Rsh_Fir_reg_endian_orDefault;  // endian_orDefault
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_useBytes_isMissing;  // useBytes_isMissing
  SEXP Rsh_Fir_reg_useBytes_orDefault;  // useBytes_orDefault
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_endian1_;  // endian1
  SEXP Rsh_Fir_reg_endian2_;  // endian2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_endian3_;  // endian3
  SEXP Rsh_Fir_reg_endian4_;  // endian4
  SEXP Rsh_Fir_reg__Platform4_;  // _Platform4
  SEXP Rsh_Fir_reg__Platform5_;  // _Platform5
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_endian6_;  // endian6
  SEXP Rsh_Fir_reg__Platform7_;  // _Platform7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_endian8_;  // endian8
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_is_vector;  // is_vector
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_mode;  // mode
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_con1_;  // con1
  SEXP Rsh_Fir_reg_con2_;  // con2
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_con3_;  // con3
  SEXP Rsh_Fir_reg_con4_;  // con4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_con5_;  // con5
  SEXP Rsh_Fir_reg_con6_;  // con6
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_swap;  // swap
  SEXP Rsh_Fir_reg_swap1_;  // swap1
  SEXP Rsh_Fir_reg_useBytes1_;  // useBytes1
  SEXP Rsh_Fir_reg_useBytes2_;  // useBytes2
  SEXP Rsh_Fir_reg_writeBin;  // writeBin
  SEXP Rsh_Fir_reg_r32_;  // r32

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_con = PARAMS[1];
  Rsh_Fir_reg_size = PARAMS[2];
  Rsh_Fir_reg_endian = PARAMS[3];
  Rsh_Fir_reg_useBytes = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st con = con
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_con, RHO);
  (void)(Rsh_Fir_reg_con);
  // size_isMissing = missing.0(size)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_size;
  Rsh_Fir_reg_size_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if size_isMissing then L0(NA_INT) else L0(size)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_size_isMissing)) {
  // L0(NA_INT)
    Rsh_Fir_reg_size_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(size)
    Rsh_Fir_reg_size_orDefault = Rsh_Fir_reg_size;
    goto L0_;
  }

L0_:;
  // st size = size_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_size_orDefault, RHO);
  (void)(Rsh_Fir_reg_size_orDefault);
  // endian_isMissing = missing.0(endian)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_endian;
  Rsh_Fir_reg_endian_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if endian_isMissing then L1() else L2(endian)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_endian_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(endian)
    Rsh_Fir_reg_endian_orDefault = Rsh_Fir_reg_endian;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   _Platform = ld `.Platform`;
  //   _Platform1 = force? _Platform;
  //   checkMissing(_Platform1);
  //   c = `is.object`(_Platform1);
  //   if c then L1() else L2(_Platform1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", _Platform1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(_Platform3):
  //   r = `$`(_Platform3, <sym endian>);
  //   goto L0(r);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738296145_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_endian_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st endian = endian_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_endian_orDefault, RHO);
  (void)(Rsh_Fir_reg_endian_orDefault);
  // useBytes_isMissing = missing.0(useBytes)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_useBytes;
  Rsh_Fir_reg_useBytes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if useBytes_isMissing then L3(FALSE) else L3(useBytes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_useBytes_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_const(CCP, 8);
    goto L3_;
  } else {
  // L3(useBytes)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_Fir_reg_useBytes;
    goto L3_;
  }

L3_:;
  // st useBytes = useBytes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_useBytes_orDefault, RHO);
  (void)(Rsh_Fir_reg_useBytes_orDefault);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // endian3 = ld endian
  Rsh_Fir_reg_endian3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

L6_:;
  // r16 = `!`(r14)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c4 then L7(c4) else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L7(c4)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c4_;
    goto L7_;
  } else {
  // L31()
    goto L31_;
  }

L7_:;
  // c10 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c10 then L35() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L35()
    goto L35_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym2 = ldf `is.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf `is.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L10_:;
  // c12 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c12 then L42() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L42()
    goto L42_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // goto L13()
  // L13()
  goto L13_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard4 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p1 = prom<V +>{
  //   endian1 = ld endian;
  //   endian2 = force? endian1;
  //   checkMissing(endian2);
  //   return endian2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738296145_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   c1 = ldf c in base;
  //   r5 = dyn c1("big", "little", "swap");
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base("big", "little", "swap");
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738296145_2, CCP, RHO);
  // r7 = dyn _in_(p1, p2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 4 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // r8 = `!`(r7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c2 then L17() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L17()
    goto L17_;
  } else {
  // L4()
    goto L4_;
  }

L17_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // r9 = dyn stop("invalid 'endian' argument")
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 9 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L5()
  // L5()
  goto L5_;

D4_:;
  // deopt 12 [endian3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_endian3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L21_:;
  // endian4 = force? endian3
  Rsh_Fir_reg_endian4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_endian3_);
  // checkMissing(endian4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_endian4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // _Platform4 = ld `.Platform`
  Rsh_Fir_reg__Platform4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

D5_:;
  // deopt 13 [endian4, _Platform4]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_endian4_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg__Platform4_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L22_:;
  // _Platform5 = force? _Platform4
  Rsh_Fir_reg__Platform5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform4_);
  // checkMissing(_Platform5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg__Platform5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(_Platform5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__Platform5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c3 then L24() else L25(endian4, _Platform5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L24()
    goto L24_;
  } else {
  // L25(endian4, _Platform5)
    Rsh_Fir_reg_endian6_ = Rsh_Fir_reg_endian4_;
    Rsh_Fir_reg__Platform7_ = Rsh_Fir_reg__Platform5_;
    goto L25_;
  }

L23_:;
  // r12 = `!=`(endian8, dx3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_endian8_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // st swap = r12
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym1 = ldf `is.vector`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf `is.vector` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L24_:;
  // dr2 = tryDispatchBuiltin.1("$", _Platform5)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg__Platform5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if dc1 then L26() else L25(endian4, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L26()
    goto L26_;
  } else {
  // L25(endian4, dr2)
    Rsh_Fir_reg_endian6_ = Rsh_Fir_reg_endian4_;
    Rsh_Fir_reg__Platform7_ = Rsh_Fir_reg_dr2_;
    goto L25_;
  }

L25_:;
  // r11 = `$`(_Platform7, <sym endian>)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg__Platform7_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L23(endian6, r11)
  // L23(endian6, r11)
  Rsh_Fir_reg_endian8_ = Rsh_Fir_reg_endian6_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L23_;

L26_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L23(endian4, dx2)
  // L23(endian4, dx2)
  Rsh_Fir_reg_endian8_ = Rsh_Fir_reg_endian4_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L23_;

L27_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L28_:;
  // r13 = dyn base1(<sym object>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L6_;

D6_:;
  // deopt 20 [object1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L29_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // is_vector = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r15 = dyn is_vector(object2, "any")
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 24 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L6(r15)
  // L6(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L6_;

L31_:;
  // mode = ldf mode
  Rsh_Fir_reg_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 27 [c4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // p3 = prom<V +>{
  //   object3 = ld object;
  //   object4 = force? object3;
  //   checkMissing(object4);
  //   return object4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738296145_3, CCP, RHO);
  // r18 = dyn mode(p3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

D9_:;
  // deopt 29 [c4, r18]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L33_:;
  // r19 = `==`(r18, "list")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // c8 = `||`(c4, c7)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L7(c8)
  // L7(c8)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c8_;
  goto L7_;

L35_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

D10_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r20 = dyn stop1("can only write vector objects")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

D11_:;
  // deopt 36 [r20]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L9()
  // L9()
  goto L9_;

L39_:;
  // con1 = ld con
  Rsh_Fir_reg_con1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L41() else D12()
  // L41()
  goto L41_;

L40_:;
  // r22 = dyn base2(<sym con>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L10_;

D12_:;
  // deopt 40 [con1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_con1_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // con2 = force? con1
  Rsh_Fir_reg_con2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con1_);
  // checkMissing(con2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_con2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c11 = `is.character`(con2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_con2_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L10(c11)
  // L10(c11)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_c11_;
  goto L10_;

L42_:;
  // file = ldf file
  Rsh_Fir_reg_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L43() else D13()
  // L43()
  goto L43_;

D13_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p4 = prom<V +>{
  //   con3 = ld con;
  //   con4 = force? con3;
  //   checkMissing(con4);
  //   return con4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1738296145_4, CCP, RHO);
  // r25 = dyn file(p4, "wb")
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

D14_:;
  // deopt 47 [r25]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L44_:;
  // st con = r25
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym3 = ldf `on.exit`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf `on.exit` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L45_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r28 = dyn on_exit(<lang close(con)>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L12(r28)
  // L12(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L12_;

L46_:;
  // r26 = dyn base3(<lang close(con)>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L12(r26)
  // L12(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L12_;

L48_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

L49_:;
  // r30 = dyn base4(<lang writeBin(object, con, size, swap, useBytes)>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L14(r30)
  // L14(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L14_;

D15_:;
  // deopt 56 [object5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L50_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // con5 = ld con
  Rsh_Fir_reg_con5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L51() else D16()
  // L51()
  goto L51_;

D16_:;
  // deopt 58 [con5]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_con5_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L51_:;
  // con6 = force? con5
  Rsh_Fir_reg_con6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con5_);
  // checkMissing(con6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_con6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // size1 = ld size
  Rsh_Fir_reg_size1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L52() else D17()
  // L52()
  goto L52_;

D17_:;
  // deopt 60 [size1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_size1_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L52_:;
  // size2 = force? size1
  Rsh_Fir_reg_size2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size1_);
  // checkMissing(size2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_size2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // swap = ld swap
  Rsh_Fir_reg_swap = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L53() else D18()
  // L53()
  goto L53_;

D18_:;
  // deopt 62 [swap]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_swap;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L53_:;
  // swap1 = force? swap
  Rsh_Fir_reg_swap1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_swap);
  // checkMissing(swap1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_swap1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // useBytes1 = ld useBytes
  Rsh_Fir_reg_useBytes1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L54() else D19()
  // L54()
  goto L54_;

D19_:;
  // deopt 64 [useBytes1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_useBytes1_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L54_:;
  // useBytes2 = force? useBytes1
  Rsh_Fir_reg_useBytes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useBytes1_);
  // checkMissing(useBytes2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_useBytes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // writeBin = ldf writeBin in base
  Rsh_Fir_reg_writeBin = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r32 = dyn writeBin(object6, con6, size2, swap1, useBytes2)
  SEXP Rsh_Fir_array_args55[5];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_con6_;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_size2_;
  Rsh_Fir_array_args55[3] = Rsh_Fir_reg_swap1_;
  Rsh_Fir_array_args55[4] = Rsh_Fir_reg_useBytes2_;
  SEXP Rsh_Fir_array_arg_names13[5];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeBin, 5, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L55() else D20()
  // L55()
  goto L55_;

D20_:;
  // deopt 67 [r32]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L14(r32)
  // L14(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L14_;
}
SEXP Rsh_Fir_user_promise_inner1738296145_(SEXP CCP, SEXP RHO) {
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg__Platform1_;
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
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r = `$`(_Platform3, <sym endian>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
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
SEXP Rsh_Fir_user_promise_inner1738296145_1(SEXP CCP, SEXP RHO) {
  // endian1 = ld endian
  Rsh_Fir_reg_endian1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // endian2 = force? endian1
  Rsh_Fir_reg_endian2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_endian1_);
  // checkMissing(endian2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_endian2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return endian2
  return Rsh_Fir_reg_endian2_;
}
SEXP Rsh_Fir_user_promise_inner1738296145_2(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r4
  return Rsh_Fir_reg_r4_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r5 = dyn c1("big", "little", "swap")
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base("big", "little", "swap")
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1738296145_3(SEXP CCP, SEXP RHO) {
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return object4
  return Rsh_Fir_reg_object4_;
}
SEXP Rsh_Fir_user_promise_inner1738296145_4(SEXP CCP, SEXP RHO) {
  // con3 = ld con
  Rsh_Fir_reg_con3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // con4 = force? con3
  Rsh_Fir_reg_con4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con3_);
  // checkMissing(con4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_con4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return con4
  return Rsh_Fir_reg_con4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
