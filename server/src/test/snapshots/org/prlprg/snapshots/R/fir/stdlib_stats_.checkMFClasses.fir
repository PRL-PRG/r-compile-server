fun main() {
  () -+> V { reg r:cls, reg sapply:cls, reg warpbreaks:*, reg warpbreaks1:V, reg p:p(V +), reg _MFclass:*, reg _MFclass1:V, reg p1:p(V +), reg r3:V, reg sapply1:cls, reg iris:*, reg iris1:V, reg p2:p(V +), reg _MFclass2:*, reg _MFclass3:V, reg p3:p(V +), reg r6:V, reg model_frame:cls, reg __:cls, reg r7:V, reg p4:p(V +), reg iris2:*, reg iris3:V, reg p5:p(V +), reg r10:V, reg model_frame1:cls, reg __1:cls, reg r11:V, reg p6:p(V +), reg iris4:*, reg iris5:V, reg p7:p(V +), reg r14:V, reg _checkMFClasses:cls, reg mc:*, reg mc1:V, reg p8:p(V +), reg r16:V, reg _checkMFClasses1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r17:V, reg r18:V, reg c:cls, reg r19:V, reg p9:p(V +), reg mf:*, reg mf1:V, reg p10:p(V +), reg r22:V, reg _getXlevels:cls, reg terms:cls, reg mf2:*, reg mf3:V, reg p11:p(V +), reg r24:V, reg p12:p(V +), reg mf4:*, reg mf5:V, reg p13:p(V +), reg r27:V, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg xl:*, reg xl1:V, reg c1:L, reg xl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r30:V, reg levels:cls, reg iris6:*, reg iris7:V, reg c2:L, reg iris9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r31:V, reg p14:p(V +), reg r33:V, reg identical:cls, reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg _getXlevels1:cls, reg terms1:cls, reg mc2:*, reg mc3:V, reg p15:p(V +), reg r38:V, reg p16:p(V +), reg mc4:*, reg mc5:V, reg p17:p(V +), reg r41:V, reg xl4:*, reg xl5:V, reg c3:L, reg xl7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r42:V, reg identical1:cls, reg r43:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg _getXlevels2:cls, reg terms2:cls, reg __3:cls, reg r46:V, reg p18:p(V +), reg r48:V, reg p19:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg r51:V, reg list:cls, reg r52:V, reg p20:p(V +), reg r54:V, reg c4:V, reg p21:p(V +), reg r56:V |
    mkenv;
    r = clos inner1114342484;
    st `.checkMFClasses` = r;
    sapply = ldf sapply;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      warpbreaks = ld warpbreaks;
      warpbreaks1 = force? warpbreaks;
      checkMissing(warpbreaks1);
      return warpbreaks1;
    };
    p1 = prom<V +>{
      _MFclass = ld `.MFclass`;
      _MFclass1 = force? _MFclass;
      checkMissing(_MFclass1);
      return _MFclass1;
    };
    r3 = dyn sapply(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    sapply1 = ldf sapply;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p2 = prom<V +>{
      iris = ld iris;
      iris1 = force? iris;
      checkMissing(iris1);
      return iris1;
    };
    p3 = prom<V +>{
      _MFclass2 = ld `.MFclass`;
      _MFclass3 = force? _MFclass2;
      checkMissing(_MFclass3);
      return _MFclass3;
    };
    r6 = dyn sapply1(p2, p3);
    check L3() else D3();
  D3():
    deopt 12 [r6];
  L3():
    model_frame = ldf `model.frame`;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p4 = prom<V +>{
      __ = ldf `~` in base;
      r7 = dyn __(<sym Sepal.Width>, <sym Species>);
      return r7;
    };
    p5 = prom<V +>{
      iris2 = ld iris;
      iris3 = force? iris2;
      checkMissing(iris3);
      return iris3;
    };
    r10 = dyn model_frame(p4, p5);
    check L5() else D5();
  D5():
    deopt 17 [r10];
  L5():
    st mf = r10;
    model_frame1 = ldf `model.frame`;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p6 = prom<V +>{
      __1 = ldf `~` in base;
      r11 = dyn __1(<sym Sepal.Width>, <sym Sepal.Length>);
      return r11;
    };
    p7 = prom<V +>{
      iris4 = ld iris;
      iris5 = force? iris4;
      checkMissing(iris5);
      return iris5;
    };
    r14 = dyn model_frame1(p6, p7);
    check L7() else D7();
  D7():
    deopt 23 [r14];
  L7():
    st mc = r14;
    _checkMFClasses = ldf `.checkMFClasses`;
    check L8() else D8();
  D8():
    deopt 26 [];
  L8():
    p8 = prom<V +>{
      mc = ld mc;
      mc1 = force? mc;
      checkMissing(mc1);
      return mc1;
    };
    r16 = dyn _checkMFClasses("numeric", p8);
    check L9() else D9();
  D9():
    deopt 29 [r16];
  L9():
    _checkMFClasses1 = ldf `.checkMFClasses`;
    check L10() else D10();
  D10():
    deopt 31 [];
  L10():
    p9 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c = ldf c in base;
      r19 = dyn c("numeric", "factor");
      goto L0(r19);
    L2():
      r17 = dyn base("numeric", "factor");
      goto L0(r17);
    };
    p10 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    r22 = dyn _checkMFClasses1(p9, p10);
    check L11() else D11();
  D11():
    deopt 34 [r22];
  L11():
    _getXlevels = ldf `.getXlevels`;
    check L12() else D12();
  D12():
    deopt 36 [];
  L12():
    p12 = prom<V +>{
      terms = ldf terms;
      p11 = prom<V +>{
        mf2 = ld mf;
        mf3 = force? mf2;
        checkMissing(mf3);
        return mf3;
      };
      r24 = dyn terms(p11);
      return r24;
    };
    p13 = prom<V +>{
      mf4 = ld mf;
      mf5 = force? mf4;
      checkMissing(mf5);
      return mf5;
    };
    r27 = dyn _getXlevels(p12, p13);
    check L13() else D13();
  D13():
    deopt 39 [r27];
  L13():
    st xl = r27;
    stopifnot = ldf stopifnot;
    check L14() else D14();
  D14():
    deopt 42 [];
  L14():
    p21 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L0():
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L10() else L11();
    L4():
      xl = ld xl;
      xl1 = force? xl;
      checkMissing(xl1);
      c1 = `is.object`(xl1);
      if c1 then L7() else L8(xl1);
    L5():
      r28 = dyn base1(<lang `$`(xl, Species)>, <lang levels(`$`(iris, Species))>);
      goto L0();
    L1():
      sym3 = ldf `is.null`;
      base3 = ldf `is.null` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L15() else L16();
    L6(dx1):
      levels = ldf levels;
      p14 = prom<V +>{
        iris6 = ld iris;
        iris7 = force? iris6;
        checkMissing(iris7);
        c2 = `is.object`(iris7);
        if c2 then L1() else L2(iris7);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", iris7);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(iris9):
        r31 = `$`(iris9, <sym Species>);
        goto L0(r31);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r33 = dyn levels(p14);
      identical = ldf identical in base;
      r34 = dyn identical(dx1, r33, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0();
    L7():
      dr = tryDispatchBuiltin.1("$", xl1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L9() else L8(dr);
    L8(xl3):
      r30 = `$`(xl3, <sym Species>);
      goto L6(r30);
    L10():
      _getXlevels1 = ldf `.getXlevels`;
      p16 = prom<V +>{
        terms1 = ldf terms;
        p15 = prom<V +>{
          mc2 = ld mc;
          mc3 = force? mc2;
          checkMissing(mc3);
          return mc3;
        };
        r38 = dyn terms1(p15);
        return r38;
      };
      p17 = prom<V +>{
        mc4 = ld mc;
        mc5 = force? mc4;
        checkMissing(mc5);
        return mc5;
      };
      r41 = dyn _getXlevels1(p16, p17);
      xl4 = ld xl;
      xl5 = force? xl4;
      checkMissing(xl5);
      c3 = `is.object`(xl5);
      if c3 then L12() else L13(xl5);
    L11():
      r35 = dyn base2(<lang .getXlevels(terms(mc), mc)>, <lang `[`(xl, 0.0)>);
      goto L1();
    L2(dx5):
      identical1 = ldf identical in base;
      r43 = dyn identical1(r41, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L1();
    L3(r45):
      return r45;
    L9():
      dx = getTryDispatchBuiltinValue(dr);
      goto L6(dx);
    L12():
      dr4 = tryDispatchBuiltin.1("[", xl5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L14() else L13(dr4);
    L13(xl7):
      __2 = ldf `[` in base;
      r42 = dyn __2(xl7, 0.0);
      goto L2(r42);
    L15():
      _getXlevels2 = ldf `.getXlevels`;
      p19 = prom<V +>{
        terms2 = ldf terms;
        p18 = prom<V +>{
          __3 = ldf `~` in base;
          r46 = dyn __3(<sym x>, <sym x>);
          return r46;
        };
        r48 = dyn terms2(p18);
        return r48;
      };
      p20 = prom<V +>{
        sym4 = ldf list;
        base4 = ldf list in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r51):
        return r51;
      L1():
        list = ldf list in base;
        r52 = dyn list(1.0);
        goto L0(r52);
      L2():
        r50 = dyn base4[x](1.0);
        goto L0(r50);
      };
      r54 = dyn _getXlevels2(p19, p20);
      c4 = `==`(r54, NULL);
      goto L3(c4);
    L16():
      r44 = dyn base3(<lang .getXlevels(terms(`~`(x, x)), list(x=1.0))>);
      goto L3(r44);
    L14():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L2(dx4);
    };
    r56 = dyn stopifnot[exprs](p21);
    check L15() else D15();
  D15():
    deopt 45 [r56];
  L15():
    popenv;
    return r56;
  }
}
fun inner1114342484(cl, m, ordNotOK) {
  (reg cl:*, reg m:*, reg ordNotOK:*) -+> V { var cl:*, var m:*, var ordNotOK:*, reg ordNotOK_isMissing:L, reg ordNotOK_orDefault:*, reg vapply:cls, reg m1:*, reg m2:V, reg p:p(V +), reg _MFclass:*, reg _MFclass1:V, reg p1:p(V +), reg r2:V, reg new:*, reg new1:V, reg c:L, reg new3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg new4:*, reg new5:V, reg names:cls, reg r5:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg cl1:*, reg cl2:V, reg names1:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg __:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg new6:*, reg new7:V, reg length:cls, reg r15:V, reg r16:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg invisible:cls, reg r19:V, reg cl3:*, reg cl4:V, reg c2:L, reg cl6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg cl9:V, reg r23:V, reg new8:*, reg new9:V, reg names2:cls, reg r24:V, reg __1:cls, reg r25:V, reg ordNotOK1:*, reg ordNotOK2:V, reg r26:V, reg c3:L, reg l:*, reg c4:L, reg r28:S, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg old:*, reg old1:V, reg r31:V, reg ___:cls, reg r32:V, reg l3:*, reg c5:L, reg r34:S, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r36:S, reg dx7:V, reg new10:*, reg new11:V, reg r37:V, reg ___1:cls, reg r38:V, reg l6:*, reg c6:L, reg r41:S, reg l8:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg new12:*, reg new13:V, reg r44:V, reg old2:*, reg old3:V, reg r45:V, reg r46:V, reg ___2:cls, reg r47:V, reg l9:*, reg c7:L, reg r49:S, reg l11:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg new14:*, reg new15:V, reg r52:V, reg old4:*, reg old5:V, reg r53:V, reg r54:V, reg ___3:cls, reg r55:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg r57:V, reg old6:*, reg old7:V, reg new16:*, reg new17:V, reg identical:cls, reg r58:V, reg r59:V, reg c8:L, reg old8:*, reg old9:V, reg new18:*, reg new19:V, reg r60:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg r62:V, reg wrong:*, reg wrong1:V, reg sum:cls, reg r63:V, reg r64:V, reg c9:L, reg stop:cls, reg gettextf:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:V, reg old10:*, reg old11:V, reg names3:cls, reg r67:V, reg c10:L, reg r69:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg wrong2:*, reg wrong3:V, reg __2:cls, reg r70:V, reg p4:p(V +), reg old12:*, reg old13:V, reg c11:L, reg old15:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg wrong4:*, reg wrong5:V, reg __3:cls, reg r72:V, reg p5:p(V +), reg new20:*, reg new21:V, reg c12:L, reg new23:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg wrong6:*, reg wrong7:V, reg __4:cls, reg r74:V, reg p6:p(V +), reg r76:V, reg p7:p(V +), reg r78:V, reg stop1:cls, reg gettextf1:cls, reg paste:cls, reg sQuote:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r79:V, reg r80:V, reg old16:*, reg old17:V, reg names4:cls, reg r81:V, reg c13:L, reg r83:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg wrong8:*, reg wrong9:V, reg __5:cls, reg r84:V, reg p8:p(V +), reg r86:V, reg p9:p(V +), reg r88:V, reg p10:p(V +), reg r90:V, reg p11:p(V +), reg r92:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r93:V, reg r94:V, reg invisible1:cls, reg r95:V |
    mkenv;
    st cl = cl;
    st m = m;
    ordNotOK_isMissing = missing.0(ordNotOK);
    if ordNotOK_isMissing then L0(FALSE) else L0(ordNotOK);
  L0(ordNotOK_orDefault):
    st ordNotOK = ordNotOK_orDefault;
    vapply = ldf vapply;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      return m2;
    };
    p1 = prom<V +>{
      _MFclass = ld `.MFclass`;
      _MFclass1 = force? _MFclass;
      checkMissing(_MFclass1);
      return _MFclass1;
    };
    r2 = dyn vapply(p, p1, "");
    check L20() else D1();
  D1():
    deopt 5 [r2];
  L20():
    st new = r2;
    new = ld new;
    check L21() else D2();
  D2():
    deopt 7 [new];
  L21():
    new1 = force? new;
    checkMissing(new1);
    c = `is.object`(new1);
    if c then L22() else L23(new1);
  L1(dx1):
    st new = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L22():
    dr = tryDispatchBuiltin.1("[", new1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(new3):
    _in_ = ldf `%in%`;
    check L25() else D3();
  D3():
    deopt 10 [new3];
  L2(r14):
    r16 = `==`(r14, 0);
    c1 = `as.logical`(r16);
    if c1 then L31() else L3();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L25():
    p2 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      new4 = ld new;
      new5 = force? new4;
      checkMissing(new5);
      names = ldf names in base;
      r5 = dyn names(new5);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym new>);
      goto L0(r3);
    };
    p3 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      cl1 = ld cl;
      cl2 = force? cl1;
      checkMissing(cl2);
      names1 = ldf names in base;
      r9 = dyn names1(cl2);
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym cl>);
      goto L0(r7);
    };
    r11 = dyn _in_(p2, p3);
    check L26() else D4();
  L27():
    new6 = ld new;
    check L29() else D5();
  L28():
    r13 = dyn base2(<sym new>);
    goto L2(r13);
  D4():
    deopt 13 [new3, r11];
  D5():
    deopt 18 [new6];
  L3():
    cl3 = ld cl;
    check L37() else D8();
  L26():
    __ = ldf `[` in base;
    r12 = dyn __(new3, r11);
    goto L1(r12);
  L29():
    new7 = force? new6;
    checkMissing(new7);
    length = ldf length in base;
    r15 = dyn length(new7);
    check L30() else D6();
  L31():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  D6():
    deopt 21 [r15];
  D8():
    deopt 31 [cl3];
  L4(r18):
    popenv;
    return r18;
  L30():
    goto L2(r15);
  L32():
    invisible = ldf invisible in base;
    r19 = dyn invisible();
    check L34() else D7();
  L33():
    r17 = dyn base3();
    goto L4(r17);
  L37():
    cl4 = force? cl3;
    checkMissing(cl4);
    c2 = `is.object`(cl4);
    if c2 then L38() else L39(cl4);
  D7():
    deopt 27 [r19];
  L6(dx3):
    st old = dx3;
    ordNotOK1 = ld ordNotOK;
    check L45() else D11();
  L34():
    goto L4(r19);
  L38():
    dr2 = tryDispatchBuiltin.1("[", cl4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(cl6):
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  D11():
    deopt 41 [ordNotOK1];
  L7(cl9, r23):
    __1 = ldf `[` in base;
    r25 = dyn __1(cl9, r23);
    goto L6(r25);
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L41():
    new8 = ld new;
    check L43() else D9();
  L42():
    r22 = dyn base4(<sym new>);
    goto L7(cl6, r22);
  L45():
    ordNotOK2 = force? ordNotOK1;
    checkMissing(ordNotOK2);
    r26 = `!`(ordNotOK2);
    c3 = `as.logical`(r26);
    if c3 then L46() else L8();
  D9():
    deopt 35 [cl6, new8];
  L8():
    goto L11();
  L11():
    l6 = ld new;
    c6 = `is.object`(l6);
    if c6 then L56() else L57("factor", l6);
  L43():
    new9 = force? new8;
    checkMissing(new9);
    names2 = ldf names in base;
    r24 = dyn names2(new9);
    check L44() else D10();
  L46():
    l = ld old;
    c4 = `is.object`(l);
    if c4 then L47() else L48("factor", l);
  D10():
    deopt 38 [cl6, r24];
  L9(dx5):
    st old = dx5;
    l3 = ld new;
    c5 = `is.object`(l3);
    if c5 then L51() else L52("factor", l3);
  L12(dx9):
    st new = dx9;
    l9 = ld new;
    c7 = `is.object`(l9);
    if c7 then L61() else L62("character", l9);
  L44():
    goto L7(cl6, r24);
  L47():
    dr4 = tryDispatchBuiltin.0("[<-", l, "factor");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48("factor", dr4);
  L48(r28, l2):
    old = ld old;
    check L50() else D12();
  L56():
    dr8 = tryDispatchBuiltin.0("[<-", l6, "factor");
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L58() else L57("factor", dr8);
  L57(r41, l8):
    new12 = ld new;
    check L59() else D14();
  D12():
    deopt 47 [r28, l2, "factor", old];
  D14():
    deopt 67 [r41, l8, "factor", new12];
  L10(r36, dx7):
    st new = dx7;
    goto L11();
  L13(dx11):
    st new = dx11;
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L49():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L50():
    old1 = force? old;
    checkMissing(old1);
    r31 = `==`(old1, "ordered");
    ___ = ldf `[<-` in base;
    r32 = dyn ___(l2, "factor", r31);
    goto L9(r32);
  L51():
    dr6 = tryDispatchBuiltin.0("[<-", l3, "factor");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L53() else L52("factor", dr6);
  L52(r34, l5):
    new10 = ld new;
    check L54() else D13();
  L58():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx8);
  L59():
    new13 = force? new12;
    checkMissing(new13);
    r44 = `==`(new13, "ordered");
    old2 = ld old;
    check L60() else D15();
  L61():
    dr10 = tryDispatchBuiltin.0("[<-", l9, "character");
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L63() else L62("character", dr10);
  L62(r49, l11):
    new14 = ld new;
    check L64() else D16();
  D13():
    deopt 56 [r34, l5, "factor", new10];
  D15():
    deopt 70 [r41, l8, "factor", r44, old2];
  D16():
    deopt 80 [r49, l11, "character", new14];
  L14(r57):
    r59 = `!`(r57);
    c8 = `as.logical`(r59);
    if c8 then L71() else L15();
  L53():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10("factor", dx6);
  L54():
    new11 = force? new10;
    checkMissing(new11);
    r37 = `==`(new11, "ordered");
    ___1 = ldf `[<-` in base;
    r38 = dyn ___1(l5, "factor", r37);
    goto L10(r34, r38);
  L60():
    old3 = force? old2;
    checkMissing(old3);
    r45 = `==`(old3, "factor");
    r46 = `&&`(r44, r45);
    ___2 = ldf `[<-` in base;
    r47 = dyn ___2(l8, "factor", r46);
    goto L12(r47);
  L63():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L13(dx10);
  L64():
    new15 = force? new14;
    checkMissing(new15);
    r52 = `==`(new15, "factor");
    old4 = ld old;
    check L65() else D17();
  L66():
    old6 = ld old;
    check L68() else D18();
  L67():
    r56 = dyn base5(<sym old>, <sym new>);
    goto L14(r56);
  D17():
    deopt 83 [r49, l11, "character", r52, old4];
  D18():
    deopt 92 [old6];
  L15():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L85() else L86();
  L65():
    old5 = force? old4;
    checkMissing(old5);
    r53 = `==`(old5, "character");
    r54 = `&&`(r52, r53);
    ___3 = ldf `[<-` in base;
    r55 = dyn ___3(l11, "character", r54);
    goto L13(r55);
  L68():
    old7 = force? old6;
    checkMissing(old7);
    new16 = ld new;
    check L69() else D19();
  L71():
    old8 = ld old;
    check L72() else D21();
  D19():
    deopt 94 [new16];
  D21():
    deopt 106 [old8];
  L18(r94):
    popenv;
    return r94;
  L69():
    new17 = force? new16;
    checkMissing(new17);
    identical = ldf identical in base;
    r58 = dyn identical(old7, new17, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L70() else D20();
  L72():
    old9 = force? old8;
    checkMissing(old9);
    new18 = ld new;
    check L73() else D22();
  L85():
    invisible1 = ldf invisible in base;
    r95 = dyn invisible1();
    check L87() else D29();
  L86():
    r93 = dyn base9();
    goto L18(r93);
  D20():
    deopt 104 [r58];
  D22():
    deopt 107 [old9, new18];
  D29():
    deopt 138 [r95];
  L70():
    goto L14(r58);
  L73():
    new19 = force? new18;
    checkMissing(new19);
    r60 = `!=`(old9, new19);
    st wrong = r60;
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  L87():
    goto L18(r95);
  L16(r62):
    r64 = `==`(r62, 1.0);
    c9 = `as.logical`(r64);
    if c9 then L78() else L17();
  L74():
    wrong = ld wrong;
    check L76() else D23();
  L75():
    r61 = dyn base6(<sym wrong>);
    goto L16(r61);
  D23():
    deopt 113 [wrong];
  L17():
    stop1 = ldf stop;
    check L82() else D27();
  L76():
    wrong1 = force? wrong;
    checkMissing(wrong1);
    sum = ldf sum in base;
    r63 = dyn sum(wrong1);
    check L77() else D24();
  L78():
    stop = ldf stop;
    check L79() else D25();
  D24():
    deopt 116 [r63];
  D25():
    deopt 120 [];
  D27():
    deopt 128 [];
  L77():
    goto L16(r63);
  L79():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        sym7 = ldf names;
        base7 = ldf names in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L2() else L3();
      L0(r66):
        c10 = `is.object`(r66);
        if c10 then L4() else L5(r66);
      L2():
        old10 = ld old;
        old11 = force? old10;
        checkMissing(old11);
        names3 = ldf names in base;
        r67 = dyn names3(old11);
        goto L0(r67);
      L3():
        r65 = dyn base7(<sym old>);
        goto L0(r65);
      L1(dx13):
        return dx13;
      L4():
        dr12 = tryDispatchBuiltin.1("[", r66);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L6() else L5(dr12);
      L5(r69):
        wrong2 = ld wrong;
        wrong3 = force? wrong2;
        __2 = ldf `[` in base;
        r70 = dyn __2(r69, wrong3);
        goto L1(r70);
      L6():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L1(dx12);
      };
      p5 = prom<V +>{
        old12 = ld old;
        old13 = force? old12;
        checkMissing(old13);
        c11 = `is.object`(old13);
        if c11 then L1() else L2(old13);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("[", old13);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(old15):
        wrong4 = ld wrong;
        wrong5 = force? wrong4;
        __3 = ldf `[` in base;
        r72 = dyn __3(old15, wrong5);
        goto L0(r72);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      p6 = prom<V +>{
        new20 = ld new;
        new21 = force? new20;
        checkMissing(new21);
        c12 = `is.object`(new21);
        if c12 then L1() else L2(new21);
      L0(dx17):
        return dx17;
      L1():
        dr16 = tryDispatchBuiltin.1("[", new21);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(new23):
        wrong6 = ld wrong;
        wrong7 = force? wrong6;
        __4 = ldf `[` in base;
        r74 = dyn __4(new23, wrong7);
        goto L0(r74);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx16);
      };
      r76 = dyn gettextf("variable '%s' was fitted with type \"%s\" but type \"%s\" was supplied", p4, p5, p6);
      return r76;
    };
    r78 = dyn stop[, `call.`, domain](p7, FALSE, NA_LGL);
    check L80() else D26();
  L82():
    p11 = prom<V +>{
      gettextf1 = ldf gettextf;
      p10 = prom<V +>{
        paste = ldf paste;
        p9 = prom<V +>{
          sQuote = ldf sQuote;
          p8 = prom<V +>{
            sym8 = ldf names;
            base8 = ldf names in base;
            guard8 = `==`.4(sym8, base8);
            if guard8 then L2() else L3();
          L0(r80):
            c13 = `is.object`(r80);
            if c13 then L4() else L5(r80);
          L2():
            old16 = ld old;
            old17 = force? old16;
            checkMissing(old17);
            names4 = ldf names in base;
            r81 = dyn names4(old17);
            goto L0(r81);
          L3():
            r79 = dyn base8(<sym old>);
            goto L0(r79);
          L1(dx19):
            return dx19;
          L4():
            dr18 = tryDispatchBuiltin.1("[", r80);
            dc9 = getTryDispatchBuiltinDispatched(dr18);
            if dc9 then L6() else L5(dr18);
          L5(r83):
            wrong8 = ld wrong;
            wrong9 = force? wrong8;
            __5 = ldf `[` in base;
            r84 = dyn __5(r83, wrong9);
            goto L1(r84);
          L6():
            dx18 = getTryDispatchBuiltinValue(dr18);
            goto L1(dx18);
          };
          r86 = dyn sQuote(p8);
          return r86;
        };
        r88 = dyn paste[, collapse](p9, ", ");
        return r88;
      };
      r90 = dyn gettextf1("variables %s were specified with different types from the fit", p10);
      return r90;
    };
    r92 = dyn stop1[, `call.`, domain](p11, FALSE, NA_LGL);
    check L83() else D28();
  D26():
    deopt 126 [r78];
  D28():
    deopt 134 [r92];
  L80():
    popenv;
    return r78;
  L83():
    popenv;
    return r92;
  }
}