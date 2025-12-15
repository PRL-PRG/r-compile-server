fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg r3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg i5:*, reg i6:V, reg r4:V, reg l1:*, reg c1:L, reg i8:I, reg r6:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i10:I, reg dx1:V, reg i11:*, reg i12:V, reg ___:cls, reg r9:V, reg x1:*, reg x2:V |
    mkenv;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st x = r1;
    r3 = `:`(1.0, 100.0);
    s = toForSeq(r3);
    l = length(s);
    i = 0;
    goto L1(i);
  L4():
    rep = ldf rep in base;
    r2 = dyn rep(0.0, 100.0);
    goto L0(r2);
  L5():
    r = dyn base(0.0, 100.0);
    goto L0(r);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L6() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    i5 = ld i;
    check L7() else D0();
  L6():
    x1 = ld x;
    check L12() else D2();
  D0():
    deopt 8 [i2, i5];
  D2():
    deopt 20 [x1];
  L7():
    i6 = force? i5;
    checkMissing(i6);
    r4 = `*`(i6, 2.0);
    l1 = ld x;
    c1 = `is.object`(l1);
    if c1 then L8() else L9(i2, r4, l1);
  L12():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  L2(i10, dx1):
    st x = dx1;
    goto L1(i10);
  L8():
    dr = tryDispatchBuiltin.0("[<-", l1, r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(i2, r4, dr);
  L9(i8, r6, l3):
    i11 = ld i;
    check L11() else D1();
  D1():
    deopt 13 [i8, r6, l3, r4, i11];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L11():
    i12 = force? i11;
    ___ = ldf `[<-` in base;
    r9 = dyn ___(l3, r4, i12);
    goto L2(i8, r9);
  }
}