fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg l:*, reg c1:L, reg r7:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg l3:*, reg c3:L, reg r16:V, reg l6:*, reg r17:V, reg l7:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r20:V, reg l9:*, reg r21:V, reg dx3:V, reg __:cls, reg r22:V, reg names__:cls, reg r23:V, reg c4:L, reg r25:V, reg l11:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ____1:cls, reg r28:V, reg b:*, reg b1:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st b = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L6():
    list = ldf list in base;
    r2 = dyn list();
    check L8() else D0();
  L7():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r4):
    l = ld b;
    c1 = `is.object`(l);
    if c1 then L12() else L13(r4, l);
  L8():
    goto L0(r2);
  L9():
    c = ldf c in base;
    r5 = dyn c(1.0, 2.0, 3.0);
    check L11() else D1();
  L10():
    r3 = dyn base1(1.0, 2.0, 3.0);
    goto L1(r3);
  D1():
    deopt 11 [r5];
  L2(dx1):
    st b = dx1;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L11():
    goto L1(r5);
  L12():
    dr = tryDispatchBuiltin.0("[[<-", l, r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(r4, dr);
  L13(r7, l2):
    ____ = ldf `[[<-` in base;
    r10 = dyn ____(l2, r4, 1.0);
    goto L2(r10);
  L3(r12):
    l3 = ld b;
    c3 = `is.object`(l3);
    if c3 then L18() else L19(r12, l3, r12, l3);
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L15():
    c2 = ldf c in base;
    r13 = dyn c2("x", "y", "z");
    check L17() else D2();
  L16():
    r11 = dyn base2("x", "y", "z");
    goto L3(r11);
  D2():
    deopt 23 [r13];
  L4(r20, l9, r21, dx3):
    names__ = ldf `names<-`;
    check L21() else D3();
  L17():
    goto L3(r13);
  L18():
    dr2 = tryDispatchBuiltin.1("[[", l3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(r12, l3, r12, dr2);
  L19(r16, l6, r17, l7):
    __ = ldf `[[` in base;
    r22 = dyn __(l7, 1.0);
    goto L4(r16, l6, r17, r22);
  D3():
    deopt 30 [r20, l9, dx3, r21];
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(r12, l3, r12, dx2);
  L21():
    r23 = dyn names__(dx3, NULL, r21);
    check L22() else D4();
  D4():
    deopt 32 [r20, l9, r23];
  L22():
    c4 = `is.object`(l9);
    if c4 then L23() else L24(r20, l9);
  L5(dx5):
    st b = dx5;
    b = ld b;
    check L26() else D5();
  L23():
    dr4 = tryDispatchBuiltin.0("[[<-", l9, r23);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L25() else L24(r20, dr4);
  L24(r25, l11):
    ____1 = ldf `[[<-` in base;
    r28 = dyn ____1(l11, r23, 1.0);
    goto L5(r28);
  D5():
    deopt 37 [b];
  L25():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L26():
    b1 = force? b;
    checkMissing(b1);
    popenv;
    return b1;
  }
}