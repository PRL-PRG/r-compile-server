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
  (reg n:*) -+> V { var n:*, reg n1:*, reg n2:V, reg n3:*, reg n4:V, reg r:V, reg n5:*, reg n6:V, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg rep:cls, reg r4:V, reg n7:*, reg n8:V, reg r5:V, reg limit:*, reg limit1:V, reg r6:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg value:*, reg value1:V, reg i5:*, reg i6:V, reg r7:V, reg i7:*, reg i8:V, reg r8:V, reg running:*, reg running1:V, reg step:*, reg step1:V, reg r9:V, reg running2:*, reg running3:V, reg l1:*, reg c1:L, reg i10:I, reg running5:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i12:I, reg dx1:V, reg i13:*, reg i14:V, reg ___:cls, reg r10:V, reg totals:*, reg totals1:V |
    mkenv;
    st n = n;
    n1 = ld n;
    check L4() else D0();
  D0():
    deopt 0 [n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    n3 = ld n;
    check L5() else D1();
  D1():
    deopt 1 [n2, n3];
  L5():
    n4 = force? n3;
    checkMissing(n4);
    r = `+`(n2, n4);
    n5 = ld n;
    check L6() else D2();
  D2():
    deopt 3 [r, n5];
  L6():
    n6 = force? n5;
    checkMissing(n6);
    r1 = `+`(r, n6);
    st m = r1;
    st limit = 4;
    sym = ldf rep;
    base = ldf rep in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r3):
    st totals = r3;
    st running = 0.0;
    n7 = ld n;
    check L9() else D3();
  L7():
    rep = ldf rep in base;
    r4 = dyn rep(0.0, <sym limit>);
    goto L0(r4);
  L8():
    r2 = dyn base(0.0, <sym limit>);
    goto L0(r2);
  D3():
    deopt 17 [n7];
  L9():
    n8 = force? n7;
    checkMissing(n8);
    r5 = `+`(n8, 0);
    st value = r5;
    limit = ld limit;
    check L10() else D4();
  D4():
    deopt 23 [1, limit];
  L10():
    limit1 = force? limit;
    checkMissing(limit1);
    r6 = `:`(1, limit1);
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L11() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    value = ld value;
    check L12() else D5();
  L11():
    totals = ld totals;
    check L22() else D12();
  D5():
    deopt 26 [i2, value];
  D12():
    deopt 48 [totals];
  L12():
    value1 = force? value;
    checkMissing(value1);
    i5 = ld i;
    check L13() else D6();
  L22():
    totals1 = force? totals;
    checkMissing(totals1);
    popenv;
    return totals1;
  D6():
    deopt 27 [i2, value1, i5];
  L13():
    i6 = force? i5;
    checkMissing(i6);
    r7 = `+`(value1, i6);
    i7 = ld i;
    check L14() else D7();
  D7():
    deopt 29 [i2, r7, i7];
  L14():
    i8 = force? i7;
    checkMissing(i8);
    r8 = `*`(r7, i8);
    st step = r8;
    running = ld running;
    check L15() else D8();
  D8():
    deopt 33 [i2, running];
  L15():
    running1 = force? running;
    checkMissing(running1);
    step = ld step;
    check L16() else D9();
  D9():
    deopt 34 [i2, running1, step];
  L16():
    step1 = force? step;
    checkMissing(step1);
    r9 = `+`(running1, step1);
    st running = r9;
    running2 = ld running;
    check L17() else D10();
  D10():
    deopt 38 [i2, running2];
  L17():
    running3 = force? running2;
    checkMissing(running3);
    l1 = ld totals;
    c1 = `is.object`(l1);
    if c1 then L18() else L19(i2, running3, l1);
  L2(i12, dx1):
    st totals = dx1;
    goto L1(i12);
  L18():
    dr = tryDispatchBuiltin.0("[<-", l1, running3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(i2, running3, dr);
  L19(i10, running5, l3):
    i13 = ld i;
    check L21() else D11();
  D11():
    deopt 41 [i10, running5, l3, running3, i13];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L21():
    i14 = force? i13;
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l3, running3, i14);
    goto L2(i10, r10);
  }
}