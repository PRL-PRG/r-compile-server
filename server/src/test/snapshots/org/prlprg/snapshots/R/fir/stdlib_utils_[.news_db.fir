fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3740896376;
    st `[.news_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3740896376(x, i, j, drop) {
  (reg x:*, reg i:*, reg j:*, reg drop:*) -+> V { var x:*, var i:*, var j:*, var drop:*, reg NextMethod:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg y:*, reg y1:V, reg inherits:cls, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg missing:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c14:L, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg c17:L, reg r11:V, reg x1:*, reg x2:V, reg attr:cls, reg r12:V, reg c18:V, reg r13:V, reg c19:L, reg c20:V, reg c22:L, reg bad:*, reg bad1:V, reg c23:L, reg bad3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r14:V, reg l:*, reg attr__:cls, reg r15:V, reg y2:*, reg y3:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st drop = drop;
    NextMethod = ldf NextMethod;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    r = dyn NextMethod();
    check L10() else D1();
  D1():
    deopt 2 [r];
  L10():
    st y = r;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r2):
    c = `as.logical`(r2);
    if c then L15() else L1(c);
  L11():
    y = ld y;
    check L13() else D2();
  L12():
    r1 = dyn base(<sym y>, "news_db");
    goto L0(r1);
  D2():
    deopt 6 [y];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L19() else L3(c9);
  L13():
    y1 = force? y;
    checkMissing(y1);
    inherits = ldf inherits in base;
    r3 = dyn inherits(y1, "news_db", FALSE);
    check L14() else D3();
  L15():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D3():
    deopt 11 [r3];
  L2(c5, r5):
    r7 = `!`(r5);
    c6 = `as.logical`(r7);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3(c11):
    c22 = `as.logical`(c11);
    if c22 then L27() else L6();
  L14():
    goto L0(r3);
  L16():
    missing = ldf missing in base;
    r6 = dyn missing(<sym i>);
    goto L2(c, r6);
  L17():
    r4 = dyn base1(<sym i>);
    goto L2(c, r4);
  L19():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L4(c14, r9):
    r13 = `!`(r9);
    c19 = `as.logical`(r13);
    c20 = `&&`(c14, c19);
    goto L3(c20);
  L6():
    goto L8();
  L8():
    y2 = ld y;
    check L36() else D10();
  L20():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L21():
    r8 = dyn base2(<lang `<-`(bad, attr(x, "bad"))>);
    goto L4(c9, r8);
  L27():
    bad = ld bad;
    check L28() else D6();
  D6():
    deopt 29 [bad];
  D10():
    deopt 42 [y2];
  L5(c17, r11):
    st bad = r11;
    c18 = `==`(r11, NULL);
    goto L4(c17, c18);
  L22():
    x1 = ld x;
    check L24() else D4();
  L23():
    r10 = dyn base3(<sym x>, "bad");
    goto L5(c9, r10);
  L28():
    bad1 = force? bad;
    checkMissing(bad1);
    c23 = `is.object`(bad1);
    if c23 then L29() else L30(bad1);
  L36():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D4():
    deopt 20 [c9, x1];
  L7(dx1):
    l = ld y;
    attr__ = ldf `attr<-`;
    check L33() else D8();
  L24():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r12 = dyn attr(x2, "bad");
    check L25() else D5();
  L29():
    dr = tryDispatchBuiltin.1("[", bad1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(bad3):
    i1 = ld i;
    check L32() else D7();
  D5():
    deopt 24 [c9, r12];
  D7():
    deopt 31 [bad3, i1];
  D8():
    deopt 35 [dx1, l, dx1];
  L25():
    goto L5(c9, r12);
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L32():
    i2 = force? i1;
    __ = ldf `[` in base;
    r14 = dyn __(bad3, i2);
    goto L7(r14);
  L33():
    r15 = dyn attr__(l, NULL, "bad", dx1);
    check L34() else D9();
  D9():
    deopt 38 [dx1, r15];
  L34():
    st y = r15;
    goto L8();
  }
}