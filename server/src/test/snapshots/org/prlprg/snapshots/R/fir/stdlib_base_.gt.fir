fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1738567830;
    st `.gt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1738567830(x, i, j) {
  (reg x:*, reg i:*, reg j:*) -+> V { var x:*, var i:*, var j:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg j1:*, reg j2:V, reg __1:cls, reg r1:V, reg xi:*, reg xi1:V, reg xj:*, reg xj1:V, reg r2:V, reg c2:L, reg xi2:*, reg xi3:V, reg xj2:*, reg xj3:V, reg r3:V, reg c3:L |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    x1 = ld x;
    check L4() else D0();
  D0():
    deopt 0 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L5() else L6(x2);
  L0(dx1):
    st xi = dx1;
    x5 = ld x;
    check L9() else D2();
  L5():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(x4):
    i1 = ld i;
    check L8() else D1();
  D1():
    deopt 2 [x4, i1];
  D2():
    deopt 6 [x5];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    i2 = force? i1;
    __ = ldf `[` in base;
    r = dyn __(x4, i2);
    goto L0(r);
  L9():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L10() else L11(x6);
  L1(dx3):
    st xj = dx3;
    xi = ld xi;
    check L14() else D4();
  L10():
    dr2 = tryDispatchBuiltin.1("[", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(dr2);
  L11(x8):
    j1 = ld j;
    check L13() else D3();
  D3():
    deopt 8 [x8, j1];
  D4():
    deopt 12 [xi];
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L13():
    j2 = force? j1;
    __1 = ldf `[` in base;
    r1 = dyn __1(x8, j2);
    goto L1(r1);
  L14():
    xi1 = force? xi;
    checkMissing(xi1);
    xj = ld xj;
    check L15() else D5();
  D5():
    deopt 13 [xi1, xj];
  L15():
    xj1 = force? xj;
    checkMissing(xj1);
    r2 = `==`(xi1, xj1);
    c2 = `as.logical`(r2);
    if c2 then L16() else L2();
  L2():
    xi2 = ld xi;
    check L18() else D6();
  L16():
    popenv;
    return 0;
  D6():
    deopt 18 [xi2];
  L18():
    xi3 = force? xi2;
    checkMissing(xi3);
    xj2 = ld xj;
    check L19() else D7();
  D7():
    deopt 19 [xi3, xj2];
  L19():
    xj3 = force? xj2;
    checkMissing(xj3);
    r3 = `>`(xi3, xj3);
    c3 = `as.logical`(r3);
    if c3 then L20() else L3();
  L3():
    popenv;
    return -1;
  L20():
    popenv;
    return 1;
  }
}