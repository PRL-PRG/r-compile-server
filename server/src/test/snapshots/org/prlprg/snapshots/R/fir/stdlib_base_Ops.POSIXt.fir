fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2136888366;
    st `Ops.POSIXt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2136888366(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nargs:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg _Generic:*, reg _Generic1:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg _Generic2:*, reg _Generic3:V, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg i_ddd:dots, reg i:V, reg c10:L, reg c11:L, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg stop1:cls, reg r10:V, reg boolean:*, reg boolean1:V, reg r11:V, reg c17:L, reg stop2:cls, reg gettextf1:cls, reg _Generic4:*, reg _Generic5:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg e3:*, reg e4:V, reg inherits:cls, reg r19:V, reg c18:L, reg c19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg c23:L, reg r21:V, reg e5:*, reg e6:V, reg c24:L, reg c25:L, reg c26:V, reg c28:L, reg as_POSIXct:cls, reg e7:*, reg e8:V, reg p4:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg e9:*, reg e10:V, reg inherits1:cls, reg r27:V, reg c29:L, reg c30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg c34:L, reg r29:V, reg e11:*, reg e12:V, reg c35:L, reg c36:L, reg c37:V, reg c39:L, reg as_POSIXct1:cls, reg e13:*, reg e14:V, reg p5:p(V +), reg r31:V, reg _check_tzones:cls, reg e15:*, reg e16:V, reg p6:p(V +), reg e17:*, reg e18:V, reg p7:p(V +), reg r35:V, reg NextMethod:cls, reg _Generic6:*, reg _Generic7:V, reg p8:p(V +), reg r37:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L23() else L1();
  L20():
    nargs = ldf nargs in base;
    r2 = dyn nargs();
    check L22() else D0();
  L21():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1():
    goto L2();
  L2():
    _Generic2 = ld `.Generic`;
    check L27() else D3();
  L22():
    goto L0(r2);
  L23():
    stop = ldf stop;
    check L24() else D1();
  D1():
    deopt 7 [];
  D3():
    deopt 14 [_Generic2];
  L24():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        _Generic = ld `.Generic`;
        _Generic1 = force? _Generic;
        checkMissing(_Generic1);
        return _Generic1;
      };
      r5 = dyn gettextf("unary '%s' not defined for \"POSIXt\" objects", p);
      return r5;
    };
    r7 = dyn stop[, domain](p1, NA_LGL);
    check L25() else D2();
  L27():
    _Generic3 = force? _Generic2;
    checkMissing(_Generic3);
    c1 = `is.vector`(_Generic3, "any");
    if c1 then L28() else L29();
  D2():
    deopt 11 [r7];
  L25():
    goto L2();
  L28():
    c2 = inherits(_Generic3, "factor", FALSE);
    if c2 then L30() else L31();
  L29():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L30():
    c3 = `is.character`(_Generic3);
    if c3 then L32() else L33();
  L31():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L30();
  L3():
    goto L7(TRUE);
  L4():
    goto L7(FALSE);
  L7(r10):
    st boolean = r10;
    boolean = ld boolean;
    check L51() else D5();
  L32():
    c4 = `==`.6(_Generic3, "<");
    if c4 then L3() else L34();
  L33():
    i_ddd = dots[_Generic3];
    i = `as.integer`(i_ddd);
    c10 = `==`.5(i, 1);
    if c10 then L5() else L40();
  D5():
    deopt 27 [boolean];
  L5():
    stop1 = ldf stop;
    check L47() else D4();
  L6():
    goto L7(NULL);
  L34():
    c5 = `==`.6(_Generic3, ">");
    if c5 then L3() else L35();
  L40():
    c11 = `==`.5(i, 2);
    if c11 then L5() else L41();
  L51():
    boolean1 = force? boolean;
    checkMissing(boolean1);
    r11 = `!`(boolean1);
    c17 = `as.logical`(r11);
    if c17 then L52() else L8();
  D4():
    deopt 17 [];
  L8():
    goto L9();
  L9():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L56() else L57();
  L35():
    c6 = `==`.6(_Generic3, "==");
    if c6 then L3() else L36();
  L41():
    c12 = `==`.5(i, 3);
    if c12 then L5() else L42();
  L47():
    dyn stop1("empty alternative in numeric switch");
    goto L6();
  L52():
    stop2 = ldf stop;
    check L53() else D6();
  D6():
    deopt 31 [];
  L10(r18):
    c18 = `as.logical`(r18);
    if c18 then L11(c18) else L60();
  L36():
    c7 = `==`.6(_Generic3, "!=");
    if c7 then L3() else L37();
  L42():
    c13 = `==`.5(i, 4);
    if c13 then L5() else L43();
  L53():
    p3 = prom<V +>{
      gettextf1 = ldf gettextf;
      p2 = prom<V +>{
        _Generic4 = ld `.Generic`;
        _Generic5 = force? _Generic4;
        checkMissing(_Generic5);
        return _Generic5;
      };
      r13 = dyn gettextf1("'%s' not defined for \"POSIXt\" objects", p2);
      return r13;
    };
    r15 = dyn stop2[, domain](p3, NA_LGL);
    check L54() else D7();
  L56():
    e3 = ld e1;
    check L58() else D8();
  L57():
    r17 = dyn base1(<sym e1>, "POSIXlt");
    goto L10(r17);
  D7():
    deopt 35 [r15];
  D8():
    deopt 40 [e3];
  L11(c19):
    c28 = `as.logical`(c19);
    if c28 then L65() else L13();
  L37():
    c8 = `==`.6(_Generic3, "<=");
    if c8 then L3() else L38();
  L43():
    c14 = `==`.5(i, 5);
    if c14 then L5() else L44();
  L54():
    goto L9();
  L58():
    e4 = force? e3;
    checkMissing(e4);
    inherits = ldf inherits in base;
    r19 = dyn inherits(e4, "POSIXlt", FALSE);
    check L59() else D9();
  L60():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L61() else L62();
  D9():
    deopt 45 [r19];
  L12(c23, r21):
    c25 = `as.logical`(r21);
    c26 = `||`(c23, c25);
    goto L11(c26);
  L13():
    goto L14();
  L14():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L69() else L70();
  L38():
    c9 = `==`.6(_Generic3, ">=");
    if c9 then L3() else L39();
  L44():
    c15 = `==`.5(i, 6);
    if c15 then L3() else L45();
  L59():
    goto L10(r19);
  L61():
    e5 = ld e1;
    check L63() else D10();
  L62():
    r20 = dyn base2(<sym e1>);
    goto L12(c18, r20);
  L65():
    as_POSIXct = ldf `as.POSIXct`;
    check L66() else D11();
  D10():
    deopt 47 [c18, e5];
  D11():
    deopt 52 [];
  L15(r26):
    c29 = `as.logical`(r26);
    if c29 then L16(c29) else L73();
  L39():
    goto L4();
  L45():
    c16 = `==`.5(i, 7);
    if c16 then L4() else L46();
  L63():
    e6 = force? e5;
    checkMissing(e6);
    c24 = `is.character`(e6);
    goto L12(c18, c24);
  L66():
    p4 = prom<V +>{
      e7 = ld e1;
      e8 = force? e7;
      checkMissing(e8);
      return e8;
    };
    r23 = dyn as_POSIXct(p4);
    check L67() else D12();
  L69():
    e9 = ld e2;
    check L71() else D13();
  L70():
    r25 = dyn base3(<sym e2>, "POSIXlt");
    goto L15(r25);
  D12():
    deopt 54 [r23];
  D13():
    deopt 60 [e9];
  L16(c30):
    c39 = `as.logical`(c30);
    if c39 then L78() else L18();
  L46():
    goto L6();
  L67():
    st e1 = r23;
    goto L14();
  L71():
    e10 = force? e9;
    checkMissing(e10);
    inherits1 = ldf inherits in base;
    r27 = dyn inherits1(e10, "POSIXlt", FALSE);
    check L72() else D14();
  L73():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  D14():
    deopt 65 [r27];
  L17(c34, r29):
    c36 = `as.logical`(r29);
    c37 = `||`(c34, c36);
    goto L16(c37);
  L18():
    goto L19();
  L19():
    _check_tzones = ldf `.check_tzones`;
    check L82() else D18();
  L72():
    goto L15(r27);
  L74():
    e11 = ld e2;
    check L76() else D15();
  L75():
    r28 = dyn base4(<sym e2>);
    goto L17(c29, r28);
  L78():
    as_POSIXct1 = ldf `as.POSIXct`;
    check L79() else D16();
  D15():
    deopt 67 [c29, e11];
  D16():
    deopt 72 [];
  D18():
    deopt 79 [];
  L76():
    e12 = force? e11;
    checkMissing(e12);
    c35 = `is.character`(e12);
    goto L17(c29, c35);
  L79():
    p5 = prom<V +>{
      e13 = ld e2;
      e14 = force? e13;
      checkMissing(e14);
      return e14;
    };
    r31 = dyn as_POSIXct1(p5);
    check L80() else D17();
  L82():
    p6 = prom<V +>{
      e15 = ld e1;
      e16 = force? e15;
      checkMissing(e16);
      return e16;
    };
    p7 = prom<V +>{
      e17 = ld e2;
      e18 = force? e17;
      checkMissing(e18);
      return e18;
    };
    r35 = dyn _check_tzones(p6, p7);
    check L83() else D19();
  D17():
    deopt 74 [r31];
  D19():
    deopt 82 [r35];
  L80():
    st e2 = r31;
    goto L19();
  L83():
    NextMethod = ldf NextMethod;
    check L84() else D20();
  D20():
    deopt 84 [];
  L84():
    p8 = prom<V +>{
      _Generic6 = ld `.Generic`;
      _Generic7 = force? _Generic6;
      checkMissing(_Generic7);
      return _Generic7;
    };
    r37 = dyn NextMethod(p8);
    check L85() else D21();
  D21():
    deopt 86 [r37];
  L85():
    popenv;
    return r37;
  }
}