fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `frequency.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg c:V, reg r5:V, reg c1:L, reg xtsp:*, reg xtsp1:V, reg c2:L, reg xtsp3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L10() else L2();
  L4():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang `<-`(xtsp, attr(x, "tsp"))>);
    goto L0(r);
  L1(r3):
    st xtsp = r3;
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    popenv;
    return 1.0;
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r2 = dyn base1(<sym x>, "tsp");
    goto L1(r2);
  L10():
    xtsp = ld xtsp;
    check L11() else D2();
  D0():
    deopt 3 [x1];
  D2():
    deopt 11 [xtsp];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "tsp");
    check L9() else D1();
  L11():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    c2 = `is.object`(xtsp1);
    if c2 then L12() else L13(xtsp1);
  D1():
    deopt 7 [r4];
  L3(dx1):
    popenv;
    return dx1;
  L9():
    goto L1(r4);
  L12():
    dr = tryDispatchBuiltin.1("[", xtsp1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(xtsp3):
    __ = ldf `[` in base;
    r6 = dyn __(xtsp3, 3);
    goto L3(r6);
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}