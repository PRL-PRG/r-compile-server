fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.class1` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg class:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg cl:*, reg cl1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg cl2:*, reg cl3:V, reg c1:L, reg cl5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg cl6:*, reg cl7:V |
    mkenv;
    st x = x;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st cl = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    r6 = `>`(r4, 1);
    c = `as.logical`(r6);
    if c then L12() else L2();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    class = ldf class in base;
    r2 = dyn class(x2);
    check L7() else D1();
  L8():
    cl = ld cl;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym cl>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [cl];
  L2():
    cl6 = ld cl;
    check L18() else D5();
  L7():
    goto L0(r2);
  L10():
    cl1 = force? cl;
    checkMissing(cl1);
    length = ldf length in base;
    r5 = dyn length(cl1);
    check L11() else D3();
  L12():
    cl2 = ld cl;
    check L13() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [cl2];
  D5():
    deopt 20 [cl6];
  L11():
    goto L1(r5);
  L13():
    cl3 = force? cl2;
    checkMissing(cl3);
    c1 = `is.object`(cl3);
    if c1 then L14() else L15(cl3);
  L18():
    cl7 = force? cl6;
    checkMissing(cl7);
    popenv;
    return cl7;
  L3(dx1):
    popenv;
    return dx1;
  L14():
    dr = tryDispatchBuiltin.1("[[", cl3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(cl5):
    __ = ldf `[[` in base;
    r7 = dyn __(cl5, 1);
    goto L3(r7);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}