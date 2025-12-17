#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3006511133_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3006511133_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3006511133_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3006511133_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3006511133_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3006511133_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3006511133_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3006511133_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3006511133_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner3006511133
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3006511133_, RHO, CCP);
  // st ISOdate = r
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
SEXP Rsh_Fir_user_function_inner3006511133_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3006511133 dynamic dispatch ([year, month, day, hour, min, sec, tz])

  return Rsh_Fir_user_version_inner3006511133_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3006511133_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3006511133 version 0 (*, *, *, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner3006511133/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_year;  // year
  SEXP Rsh_Fir_reg_month;  // month
  SEXP Rsh_Fir_reg_day;  // day
  SEXP Rsh_Fir_reg_hour;  // hour
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_sec;  // sec
  SEXP Rsh_Fir_reg_tz;  // tz
  SEXP Rsh_Fir_reg_hour_isMissing;  // hour_isMissing
  SEXP Rsh_Fir_reg_hour_orDefault;  // hour_orDefault
  SEXP Rsh_Fir_reg_min_isMissing;  // min_isMissing
  SEXP Rsh_Fir_reg_min_orDefault;  // min_orDefault
  SEXP Rsh_Fir_reg_sec_isMissing;  // sec_isMissing
  SEXP Rsh_Fir_reg_sec_orDefault;  // sec_orDefault
  SEXP Rsh_Fir_reg_tz_isMissing;  // tz_isMissing
  SEXP Rsh_Fir_reg_tz_orDefault;  // tz_orDefault
  SEXP Rsh_Fir_reg_ISOdatetime;  // ISOdatetime
  SEXP Rsh_Fir_reg_year1_;  // year1
  SEXP Rsh_Fir_reg_year2_;  // year2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_month1_;  // month1
  SEXP Rsh_Fir_reg_month2_;  // month2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_day1_;  // day1
  SEXP Rsh_Fir_reg_day2_;  // day2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_hour1_;  // hour1
  SEXP Rsh_Fir_reg_hour2_;  // hour2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_min1_;  // min1
  SEXP Rsh_Fir_reg_min2_;  // min2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sec1_;  // sec1
  SEXP Rsh_Fir_reg_sec2_;  // sec2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_tz1_;  // tz1
  SEXP Rsh_Fir_reg_tz2_;  // tz2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r7_;  // r7

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
  // hour_isMissing = missing.0(hour)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_hour;
  Rsh_Fir_reg_hour_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if hour_isMissing then L0(12.0) else L0(hour)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_hour_isMissing)) {
  // L0(12.0)
    Rsh_Fir_reg_hour_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(hour)
    Rsh_Fir_reg_hour_orDefault = Rsh_Fir_reg_hour;
    goto L0_;
  }

L0_:;
  // st hour = hour_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_hour_orDefault, RHO);
  (void)(Rsh_Fir_reg_hour_orDefault);
  // min_isMissing = missing.0(min)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_min;
  Rsh_Fir_reg_min_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if min_isMissing then L1(0.0) else L1(min)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_min_isMissing)) {
  // L1(0.0)
    Rsh_Fir_reg_min_orDefault = Rsh_const(CCP, 6);
    goto L1_;
  } else {
  // L1(min)
    Rsh_Fir_reg_min_orDefault = Rsh_Fir_reg_min;
    goto L1_;
  }

L1_:;
  // st min = min_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_min_orDefault, RHO);
  (void)(Rsh_Fir_reg_min_orDefault);
  // sec_isMissing = missing.0(sec)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sec;
  Rsh_Fir_reg_sec_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if sec_isMissing then L2(0.0) else L2(sec)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sec_isMissing)) {
  // L2(0.0)
    Rsh_Fir_reg_sec_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(sec)
    Rsh_Fir_reg_sec_orDefault = Rsh_Fir_reg_sec;
    goto L2_;
  }

L2_:;
  // st sec = sec_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_sec_orDefault, RHO);
  (void)(Rsh_Fir_reg_sec_orDefault);
  // tz_isMissing = missing.0(tz)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_tz;
  Rsh_Fir_reg_tz_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if tz_isMissing then L3("GMT") else L3(tz)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tz_isMissing)) {
  // L3("GMT")
    Rsh_Fir_reg_tz_orDefault = Rsh_const(CCP, 9);
    goto L3_;
  } else {
  // L3(tz)
    Rsh_Fir_reg_tz_orDefault = Rsh_Fir_reg_tz;
    goto L3_;
  }

