fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3006511133;
    st ISOdate = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3006511133(year, month, day, hour, min, sec, tz) {
  (reg year:*, reg month:*, reg day:*, reg hour:*, reg min:*, reg sec:*, reg tz:*) -+> V { var year:*, var month:*, var day:*, var hour:*, reg hour_isMissing:L, reg hour_orDefault:*, var min:*, reg min_isMissing:L, reg min_orDefault:*, var sec:*, reg sec_isMissing:L, reg sec_orDefault:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, reg ISOdatetime:cls, reg year1:*, reg year2:V, reg p:p(V +), reg month1:*, reg month2:V, reg p1:p(V +), reg day1:*, reg day2:V, reg p2:p(V +), reg hour1:*, reg hour2:V, reg p3:p(V +), reg min1:*, reg min2:V, reg p4:p(V +), reg sec1:*, reg sec2:V, reg p5:p(V +), reg tz1:*, reg tz2:V, reg p6:p(V +), reg r7:V |
    mkenv;
    st year = year;
    st month = month;
    st day = day;
    hour_isMissing = missing.0(hour);
    if hour_isMissing then L0(12.0) else L0(hour);
  L0(hour_orDefault):
    st hour = hour_orDefault;
    min_isMissing = missing.0(min);
    if min_isMissing then L1(0.0) else L1(min);
  L1(min_orDefault):
    st min = min_orDefault;
    sec_isMissing = missing.0(sec);
    if sec_isMissing then L2(0.0) else L2(sec);
  L2(sec_orDefault):
    st sec = sec_orDefault;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L3("GMT") else L3(tz);
  L3(tz_orDefault):
    st tz = tz_orDefault;
    ISOdatetime = ldf ISOdatetime;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      year1 = ld year;
      year2 = force? year1;
      checkMissing(year2);
      return year2;
    };
    p1 = prom<V +>{
      month1 = ld month;
      month2 = force? month1;
      checkMissing(month2);
      return month2;
    };
    p2 = prom<V +>{
      day1 = ld day;
      day2 = force? day1;
      checkMissing(day2);
      return day2;
    };
    p3 = prom<V +>{
      hour1 = ld hour;
      hour2 = force? hour1;
      checkMissing(hour2);
      return hour2;
    };
    p4 = prom<V +>{
      min1 = ld min;
      min2 = force? min1;
      checkMissing(min2);
      return min2;
    };
    p5 = prom<V +>{
      sec1 = ld sec;
      sec2 = force? sec1;
      checkMissing(sec2);
      return sec2;
    };
    p6 = prom<V +>{
      tz1 = ld tz;
      tz2 = force? tz1;
      checkMissing(tz2);
      return tz2;
    };
    r7 = dyn ISOdatetime(p, p1, p2, p3, p4, p5, p6);
    check L5() else D1();
  D1():
    deopt 9 [r7];
  L5():
    popenv;
    return r7;
  }
}