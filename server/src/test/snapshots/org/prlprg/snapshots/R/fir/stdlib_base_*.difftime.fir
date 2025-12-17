fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4284372013;
    st `*.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4284372013(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e3:*, reg e4:V, reg inherits:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e5:*, reg e6:V, reg inherits1:cls, reg r5:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg e7:*, reg e8:V, reg inherits2:cls, reg r10:V, reg c10:L, reg e9:*, reg e10:V, reg e11:*, reg e12:V, reg tmp:*, reg tmp1:V, reg _difftime:cls, reg e13:*, reg e14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg e17:V, reg r12:V, reg e18:*, reg e19:V, reg unclass:cls, reg r13:V, reg r14:V, reg p:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg e20:*, reg e21:V, reg attr:cls, reg r18:V, reg p1:p(V +), reg r20:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    c = `as.logical`(r1);
    if c then L12() else L1(c);
  L8():
    e3 = ld e1;
    check L10() else D0();
  L9():
    r = dyn base(<sym e1>, "difftime");
    goto L0(r);
  D0():
    deopt 2 [e3];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L18() else L3();
  L10():
    e4 = force? e3;
    checkMissing(e4);
    inherits = ldf inherits in base;
    r2 = dyn inherits(e4, "difftime", FALSE);
    check L11() else D1();
  L12():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  D1():
    deopt 7 [r2];
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    goto L4();
  L4():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L11():
    goto L0(r2);
  L13():
    e5 = ld e2;
    check L15() else D2();
  L14():
    r3 = dyn base1(<sym e2>, "difftime");
    goto L2(c, r3);
  L18():
    stop = ldf stop;
    check L19() else D4();
  D2():
    deopt 10 [c, e5];
  D4():
    deopt 18 [];
  L5(r9):
    c10 = `as.logical`(r9);
    if c10 then L26() else L6();
  L15():
    e6 = force? e5;
    checkMissing(e6);
    inherits1 = ldf inherits in base;
    r5 = dyn inherits1(e6, "difftime", FALSE);
    check L16() else D3();
  L19():
    r6 = dyn stop("both arguments of * cannot be \"difftime\" objects");
    check L20() else D5();
  L22():
    e7 = ld e2;
    check L24() else D6();
  L23():
    r8 = dyn base2(<sym e2>, "difftime");
    goto L5(r8);
  D3():
    deopt 15 [c, r5];
  D5():
    deopt 20 [r6];
  D6():
    deopt 25 [e7];
  L6():
    goto L7();
  L7():
    _difftime = ldf `.difftime`;
    check L31() else D11();
  L16():
    goto L2(c, r5);
  L20():
    goto L4();
  L24():
    e8 = force? e7;
    checkMissing(e8);
    inherits2 = ldf inherits in base;
    r10 = dyn inherits2(e8, "difftime", FALSE);
    check L25() else D7();
  L26():
    e9 = ld e1;
    check L27() else D8();
  D7():
    deopt 30 [r10];
  D8():
    deopt 31 [e9];
  D11():
    deopt 43 [];
  L25():
    goto L5(r10);
  L27():
    e10 = force? e9;
    checkMissing(e10);
    st tmp = e10;
    e11 = ld e2;
    check L28() else D9();
  L31():
    p = prom<V +>{
      e13 = ld e2;
      e14 = force? e13;
      checkMissing(e14);
      sym3 = ldf unclass;
      base3 = ldf unclass in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(e17, r12):
      r14 = `*`(e17, r12);
      return r14;
    L1():
      e18 = ld e1;
      e19 = force? e18;
      checkMissing(e19);
      unclass = ldf unclass in base;
      r13 = dyn unclass(e19);
      goto L0(e14, r13);
    L2():
      r11 = dyn base3(<sym e1>);
      goto L0(e14, r11);
    };
    p1 = prom<V +>{
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      e20 = ld e1;
      e21 = force? e20;
      checkMissing(e21);
      attr = ldf attr in base;
      r18 = dyn attr(e21, "units");
      goto L0(r18);
    L2():
      r16 = dyn base4(<sym e1>, "units");
      goto L0(r16);
    };
    r20 = dyn _difftime(p, p1);
    check L32() else D12();
  D9():
    deopt 34 [e11];
  D12():
    deopt 46 [r20];
  L28():
    e12 = force? e11;
    checkMissing(e12);
    st e1 = e12;
    tmp = ld tmp;
    check L29() else D10();
  L32():
    popenv;
    return r20;
  D10():
    deopt 37 [tmp];
  L29():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    st e2 = tmp1;
    goto L7();
  }
}