L3_:;
  // st tz = tz_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_tz_orDefault, RHO);
  (void)(Rsh_Fir_reg_tz_orDefault);
  // ISOdatetime = ldf ISOdatetime
  Rsh_Fir_reg_ISOdatetime = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   year1 = ld year;
  //   year2 = force? year1;
  //   checkMissing(year2);
  //   return year2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3006511133_, CCP, RHO);
  // p1 = prom<V +>{
  //   month1 = ld month;
  //   month2 = force? month1;
  //   checkMissing(month2);
  //   return month2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3006511133_1, CCP, RHO);
  // p2 = prom<V +>{
  //   day1 = ld day;
  //   day2 = force? day1;
  //   checkMissing(day2);
  //   return day2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3006511133_2, CCP, RHO);
  // p3 = prom<V +>{
  //   hour1 = ld hour;
  //   hour2 = force? hour1;
  //   checkMissing(hour2);
  //   return hour2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3006511133_3, CCP, RHO);
  // p4 = prom<V +>{
  //   min1 = ld min;
  //   min2 = force? min1;
  //   checkMissing(min2);
  //   return min2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3006511133_4, CCP, RHO);
  // p5 = prom<V +>{
  //   sec1 = ld sec;
  //   sec2 = force? sec1;
  //   checkMissing(sec2);
  //   return sec2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3006511133_5, CCP, RHO);
  // p6 = prom<V +>{
  //   tz1 = ld tz;
  //   tz2 = force? tz1;
  //   checkMissing(tz2);
  //   return tz2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3006511133_6, CCP, RHO);
  // r7 = dyn ISOdatetime(p, p1, p2, p3, p4, p5, p6)
  SEXP Rsh_Fir_array_args11[7];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args11[4] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args11[5] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args11[6] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names[7];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ISOdatetime, 7, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 9 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner3006511133_(SEXP CCP, SEXP RHO) {
  // year1 = ld year
  Rsh_Fir_reg_year1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // year2 = force? year1
  Rsh_Fir_reg_year2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_year1_);
  // checkMissing(year2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_year2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return year2
  return Rsh_Fir_reg_year2_;
}
SEXP Rsh_Fir_user_promise_inner3006511133_1(SEXP CCP, SEXP RHO) {
  // month1 = ld month
  Rsh_Fir_reg_month1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // month2 = force? month1
  Rsh_Fir_reg_month2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_month1_);
  // checkMissing(month2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_month2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return month2
  return Rsh_Fir_reg_month2_;
}
SEXP Rsh_Fir_user_promise_inner3006511133_2(SEXP CCP, SEXP RHO) {
  // day1 = ld day
  Rsh_Fir_reg_day1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // day2 = force? day1
  Rsh_Fir_reg_day2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_day1_);
  // checkMissing(day2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_day2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return day2
  return Rsh_Fir_reg_day2_;
}
SEXP Rsh_Fir_user_promise_inner3006511133_3(SEXP CCP, SEXP RHO) {
  // hour1 = ld hour
  Rsh_Fir_reg_hour1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // hour2 = force? hour1
  Rsh_Fir_reg_hour2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hour1_);
  // checkMissing(hour2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_hour2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return hour2
  return Rsh_Fir_reg_hour2_;
}
SEXP Rsh_Fir_user_promise_inner3006511133_4(SEXP CCP, SEXP RHO) {
  // min1 = ld min
  Rsh_Fir_reg_min1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // min2 = force? min1
  Rsh_Fir_reg_min2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_min1_);
  // checkMissing(min2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_min2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return min2
  return Rsh_Fir_reg_min2_;
}
SEXP Rsh_Fir_user_promise_inner3006511133_5(SEXP CCP, SEXP RHO) {
  // sec1 = ld sec
  Rsh_Fir_reg_sec1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // sec2 = force? sec1
  Rsh_Fir_reg_sec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sec1_);
  // checkMissing(sec2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return sec2
  return Rsh_Fir_reg_sec2_;
}
SEXP Rsh_Fir_user_promise_inner3006511133_6(SEXP CCP, SEXP RHO) {
  // tz1 = ld tz
  Rsh_Fir_reg_tz1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // tz2 = force? tz1
  Rsh_Fir_reg_tz2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz1_);
  // checkMissing(tz2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_tz2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return tz2
  return Rsh_Fir_reg_tz2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
