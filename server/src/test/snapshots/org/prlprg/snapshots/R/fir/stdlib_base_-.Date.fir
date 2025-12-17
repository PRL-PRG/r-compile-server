fun main() {
  () -+> V { reg r:cls, reg l:*, reg ___:cls, reg r1:V |
    mkenv;
    r = clos inner4284372013;
    l = ld `.Date`;
    ___ = ldf `-<-`;
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
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg e3:*, reg e4:V, reg inherits:cls, reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg nargs:cls, reg r9:V, reg r10:V, reg c1:L, reg stop1:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg e5:*, reg e6:V, reg inherits1:cls, reg r15:V, reg c2:L, reg difftime:cls, reg e7:*, reg e8:V, reg p:p(V +), reg e9:*, reg e10:V, reg p1:p(V +), reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg e11:*, reg e12:V, reg inherits2:cls, reg r23:V, reg c3:L, reg coerceTimeUnit:cls, reg e13:*, reg e14:V, reg p2:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg e15:*, reg e16:V, reg attr:cls, reg r31:V, reg c4:V, reg r32:V, reg c5:L, reg stop2:cls, reg r33:V, reg _Date:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg as_Date:cls, reg e17:*, reg e18:V, reg p3:p(V +), reg r38:V, reg unclass:cls, reg r39:V, reg e19:*, reg e20:V, reg r40:V, reg p4:p(V +), reg r42:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    r = clos inner2501545716;
    st coerceTimeUnit = r;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L20() else L1();
  L16():
    e3 = ld e1;
    check L18() else D0();
  L17():
    r1 = dyn base(<sym e1>, "Date");
    goto L0(r1);
  D0():
    deopt 5 [e3];
  L1():
    goto L2();
  L2():
    sym1 = ldf nargs;
    base1 = ldf nargs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L18():
    e4 = force? e3;
    checkMissing(e4);
    inherits = ldf inherits in base;
    r3 = dyn inherits(e4, "Date", FALSE);
    check L19() else D1();
  L20():
    stop = ldf stop;
    check L21() else D2();
  D1():
    deopt 10 [r3];
  D2():
    deopt 13 [];
  L3(r8):
    r10 = `==`(r8, 1);
    c1 = `as.logical`(r10);
    if c1 then L27() else L4();
  L19():
    goto L0(r3);
  L21():
    r5 = dyn stop("can only subtract from \"Date\" objects");
    check L22() else D3();
  L24():
    nargs = ldf nargs in base;
    r9 = dyn nargs();
    check L26() else D4();
  L25():
    r7 = dyn base1();
    goto L3(r7);
  D3():
    deopt 15 [r5];
  D4():
    deopt 21 [r9];
  L4():
    goto L5();
  L5():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L22():
    goto L2();
  L26():
    goto L3(r9);
  L27():
    stop1 = ldf stop;
    check L28() else D5();
  D5():
    deopt 25 [];
  L6(r14):
    c2 = `as.logical`(r14);
    if c2 then L35() else L7();
  L28():
    r11 = dyn stop1("unary - is not defined for \"Date\" objects");
    check L29() else D6();
  L31():
    e5 = ld e2;
    check L33() else D7();
  L32():
    r13 = dyn base2(<sym e2>, "Date");
    goto L6(r13);
  D6():
    deopt 27 [r11];
  D7():
    deopt 32 [e5];
  L7():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L29():
    goto L5();
  L33():
    e6 = force? e5;
    checkMissing(e6);
    inherits1 = ldf inherits in base;
    r15 = dyn inherits1(e6, "Date", FALSE);
    check L34() else D8();
  L35():
    difftime = ldf difftime;
    check L36() else D9();
  D8():
    deopt 37 [r15];
  D9():
    deopt 39 [];
  L9(r22):
    c3 = `as.logical`(r22);
    if c3 then L44() else L10();
  L34():
    goto L6(r15);
  L36():
    p = prom<V +>{
      e7 = ld e1;
      e8 = force? e7;
      checkMissing(e8);
      return e8;
    };
    p1 = prom<V +>{
      e9 = ld e2;
      e10 = force? e9;
      checkMissing(e10);
      return e10;
    };
    r18 = dyn difftime[, , units](p, p1, "days");
    check L37() else D10();
  L40():
    e11 = ld e2;
    check L42() else D11();
  L41():
    r21 = dyn base3(<sym e2>, "difftime");
    goto L9(r21);
  D10():
    deopt 44 [r18];
  D11():
    deopt 50 [e11];
  L10():
    goto L11();
  L11():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L37():
    popenv;
    return r18;
  L42():
    e12 = force? e11;
    checkMissing(e12);
    inherits2 = ldf inherits in base;
    r23 = dyn inherits2(e12, "difftime", FALSE);
    check L43() else D12();
  L44():
    coerceTimeUnit = ldf coerceTimeUnit;
    check L45() else D13();
  D12():
    deopt 55 [r23];
  D13():
    deopt 57 [];
  L12(r28):
    r32 = `!`(r28);
    c5 = `as.logical`(r32);
    if c5 then L54() else L14();
  L43():
    goto L9(r23);
  L45():
    p2 = prom<V +>{
      e13 = ld e2;
      e14 = force? e13;
      checkMissing(e14);
      return e14;
    };
    r25 = dyn coerceTimeUnit(p2);
    check L46() else D14();
  L48():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L49():
    r27 = dyn base4(<lang attr(e2, "class")>);
    goto L12(r27);
  D14():
    deopt 59 [r25];
  L13(r30):
    c4 = `==`(r30, NULL);
    goto L12(c4);
  L14():
    goto L15();
  L15():
    _Date = ldf `.Date`;
    check L58() else D19();
  L46():
    st e2 = r25;
    goto L11();
  L50():
    e15 = ld e2;
    check L52() else D15();
  L51():
    r29 = dyn base5(<sym e2>, "class");
    goto L13(r29);
  L54():
    stop2 = ldf stop;
    check L55() else D17();
  D15():
    deopt 66 [e15];
  D17():
    deopt 74 [];
  D19():
    deopt 80 [];
  L52():
    e16 = force? e15;
    checkMissing(e16);
    attr = ldf attr in base;
    r31 = dyn attr(e16, "class");
    check L53() else D16();
  L55():
    r33 = dyn stop2("can only subtract numbers from \"Date\" objects");
    check L56() else D18();
  L58():
    p4 = prom<V +>{
      sym6 = ldf unclass;
      base6 = ldf unclass in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r36):
      e19 = ld e2;
      e20 = force? e19;
      checkMissing(e20);
      r40 = `-`(r36, e20);
      return r40;
    L1():
      as_Date = ldf `as.Date`;
      p3 = prom<V +>{
        e17 = ld e1;
        e18 = force? e17;
        checkMissing(e18);
        return e18;
      };
      r38 = dyn as_Date(p3);
      unclass = ldf unclass in base;
      r39 = dyn unclass(r38);
      goto L0(r39);
    L2():
      r35 = dyn base6(<lang as.Date(e1)>);
      goto L0(r35);
    };
    r42 = dyn _Date(p4);
    check L59() else D20();
  D16():
    deopt 70 [r31];
  D18():
    deopt 76 [r33];
  D20():
    deopt 82 [r42];
  L53():
    goto L13(r31);
  L56():
    goto L15();
  L59():
    popenv;
    return r42;
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