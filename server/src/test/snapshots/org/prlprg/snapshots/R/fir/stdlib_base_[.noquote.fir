fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `[.noquote` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attributes:cls, reg r2:V, reg __:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg r8:*, reg r9:V, reg attributes1:cls, reg r10:V, reg attr:*, reg attr1:V, reg c:L, reg attr3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg attr6:V, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg attr9:V, reg r14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r15:V, reg attr12:V, reg r16:V, reg attr13:*, reg attr14:V, reg names:cls, reg r17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r18:V, reg attr17:V, reg r19:V, reg c1:cls, reg r20:V, reg match:cls, reg r21:V, reg is_na:cls, reg r22:V, reg __1:cls, reg r23:V, reg c2:cls, reg r24:V, reg l:*, reg attributes__:cls, reg r25:V, reg r26:*, reg r27:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf attributes;
    base = ldf attributes in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st attr = r1;
    __ = ldf `[` in base;
    r3 = dyn __(<lang unclass(x)>, <sym ...>);
    st r = r3;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L8():
    x1 = ld x;
    check L10() else D0();
  L9():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r5):
    l = ld r;
    attributes__ = ldf `attributes<-`;
    check L36() else D11();
  L10():
    x2 = force? x1;
    checkMissing(x2);
    attributes = ldf attributes in base;
    r2 = dyn attributes(x2);
    check L11() else D1();
  L12():
    sym2 = ldf attributes;
    base2 = ldf attributes in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L13():
    r4 = dyn base1(<lang attributes(r)>, <lang `[`(attr, is.na(match(names(attr), c("dim", "dimnames", "names"))))>);
    goto L1(r4);
  D1():
    deopt 5 [r2];
  D11():
    deopt 47 [r5, l, r5];
  L2(r7):
    attr = ld attr;
    check L18() else D4();
  L11():
    goto L0(r2);
  L14():
    r8 = ld r;
    check L16() else D2();
  L15():
    r6 = dyn base2(<sym r>);
    goto L2(r6);
  L36():
    r25 = dyn attributes__(l, NULL, r5);
    check L37() else D12();
  D2():
    deopt 14 [r8];
  D4():
    deopt 18 [attr];
  D12():
    deopt 49 [r5, r25];
  L16():
    r9 = force? r8;
    checkMissing(r9);
    attributes1 = ldf attributes in base;
    r10 = dyn attributes1(r9);
    check L17() else D3();
  L18():
    attr1 = force? attr;
    checkMissing(attr1);
    c = `is.object`(attr1);
    if c then L19() else L20(attr1);
  L37():
    st r = r25;
    r26 = ld r;
    check L38() else D13();
  D3():
    deopt 17 [r10];
  D13():
    deopt 51 [r26];
  L3(dx1):
    c2 = ldf c in base;
    r24 = dyn c2(r7, dx1);
    check L35() else D10();
  L17():
    goto L2(r10);
  L19():
    dr = tryDispatchBuiltin.1("[", attr1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(attr3):
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L38():
    r27 = force? r26;
    checkMissing(r27);
    popenv;
    return r27;
  D10():
    deopt 45 [r24];
  L4(attr6, r12):
    __1 = ldf `[` in base;
    r23 = dyn __1(attr6, r12);
    goto L3(r23);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L22():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L23():
    r11 = dyn base3(<lang match(names(attr), c("dim", "dimnames", "names"))>);
    goto L4(attr3, r11);
  L35():
    goto L1(r24);
  L5(attr9, r14):
    is_na = ldf `is.na` in base;
    r22 = dyn is_na(r14);
    check L34() else D9();
  L24():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L26() else L27();
  L25():
    r13 = dyn base4(<lang names(attr)>, <lang c("dim", "dimnames", "names")>);
    goto L5(attr3, r13);
  D9():
    deopt 42 [attr9, r22];
  L6(attr12, r16):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L30() else L31();
  L26():
    attr13 = ld attr;
    check L28() else D5();
  L27():
    r15 = dyn base5(<sym attr>);
    goto L6(attr3, r15);
  L34():
    goto L4(attr9, r22);
  D5():
    deopt 26 [attr3, attr13];
  L7(attr17, r19):
    match = ldf match in base;
    r21 = dyn match(r16, r19, NA_INT, NULL);
    check L33() else D8();
  L28():
    attr14 = force? attr13;
    checkMissing(attr14);
    names = ldf names in base;
    r17 = dyn names(attr14);
    check L29() else D6();
  L30():
    c1 = ldf c in base;
    r20 = dyn c1("dim", "dimnames", "names");
    check L32() else D7();
  L31():
    r18 = dyn base6("dim", "dimnames", "names");
    goto L7(attr12, r18);
  D6():
    deopt 29 [attr3, r17];
  D7():
    deopt 36 [attr12, r20];
  D8():
    deopt 40 [attr17, r21];
  L29():
    goto L6(attr3, r17);
  L32():
    goto L7(attr12, r20);
  L33():
    goto L5(attr17, r21);
  }
}