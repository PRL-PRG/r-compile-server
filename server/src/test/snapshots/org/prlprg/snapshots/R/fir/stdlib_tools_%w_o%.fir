fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner799576941;
    st `%w/o%` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x7:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg x10:V, reg r3:V, reg x11:*, reg x12:V, reg y1:*, reg y2:V, reg match:cls, reg r4:V, reg is_na:cls, reg r5:V, reg __:cls, reg r6:V |
    mkenv;
    st x = x;
    st y = y;
    x1 = ld x;
    check L3() else D0();
  D0():
    deopt 0 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L4() else L5(x2);
  L0(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(x4):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(x7, r1):
    __ = ldf `[` in base;
    r6 = dyn __(x7, r1);
    goto L0(r6);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L7():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L8():
    r = dyn base(<lang match(x, y)>);
    goto L1(x4, r);
  L2(x10, r3):
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(r3);
    check L14() else D4();
  L9():
    x11 = ld x;
    check L11() else D1();
  L10():
    r2 = dyn base1(<sym x>, <sym y>);
    goto L2(x4, r2);
  D1():
    deopt 6 [x4, x11];
  D4():
    deopt 15 [x10, r5];
  L11():
    x12 = force? x11;
    checkMissing(x12);
    y1 = ld y;
    check L12() else D2();
  L14():
    goto L1(x10, r5);
  D2():
    deopt 8 [x4, y1];
  L12():
    y2 = force? y1;
    checkMissing(y2);
    match = ldf match in base;
    r4 = dyn match(x12, y2, NA_INT, NULL);
    check L13() else D3();
  D3():
    deopt 13 [x4, r4];
  L13():
    goto L2(x4, r4);
  }
}