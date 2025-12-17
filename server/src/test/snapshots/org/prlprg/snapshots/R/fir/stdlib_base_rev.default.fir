fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `rev.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg x9:V, reg r4:V, reg x10:*, reg x11:V, reg length1:cls, reg r5:V, reg r6:V, reg __:cls, reg r7:V, reg x12:*, reg x13:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    x12 = ld x;
    check L18() else D5();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L7() else D1();
  L8():
    x3 = ld x;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [x3];
  D5():
    deopt 17 [x12];
  L7():
    goto L0(r2);
  L9():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L10() else L11(x4);
  L18():
    x13 = force? x12;
    checkMissing(x13);
    popenv;
    return x13;
  L2(dx1):
    popenv;
    return dx1;
  L10():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x6):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L3(x9, r4):
    r6 = `:`(r4, 1);
    __ = ldf `[` in base;
    r7 = dyn __(x9, r6);
    goto L2(r7);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    x10 = ld x;
    check L15() else D3();
  L14():
    r3 = dyn base1(<sym x>);
    goto L3(x6, r3);
  D3():
    deopt 10 [x6, x10];
  L15():
    x11 = force? x10;
    checkMissing(x11);
    length1 = ldf length in base;
    r5 = dyn length1(x11);
    check L16() else D4();
  D4():
    deopt 13 [x6, r5];
  L16():
    goto L3(x6, r5);
  }
}