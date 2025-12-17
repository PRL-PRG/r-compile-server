fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3866680094;
    st `close.screen` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3866680094(n, `all.screens`) {
  (reg n:*, reg all_screens:*) -+> V { var n:*, var `all.screens`:*, reg all_screens_isMissing:L, reg all_screens_orDefault:*, reg _SSexists:cls, reg r:V, reg r1:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c6:L, reg r8:V, reg missing1:cls, reg r9:V, reg c7:L, reg c8:V, reg c10:L, reg _SSget:cls, reg r10:V, reg _SSget1:cls, reg r13:V, reg all_screens1:*, reg all_screens2:V, reg c11:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg c16:L, reg r15:V, reg _in_:cls, reg valid_screens:*, reg valid_screens1:V, reg p:p(V +), reg n1:*, reg n2:V, reg p1:p(V +), reg r18:V, reg all:cls, reg r19:V, reg c17:L, reg c18:V, reg c20:L, reg par:cls, reg _SSget2:cls, reg r20:V, reg p2:p(V +), reg r22:V, reg par1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg c21:cls, reg r25:V, reg p3:p(V +), reg r27:V, reg rm:cls, reg _SSname:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg c22:cls, reg r30:V, reg p4:p(V +), reg r32:V, reg p5:p(V +), reg _SSenv:*, reg _SSenv1:V, reg p6:p(V +), reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg invisible:cls, reg r38:V, reg valid_screens2:*, reg valid_screens3:V, reg c23:L, reg valid_screens5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sort:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg n3:*, reg n4:V, reg valid_screens6:*, reg valid_screens7:V, reg match:cls, reg r41:V, reg p7:p(V +), reg r43:V, reg r44:V, reg __:cls, reg r45:V, reg _SSassign:cls, reg valid_screens8:*, reg valid_screens9:V, reg p8:p(V +), reg r47:V, reg _SSget3:cls, reg r48:V, reg _in_1:cls, reg temp:*, reg temp1:V, reg p9:p(V +), reg n5:*, reg n6:V, reg p10:p(V +), reg r51:V, reg c24:L, reg valid_screens10:*, reg valid_screens11:V, reg c25:L, reg valid_screens13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg valid_screens14:*, reg valid_screens15:V, reg temp2:*, reg temp3:V, reg r52:V, reg __1:cls, reg r53:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg poss:*, reg poss1:V, reg length:cls, reg r56:V, reg c26:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg poss2:*, reg poss3:V, reg min:cls, reg r59:V, reg r60:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg valid_screens16:*, reg valid_screens17:V, reg min1:cls, reg r62:V, reg screen:cls, reg temp4:*, reg temp5:V, reg p11:p(V +), reg r65:V, reg valid_screens18:*, reg valid_screens19:V |
    mkenv;
    st n = n;
    all_screens_isMissing = missing.0(all_screens);
    if all_screens_isMissing then L0(FALSE) else L0(all_screens);
  L0(all_screens_orDefault):
    st `all.screens` = all_screens_orDefault;
    _SSexists = ldf `.SSexists`;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    r = dyn _SSexists("sp.screens");
    check L21() else D1();
  D1():
    deopt 3 [r];
  L21():
    r1 = `!`(r);
    c = `as.logical`(r1);
    if c then L22() else L1();
  L1():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L22():
    popenv;
    return FALSE;
  L3(r5):
    c1 = `as.logical`(r5);
    if c1 then L27() else L4(c1);
  L25():
    missing = ldf missing in base;
    r6 = dyn missing(<sym n>);
    goto L3(r6);
  L26():
    r4 = dyn base(<sym n>);
    goto L3(r4);
  L4(c3):
    c10 = `as.logical`(c3);
    if c10 then L31() else L6();
  L27():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L5(c6, r8):
    c7 = `as.logical`(r8);
    c8 = `&&`(c6, c7);
    goto L4(c8);
  L6():
    _SSget1 = ldf `.SSget`;
    check L36() else D4();
  L28():
    missing1 = ldf missing in base;
    r9 = dyn missing1(<sym all.screens>);
    goto L5(c1, r9);
  L29():
    r7 = dyn base1(<sym all.screens>);
    goto L5(c1, r7);
  L31():
    _SSget = ldf `.SSget`;
    check L32() else D2();
  D2():
    deopt 18 [];
  D4():
    deopt 25 [];
  L32():
    r10 = dyn _SSget("sp.valid.screens");
    check L33() else D3();
  L36():
    r13 = dyn _SSget1("sp.valid.screens");
    check L37() else D5();
  D3():
    deopt 20 [r10];
  D5():
    deopt 27 [r13];
  L33():
    popenv;
    return r10;
  L37():
    st `valid.screens` = r13;
    all_screens1 = ld `all.screens`;
    check L38() else D6();
  D6():
    deopt 29 [all_screens1];
  L38():
    all_screens2 = force? all_screens1;
    checkMissing(all_screens2);
    c11 = `as.logical`(all_screens2);
    if c11 then L8(c11) else L39();
  L8(c12):
    c20 = `as.logical`(c12);
    if c20 then L46() else L10();
  L39():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L9(c16, r15):
    c17 = `as.logical`(r15);
    c18 = `||`(c16, c17);
    goto L8(c18);
  L10():
    valid_screens2 = ld `valid.screens`;
    check L57() else D17();
  L40():
    _in_ = ldf `%in%`;
    check L42() else D7();
  L41():
    r14 = dyn base2(<lang `%in%`(valid.screens, n)>);
    goto L9(c11, r14);
  L46():
    par = ldf par;
    check L47() else D10();
  D7():
    deopt 34 [c11];
  D10():
    deopt 42 [];
  D17():
    deopt 63 [valid_screens2];
  L42():
    p = prom<V +>{
      valid_screens = ld `valid.screens`;
      valid_screens1 = force? valid_screens;
      checkMissing(valid_screens1);
      return valid_screens1;
    };
    p1 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    r18 = dyn _in_(p, p1);
    check L43() else D8();
  L47():
    p2 = prom<V +>{
      _SSget2 = ldf `.SSget`;
      r20 = dyn _SSget2("sp.saved.pars");
      return r20;
    };
    r22 = dyn par(p2);
    check L48() else D11();
  L57():
    valid_screens3 = force? valid_screens2;
    checkMissing(valid_screens3);
    c23 = `is.object`(valid_screens3);
    if c23 then L58() else L59(valid_screens3);
  D8():
    deopt 37 [c11, r18];
  D11():
    deopt 44 [r22];
  L12(dx1):
    st `valid.screens` = dx1;
    _SSassign = ldf `.SSassign`;
    check L63() else D20();
  L43():
    all = ldf all in base;
    r19 = dyn all(r18);
    check L44() else D9();
  L48():
    par1 = ldf par;
    check L49() else D12();
  L58():
    dr = tryDispatchBuiltin.1("[", valid_screens3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(dr);
  L59(valid_screens5):
    sort = ldf sort;
    check L61() else D18();
  D9():
    deopt 39 [c11, r19];
  D12():
    deopt 46 [];
  D18():
    deopt 66 [valid_screens5];
  D20():
    deopt 73 [];
  L44():
    goto L9(c11, r19);
  L49():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      c21 = ldf c in base;
      r25 = dyn c21(1.0, 1.0);
      goto L0(r25);
    L2():
      r23 = dyn base3(1.0, 1.0);
      goto L0(r23);
    };
    r27 = dyn par1[mfrow, new](p3, FALSE);
    check L50() else D13();
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L61():
    p7 = prom<V +>{
      sym6 = ldf match;
      base6 = ldf match in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      valid_screens6 = ld `valid.screens`;
      valid_screens7 = force? valid_screens6;
      checkMissing(valid_screens7);
      match = ldf match in base;
      r41 = dyn match(n4, valid_screens7, NA_INT, NULL);
      goto L0(r41);
    L2():
      r39 = dyn base6(<sym n>, <sym valid.screens>);
      goto L0(r39);
    };
    r43 = dyn sort(p7);
    check L62() else D19();
  L63():
    p8 = prom<V +>{
      valid_screens8 = ld `valid.screens`;
      valid_screens9 = force? valid_screens8;
      checkMissing(valid_screens9);
      return valid_screens9;
    };
    r47 = dyn _SSassign("sp.valid.screens", p8);
    check L64() else D21();
  D13():
    deopt 51 [r27];
  D19():
    deopt 68 [valid_screens5, r43];
  D21():
    deopt 76 [r47];
  L50():
    rm = ldf rm;
    check L51() else D14();
  L62():
    r44 = `-`(<missing>, r43);
    __ = ldf `[` in base;
    r45 = dyn __(valid_screens5, r44);
    goto L12(r45);
  L64():
    _SSget3 = ldf `.SSget`;
    check L65() else D22();
  D14():
    deopt 53 [];
  D22():
    deopt 78 [];
  L51():
    p5 = prom<V +>{
      _SSname = ldf `.SSname`;
      p4 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r29):
        return r29;
      L1():
        c22 = ldf c in base;
        r30 = dyn c22("sp.screens", "sp.cur.screen", "sp.saved.pars", "sp.valid.screens");
        goto L0(r30);
      L2():
        r28 = dyn base4("sp.screens", "sp.cur.screen", "sp.saved.pars", "sp.valid.screens");
        goto L0(r28);
      };
      r32 = dyn _SSname(p4);
      return r32;
    };
    p6 = prom<V +>{
      _SSenv = ld `.SSenv`;
      _SSenv1 = force? _SSenv;
      checkMissing(_SSenv1);
      return _SSenv1;
    };
    r35 = dyn rm[list, envir](p5, p6);
    check L52() else D15();
  L65():
    r48 = dyn _SSget3("sp.cur.screen");
    check L66() else D23();
  D15():
    deopt 58 [r35];
  D23():
    deopt 80 [r48];
  L52():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L53() else L54();
  L66():
    st temp = r48;
    _in_1 = ldf `%in%`;
    check L67() else D24();
  D24():
    deopt 83 [];
  L11(r37):
    popenv;
    return r37;
  L53():
    invisible = ldf invisible in base;
    r38 = dyn invisible();
    check L55() else D16();
  L54():
    r36 = dyn base5();
    goto L11(r36);
  L67():
    p9 = prom<V +>{
      temp = ld temp;
      temp1 = force? temp;
      checkMissing(temp1);
      return temp1;
    };
    p10 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    r51 = dyn _in_1(p9, p10);
    check L68() else D25();
  D16():
    deopt 62 [r38];
  D25():
    deopt 86 [r51];
  L55():
    goto L11(r38);
  L68():
    c24 = `as.logical`(r51);
    if c24 then L69() else L13();
  L13():
    goto L19();
  L19():
    screen = ldf screen;
    check L91() else D35();
  L69():
    valid_screens10 = ld `valid.screens`;
    check L70() else D26();
  D26():
    deopt 87 [valid_screens10];
  D35():
    deopt 117 [];
  L70():
    valid_screens11 = force? valid_screens10;
    checkMissing(valid_screens11);
    c25 = `is.object`(valid_screens11);
    if c25 then L71() else L72(valid_screens11);
  L91():
    p11 = prom<V +>{
      temp4 = ld temp;
      temp5 = force? temp4;
      checkMissing(temp5);
      return temp5;
    };
    r65 = dyn screen[, new](p11, FALSE);
    check L92() else D36();
  D36():
    deopt 121 [r65];
  L14(dx3):
    st poss = dx3;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L71():
    dr2 = tryDispatchBuiltin.1("[", valid_screens11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L73() else L72(dr2);
  L72(valid_screens13):
    valid_screens14 = ld `valid.screens`;
    check L74() else D27();
  L92():
    valid_screens18 = ld `valid.screens`;
    check L93() else D37();
  D27():
    deopt 89 [valid_screens13, valid_screens14];
  D37():
    deopt 122 [valid_screens18];
  L15(r55):
    c26 = `as.logical`(r55);
    if c26 then L80() else L16();
  L73():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx2);
  L74():
    valid_screens15 = force? valid_screens14;
    checkMissing(valid_screens15);
    temp2 = ld temp;
    check L75() else D28();
  L76():
    poss = ld poss;
    check L78() else D29();
  L77():
    r54 = dyn base7(<sym poss>);
    goto L15(r54);
  L93():
    valid_screens19 = force? valid_screens18;
    checkMissing(valid_screens19);
    popenv;
    return valid_screens19;
  D28():
    deopt 90 [valid_screens13, valid_screens15, temp2];
  D29():
    deopt 97 [poss];
  L16():
    sym9 = ldf min;
    base9 = ldf min in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L86() else L87();
  L18(r60):
    st temp = r60;
    goto L19();
  L75():
    temp3 = force? temp2;
    checkMissing(temp3);
    r52 = `>`(valid_screens15, temp3);
    __1 = ldf `[` in base;
    r53 = dyn __1(valid_screens13, r52);
    goto L14(r53);
  L78():
    poss1 = force? poss;
    checkMissing(poss1);
    length = ldf length in base;
    r56 = dyn length(poss1);
    check L79() else D30();
  L80():
    sym8 = ldf min;
    base8 = ldf min in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  D30():
    deopt 100 [r56];
  L17(r58):
    goto L18(r58);
  L79():
    goto L15(r56);
  L81():
    poss2 = ld poss;
    check L83() else D31();
  L82():
    r57 = dyn base8(<sym poss>);
    goto L17(r57);
  L86():
    valid_screens16 = ld `valid.screens`;
    check L88() else D33();
  L87():
    r61 = dyn base9(<sym valid.screens>);
    goto L18(r61);
  D31():
    deopt 103 [poss2];
  D33():
    deopt 109 [valid_screens16];
  L83():
    poss3 = force? poss2;
    checkMissing(poss3);
    min = ldf min in base;
    r59 = dyn min(poss3);
    check L84() else D32();
  L88():
    valid_screens17 = force? valid_screens16;
    checkMissing(valid_screens17);
    min1 = ldf min in base;
    r62 = dyn min1(valid_screens17);
    check L89() else D34();
  D32():
    deopt 106 [r59];
  D34():
    deopt 112 [r62];
  L84():
    goto L17(r59);
  L89():
    goto L18(r62);
  }
}