fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1895953488;
    st ISOdatetime = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1895953488(year, month, day, hour, min, sec, tz) {
  (reg year:*, reg month:*, reg day:*, reg hour:*, reg min:*, reg sec:*, reg tz:*) -+> V { var year:*, var month:*, var day:*, var hour:*, var min:*, var sec:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, reg min1:cls, reg lengths:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg year1:*, reg year2:V, reg month1:*, reg month2:V, reg day1:*, reg day2:V, reg hour1:*, reg hour2:V, reg min2:*, reg min3:V, reg sec1:*, reg sec2:V, reg list:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg r7:V, reg c:L, reg _POSIXct:cls, reg numeric:cls, reg r8:V, reg p2:p(V +), reg tz1:*, reg tz2:V, reg p3:p(V +), reg r11:V, reg paste:cls, reg year3:*, reg year4:V, reg p4:p(V +), reg month3:*, reg month4:V, reg p5:p(V +), reg day3:*, reg day4:V, reg p6:p(V +), reg hour3:*, reg hour4:V, reg p7:p(V +), reg min4:*, reg min5:V, reg p8:p(V +), reg sec3:*, reg sec4:V, reg p9:p(V +), reg r18:V, reg as_POSIXct:cls, reg strptime:cls, reg x:*, reg x1:V, reg p10:p(V +), reg tz3:*, reg tz4:V, reg p11:p(V +), reg r21:V, reg p12:p(V +), reg tz5:*, reg tz6:V, reg p13:p(V +), reg r24:V |
    mkenv;
    st year = year;
    st month = month;
    st day = day;
    st hour = hour;
    st min = min;
    st sec = sec;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    min1 = ldf min;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      lengths = ldf lengths;
      p = prom<V +>{
        sym = ldf list;
        base = ldf list in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        year1 = ld year;
        year2 = force? year1;
        checkMissing(year2);
        month1 = ld month;
        month2 = force? month1;
        checkMissing(month2);
        day1 = ld day;
        day2 = force? day1;
        checkMissing(day2);
        hour1 = ld hour;
        hour2 = force? hour1;
        checkMissing(hour2);
        min2 = ld min;
        min3 = force? min2;
        checkMissing(min3);
        sec1 = ld sec;
        sec2 = force? sec1;
        checkMissing(sec2);
        list = ldf list in base;
        r2 = dyn list(year2, month2, day2, hour2, min3, sec2);
        goto L0(r2);
      L2():
        r = dyn base(<sym year>, <sym month>, <sym day>, <sym hour>, <sym min>, <sym sec>);
        goto L0(r);
      };
      r4 = dyn lengths[, `use.names`](p, FALSE);
      return r4;
    };
    r6 = dyn min1(p1);
    check L3() else D1();
  D1():
    deopt 3 [r6];
  L3():
    r7 = `==`(r6, 0);
    c = `as.logical`(r7);
    if c then L4() else L1();
  L1():
    paste = ldf paste;
    check L8() else D4();
  L4():
    _POSIXct = ldf `.POSIXct`;
    check L5() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 13 [];
  L5():
    p2 = prom<V +>{
      numeric = ldf numeric;
      r8 = dyn numeric();
      return r8;
    };
    p3 = prom<V +>{
      tz1 = ld tz;
      tz2 = force? tz1;
      checkMissing(tz2);
      return tz2;
    };
    r11 = dyn _POSIXct[, tz](p2, p3);
    check L6() else D3();
  L8():
    p4 = prom<V +>{
      year3 = ld year;
      year4 = force? year3;
      checkMissing(year4);
      return year4;
    };
    p5 = prom<V +>{
      month3 = ld month;
      month4 = force? month3;
      checkMissing(month4);
      return month4;
    };
    p6 = prom<V +>{
      day3 = ld day;
      day4 = force? day3;
      checkMissing(day4);
      return day4;
    };
    p7 = prom<V +>{
      hour3 = ld hour;
      hour4 = force? hour3;
      checkMissing(hour4);
      return hour4;
    };
    p8 = prom<V +>{
      min4 = ld min;
      min5 = force? min4;
      checkMissing(min5);
      return min5;
    };
    p9 = prom<V +>{
      sec3 = ld sec;
      sec4 = force? sec3;
      checkMissing(sec4);
      return sec4;
    };
    r18 = dyn paste[, , , , , , sep](p4, p5, p6, p7, p8, p9, "-");
    check L9() else D5();
  D3():
    deopt 11 [r11];
  D5():
    deopt 22 [r18];
  L6():
    popenv;
    return r11;
  L9():
    st x = r18;
    as_POSIXct = ldf `as.POSIXct`;
    check L10() else D6();
  D6():
    deopt 25 [];
  L10():
    p12 = prom<V +>{
      strptime = ldf strptime;
      p10 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      p11 = prom<V +>{
        tz3 = ld tz;
        tz4 = force? tz3;
        checkMissing(tz4);
        return tz4;
      };
      r21 = dyn strptime[, , tz](p10, "%Y-%m-%d-%H-%M-%OS", p11);
      return r21;
    };
    p13 = prom<V +>{
      tz5 = ld tz;
      tz6 = force? tz5;
      checkMissing(tz6);
      return tz6;
    };
    r24 = dyn as_POSIXct[, tz](p12, p13);
    check L11() else D7();
  D7():
    deopt 29 [r24];
  L11():
    popenv;
    return r24;
  }
}