fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.list.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg length:cls, reg r4:V, reg vector:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg r8:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x5:V, reg x6:*, reg x7:V, reg c1:L, reg i6:I, reg x9:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r9:V, reg l1:*, reg c2:L, reg i12:I, reg dx3:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx5:V, reg i14:I, reg dx7:V, reg i15:*, reg i16:V, reg ____:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg x10:*, reg x11:V, reg names:cls, reg r15:V, reg c3:V, reg c4:L, reg res:*, reg res1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg r17:V, reg res2:*, reg res3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r18:V, reg r19:V, reg x12:*, reg x13:V, reg names1:cls, reg r20:V, reg names__:cls, reg r21:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf vector;
    base = ldf vector in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    st res = r1;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L12():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L13():
    r = dyn base("list", <lang length(x)>);
    goto L0(r);
  L1(r3):
    vector = ldf vector in base;
    r5 = dyn vector("list", r3);
    check L18() else D2();
  L2(r7):
    s = toForSeq(r7);
    l = length(s);
    i = 0;
    goto L3(i);
  L14():
    x1 = ld x;
    check L16() else D0();
  L15():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  L19():
    x3 = ld x;
    check L21() else D3();
  L20():
    r6 = dyn base2(<sym x>);
    goto L2(r6);
  D0():
    deopt 5 [x1];
  D2():
    deopt 10 [r5];
  D3():
    deopt 13 [x3];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L22() else L6();
  L16():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r4 = dyn length(x2);
    check L17() else D1();
  L18():
    goto L0(r5);
  L21():
    x4 = force? x3;
    checkMissing(x4);
    r8 = seq_along(x4);
    goto L2(r8);
  D1():
    deopt 8 [r4];
  L6():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    x6 = ld x;
    check L23() else D4();
  L17():
    goto L1(r4);
  L22():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  D4():
    deopt 16 [i2, x6];
  L7(r12):
    c4 = `as.logical`(r12);
    if c4 then L38() else L9();
  L23():
    x7 = force? x6;
    checkMissing(x7);
    c1 = `is.object`(x7);
    if c1 then L24() else L25(i2, x7);
  L32():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L33():
    r11 = dyn base3(<lang names(x)>);
    goto L7(r11);
  L4(i8, dx1):
    l1 = ld res;
    c2 = `is.object`(l1);
    if c2 then L28() else L29(i8, dx1, l1);
  L8(r14):
    c3 = `==`(r14, NULL);
    goto L7(c3);
  L9():
    sym5 = ldf `names<-`;
    base5 = ldf `names<-` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  L24():
    dr = tryDispatchBuiltin.1("[[", x7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(i2, dr);
  L25(i6, x9):
    i9 = ld i;
    check L27() else D5();
  L34():
    x10 = ld x;
    check L36() else D7();
  L35():
    r13 = dyn base4(<sym x>);
    goto L8(r13);
  L38():
    res = ld res;
    check L39() else D9();
  D5():
    deopt 18 [i6, x9, i9];
  D7():
    deopt 32 [x10];
  D9():
    deopt 37 [res];
  L5(i14, dx7):
    st res = dx7;
    goto L3(i14);
  L10(r17):
    popenv;
    return r17;
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L27():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r9 = dyn __(x9, i10);
    goto L4(i6, r9);
  L28():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(i8, dx1, dr2);
  L29(i12, dx3, l3):
    i15 = ld i;
    check L31() else D6();
  L36():
    x11 = force? x10;
    checkMissing(x11);
    names = ldf names in base;
    r15 = dyn names(x11);
    check L37() else D8();
  L39():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  L41():
    res2 = ld res;
    check L43() else D10();
  L42():
    r16 = dyn base5(<sym res>, <lang names(x)>);
    goto L10(r16);
  D6():
    deopt 22 [i12, dx3, l3, dx1, i15];
  D8():
    deopt 35 [r15];
  D10():
    deopt 41 [res2];
  L30():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L5(i8, dx5);
  L31():
    i16 = force? i15;
    ____ = ldf `[[<-` in base;
    r10 = dyn ____(l3, dx1, i16);
    goto L5(i12, r10);
  L37():
    goto L8(r15);
  L43():
    res3 = force? res2;
    checkMissing(res3);
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L44() else L45();
  L11(r19):
    names__ = ldf `names<-` in base;
    r21 = dyn names__(res3, r19);
    check L48() else D13();
  L44():
    x12 = ld x;
    check L46() else D11();
  L45():
    r18 = dyn base6(<sym x>);
    goto L11(r18);
  D11():
    deopt 45 [x12];
  D13():
    deopt 50 [r21];
  L46():
    x13 = force? x12;
    checkMissing(x13);
    names1 = ldf names in base;
    r20 = dyn names1(x13);
    check L47() else D12();
  L48():
    goto L10(r21);
  D12():
    deopt 48 [r20];
  L47():
    goto L11(r20);
  }
}