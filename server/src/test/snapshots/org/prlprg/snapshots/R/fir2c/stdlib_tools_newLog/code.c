#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3256563282_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3256563282_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3256563282_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3256563282_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3256563282
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3256563282_, RHO, CCP);
  // st newLog = r
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
SEXP Rsh_Fir_user_function_inner3256563282_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3256563282 dynamic dispatch ([filename])

  return Rsh_Fir_user_version_inner3256563282_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3256563282_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3256563282 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3256563282/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_filename;  // filename
  SEXP Rsh_Fir_reg_filename_isMissing;  // filename_isMissing
  SEXP Rsh_Fir_reg_filename_orDefault;  // filename_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_filename1_;  // filename1
  SEXP Rsh_Fir_reg_filename2_;  // filename2
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_filename3_;  // filename3
  SEXP Rsh_Fir_reg_filename4_;  // filename4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_new_env;  // new_env
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_emptyenv;  // emptyenv
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_con;  // con
  SEXP Rsh_Fir_reg_con1_;  // con1
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_con3_;  // con3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_filename5_;  // filename5
  SEXP Rsh_Fir_reg_filename6_;  // filename6
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_filename8_;  // filename8
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_Log;  // Log
  SEXP Rsh_Fir_reg_Log1_;  // Log1

  // Bind parameters
  Rsh_Fir_reg_filename = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // filename_isMissing = missing.0(filename)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_filename;
  Rsh_Fir_reg_filename_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if filename_isMissing then L0("") else L0(filename)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_filename_isMissing)) {
  // L0("")
    Rsh_Fir_reg_filename_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(filename)
    Rsh_Fir_reg_filename_orDefault = Rsh_Fir_reg_filename;
    goto L0_;
  }

L0_:;
  // st filename = filename_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_filename_orDefault, RHO);
  (void)(Rsh_Fir_reg_filename_orDefault);
  // sym = ldf nzchar
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf nzchar in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L8() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L8()
    goto L8_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3(0)
  // L3(0)
  Rsh_Fir_reg_r5_ = Rsh_const(CCP, 4);
  goto L3_;

L3_:;
  // st con = r5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // new_env = ldf `new.env`
  Rsh_Fir_reg_new_env = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L12() else D4()
  // L12()
  goto L12_;

L4_:;
  // filename1 = ld filename
  Rsh_Fir_reg_filename1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym filename>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [filename1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_filename1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // filename2 = force? filename1
  Rsh_Fir_reg_filename2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename1_);
  // checkMissing(filename2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_filename2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn nzchar(filename2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_filename2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L8_:;
  // file = ldf file
  Rsh_Fir_reg_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   filename3 = ld filename;
  //   filename4 = force? filename3;
  //   checkMissing(filename4);
  //   return filename4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3256563282_, CCP, RHO);
  // r4 = dyn file(p, "wt")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L3_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p1 = prom<V +>{
  //   sym1 = ldf emptyenv;
  //   base1 = ldf emptyenv in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   emptyenv = ldf emptyenv in base;
  //   r8 = dyn emptyenv();
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1();
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3256563282_1, CCP, RHO);
  // r10 = dyn new_env[parent](p1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new_env, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 18 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L13_:;
  // st Log = r10
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // con = ld con
  Rsh_Fir_reg_con = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 20 [con]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_con;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // con1 = force? con
  Rsh_Fir_reg_con1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con);
  // checkMissing(con1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_con1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // l = ld Log
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c1 then L16() else L17(con1, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L17(con1, l)
    Rsh_Fir_reg_con3_ = Rsh_Fir_reg_con1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L17_;
  }

L15_:;
  // st Log = dx1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // filename5 = ld filename
  Rsh_Fir_reg_filename5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

L16_:;
  // dr = tryDispatchBuiltin.0("$<-", l, con1)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_con1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17(con1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L18()
    goto L18_;
  } else {
  // L17(con1, dr)
    Rsh_Fir_reg_con3_ = Rsh_Fir_reg_con1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L17_;
  }

L17_:;
  // r11 = `$<-`(l2, <sym con>, con1)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_con1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L15(r11)
  // L15(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L15_;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L15(dx)
  // L15(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L15_;

