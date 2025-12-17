fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2609484401;
    st setLoadActions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2609484401(`...`, `.where`) {
  (reg ddd:dots, reg _where:*) -+> V { var `...`:dots?, var `.where`:*, reg _where_isMissing:L, reg _where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg _actionMetaName:cls, reg r4:V, reg _assignActionListNames:cls, reg _where1:*, reg _where2:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg list:cls, reg ddd1:dots?, reg r9:V, reg allNames:cls, reg actions:*, reg actions1:V, reg p3:p(V +), reg r11:V, reg _in_:cls, reg anames:*, reg anames1:V, reg p4:p(V +), reg currentAnames:*, reg currentAnames1:V, reg p5:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg previous:*, reg previous1:V, reg any:cls, reg r17:V, reg c:L, reg _assignActions:cls, reg actions2:*, reg actions3:V, reg c1:L, reg actions5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg previous2:*, reg previous3:V, reg __:cls, reg r18:V, reg p6:p(V +), reg anames2:*, reg anames3:V, reg c2:L, reg anames5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg previous4:*, reg previous5:V, reg __1:cls, reg r20:V, reg p7:p(V +), reg _where3:*, reg _where4:V, reg p8:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg previous6:*, reg previous7:V, reg all:cls, reg r26:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg list1:cls, reg r29:V, reg anames6:*, reg anames7:V, reg c4:L, reg anames9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg previous8:*, reg previous9:V, reg r32:V, reg __2:cls, reg r33:V, reg actions6:*, reg actions7:V, reg c5:L, reg actions9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg previous10:*, reg previous11:V, reg r34:V, reg __3:cls, reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg anames10:*, reg anames11:V, reg nzchar:cls, reg r38:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg anon:*, reg anon1:V, reg any1:cls, reg r42:V, reg c6:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg currentAnames2:*, reg currentAnames3:V, reg length:cls, reg r45:V, reg paste0:cls, reg seq:cls, reg n:*, reg n1:V, reg r46:V, reg p9:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg actions10:*, reg actions11:V, reg length1:cls, reg r50:V, reg p10:p(V +), reg r52:V, reg p11:p(V +), reg r54:V, reg deflts:*, reg deflts1:V, reg c7:L, reg deflts3:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg anon2:*, reg anon3:V, reg __4:cls, reg r55:V, reg l:*, reg c8:L, reg dx12:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg dx16:V, reg anon4:*, reg anon5:V, reg ___:cls, reg r56:V, reg _assignActions1:cls, reg actions12:*, reg actions13:V, reg p12:p(V +), reg anames12:*, reg anames13:V, reg p13:p(V +), reg _where5:*, reg _where6:V, reg p14:p(V +), reg r60:V, reg assign:cls, reg actionListName:*, reg actionListName1:V, reg p15:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r62:V, reg r63:V, reg currentAnames4:*, reg currentAnames5:V, reg anames14:*, reg anames15:V, reg c9:cls, reg r64:V, reg p16:p(V +), reg _where7:*, reg _where8:V, reg p17:p(V +), reg r67:V |
    mkenv;
    st `...` = ddd;
    _where_isMissing = missing.0(_where);
    if _where_isMissing then L0() else L1(_where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(_where_orDefault):
    st `.where` = _where_orDefault;
    _actionMetaName = ldf `.actionMetaName`;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    r4 = dyn _actionMetaName("");
    check L20() else D1();
  D1():
    deopt 3 [r4];
  L20():
    st actionListName = r4;
    _assignActionListNames = ldf `.assignActionListNames`;
    check L21() else D2();
  D2():
    deopt 6 [];
  L21():
    p2 = prom<V +>{
      _where1 = ld `.where`;
      _where2 = force? _where1;
      checkMissing(_where2);
      return _where2;
    };
    r6 = dyn _assignActionListNames(p2);
    check L22() else D3();
  D3():
    deopt 8 [r6];
  L22():
    st currentAnames = r6;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L2(r8):
    st actions = r8;
    allNames = ldf allNames;
    check L27() else D6();
  L23():
    list = ldf list;
    check L25() else D4();
  L24():
    r7 = dyn base(<sym ...>);
    goto L2(r7);
  D4():
    deopt 12 [];
  D6():
    deopt 17 [];
  L25():
    ddd1 = ld `...`;
    r9 = dyn list[`...`](ddd1);
    check L26() else D5();
  L27():
    p3 = prom<V +>{
      actions = ld actions;
      actions1 = force? actions;
      checkMissing(actions1);
      return actions1;
    };
    r11 = dyn allNames(p3);
    check L28() else D7();
  D5():
    deopt 14 [r9];
  D7():
    deopt 19 [r11];
  L26():
    goto L2(r9);
  L28():
    st anames = r11;
    _in_ = ldf `%in%`;
    check L29() else D8();
  D8():
    deopt 22 [];
  L29():
    p4 = prom<V +>{
      anames = ld anames;
      anames1 = force? anames;
      checkMissing(anames1);
      return anames1;
    };
    p5 = prom<V +>{
      currentAnames = ld currentAnames;
      currentAnames1 = force? currentAnames;
      checkMissing(currentAnames1);
      return currentAnames1;
    };
    r14 = dyn _in_(p4, p5);
    check L30() else D9();
  D9():
    deopt 25 [r14];
  L30():
    st previous = r14;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L3(r16):
    c = `as.logical`(r16);
    if c then L35() else L4();
  L31():
    previous = ld previous;
    check L33() else D10();
  L32():
    r15 = dyn base1(<sym previous>);
    goto L3(r15);
  D10():
    deopt 29 [previous];
  L4():
    goto L11();
  L11():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  L33():
    previous1 = force? previous;
    checkMissing(previous1);
    any = ldf any in base;
    r17 = dyn any(previous1);
    check L34() else D11();
  L35():
    _assignActions = ldf `.assignActions`;
    check L36() else D12();
  D11():
    deopt 32 [r17];
  D12():
    deopt 34 [];
  L12(r37):
    r39 = `!`(r37);
    st anon = r39;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L34():
    goto L3(r17);
  L36():
    p6 = prom<V +>{
      actions2 = ld actions;
      actions3 = force? actions2;
      checkMissing(actions3);
      c1 = `is.object`(actions3);
      if c1 then L1() else L2(actions3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", actions3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(actions5):
      previous2 = ld previous;
      previous3 = force? previous2;
      __ = ldf `[` in base;
      r18 = dyn __(actions5, previous3);
      goto L0(r18);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p7 = prom<V +>{
      anames2 = ld anames;
      anames3 = force? anames2;
      checkMissing(anames3);
      c2 = `is.object`(anames3);
      if c2 then L1() else L2(anames3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", anames3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(anames5):
      previous4 = ld previous;
      previous5 = force? previous4;
      __1 = ldf `[` in base;
      r20 = dyn __1(anames5, previous5);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p8 = prom<V +>{
      _where3 = ld `.where`;
      _where4 = force? _where3;
      checkMissing(_where4);
      return _where4;
    };
    r23 = dyn _assignActions(p6, p7, p8);
    check L37() else D13();
  L59():
    anames10 = ld anames;
    check L61() else D21();
  L60():
    r36 = dyn base4(<sym anames>);
    goto L12(r36);
  D13():
    deopt 38 [r23];
  D21():
    deopt 70 [anames10];
  L13(r41):
    c6 = `as.logical`(r41);
    if c6 then L67() else L14();
  L37():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L61():
    anames11 = force? anames10;
    checkMissing(anames11);
    nzchar = ldf nzchar in base;
    r38 = dyn nzchar(anames11);
    check L62() else D22();
  L63():
    anon = ld anon;
    check L65() else D23();
  L64():
    r40 = dyn base5(<sym anon>);
    goto L13(r40);
  D22():
    deopt 73 [r38];
  D23():
    deopt 78 [anon];
  L5(r25):
    c3 = `as.logical`(r25);
    if c3 then L42() else L6();
  L14():
    goto L18();
  L18():
    _assignActions1 = ldf `.assignActions`;
    check L84() else D32();
  L38():
    previous6 = ld previous;
    check L40() else D14();
  L39():
    r24 = dyn base2(<sym previous>);
    goto L5(r24);
  L62():
    goto L12(r38);
  L65():
    anon1 = force? anon;
    checkMissing(anon1);
    any1 = ldf any in base;
    r42 = dyn any1(anon1);
    check L66() else D24();
  L67():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  D14():
    deopt 41 [previous6];
  D24():
    deopt 81 [r42];
  D32():
    deopt 108 [];
  L6():
    anames6 = ld anames;
    check L48() else D17();
  L15(r44):
    st n = r44;
    paste0 = ldf paste0;
    check L72() else D27();
  L40():
    previous7 = force? previous6;
    checkMissing(previous7);
    all = ldf all in base;
    r26 = dyn all(previous7);
    check L41() else D15();
  L42():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L66():
    goto L13(r42);
  L68():
    currentAnames2 = ld currentAnames;
    check L70() else D25();
  L69():
    r43 = dyn base6(<sym currentAnames>);
    goto L15(r43);
  L84():
    p12 = prom<V +>{
      actions12 = ld actions;
      actions13 = force? actions12;
      checkMissing(actions13);
      return actions13;
    };
    p13 = prom<V +>{
      anames12 = ld anames;
      anames13 = force? anames12;
      checkMissing(anames13);
      return anames13;
    };
    p14 = prom<V +>{
      _where5 = ld `.where`;
      _where6 = force? _where5;
      checkMissing(_where6);
      return _where6;
    };
    r60 = dyn _assignActions1(p12, p13, p14);
    check L85() else D33();
  D15():
    deopt 44 [r26];
  D17():
    deopt 52 [anames6];
  D25():
    deopt 84 [currentAnames2];
  D27():
    deopt 90 [];
  D33():
    deopt 112 [r60];
  L7(r28):
    popenv;
    return r28;
  L41():
    goto L5(r26);
  L43():
    list1 = ldf list in base;
    r29 = dyn list1();
    check L45() else D16();
  L44():
    r27 = dyn base3();
    goto L7(r27);
  L48():
    anames7 = force? anames6;
    checkMissing(anames7);
    c4 = `is.object`(anames7);
    if c4 then L49() else L50(anames7);
  L70():
    currentAnames3 = force? currentAnames2;
    checkMissing(currentAnames3);
    length = ldf length in base;
    r45 = dyn length(currentAnames3);
    check L71() else D26();
  L72():
    p11 = prom<V +>{
      seq = ldf seq;
      p9 = prom<V +>{
        n = ld n;
        n1 = force? n;
        checkMissing(n1);
        r46 = `+`(n1, 1.0);
        return r46;
      };
      p10 = prom<V +>{
        sym7 = ldf length;
        base7 = ldf length in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r49):
        return r49;
      L1():
        actions10 = ld actions;
        actions11 = force? actions10;
        checkMissing(actions11);
        length1 = ldf length in base;
        r50 = dyn length1(actions11);
        goto L0(r50);
      L2():
        r48 = dyn base7(<sym actions>);
        goto L0(r48);
      };
      r52 = dyn seq[from, `length.out`](p9, p10);
      return r52;
    };
    r54 = dyn paste0(".", p11);
    check L73() else D28();
  L85():
    assign = ldf assign;
    check L86() else D34();
  D16():
    deopt 48 [r29];
  D26():
    deopt 87 [r45];
  D28():
    deopt 93 [r54];
  D34():
    deopt 114 [];
  L9(dx5):
    st anames = dx5;
    actions6 = ld actions;
    check L53() else D19();
  L45():
    goto L7(r29);
  L49():
    dr4 = tryDispatchBuiltin.1("[", anames7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L51() else L50(dr4);
  L50(anames9):
    previous8 = ld previous;
    check L52() else D18();
  L71():
    goto L15(r45);
  L73():
    st deflts = r54;
    deflts = ld deflts;
    check L74() else D29();
  L86():
    p15 = prom<V +>{
      actionListName = ld actionListName;
      actionListName1 = force? actionListName;
      checkMissing(actionListName1);
      return actionListName1;
    };
    p16 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      currentAnames4 = ld currentAnames;
      currentAnames5 = force? currentAnames4;
      checkMissing(currentAnames5);
      anames14 = ld anames;
      anames15 = force? anames14;
      checkMissing(anames15);
      c9 = ldf c in base;
      r64 = dyn c9(currentAnames5, anames15);
      goto L0(r64);
    L2():
      r62 = dyn base8(<sym currentAnames>, <sym anames>);
      goto L0(r62);
    };
    p17 = prom<V +>{
      _where7 = ld `.where`;
      _where8 = force? _where7;
      checkMissing(_where8);
      return _where8;
    };
    r67 = dyn assign[, , envir](p15, p16, p17);
    check L87() else D35();
  D18():
    deopt 54 [anames9, previous8];
  D19():
    deopt 59 [actions6];
  D29():
    deopt 95 [deflts];
  D35():
    deopt 119 [r67];
  L51():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L52():
    previous9 = force? previous8;
    checkMissing(previous9);
    r32 = `!`(previous9);
    __2 = ldf `[` in base;
    r33 = dyn __2(anames9, r32);
    goto L9(r33);
  L53():
    actions7 = force? actions6;
    checkMissing(actions7);
    c5 = `is.object`(actions7);
    if c5 then L54() else L55(actions7);
  L74():
    deflts1 = force? deflts;
    checkMissing(deflts1);
    c7 = `is.object`(deflts1);
    if c7 then L75() else L76(deflts1);
  L87():
    popenv;
    return r67;
  L10(dx7):
    st actions = dx7;
    goto L11();
  L16(dx10):
    l = ld anames;
    c8 = `is.object`(l);
    if c8 then L79() else L80(dx10, l);
  L54():
    dr6 = tryDispatchBuiltin.1("[", actions7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L56() else L55(dr6);
  L55(actions9):
    previous10 = ld previous;
    check L57() else D20();
  L75():
    dr8 = tryDispatchBuiltin.1("[", deflts1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L77() else L76(dr8);
  L76(deflts3):
    anon2 = ld anon;
    check L78() else D30();
  D20():
    deopt 61 [actions9, previous10];
  D30():
    deopt 97 [deflts3, anon2];
  L17(dx15, dx16):
    st anames = dx16;
    goto L18();
  L56():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx6);
  L57():
    previous11 = force? previous10;
    checkMissing(previous11);
    r34 = `!`(previous11);
    __3 = ldf `[` in base;
    r35 = dyn __3(actions9, r34);
    goto L10(r35);
  L77():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L16(dx9);
  L78():
    anon3 = force? anon2;
    __4 = ldf `[` in base;
    r55 = dyn __4(deflts3, anon3);
    goto L16(r55);
  L79():
    dr10 = tryDispatchBuiltin.0("[<-", l, dx10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L81() else L80(dx10, dr10);
  L80(dx12, l2):
    anon4 = ld anon;
    check L82() else D31();
  D31():
    deopt 101 [dx12, l2, dx10, anon4];
  L81():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L17(dx10, dx14);
  L82():
    anon5 = force? anon4;
    ___ = ldf `[<-` in base;
    r56 = dyn ___(l2, dx10, anon5);
    goto L17(dx12, r56);
  }
}