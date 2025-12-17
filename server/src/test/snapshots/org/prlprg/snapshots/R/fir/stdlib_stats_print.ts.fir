fun main() {
  () -+> V { reg r:cls, reg print:cls, reg ts:cls, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg print1:cls, reg window:cls, reg sunspot_month:*, reg sunspot_month1:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg _preformat_ts:cls, reg sunsp_1:*, reg sunsp_2:V, reg p6:p(V +), reg r18:V |
    mkenv;
    r = clos inner155988144;
    st `print.ts` = r;
    print = ldf print;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p2 = prom<V +>{
      ts = ldf ts;
      p = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      p1 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        c = ldf c in base;
        r4 = dyn c(12.0, 2.0);
        goto L0(r4);
      L2():
        r2 = dyn base(12.0, 2.0);
        goto L0(r2);
      };
      r6 = dyn ts[, frequency, start](p, 7.0, p1);
      return r6;
    };
    r8 = dyn print[, calendar](p2, TRUE);
    check L1() else D1();
  D1():
    deopt 8 [r8];
  L1():
    print1 = ldf print;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p5 = prom<V +>{
      window = ldf window;
      p3 = prom<V +>{
        sunspot_month = ld `sunspot.month`;
        sunspot_month1 = force? sunspot_month;
        checkMissing(sunspot_month1);
        return sunspot_month1;
      };
      p4 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r11):
        return r11;
      L1():
        c1 = ldf c in base;
        r12 = dyn c1(1756.0, 12.0);
        goto L0(r12);
      L2():
        r10 = dyn base1(1756.0, 12.0);
        goto L0(r10);
      };
      r14 = dyn window[, end](p3, p4);
      st `sunsp.1` = r14;
      invisible.0();
      return r14;
    };
    r16 = dyn print1(p5);
    check L3() else D3();
  D3():
    deopt 12 [r16];
  L3():
    _preformat_ts = ldf `.preformat.ts`;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p6 = prom<V +>{
      sunsp_1 = ld `sunsp.1`;
      sunsp_2 = force? sunsp_1;
      checkMissing(sunsp_2);
      return sunsp_2;
    };
    r18 = dyn _preformat_ts(p6);
    check L5() else D5();
  D5():
    deopt 16 [r18];
  L5():
    st m = r18;
    invisible.0();
    popenv;
    return r18;
  }
}
fun inner155988144(x, calendar, `...`) {
  (reg x:*, reg calendar:*, reg ddd:dots) -+> V { var x:*, var calendar:*, var `...`:dots?, reg as_ts:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg tsp:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg Tsp:*, reg Tsp1:V, reg c:V, reg c1:L, reg warning:cls, reg r6:V, reg print:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg unclass:cls, reg r9:V, reg p2:p(V +), reg ddd1:dots?, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x7:*, reg x8:V, reg invisible:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:R, reg r21:V, reg round:cls, reg r22:V, reg r23:V, reg NROW:cls, reg x9:*, reg x10:V, reg p3:p(V +), reg r25:V, reg nn:*, reg nn1:V, reg r26:V, reg c2:L, reg warning1:cls, reg gettextf:cls, reg NROW1:cls, reg x11:*, reg x12:V, reg p4:p(V +), reg r28:V, reg p5:p(V +), reg nn2:*, reg nn3:V, reg p6:p(V +), reg r31:V, reg p7:p(V +), reg r33:V, reg frequency:cls, reg x13:*, reg x14:V, reg p8:p(V +), reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg missing:cls, reg r39:V, reg c3:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg fr_x:*, reg fr_x1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg fr_x4:V, reg r43:V, reg c4:cls, reg r44:V, reg r45:V, reg any:cls, reg r46:V, reg c5:L, reg c7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg c10:L, reg r48:V, reg start:cls, reg x15:*, reg x16:V, reg p9:p(V +), reg r50:V, reg length:cls, reg r51:V, reg r52:V, reg c11:L, reg c12:V, reg calendar1:*, reg calendar2:V, reg r53:V, reg c15:L, reg fr_x5:*, reg fr_x6:V, reg r54:V, reg c16:L, reg cat:cls, reg deparse:cls, reg start1:cls, reg x17:*, reg x18:V, reg p10:p(V +), reg r56:V, reg p11:p(V +), reg r58:V, reg p12:p(V +), reg deparse1:cls, reg end:cls, reg x19:*, reg x20:V, reg p13:p(V +), reg r61:V, reg p14:p(V +), reg r63:V, reg p15:p(V +), reg deparse2:cls, reg fr_x7:*, reg fr_x8:V, reg p16:p(V +), reg r66:V, reg p17:p(V +), reg r68:V, reg r69:V, reg cat1:cls, reg format:cls, reg tsp1:cls, reg x21:*, reg x22:V, reg p18:p(V +), reg r71:V, reg c17:L, reg r73:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r74:V, reg p19:p(V +), reg r76:V, reg p20:p(V +), reg format1:cls, reg tsp2:cls, reg x23:*, reg x24:V, reg p21:p(V +), reg r79:V, reg c18:L, reg r81:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r82:V, reg p22:p(V +), reg r84:V, reg p23:p(V +), reg deparse3:cls, reg fr_x9:*, reg fr_x10:V, reg p24:p(V +), reg r87:V, reg p25:p(V +), reg r89:V, reg print1:cls, reg _preformat_ts:cls, reg x25:*, reg x26:V, reg p26:p(V +), reg calendar3:*, reg calendar4:V, reg p27:p(V +), reg ddd2:dots?, reg r93:V, reg p28:p(V +), reg ddd3:dots?, reg r95:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r96:V, reg r97:V, reg x27:*, reg x28:V, reg invisible1:cls, reg r98:V |
    mkenv;
    st x = x;
    st calendar = calendar;
    st `...` = ddd;
    as_ts = ldf `as.ts`;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_ts(p);
    check L20() else D1();
  D1():
    deopt 3 [r1];
  L20():
    st x = r1;
    tsp = ldf tsp;
    check L21() else D2();
  D2():
    deopt 6 [];
  L21():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn tsp(p1);
    check L22() else D3();
  D3():
    deopt 8 [r3];
  L22():
    st Tsp = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r5):
    c1 = `as.logical`(r5);
    if c1 then L26() else L1();
  L23():
    Tsp = ld Tsp;
    check L25() else D4();
  L24():
    r4 = dyn base(<sym Tsp>);
    goto L0(r4);
  D4():
    deopt 11 [Tsp];
  L1():
    sym3 = ldf round;
    base3 = ldf round in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L25():
    Tsp1 = force? Tsp;
    checkMissing(Tsp1);
    c = `==`(Tsp1, NULL);
    goto L0(c);
  L26():
    warning = ldf warning;
    check L27() else D5();
  D5():
    deopt 15 [];
  L4(r20, r21):
    r23 = `+`(r20, r21);
    st nn = r23;
    NROW = ldf NROW;
    check L39() else D11();
  L27():
    r6 = dyn warning("series is corrupt, with no 'tsp' attribute");
    check L28() else D6();
  L37():
    round = ldf round in base;
    r22 = dyn round(<lang `*`(`(`(`-`(`[`(Tsp, 2), `[`(Tsp, 1))), `[`(Tsp, 3))>);
    goto L4(1.0, r22);
  L38():
    r19 = dyn base3(<lang `*`(`(`(`-`(`[`(Tsp, 2), `[`(Tsp, 1))), `[`(Tsp, 3))>);
    goto L4(1.0, r19);
  D6():
    deopt 17 [r6];
  D11():
    deopt 39 [];
  L28():
    print = ldf print;
    check L29() else D7();
  L39():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r25 = dyn NROW(p3);
    check L40() else D12();
  D7():
    deopt 19 [];
  D12():
    deopt 41 [r25];
  L29():
    p2 = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      unclass = ldf unclass in base;
      r9 = dyn unclass(x6);
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym x>);
      goto L0(r7);
    };
    ddd1 = ld `...`;
    r11 = dyn print[, `...`](p2, ddd1);
    check L30() else D8();
  L40():
    nn = ld nn;
    check L41() else D13();
  D8():
    deopt 22 [r11];
  D13():
    deopt 41 [r25, nn];
  L30():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L41():
    nn1 = force? nn;
    checkMissing(nn1);
    r26 = `!=`(r25, nn1);
    c2 = `as.logical`(r26);
    if c2 then L42() else L5();
  L2(r13):
    popenv;
    return r13;
  L5():
    goto L6();
  L6():
    frequency = ldf frequency;
    check L46() else D16();
  L31():
    x7 = ld x;
    check L33() else D9();
  L32():
    r12 = dyn base2(<sym x>);
    goto L2(r12);
  L42():
    warning1 = ldf warning;
    check L43() else D14();
  D9():
    deopt 25 [x7];
  D14():
    deopt 45 [];
  D16():
    deopt 58 [];
  L33():
    x8 = force? x7;
    checkMissing(x8);
    invisible = ldf invisible in base;
    r14 = dyn invisible(x8);
    check L34() else D10();
  L43():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        NROW1 = ldf NROW;
        p4 = prom<V +>{
          x11 = ld x;
          x12 = force? x11;
          checkMissing(x12);
          return x12;
        };
        r28 = dyn NROW1(p4);
        return r28;
      };
      p6 = prom<V +>{
        nn2 = ld nn;
        nn3 = force? nn2;
        checkMissing(nn3);
        return nn3;
      };
      r31 = dyn gettextf("series is corrupt: length %d with 'tsp' implying %d", p5, p6);
      return r31;
    };
    r33 = dyn warning1[, domain, `call.`](p7, NA_LGL, FALSE);
    check L44() else D15();
  L46():
    p8 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r36 = dyn frequency(p8);
    check L47() else D17();
  D10():
    deopt 28 [r14];
  D15():
    deopt 51 [r33];
  D17():
    deopt 60 [r36];
  L34():
    goto L2(r14);
  L44():
    st calendar = FALSE;
    goto L6();
  L47():
    st `fr.x` = r36;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L7(r38):
    c3 = `as.logical`(r38);
    if c3 then L50() else L8();
  L48():
    missing = ldf missing in base;
    r39 = dyn missing(<sym calendar>);
    goto L7(r39);
  L49():
    r37 = dyn base4(<sym calendar>);
    goto L7(r37);
  L8():
    goto L13();
  L13():
    calendar1 = ld calendar;
    check L66() else D24();
  L50():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  D24():
    deopt 91 [calendar1];
  L9(r41):
    c5 = `as.logical`(r41);
    if c5 then L58() else L11(c5);
  L51():
    fr_x = ld `fr.x`;
    check L53() else D18();
  L52():
    r40 = dyn base5(<lang `==`(fr.x, c(4.0, 12.0))>);
    goto L9(r40);
  L66():
    calendar2 = force? calendar1;
    checkMissing(calendar2);
    r53 = `!`(calendar2);
    c15 = `as.logical`(r53);
    if c15 then L67() else L14();
  D18():
    deopt 67 [fr_x];
  L11(c7):
    st calendar = c7;
    goto L13();
  L14():
    goto L17();
  L17():
    print1 = ldf print;
    check L76() else D30();
  L53():
    fr_x1 = force? fr_x;
    checkMissing(fr_x1);
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  L58():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L59() else L60();
  L67():
    fr_x5 = ld `fr.x`;
    check L68() else D25();
  D25():
    deopt 94 [fr_x5];
  D30():
    deopt 121 [];
  L10(fr_x4, r43):
    r45 = `==`(fr_x4, r43);
    any = ldf any in base;
    r46 = dyn any(r45);
    check L57() else D20();
  L12(c10, r48):
    r52 = `==`(r48, 2);
    c11 = `as.logical`(r52);
    c12 = `&&`(c10, c11);
    goto L11(c12);
  L54():
    c4 = ldf c in base;
    r44 = dyn c4(4.0, 12.0);
    check L56() else D19();
  L55():
    r42 = dyn base6(4.0, 12.0);
    goto L10(fr_x1, r42);
  L59():
    start = ldf start;
    check L61() else D21();
  L60():
    r47 = dyn base7(<lang start(x)>);
    goto L12(c5, r47);
  L68():
    fr_x6 = force? fr_x5;
    checkMissing(fr_x6);
    r54 = `!=`(fr_x6, 1.0);
    c16 = `as.logical`(r54);
    if c16 then L69() else L15();
  L76():
    p28 = prom<V +>{
      _preformat_ts = ldf `.preformat.ts`;
      p26 = prom<V +>{
        x25 = ld x;
        x26 = force? x25;
        checkMissing(x26);
        return x26;
      };
      p27 = prom<V +>{
        calendar3 = ld calendar;
        calendar4 = force? calendar3;
        checkMissing(calendar4);
        return calendar4;
      };
      ddd2 = ld `...`;
      r93 = dyn _preformat_ts[, , `...`](p26, p27, ddd2);
      return r93;
    };
    ddd3 = ld `...`;
    r95 = dyn print1[, quote, right, `...`](p28, FALSE, TRUE, ddd3);
    check L77() else D31();
  D19():
    deopt 73 [fr_x1, r44];
  D20():
    deopt 76 [r46];
  D21():
    deopt 80 [c5];
  D31():
    deopt 128 [r95];
  L15():
    cat1 = ldf cat;
    check L73() else D28();
  L16(r69):
    goto L17();
  L56():
    goto L10(fr_x1, r44);
  L57():
    goto L9(r46);
  L61():
    p9 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r50 = dyn start(p9);
    check L62() else D22();
  L69():
    cat = ldf cat;
    check L70() else D26();
  L77():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L78() else L79();
  D22():
    deopt 82 [c5, r50];
  D26():
    deopt 99 [];
  D28():
    deopt 109 [];
  L18(r97):
    popenv;
    return r97;
  L62():
    length = ldf length in base;
    r51 = dyn length(r50);
    check L63() else D23();
  L70():
    p12 = prom<V +>{
      deparse = ldf deparse;
      p11 = prom<V +>{
        start1 = ldf start;
        p10 = prom<V +>{
          x17 = ld x;
          x18 = force? x17;
          checkMissing(x18);
          return x18;
        };
        r56 = dyn start1(p10);
        return r56;
      };
      r58 = dyn deparse(p11);
      return r58;
    };
    p15 = prom<V +>{
      deparse1 = ldf deparse;
      p14 = prom<V +>{
        end = ldf end;
        p13 = prom<V +>{
          x19 = ld x;
          x20 = force? x19;
          checkMissing(x20);
          return x20;
        };
        r61 = dyn end(p13);
        return r61;
      };
      r63 = dyn deparse1(p14);
      return r63;
    };
    p17 = prom<V +>{
      deparse2 = ldf deparse;
      p16 = prom<V +>{
        fr_x7 = ld `fr.x`;
        fr_x8 = force? fr_x7;
        checkMissing(fr_x8);
        return fr_x8;
      };
      r66 = dyn deparse2(p16);
      return r66;
    };
    r68 = dyn cat("Time Series:\nStart =", p12, "\nEnd =", p15, "\nFrequency =", p17, "\n");
    check L71() else D27();
  L73():
    p20 = prom<V +>{
      format = ldf format;
      p19 = prom<V +>{
        tsp1 = ldf tsp;
        p18 = prom<V +>{
          x21 = ld x;
          x22 = force? x21;
          checkMissing(x22);
          return x22;
        };
        r71 = dyn tsp1(p18);
        c17 = `is.object`(r71);
        if c17 then L1() else L2(r71);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", r71);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r73):
        __ = ldf `[` in base;
        r74 = dyn __(r73, 1);
        goto L0(r74);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r76 = dyn format(p19);
      return r76;
    };
    p23 = prom<V +>{
      format1 = ldf format;
      p22 = prom<V +>{
        tsp2 = ldf tsp;
        p21 = prom<V +>{
          x23 = ld x;
          x24 = force? x23;
          checkMissing(x24);
          return x24;
        };
        r79 = dyn tsp2(p21);
        c18 = `is.object`(r79);
        if c18 then L1() else L2(r79);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", r79);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(r81):
        __1 = ldf `[` in base;
        r82 = dyn __1(r81, 2);
        goto L0(r82);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r84 = dyn format1(p22);
      return r84;
    };
    p25 = prom<V +>{
      deparse3 = ldf deparse;
      p24 = prom<V +>{
        fr_x9 = ld `fr.x`;
        fr_x10 = force? fr_x9;
        checkMissing(fr_x10);
        return fr_x10;
      };
      r87 = dyn deparse3(p24);
      return r87;
    };
    r89 = dyn cat1("Time Series:\nStart =", p20, "\nEnd =", p23, "\nFrequency =", p25, "\n");
    check L74() else D29();
  L78():
    x27 = ld x;
    check L80() else D32();
  L79():
    r96 = dyn base8(<sym x>);
    goto L18(r96);
  D23():
    deopt 84 [c5, r51];
  D27():
    deopt 107 [r68];
  D29():
    deopt 117 [r89];
  D32():
    deopt 131 [x27];
  L63():
    goto L12(c5, r51);
  L71():
    goto L16(r68);
  L74():
    goto L16(r89);
  L80():
    x28 = force? x27;
    checkMissing(x28);
    invisible1 = ldf invisible in base;
    r98 = dyn invisible1(x28);
    check L81() else D33();
  D33():
    deopt 134 [r98];
  L81():
    goto L18(r98);
  }
}