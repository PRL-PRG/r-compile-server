fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    r = clos inner4266987626;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn f(1);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg rep:cls, reg r3:V, reg m:*, reg m1:V, reg r4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg n3:*, reg n4:V, reg i5:*, reg i6:V, reg r5:V, reg l1:*, reg c1:L, reg i8:I, reg r7:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i10:I, reg dx1:V, reg i11:*, reg i12:V, reg ___:cls, reg r10:V, reg x1:*, reg x2:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L4() else D0();
  D0():
    deopt 0 [n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    r = `+`(n2, 1);
    st m = r;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r2):
    st x = r2;
    m = ld m;
    check L7() else D1();
  L5():
    rep = ldf rep in base;
    r3 = dyn rep(0.0, <sym m>);
    goto L0(r3);
  L6():
    r1 = dyn base(0.0, <sym m>);
    goto L0(r1);
  D1():
    deopt 10 [1, m];
  L7():
    m1 = force? m;
    checkMissing(m1);
    r4 = `:`(1, m1);
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L8() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    n3 = ld n;
    check L9() else D2();
  L8():
    x1 = ld x;
    check L15() else D5();
  D2():
    deopt 13 [i2, n3];
  D5():
    deopt 25 [x1];
  L9():
    n4 = force? n3;
    checkMissing(n4);
    i5 = ld i;
    check L10() else D3();
  L15():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  D3():
    deopt 14 [i2, n4, i5];
  L10():
    i6 = force? i5;
    checkMissing(i6);
    r5 = `*`(n4, i6);
    l1 = ld x;
    c1 = `is.object`(l1);
    if c1 then L11() else L12(i2, r5, l1);
  L2(i10, dx1):
    st x = dx1;
    goto L1(i10);
  L11():
    dr = tryDispatchBuiltin.0("[<-", l1, r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(i2, r5, dr);
  L12(i8, r7, l3):
    i11 = ld i;
    check L14() else D4();
  D4():
    deopt 18 [i8, r7, l3, r5, i11];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L14():
    i12 = force? i11;
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l3, r5, i12);
    goto L2(i8, r10);
  }
}