D7_:;
  // deopt 25 [filename5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_filename5_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // filename6 = force? filename5
  Rsh_Fir_reg_filename6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename5_);
  // checkMissing(filename6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_filename6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // l3 = ld Log
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c2 = `is.object`(l3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c2 then L21() else L22(filename6, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L21()
    goto L21_;
  } else {
  // L22(filename6, l3)
    Rsh_Fir_reg_filename8_ = Rsh_Fir_reg_filename6_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L22_;
  }

L20_:;
  // st Log = dx3
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // l6 = ld Log
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c3 = `is.object`(l6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c3 then L25() else L26("*", l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L25()
    goto L25_;
  } else {
  // L26("*", l6)
    Rsh_Fir_reg_r14_ = Rsh_const(CCP, 13);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L26_;
  }

L21_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l3, filename6)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_filename6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args19);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc1 then L23() else L22(filename6, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L23()
    goto L23_;
  } else {
  // L22(filename6, dr2)
    Rsh_Fir_reg_filename8_ = Rsh_Fir_reg_filename6_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L22_;
  }

L22_:;
  // r12 = `$<-`(l5, <sym filename>, filename6)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_filename6_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L20(r12)
  // L20(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L20_;

L23_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L20(dx2)
  // L20(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L20_;

L24_:;
  // st Log = dx5
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // l9 = ld Log
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c4 = `is.object`(l9)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c4 then L29() else L30(0, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L29()
    goto L29_;
  } else {
  // L30(0, l9)
    Rsh_Fir_reg_r19_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L30_;
  }

L25_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l6, "*")
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args24);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc2 then L27() else L26("*", dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L27()
    goto L27_;
  } else {
  // L26("*", dr4)
    Rsh_Fir_reg_r14_ = Rsh_const(CCP, 13);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr4_;
    goto L26_;
  }

L26_:;
  // r17 = `$<-`(l8, <sym stars>, "*")
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L24(r17)
  // L24(r17)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r17_;
  goto L24_;

L27_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L24(dx4)
  // L24(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L24_;

L28_:;
  // st Log = dx7
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // l12 = ld Log
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c5 = `is.object`(l12)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c5 then L33() else L34(0, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L33()
    goto L33_;
  } else {
  // L34(0, l12)
    Rsh_Fir_reg_r24_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L34_;
  }

L29_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l9, 0)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args29);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc3 then L31() else L30(0, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L31()
    goto L31_;
  } else {
  // L30(0, dr6)
    Rsh_Fir_reg_r19_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr6_;
    goto L30_;
  }

L30_:;
  // r22 = `$<-`(l11, <sym errors>, 0)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L28(r22)
  // L28(r22)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r22_;
  goto L28_;

L31_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L28(dx6)
  // L28(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L28_;

L32_:;
  // st Log = dx9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // l15 = ld Log
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c6 = `is.object`(l15)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c6 then L37() else L38(0, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L37()
    goto L37_;
  } else {
  // L38(0, l15)
    Rsh_Fir_reg_r29_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L38_;
  }

L33_:;
  // dr8 = tryDispatchBuiltin.0("$<-", l12, 0)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args34);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc4 then L35() else L34(0, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L35()
    goto L35_;
  } else {
  // L34(0, dr8)
    Rsh_Fir_reg_r24_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr8_;
    goto L34_;
  }

L34_:;
  // r27 = `$<-`(l14, <sym warnings>, 0)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L32(r27)
  // L32(r27)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r27_;
  goto L32_;

L35_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L32(dx8)
  // L32(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L32_;

L36_:;
  // st Log = dx11
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // Log = ld Log
  Rsh_Fir_reg_Log = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

L37_:;
  // dr10 = tryDispatchBuiltin.0("$<-", l15, 0)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args38);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc5 then L39() else L38(0, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L39()
    goto L39_;
  } else {
  // L38(0, dr10)
    Rsh_Fir_reg_r29_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr10_;
    goto L38_;
  }

L38_:;
  // r32 = `$<-`(l17, <sym notes>, 0)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L36(r32)
  // L36(r32)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r32_;
  goto L36_;

L39_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L36(dx10)
  // L36(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L36_;

D8_:;
  // deopt 50 [Log]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_Log;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L40_:;
  // Log1 = force? Log
  Rsh_Fir_reg_Log1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Log);
  // checkMissing(Log1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_Log1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return Log1
  return Rsh_Fir_reg_Log1_;
}
SEXP Rsh_Fir_user_promise_inner3256563282_(SEXP CCP, SEXP RHO) {
  // filename3 = ld filename
  Rsh_Fir_reg_filename3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // filename4 = force? filename3
  Rsh_Fir_reg_filename4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_filename3_);
  // checkMissing(filename4)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_filename4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return filename4
  return Rsh_Fir_reg_filename4_;
}
SEXP Rsh_Fir_user_promise_inner3256563282_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf emptyenv
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf emptyenv in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // emptyenv = ldf emptyenv in base
  Rsh_Fir_reg_emptyenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r8 = dyn emptyenv()
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_emptyenv, 0, NULL, NULL, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
