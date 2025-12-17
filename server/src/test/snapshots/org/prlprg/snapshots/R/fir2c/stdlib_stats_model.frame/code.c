#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2953276916_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2953276916_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_data_class;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_model_frame1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_get_all_vars;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r40_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2953276916
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2953276916_, RHO, CCP);
  // st `model.frame` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // data_class = ldf `data.class`
  Rsh_Fir_reg_data_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p2 = prom<V +>{
  //   model_frame = ldf `model.frame`;
  //   p = prom<V +>{
  //     __ = ldf `~` in base;
  //     r1 = dyn __(<sym dist>, <sym speed>);
  //     return r1;
  //   };
  //   p1 = prom<V +>{
  //     cars = ld cars;
  //     cars1 = force? cars;
  //     checkMissing(cars1);
  //     return cars1;
  //   };
  //   r4 = dyn model_frame[, data](p, p1);
  //   return r4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r6 = dyn data_class(p2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_class, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
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
  // model_frame1 = ldf `model.frame`
  Rsh_Fir_reg_model_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p3 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r7 = dyn __1(<sym dist>, <sym speed>);
  //   return r7;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   cars2 = ld cars;
  //   cars3 = force? cars2;
  //   checkMissing(cars3);
  //   return cars3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   speed = ld speed;
  //   speed1 = force? speed;
  //   checkMissing(speed1);
  //   r10 = `<`(speed1, 10.0);
  //   return r10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sym = ldf log;
  //   base = ldf log in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r13):
  //   return r13;
  // L1():
  //   dist = ld dist;
  //   dist1 = force? dist;
  //   checkMissing(dist1);
  //   r14 = log(dist1, 2.718281828459045);
  //   goto L0(r14);
  // L2():
  //   r12 = dyn base(<sym dist>);
  //   goto L0(r12);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r16 = dyn model_frame1[, data, subset, z](p3, p4, p5, p6)
  SEXP Rsh_Fir_array_args12[4];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names5[3] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_model_frame1_, 4, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 16 [r16]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // get_all_vars = ldf get_all_vars
  Rsh_Fir_reg_get_all_vars = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p7 = prom<V +>{
  //   __2 = ldf `~` in base;
  //   r17 = dyn __2(<lang sqrt(dist)>, <lang I(`/`(speed, 2.0))>);
  //   return r17;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   cars4 = ld cars;
  //   cars5 = force? cars4;
  //   checkMissing(cars5);
  //   return cars5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   return <int 2, 3>;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r21 = dyn get_all_vars[, data, newVar](p7, p8, p9)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get_all_vars, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 24 [r21]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // st ncars = r21
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p11 = prom<V +>{
  //   is_data_frame = ldf `is.data.frame`;
  //   p10 = prom<V +>{
  //     ncars = ld ncars;
  //     ncars1 = force? ncars;
  //     checkMissing(ncars1);
  //     return ncars1;
  //   };
  //   r23 = dyn is_data_frame(p10);
  //   return r23;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   sym1 = ldf identical;
  //   base1 = ldf identical in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L3() else L4();
  // L0(r26):
  //   return r26;
  // L3():
  //   cars6 = ld cars;
  //   cars7 = force? cars6;
  //   checkMissing(cars7);
  //   ncars2 = ld ncars;
  //   ncars3 = force? ncars2;
  //   checkMissing(ncars3);
  //   c = `is.object`(ncars3);
  //   if c then L5() else L6(ncars3);
  // L4():
  //   r25 = dyn base1(<sym cars>, <lang `[`(ncars, , names(cars))>);
  //   goto L0(r25);
  // L1(dx1):
  //   identical = ldf identical in base;
  //   r31 = dyn identical(cars7, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r31);
  // L5():
  //   dr = tryDispatchBuiltin.1("[", ncars3);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L7() else L6(dr);
  // L6(ncars5):
  //   sym2 = ldf names;
  //   base2 = ldf names in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L8() else L9();
  // L2(r28):
  //   __3 = ldf `[` in base;
  //   r30 = dyn __3(ncars3, <missing>, r28);
  //   goto L1(r30);
  // L7():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // L8():
  //   cars8 = ld cars;
  //   cars9 = force? cars8;
  //   checkMissing(cars9);
  //   names = ldf names in base;
  //   r29 = dyn names(cars9);
  //   goto L2(r29);
  // L9():
  //   r27 = dyn base2(<sym cars>);
  //   goto L2(r27);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   ncol = ldf ncol;
  //   p13 = prom<V +>{
  //     ncars9 = ld ncars;
  //     ncars10 = force? ncars9;
  //     checkMissing(ncars10);
  //     return ncars10;
  //   };
  //   r34 = dyn ncol(p13);
  //   ncol1 = ldf ncol;
  //   p14 = prom<V +>{
  //     cars10 = ld cars;
  //     cars11 = force? cars10;
  //     checkMissing(cars11);
  //     return cars11;
  //   };
  //   r36 = dyn ncol1(p14);
  //   r37 = `+`(r36, 1.0);
  //   r38 = `==`(r34, r37);
  //   return r38;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r40 = dyn stopifnot(p11, p12, p15)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args38[2] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 31 [r40]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_model_frame;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // model_frame = ldf `model.frame`
  Rsh_Fir_reg_model_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p = prom<V +>{
  //   __ = ldf `~` in base;
  //   r1 = dyn __(<sym dist>, <sym speed>);
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   cars = ld cars;
  //   cars1 = force? cars;
  //   checkMissing(cars1);
  //   return cars1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r4 = dyn model_frame[, data](p, p1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_model_frame, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r1 = dyn __(<sym dist>, <sym speed>)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cars;
  SEXP Rsh_Fir_reg_cars1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars = ld cars
  Rsh_Fir_reg_cars = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // cars1 = force? cars
  Rsh_Fir_reg_cars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars);
  // checkMissing(cars1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_cars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return cars1
  return Rsh_Fir_reg_cars1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r7 = dyn __1(<sym dist>, <sym speed>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cars2_;
  SEXP Rsh_Fir_reg_cars3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars2 = ld cars
  Rsh_Fir_reg_cars2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // cars3 = force? cars2
  Rsh_Fir_reg_cars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars2_);
  // checkMissing(cars3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_cars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return cars3
  return Rsh_Fir_reg_cars3_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_speed;
  SEXP Rsh_Fir_reg_speed1_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // speed = ld speed
  Rsh_Fir_reg_speed = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // speed1 = force? speed
  Rsh_Fir_reg_speed1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_speed);
  // checkMissing(speed1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_speed1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // r10 = `<`(speed1, 10.0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_speed1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args7);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_dist;
  SEXP Rsh_Fir_reg_dist1_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf log
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf log in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r13
  return Rsh_Fir_reg_r13_;

L1_:;
  // dist = ld dist
  Rsh_Fir_reg_dist = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // dist1 = force? dist
  Rsh_Fir_reg_dist1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dist);
  // checkMissing(dist1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dist1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // r14 = log(dist1, 2.718281828459045)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dist1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(163, RHO, 2, Rsh_Fir_array_args10);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L2_:;
  // r12 = dyn base(<sym dist>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __2 = ldf `~` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r17 = dyn __2(<lang sqrt(dist)>, <lang I(`/`(speed, 2.0))>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cars4_;
  SEXP Rsh_Fir_reg_cars5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars4 = ld cars
  Rsh_Fir_reg_cars4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // cars5 = force? cars4
  Rsh_Fir_reg_cars5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars4_);
  // checkMissing(cars5)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_cars5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return cars5
  return Rsh_Fir_reg_cars5_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 2, 3>
  return Rsh_const(CCP, 15);
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_is_data_frame;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p10 = prom<V +>{
  //   ncars = ld ncars;
  //   ncars1 = force? ncars;
  //   checkMissing(ncars1);
  //   return ncars1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r23 = dyn is_data_frame(p10)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ncars;
  SEXP Rsh_Fir_reg_ncars1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ncars = ld ncars
  Rsh_Fir_reg_ncars = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // ncars1 = force? ncars
  Rsh_Fir_reg_ncars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncars);
  // checkMissing(ncars1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ncars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return ncars1
  return Rsh_Fir_reg_ncars1_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_cars6_;
  SEXP Rsh_Fir_reg_cars7_;
  SEXP Rsh_Fir_reg_ncars2_;
  SEXP Rsh_Fir_reg_ncars3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_ncars5_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_cars8_;
  SEXP Rsh_Fir_reg_cars9_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r31_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r26
  return Rsh_Fir_reg_r26_;

