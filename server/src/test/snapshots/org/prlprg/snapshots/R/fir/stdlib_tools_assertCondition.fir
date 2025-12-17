fun main() {
  () -+> V { reg r:cls, reg assertError:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg r3:V, reg p:p(V +), reg r5:V, reg assertWarning:cls, reg matrix:cls, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg assertCondition:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg try:cls, reg assertCondition1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg r15:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg r19:V, reg assertCondition2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg r22:V, reg p6:p(V +), reg r24:V, reg try1:cls, reg assertCondition3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg r27:V, reg p7:p(V +), reg r29:V, reg p8:p(V +), reg r31:V, reg assertCondition4:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg r34:V, reg p9:p(V +), reg r36:V, reg assertCondition5:cls, reg matrix1:cls, reg p10:p(V +), reg r38:V, reg p11:p(V +), reg r40:V, reg try2:cls, reg assertCondition6:cls, reg matrix2:cls, reg p12:p(V +), reg r42:V, reg p13:p(V +), reg r44:V, reg p14:p(V +), reg r46:V, reg assertCondition7:cls, reg matrix3:cls, reg p15:p(V +), reg r48:V, reg p16:p(V +), reg r50:V, reg assertCondition8:cls, reg matrix4:cls, reg p17:p(V +), reg r52:V, reg p18:p(V +), reg r54:V, reg r55:cls, reg assertCondition9:cls, reg ff:cls, reg r56:V, reg p19:p(V +), reg r58:V, reg try3:cls, reg assertWarning1:cls, reg ff1:cls, reg r59:V, reg p20:p(V +), reg r61:V, reg p21:p(V +), reg r63:V, reg assertCondition10:cls, reg ff2:cls, reg r64:V, reg p22:p(V +), reg r66:V, reg assertCondition11:cls, reg ff3:cls, reg r67:V, reg p23:p(V +), reg r69:V, reg assertCondition12:cls, reg assertCondition13:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r70:V, reg r71:V, reg r72:V, reg p24:p(V +), reg r74:V, reg p25:p(V +), reg r76:V, reg assertCondition14:cls, reg assertCondition15:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r77:V, reg r78:V, reg r79:V, reg p26:p(V +), reg r81:V, reg p27:p(V +), reg r83:V, reg assertCondition16:cls, reg assertCondition17:cls, reg matrix5:cls, reg p28:p(V +), reg r85:V, reg p29:p(V +), reg r87:V, reg p30:p(V +), reg r89:V |
    mkenv;
    r = clos inner2528186201;
    st assertCondition = r;
    assertError = ldf assertError;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf sqrt;
      base = ldf sqrt in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      r3 = sqrt("abc");
      goto L0(r3);
    L2():
      r1 = dyn base("abc");
      goto L0(r1);
    };
    r5 = dyn assertError(p);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    assertWarning = ldf assertWarning;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p2 = prom<V +>{
      matrix = ldf matrix;
      p1 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8>;
      };
      r7 = dyn matrix(p1, 4.0, 3.0);
      return r7;
    };
    r9 = dyn assertWarning(p2);
    check L3() else D3();
  D3():
    deopt 10 [r9];
  L3():
    assertCondition = ldf assertCondition;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p3 = prom<V +>{
      r10 = `-`("", 1.0);
      return r10;
    };
    r12 = dyn assertCondition(p3);
    check L5() else D5();
  D5():
    deopt 14 [r12];
  L5():
    try = ldf try;
    check L6() else D6();
  D6():
    deopt 16 [];
  L6():
    p5 = prom<V +>{
      assertCondition1 = ldf assertCondition;
      p4 = prom<V +>{
        sym1 = ldf sqrt;
        base1 = ldf sqrt in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r14):
        return r14;
      L1():
        r15 = sqrt(2.0);
        goto L0(r15);
      L2():
        r13 = dyn base1(2.0);
        goto L0(r13);
      };
      r17 = dyn assertCondition1(p4, "warning");
      return r17;
    };
    r19 = dyn try(p5);
    check L7() else D7();
  D7():
    deopt 18 [r19];
  L7():
    assertCondition2 = ldf assertCondition;
    check L8() else D8();
  D8():
    deopt 20 [];
  L8():
    p6 = prom<V +>{
      sym2 = ldf sqrt;
      base2 = ldf sqrt in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      r22 = sqrt("abc");
      goto L0(r22);
    L2():
      r20 = dyn base2("abc");
      goto L0(r20);
    };
    r24 = dyn assertCondition2(p6, "error");
    check L9() else D9();
  D9():
    deopt 23 [r24];
  L9():
    try1 = ldf try;
    check L10() else D10();
  D10():
    deopt 25 [];
  L10():
    p8 = prom<V +>{
      assertCondition3 = ldf assertCondition;
      p7 = prom<V +>{
        sym3 = ldf sqrt;
        base3 = ldf sqrt in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r26):
        return r26;
      L1():
        r27 = sqrt("abc");
        goto L0(r27);
      L2():
        r25 = dyn base3("abc");
        goto L0(r25);
      };
      r29 = dyn assertCondition3(p7, "warning");
      return r29;
    };
    r31 = dyn try1(p8);
    check L11() else D11();
  D11():
    deopt 27 [r31];
  L11():
    assertCondition4 = ldf assertCondition;
    check L12() else D12();
  D12():
    deopt 29 [];
  L12():
    p9 = prom<V +>{
      sym4 = ldf sqrt;
      base4 = ldf sqrt in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      r34 = sqrt("abc");
      goto L0(r34);
    L2():
      r32 = dyn base4("abc");
      goto L0(r32);
    };
    r36 = dyn assertCondition4(p9, "error");
    check L13() else D13();
  D13():
    deopt 32 [r36];
  L13():
    assertCondition5 = ldf assertCondition;
    check L14() else D14();
  D14():
    deopt 34 [];
  L14():
    p11 = prom<V +>{
      matrix1 = ldf matrix;
      p10 = prom<V +>{
        return <int 1, 2, 3, 4, 5>;
      };
      r38 = dyn matrix1(p10, 2.0, 3.0);
      return r38;
    };
    r40 = dyn assertCondition5(p11, "warning");
    check L15() else D15();
  D15():
    deopt 37 [r40];
  L15():
    try2 = ldf try;
    check L16() else D16();
  D16():
    deopt 39 [];
  L16():
    p14 = prom<V +>{
      assertCondition6 = ldf assertCondition;
      p13 = prom<V +>{
        matrix2 = ldf matrix;
        p12 = prom<V +>{
          return <int 1, 2, 3, 4, 5, 6, 7, 8>;
        };
        r42 = dyn matrix2(p12, 4.0, 3.0);
        return r42;
      };
      r44 = dyn assertCondition6(p13, "error");
      return r44;
    };
    r46 = dyn try2(p14);
    check L17() else D17();
  D17():
    deopt 41 [r46];
  L17():
    assertCondition7 = ldf assertCondition;
    check L18() else D18();
  D18():
    deopt 43 [];
  L18():
    p16 = prom<V +>{
      matrix3 = ldf matrix;
      p15 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8>;
      };
      r48 = dyn matrix3(p15, 4.0, 3.0);
      return r48;
    };
    r50 = dyn assertCondition7(p16, "error", "warning");
    check L19() else D19();
  D19():
    deopt 47 [r50];
  L19():
    assertCondition8 = ldf assertCondition;
    check L20() else D20();
  D20():
    deopt 49 [];
  L20():
    p18 = prom<V +>{
      matrix4 = ldf matrix;
      p17 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8>;
      };
      r52 = dyn matrix4(p17, 4.0, 3.0);
      return r52;
    };
    r54 = dyn assertCondition8(p18, "warning");
    check L21() else D21();
  D21():
    deopt 52 [r54];
  L21():
    r55 = clos inner2708337952;
    st ff = r55;
    assertCondition9 = ldf assertCondition;
    check L22() else D22();
  D22():
    deopt 57 [];
  L22():
    p19 = prom<V +>{
      ff = ldf ff;
      r56 = dyn ff();
      return r56;
    };
    r58 = dyn assertCondition9(p19, "warning");
    check L23() else D23();
  D23():
    deopt 60 [r58];
  L23():
    try3 = ldf try;
    check L24() else D24();
  D24():
    deopt 62 [];
  L24():
    p21 = prom<V +>{
      assertWarning1 = ldf assertWarning;
      p20 = prom<V +>{
        ff1 = ldf ff;
        r59 = dyn ff1();
        return r59;
      };
      r61 = dyn assertWarning1(p20);
      return r61;
    };
    r63 = dyn try3(p21);
    check L25() else D25();
  D25():
    deopt 64 [r63];
  L25():
    assertCondition10 = ldf assertCondition;
    check L26() else D26();
  D26():
    deopt 66 [];
  L26():
    p22 = prom<V +>{
      ff2 = ldf ff;
      r64 = dyn ff2();
      return r64;
    };
    r66 = dyn assertCondition10(p22, "error");
    check L27() else D27();
  D27():
    deopt 69 [r66];
  L27():
    assertCondition11 = ldf assertCondition;
    check L28() else D28();
  D28():
    deopt 71 [];
  L28():
    p23 = prom<V +>{
      ff3 = ldf ff;
      r67 = dyn ff3();
      return r67;
    };
    r69 = dyn assertCondition11(p23, "error", "warning");
    check L29() else D29();
  D29():
    deopt 75 [r69];
  L29():
    assertCondition12 = ldf assertCondition;
    check L30() else D30();
  D30():
    deopt 77 [];
  L30():
    p25 = prom<V +>{
      assertCondition13 = ldf assertCondition;
      p24 = prom<V +>{
        sym5 = ldf sqrt;
        base5 = ldf sqrt in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r71):
        return r71;
      L1():
        r72 = sqrt(2.0);
        goto L0(r72);
      L2():
        r70 = dyn base5(2.0);
        goto L0(r70);
      };
      r74 = dyn assertCondition13(p24, "warning");
      return r74;
    };
    r76 = dyn assertCondition12(p25);
    check L31() else D31();
  D31():
    deopt 79 [r76];
  L31():
    assertCondition14 = ldf assertCondition;
    check L32() else D32();
  D32():
    deopt 81 [];
  L32():
    p27 = prom<V +>{
      assertCondition15 = ldf assertCondition;
      p26 = prom<V +>{
        sym6 = ldf sqrt;
        base6 = ldf sqrt in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r78):
        return r78;
      L1():
        r79 = sqrt("abc");
        goto L0(r79);
      L2():
        r77 = dyn base6("abc");
        goto L0(r77);
      };
      r81 = dyn assertCondition15(p26, "warning");
      return r81;
    };
    r83 = dyn assertCondition14(p27, "error");
    check L33() else D33();
  D33():
    deopt 84 [r83];
  L33():
    assertCondition16 = ldf assertCondition;
    check L34() else D34();
  D34():
    deopt 86 [];
  L34():
    p30 = prom<V +>{
      assertCondition17 = ldf assertCondition;
      p29 = prom<V +>{
        matrix5 = ldf matrix;
        p28 = prom<V +>{
          return <int 1, 2, 3, 4, 5, 6, 7, 8>;
        };
        r85 = dyn matrix5(p28, 4.0, 3.0);
        return r85;
      };
      r87 = dyn assertCondition17(p29, "error");
      return r87;
    };
    r89 = dyn assertCondition16(p30, "error");
    check L35() else D35();
  D35():
    deopt 89 [r89];
  L35():
    popenv;
    return r89;
  }
}
fun inner2528186201(expr, `...`, `.exprString`, verbose) {
  (reg expr:*, reg ddd:dots, reg _exprString:*, reg verbose:*) -+> V { var expr:*, var `...`:dots?, var `.exprString`:*, reg _exprString_isMissing:L, reg _exprString_orDefault:*, reg _deparseTrim:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg r6:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c:cls, reg ddd1:dots?, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg conds:*, reg conds1:V, reg length:cls, reg r12:V, reg c1:L, reg paste:cls, reg conds2:*, reg conds3:V, reg p2:p(V +), reg r14:V, reg r15:V, reg getConds:cls, reg expr1:*, reg expr2:V, reg p3:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg res:*, reg res1:V, reg length1:cls, reg r20:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg conds4:*, reg conds5:V, reg c3:V, reg c4:L, reg verbose1:*, reg verbose2:V, reg c5:L, reg message:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg res2:*, reg res3:V, reg invisible:cls, reg r27:V, reg vapply:cls, reg res4:*, reg res5:V, reg p4:p(V +), reg r29:cls, reg p5:p(V +), reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg ii:*, reg ii1:V, reg any:cls, reg r34:V, reg c6:L, reg verbose3:*, reg verbose4:V, reg c7:L, reg unique:cls, reg unlist:cls, reg lapply:cls, reg res6:*, reg res7:V, reg c8:L, reg res9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ii2:*, reg ii3:V, reg __:cls, reg r35:V, reg p6:p(V +), reg r37:cls, reg p7:p(V +), reg r39:V, reg p8:p(V +), reg r41:V, reg p9:p(V +), reg r43:V, reg message1:cls, reg sprintf:cls, reg paste1:cls, reg dQuote:cls, reg found:*, reg found1:V, reg p10:p(V +), reg r45:V, reg p11:p(V +), reg r47:V, reg p12:p(V +), reg r49:V, reg p13:p(V +), reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg res10:*, reg res11:V, reg invisible1:cls, reg r55:V, reg unique1:cls, reg unlist1:cls, reg lapply1:cls, reg res12:*, reg res13:V, reg p14:p(V +), reg r57:cls, reg p15:p(V +), reg r59:V, reg p16:p(V +), reg r61:V, reg p17:p(V +), reg r63:V, reg stop:cls, reg gettextf:cls, reg paste2:cls, reg _got:*, reg _got1:V, reg p18:p(V +), reg r65:V, reg p19:p(V +), reg _exprString1:*, reg _exprString2:V, reg p20:p(V +), reg _Wanted:*, reg _Wanted1:V, reg p21:p(V +), reg r69:V, reg p22:p(V +), reg r71:V, reg stop1:cls, reg gettextf1:cls, reg _Wanted2:*, reg _Wanted3:V, reg p23:p(V +), reg _exprString3:*, reg _exprString4:V, reg p24:p(V +), reg r74:V, reg p25:p(V +), reg r76:V |
    mkenv;
    st expr = expr;
    st `...` = ddd;
    _exprString_isMissing = missing.0(_exprString);
    if _exprString_isMissing then L0() else L1(_exprString);
  L0():
    p1 = prom<V +>{
      _deparseTrim = ldf `.deparseTrim`;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym expr>);
        goto L0(r2);
      L2():
        r = dyn base(<sym expr>);
        goto L0(r);
      };
      r4 = dyn _deparseTrim[, cutoff](p, 30);
      return r4;
    };
    goto L1(p1);
  L1(_exprString_orDefault):
    st `.exprString` = _exprString_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L2(FALSE) else L2(verbose);
  L2(verbose_orDefault):
    st verbose = verbose_orDefault;
    r6 = clos inner4125524309;
    st getConds = r6;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L3(r8):
    st conds = r8;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L19():
    c = ldf c;
    check L21() else D0();
  L20():
    r7 = dyn base1(<sym ...>);
    goto L3(r7);
  D0():
    deopt 5 [];
  L4(r11):
    c1 = `as.logical`(r11);
    if c1 then L27() else L5();
  L21():
    ddd1 = ld `...`;
    r9 = dyn c[`...`](ddd1);
    check L22() else D1();
  L23():
    conds = ld conds;
    check L25() else D2();
  L24():
    r10 = dyn base2(<sym conds>);
    goto L4(r10);
  D1():
    deopt 7 [r9];
  D2():
    deopt 11 [conds];
  L5():
    goto L6("any condition");
  L6(r15):
    st `.Wanted` = r15;
    getConds = ldf getConds;
    check L31() else D6();
  L22():
    goto L3(r9);
  L25():
    conds1 = force? conds;
    checkMissing(conds1);
    length = ldf length in base;
    r12 = dyn length(conds1);
    check L26() else D3();
  L27():
    paste = ldf paste;
    check L28() else D4();
  D3():
    deopt 14 [r12];
  D4():
    deopt 16 [];
  D6():
    deopt 25 [];
  L26():
    goto L4(r12);
  L28():
    p2 = prom<V +>{
      conds2 = ld conds;
      conds3 = force? conds2;
      checkMissing(conds3);
      return conds3;
    };
    r14 = dyn paste[, collapse](p2, " or ");
    check L29() else D5();
  L31():
    p3 = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    r17 = dyn getConds(p3);
    check L32() else D7();
  D5():
    deopt 20 [r14];
  D7():
    deopt 27 [r17];
  L29():
    goto L6(r14);
  L32():
    st res = r17;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L7(r19):
    c2 = `as.logical`(r19);
    if c2 then L37() else L8();
  L33():
    res = ld res;
    check L35() else D8();
  L34():
    r18 = dyn base3(<sym res>);
    goto L7(r18);
  D8():
    deopt 31 [res];
  L8():
    stop1 = ldf stop;
    check L76() else D31();
  L35():
    res1 = force? res;
    checkMissing(res1);
    length1 = ldf length in base;
    r20 = dyn length1(res1);
    check L36() else D9();
  L37():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  D9():
    deopt 34 [r20];
  D31():
    deopt 101 [];
  L9(r22):
    c4 = `as.logical`(r22);
    if c4 then L41() else L10();
  L36():
    goto L7(r20);
  L38():
    conds4 = ld conds;
    check L40() else D10();
  L39():
    r21 = dyn base4(<sym conds>);
    goto L9(r21);
  L76():
    p25 = prom<V +>{
      gettextf1 = ldf gettextf;
      p23 = prom<V +>{
        _Wanted2 = ld `.Wanted`;
        _Wanted3 = force? _Wanted2;
        checkMissing(_Wanted3);
        return _Wanted3;
      };
      p24 = prom<V +>{
        _exprString3 = ld `.exprString`;
        _exprString4 = force? _exprString3;
        checkMissing(_exprString4);
        return _exprString4;
      };
      r74 = dyn gettextf1("Failed to get %s in evaluating %s", p23, p24);
      return r74;
    };
    r76 = dyn stop1[, domain](p25, NA_LGL);
    check L77() else D32();
  D10():
    deopt 36 [conds4];
  D32():
    deopt 105 [r76];
  L10():
    vapply = ldf vapply;
    check L52() else D16();
  L40():
    conds5 = force? conds4;
    checkMissing(conds5);
    c3 = `==`(conds5, NULL);
    goto L9(c3);
  L41():
    verbose1 = ld verbose;
    check L42() else D11();
  L77():
    popenv;
    return r76;
  D11():
    deopt 39 [verbose1];
  D16():
    deopt 56 [];
  L42():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c5 = `as.logical`(verbose2);
    if c5 then L43() else L11();
  L52():
    p4 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      return res5;
    };
    p5 = prom<V +>{
      r29 = clos inner913928130;
      return r29;
    };
    r31 = dyn vapply(p4, p5, NA_LGL);
    check L53() else D17();
  D17():
    deopt 60 [r31];
  L11():
    goto L12();
  L12():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L43():
    message = ldf message;
    check L44() else D12();
  L53():
    st ii = r31;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  D12():
    deopt 42 [];
  L13(r26):
    popenv;
    return r26;
  L14(r33):
    c6 = `as.logical`(r33);
    if c6 then L58() else L15();
  L44():
    r23 = dyn message[, domain]("assertConditon: successfully caught a condition", NA_LGL);
    check L45() else D13();
  L47():
    res2 = ld res;
    check L49() else D14();
  L48():
    r25 = dyn base5(<sym res>);
    goto L13(r25);
  L54():
    ii = ld ii;
    check L56() else D18();
  L55():
    r32 = dyn base6(<sym ii>);
    goto L14(r32);
  D13():
    deopt 46 [r23];
  D14():
    deopt 51 [res2];
  D18():
    deopt 64 [ii];
  L15():
    unique1 = ldf unique;
    check L71() else D27();
  L45():
    goto L12();
  L49():
    res3 = force? res2;
    checkMissing(res3);
    invisible = ldf invisible in base;
    r27 = dyn invisible(res3);
    check L50() else D15();
  L56():
    ii1 = force? ii;
    checkMissing(ii1);
    any = ldf any in base;
    r34 = dyn any(ii1);
    check L57() else D19();
  L58():
    verbose3 = ld verbose;
    check L59() else D20();
  D15():
    deopt 54 [r27];
  D19():
    deopt 67 [r34];
  D20():
    deopt 68 [verbose3];
  D27():
    deopt 90 [];
  L50():
    goto L13(r27);
  L57():
    goto L14(r34);
  L59():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c7 = `as.logical`(verbose4);
    if c7 then L60() else L16();
  L71():
    p17 = prom<V +>{
      unlist1 = ldf unlist;
      p16 = prom<V +>{
        lapply1 = ldf lapply;
        p14 = prom<V +>{
          res12 = ld res;
          res13 = force? res12;
          checkMissing(res13);
          return res13;
        };
        p15 = prom<V +>{
          r57 = clos inner1912617395;
          return r57;
        };
        r59 = dyn lapply1(p14, p15);
        return r59;
      };
      r61 = dyn unlist1(p16);
      return r61;
    };
    r63 = dyn unique1(p17);
    check L72() else D28();
  D28():
    deopt 92 [r63];
  L16():
    goto L17();
  L17():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L66() else L67();
  L60():
    unique = ldf unique;
    check L61() else D21();
  L72():
    st `.got` = r63;
    stop = ldf stop;
    check L73() else D29();
  D21():
    deopt 71 [];
  D29():
    deopt 95 [];
  L18(r54):
    popenv;
    return r54;
  L61():
    p9 = prom<V +>{
      unlist = ldf unlist;
      p8 = prom<V +>{
        lapply = ldf lapply;
        p6 = prom<V +>{
          res6 = ld res;
          res7 = force? res6;
          checkMissing(res7);
          c8 = `is.object`(res7);
          if c8 then L1() else L2(res7);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", res7);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(res9):
          ii2 = ld ii;
          ii3 = force? ii2;
          __ = ldf `[` in base;
          r35 = dyn __(res9, ii3);
          goto L0(r35);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        p7 = prom<V +>{
          r37 = clos inner913928130;
          return r37;
        };
        r39 = dyn lapply(p6, p7);
        return r39;
      };
      r41 = dyn unlist(p8);
      return r41;
    };
    r43 = dyn unique(p9);
    check L62() else D22();
  L66():
    res10 = ld res;
    check L68() else D25();
  L67():
    r53 = dyn base7(<sym res>);
    goto L18(r53);
  L73():
    p22 = prom<V +>{
      gettextf = ldf gettextf;
      p19 = prom<V +>{
        paste2 = ldf paste;
        p18 = prom<V +>{
          _got = ld `.got`;
          _got1 = force? _got;
          checkMissing(_got1);
          return _got1;
        };
        r65 = dyn paste2[, collapse](p18, ", ");
        return r65;
      };
      p20 = prom<V +>{
        _exprString1 = ld `.exprString`;
        _exprString2 = force? _exprString1;
        checkMissing(_exprString2);
        return _exprString2;
      };
      p21 = prom<V +>{
        _Wanted = ld `.Wanted`;
        _Wanted1 = force? _Wanted;
        checkMissing(_Wanted1);
        return _Wanted1;
      };
      r69 = dyn gettextf("Got %s in evaluating %s; wanted %s", p19, p20, p21);
      return r69;
    };
    r71 = dyn stop[, domain](p22, NA_LGL);
    check L74() else D30();
  D22():
    deopt 73 [r43];
  D25():
    deopt 85 [res10];
  D30():
    deopt 99 [r71];
  L62():
    st found = r43;
    message1 = ldf message;
    check L63() else D23();
  L68():
    res11 = force? res10;
    checkMissing(res11);
    invisible1 = ldf invisible in base;
    r55 = dyn invisible1(res11);
    check L69() else D26();
  L74():
    popenv;
    return r71;
  D23():
    deopt 76 [];
  D26():
    deopt 88 [r55];
  L63():
    p13 = prom<V +>{
      sprintf = ldf sprintf;
      p12 = prom<V +>{
        paste1 = ldf paste;
        p11 = prom<V +>{
          dQuote = ldf dQuote;
          p10 = prom<V +>{
            found = ld found;
            found1 = force? found;
            checkMissing(found1);
            return found1;
          };
          r45 = dyn dQuote(p10);
          return r45;
        };
        r47 = dyn paste1[, collapse](p11, ", ");
        return r47;
      };
      r49 = dyn sprintf("assertCondition: caught %s", p12);
      return r49;
    };
    r51 = dyn message1[, domain](p13, NA_LGL);
    check L64() else D24();
  L69():
    goto L18(r55);
  D24():
    deopt 80 [r51];
  L64():
    goto L17();
  }
}
fun inner4125524309(expr) {
  (reg expr:*) -+> V { var expr:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg withCallingHandlers:cls, reg tryCatch:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:cls, reg p3:p(V +), reg r10:cls, reg p4:p(V +), reg r12:V, reg conds:*, reg conds1:V |
    mkenv;
    st expr = expr;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st conds = r1;
    withCallingHandlers = ldf withCallingHandlers;
    check L4() else D1();
  L1():
    list = ldf list in base;
    r2 = dyn list();
    check L3() else D0();
  L2():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 6 [];
  L3():
    goto L0(r2);
  L4():
    p2 = prom<V +>{
      tryCatch = ldf tryCatch;
      p = prom<V +>{
        expr1 = ld expr;
        expr2 = force? expr1;
        checkMissing(expr2);
        return expr2;
      };
      p1 = prom<V +>{
        r4 = clos inner3708401697;
        return r4;
      };
      r6 = dyn tryCatch[, error](p, p1);
      return r6;
    };
    p3 = prom<V +>{
      r8 = clos inner530606259;
      return r8;
    };
    p4 = prom<V +>{
      r10 = clos inner913928130;
      return r10;
    };
    r12 = dyn withCallingHandlers[, warning, condition](p2, p3, p4);
    check L5() else D2();
  D2():
    deopt 12 [r12];
  L5():
    conds = ld conds;
    check L6() else D3();
  D3():
    deopt 13 [conds];
  L6():
    conds1 = force? conds;
    checkMissing(conds1);
    popenv;
    return conds1;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg conds:*, reg conds1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg list:cls, reg r4:V, reg c:cls, reg r5:V |
    mkenv;
    st e = e;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    sst conds = r1;
    invisible.0();
    popenv;
    return r1;
  L2():
    conds = ld conds;
    check L4() else D0();
  L3():
    r = dyn base(<sym conds>, <lang list(e)>);
    goto L0(r);
  D0():
    deopt 2 [conds];
  L4():
    conds1 = force? conds;
    checkMissing(conds1);
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L1(r3):
    c = ldf c in base;
    r5 = dyn c(conds1, r3);
    check L9() else D3();
  L5():
    e1 = ld e;
    check L7() else D1();
  L6():
    r2 = dyn base1(<sym e>);
    goto L1(r2);
  D1():
    deopt 6 [e1];
  D3():
    deopt 11 [r5];
  L7():
    e2 = force? e1;
    checkMissing(e2);
    list = ldf list in base;
    r4 = dyn list(e2);
    check L8() else D2();
  L9():
    goto L0(r5);
  D2():
    deopt 9 [r4];
  L8():
    goto L1(r4);
  }
}
fun inner530606259(w) {
  (reg w:*) -+> V { var w:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg conds:*, reg conds1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg w1:*, reg w2:V, reg list:cls, reg r4:V, reg c:cls, reg r5:V, reg tryInvokeRestart:cls, reg r6:V |
    mkenv;
    st w = w;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    sst conds = r1;
    tryInvokeRestart = ldf tryInvokeRestart;
    check L10() else D4();
  L2():
    conds = ld conds;
    check L4() else D0();
  L3():
    r = dyn base(<sym conds>, <lang list(w)>);
    goto L0(r);
  D0():
    deopt 2 [conds];
  D4():
    deopt 14 [];
  L4():
    conds1 = force? conds;
    checkMissing(conds1);
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L10():
    r6 = dyn tryInvokeRestart("muffleWarning");
    check L11() else D5();
  D5():
    deopt 16 [r6];
  L1(r3):
    c = ldf c in base;
    r5 = dyn c(conds1, r3);
    check L9() else D3();
  L5():
    w1 = ld w;
    check L7() else D1();
  L6():
    r2 = dyn base1(<sym w>);
    goto L1(r2);
  L11():
    popenv;
    return r6;
  D1():
    deopt 6 [w1];
  D3():
    deopt 11 [r5];
  L7():
    w2 = force? w1;
    checkMissing(w2);
    list = ldf list in base;
    r4 = dyn list(w2);
    check L8() else D2();
  L9():
    goto L0(r5);
  D2():
    deopt 9 [r4];
  L8():
    goto L1(r4);
  }
}
fun inner913928130(cond) {
  (reg cond:*) -+> V { var cond:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg conds:*, reg conds1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg cond1:*, reg cond2:V, reg list:cls, reg r4:V, reg c:cls, reg r5:V |
    mkenv;
    st cond = cond;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    sst conds = r1;
    invisible.0();
    popenv;
    return r1;
  L2():
    conds = ld conds;
    check L4() else D0();
  L3():
    r = dyn base(<sym conds>, <lang list(cond)>);
    goto L0(r);
  D0():
    deopt 2 [conds];
  L4():
    conds1 = force? conds;
    checkMissing(conds1);
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L1(r3):
    c = ldf c in base;
    r5 = dyn c(conds1, r3);
    check L9() else D3();
  L5():
    cond1 = ld cond;
    check L7() else D1();
  L6():
    r2 = dyn base1(<sym cond>);
    goto L1(r2);
  D1():
    deopt 6 [cond1];
  D3():
    deopt 11 [r5];
  L7():
    cond2 = force? cond1;
    checkMissing(cond2);
    list = ldf list in base;
    r4 = dyn list(cond2);
    check L8() else D2();
  L9():
    goto L0(r5);
  D2():
    deopt 9 [r4];
  L8():
    goto L1(r4);
  }
}
fun inner1912617395(obj) {
  (reg obj:*) -+> V { var obj:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg obj1:*, reg obj2:V, reg class:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V |
    mkenv;
    st obj = obj;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `is.object`(r1);
    if c then L6() else L7(r1);
  L2():
    obj1 = ld obj;
    check L4() else D0();
  L3():
    r = dyn base(<sym obj>);
    goto L0(r);
  D0():
    deopt 2 [obj1];
  L1(dx1):
    popenv;
    return dx1;
  L4():
    obj2 = force? obj1;
    checkMissing(obj2);
    class = ldf class in base;
    r2 = dyn class(obj2);
    check L5() else D1();
  L6():
    dr = tryDispatchBuiltin.1("[[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(r4):
    __ = ldf `[[` in base;
    r5 = dyn __(r4, 1);
    goto L1(r5);
  D1():
    deopt 5 [r2];
  L5():
    goto L0(r2);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}
fun inner2708337952() {
  () -+> V { reg warning:cls, reg r:V, reg stop:cls, reg r1:V |
    mkenv;
    warning = ldf warning;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn warning("my warning");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    stop = ldf stop;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    r1 = dyn stop("my error");
    check L3() else D3();
  D3():
    deopt 7 [r1];
  L3():
    popenv;
    return r1;
  }
}