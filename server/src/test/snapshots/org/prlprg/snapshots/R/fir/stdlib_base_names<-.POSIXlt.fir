fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1411039386`;
    st `.POSIXlt` = r;
    st names = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1411039386`(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg length1:cls, reg r9:V, reg r10:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg yr:*, reg yr1:V, reg n:*, reg n1:V, reg rep_len:cls, reg r13:V, reg l:*, reg c2:L, reg r15:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r17:V, reg dx3:V, reg r18:V, reg value1:*, reg value2:V, reg l3:*, reg c3:L, reg value5:V, reg l6:*, reg value6:V, reg l7:*, reg dr4:V, reg dc2:L, reg dx4:V, reg value9:V, reg l9:*, reg value10:V, reg dx5:V, reg r20:V, reg names__:cls, reg r21:V, reg c4:L, reg value12:V, reg l11:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r22:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    st value = value;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<lang `<-`(yr, `$`(x, year))>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r7, r8):
    st n = r8;
    r10 = `<`(r7, r8);
    c1 = `as.logical`(r10);
    if c1 then L17() else L2();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L9() else L10(x2);
  L13():
    x5 = ld x;
    check L15() else D2();
  L14():
    r6 = dyn base1(<sym x>);
    goto L1(r1, r6);
  D2():
    deopt 9 [r1, x5];
  L2():
    goto L4();
  L4():
    value1 = ld value;
    check L28() else D7();
  L8(dx1):
    st yr = dx1;
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L12() else D1();
  L9():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(x4):
    r2 = `$`(x4, <sym year>);
    goto L8(r2);
  L15():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r9 = dyn length1(x6);
    check L16() else D3();
  L17():
    sym2 = ldf rep_len;
    base2 = ldf rep_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  D1():
    deopt 7 [r3];
  D3():
    deopt 12 [r1, r9];
  D7():
    deopt 28 [value1];
  L3(r12):
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L24() else L25(r12, l);
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    goto L0(r3);
  L16():
    goto L1(r1, r9);
  L18():
    yr = ld yr;
    check L20() else D4();
  L19():
    r11 = dyn base2(<sym yr>, <sym n>);
    goto L3(r11);
  L28():
    value2 = force? value1;
    checkMissing(value2);
    l3 = ld x;
    c3 = `is.object`(l3);
    if c3 then L30() else L31(value2, l3, value2, l3);
  D4():
    deopt 17 [yr];
  L20():
    yr1 = force? yr;
    checkMissing(yr1);
    n = ld n;
    check L21() else D5();
  L23(r17, dx3):
    st x = dx3;
    goto L4();
  L24():
    dr2 = tryDispatchBuiltin.0("$<-", l, r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(r12, dr2);
  L25(r15, l2):
    r18 = `$<-`(l2, <sym year>, r12);
    goto L23(r15, r18);
  L29(value9, l9, value10, dx5):
    names__ = ldf `names<-`;
    check L33() else D8();
  L30():
    dr4 = tryDispatchBuiltin.1("$", l3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L32() else L31(value2, l3, value2, dr4);
  L31(value5, l6, value6, l7):
    r20 = `$`(l7, <sym year>);
    goto L29(value5, l6, value6, r20);
  D5():
    deopt 19 [n];
  D8():
    deopt 34 [value9, l9, dx5, value10];
  L21():
    n1 = force? n;
    checkMissing(n1);
    rep_len = ldf rep_len in base;
    r13 = dyn rep_len(yr1, n1);
    check L22() else D6();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(r12, dx2);
  L32():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L29(value2, l3, value2, dx4);
  L33():
    r21 = dyn names__(dx5, NULL, value10);
    check L34() else D9();
  D6():
    deopt 22 [r13];
  D9():
    deopt 36 [value9, l9, r21];
  L22():
    goto L3(r13);
  L34():
    c4 = `is.object`(l9);
    if c4 then L36() else L37(value9, l9);
  L35(dx7):
    st x = dx7;
    x7 = ld x;
    check L39() else D10();
  L36():
    dr6 = tryDispatchBuiltin.0("$<-", l9, r21);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L38() else L37(value9, dr6);
  L37(value12, l11):
    r22 = `$<-`(l11, <sym year>, r21);
    goto L35(r22);
  D10():
    deopt 39 [x7];
  L38():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L35(dx6);
  L39():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  }
}