L3_:;
  // cars6 = ld cars
  Rsh_Fir_reg_cars6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // cars7 = force? cars6
  Rsh_Fir_reg_cars7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars6_);
  // checkMissing(cars7)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_cars7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // ncars2 = ld ncars
  Rsh_Fir_reg_ncars2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // ncars3 = force? ncars2
  Rsh_Fir_reg_ncars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncars2_);
  // checkMissing(ncars3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ncars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c = `is.object`(ncars3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ncars3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args21);
  // if c then L5() else L6(ncars3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L6(ncars3)
    Rsh_Fir_reg_ncars5_ = Rsh_Fir_reg_ncars3_;
    goto L6_;
  }

L4_:;
  // r25 = dyn base1(<sym cars>, <lang `[`(ncars, , names(cars))>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L0_;

L1_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r31 = dyn identical(cars7, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args23[9];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_cars7_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args23[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args23[5] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args23[6] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args23[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args23[8] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[9];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_array_arg_names10[6] = R_MissingArg;
  Rsh_Fir_array_arg_names10[7] = R_MissingArg;
  Rsh_Fir_array_arg_names10[8] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r31_;
  goto L0_;

L5_:;
  // dr = tryDispatchBuiltin.1("[", ncars3)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_ncars3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr)
    Rsh_Fir_reg_ncars5_ = Rsh_Fir_reg_dr;
    goto L6_;
  }

L6_:;
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L2_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r30 = dyn __3(ncars3, <missing>, r28)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_ncars3_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(r30)
  // L1(r30)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r30_;
  goto L1_;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L8_:;
  // cars8 = ld cars
  Rsh_Fir_reg_cars8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // cars9 = force? cars8
  Rsh_Fir_reg_cars9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars8_);
  // checkMissing(cars9)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_cars9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r29 = dyn names(cars9)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_cars9_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r29)
  // L2(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L2_;

L9_:;
  // r27 = dyn base2(<sym cars>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L2(r27)
  // L2(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_ncol1_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // p13 = prom<V +>{
  //   ncars9 = ld ncars;
  //   ncars10 = force? ncars9;
  //   checkMissing(ncars10);
  //   return ncars10;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r34 = dyn ncol(p13)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names14, CCP, RHO);
  // ncol1 = ldf ncol
  Rsh_Fir_reg_ncol1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // p14 = prom<V +>{
  //   cars10 = ld cars;
  //   cars11 = force? cars10;
  //   checkMissing(cars11);
  //   return cars11;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r36 = dyn ncol1(p14)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol1_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names15, CCP, RHO);
  // r37 = `+`(r36, 1.0)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args36);
  // r38 = `==`(r34, r37)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args37);
  // return r38
  return Rsh_Fir_reg_r38_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ncars9_;
  SEXP Rsh_Fir_reg_ncars10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ncars9 = ld ncars
  Rsh_Fir_reg_ncars9_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // ncars10 = force? ncars9
  Rsh_Fir_reg_ncars10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncars9_);
  // checkMissing(ncars10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_ncars10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return ncars10
  return Rsh_Fir_reg_ncars10_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cars10_;
  SEXP Rsh_Fir_reg_cars11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cars10 = ld cars
  Rsh_Fir_reg_cars10_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // cars11 = force? cars10
  Rsh_Fir_reg_cars11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cars10_);
  // checkMissing(cars11)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_cars11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return cars11
  return Rsh_Fir_reg_cars11_;
}
SEXP Rsh_Fir_user_function_inner2953276916_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2953276916 dynamic dispatch ([formula, `...`])

  return Rsh_Fir_user_version_inner2953276916_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2953276916_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2953276916 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2953276916/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_formula;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_;

  // Bind parameters
  Rsh_Fir_reg_formula = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st formula = formula
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_formula, RHO);
  (void)(Rsh_Fir_reg_formula);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r2 = dyn UseMethod("model.frame")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("model.frame")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
