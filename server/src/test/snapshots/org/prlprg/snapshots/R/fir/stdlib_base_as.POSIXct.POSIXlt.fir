fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner421388299;
    st `as.POSIXct.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner421388299(x, tz, `...`) {
  (reg x:*, reg tz:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c5:L, reg r7:V, reg tzone:*, reg tzone1:V, reg c6:V, reg r8:V, reg c7:L, reg c8:V, reg c10:L, reg tzone2:*, reg tzone3:V, reg c11:L, reg tzone5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg tz1:*, reg tz2:V, reg as_POSIXct:cls, reg r12:V, reg _POSIXct:cls, reg y:*, reg y1:V, reg p:p(V +), reg tz3:*, reg tz4:V, reg p1:p(V +), reg r15:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    st tzone = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r = dyn base(<sym x>, "tzone");
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(r4):
    c = `as.logical`(r4);
    if c then L15() else L3(c);
  L11():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "tzone");
    check L12() else D1();
  L13():
    missing = ldf missing in base;
    r5 = dyn missing(<sym tz>);
    goto L2(r5);
  L14():
    r3 = dyn base1(<sym tz>);
    goto L2(r3);
  D1():
    deopt 6 [r2];
  L3(c2):
    c10 = `as.logical`(c2);
    if c10 then L20() else L5();
  L12():
    goto L1(r2);
  L15():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L4(c5, r7):
    r8 = `!`(r7);
    c7 = `as.logical`(r8);
    c8 = `&&`(c5, c7);
    goto L3(c8);
  L5():
    goto L7();
  L7():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L16():
    tzone = ld tzone;
    check L18() else D2();
  L17():
    r6 = dyn base2(<sym tzone>);
    goto L4(c, r6);
  L20():
    tzone2 = ld tzone;
    check L21() else D3();
  D2():
    deopt 12 [c, tzone];
  D3():
    deopt 17 [tzone2];
  L8(r11):
    st y = r11;
    _POSIXct = ldf `.POSIXct`;
    check L31() else D7();
  L18():
    tzone1 = force? tzone;
    checkMissing(tzone1);
    c6 = `==`(tzone1, NULL);
    goto L4(c, c6);
  L21():
    tzone3 = force? tzone2;
    checkMissing(tzone3);
    c11 = `is.object`(tzone3);
    if c11 then L22() else L23(tzone3);
  L26():
    x3 = ld x;
    check L28() else D4();
  L27():
    r10 = dyn base3(<lang as.POSIXct(x, tz)>);
    goto L8(r10);
  D4():
    deopt 27 [x3];
  D7():
    deopt 35 [];
  L6(dx1):
    st tz = dx1;
    goto L7();
  L22():
    dr = tryDispatchBuiltin.1("[", tzone3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(tzone5):
    __ = ldf `[` in base;
    r9 = dyn __(tzone5, 1);
    goto L6(r9);
  L28():
    x4 = force? x3;
    checkMissing(x4);
    tz1 = ld tz;
    check L29() else D5();
  L31():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p1 = prom<V +>{
      tz3 = ld tz;
      tz4 = force? tz3;
      checkMissing(tz4);
      return tz4;
    };
    r15 = dyn _POSIXct(p, p1);
    check L32() else D8();
  D5():
    deopt 29 [tz1];
  D8():
    deopt 38 [r15];
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L29():
    tz2 = force? tz1;
    checkMissing(tz2);
    as_POSIXct = ldf `as.POSIXct` in base;
    r12 = dyn as_POSIXct(x4, tz2);
    check L30() else D6();
  L32():
    popenv;
    return r15;
  D6():
    deopt 32 [r12];
  L30():
    goto L8(r12);
  }
}