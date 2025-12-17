fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st getSrcByte = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg srcref:*, reg srcref1:V, reg c:V, reg c1:L, reg srcref2:*, reg srcref3:V, reg c2:L, reg srcref5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st srcref = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>, "srcref");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L11() else L2();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "srcref");
    check L7() else D1();
  L8():
    srcref = ld srcref;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym srcref>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [srcref];
  L2():
    srcref2 = ld srcref;
    check L13() else D3();
  L7():
    goto L0(r2);
  L10():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    c = `==`(srcref1, NULL);
    goto L1(c);
  L11():
    popenv;
    return -1;
  D3():
    deopt 14 [srcref2];
  L13():
    srcref3 = force? srcref2;
    checkMissing(srcref3);
    c2 = `is.object`(srcref3);
    if c2 then L14() else L15(srcref3);
  L3(dx1):
    popenv;
    return dx1;
  L14():
    dr = tryDispatchBuiltin.1("[", srcref3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(srcref5):
    __ = ldf `[` in base;
    r5 = dyn __(srcref5, 2);
    goto L3(r5);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}