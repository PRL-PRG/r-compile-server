#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4043437135_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4043437135_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4043437135_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4043437135_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4043437135
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4043437135_, RHO, CCP);
  // st ISOdatetime = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner4043437135_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4043437135 dynamic dispatch ([year, month, day, hour, min, sec, tz])

  return Rsh_Fir_user_version_inner4043437135_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4043437135_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4043437135 version 0 (*, *, *, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner4043437135/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_year;
  SEXP Rsh_Fir_reg_month;
  SEXP Rsh_Fir_reg_day;
  SEXP Rsh_Fir_reg_hour;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_sec;
  SEXP Rsh_Fir_reg_tz;
  SEXP Rsh_Fir_reg_tz_isMissing;
  SEXP Rsh_Fir_reg_tz_orDefault;
  SEXP Rsh_Fir_reg_min1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg__POSIXct;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_as_POSIXct;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r24_;

  // Bind parameters
  Rsh_Fir_reg_year = PARAMS[0];
  Rsh_Fir_reg_month = PARAMS[1];
  Rsh_Fir_reg_day = PARAMS[2];
  Rsh_Fir_reg_hour = PARAMS[3];
  Rsh_Fir_reg_min = PARAMS[4];
  Rsh_Fir_reg_sec = PARAMS[5];
  Rsh_Fir_reg_tz = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st year = year
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_year, RHO);
  (void)(Rsh_Fir_reg_year);
  // st month = month
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_month, RHO);
  (void)(Rsh_Fir_reg_month);
  // st day = day
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_day, RHO);
  (void)(Rsh_Fir_reg_day);
  // st hour = hour
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_hour, RHO);
  (void)(Rsh_Fir_reg_hour);
  // st min = min
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_min, RHO);
  (void)(Rsh_Fir_reg_min);
  // st sec = sec
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_sec, RHO);
  (void)(Rsh_Fir_reg_sec);
  // tz_isMissing = missing.0(tz)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_tz;
  Rsh_Fir_reg_tz_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if tz_isMissing then L0("") else L0(tz)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tz_isMissing)) {
  // L0("")
    Rsh_Fir_reg_tz_orDefault = Rsh_const(CCP, 7);
    goto L0_;
  } else {
  // L0(tz)
    Rsh_Fir_reg_tz_orDefault = Rsh_Fir_reg_tz;
    goto L0_;
  }

