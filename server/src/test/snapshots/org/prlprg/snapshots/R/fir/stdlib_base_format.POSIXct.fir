fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1235101665;
    st `format.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1235101665(x, format, tz, usetz, `...`) {
  (reg x:*, reg format:*, reg tz:*, reg usetz:*, reg ddd:dots) -+> V { var x:*, var format:*, reg format_isMissing:L, reg format_orDefault:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var usetz:*, reg usetz_isMissing:L, reg usetz_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c6:L, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c9:L, reg r12:V, reg x3:*, reg x4:V, reg attr:cls, reg r13:V, reg c10:V, reg r14:V, reg c11:L, reg c12:V, reg c14:L, reg tzone:*, reg tzone1:V, reg structure:cls, reg format_POSIXlt:cls, reg as_POSIXlt:cls, reg x5:*, reg x6:V, reg p:p(V +), reg tz1:*, reg tz2:V, reg p1:p(V +), reg r17:V, reg p2:p(V +), reg format1:*, reg format2:V, reg p3:p(V +), reg usetz1:*, reg usetz2:V, reg p4:p(V +), reg ddd1:dots?, reg r21:V, reg p5:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg x7:*, reg x8:V, reg names:cls, reg r25:V, reg p6:p(V +), reg r27:V |
    mkenv;
    st x = x;
    format_isMissing = missing.0(format);
    if format_isMissing then L0("") else L0(format);
  L0(format_orDefault):
    st format = format_orDefault;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L1("") else L1(tz);
  L1(tz_orDefault):
    st tz = tz_orDefault;
    usetz_isMissing = missing.0(usetz);
    if usetz_isMissing then L2(FALSE) else L2(usetz);
  L2(usetz_orDefault):
    st usetz = usetz_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L3(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L16() else L4();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r = dyn base(<sym x>, "POSIXct");
    goto L3(r);
  D0():
    deopt 2 [x1];
  L4():
    goto L5();
  L5():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "POSIXct", FALSE);
    check L15() else D1();
  L16():
    stop = ldf stop;
    check L17() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  L6(r7):
    c1 = `as.logical`(r7);
    if c1 then L22() else L7(c1);
  L15():
    goto L3(r2);
  L17():
    r4 = dyn stop("wrong class");
    check L18() else D3();
  L20():
    missing = ldf missing in base;
    r8 = dyn missing(<sym tz>);
    goto L6(r8);
  L21():
    r6 = dyn base1(<sym tz>);
    goto L6(r6);
  D3():
    deopt 12 [r4];
  L7(c3):
    c14 = `as.logical`(c3);
    if c14 then L30() else L10();
  L18():
    goto L5();
  L22():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L8(c6, r10):
    r14 = `!`(r10);
    c11 = `as.logical`(r14);
    c12 = `&&`(c6, c11);
    goto L7(c12);
  L10():
    goto L11();
  L11():
    structure = ldf structure;
    check L33() else D7();
  L23():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  L24():
    r9 = dyn base2(<lang `<-`(tzone, attr(x, "tzone"))>);
    goto L8(c1, r9);
  L30():
    tzone = ld tzone;
    check L31() else D6();
  D6():
    deopt 30 [tzone];
  D7():
    deopt 36 [];
  L9(c9, r12):
    st tzone = r12;
    c10 = `==`(r12, NULL);
    goto L8(c9, c10);
  L25():
    x3 = ld x;
    check L27() else D4();
  L26():
    r11 = dyn base3(<sym x>, "tzone");
    goto L9(c1, r11);
  L31():
    tzone1 = force? tzone;
    checkMissing(tzone1);
    st tz = tzone1;
    goto L11();
  L33():
    p5 = prom<V +>{
      format_POSIXlt = ldf `format.POSIXlt`;
      p2 = prom<V +>{
        as_POSIXlt = ldf `as.POSIXlt`;
        p = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          return x6;
        };
        p1 = prom<V +>{
          tz1 = ld tz;
          tz2 = force? tz1;
          checkMissing(tz2);
          return tz2;
        };
        r17 = dyn as_POSIXlt(p, p1);
        return r17;
      };
      p3 = prom<V +>{
        format1 = ld format;
        format2 = force? format1;
        checkMissing(format2);
        return format2;
      };
      p4 = prom<V +>{
        usetz1 = ld usetz;
        usetz2 = force? usetz1;
        checkMissing(usetz2);
        return usetz2;
      };
      ddd1 = ld `...`;
      r21 = dyn format_POSIXlt[, , , `...`](p2, p3, p4, ddd1);
      return r21;
    };
    p6 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      names = ldf names in base;
      r25 = dyn names(x8);
      goto L0(r25);
    L2():
      r23 = dyn base4(<sym x>);
      goto L0(r23);
    };
    r27 = dyn structure[, names](p5, p6);
    check L34() else D8();
  D4():
    deopt 21 [c1, x3];
  D8():
    deopt 40 [r27];
  L27():
    x4 = force? x3;
    checkMissing(x4);
    attr = ldf attr in base;
    r13 = dyn attr(x4, "tzone");
    check L28() else D5();
  L34():
    popenv;
    return r27;
  D5():
    deopt 25 [c1, r13];
  L28():
    goto L9(c1, r13);
  }
}