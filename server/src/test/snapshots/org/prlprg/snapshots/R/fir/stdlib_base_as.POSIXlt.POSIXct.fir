fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner421388299;
    st `as.POSIXlt.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner421388299(x, tz, `...`) {
  (reg x:*, reg tz:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg tz1:*, reg tz2:V, reg c6:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c15:L, reg r6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg c18:L, reg r8:V, reg x1:*, reg x2:V, reg attr:cls, reg r9:V, reg c19:V, reg r10:V, reg c20:L, reg c21:V, reg c23:L, reg tzone:*, reg tzone1:V, reg c24:L, reg tzone3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg x3:*, reg x4:V, reg tz3:*, reg tz4:V, reg as_POSIXlt:cls, reg r14:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r1):
    c = `as.logical`(r1);
    if c then L2(c) else L13();
  L11():
    missing = ldf missing in base;
    r2 = dyn missing(<sym tz>);
    goto L1(r2);
  L12():
    r = dyn base(<sym tz>);
    goto L1(r);
  L2(c1):
    c10 = `as.logical`(c1);
    if c10 then L18() else L4(c10);
  L13():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L3(c5, r4):
    c7 = `as.logical`(r4);
    c8 = `||`(c5, c7);
    goto L2(c8);
  L4(c12):
    c23 = `as.logical`(c12);
    if c23 then L26() else L7();
  L14():
    tz1 = ld tz;
    check L16() else D0();
  L15():
    r3 = dyn base1(<sym tz>);
    goto L3(c, r3);
  L18():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  D0():
    deopt 4 [c, tz1];
  L5(c15, r6):
    r10 = `!`(r6);
    c20 = `as.logical`(r10);
    c21 = `&&`(c15, c20);
    goto L4(c21);
  L7():
    goto L9();
  L9():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  L16():
    tz2 = force? tz1;
    checkMissing(tz2);
    c6 = `==`(tz2, NULL);
    goto L3(c, c6);
  L19():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L20():
    r5 = dyn base2(<lang `<-`(tzone, attr(x, "tzone"))>);
    goto L5(c10, r5);
  L26():
    tzone = ld tzone;
    check L27() else D3();
  D3():
    deopt 20 [tzone];
  L6(c18, r8):
    st tzone = r8;
    c19 = `==`(r8, NULL);
    goto L5(c18, c19);
  L10(r13):
    popenv;
    return r13;
  L21():
    x1 = ld x;
    check L23() else D1();
  L22():
    r7 = dyn base3(<sym x>, "tzone");
    goto L6(c10, r7);
  L27():
    tzone1 = force? tzone;
    checkMissing(tzone1);
    c24 = `is.object`(tzone1);
    if c24 then L28() else L29(tzone1);
  L32():
    x3 = ld x;
    check L34() else D4();
  L33():
    r12 = dyn base4(<lang as.POSIXlt(x, tz)>);
    goto L10(r12);
  D1():
    deopt 11 [c10, x1];
  D4():
    deopt 30 [x3];
  L8(dx1):
    st tz = dx1;
    goto L9();
  L23():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r9 = dyn attr(x2, "tzone");
    check L24() else D2();
  L28():
    dr = tryDispatchBuiltin.1("[", tzone1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(tzone3):
    __ = ldf `[` in base;
    r11 = dyn __(tzone3, 1);
    goto L8(r11);
  L34():
    x4 = force? x3;
    checkMissing(x4);
    tz3 = ld tz;
    check L35() else D5();
  D2():
    deopt 15 [c10, r9];
  D5():
    deopt 32 [tz3];
  L24():
    goto L6(c10, r9);
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L35():
    tz4 = force? tz3;
    checkMissing(tz4);
    as_POSIXlt = ldf `as.POSIXlt` in base;
    r14 = dyn as_POSIXlt(x4, tz4);
    check L36() else D6();
  D6():
    deopt 35 [r14];
  L36():
    goto L10(r14);
  }
}