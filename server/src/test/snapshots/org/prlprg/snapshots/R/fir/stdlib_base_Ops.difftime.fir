fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2136888366;
    st `Ops.difftime` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2136888366(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg nargs:cls, reg r3:V, reg r4:V, reg c:L, reg _Generic:*, reg _Generic1:V, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg i_ddd:dots, reg i:V, reg c6:L, reg c7:L, reg c8:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg e3:*, reg e4:V, reg unclass:cls, reg r8:V, reg r9:V, reg l:*, reg c9:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg r13:V, reg dx1:V, reg ___:cls, reg r14:V, reg stop:cls, reg gettextf:cls, reg _Generic2:*, reg _Generic3:V, reg p:p(V +), reg r16:V, reg p1:p(V +), reg r18:V, reg e5:*, reg e6:V, reg _Generic4:*, reg _Generic5:V, reg c10:L, reg c11:L, reg c12:L, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg c17:L, reg c18:L, reg i_ddd1:dots, reg i1:V, reg c19:L, reg c20:L, reg c21:L, reg c22:L, reg c23:L, reg c24:L, reg c25:L, reg stop1:cls, reg r22:V, reg boolean:*, reg boolean1:V, reg c26:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg e7:*, reg e8:V, reg inherits:cls, reg r25:V, reg c27:L, reg c29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg c32:L, reg r27:V, reg e9:*, reg e10:V, reg inherits1:cls, reg r28:V, reg c33:L, reg c34:V, reg c36:L, reg coerceTimeUnit:cls, reg e11:*, reg e12:V, reg p2:p(V +), reg r30:V, reg coerceTimeUnit1:cls, reg e13:*, reg e14:V, reg p3:p(V +), reg r32:V, reg NextMethod:cls, reg _Generic6:*, reg _Generic7:V, reg p4:p(V +), reg r35:V, reg _Generic8:*, reg _Generic9:V, reg r36:V, reg c37:L, reg c38:V, reg _Generic10:*, reg _Generic11:V, reg r37:V, reg c40:L, reg c41:V, reg c43:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg e15:*, reg e16:V, reg inherits2:cls, reg r40:V, reg c44:L, reg c46:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg c49:L, reg r42:V, reg e17:*, reg e18:V, reg inherits3:cls, reg r43:V, reg r44:V, reg c50:L, reg c51:V, reg c53:L, reg _difftime:cls, reg NextMethod1:cls, reg _Generic12:*, reg _Generic13:V, reg p5:p(V +), reg r46:V, reg p6:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg e19:*, reg e20:V, reg attr:cls, reg r50:V, reg p7:p(V +), reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg e21:*, reg e22:V, reg inherits4:cls, reg r57:V, reg r58:V, reg c54:L, reg c56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg c59:L, reg r60:V, reg e23:*, reg e24:V, reg inherits5:cls, reg r61:V, reg c60:L, reg c61:V, reg c63:L, reg _difftime1:cls, reg NextMethod2:cls, reg _Generic14:*, reg _Generic15:V, reg p8:p(V +), reg r63:V, reg p9:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r65:V, reg r66:V, reg e25:*, reg e26:V, reg attr1:cls, reg r67:V, reg p10:p(V +), reg r69:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r72:V, reg r73:V, reg e27:*, reg e28:V, reg attr2:cls, reg r74:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r75:V, reg r76:V, reg e29:*, reg e30:V, reg attr3:cls, reg r77:V, reg u1:*, reg u2:V, reg r78:V, reg c64:L, reg _difftime2:cls, reg NextMethod3:cls, reg _Generic16:*, reg _Generic17:V, reg p11:p(V +), reg r80:V, reg p12:p(V +), reg u3:*, reg u4:V, reg p13:p(V +), reg r83:V, reg coerceTimeUnit2:cls, reg e31:*, reg e32:V, reg p14:p(V +), reg r85:V, reg coerceTimeUnit3:cls, reg e33:*, reg e34:V, reg p15:p(V +), reg r87:V, reg _difftime3:cls, reg NextMethod4:cls, reg _Generic18:*, reg _Generic19:V, reg p16:p(V +), reg r89:V, reg p17:p(V +), reg r91:V, reg stop2:cls, reg gettextf1:cls, reg _Generic20:*, reg _Generic21:V, reg p18:p(V +), reg r93:V, reg p19:p(V +), reg r95:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    r = clos inner354062069;
    st coerceTimeUnit = r;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L0(r2):
    r4 = `==`(r2, 1);
    c = `as.logical`(r4);
    if c then L39() else L1();
  L36():
    nargs = ldf nargs in base;
    r3 = dyn nargs();
    check L38() else D0();
  L37():
    r1 = dyn base();
    goto L0(r1);
  D0():
    deopt 6 [r3];
  L1():
    _Generic4 = ld `.Generic`;
    check L68() else D7();
  L38():
    goto L0(r3);
  L39():
    _Generic = ld `.Generic`;
    check L40() else D1();
  D1():
    deopt 9 [_Generic];
  D7():
    deopt 41 [_Generic4];
  L40():
    _Generic1 = force? _Generic;
    checkMissing(_Generic1);
    c1 = `is.vector`(_Generic1, "any");
    if c1 then L41() else L42();
  L68():
    _Generic5 = force? _Generic4;
    checkMissing(_Generic5);
    c10 = `is.vector`(_Generic5, "any");
    if c10 then L69() else L70();
  L41():
    c2 = inherits(_Generic1, "factor", FALSE);
    if c2 then L43() else L44();
  L42():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L69():
    c11 = inherits(_Generic5, "factor", FALSE);
    if c11 then L71() else L72();
  L70():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L43():
    c3 = `is.character`(_Generic1);
    if c3 then L45() else L46();
  L44():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L43();
  L71():
    c12 = `is.character`(_Generic5);
    if c12 then L73() else L74();
  L72():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L71();
  L2():
    goto L6();
  L3():
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L4():
    stop = ldf stop;
    check L62() else D4();
  L6():
    e5 = ld e1;
    check L65() else D6();
  L10():
    goto L14(TRUE);
  L11():
    goto L14(FALSE);
  L14(r22):
    st boolean = r22;
    boolean = ld boolean;
    check L92() else D9();
  L45():
    c4 = `==`.6(_Generic1, "+");
    if c4 then L2() else L47();
  L46():
    i_ddd = dots[_Generic1];
    i = `as.integer`(i_ddd);
    c6 = `==`.5(i, 1);
    if c6 then L2() else L49();
  L73():
    c13 = `==`.6(_Generic5, "<");
    if c13 then L10() else L75();
  L74():
    i_ddd1 = dots[_Generic5];
    i1 = `as.integer`(i_ddd1);
    c19 = `==`.5(i1, 1);
    if c19 then L12() else L81();
  D4():
    deopt 28 [];
  D6():
    deopt 36 [e5];
  D9():
    deopt 54 [boolean];
  L7(r7):
    r9 = `-`(<missing>, r7);
    l = ld e1;
    c9 = `is.object`(l);
    if c9 then L58() else L59(r9);
  L12():
    stop1 = ldf stop;
    check L88() else D8();
  L13():
    goto L14(NULL);
  L47():
    c5 = `==`.6(_Generic1, "-");
    if c5 then L3() else L48();
  L49():
    c7 = `==`.5(i, 2);
    if c7 then L3() else L50();
  L54():
    e3 = ld e1;
    check L56() else D2();
  L55():
    r6 = dyn base1(<sym e1>);
    goto L7(r6);
  L62():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        _Generic2 = ld `.Generic`;
        _Generic3 = force? _Generic2;
        checkMissing(_Generic3);
        return _Generic3;
      };
      r16 = dyn gettextf("unary '%s' not defined for \"difftime\" objects", p);
      return r16;
    };
    r18 = dyn stop[, domain, `call.`](p1, NA_LGL, FALSE);
    check L63() else D5();
  L65():
    e6 = force? e5;
    checkMissing(e6);
    popenv;
    return e6;
  L75():
    c14 = `==`.6(_Generic5, ">");
    if c14 then L10() else L76();
  L81():
    c20 = `==`.5(i1, 2);
    if c20 then L12() else L82();
  L92():
    boolean1 = force? boolean;
    checkMissing(boolean1);
    c26 = `as.logical`(boolean1);
    if c26 then L93() else L15();
  D2():
    deopt 17 [e3];
  D5():
    deopt 34 [r18];
  D8():
    deopt 44 [];
  L8(r13, dx1):
    st e1 = dx1;
    goto L6();
  L15():
    _Generic8 = ld `.Generic`;
    check L113() else D20();
  L48():
    goto L4();
  L50():
    c8 = `==`.5(i, 3);
    if c8 then L4() else L51();
  L56():
    e4 = force? e3;
    checkMissing(e4);
    unclass = ldf unclass in base;
    r8 = dyn unclass(e4);
    check L57() else D3();
  L58():
    dr = tryDispatchBuiltin.0("[<-", l, r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(r9);
  L59(r11):
    ___ = ldf `[<-` in base;
    r14 = dyn ___(l, <missing>, r9);
    goto L8(r11, r14);
  L63():
    goto L6();
  L76():
    c15 = `==`.6(_Generic5, "==");
    if c15 then L10() else L77();
  L82():
    c21 = `==`.5(i1, 3);
    if c21 then L12() else L83();
  L88():
    dyn stop1("empty alternative in numeric switch");
    goto L13();
  L93():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L94() else L95();
  D3():
    deopt 20 [r8];
  D20():
    deopt 89 [_Generic8];
  L16(r24):
    c27 = `as.logical`(r24);
    if c27 then L98() else L17(c27);
  L51():
    goto L6();
  L57():
    goto L7(r8);
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(r9, dx);
  L77():
    c16 = `==`.6(_Generic5, "!=");
    if c16 then L10() else L78();
  L83():
    c22 = `==`.5(i1, 4);
    if c22 then L12() else L84();
  L94():
    e7 = ld e1;
    check L96() else D10();
  L95():
    r23 = dyn base2(<sym e1>, "difftime");
    goto L16(r23);
  L113():
    _Generic9 = force? _Generic8;
    checkMissing(_Generic9);
    r36 = `==`(_Generic9, "+");
    c37 = `as.logical`(r36);
    if c37 then L21(c37) else L114();
  D10():
    deopt 58 [e7];
  L17(c29):
    c36 = `as.logical`(c29);
    if c36 then L104() else L19();
  L21(c38):
    c43 = `as.logical`(c38);
    if c43 then L117() else L22();
  L78():
    c17 = `==`.6(_Generic5, "<=");
    if c17 then L10() else L79();
  L84():
    c23 = `==`.5(i1, 5);
    if c23 then L12() else L85();
  L96():
    e8 = force? e7;
    checkMissing(e8);
    inherits = ldf inherits in base;
    r25 = dyn inherits(e8, "difftime", FALSE);
    check L97() else D11();
  L98():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L99() else L100();
  L114():
    _Generic10 = ld `.Generic`;
    check L115() else D21();
  D11():
    deopt 63 [r25];
  D21():
    deopt 93 [c37, _Generic10];
  L18(c32, r27):
    c33 = `as.logical`(r27);
    c34 = `&&`(c32, c33);
    goto L17(c34);
  L19():
    goto L20();
  L20():
    NextMethod = ldf NextMethod;
    check L110() else D18();
  L22():
    stop2 = ldf stop;
    check L168() else D47();
  L79():
    c18 = `==`.6(_Generic5, ">=");
    if c18 then L10() else L80();
  L85():
    c24 = `==`.5(i1, 6);
    if c24 then L10() else L86();
  L97():
    goto L16(r25);
  L99():
    e9 = ld e2;
    check L101() else D12();
  L100():
    r26 = dyn base3(<sym e2>, "difftime");
    goto L18(c27, r26);
  L104():
    coerceTimeUnit = ldf coerceTimeUnit;
    check L105() else D14();
  L115():
    _Generic11 = force? _Generic10;
    checkMissing(_Generic11);
    r37 = `==`(_Generic11, "-");
    c40 = `as.logical`(r37);
    c41 = `||`(c37, c40);
    goto L21(c41);
  L117():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L118() else L119();
  D12():
    deopt 66 [c27, e9];
  D14():
    deopt 74 [];
  D18():
    deopt 86 [];
  D47():
    deopt 192 [];
  L23(r39):
    c44 = `as.logical`(r39);
    if c44 then L122() else L24(c44);
  L80():
    goto L11();
  L86():
    c25 = `==`.5(i1, 7);
    if c25 then L11() else L87();
  L101():
    e10 = force? e9;
    checkMissing(e10);
    inherits1 = ldf inherits in base;
    r28 = dyn inherits1(e10, "difftime", FALSE);
    check L102() else D13();
  L105():
    p2 = prom<V +>{
      e11 = ld e1;
      e12 = force? e11;
      checkMissing(e12);
      return e12;
    };
    r30 = dyn coerceTimeUnit(p2);
    check L106() else D15();
  L110():
    p4 = prom<V +>{
      _Generic6 = ld `.Generic`;
      _Generic7 = force? _Generic6;
      checkMissing(_Generic7);
      return _Generic7;
    };
    r35 = dyn NextMethod(p4);
    check L111() else D19();
  L118():
    e15 = ld e1;
    check L120() else D22();
  L119():
    r38 = dyn base4(<sym e1>, "difftime");
    goto L23(r38);
  L168():
    p19 = prom<V +>{
      gettextf1 = ldf gettextf;
      p18 = prom<V +>{
        _Generic20 = ld `.Generic`;
        _Generic21 = force? _Generic20;
        checkMissing(_Generic21);
        return _Generic21;
      };
      r93 = dyn gettextf1("'%s' not defined for \"difftime\" objects", p18);
      return r93;
    };
    r95 = dyn stop2[, domain](p19, NA_LGL);
    check L169() else D48();
  D13():
    deopt 71 [c27, r28];
  D15():
    deopt 76 [r30];
  D19():
    deopt 88 [r35];
  D22():
    deopt 100 [e15];
  D48():
    deopt 196 [r95];
  L24(c46):
    c53 = `as.logical`(c46);
    if c53 then L128() else L26();
  L87():
    goto L13();
  L102():
    goto L18(c27, r28);
  L106():
    st e1 = r30;
    coerceTimeUnit1 = ldf coerceTimeUnit;
    check L107() else D16();
  L111():
    popenv;
    return r35;
  L120():
    e16 = force? e15;
    checkMissing(e16);
    inherits2 = ldf inherits in base;
    r40 = dyn inherits2(e16, "difftime", FALSE);
    check L121() else D23();
  L122():
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L123() else L124();
  L169():
    popenv;
    return r95;
  D16():
    deopt 79 [];
  D23():
    deopt 105 [r40];
  L25(c49, r42):
    r44 = `!`(r42);
    c50 = `as.logical`(r44);
    c51 = `&&`(c49, c50);
    goto L24(c51);
  L26():
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L133() else L134();
  L107():
    p3 = prom<V +>{
      e13 = ld e2;
      e14 = force? e13;
      checkMissing(e14);
      return e14;
    };
    r32 = dyn coerceTimeUnit1(p3);
    check L108() else D17();
  L121():
    goto L23(r40);
  L123():
    e17 = ld e2;
    check L125() else D24();
  L124():
    r41 = dyn base5(<sym e2>, "difftime");
    goto L25(c44, r41);
  L128():
    _difftime = ldf `.difftime`;
    check L129() else D26();
  D17():
    deopt 81 [r32];
  D24():
    deopt 108 [c44, e17];
  D26():
    deopt 117 [];
  L28(r56):
    r58 = `!`(r56);
    c54 = `as.logical`(r58);
    if c54 then L137() else L29(c54);
  L108():
    st e2 = r32;
    goto L20();
  L125():
    e18 = force? e17;
    checkMissing(e18);
    inherits3 = ldf inherits in base;
    r43 = dyn inherits3(e18, "difftime", FALSE);
    check L126() else D25();
  L129():
    p6 = prom<V +>{
      NextMethod1 = ldf NextMethod;
      p5 = prom<V +>{
        _Generic12 = ld `.Generic`;
        _Generic13 = force? _Generic12;
        checkMissing(_Generic13);
        return _Generic13;
      };
      r46 = dyn NextMethod1(p5);
      return r46;
    };
    p7 = prom<V +>{
      sym6 = ldf attr;
      base6 = ldf attr in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      e19 = ld e1;
      e20 = force? e19;
      checkMissing(e20);
      attr = ldf attr in base;
      r50 = dyn attr(e20, "units");
      goto L0(r50);
    L2():
      r48 = dyn base6(<sym e1>, "units");
      goto L0(r48);
    };
    r52 = dyn _difftime[, units](p6, p7);
    check L130() else D27();
  L133():
    e21 = ld e1;
    check L135() else D28();
  L134():
    r55 = dyn base7(<sym e1>, "difftime");
    goto L28(r55);
  D25():
    deopt 113 [c44, r43];
  D27():
    deopt 121 [r52];
  D28():
    deopt 127 [e21];
  L29(c56):
    c63 = `as.logical`(c56);
    if c63 then L143() else L31();
  L126():
    goto L25(c44, r43);
  L130():
    popenv;
    return r52;
  L135():
    e22 = force? e21;
    checkMissing(e22);
    inherits4 = ldf inherits in base;
    r57 = dyn inherits4(e22, "difftime", FALSE);
    check L136() else D29();
  L137():
    sym8 = ldf inherits;
    base8 = ldf inherits in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L138() else L139();
  D29():
    deopt 132 [r57];
  L30(c59, r60):
    c60 = `as.logical`(r60);
    c61 = `&&`(c59, c60);
    goto L29(c61);
  L31():
    sym10 = ldf attr;
    base10 = ldf attr in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L148() else L149();
  L136():
    goto L28(r57);
  L138():
    e23 = ld e2;
    check L140() else D30();
  L139():
    r59 = dyn base8(<sym e2>, "difftime");
    goto L30(c54, r59);
  L143():
    _difftime1 = ldf `.difftime`;
    check L144() else D32();
  D30():
    deopt 136 [c54, e23];
  D32():
    deopt 144 [];
  L33(r73):
    st u1 = r73;
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L152() else L153();
  L140():
    e24 = force? e23;
    checkMissing(e24);
    inherits5 = ldf inherits in base;
    r61 = dyn inherits5(e24, "difftime", FALSE);
    check L141() else D31();
  L144():
    p9 = prom<V +>{
      NextMethod2 = ldf NextMethod;
      p8 = prom<V +>{
        _Generic14 = ld `.Generic`;
        _Generic15 = force? _Generic14;
        checkMissing(_Generic15);
        return _Generic15;
      };
      r63 = dyn NextMethod2(p8);
      return r63;
    };
    p10 = prom<V +>{
      sym9 = ldf attr;
      base9 = ldf attr in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      e25 = ld e2;
      e26 = force? e25;
      checkMissing(e26);
      attr1 = ldf attr in base;
      r67 = dyn attr1(e26, "units");
      goto L0(r67);
    L2():
      r65 = dyn base9(<sym e2>, "units");
      goto L0(r65);
    };
    r69 = dyn _difftime1[, units](p9, p10);
    check L145() else D33();
  L148():
    e27 = ld e1;
    check L150() else D34();
  L149():
    r72 = dyn base10(<sym e1>, "units");
    goto L33(r72);
  D31():
    deopt 141 [c54, r61];
  D33():
    deopt 148 [r69];
  D34():
    deopt 154 [e27];
  L34(r76):
    u1 = ld u1;
    check L156() else D38();
  L141():
    goto L30(c54, r61);
  L145():
    popenv;
    return r69;
  L150():
    e28 = force? e27;
    checkMissing(e28);
    attr2 = ldf attr in base;
    r74 = dyn attr2(e28, "units");
    check L151() else D35();
  L152():
    e29 = ld e2;
    check L154() else D36();
  L153():
    r75 = dyn base11(<sym e2>, "units");
    goto L34(r75);
  D35():
    deopt 158 [r74];
  D36():
    deopt 162 [e29];
  D38():
    deopt 166 [r76, u1];
  L151():
    goto L33(r74);
  L154():
    e30 = force? e29;
    checkMissing(e30);
    attr3 = ldf attr in base;
    r77 = dyn attr3(e30, "units");
    check L155() else D37();
  L156():
    u2 = force? u1;
    checkMissing(u2);
    r78 = `==`(r76, u2);
    c64 = `as.logical`(r78);
    if c64 then L157() else L35();
  D37():
    deopt 166 [r77];
  L35():
    coerceTimeUnit2 = ldf coerceTimeUnit;
    check L161() else D41();
  L155():
    goto L34(r77);
  L157():
    _difftime2 = ldf `.difftime`;
    check L158() else D39();
  D39():
    deopt 170 [];
  D41():
    deopt 176 [];
  L158():
    p12 = prom<V +>{
      NextMethod3 = ldf NextMethod;
      p11 = prom<V +>{
        _Generic16 = ld `.Generic`;
        _Generic17 = force? _Generic16;
        checkMissing(_Generic17);
        return _Generic17;
      };
      r80 = dyn NextMethod3(p11);
      return r80;
    };
    p13 = prom<V +>{
      u3 = ld u1;
      u4 = force? u3;
      checkMissing(u4);
      return u4;
    };
    r83 = dyn _difftime2[, units](p12, p13);
    check L159() else D40();
  L161():
    p14 = prom<V +>{
      e31 = ld e1;
      e32 = force? e31;
      checkMissing(e32);
      return e32;
    };
    r85 = dyn coerceTimeUnit2(p14);
    check L162() else D42();
  D40():
    deopt 174 [r83];
  D42():
    deopt 178 [r85];
  L159():
    popenv;
    return r83;
  L162():
    st e1 = r85;
    coerceTimeUnit3 = ldf coerceTimeUnit;
    check L163() else D43();
  D43():
    deopt 181 [];
  L163():
    p15 = prom<V +>{
      e33 = ld e2;
      e34 = force? e33;
      checkMissing(e34);
      return e34;
    };
    r87 = dyn coerceTimeUnit3(p15);
    check L164() else D44();
  D44():
    deopt 183 [r87];
  L164():
    st e2 = r87;
    _difftime3 = ldf `.difftime`;
    check L165() else D45();
  D45():
    deopt 186 [];
  L165():
    p17 = prom<V +>{
      NextMethod4 = ldf NextMethod;
      p16 = prom<V +>{
        _Generic18 = ld `.Generic`;
        _Generic19 = force? _Generic18;
        checkMissing(_Generic19);
        return _Generic19;
      };
      r89 = dyn NextMethod4(p16);
      return r89;
    };
    r91 = dyn _difftime3[, units](p17, "secs");
    check L166() else D46();
  D46():
    deopt 190 [r91];
  L166():
    popenv;
    return r91;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg attr:cls, reg r2:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg i_ddd:dots, reg i:V, reg c8:L, reg c9:L, reg c10:L, reg c11:L, reg c12:L, reg x3:*, reg x4:V, reg x5:*, reg x6:V, reg r3:V, reg x7:*, reg x8:V, reg r4:V, reg x9:*, reg x10:V, reg r5:V, reg x11:*, reg x12:V, reg r6:V |
    mkenv;
    st x = x;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `is.vector`(r1, "any");
    if c then L11() else L12();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>, "units");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r2 = dyn attr(x2, "units");
    check L10() else D1();
  L11():
    c1 = inherits(r1, "factor", FALSE);
    if c1 then L13() else L14();
  L12():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  D1():
    deopt 6 [r2];
  L10():
    goto L0(r2);
  L13():
    c2 = `is.character`(r1);
    if c2 then L15() else L16();
  L14():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L13();
  L1():
    x3 = ld x;
    check L28() else D2();
  L2():
    x5 = ld x;
    check L30() else D3();
  L3():
    x7 = ld x;
    check L32() else D4();
  L4():
    x9 = ld x;
    check L34() else D5();
  L5():
    x11 = ld x;
    check L36() else D6();
  L6():
    invisible.0();
    popenv;
    return NULL;
  L15():
    c3 = `==`.6(r1, "secs");
    if c3 then L1() else L17();
  L16():
    i_ddd = dots[r1];
    i = `as.integer`(i_ddd);
    c8 = `==`.5(i, 1);
    if c8 then L1() else L22();
  D2():
    deopt 10 [x3];
  D3():
    deopt 13 [60.0, x5];
  D4():
    deopt 17 [3600.0, x7];
  D5():
    deopt 21 [86400.0, x9];
  D6():
    deopt 25 [604800.0, x11];
  L17():
    c4 = `==`.6(r1, "mins");
    if c4 then L2() else L18();
  L22():
    c9 = `==`.5(i, 2);
    if c9 then L2() else L23();
  L28():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L30():
    x6 = force? x5;
    checkMissing(x6);
    r3 = `*`(60.0, x6);
    popenv;
    return r3;
  L32():
    x8 = force? x7;
    checkMissing(x8);
    r4 = `*`(3600.0, x8);
    popenv;
    return r4;
  L34():
    x10 = force? x9;
    checkMissing(x10);
    r5 = `*`(86400.0, x10);
    popenv;
    return r5;
  L36():
    x12 = force? x11;
    checkMissing(x12);
    r6 = `*`(604800.0, x12);
    popenv;
    return r6;
  L18():
    c5 = `==`.6(r1, "hours");
    if c5 then L3() else L19();
  L23():
    c10 = `==`.5(i, 3);
    if c10 then L3() else L24();
  L19():
    c6 = `==`.6(r1, "days");
    if c6 then L4() else L20();
  L24():
    c11 = `==`.5(i, 4);
    if c11 then L4() else L25();
  L20():
    c7 = `==`.6(r1, "weeks");
    if c7 then L5() else L21();
  L25():
    c12 = `==`.5(i, 5);
    if c12 then L5() else L26();
  L21():
    goto L6();
  L26():
    goto L6();
  }
}