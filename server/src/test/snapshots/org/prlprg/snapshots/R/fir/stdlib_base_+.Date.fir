fun main() {
  () -+> V { reg r:cls, reg l:*, reg ___:cls, reg r1:V |
    mkenv;
    r = clos inner4284372013;
    l = ld `.Date`;
    ___ = ldf `+<-`;
    check L0() else D0();
  D0():
    deopt 3 [r, l, r];
  L0():
    r1 = dyn ___(l, NULL, r);
    check L1() else D1();
  D1():
    deopt 5 [r, r1];
  L1():
    st `.Date` = r1;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4284372013(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg nargs:cls, reg r3:V, reg r4:V, reg c:L, reg e3:*, reg e4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg e5:*, reg e6:V, reg inherits:cls, reg r9:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c6:L, reg r11:V, reg e7:*, reg e8:V, reg inherits1:cls, reg r12:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg e9:*, reg e10:V, reg inherits2:cls, reg r17:V, reg c11:L, reg coerceTimeUnit:cls, reg e11:*, reg e12:V, reg p:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg e13:*, reg e14:V, reg inherits3:cls, reg r23:V, reg c12:L, reg coerceTimeUnit1:cls, reg e15:*, reg e16:V, reg p1:p(V +), reg r25:V, reg _Date:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg e17:*, reg e18:V, reg unclass:cls, reg r29:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg r34:V, reg e19:*, reg e20:V, reg unclass1:cls, reg r35:V, reg r36:V, reg p2:p(V +), reg r38:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    r = clos inner2501545716;
    st coerceTimeUnit = r;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r2):
    r4 = `==`(r2, 1);
    c = `as.logical`(r4);
    if c then L17() else L1();
  L14():
    nargs = ldf nargs in base;
    r3 = dyn nargs();
    check L16() else D0();
  L15():
    r1 = dyn base();
    goto L0(r1);
  D0():
    deopt 6 [r3];
  L1():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L16():
    goto L0(r3);
  L17():
    e3 = ld e1;
    check L18() else D1();
  D1():
    deopt 9 [e3];
  L3(r8):
    c1 = `as.logical`(r8);
    if c1 then L25() else L4(c1);
  L18():
    e4 = force? e3;
    checkMissing(e4);
    popenv;
    return e4;
  L21():
    e5 = ld e1;
    check L23() else D2();
  L22():
    r7 = dyn base1(<sym e1>, "Date");
    goto L3(r7);
  D2():
    deopt 16 [e5];
  L4(c3):
    c10 = `as.logical`(c3);
    if c10 then L31() else L6();
  L23():
    e6 = force? e5;
    checkMissing(e6);
    inherits = ldf inherits in base;
    r9 = dyn inherits(e6, "Date", FALSE);
    check L24() else D3();
  L25():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  D3():
    deopt 21 [r9];
  L5(c6, r11):
    c7 = `as.logical`(r11);
    c8 = `&&`(c6, c7);
    goto L4(c8);
  L6():
    goto L7();
  L7():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L24():
    goto L3(r9);
  L26():
    e7 = ld e2;
    check L28() else D4();
  L27():
    r10 = dyn base2(<sym e2>, "Date");
    goto L5(c1, r10);
  L31():
    stop = ldf stop;
    check L32() else D6();
  D4():
    deopt 24 [c1, e7];
  D6():
    deopt 32 [];
  L8(r16):
    c11 = `as.logical`(r16);
    if c11 then L39() else L9();
  L28():
    e8 = force? e7;
    checkMissing(e8);
    inherits1 = ldf inherits in base;
    r12 = dyn inherits1(e8, "Date", FALSE);
    check L29() else D5();
  L32():
    r13 = dyn stop("binary + is not defined for \"Date\" objects");
    check L33() else D7();
  L35():
    e9 = ld e1;
    check L37() else D8();
  L36():
    r15 = dyn base3(<sym e1>, "difftime");
    goto L8(r15);
  D5():
    deopt 29 [c1, r12];
  D7():
    deopt 34 [r13];
  D8():
    deopt 39 [e9];
  L9():
    goto L10();
  L10():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L29():
    goto L5(c1, r12);
  L33():
    goto L7();
  L37():
    e10 = force? e9;
    checkMissing(e10);
    inherits2 = ldf inherits in base;
    r17 = dyn inherits2(e10, "difftime", FALSE);
    check L38() else D9();
  L39():
    coerceTimeUnit = ldf coerceTimeUnit;
    check L40() else D10();
  D9():
    deopt 44 [r17];
  D10():
    deopt 46 [];
  L11(r22):
    c12 = `as.logical`(r22);
    if c12 then L47() else L12();
  L38():
    goto L8(r17);
  L40():
    p = prom<V +>{
      e11 = ld e1;
      e12 = force? e11;
      checkMissing(e12);
      return e12;
    };
    r19 = dyn coerceTimeUnit(p);
    check L41() else D11();
  L43():
    e13 = ld e2;
    check L45() else D12();
  L44():
    r21 = dyn base4(<sym e2>, "difftime");
    goto L11(r21);
  D11():
    deopt 48 [r19];
  D12():
    deopt 54 [e13];
  L12():
    goto L13();
  L13():
    _Date = ldf `.Date`;
    check L51() else D16();
  L41():
    st e1 = r19;
    goto L10();
  L45():
    e14 = force? e13;
    checkMissing(e14);
    inherits3 = ldf inherits in base;
    r23 = dyn inherits3(e14, "difftime", FALSE);
    check L46() else D13();
  L47():
    coerceTimeUnit1 = ldf coerceTimeUnit;
    check L48() else D14();
  D13():
    deopt 59 [r23];
  D14():
    deopt 61 [];
  D16():
    deopt 68 [];
  L46():
    goto L11(r23);
  L48():
    p1 = prom<V +>{
      e15 = ld e2;
      e16 = force? e15;
      checkMissing(e16);
      return e16;
    };
    r25 = dyn coerceTimeUnit1(p1);
    check L49() else D15();
  L51():
    p2 = prom<V +>{
      sym5 = ldf unclass;
      base5 = ldf unclass in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r28):
      sym6 = ldf unclass;
      base6 = ldf unclass in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L2():
      e17 = ld e1;
      e18 = force? e17;
      checkMissing(e18);
      unclass = ldf unclass in base;
      r29 = dyn unclass(e18);
      goto L0(r29);
    L3():
      r27 = dyn base5(<sym e1>);
      goto L0(r27);
    L1(r33, r34):
      r36 = `+`(r33, r34);
      return r36;
    L4():
      e19 = ld e2;
      e20 = force? e19;
      checkMissing(e20);
      unclass1 = ldf unclass in base;
      r35 = dyn unclass1(e20);
      goto L1(r28, r35);
    L5():
      r32 = dyn base6(<sym e2>);
      goto L1(r28, r32);
    };
    r38 = dyn _Date(p2);
    check L52() else D17();
  D15():
    deopt 63 [r25];
  D17():
    deopt 70 [r38];
  L49():
    st e2 = r25;
    goto L13();
  L52():
    popenv;
    return r38;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg as_vector:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg round:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st x = x;
    as_vector = ldf `as.vector`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf round;
      base = ldf round in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      round = ldf round in base;
      r2 = dyn round(<lang switch(attr(x, "units"), secs=`/`(x, 86400.0), mins=`/`(x, 1440.0), hours=`/`(x, 24.0), days=x, weeks=`*`(7.0, x))>);
      goto L0(r2);
    L2():
      r = dyn base(<lang switch(attr(x, "units"), secs=`/`(x, 86400.0), mins=`/`(x, 1440.0), hours=`/`(x, 24.0), days=x, weeks=`*`(7.0, x))>);
      goto L0(r);
    };
    r4 = dyn as_vector(p);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}