fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `plot.TukeyHSD` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x3:V, reg x4:*, reg x5:V, reg c1:L, reg i6:I, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r3:V, reg c2:L, reg i12:I, reg dr2:V, reg dc1:L, reg dx4:V, reg i14:I, reg dx5:V, reg __1:cls, reg r4:V, reg nrow:cls, reg xi:*, reg xi1:V, reg p:p(V +), reg r6:V, reg r7:V, reg dev_hold:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg i17:I, reg on_exit:cls, reg r11:V, reg plot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg xi2:*, reg xi3:V, reg c3:L, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r14:V, reg xi6:*, reg xi7:V, reg c4:L, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r15:V, reg c5:cls, reg r16:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg yvals:*, reg yvals1:V, reg rep_int:cls, reg r20:V, reg p2:p(V +), reg ddd1:dots?, reg r22:V, reg axis:cls, reg ddd2:dots?, reg r23:V, reg axis1:cls, reg nrow1:cls, reg xi10:*, reg xi11:V, reg p3:p(V +), reg r25:V, reg r26:V, reg p4:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg xi12:*, reg xi13:V, reg dimnames:cls, reg r30:V, reg c6:L, reg r32:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r33:V, reg p5:p(V +), reg ddd3:dots?, reg r35:V, reg abline:cls, reg yvals2:*, reg yvals3:V, reg p6:p(V +), reg r37:V, reg abline1:cls, reg ddd4:dots?, reg r38:V, reg segments:cls, reg xi14:*, reg xi15:V, reg c7:L, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r39:V, reg p7:p(V +), reg yvals4:*, reg yvals5:V, reg p8:p(V +), reg xi18:*, reg xi19:V, reg c8:L, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __6:cls, reg r42:V, reg p9:p(V +), reg yvals6:*, reg yvals7:V, reg p10:p(V +), reg ddd5:dots?, reg r45:V, reg segments1:cls, reg as_vector:cls, reg xi22:*, reg xi23:V, reg p11:p(V +), reg r47:V, reg p12:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg yvals8:*, reg yvals9:V, reg r51:V, reg rep_int1:cls, reg r52:V, reg p13:p(V +), reg as_vector1:cls, reg xi24:*, reg xi25:V, reg p14:p(V +), reg r55:V, reg p15:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg yvals10:*, reg yvals11:V, reg r59:V, reg rep_int2:cls, reg r60:V, reg p16:p(V +), reg ddd6:dots?, reg r62:V, reg title:cls, reg paste0:cls, reg format:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:R, reg r67:V, reg x8:*, reg x9:V, reg attr:cls, reg r68:V, reg r69:V, reg p17:p(V +), reg r71:V, reg p18:p(V +), reg r73:V, reg p19:p(V +), reg paste1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r75:V, reg r76:V, reg x10:*, reg x11:V, reg names:cls, reg r77:V, reg c9:L, reg r79:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg i18:*, reg i19:V, reg __7:cls, reg r80:V, reg p20:p(V +), reg r82:V, reg p21:p(V +), reg r84:V, reg box:cls, reg r85:V, reg dev_flush:cls, reg r86:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r87:V, reg i22:I, reg on_exit1:cls, reg r89:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L6();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    r2 = seq_along(x2);
    goto L0(r2);
  L6():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    x4 = ld x;
    check L11() else D1();
  L10():
    invisible.0();
    popenv;
    return i2;
  D1():
    deopt 4 [i2, x4];
  L11():
    x5 = force? x4;
    checkMissing(x5);
    c1 = `is.object`(x5);
    if c1 then L12() else L13(i2, x5);
  L2(i8, dx1):
    c2 = `is.object`(dx1);
    if c2 then L16() else L17(i8);
  L12():
    dr = tryDispatchBuiltin.1("[[", x5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(i2, dr);
  L13(i6, x7):
    i9 = ld i;
    check L15() else D2();
  D2():
    deopt 6 [i6, x7, i9];
  L3(i14, dx5):
    st xi = dx5;
    nrow = ldf nrow;
    check L19() else D3();
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L15():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r3 = dyn __(x7, i10);
    goto L2(i6, r3);
  L16():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(i8);
  L17(i12):
    __1 = ldf `[` in base;
    r4 = dyn __1(dx1, <missing>, -4, FALSE);
    goto L3(i12, r4);
  D3():
    deopt 18 [i14];
  L18():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L3(i8, dx4);
  L19():
    p = prom<V +>{
      xi = ld xi;
      xi1 = force? xi;
      checkMissing(xi1);
      return xi1;
    };
    r6 = dyn nrow(p);
    check L20() else D4();
  D4():
    deopt 20 [i14, r6];
  L20():
    r7 = `:`(r6, 1);
    st yvals = r7;
    dev_hold = ldf `dev.hold`;
    check L21() else D5();
  D5():
    deopt 25 [i14];
  L21():
    r8 = dyn dev_hold();
    check L22() else D6();
  D6():
    deopt 26 [i14, r8];
  L22():
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L4(i17):
    plot = ldf plot;
    check L25() else D7();
  L23():
    on_exit = ldf `on.exit` in base;
    r11 = dyn on_exit(<lang dev.flush()>);
    goto L4(i14);
  L24():
    r9 = dyn base1(<lang dev.flush()>);
    goto L4(i14);
  D7():
    deopt 31 [i17];
  L25():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r13):
      return r13;
    L3():
      xi2 = ld xi;
      xi3 = force? xi2;
      checkMissing(xi3);
      c3 = `is.object`(xi3);
      if c3 then L5() else L6();
    L4():
      r12 = dyn base2(<lang `[`(xi, , "lwr")>, <lang `[`(xi, , "upr")>);
      goto L0(r12);
    L1(dx7):
      xi6 = ld xi;
      xi7 = force? xi6;
      checkMissing(xi7);
      c4 = `is.object`(xi7);
      if c4 then L8() else L9();
    L5():
      dr4 = tryDispatchBuiltin.1("[", xi3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6();
    L6():
      __2 = ldf `[` in base;
      r14 = dyn __2(xi3, <missing>, "lwr");
      goto L1(r14);
    L2(dx9):
      c5 = ldf c in base;
      r16 = dyn c5(dx7, dx9);
      goto L0(r16);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx6);
    L8():
      dr6 = tryDispatchBuiltin.1("[", xi7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L10() else L9();
    L9():
      __3 = ldf `[` in base;
      r15 = dyn __3(xi7, <missing>, "upr");
      goto L2(r15);
    L10():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx8);
    };
    p2 = prom<V +>{
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      yvals = ld yvals;
      yvals1 = force? yvals;
      checkMissing(yvals1);
      rep_int = ldf `rep.int` in base;
      r20 = dyn rep_int(yvals1, 2);
      goto L0(r20);
    L2():
      r18 = dyn base3(<sym yvals>, 2);
      goto L0(r18);
    };
    ddd1 = ld `...`;
    r22 = dyn plot[, , type, axes, xlab, ylab, main, `...`](p1, p2, "n", FALSE, "", "", NULL, ddd1);
    check L26() else D8();
  D8():
    deopt 45 [i17, r22];
  L26():
    axis = ldf axis;
    check L27() else D9();
  D9():
    deopt 47 [i17];
  L27():
    ddd2 = ld `...`;
    r23 = dyn axis[, `...`](1.0, ddd2);
    check L28() else D10();
  D10():
    deopt 50 [i17, r23];
  L28():
    axis1 = ldf axis;
    check L29() else D11();
  D11():
    deopt 52 [i17];
  L29():
    p4 = prom<V +>{
      nrow1 = ldf nrow;
      p3 = prom<V +>{
        xi10 = ld xi;
        xi11 = force? xi10;
        checkMissing(xi11);
        return xi11;
      };
      r25 = dyn nrow1(p3);
      r26 = `:`(r25, 1.0);
      return r26;
    };
    p5 = prom<V +>{
      sym4 = ldf dimnames;
      base4 = ldf dimnames in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r29):
      c6 = `is.object`(r29);
      if c6 then L4() else L5(r29);
    L2():
      xi12 = ld xi;
      xi13 = force? xi12;
      checkMissing(xi13);
      dimnames = ldf dimnames in base;
      r30 = dyn dimnames(xi13);
      goto L0(r30);
    L3():
      r28 = dyn base4(<sym xi>);
      goto L0(r28);
    L1(dx11):
      return dx11;
    L4():
      dr8 = tryDispatchBuiltin.1("[[", r29);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(r32):
      __4 = ldf `[[` in base;
      r33 = dyn __4(r32, 1);
      goto L1(r33);
    L6():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx10);
    };
    ddd3 = ld `...`;
    r35 = dyn axis1[, at, labels, srt, `...`](2.0, p4, p5, 0.0, ddd3);
    check L30() else D12();
  D12():
    deopt 61 [i17, r35];
  L30():
    abline = ldf abline;
    check L31() else D13();
  D13():
    deopt 63 [i17];
  L31():
    p6 = prom<V +>{
      yvals2 = ld yvals;
      yvals3 = force? yvals2;
      checkMissing(yvals3);
      return yvals3;
    };
    r37 = dyn abline[h, lty, lwd, col](p6, 1.0, 0.5, "lightgray");
    check L32() else D14();
  D14():
    deopt 72 [i17, r37];
  L32():
    abline1 = ldf abline;
    check L33() else D15();
  D15():
    deopt 74 [i17];
  L33():
    ddd4 = ld `...`;
    r38 = dyn abline1[v, lty, lwd, `...`](0.0, 2.0, 0.5, ddd4);
    check L34() else D16();
  D16():
    deopt 82 [i17, r38];
  L34():
    segments = ldf segments;
    check L35() else D17();
  D17():
    deopt 84 [i17];
  L35():
    p7 = prom<V +>{
      xi14 = ld xi;
      xi15 = force? xi14;
      checkMissing(xi15);
      c7 = `is.object`(xi15);
      if c7 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr10 = tryDispatchBuiltin.1("[", xi15);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r39 = dyn __5(xi15, <missing>, "lwr");
      goto L0(r39);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    p8 = prom<V +>{
      yvals4 = ld yvals;
      yvals5 = force? yvals4;
      checkMissing(yvals5);
      return yvals5;
    };
    p9 = prom<V +>{
      xi18 = ld xi;
      xi19 = force? xi18;
      checkMissing(xi19);
      c8 = `is.object`(xi19);
      if c8 then L1() else L2();
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("[", xi19);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __6 = ldf `[` in base;
      r42 = dyn __6(xi19, <missing>, "upr");
      goto L0(r42);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    p10 = prom<V +>{
      yvals6 = ld yvals;
      yvals7 = force? yvals6;
      checkMissing(yvals7);
      return yvals7;
    };
    ddd5 = ld `...`;
    r45 = dyn segments[, , , , `...`](p7, p8, p9, p10, ddd5);
    check L36() else D18();
  D18():
    deopt 90 [i17, r45];
  L36():
    segments1 = ldf segments;
    check L37() else D19();
  D19():
    deopt 92 [i17];
  L37():
    p12 = prom<V +>{
      as_vector = ldf `as.vector`;
      p11 = prom<V +>{
        xi22 = ld xi;
        xi23 = force? xi22;
        checkMissing(xi23);
        return xi23;
      };
      r47 = dyn as_vector(p11);
      return r47;
    };
    p13 = prom<V +>{
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      yvals8 = ld yvals;
      yvals9 = force? yvals8;
      checkMissing(yvals9);
      r51 = `-`(yvals9, 0.1);
      rep_int1 = ldf `rep.int` in base;
      r52 = dyn rep_int1(r51, 3);
      goto L0(r52);
    L2():
      r49 = dyn base5(<lang `-`(yvals, 0.1)>, 3);
      goto L0(r49);
    };
    p15 = prom<V +>{
      as_vector1 = ldf `as.vector`;
      p14 = prom<V +>{
        xi24 = ld xi;
        xi25 = force? xi24;
        checkMissing(xi25);
        return xi25;
      };
      r55 = dyn as_vector1(p14);
      return r55;
    };
    p16 = prom<V +>{
      sym6 = ldf `rep.int`;
      base6 = ldf `rep.int` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r58):
      return r58;
    L1():
      yvals10 = ld yvals;
      yvals11 = force? yvals10;
      checkMissing(yvals11);
      r59 = `+`(yvals11, 0.1);
      rep_int2 = ldf `rep.int` in base;
      r60 = dyn rep_int2(r59, 3);
      goto L0(r60);
    L2():
      r57 = dyn base6(<lang `+`(yvals, 0.1)>, 3);
      goto L0(r57);
    };
    ddd6 = ld `...`;
    r62 = dyn segments1[, , , , `...`](p12, p13, p15, p16, ddd6);
    check L38() else D20();
  D20():
    deopt 98 [i17, r62];
  L38():
    title = ldf title;
    check L39() else D21();
  D21():
    deopt 100 [i17];
  L39():
    p19 = prom<V +>{
      paste0 = ldf paste0;
      p18 = prom<V +>{
        format = ldf format;
        p17 = prom<V +>{
          sym7 = ldf attr;
          base7 = ldf attr in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r66, r67):
          r69 = `*`(r66, r67);
          return r69;
        L1():
          x8 = ld x;
          x9 = force? x8;
          checkMissing(x9);
          attr = ldf attr in base;
          r68 = dyn attr(x9, "conf.level");
          goto L0(100.0, r68);
        L2():
          r65 = dyn base7(<sym x>, "conf.level");
          goto L0(100.0, r65);
        };
        r71 = dyn format[, digits](p17, 2);
        return r71;
      };
      r73 = dyn paste0(p18, "% family-wise confidence level\n");
      return r73;
    };
    p21 = prom<V +>{
      paste1 = ldf paste;
      p20 = prom<V +>{
        sym8 = ldf names;
        base8 = ldf names in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L2() else L3();
      L0(r76):
        c9 = `is.object`(r76);
        if c9 then L4() else L5(r76);
      L2():
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        names = ldf names in base;
        r77 = dyn names(x11);
        goto L0(r77);
      L3():
        r75 = dyn base8(<sym x>);
        goto L0(r75);
      L1(dx17):
        return dx17;
      L4():
        dr14 = tryDispatchBuiltin.1("[", r76);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L6() else L5(dr14);
      L5(r79):
        i18 = ld i;
        i19 = force? i18;
        __7 = ldf `[` in base;
        r80 = dyn __7(r79, i19);
        goto L1(r80);
      L6():
        dx16 = getTryDispatchBuiltinValue(dr14);
        goto L1(dx16);
      };
      r82 = dyn paste1("Differences in mean levels of", p20);
      return r82;
    };
    r84 = dyn title[main, xlab](p19, p21);
    check L40() else D22();
  D22():
    deopt 105 [i17, r84];
  L40():
    box = ldf box;
    check L41() else D23();
  D23():
    deopt 107 [i17];
  L41():
    r85 = dyn box();
    check L42() else D24();
  D24():
    deopt 108 [i17, r85];
  L42():
    dev_flush = ldf `dev.flush`;
    check L43() else D25();
  D25():
    deopt 110 [i17];
  L43():
    r86 = dyn dev_flush();
    check L44() else D26();
  D26():
    deopt 111 [i17, r86];
  L44():
    sym9 = ldf `on.exit`;
    base9 = ldf `on.exit` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L45() else L46();
  L5(i22):
    goto L1(i22);
  L45():
    on_exit1 = ldf `on.exit` in base;
    r89 = dyn on_exit1();
    goto L5(i17);
  L46():
    r87 = dyn base9();
    goto L5(i17);
  }
}