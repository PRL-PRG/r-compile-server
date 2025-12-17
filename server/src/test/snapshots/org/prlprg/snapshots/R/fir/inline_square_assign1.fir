fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg l:*, reg c2:L, reg r7:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg y:*, reg y1:V, reg r10:V, reg ___:cls, reg r11:V, reg l3:*, reg c3:L, reg r13:R, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r15:R, reg dx3:V, reg y2:*, reg y3:V, reg r16:V, reg ____:cls, reg r17:V |
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
    r2 = dyn c(0.0, 0.0, 0.0);
    check L6() else D0();
  L5():
    r = dyn base(0.0, 0.0, 0.0);
    goto L0(r);
  D0():
    deopt 6 [r2];
  L1(r4):
    st y = r4;
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L10() else L11(1.0, l);
  L6():
    goto L0(r2);
  L7():
    c1 = ldf c in base;
    r5 = dyn c1(1.0, 0.0, 1.0);
    check L9() else D1();
  L8():
    r3 = dyn base1(1.0, 0.0, 1.0);
    goto L1(r3);
  D1():
    deopt 14 [r5];
  L2(dx1):
    st x = dx1;
    l3 = ld x;
    c3 = `is.object`(l3);
    if c3 then L14() else L15(1.0, l3);
  L9():
    goto L1(r5);
  L10():
    dr = tryDispatchBuiltin.0("[<-", l, 1.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(1.0, dr);
  L11(r7, l2):
    y = ld y;
    check L13() else D2();
  D2():
    deopt 19 [r7, l2, 1.0, y];
  L3(r15, dx3):
    st x = dx3;
    setInvisible.0();
    popenv;
    return r15;
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    y1 = force? y;
    checkMissing(y1);
    r10 = `==`(y1, 1.0);
    ___ = ldf `[<-` in base;
    r11 = dyn ___(l2, 1.0, r10);
    goto L2(r11);
  L14():
    dr2 = tryDispatchBuiltin.0("[[<-", l3, 1.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(1.0, dr2);
  L15(r13, l5):
    y2 = ld y;
    check L17() else D3();
  D3():
    deopt 28 [r13, l5, 1.0, y2];
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(1.0, dx2);
  L17():
    y3 = force? y2;
    checkMissing(y3);
    r16 = `==`(y3, 1.0);
    ____ = ldf `[[<-` in base;
    r17 = dyn ____(l5, 1.0, r16);
    goto L3(r13, r17);
  }
}