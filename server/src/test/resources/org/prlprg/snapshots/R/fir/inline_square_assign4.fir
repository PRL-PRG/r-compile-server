fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg list:cls, reg r5:V, reg l:*, reg c1:L, reg r8:R, reg l3:*, reg r9:R, reg l4:*, reg dr:V, reg dc:L, reg dx:V, reg r12:R, reg l6:*, reg r13:R, reg dx1:V, reg r14:V, reg c2:L, reg r16:R, reg l8:*, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg r18:R, reg l10:*, reg dx5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:R, reg l13:*, reg dx8:V, reg r25:R, reg r26:V, reg c3:cls, reg r27:V, reg r28:V, reg ___:cls, reg r29:V, reg c4:L, reg r31:R, reg l15:*, reg dr4:V, reg dc2:L, reg dx9:V, reg r33:R, reg dx10:V, reg r34:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st x = r1;
    l = ld x;
    c1 = `is.object`(l);
    if c1 then L11() else L12(1.0, l, 1.0, l);
  L4():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base[y](<lang c(0.0, 0.0, 0.0, 0.0)>);
    goto L0(r);
  L1(r3):
    list = ldf list in base;
    r5 = dyn list(r3);
    check L9() else D1();
  L6():
    c = ldf c in base;
    r4 = dyn c(0.0, 0.0, 0.0, 0.0);
    check L8() else D0();
  L7():
    r2 = dyn base1(0.0, 0.0, 0.0, 0.0);
    goto L1(r2);
  L10(r12, l6, r13, dx1):
    c2 = `is.object`(dx1);
    if c2 then L14() else L15(r12, l6, dx1);
  L11():
    dr = tryDispatchBuiltin.1("$", l);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(1.0, l, 1.0, dr);
  L12(r8, l3, r9, l4):
    r14 = `$`(l4, <sym y>);
    goto L10(r8, l3, r9, r14);
  D0():
    deopt 9 [r4];
  D1():
    deopt 12 [r5];
  L2(r18, l10, dx5):
    c4 = `is.object`(l10);
    if c4 then L21() else L22(r18, l10);
  L8():
    goto L1(r4);
  L9():
    goto L0(r5);
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(1.0, l, 1.0, dx);
  L14():
    dr2 = tryDispatchBuiltin.0("[<-", dx1, r13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(r12, l6, dr2);
  L15(r16, l8, dx3):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L3(r24, l13, dx8, r25, r26):
    r28 = `-`(<missing>, r26);
    ___ = ldf `[<-` in base;
    r29 = dyn ___(dx8, r25, r28);
    goto L2(r24, l13, r29);
  L16():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L2(r12, l6, dx4);
  L17():
    c3 = ldf c in base;
    r27 = dyn c3(1.0, 2.0);
    check L19() else D2();
  L18():
    r23 = dyn base2(1.0, 2.0);
    goto L3(r16, l8, dx3, r13, r23);
  L20(r33, dx10):
    st x = dx10;
    invisible.0();
    popenv;
    return r33;
  L21():
    dr4 = tryDispatchBuiltin.0("$<-", l10, dx5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L23() else L22(r18, dr4);
  L22(r31, l15):
    r34 = `$<-`(l15, <sym y>, dx5);
    goto L20(r31, r34);
  D2():
    deopt 25 [r16, l8, dx3, r13, r27];
  L19():
    goto L3(r16, l8, dx3, r13, r27);
  L23():
    dx9 = getTryDispatchBuiltinValue(dr4);
    goto L20(r18, dx9);
  }
}