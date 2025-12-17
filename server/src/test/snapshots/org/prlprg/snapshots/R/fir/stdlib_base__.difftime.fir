fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2136888366;
    st `/.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2136888366(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e3:*, reg e4:V, reg inherits:cls, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg _difftime:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg e5:*, reg e6:V, reg unclass:cls, reg r7:V, reg e7:*, reg e8:V, reg r8:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg e9:*, reg e10:V, reg attr:cls, reg r12:V, reg p1:p(V +), reg r14:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    e3 = ld e2;
    check L5() else D0();
  L4():
    r = dyn base(<sym e2>, "difftime");
    goto L0(r);
  D0():
    deopt 2 [e3];
  L1():
    goto L2();
  L2():
    _difftime = ldf `.difftime`;
    check L11() else D4();
  L5():
    e4 = force? e3;
    checkMissing(e4);
    inherits = ldf inherits in base;
    r2 = dyn inherits(e4, "difftime", FALSE);
    check L6() else D1();
  L7():
    stop = ldf stop;
    check L8() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  L6():
    goto L0(r2);
  L8():
    r3 = dyn stop("second argument of / cannot be a \"difftime\" object");
    check L9() else D3();
  L11():
    p = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      e7 = ld e2;
      e8 = force? e7;
      checkMissing(e8);
      r8 = `/`(r6, e8);
      return r8;
    L1():
      e5 = ld e1;
      e6 = force? e5;
      checkMissing(e6);
      unclass = ldf unclass in base;
      r7 = dyn unclass(e6);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym e1>);
      goto L0(r5);
    };
    p1 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      e9 = ld e1;
      e10 = force? e9;
      checkMissing(e10);
      attr = ldf attr in base;
      r12 = dyn attr(e10, "units");
      goto L0(r12);
    L2():
      r10 = dyn base2(<sym e1>, "units");
      goto L0(r10);
    };
    r14 = dyn _difftime(p, p1);
    check L12() else D5();
  D3():
    deopt 11 [r3];
  D5():
    deopt 18 [r14];
  L9():
    goto L2();
  L12():
    popenv;
    return r14;
  }
}