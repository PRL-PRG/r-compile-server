fun main() {
  () -+> V { reg r:cls, reg l:*, reg ___:cls, reg r1:V |
    mkenv;
    r = clos inner2136888366;
    l = ld `.POSIXt`;
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
    st `.POSIXt` = r1;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2136888366(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg nargs:cls, reg r3:V, reg r4:V, reg c:L, reg e3:*, reg e4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg e5:*, reg e6:V, reg inherits:cls, reg r9:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c6:L, reg r11:V, reg e7:*, reg e8:V, reg inherits1:cls, reg r12:V, reg c7:L, reg c8:V, reg c10:L, reg stop:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg e9:*, reg e10:V, reg inherits2:cls, reg r17:V, reg c11:L, reg as_POSIXct:cls, reg e11:*, reg e12:V, reg p:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg e13:*, reg e14:V, reg inherits3:cls, reg r23:V, reg c12:L, reg as_POSIXct1:cls, reg e15:*, reg e16:V, reg p1:p(V +), reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg e17:*, reg e18:V, reg inherits4:cls, reg r29:V, reg c13:L, reg coerceTimeUnit:cls, reg e19:*, reg e20:V, reg p2:p(V +), reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg e21:*, reg e22:V, reg inherits5:cls, reg r35:V, reg c14:L, reg coerceTimeUnit1:cls, reg e23:*, reg e24:V, reg p3:p(V +), reg r37:V, reg _POSIXct:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg e25:*, reg e26:V, reg unclass:cls, reg r41:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg r46:V, reg e27:*, reg e28:V, reg unclass1:cls, reg r47:V, reg r48:V, reg p4:p(V +), reg _check_tzones:cls, reg e29:*, reg e30:V, reg p5:p(V +), reg e31:*, reg e32:V, reg p6:p(V +), reg r52:V, reg p7:p(V +), reg r54:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    r = clos inner354062069;
    st coerceTimeUnit = r;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r2):
    r4 = `==`(r2, 1);
    c = `as.logical`(r4);
    if c then L23() else L1();
  L20():
    nargs = ldf nargs in base;
    r3 = dyn nargs();
    check L22() else D0();
  L21():
    r1 = dyn base();
    goto L0(r1);
  D0():
    deopt 6 [r3];
  L1():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L22():
    goto L0(r3);
  L23():
    e3 = ld e1;
    check L24() else D1();
  D1():
    deopt 9 [e3];
  L3(r8):
    c1 = `as.logical`(r8);
    if c1 then L31() else L4(c1);
  L24():
    e4 = force? e3;
    checkMissing(e4);
    popenv;
    return e4;
  L27():
    e5 = ld e1;
    check L29() else D2();
  L28():
    r7 = dyn base1(<sym e1>, "POSIXt");
    goto L3(r7);
  D2():
    deopt 16 [e5];
  L4(c3):
    c10 = `as.logical`(c3);
    if c10 then L37() else L6();
  L29():
    e6 = force? e5;
    checkMissing(e6);
    inherits = ldf inherits in base;
    r9 = dyn inherits(e6, "POSIXt", FALSE);
    check L30() else D3();
  L31():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
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
    if guard3 then L41() else L42();
  L30():
    goto L3(r9);
  L32():
    e7 = ld e2;
    check L34() else D4();
  L33():
    r10 = dyn base2(<sym e2>, "POSIXt");
    goto L5(c1, r10);
  L37():
    stop = ldf stop;
    check L38() else D6();
  D4():
    deopt 24 [c1, e7];
  D6():
    deopt 32 [];
  L8(r16):
    c11 = `as.logical`(r16);
    if c11 then L45() else L9();
  L34():
    e8 = force? e7;
    checkMissing(e8);
    inherits1 = ldf inherits in base;
    r12 = dyn inherits1(e8, "POSIXt", FALSE);
    check L35() else D5();
  L38():
    r13 = dyn stop("binary '+' is not defined for \"POSIXt\" objects");
    check L39() else D7();
  L41():
    e9 = ld e1;
    check L43() else D8();
  L42():
    r15 = dyn base3(<sym e1>, "POSIXlt");
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
    if guard4 then L49() else L50();
  L35():
    goto L5(c1, r12);
  L39():
    goto L7();
  L43():
    e10 = force? e9;
    checkMissing(e10);
    inherits2 = ldf inherits in base;
    r17 = dyn inherits2(e10, "POSIXlt", FALSE);
    check L44() else D9();
  L45():
    as_POSIXct = ldf `as.POSIXct`;
    check L46() else D10();
  D9():
    deopt 44 [r17];
  D10():
    deopt 46 [];
  L11(r22):
    c12 = `as.logical`(r22);
    if c12 then L53() else L12();
  L44():
    goto L8(r17);
  L46():
    p = prom<V +>{
      e11 = ld e1;
      e12 = force? e11;
      checkMissing(e12);
      return e12;
    };
    r19 = dyn as_POSIXct(p);
    check L47() else D11();
  L49():
    e13 = ld e2;
    check L51() else D12();
  L50():
    r21 = dyn base4(<sym e2>, "POSIXlt");
    goto L11(r21);
  D11():
    deopt 48 [r19];
  D12():
    deopt 54 [e13];
  L12():
    goto L13();
  L13():
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L47():
    st e1 = r19;
    goto L10();
  L51():
    e14 = force? e13;
    checkMissing(e14);
    inherits3 = ldf inherits in base;
    r23 = dyn inherits3(e14, "POSIXlt", FALSE);
    check L52() else D13();
  L53():
    as_POSIXct1 = ldf `as.POSIXct`;
    check L54() else D14();
  D13():
    deopt 59 [r23];
  D14():
    deopt 61 [];
  L14(r28):
    c13 = `as.logical`(r28);
    if c13 then L61() else L15();
  L52():
    goto L11(r23);
  L54():
    p1 = prom<V +>{
      e15 = ld e2;
      e16 = force? e15;
      checkMissing(e16);
      return e16;
    };
    r25 = dyn as_POSIXct1(p1);
    check L55() else D15();
  L57():
    e17 = ld e1;
    check L59() else D16();
  L58():
    r27 = dyn base5(<sym e1>, "difftime");
    goto L14(r27);
  D15():
    deopt 63 [r25];
  D16():
    deopt 69 [e17];
  L15():
    goto L16();
  L16():
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L55():
    st e2 = r25;
    goto L13();
  L59():
    e18 = force? e17;
    checkMissing(e18);
    inherits4 = ldf inherits in base;
    r29 = dyn inherits4(e18, "difftime", FALSE);
    check L60() else D17();
  L61():
    coerceTimeUnit = ldf coerceTimeUnit;
    check L62() else D18();
  D17():
    deopt 74 [r29];
  D18():
    deopt 76 [];
  L17(r34):
    c14 = `as.logical`(r34);
    if c14 then L69() else L18();
  L60():
    goto L14(r29);
  L62():
    p2 = prom<V +>{
      e19 = ld e1;
      e20 = force? e19;
      checkMissing(e20);
      return e20;
    };
    r31 = dyn coerceTimeUnit(p2);
    check L63() else D19();
  L65():
    e21 = ld e2;
    check L67() else D20();
  L66():
    r33 = dyn base6(<sym e2>, "difftime");
    goto L17(r33);
  D19():
    deopt 78 [r31];
  D20():
    deopt 84 [e21];
  L18():
    goto L19();
  L19():
    _POSIXct = ldf `.POSIXct`;
    check L73() else D24();
  L63():
    st e1 = r31;
    goto L16();
  L67():
    e22 = force? e21;
    checkMissing(e22);
    inherits5 = ldf inherits in base;
    r35 = dyn inherits5(e22, "difftime", FALSE);
    check L68() else D21();
  L69():
    coerceTimeUnit1 = ldf coerceTimeUnit;
    check L70() else D22();
  D21():
    deopt 89 [r35];
  D22():
    deopt 91 [];
  D24():
    deopt 98 [];
  L68():
    goto L17(r35);
  L70():
    p3 = prom<V +>{
      e23 = ld e2;
      e24 = force? e23;
      checkMissing(e24);
      return e24;
    };
    r37 = dyn coerceTimeUnit1(p3);
    check L71() else D23();
  L73():
    p4 = prom<V +>{
      sym7 = ldf unclass;
      base7 = ldf unclass in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r40):
      sym8 = ldf unclass;
      base8 = ldf unclass in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L2():
      e25 = ld e1;
      e26 = force? e25;
      checkMissing(e26);
      unclass = ldf unclass in base;
      r41 = dyn unclass(e26);
      goto L0(r41);
    L3():
      r39 = dyn base7(<sym e1>);
      goto L0(r39);
    L1(r45, r46):
      r48 = `+`(r45, r46);
      return r48;
    L4():
      e27 = ld e2;
      e28 = force? e27;
      checkMissing(e28);
      unclass1 = ldf unclass in base;
      r47 = dyn unclass1(e28);
      goto L1(r40, r47);
    L5():
      r44 = dyn base8(<sym e2>);
      goto L1(r40, r44);
    };
    p7 = prom<V +>{
      _check_tzones = ldf `.check_tzones`;
      p5 = prom<V +>{
        e29 = ld e1;
        e30 = force? e29;
        checkMissing(e30);
        return e30;
      };
      p6 = prom<V +>{
        e31 = ld e2;
        e32 = force? e31;
        checkMissing(e32);
        return e32;
      };
      r52 = dyn _check_tzones(p5, p6);
      return r52;
    };
    r54 = dyn _POSIXct(p4, p7);
    check L74() else D25();
  D23():
    deopt 93 [r37];
  D25():
    deopt 101 [r54];
  L71():
    st e2 = r37;
    goto L19();
  L74():
    popenv;
    return r54;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg as_vector:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg i_ddd:dots, reg i:V, reg c8:L, reg c9:L, reg c10:L, reg c11:L, reg c12:L, reg x3:*, reg x4:V, reg x5:*, reg x6:V, reg r3:V, reg x7:*, reg x8:V, reg r4:V, reg x9:*, reg x10:V, reg r5:V, reg x11:*, reg x12:V, reg r6:V, reg p:p(V +), reg r8:V |
    mkenv;
    st x = x;
    as_vector = ldf `as.vector`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L7() else L8();
    L0(r1):
      c = `is.vector`(r1, "any");
      if c then L9() else L10();
    L7():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      attr = ldf attr in base;
      r2 = dyn attr(x2, "units");
      goto L0(r2);
    L8():
      r = dyn base(<sym x>, "units");
      goto L0(r);
    L9():
      c1 = inherits(r1, "factor", FALSE);
      if c1 then L11() else L12();
    L10():
      stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
      unreachable;
    L11():
      c2 = `is.character`(r1);
      if c2 then L13() else L14();
    L12():
      warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
      goto L11();
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    L2():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      r3 = `*`(60.0, x6);
      return r3;
    L3():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      r4 = `*`(3600.0, x8);
      return r4;
    L4():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      r5 = `*`(86400.0, x10);
      return r5;
    L5():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      r6 = `*`(604800.0, x12);
      return r6;
    L6():
      invisible.0();
      return NULL;
    L13():
      c3 = `==`.6(r1, "secs");
      if c3 then L1() else L15();
    L14():
      i_ddd = dots[r1];
      i = `as.integer`(i_ddd);
      c8 = `==`.5(i, 1);
      if c8 then L1() else L20();
    L15():
      c4 = `==`.6(r1, "mins");
      if c4 then L2() else L16();
    L20():
      c9 = `==`.5(i, 2);
      if c9 then L2() else L21();
    L16():
      c5 = `==`.6(r1, "hours");
      if c5 then L3() else L17();
    L21():
      c10 = `==`.5(i, 3);
      if c10 then L3() else L22();
    L17():
      c6 = `==`.6(r1, "days");
      if c6 then L4() else L18();
    L22():
      c11 = `==`.5(i, 4);
      if c11 then L4() else L23();
    L18():
      c7 = `==`.6(r1, "weeks");
      if c7 then L5() else L19();
    L23():
      c12 = `==`.5(i, 5);
      if c12 then L5() else L24();
    L19():
      goto L6();
    L24():
      goto L6();
    };
    r8 = dyn as_vector(p);
    check L1() else D1();
  D1():
    deopt 3 [r8];
  L1():
    popenv;
    return r8;
  }
}