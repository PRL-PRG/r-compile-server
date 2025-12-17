fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st tabExpand = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg srcref:*, reg srcref1:V, reg c:V, reg c1:L, reg r5:V, reg srcref2:*, reg srcref3:V, reg c2:L, reg srcref5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg C_doTabExpand:*, reg C_doTabExpand1:V, reg x3:*, reg x4:V, reg start:*, reg start1:V, reg vargs:dots, reg r10:V |
    mkenv;
    st x = x;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st srcref = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>, "srcref");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L13() else L2();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "srcref");
    check L9() else D1();
  L10():
    srcref = ld srcref;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym srcref>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [srcref];
  L2():
    srcref2 = ld srcref;
    check L15() else D3();
  L3(r5):
    st start = r5;
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L9():
    goto L0(r2);
  L12():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    c = `==`(srcref1, NULL);
    goto L1(c);
  L13():
    goto L3(0);
  D3():
    deopt 14 [srcref2];
  L5(r9):
    popenv;
    return r9;
  L15():
    srcref3 = force? srcref2;
    checkMissing(srcref3);
    c2 = `is.object`(srcref3);
    if c2 then L16() else L17(srcref3);
  L19():
    C_doTabExpand = ld C_doTabExpand;
    check L21() else D4();
  L20():
    r8 = dyn base2(<sym C_doTabExpand>, <sym x>, <sym start>);
    goto L5(r8);
  D4():
    deopt 23 [C_doTabExpand];
  L4(dx1):
    r7 = `-`(dx1, 1);
    goto L3(r7);
  L16():
    dr = tryDispatchBuiltin.1("[", srcref3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(srcref5):
    __ = ldf `[` in base;
    r6 = dyn __(srcref5, 5);
    goto L4(r6);
  L21():
    C_doTabExpand1 = force? C_doTabExpand;
    checkMissing(C_doTabExpand1);
    x3 = ld x;
    check L22() else D5();
  D5():
    deopt 24 [C_doTabExpand1, x3];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L22():
    x4 = force? x3;
    checkMissing(x4);
    start = ld start;
    check L23() else D6();
  D6():
    deopt 25 [C_doTabExpand1, x4, start];
  L23():
    start1 = force? start;
    checkMissing(start1);
    vargs = dots[x4, start1];
    r10 = `.Call`(C_doTabExpand1, vargs, <missing>);
    goto L5(r10);
  }
}