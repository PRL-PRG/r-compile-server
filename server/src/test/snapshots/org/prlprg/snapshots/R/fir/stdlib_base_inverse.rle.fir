fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `inverse.rle` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg c2:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c7:L, reg r4:V, reg x5:*, reg x6:V, reg c8:L, reg c10:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c12:L, reg dx3:V, reg r5:V, reg c13:V, reg c14:L, reg c15:V, reg c17:L, reg c18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c22:L, reg r7:V, reg le:*, reg le1:V, reg length:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c25:L, reg r12:V, reg r13:V, reg v:*, reg v1:V, reg length1:cls, reg r14:V, reg r15:V, reg c26:L, reg c27:V, reg c29:L, reg stop:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg v2:*, reg v3:V, reg le2:*, reg le3:V, reg rep_int:cls, reg r20:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L1(c2) else L16();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r = dyn base(<lang `<-`(le, `$`(x, lengths))>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c3):
    c17 = `as.logical`(c3);
    if c17 then L3(c17) else L25();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L13() else L14(x2);
  L16():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L2(c7, r4):
    c14 = `as.logical`(r4);
    c15 = `||`(c7, c14);
    goto L1(c15);
  L3(c18):
    c29 = `as.logical`(c18);
    if c29 then L35() else L6();
  L12(dx1):
    st le = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L13():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(x4):
    r2 = `$`(x4, <sym lengths>);
    goto L12(r2);
  L17():
    x5 = ld x;
    check L19() else D1();
  L18():
    r3 = dyn base1(<lang `<-`(v, `$`(x, values))>);
    goto L2(c2, r3);
  L25():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  D1():
    deopt 7 [c2, x5];
  L4(c22, r7):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L6():
    goto L7();
  L7():
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L19():
    x6 = force? x5;
    checkMissing(x6);
    c8 = `is.object`(x6);
    if c8 then L21() else L22(c2, x6);
  L26():
    le = ld le;
    check L28() else D2();
  L27():
    r6 = dyn base2(<sym le>);
    goto L4(c17, r6);
  L35():
    stop = ldf stop;
    check L36() else D6();
  D2():
    deopt 15 [c17, le];
  D6():
    deopt 27 [];
  L5(c25, r12, r13):
    r15 = `!=`(r12, r13);
    c26 = `as.logical`(r15);
    c27 = `||`(c25, c26);
    goto L3(c27);
  L8(r19):
    popenv;
    return r19;
  L20(c12, dx3):
    st v = dx3;
    c13 = `==`(dx3, NULL);
    goto L2(c12, c13);
  L21():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(c2, dr2);
  L22(c10, x8):
    r5 = `$`(x8, <sym values>);
    goto L20(c10, r5);
  L28():
    le1 = force? le;
    checkMissing(le1);
    length = ldf length in base;
    r8 = dyn length(le1);
    check L29() else D3();
  L30():
    v = ld v;
    check L32() else D4();
  L31():
    r11 = dyn base3(<sym v>);
    goto L5(c22, r7, r11);
  L36():
    r16 = dyn stop("invalid 'rle' structure");
    check L37() else D7();
  L39():
    v2 = ld v;
    check L41() else D8();
  L40():
    r18 = dyn base4(<sym v>, <sym le>);
    goto L8(r18);
  D3():
    deopt 18 [c17, r8];
  D4():
    deopt 20 [c22, r7, v];
  D7():
    deopt 29 [r16];
  D8():
    deopt 34 [v2];
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(c2, dx2);
  L29():
    goto L4(c17, r8);
  L32():
    v1 = force? v;
    checkMissing(v1);
    length1 = ldf length in base;
    r14 = dyn length1(v1);
    check L33() else D5();
  L37():
    goto L7();
  L41():
    v3 = force? v2;
    checkMissing(v3);
    le2 = ld le;
    check L42() else D9();
  D5():
    deopt 23 [c22, r7, r14];
  D9():
    deopt 36 [le2];
  L33():
    goto L5(c22, r7, r14);
  L42():
    le3 = force? le2;
    checkMissing(le3);
    rep_int = ldf `rep.int` in base;
    r20 = dyn rep_int(v3, le3);
    check L43() else D10();
  D10():
    deopt 39 [r20];
  L43():
    goto L8(r20);
  }
}