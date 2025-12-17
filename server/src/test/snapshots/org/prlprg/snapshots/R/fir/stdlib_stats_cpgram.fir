fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg par:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg cpgram:cls, reg lh:*, reg lh1:V, reg p2:p(V +), reg r11:V, reg ar:cls, reg lh2:*, reg lh3:V, reg p3:p(V +), reg r13:V, reg cpgram1:cls, reg lh_ar:*, reg lh_ar1:V, reg c1:L, reg lh_ar3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg p4:p(V +), reg r16:V, reg cpgram2:cls, reg ldeaths:*, reg ldeaths1:V, reg p5:p(V +), reg r18:V |
    mkenv;
    r = clos inner3712207943;
    st cpgram = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    par = ldf par;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c(1.0, 2.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(1.0, 2.0);
      goto L0(r5);
    };
    r9 = dyn par[pty, mfrow]("s", p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [r9];
  L4():
    goto L0();
  L6():
    cpgram = ldf cpgram;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p2 = prom<V +>{
      lh = ld lh;
      lh1 = force? lh;
      checkMissing(lh1);
      return lh1;
    };
    r11 = dyn cpgram(p2);
    check L8() else D5();
  D5():
    deopt 18 [r11];
  L8():
    ar = ldf ar;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p3 = prom<V +>{
      lh2 = ld lh;
      lh3 = force? lh2;
      checkMissing(lh3);
      return lh3;
    };
    r13 = dyn ar[, `order.max`](p3, 9.0);
    check L10() else D7();
  D7():
    deopt 24 [r13];
  L10():
    st `lh.ar` = r13;
    cpgram1 = ldf cpgram;
    check L11() else D8();
  D8():
    deopt 27 [];
  L11():
    p4 = prom<V +>{
      lh_ar = ld `lh.ar`;
      lh_ar1 = force? lh_ar;
      checkMissing(lh_ar1);
      c1 = `is.object`(lh_ar1);
      if c1 then L1() else L2(lh_ar1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", lh_ar1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lh_ar3):
      r14 = `$`(lh_ar3, <sym resid>);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r16 = dyn cpgram1[, main](p4, "AR(3) fit to lh");
    check L12() else D9();
  D9():
    deopt 31 [r16];
  L12():
    cpgram2 = ldf cpgram;
    check L13() else D10();
  D10():
    deopt 33 [];
  L13():
    p5 = prom<V +>{
      ldeaths = ld ldeaths;
      ldeaths1 = force? ldeaths;
      checkMissing(ldeaths1);
      return ldeaths1;
    };
    r18 = dyn cpgram2(p5);
    check L14() else D11();
  D11():
    deopt 35 [r18];
  L14():
    popenv;
    return r18;
  }
}
fun inner3712207943(ts, taper, main, `ci.col`) {
  (reg ts:*, reg taper:*, reg main:*, reg ci_col:*) -+> V { var ts:*, var taper:*, reg taper_isMissing:L, reg taper_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, reg paste:cls, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), var `ci.col`:*, reg ci_col_isMissing:L, reg ci_col_orDefault:*, reg main1:*, reg main2:V, reg NCOL:cls, reg ts1:*, reg ts2:V, reg p3:p(V +), reg r9:V, reg r10:V, reg c:L, reg stop:cls, reg r11:V, reg as_vector:cls, reg ts3:*, reg ts4:V, reg p4:p(V +), reg r14:V, reg x:*, reg x1:V, reg c1:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg x6:V, reg r16:V, reg x7:*, reg x8:V, reg is_na:cls, reg r17:V, reg r18:V, reg __:cls, reg r19:V, reg spec_taper:cls, reg scale:cls, reg x9:*, reg x10:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg taper1:*, reg taper2:V, reg p7:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg fft:cls, reg x11:*, reg x12:V, reg p8:p(V +), reg r28:V, reg Mod:cls, reg r29:V, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg r35:V, reg x13:*, reg x14:V, reg length:cls, reg r36:V, reg r37:V, reg l:*, reg c2:L, reg r39:R, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r42:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg r44:V, reg x15:*, reg x16:V, reg length1:cls, reg r45:V, reg n:*, reg n1:V, reg r46:V, reg r47:V, reg frequency:cls, reg ts5:*, reg ts6:V, reg p9:p(V +), reg r49:V, reg r50:V, reg n2:*, reg n3:V, reg r51:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r52:V, reg r53:V, reg x17:*, reg x18:V, reg length2:cls, reg r54:V, reg __1:cls, reg r55:V, reg r56:V, reg c3:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg x19:*, reg x20:V, reg length3:cls, reg r59:V, reg r60:V, reg y:*, reg y1:V, reg c4:L, reg y3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg n4:*, reg n5:V, reg r61:V, reg __2:cls, reg r62:V, reg x21:*, reg x22:V, reg c5:L, reg x24:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg n6:*, reg n7:V, reg r63:V, reg __3:cls, reg r64:V, reg y4:*, reg y5:V, reg c6:L, reg y7:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg y10:V, reg r66:V, reg x25:*, reg x26:V, reg r67:I, reg __4:cls, reg r68:V, reg frequency1:cls, reg ts7:*, reg ts8:V, reg p10:p(V +), reg r70:V, reg r71:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r72:V, reg r73:V, reg x27:*, reg x28:V, reg length4:cls, reg r74:V, reg r75:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r78:V, reg r79:R, reg r80:V, reg mp:*, reg mp1:V, reg r81:V, reg r82:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r89:V, reg r90:R, reg r91:V, reg r92:R, reg r93:V, reg mp2:*, reg mp3:V, reg r94:V, reg r95:V, reg r96:V, reg r97:V, reg par:cls, reg r98:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r99:V, reg on_exit:cls, reg r101:V, reg plot:cls, reg x29:*, reg x30:V, reg p11:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r103:V, reg r104:V, reg y11:*, reg y12:V, reg cumsum:cls, reg r105:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r108:V, reg r109:V, reg r110:V, reg y13:*, reg y14:V, reg sum:cls, reg r111:V, reg r112:V, reg p12:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r114:V, reg r115:V, reg xm:*, reg xm1:V, reg c7:cls, reg r116:V, reg p13:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r118:V, reg r119:V, reg c8:cls, reg r120:V, reg p14:p(V +), reg r122:V, reg lines:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r123:V, reg r124:V, reg xm2:*, reg xm3:V, reg crit:*, reg crit1:V, reg r125:V, reg r126:V, reg c9:cls, reg r127:V, reg p15:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r129:V, reg r130:V, reg crit2:*, reg crit3:V, reg c10:cls, reg r131:V, reg p16:p(V +), reg ci_col1:*, reg ci_col2:V, reg p17:p(V +), reg r134:V, reg lines1:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r135:V, reg r136:V, reg xm4:*, reg xm5:V, reg crit4:*, reg crit5:V, reg r137:V, reg xm6:*, reg xm7:V, reg c11:cls, reg r138:V, reg p18:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r140:V, reg r141:V, reg crit6:*, reg crit7:V, reg r142:V, reg c12:cls, reg r143:V, reg p19:p(V +), reg ci_col3:*, reg ci_col4:V, reg p20:p(V +), reg r146:V, reg title:cls, reg main3:*, reg main4:V, reg p21:p(V +), reg r148:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r149:V, reg r150:V, reg invisible:cls, reg r151:V |
    mkenv;
    st ts = ts;
    taper_isMissing = missing.0(taper);
    if taper_isMissing then L0(0.1) else L0(taper);
  L0(taper_orDefault):
    st taper = taper_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L1() else L2(main);
  L1():
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        deparse1 = ldf deparse1;
        p = prom<V +>{
          sym = ldf substitute;
          base = ldf substitute in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r1):
          return r1;
        L1():
          substitute = ldf substitute in base;
          r2 = dyn substitute(<sym ts>);
          goto L0(r2);
        L2():
          r = dyn base(<sym ts>);
          goto L0(r);
        };
        r4 = dyn deparse1(p);
        return r4;
      };
      r6 = dyn paste("Series: ", p1);
      return r6;
    };
    goto L2(p2);
  L2(main_orDefault):
    st main = main_orDefault;
    ci_col_isMissing = missing.0(ci_col);
    if ci_col_isMissing then L3("blue") else L3(ci_col);
  L3(ci_col_orDefault):
    st `ci.col` = ci_col_orDefault;
    main1 = ld main;
    check L25() else D0();
  D0():
    deopt 0 [main1];
  L25():
    main2 = force? main1;
    checkMissing(main2);
    NCOL = ldf NCOL;
    check L26() else D1();
  D1():
    deopt 3 [];
  L26():
    p3 = prom<V +>{
      ts1 = ld ts;
      ts2 = force? ts1;
      checkMissing(ts2);
      return ts2;
    };
    r9 = dyn NCOL(p3);
    check L27() else D2();
  D2():
    deopt 5 [r9];
  L27():
    r10 = `>`(r9, 1.0);
    c = `as.logical`(r10);
    if c then L28() else L4();
  L4():
    goto L5();
  L5():
    as_vector = ldf `as.vector`;
    check L32() else D5();
  L28():
    stop = ldf stop;
    check L29() else D3();
  D3():
    deopt 9 [];
  D5():
    deopt 15 [];
  L29():
    r11 = dyn stop("only implemented for univariate time series");
    check L30() else D4();
  L32():
    p4 = prom<V +>{
      ts3 = ld ts;
      ts4 = force? ts3;
      checkMissing(ts4);
      return ts4;
    };
    r14 = dyn as_vector(p4);
    check L33() else D6();
  D4():
    deopt 11 [r11];
  D6():
    deopt 17 [r14];
  L30():
    goto L5();
  L33():
    st x = r14;
    x = ld x;
    check L34() else D7();
  D7():
    deopt 19 [x];
  L34():
    x1 = force? x;
    checkMissing(x1);
    c1 = `is.object`(x1);
    if c1 then L35() else L36(x1);
  L6(dx1):
    st x = dx1;
    spec_taper = ldf `spec.taper`;
    check L42() else D10();
  L35():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(x3):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  D10():
    deopt 31 [];
  L7(x6, r16):
    r18 = `!`(r16);
    __ = ldf `[` in base;
    r19 = dyn __(x6, r18);
    goto L6(r19);
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L38():
    x7 = ld x;
    check L40() else D8();
  L39():
    r15 = dyn base1(<sym x>);
    goto L7(x3, r15);
  L42():
    p6 = prom<V +>{
      scale = ldf scale;
      p5 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r21 = dyn scale(p5, TRUE, FALSE);
      return r21;
    };
    p7 = prom<V +>{
      taper1 = ld taper;
      taper2 = force? taper1;
      checkMissing(taper2);
      return taper2;
    };
    r24 = dyn spec_taper[, p](p6, p7);
    check L43() else D11();
  D8():
    deopt 23 [x3, x7];
  D11():
    deopt 35 [r24];
  L40():
    x8 = force? x7;
    checkMissing(x8);
    is_na = ldf `is.na` in base;
    r17 = dyn is_na(x8);
    check L41() else D9();
  L43():
    st x = r24;
    sym2 = ldf Mod;
    base2 = ldf Mod in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  D9():
    deopt 26 [x3, r17];
  L8(r26):
    r30 = `^`(r26, 2.0);
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L41():
    goto L7(x3, r17);
  L44():
    fft = ldf fft;
    check L46() else D12();
  L45():
    r25 = dyn base2(<lang fft(x)>);
    goto L8(r25);
  D12():
    deopt 40 [];
  L9(r34, r35):
    r37 = `/`(r34, r35);
    st y = r37;
    l = ld y;
    c2 = `is.object`(l);
    if c2 then L53() else L54(0.0, l);
  L46():
    p8 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r28 = dyn fft(p8);
    check L47() else D13();
  L49():
    x13 = ld x;
    check L51() else D15();
  L50():
    r33 = dyn base3(<sym x>);
    goto L9(r30, r33);
  D13():
    deopt 42 [r28];
  D15():
    deopt 48 [r30, x13];
  L10(dx3):
    st y = dx3;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L47():
    Mod = ldf Mod in base;
    r29 = dyn Mod(r28);
    check L48() else D14();
  L51():
    x14 = force? x13;
    checkMissing(x14);
    length = ldf length in base;
    r36 = dyn length(x14);
    check L52() else D16();
  L53():
    dr2 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L55() else L54(0.0, dr2);
  L54(r39, l2):
    ___ = ldf `[<-` in base;
    r42 = dyn ___(l2, 0.0, 1);
    goto L10(r42);
  D14():
    deopt 44 [r29];
  D16():
    deopt 51 [r30, r36];
  L11(r44):
    st n = r44;
    n = ld n;
    check L60() else D19();
  L48():
    goto L8(r29);
  L52():
    goto L9(r30, r36);
  L55():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L56():
    x15 = ld x;
    check L58() else D17();
  L57():
    r43 = dyn base4(<sym x>);
    goto L11(r43);
  D17():
    deopt 63 [x15];
  D19():
    deopt 69 [0.0, n];
  L58():
    x16 = force? x15;
    checkMissing(x16);
    length1 = ldf length in base;
    r45 = dyn length1(x16);
    check L59() else D18();
  L60():
    n1 = force? n;
    checkMissing(n1);
    r46 = `/`(n1, 2.0);
    r47 = `:`(0.0, r46);
    frequency = ldf frequency;
    check L61() else D20();
  D18():
    deopt 66 [r45];
  D20():
    deopt 74 [r47];
  L59():
    goto L11(r45);
  L61():
    p9 = prom<V +>{
      ts5 = ld ts;
      ts6 = force? ts5;
      checkMissing(ts6);
      return ts6;
    };
    r49 = dyn frequency(p9);
    check L62() else D21();
  D21():
    deopt 76 [r47, r49];
  L62():
    r50 = `*`(r47, r49);
    n2 = ld n;
    check L63() else D22();
  D22():
    deopt 77 [r50, n2];
  L63():
    n3 = force? n2;
    checkMissing(n3);
    r51 = `/`(r50, n3);
    st x = r51;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L12(r53):
    __1 = ldf `%%` in base;
    r55 = dyn __1(r53, 2.0);
    check L68() else D25();
  L64():
    x17 = ld x;
    check L66() else D23();
  L65():
    r52 = dyn base5(<sym x>);
    goto L12(r52);
  D23():
    deopt 84 [x17];
  D25():
    deopt 90 [r55];
  L66():
    x18 = force? x17;
    checkMissing(x18);
    length2 = ldf length in base;
    r54 = dyn length2(x18);
    check L67() else D24();
  L68():
    r56 = `==`(r55, 0.0);
    c3 = `as.logical`(r56);
    if c3 then L69() else L13();
  D24():
    deopt 87 [r54];
  L13():
    y4 = ld y;
    check L85() else D32();
  L17():
    frequency1 = ldf frequency;
    check L92() else D34();
  L67():
    goto L12(r54);
  L69():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  D32():
    deopt 118 [y4];
  D34():
    deopt 127 [];
  L14(r58):
    r60 = `-`(r58, 1.0);
    st n = r60;
    y = ld y;
    check L74() else D28();
  L70():
    x19 = ld x;
    check L72() else D26();
  L71():
    r57 = dyn base6(<sym x>);
    goto L14(r57);
  L85():
    y5 = force? y4;
    checkMissing(y5);
    c6 = `is.object`(y5);
    if c6 then L86() else L87(y5);
  L92():
    p10 = prom<V +>{
      ts7 = ld ts;
      ts8 = force? ts7;
      checkMissing(ts8);
      return ts8;
    };
    r70 = dyn frequency1(p10);
    check L93() else D35();
  D26():
    deopt 95 [x19];
  D28():
    deopt 102 [y];
  D35():
    deopt 129 [r70];
  L18(dx10):
    st y = dx10;
    goto L17();
  L72():
    x20 = force? x19;
    checkMissing(x20);
    length3 = ldf length in base;
    r59 = dyn length3(x20);
    check L73() else D27();
  L74():
    y1 = force? y;
    checkMissing(y1);
    c4 = `is.object`(y1);
    if c4 then L75() else L76(y1);
  L86():
    dr8 = tryDispatchBuiltin.1("[", y5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L88() else L87(dr8);
  L87(y7):
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L93():
    r71 = `/`(r70, 2.0);
    st xm = r71;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L94() else L95();
  D27():
    deopt 98 [r59];
  L15(dx5):
    st y = dx5;
    x21 = ld x;
    check L79() else D30();
  L19(y10, r66):
    __4 = ldf `[` in base;
    r68 = dyn __4(y10, r66);
    goto L18(r68);
  L20(r73):
    r75 = `-`(r73, 1.0);
    st mp = r75;
    sym9 = ldf sqrt;
    base9 = ldf sqrt in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L98() else L99();
  L73():
    goto L14(r59);
  L75():
    dr4 = tryDispatchBuiltin.1("[", y1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L77() else L76(dr4);
  L76(y3):
    n4 = ld n;
    check L78() else D29();
  L88():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L18(dx9);
  L89():
    x25 = ld x;
    check L91() else D33();
  L90():
    r65 = dyn base7(<sym x>);
    goto L19(y7, r65);
  L94():
    x27 = ld x;
    check L96() else D36();
  L95():
    r72 = dyn base8(<sym x>);
    goto L20(r72);
  D29():
    deopt 105 [y3, 1, n4];
  D30():
    deopt 110 [x21];
  D33():
    deopt 121 [y7, x25];
  D36():
    deopt 135 [x27];
  L21(r79, r80):
    r82 = `+`(r80, 0.12);
    sym10 = ldf sqrt;
    base10 = ldf sqrt in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L101() else L102();
  L77():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx4);
  L78():
    n5 = force? n4;
    checkMissing(n5);
    r61 = `:`(1, n5);
    __2 = ldf `[` in base;
    r62 = dyn __2(y3, r61);
    goto L15(r62);
  L79():
    x22 = force? x21;
    checkMissing(x22);
    c5 = `is.object`(x22);
    if c5 then L80() else L81(x22);
  L91():
    x26 = force? x25;
    checkMissing(x26);
    r67 = seq_along(x26);
    goto L19(y7, r67);
  L96():
    x28 = force? x27;
    checkMissing(x28);
    length4 = ldf length in base;
    r74 = dyn length4(x28);
    check L97() else D37();
  L98():
    mp = ld mp;
    check L100() else D38();
  L99():
    r78 = dyn base9(<sym mp>);
    goto L21(1.358, r78);
  D37():
    deopt 138 [r74];
  D38():
    deopt 144 [1.358, mp];
  L16(dx7):
    st x = dx7;
    goto L17();
  L22(r90, r91, r92, r93):
    r95 = `/`(r92, r93);
    r96 = `+`(r91, r95);
    r97 = `/`(r90, r96);
    st crit = r97;
    par = ldf par;
    check L104() else D40();
  L80():
    dr6 = tryDispatchBuiltin.1("[", x22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(dr6);
  L81(x24):
    n6 = ld n;
    check L83() else D31();
  L97():
    goto L20(r74);
  L100():
    mp1 = force? mp;
    checkMissing(mp1);
    r81 = sqrt(mp1);
    goto L21(1.358, r81);
  L101():
    mp2 = ld mp;
    check L103() else D39();
  L102():
    r89 = dyn base10(<sym mp>);
    goto L22(r79, r82, 0.11, r89);
  D31():
    deopt 113 [x24, 1, n6];
  D39():
    deopt 150 [r79, r82, 0.11, mp2];
  D40():
    deopt 158 [];
  L82():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(dx6);
  L83():
    n7 = force? n6;
    checkMissing(n7);
    r63 = `:`(1, n7);
    __3 = ldf `[` in base;
    r64 = dyn __3(x24, r63);
    goto L16(r64);
  L103():
    mp3 = force? mp2;
    checkMissing(mp3);
    r94 = sqrt(mp3);
    goto L22(r79, r82, 0.11, r94);
  L104():
    r98 = dyn par[pty]("s");
    check L105() else D41();
  D41():
    deopt 161 [r98];
  L105():
    st oldpty = r98;
    sym11 = ldf `on.exit`;
    base11 = ldf `on.exit` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L106() else L107();
  L23():
    plot = ldf plot;
    check L108() else D42();
  L106():
    on_exit = ldf `on.exit` in base;
    r101 = dyn on_exit(<lang par(oldpty)>);
    goto L23();
  L107():
    r99 = dyn base11(<lang par(oldpty)>);
    goto L23();
  D42():
    deopt 167 [];
  L108():
    p11 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    p12 = prom<V +>{
      sym12 = ldf cumsum;
      base12 = ldf cumsum in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L2() else L3();
    L0(r104):
      sym13 = ldf sum;
      base13 = ldf sum in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L4() else L5();
    L2():
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      cumsum = ldf cumsum in base;
      r105 = dyn cumsum(y12);
      goto L0(r105);
    L3():
      r103 = dyn base12(<sym y>);
      goto L0(r103);
    L1(r109, r110):
      r112 = `/`(r109, r110);
      return r112;
    L4():
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      sum = ldf sum in base;
      r111 = dyn sum(y14);
      goto L1(r104, r111);
    L5():
      r108 = dyn base13(<sym y>);
      goto L1(r104, r108);
    };
    p13 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r115):
      return r115;
    L1():
      xm = ld xm;
      xm1 = force? xm;
      checkMissing(xm1);
      c7 = ldf c in base;
      r116 = dyn c7(0.0, xm1);
      goto L0(r116);
    L2():
      r114 = dyn base14(0.0, <sym xm>);
      goto L0(r114);
    };
    p14 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r119):
      return r119;
    L1():
      c8 = ldf c in base;
      r120 = dyn c8(0.0, 1.0);
      goto L0(r120);
    L2():
      r118 = dyn base15(0.0, 1.0);
      goto L0(r118);
    };
    r122 = dyn plot[, , type, xlim, ylim, xaxs, yaxs, xlab, ylab](p11, p12, "s", p13, p14, "i", "i", "frequency", "");
    check L109() else D43();
  D43():
    deopt 184 [r122];
  L109():
    lines = ldf lines;
    check L110() else D44();
  D44():
    deopt 186 [];
  L110():
    p15 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r124):
      return r124;
    L1():
      xm2 = ld xm;
      xm3 = force? xm2;
      checkMissing(xm3);
      crit = ld crit;
      crit1 = force? crit;
      checkMissing(crit1);
      r125 = `-`(1.0, crit1);
      r126 = `*`(xm3, r125);
      c9 = ldf c in base;
      r127 = dyn c9(0.0, r126);
      goto L0(r127);
    L2():
      r123 = dyn base16(0.0, <lang `*`(xm, `(`(`-`(1.0, crit)))>);
      goto L0(r123);
    };
    p16 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r130):
      return r130;
    L1():
      crit2 = ld crit;
      crit3 = force? crit2;
      checkMissing(crit3);
      c10 = ldf c in base;
      r131 = dyn c10(crit3, 1.0);
      goto L0(r131);
    L2():
      r129 = dyn base17(<sym crit>, 1.0);
      goto L0(r129);
    };
    p17 = prom<V +>{
      ci_col1 = ld `ci.col`;
      ci_col2 = force? ci_col1;
      checkMissing(ci_col2);
      return ci_col2;
    };
    r134 = dyn lines[, , col, lty](p15, p16, p17, 2.0);
    check L111() else D45();
  D45():
    deopt 193 [r134];
  L111():
    lines1 = ldf lines;
    check L112() else D46();
  D46():
    deopt 195 [];
  L112():
    p18 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r136):
      return r136;
    L1():
      xm4 = ld xm;
      xm5 = force? xm4;
      checkMissing(xm5);
      crit4 = ld crit;
      crit5 = force? crit4;
      checkMissing(crit5);
      r137 = `*`(xm5, crit5);
      xm6 = ld xm;
      xm7 = force? xm6;
      checkMissing(xm7);
      c11 = ldf c in base;
      r138 = dyn c11(r137, xm7);
      goto L0(r138);
    L2():
      r135 = dyn base18(<lang `*`(xm, crit)>, <sym xm>);
      goto L0(r135);
    };
    p19 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r141):
      return r141;
    L1():
      crit6 = ld crit;
      crit7 = force? crit6;
      checkMissing(crit7);
      r142 = `-`(1.0, crit7);
      c12 = ldf c in base;
      r143 = dyn c12(0.0, r142);
      goto L0(r143);
    L2():
      r140 = dyn base19(0.0, <lang `-`(1.0, crit)>);
      goto L0(r140);
    };
    p20 = prom<V +>{
      ci_col3 = ld `ci.col`;
      ci_col4 = force? ci_col3;
      checkMissing(ci_col4);
      return ci_col4;
    };
    r146 = dyn lines1[, , col, lty](p18, p19, p20, 2.0);
    check L113() else D47();
  D47():
    deopt 202 [r146];
  L113():
    title = ldf title;
    check L114() else D48();
  D48():
    deopt 204 [];
  L114():
    p21 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    r148 = dyn title[main](p21);
    check L115() else D49();
  D49():
    deopt 207 [r148];
  L115():
    sym20 = ldf invisible;
    base20 = ldf invisible in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L116() else L117();
  L24(r150):
    popenv;
    return r150;
  L116():
    invisible = ldf invisible in base;
    r151 = dyn invisible();
    check L118() else D50();
  L117():
    r149 = dyn base20();
    goto L24(r149);
  D50():
    deopt 211 [r151];
  L118():
    goto L24(r151);
  }
}