L0_:;
  // st tz = tz_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_tz_orDefault, RHO);
  (void)(Rsh_Fir_reg_tz_orDefault);
  // min1 = ldf min
  Rsh_Fir_reg_min1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L1_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   lengths = ldf lengths;
  //   p = prom<V +>{
  //     sym = ldf list;
  //     base = ldf list in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r1):
  //     return r1;
  //   L1():
  //     year1 = ld year;
  //     year2 = force? year1;
  //     checkMissing(year2);
  //     month1 = ld month;
  //     month2 = force? month1;
  //     checkMissing(month2);
  //     day1 = ld day;
  //     day2 = force? day1;
  //     checkMissing(day2);
  //     hour1 = ld hour;
  //     hour2 = force? hour1;
  //     checkMissing(hour2);
  //     min2 = ld min;
  //     min3 = force? min2;
  //     checkMissing(min3);
  //     sec1 = ld sec;
  //     sec2 = force? sec1;
  //     checkMissing(sec2);
  //     list = ldf list in base;
  //     r2 = dyn list(year2, month2, day2, hour2, min3, sec2);
  //     goto L0(r2);
  //   L2():
  //     r = dyn base(<sym year>, <sym month>, <sym day>, <sym hour>, <sym min>, <sym sec>);
  //     goto L0(r);
  //   };
  //   r4 = dyn lengths[, `use.names`](p, FALSE);
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_, 0, NULL, CCP, RHO);
  // r6 = dyn min1(p1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 3 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // r7 = `==`(r6, 0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args12);
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // if c then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L4_:;
  // _POSIXct = ldf `.POSIXct`
  Rsh_Fir_reg__POSIXct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p2 = prom<V +>{
  //   numeric = ldf numeric;
  //   r8 = dyn numeric();
  //   return r8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   tz1 = ld tz;
  //   tz2 = force? tz1;
  //   checkMissing(tz2);
  //   return tz2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_3, 0, NULL, CCP, RHO);
  // r11 = dyn _POSIXct[, tz](p2, p3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__POSIXct, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 11 [r11]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;

D4_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   year3 = ld year;
  //   year4 = force? year3;
  //   checkMissing(year4);
  //   return year4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   month3 = ld month;
  //   month4 = force? month3;
  //   checkMissing(month4);
  //   return month4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   day3 = ld day;
  //   day4 = force? day3;
  //   checkMissing(day4);
  //   return day4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   hour3 = ld hour;
  //   hour4 = force? hour3;
  //   checkMissing(hour4);
  //   return hour4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   min4 = ld min;
  //   min5 = force? min4;
  //   checkMissing(min5);
  //   return min5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sec3 = ld sec;
  //   sec4 = force? sec3;
  //   checkMissing(sec4);
  //   return sec4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_9, 0, NULL, CCP, RHO);
  // r18 = dyn paste[, , , , , , sep](p4, p5, p6, p7, p8, p9, "-")
  SEXP Rsh_Fir_array_args22[7];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args22[3] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args22[4] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args22[5] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args22[6] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[7];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 7, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 22 [r18]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // st x = r18
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // as_POSIXct = ldf `as.POSIXct`
  Rsh_Fir_reg_as_POSIXct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p12 = prom<V +>{
  //   strptime = ldf strptime;
  //   p10 = prom<V +>{
  //     x = ld x;
  //     x1 = force? x;
  //     checkMissing(x1);
  //     return x1;
  //   };
  //   p11 = prom<V +>{
  //     tz3 = ld tz;
  //     tz4 = force? tz3;
  //     checkMissing(tz4);
  //     return tz4;
  //   };
  //   r21 = dyn strptime[, , tz](p10, "%Y-%m-%d-%H-%M-%OS", p11);
  //   return r21;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_10, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   tz5 = ld tz;
  //   tz6 = force? tz5;
  //   checkMissing(tz6);
  //   return tz6;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_13, 0, NULL, CCP, RHO);
  // r24 = dyn as_POSIXct[, tz](p12, p13)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXct, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

D7_:;
  // deopt 29 [r24]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lengths;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // lengths = ldf lengths
  Rsh_Fir_reg_lengths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   year1 = ld year;
  //   year2 = force? year1;
  //   checkMissing(year2);
  //   month1 = ld month;
  //   month2 = force? month1;
  //   checkMissing(month2);
  //   day1 = ld day;
  //   day2 = force? day1;
  //   checkMissing(day2);
  //   hour1 = ld hour;
  //   hour2 = force? hour1;
  //   checkMissing(hour2);
  //   min2 = ld min;
  //   min3 = force? min2;
  //   checkMissing(min3);
  //   sec1 = ld sec;
  //   sec2 = force? sec1;
  //   checkMissing(sec2);
  //   list = ldf list in base;
  //   r2 = dyn list(year2, month2, day2, hour2, min3, sec2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym year>, <sym month>, <sym day>, <sym hour>, <sym min>, <sym sec>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_1, 0, NULL, CCP, RHO);
  // r4 = dyn lengths[, `use.names`](p, FALSE)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lengths, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_year1_;
  SEXP Rsh_Fir_reg_year2_;
  SEXP Rsh_Fir_reg_month1_;
  SEXP Rsh_Fir_reg_month2_;
  SEXP Rsh_Fir_reg_day1_;
  SEXP Rsh_Fir_reg_day2_;
  SEXP Rsh_Fir_reg_hour1_;
  SEXP Rsh_Fir_reg_hour2_;
  SEXP Rsh_Fir_reg_min2_;
  SEXP Rsh_Fir_reg_min3_;
  SEXP Rsh_Fir_reg_sec1_;
  SEXP Rsh_Fir_reg_sec2_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // year1 = ld year
  Rsh_Fir_reg_year1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // year2 = force? year1
  Rsh_Fir_reg_year2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_year1_);
  // checkMissing(year2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_year2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // month1 = ld month
  Rsh_Fir_reg_month1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // month2 = force? month1
  Rsh_Fir_reg_month2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_month1_);
  // checkMissing(month2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_month2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // day1 = ld day
  Rsh_Fir_reg_day1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // day2 = force? day1
  Rsh_Fir_reg_day2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_day1_);
  // checkMissing(day2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_day2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // hour1 = ld hour
  Rsh_Fir_reg_hour1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // hour2 = force? hour1
  Rsh_Fir_reg_hour2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hour1_);
  // checkMissing(hour2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_hour2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // min2 = ld min
  Rsh_Fir_reg_min2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // min3 = force? min2
  Rsh_Fir_reg_min3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_min2_);
  // checkMissing(min3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_min3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // sec1 = ld sec
  Rsh_Fir_reg_sec1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // sec2 = force? sec1
  Rsh_Fir_reg_sec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sec1_);
  // checkMissing(sec2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r2 = dyn list(year2, month2, day2, hour2, min3, sec2)
  SEXP Rsh_Fir_array_args8[6];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_year2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_month2_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_day2_;
  Rsh_Fir_array_args8[3] = Rsh_Fir_reg_hour2_;
  Rsh_Fir_array_args8[4] = Rsh_Fir_reg_min3_;
  Rsh_Fir_array_args8[5] = Rsh_Fir_reg_sec2_;
  SEXP Rsh_Fir_array_arg_names[6];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 6, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym year>, <sym month>, <sym day>, <sym hour>, <sym min>, <sym sec>)
  SEXP Rsh_Fir_array_args9[6];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[4] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args9[5] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[6];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 6, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // r8 = dyn numeric()
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 0, NULL, NULL, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tz1_;
  SEXP Rsh_Fir_reg_tz2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // tz1 = ld tz
  Rsh_Fir_reg_tz1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // tz2 = force? tz1
  Rsh_Fir_reg_tz2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz1_);
  // checkMissing(tz2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_tz2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return tz2
  return Rsh_Fir_reg_tz2_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_year3_;
  SEXP Rsh_Fir_reg_year4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // year3 = ld year
  Rsh_Fir_reg_year3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // year4 = force? year3
  Rsh_Fir_reg_year4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_year3_);
  // checkMissing(year4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_year4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return year4
  return Rsh_Fir_reg_year4_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_month3_;
  SEXP Rsh_Fir_reg_month4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // month3 = ld month
  Rsh_Fir_reg_month3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // month4 = force? month3
  Rsh_Fir_reg_month4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_month3_);
  // checkMissing(month4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_month4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return month4
  return Rsh_Fir_reg_month4_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_day3_;
  SEXP Rsh_Fir_reg_day4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // day3 = ld day
  Rsh_Fir_reg_day3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // day4 = force? day3
  Rsh_Fir_reg_day4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_day3_);
  // checkMissing(day4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_day4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return day4
  return Rsh_Fir_reg_day4_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_hour3_;
  SEXP Rsh_Fir_reg_hour4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // hour3 = ld hour
  Rsh_Fir_reg_hour3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // hour4 = force? hour3
  Rsh_Fir_reg_hour4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hour3_);
  // checkMissing(hour4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_hour4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return hour4
  return Rsh_Fir_reg_hour4_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_min4_;
  SEXP Rsh_Fir_reg_min5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // min4 = ld min
  Rsh_Fir_reg_min4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // min5 = force? min4
  Rsh_Fir_reg_min5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_min4_);
  // checkMissing(min5)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_min5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return min5
  return Rsh_Fir_reg_min5_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sec3_;
  SEXP Rsh_Fir_reg_sec4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // sec3 = ld sec
  Rsh_Fir_reg_sec3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // sec4 = force? sec3
  Rsh_Fir_reg_sec4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sec3_);
  // checkMissing(sec4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sec4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return sec4
  return Rsh_Fir_reg_sec4_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_strptime;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // strptime = ldf strptime
  Rsh_Fir_reg_strptime = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // p10 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_11, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   tz3 = ld tz;
  //   tz4 = force? tz3;
  //   checkMissing(tz4);
  //   return tz4;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4043437135_12, 0, NULL, CCP, RHO);
  // r21 = dyn strptime[, , tz](p10, "%Y-%m-%d-%H-%M-%OS", p11)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strptime, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tz3_;
  SEXP Rsh_Fir_reg_tz4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // tz3 = ld tz
  Rsh_Fir_reg_tz3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // tz4 = force? tz3
  Rsh_Fir_reg_tz4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz3_);
  // checkMissing(tz4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_tz4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return tz4
  return Rsh_Fir_reg_tz4_;
}
SEXP Rsh_Fir_user_promise_inner4043437135_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tz5_;
  SEXP Rsh_Fir_reg_tz6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4043437135/0: expected 0, got %d", NCAPTURES);

  // tz5 = ld tz
  Rsh_Fir_reg_tz5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // tz6 = force? tz5
  Rsh_Fir_reg_tz6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz5_);
  // checkMissing(tz6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_tz6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return tz6
  return Rsh_Fir_reg_tz6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
