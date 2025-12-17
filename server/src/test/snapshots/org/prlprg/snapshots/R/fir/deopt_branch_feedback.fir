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
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg n3:*, reg n4:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg rep:cls, reg r3:V, reg limit:*, reg limit1:V, reg r4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg m:*, reg m1:V, reg i5:*, reg i6:V, reg r5:V, reg limit2:*, reg limit3:V, reg i7:*, reg i8:V, reg r6:V, reg r7:V, reg r8:V, reg i9:*, reg i10:V, reg r9:V, reg c1:L, reg last:*, reg last1:V, reg current:*, reg current1:V, reg r10:V, reg i13:I, reg current2:*, reg current3:V, reg last2:*, reg last3:V, reg l1:*, reg c2:L, reg i15:I, reg last5:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i17:I, reg dx1:V, reg i18:*, reg i19:V, reg ___:cls, reg r12:V, reg m2:*, reg m3:V, reg r13:V, reg c3:L, reg values:*, reg values1:V, reg c4:L, reg values3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg limit4:*, reg limit5:V, reg __:cls, reg r14:V, reg r15:V, reg l4:*, reg c5:L, reg r17:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r19:V, reg dx5:V, reg limit6:*, reg limit7:V, reg ____:cls, reg r20:V, reg values4:*, reg values5:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L10() else D0();
  D0():
    deopt 0 [n1];
  L10():
    n2 = force? n1;
    checkMissing(n2);
    n3 = ld n;
    check L11() else D1();
  D1():
    deopt 1 [n2, n3];
  L11():
    n4 = force? n3;
    checkMissing(n4);
    r = `+`(n2, n4);
    st m = r;
    st limit = 4;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r2):
    st values = r2;
    st last = 0.0;
    limit = ld limit;
    check L14() else D2();
  L12():
    rep = ldf rep in base;
    r3 = dyn rep(0.0, <sym limit>);
    goto L0(r3);
  L13():
    r1 = dyn base(0.0, <sym limit>);
    goto L0(r1);
  D2():
    deopt 16 [1, limit];
  L14():
    limit1 = force? limit;
    checkMissing(limit1);
    r4 = `:`(1, limit1);
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L15() else L5();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    m = ld m;
    check L16() else D3();
  L15():
    m2 = ld m;
    check L31() else D13();
  D3():
    deopt 19 [i2, m];
  D13():
    deopt 52 [m2];
  L16():
    m1 = force? m;
    checkMissing(m1);
    i5 = ld i;
    check L17() else D4();
  L31():
    m3 = force? m2;
    checkMissing(m3);
    r13 = `>=`(m3, 2);
    c3 = `as.logical`(r13);
    if c3 then L32() else L6();
  D4():
    deopt 20 [i2, m1, i5];
  L6():
    goto L9();
  L9():
    values4 = ld values;
    check L43() else D17();
  L17():
    i6 = force? i5;
    checkMissing(i6);
    r5 = `+`(m1, i6);
    limit2 = ld limit;
    check L18() else D5();
  L32():
    values = ld values;
    check L33() else D14();
  D5():
    deopt 22 [i2, r5, limit2];
  D14():
    deopt 56 [values];
  D17():
    deopt 70 [values4];
  L18():
    limit3 = force? limit2;
    checkMissing(limit3);
    i7 = ld i;
    check L19() else D6();
  L33():
    values1 = force? values;
    checkMissing(values1);
    c4 = `is.object`(values1);
    if c4 then L34() else L35(values1);
  L43():
    values5 = force? values4;
    checkMissing(values5);
    popenv;
    return values5;
  D6():
    deopt 23 [i2, r5, limit3, i7];
  L7(dx3):
    r15 = `+`(dx3, 1);
    l4 = ld values;
    c5 = `is.object`(l4);
    if c5 then L38() else L39(r15, l4);
  L19():
    i8 = force? i7;
    checkMissing(i8);
    r6 = `-`(limit3, i8);
    r7 = `+`(r6, 1);
    r8 = `*`(r5, r7);
    st current = r8;
    i9 = ld i;
    check L20() else D7();
  L34():
    dr2 = tryDispatchBuiltin.1("[[", values1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(dr2);
  L35(values3):
    limit4 = ld limit;
    check L37() else D15();
  D7():
    deopt 30 [i2, i9];
  D15():
    deopt 58 [values3, limit4];
  L8(r19, dx5):
    st values = dx5;
    goto L9();
  L20():
    i10 = force? i9;
    checkMissing(i10);
    r9 = `>=`(i10, 2);
    c1 = `as.logical`(r9);
    if c1 then L21() else L2();
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L37():
    limit5 = force? limit4;
    __ = ldf `[[` in base;
    r14 = dyn __(values3, limit5);
    goto L7(r14);
  L38():
    dr4 = tryDispatchBuiltin.0("[[<-", l4, r15);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39(r15, dr4);
  L39(r17, l6):
    limit6 = ld limit;
    check L41() else D16();
  D16():
    deopt 64 [r17, l6, r15, limit6];
  L2():
    current2 = ld current;
    check L25() else D10();
  L3(i13):
    last2 = ld last;
    check L26() else D11();
  L21():
    last = ld last;
    check L22() else D8();
  L40():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(r15, dx4);
  L41():
    limit7 = force? limit6;
    ____ = ldf `[[<-` in base;
    r20 = dyn ____(l6, r15, limit7);
    goto L8(r17, r20);
  D8():
    deopt 34 [i2, last];
  D10():
    deopt 39 [i2, current2];
  D11():
    deopt 42 [i13, last2];
  L22():
    last1 = force? last;
    checkMissing(last1);
    current = ld current;
    check L23() else D9();
  L25():
    current3 = force? current2;
    checkMissing(current3);
    st last = current3;
    goto L3(i2);
  L26():
    last3 = force? last2;
    checkMissing(last3);
    l1 = ld values;
    c2 = `is.object`(l1);
    if c2 then L27() else L28(i13, last3, l1);
  D9():
    deopt 35 [i2, last1, current];
  L4(i17, dx1):
    st values = dx1;
    goto L1(i17);
  L23():
    current1 = force? current;
    checkMissing(current1);
    r10 = `+`(last1, current1);
    st last = r10;
    goto L3(i2);
  L27():
    dr = tryDispatchBuiltin.0("[<-", l1, last3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(i13, last3, dr);
  L28(i15, last5, l3):
    i18 = ld i;
    check L30() else D12();
  D12():
    deopt 45 [i15, last5, l3, last3, i18];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i13, dx);
  L30():
    i19 = force? i18;
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l3, last3, i19);
    goto L4(i15, r12);
  }
}