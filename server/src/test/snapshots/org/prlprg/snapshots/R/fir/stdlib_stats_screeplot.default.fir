fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4087551575;
    st `screeplot.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4087551575(x, npcs, type, main, `...`) {
  (reg x:*, reg npcs:*, reg type:*, reg main:*, reg ddd:dots) -+> V { var x:*, var npcs:*, reg npcs_isMissing:L, reg npcs_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg length:cls, reg r5:V, reg min:cls, reg r6:V, reg p:p(V +), var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg p1:p(V +), var main:*, reg main_isMissing:L, reg main_orDefault:*, reg deparse1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg substitute:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), var `...`:dots?, reg main1:*, reg main2:V, reg match_arg:cls, reg type1:*, reg type2:V, reg p4:p(V +), reg r19:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r20:V, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg npcs1:*, reg npcs2:V, reg r24:I, reg dev_hold:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg on_exit:cls, reg r28:V, reg type3:*, reg type4:V, reg r29:V, reg c3:L, reg barplot:cls, reg pcs:*, reg pcs1:V, reg c4:L, reg pcs3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg xp:*, reg xp1:V, reg __:cls, reg r30:V, reg p5:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg pcs4:*, reg pcs5:V, reg c5:L, reg pcs7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg xp2:*, reg xp3:V, reg __1:cls, reg r34:V, reg names:cls, reg r35:V, reg p6:p(V +), reg main3:*, reg main4:V, reg p7:p(V +), reg ddd1:dots?, reg r38:V, reg plot:cls, reg xp4:*, reg xp5:V, reg p8:p(V +), reg pcs8:*, reg pcs9:V, reg c6:L, reg pcs11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg xp6:*, reg xp7:V, reg __2:cls, reg r41:V, reg p9:p(V +), reg main5:*, reg main6:V, reg p10:p(V +), reg ddd2:dots?, reg r44:V, reg axis:cls, reg r45:V, reg axis1:cls, reg xp8:*, reg xp9:V, reg p11:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg pcs12:*, reg pcs13:V, reg c7:L, reg pcs15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg xp10:*, reg xp11:V, reg __3:cls, reg r49:V, reg names1:cls, reg r50:V, reg p12:p(V +), reg r52:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg invisible:cls, reg r55:V |
    mkenv;
    st x = x;
    npcs_isMissing = missing.0(npcs);
    if npcs_isMissing then L0() else L1(npcs);
  L0():
    p = prom<V +>{
      sym = ldf min;
      base = ldf min in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(10.0, <lang length(`$`(x, sdev))>);
      goto L0(r);
    L1(r3):
      min = ldf min in base;
      r6 = dyn min(10.0, r3);
      goto L0(r6);
    L4():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L7() else L8(x2);
    L5():
      r2 = dyn base1(<lang `$`(x, sdev)>);
      goto L1(r2);
    L6(dx1):
      length = ldf length in base;
      r5 = dyn length(dx1);
      goto L1(r5);
    L7():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L9() else L8(dr);
    L8(x4):
      r4 = `$`(x4, <sym sdev>);
      goto L6(r4);
    L9():
      dx = getTryDispatchBuiltinValue(dr);
      goto L6(dx);
    };
    goto L1(p);
  L1(npcs_orDefault):
    st npcs = npcs_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L2() else L3(type);
  L2():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      c1 = ldf c in base;
      r10 = dyn c1("barplot", "lines");
      goto L0(r10);
    L2():
      r8 = dyn base2("barplot", "lines");
      goto L0(r8);
    };
    goto L3(p1);
  L3(type_orDefault):
    st type = type_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L4() else L5(main);
  L4():
    p3 = prom<V +>{
      deparse1 = ldf deparse1;
      p2 = prom<V +>{
        sym3 = ldf substitute;
        base3 = ldf substitute in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r13):
        return r13;
      L1():
        substitute = ldf substitute in base;
        r14 = dyn substitute(<sym x>);
        goto L0(r14);
      L2():
        r12 = dyn base3(<sym x>);
        goto L0(r12);
      };
      r16 = dyn deparse1(p2);
      return r16;
    };
    goto L5(p3);
  L5(main_orDefault):
    st main = main_orDefault;
    st `...` = ddd;
    main1 = ld main;
    check L11() else D0();
  D0():
    deopt 0 [main1];
  L11():
    main2 = force? main1;
    checkMissing(main2);
    match_arg = ldf `match.arg`;
    check L12() else D1();
  D1():
    deopt 3 [];
  L12():
    p4 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r19 = dyn match_arg(p4);
    check L13() else D2();
  D2():
    deopt 5 [r19];
  L13():
    st type = r19;
    x5 = ld x;
    check L14() else D3();
  D3():
    deopt 7 [x5];
  L14():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L16() else L17(x6);
  L15(dx3):
    r21 = `^`(dx3, 2.0);
    st pcs = r21;
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L19() else L20();
  L16():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(x8):
    r20 = `$`(x8, <sym sdev>);
    goto L15(r20);
  L6(r23):
    st xp = r23;
    dev_hold = ldf `dev.hold`;
    check L22() else D5();
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L19():
    npcs1 = ld npcs;
    check L21() else D4();
  L20():
    r22 = dyn base4(<sym npcs>);
    goto L6(r22);
  D4():
    deopt 14 [npcs1];
  D5():
    deopt 19 [];
  L21():
    npcs2 = force? npcs1;
    checkMissing(npcs2);
    r24 = seq_len(npcs2);
    goto L6(r24);
  L22():
    r25 = dyn dev_hold();
    check L23() else D6();
  D6():
    deopt 20 [r25];
  L23():
    sym5 = ldf `on.exit`;
    base5 = ldf `on.exit` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L24() else L25();
  L7():
    type3 = ld type;
    check L26() else D7();
  L24():
    on_exit = ldf `on.exit` in base;
    r28 = dyn on_exit(<lang dev.flush()>);
    goto L7();
  L25():
    r26 = dyn base5(<lang dev.flush()>);
    goto L7();
  D7():
    deopt 24 [type3];
  L26():
    type4 = force? type3;
    checkMissing(type4);
    r29 = `==`(type4, "barplot");
    c3 = `as.logical`(r29);
    if c3 then L27() else L8();
  L8():
    plot = ldf plot;
    check L31() else D10();
  L9():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L37() else L38();
  L27():
    barplot = ldf barplot;
    check L28() else D8();
  D8():
    deopt 29 [];
  D10():
    deopt 40 [];
  L10(r54):
    popenv;
    return r54;
  L28():
    p5 = prom<V +>{
      pcs = ld pcs;
      pcs1 = force? pcs;
      checkMissing(pcs1);
      c4 = `is.object`(pcs1);
      if c4 then L1() else L2(pcs1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", pcs1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(pcs3):
      xp = ld xp;
      xp1 = force? xp;
      __ = ldf `[` in base;
      r30 = dyn __(pcs3, xp1);
      goto L0(r30);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r33):
      return r33;
    L2():
      pcs4 = ld pcs;
      pcs5 = force? pcs4;
      checkMissing(pcs5);
      c5 = `is.object`(pcs5);
      if c5 then L4() else L5(pcs5);
    L3():
      r32 = dyn base6(<lang `[`(pcs, xp)>);
      goto L0(r32);
    L1(dx7):
      names = ldf names in base;
      r35 = dyn names(dx7);
      goto L0(r35);
    L4():
      dr6 = tryDispatchBuiltin.1("[", pcs5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L6() else L5(dr6);
    L5(pcs7):
      xp2 = ld xp;
      xp3 = force? xp2;
      __1 = ldf `[` in base;
      r34 = dyn __1(pcs7, xp3);
      goto L1(r34);
    L6():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    };
    p7 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    ddd1 = ld `...`;
    r38 = dyn barplot[, `names.arg`, main, ylab, `...`](p5, p6, p7, "Variances", ddd1);
    check L29() else D9();
  L31():
    p8 = prom<V +>{
      xp4 = ld xp;
      xp5 = force? xp4;
      checkMissing(xp5);
      return xp5;
    };
    p9 = prom<V +>{
      pcs8 = ld pcs;
      pcs9 = force? pcs8;
      checkMissing(pcs9);
      c6 = `is.object`(pcs9);
      if c6 then L1() else L2(pcs9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", pcs9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(pcs11):
      xp6 = ld xp;
      xp7 = force? xp6;
      __2 = ldf `[` in base;
      r41 = dyn __2(pcs11, xp7);
      goto L0(r41);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p10 = prom<V +>{
      main5 = ld main;
      main6 = force? main5;
      checkMissing(main6);
      return main6;
    };
    ddd2 = ld `...`;
    r44 = dyn plot[, , type, axes, main, xlab, ylab, `...`](p8, p9, "b", FALSE, p10, "", "Variances", ddd2);
    check L32() else D11();
  L37():
    invisible = ldf invisible in base;
    r55 = dyn invisible();
    check L39() else D16();
  L38():
    r53 = dyn base8();
    goto L10(r53);
  D9():
    deopt 38 [r38];
  D11():
    deopt 54 [r44];
  D16():
    deopt 70 [r55];
  L29():
    goto L9();
  L32():
    axis = ldf axis;
    check L33() else D12();
  L39():
    goto L10(r55);
  D12():
    deopt 56 [];
  L33():
    r45 = dyn axis(2.0);
    check L34() else D13();
  D13():
    deopt 58 [r45];
  L34():
    axis1 = ldf axis;
    check L35() else D14();
  D14():
    deopt 60 [];
  L35():
    p11 = prom<V +>{
      xp8 = ld xp;
      xp9 = force? xp8;
      checkMissing(xp9);
      return xp9;
    };
    p12 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r48):
      return r48;
    L2():
      pcs12 = ld pcs;
      pcs13 = force? pcs12;
      checkMissing(pcs13);
      c7 = `is.object`(pcs13);
      if c7 then L4() else L5(pcs13);
    L3():
      r47 = dyn base7(<lang `[`(pcs, xp)>);
      goto L0(r47);
    L1(dx11):
      names1 = ldf names in base;
      r50 = dyn names1(dx11);
      goto L0(r50);
    L4():
      dr10 = tryDispatchBuiltin.1("[", pcs13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L6() else L5(dr10);
    L5(pcs15):
      xp10 = ld xp;
      xp11 = force? xp10;
      __3 = ldf `[` in base;
      r49 = dyn __3(pcs15, xp11);
      goto L1(r49);
    L6():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx10);
    };
    r52 = dyn axis1[, at, labels](1.0, p11, p12);
    check L36() else D15();
  D15():
    deopt 66 [r52];
  L36():
    goto L9();
  }
}