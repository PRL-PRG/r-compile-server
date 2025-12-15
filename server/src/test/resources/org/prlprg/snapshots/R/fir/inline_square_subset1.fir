fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg x:*, reg x1:V, reg c2:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg y:*, reg y1:V, reg r6:V, reg __:cls, reg r7:V, reg x4:*, reg x5:V, reg c3:L, reg x7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg y2:*, reg y3:V, reg r8:V, reg __1:cls, reg r9:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st x = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L4():
    c = ldf c in base;
    r2 = dyn c(10.0, 20.0, 30.0, 40.0, 50.0);
    check L6() else D0();
  L5():
    r = dyn base(10.0, 20.0, 30.0, 40.0, 50.0);
    goto L0(r);
  D0():
    deopt 8 [r2];
  L1(r4):
    st y = r4;
    x = ld x;
    check L10() else D2();
  L6():
    goto L0(r2);
  L7():
    c1 = ldf c in base;
    r5 = dyn c1(1.0, 0.0, 1.0, 0.0, 1.0);
    check L9() else D1();
  L8():
    r3 = dyn base1(1.0, 0.0, 1.0, 0.0, 1.0);
    goto L1(r3);
  D1():
    deopt 18 [r5];
  D2():
    deopt 20 [x];
  L9():
    goto L1(r5);
  L10():
    x1 = force? x;
    checkMissing(x1);
    c2 = `is.object`(x1);
    if c2 then L11() else L12(x1);
  L2():
    x4 = ld x;
    check L15() else D4();
  L11():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(x3):
    y = ld y;
    check L14() else D3();
  D3():
    deopt 22 [x3, y];
  D4():
    deopt 27 [x4];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2();
  L14():
    y1 = force? y;
    checkMissing(y1);
    r6 = `==`(y1, 1.0);
    __ = ldf `[` in base;
    r7 = dyn __(x3, r6);
    goto L2();
  L15():
    x5 = force? x4;
    checkMissing(x5);
    c3 = `is.object`(x5);
    if c3 then L16() else L17(x5);
  L3(dx3):
    popenv;
    return dx3;
  L16():
    dr2 = tryDispatchBuiltin.1("[[", x5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(x7):
    y2 = ld y;
    check L19() else D5();
  D5():
    deopt 29 [x7, y2];
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L19():
    y3 = force? y2;
    checkMissing(y3);
    r8 = `==`(y3, 1.0);
    __1 = ldf `[[` in base;
    r9 = dyn __1(x7, r8);
    goto L3(r9);
  }
}