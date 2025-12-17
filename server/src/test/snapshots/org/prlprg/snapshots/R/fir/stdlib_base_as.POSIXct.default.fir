fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner421388299;
    st `as.POSIXct.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner421388299(x, tz, `...`) {
  (reg x:*, reg tz:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c1:L, reg x3:*, reg x4:V, reg x5:V, reg _POSIXct:cls, reg x6:*, reg x7:V, reg p:p(V +), reg tz1:*, reg tz2:V, reg p1:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x8:*, reg x9:V, reg c2:V, reg c3:L, reg _POSIXct1:cls, reg numeric:cls, reg r13:V, reg p2:p(V +), reg tz3:*, reg tz4:V, reg p3:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg x10:*, reg x11:V, reg c4:L, reg c5:L, reg c6:V, reg is_factor:cls, reg x12:*, reg x13:V, reg p4:p(V +), reg r22:V, reg c8:L, reg c9:V, reg c11:L, reg as_POSIXct:cls, reg as_POSIXlt:cls, reg x14:*, reg x15:V, reg p5:p(V +), reg tz5:*, reg tz6:V, reg p6:p(V +), reg ddd1:dots?, reg r25:V, reg p7:p(V +), reg tz7:*, reg tz8:V, reg p8:p(V +), reg ddd2:dots?, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg x16:*, reg x17:V, reg c12:L, reg c13:L, reg c15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg c18:L, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg c21:L, reg r36:V, reg x18:*, reg x19:V, reg is_na:cls, reg r37:V, reg all:cls, reg r38:V, reg c22:L, reg c23:V, reg c25:L, reg _POSIXct2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg x20:*, reg x21:V, reg as_numeric:cls, reg r41:V, reg p9:p(V +), reg tz9:*, reg tz10:V, reg p10:p(V +), reg r44:V, reg stop:cls, reg gettextf:cls, reg deparse1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg substitute:cls, reg r49:V, reg p11:p(V +), reg r51:V, reg p12:p(V +), reg dQuote:cls, reg r53:V, reg p13:p(V +), reg r55:V, reg p14:p(V +), reg r57:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L1(r1):
    c = `as.logical`(r1);
    if c then L24() else L2();
  L20():
    x1 = ld x;
    check L22() else D0();
  L21():
    r = dyn base(<sym x>, "POSIXct");
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L22():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "POSIXct", FALSE);
    check L23() else D1();
  L24():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  D1():
    deopt 7 [r2];
  L3(r4):
    c1 = `as.logical`(r4);
    if c1 then L27() else L4();
  L7(r12):
    c3 = `as.logical`(r12);
    if c3 then L37() else L8();
  L23():
    goto L1(r2);
  L25():
    missing = ldf missing in base;
    r5 = dyn missing(<sym tz>);
    goto L3(r5);
  L26():
    r3 = dyn base1(<sym tz>);
    goto L3(r3);
  L34():
    x8 = ld x;
    check L36() else D5();
  L35():
    r11 = dyn base2(<sym x>);
    goto L7(r11);
  D5():
    deopt 22 [x8];
  L4():
    _POSIXct = ldf `.POSIXct`;
    check L30() else D3();
  L5(x5):
    popenv;
    return x5;
  L8():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L27():
    x3 = ld x;
    check L28() else D2();
  L36():
    x9 = force? x8;
    checkMissing(x9);
    c2 = `==`(x9, NULL);
    goto L7(c2);
  L37():
    _POSIXct1 = ldf `.POSIXct`;
    check L38() else D6();
  D2():
    deopt 11 [x3];
  D3():
    deopt 14 [];
  D6():
    deopt 26 [];
  L10(r20):
    c5 = `as.logical`(r20);
    if c5 then L11(c5) else L45();
  L28():
    x4 = force? x3;
    checkMissing(x4);
    goto L5(x4);
  L30():
    p = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p1 = prom<V +>{
      tz1 = ld tz;
      tz2 = force? tz1;
      checkMissing(tz2);
      return tz2;
    };
    r8 = dyn _POSIXct(p, p1);
    check L31() else D4();
  L38():
    p2 = prom<V +>{
      numeric = ldf numeric;
      r13 = dyn numeric();
      return r13;
    };
    p3 = prom<V +>{
      tz3 = ld tz;
      tz4 = force? tz3;
      checkMissing(tz4);
      return tz4;
    };
    r16 = dyn _POSIXct1(p2, p3);
    check L39() else D7();
  L42():
    x10 = ld x;
    check L44() else D8();
  L43():
    r19 = dyn base3(<sym x>);
    goto L10(r19);
  D4():
    deopt 17 [r8];
  D7():
    deopt 29 [r16];
  D8():
    deopt 34 [x10];
  L11(c6):
    c11 = `as.logical`(c6);
    if c11 then L49() else L12();
  L31():
    goto L5(r8);
  L39():
    popenv;
    return r16;
  L44():
    x11 = force? x10;
    checkMissing(x11);
    c4 = `is.character`(x11);
    goto L10(c4);
  L45():
    is_factor = ldf `is.factor`;
    check L46() else D9();
  D9():
    deopt 38 [c5];
  L12():
    sym4 = ldf `is.logical`;
    base4 = ldf `is.logical` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L46():
    p4 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    r22 = dyn is_factor(p4);
    check L47() else D10();
  L49():
    as_POSIXct = ldf `as.POSIXct`;
    check L50() else D11();
  D10():
    deopt 40 [c5, r22];
  D11():
    deopt 43 [];
  L14(r32):
    c13 = `as.logical`(r32);
    if c13 then L57() else L15(c13);
  L47():
    c8 = `as.logical`(r22);
    c9 = `||`(c5, c8);
    goto L11(c9);
  L50():
    p7 = prom<V +>{
      as_POSIXlt = ldf `as.POSIXlt`;
      p5 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      p6 = prom<V +>{
        tz5 = ld tz;
        tz6 = force? tz5;
        checkMissing(tz6);
        return tz6;
      };
      ddd1 = ld `...`;
      r25 = dyn as_POSIXlt[, , `...`](p5, p6, ddd1);
      return r25;
    };
    p8 = prom<V +>{
      tz7 = ld tz;
      tz8 = force? tz7;
      checkMissing(tz8);
      return tz8;
    };
    ddd2 = ld `...`;
    r28 = dyn as_POSIXct[, , `...`](p7, p8, ddd2);
    check L51() else D12();
  L54():
    x16 = ld x;
    check L56() else D13();
  L55():
    r31 = dyn base4(<sym x>);
    goto L14(r31);
  D12():
    deopt 47 [r28];
  D13():
    deopt 52 [x16];
  L15(c15):
    c25 = `as.logical`(c15);
    if c25 then L66() else L18();
  L51():
    popenv;
    return r28;
  L56():
    x17 = force? x16;
    checkMissing(x17);
    c12 = `is.logical`(x17);
    goto L14(c12);
  L57():
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L16(c18, r34):
    c22 = `as.logical`(r34);
    c23 = `&&`(c18, c22);
    goto L15(c23);
  L18():
    stop = ldf stop;
    check L71() else D19();
  L58():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L60() else L61();
  L59():
    r33 = dyn base5(<lang is.na(x)>);
    goto L16(c13, r33);
  L66():
    _POSIXct2 = ldf `.POSIXct`;
    check L67() else D17();
  D17():
    deopt 67 [];
  D19():
    deopt 75 [];
  L17(c21, r36):
    all = ldf all in base;
    r38 = dyn all(r36);
    check L64() else D16();
  L60():
    x18 = ld x;
    check L62() else D14();
  L61():
    r35 = dyn base6(<sym x>);
    goto L17(c13, r35);
  L67():
    p9 = prom<V +>{
      sym7 = ldf `as.numeric`;
      base7 = ldf `as.numeric` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      as_numeric = ldf `as.numeric` in base;
      r41 = dyn as_numeric(x21);
      goto L0(r41);
    L2():
      r39 = dyn base7(<sym x>);
      goto L0(r39);
    };
    p10 = prom<V +>{
      tz9 = ld tz;
      tz10 = force? tz9;
      checkMissing(tz10);
      return tz10;
    };
    r44 = dyn _POSIXct2(p9, p10);
    check L68() else D18();
  L71():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        deparse1 = ldf deparse1;
        p11 = prom<V +>{
          sym8 = ldf substitute;
          base8 = ldf substitute in base;
          guard8 = `==`.4(sym8, base8);
          if guard8 then L1() else L2();
        L0(r48):
          return r48;
        L1():
          substitute = ldf substitute in base;
          r49 = dyn substitute(<sym x>);
          goto L0(r49);
        L2():
          r47 = dyn base8(<sym x>);
          goto L0(r47);
        };
        r51 = dyn deparse1(p11);
        return r51;
      };
      p13 = prom<V +>{
        dQuote = ldf dQuote;
        r53 = dyn dQuote("POSIXct");
        return r53;
      };
      r55 = dyn gettextf("do not know how to convert '%s' to class %s", p12, p13);
      return r55;
    };
    r57 = dyn stop[, domain](p14, NA_LGL);
    check L72() else D20();
  D14():
    deopt 59 [c13, x18];
  D16():
    deopt 64 [c21, r38];
  D18():
    deopt 70 [r44];
  D20():
    deopt 79 [r57];
  L62():
    x19 = force? x18;
    checkMissing(x19);
    is_na = ldf `is.na` in base;
    r37 = dyn is_na(x19);
    check L63() else D15();
  L64():
    goto L16(c21, r38);
  L68():
    popenv;
    return r44;
  L72():
    popenv;
    return r57;
  D15():
    deopt 62 [c13, r37];
  L63():
    goto L17(c13, r37);
  }
}