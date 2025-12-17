fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `.addFunctionInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg dots:*, reg dots1:V, reg names:cls, reg r5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg dots2:*, reg dots3:V, reg c1:L, reg i6:I, reg dots5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg nm:*, reg nm1:V, reg __:cls, reg r6:V, reg l1:*, reg c2:L, reg i10:I, reg dx3:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx5:V, reg i12:I, reg dx7:V, reg nm2:*, reg nm3:V, reg ____:cls, reg r7:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st dots = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    list = ldf list;
    check L8() else D0();
  L7():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1(r4):
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L2(i);
  L8():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L9() else D1();
  L10():
    dots = ld dots;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym dots>);
    goto L1(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 8 [dots];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L14() else L5();
  L9():
    goto L0(r2);
  L12():
    dots1 = force? dots;
    checkMissing(dots1);
    names = ldf names in base;
    r5 = dyn names(dots1);
    check L13() else D3();
  D3():
    deopt 11 [r5];
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st nm = x;
    dots2 = ld dots;
    check L15() else D4();
  L13():
    goto L1(r5);
  L14():
    invisible.0();
    popenv;
    return i2;
  D4():
    deopt 12 [i2, dots2];
  L15():
    dots3 = force? dots2;
    checkMissing(dots3);
    c1 = `is.object`(dots3);
    if c1 then L16() else L17(i2, dots3);
  L3(i8, dx1):
    l1 = ld `.FunArgEnv`;
    c2 = `is.object`(l1);
    if c2 then L20() else L21(i8, dx1, l1);
  L16():
    dr = tryDispatchBuiltin.1("[[", dots3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(i2, dr);
  L17(i6, dots5):
    nm = ld nm;
    check L19() else D5();
  D5():
    deopt 14 [i6, dots5, nm];
  L4(i12, dx7):
    st `.FunArgEnv` = dx7;
    goto L2(i12);
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L19():
    nm1 = force? nm;
    __ = ldf `[[` in base;
    r6 = dyn __(dots5, nm1);
    goto L3(i6, r6);
  L20():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(i8, dx1, dr2);
  L21(i10, dx3, l3):
    nm2 = ld nm;
    check L23() else D6();
  D6():
    deopt 18 [i10, dx3, l3, dx1, nm2];
  L22():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L4(i8, dx5);
  L23():
    nm3 = force? nm2;
    ____ = ldf `[[<-` in base;
    r7 = dyn ____(l3, dx1, nm3);
    goto L4(i10, r7);
  }
}