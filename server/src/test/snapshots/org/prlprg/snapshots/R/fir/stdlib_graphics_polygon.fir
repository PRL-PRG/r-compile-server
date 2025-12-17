fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg par:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c2:cls, reg r9:V, reg p:p(V +), reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg c3:cls, reg r14:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg plot:cls, reg p1:p(V +), reg paste:cls, reg xpd:*, reg xpd1:V, reg p2:p(V +), reg r17:V, reg p3:p(V +), reg r19:V, reg box:cls, reg r20:V, reg polygon:cls, reg x1:*, reg x2:V, reg p4:p(V +), reg y:*, reg y1:V, reg p5:p(V +), reg xpd2:*, reg xpd3:V, reg p6:p(V +), reg r24:V, reg par1:cls, reg op:*, reg op1:V, reg p7:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg n:*, reg n1:V, reg r29:V, reg n2:*, reg n3:V, reg r30:V, reg c5:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg __:cls, reg r38:V, reg r39:cls, reg n4:*, reg n5:V, reg p8:p(V +), reg r41:V, reg cumsum:cls, reg r42:V, reg c6:cls, reg r43:V, reg rev:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r46:V, reg r47:V, reg __1:cls, reg r48:V, reg r49:cls, reg n6:*, reg n7:V, reg p9:p(V +), reg r51:V, reg cumsum1:cls, reg r52:V, reg c7:cls, reg r53:V, reg p10:p(V +), reg r55:V, reg c8:cls, reg r56:V, reg plot1:cls, reg xx:*, reg xx1:V, reg p11:p(V +), reg yy:*, reg yy1:V, reg p12:p(V +), reg r59:V, reg polygon1:cls, reg xx2:*, reg xx3:V, reg p13:p(V +), reg yy2:*, reg yy3:V, reg p14:p(V +), reg r62:V, reg title:cls, reg r63:V, reg par2:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r64:V, reg r65:V, reg c9:cls, reg r66:V, reg p15:p(V +), reg r68:V, reg plot2:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r69:V, reg r70:V, reg c10:cls, reg r71:V, reg p16:p(V +), reg p17:p(V +), reg r74:V, reg polygon2:cls, reg p18:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r76:V, reg r77:V, reg c11:cls, reg r78:V, reg p19:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r80:V, reg r81:V, reg c12:cls, reg r82:V, reg p20:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r84:V, reg r85:V, reg c13:cls, reg r86:V, reg p21:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r88:V, reg r89:V, reg c14:cls, reg r90:V, reg p22:p(V +), reg r92:V, reg plot3:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r93:V, reg r94:V, reg c15:cls, reg r95:V, reg p23:p(V +), reg p24:p(V +), reg r98:V, reg polygon3:cls, reg p25:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg r101:V, reg c16:cls, reg r102:V, reg p26:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r104:V, reg r105:V, reg c17:cls, reg r106:V, reg p27:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r108:V, reg r109:V, reg c18:cls, reg r110:V, reg p28:p(V +), reg sym20:cls, reg base20:cls, reg guard20:L, reg r112:V, reg r113:V, reg c19:cls, reg r114:V, reg p29:p(V +), reg r116:V, reg par3:cls, reg op2:*, reg op3:V, reg p30:p(V +), reg r118:V, reg plot4:cls, reg sym21:cls, reg base21:cls, reg guard21:L, reg r119:V, reg r120:V, reg c20:cls, reg r121:V, reg p31:p(V +), reg p32:p(V +), reg r124:V, reg polygon4:cls, reg p33:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r126:V, reg r127:V, reg c21:cls, reg r128:V, reg p34:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r130:V, reg r131:V, reg c22:cls, reg r132:V, reg p35:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r134:V, reg r135:V, reg c23:cls, reg r136:V, reg p36:p(V +), reg r138:V |
    mkenv;
    r = clos inner800199277;
    st polygon = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r2):
    st x = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L9():
    c = ldf c in base;
    r3 = dyn c(<int 1, 2, 3, 4, 5, 6, 7, 8, 9>, <int 8, 7, 6, 5, 4, 3, 2, 1>);
    check L11() else D0();
  L10():
    r1 = dyn base(<lang `:`(1.0, 9.0)>, <lang `:`(8.0, 1.0)>);
    goto L0(r1);
  D0():
    deopt 10 [r3];
  L1(r5):
    st y = r5;
    par = ldf par;
    check L15() else D2();
  L11():
    goto L0(r3);
  L12():
    c1 = ldf c in base;
    r6 = dyn c1(1.0, <real 10.0, 8.0, 6.0>, 2.0, -1.0, 17.0, 9.0, 8.0, <int 2, 3, 4, 5, 6, 7, 8, 9>);
    check L14() else D1();
  L13():
    r4 = dyn base1(1.0, <lang `*`(2.0, `(`(`:`(5.0, 3.0)))>, 2.0, <lang `-`(1.0)>, 17.0, 9.0, 8.0, <lang `:`(2.0, 9.0)>);
    goto L1(r4);
  D1():
    deopt 26 [r6];
  D2():
    deopt 29 [];
  L14():
    goto L1(r6);
  L15():
    p = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c2 = ldf c in base;
      r9 = dyn c2(3.0, 1.0);
      goto L0(r9);
    L2():
      r7 = dyn base2(3.0, 1.0);
      goto L0(r7);
    };
    r11 = dyn par[mfcol](p);
    check L16() else D3();
  D3():
    deopt 32 [r11];
  L16():
    st op = r11;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  L2(r13):
    s = toForSeq(r13);
    l = length(s);
    i = 0;
    goto L3(i);
  L17():
    c3 = ldf c in base;
    r14 = dyn c3(FALSE, TRUE, NA_LGL);
    check L19() else D4();
  L18():
    r12 = dyn base3(FALSE, TRUE, NA_LGL);
    goto L2(r12);
  D4():
    deopt 40 [r14];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L20() else L4();
  L19():
    goto L2(r14);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st xpd = x;
    plot = ldf plot;
    check L21() else D5();
  L20():
    par1 = ldf par;
    check L27() else D11();
  D5():
    deopt 42 [i2];
  D11():
    deopt 74 [];
  L21():
    p1 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        xpd = ld xpd;
        xpd1 = force? xpd;
        checkMissing(xpd1);
        return xpd1;
      };
      r17 = dyn paste("xpd =", p2);
      return r17;
    };
    r19 = dyn plot[, main](p1, p3);
    check L22() else D6();
  L27():
    p7 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r26 = dyn par1(p7);
    check L28() else D12();
  D6():
    deopt 46 [i2, r19];
  D12():
    deopt 76 [r26];
  L22():
    box = ldf box;
    check L23() else D7();
  L28():
    st n = 100.0;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  D7():
    deopt 48 [i2];
  L5(r28):
    st xx = r28;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L34() else L35();
  L23():
    r20 = dyn box[, col, lwd]("figure", "pink", 3.0);
    check L24() else D8();
  L29():
    n = ld n;
    check L31() else D13();
  L30():
    r27 = dyn base4(<lang `:`(0.0, n)>, <lang `:`(n, 0.0)>);
    goto L5(r27);
  D8():
    deopt 54 [i2, r20];
  D13():
    deopt 83 [0.0, n];
  L6(r33):
    st yy = r33;
    plot1 = ldf plot;
    check L48() else D24();
  L24():
    polygon = ldf polygon;
    check L25() else D9();
  L31():
    n1 = force? n;
    checkMissing(n1);
    r29 = `:`(0.0, n1);
    n2 = ld n;
    check L32() else D14();
  L34():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L36() else L37();
  L35():
    r32 = dyn base5(<lang c(0.0, cumsum(`::`(stats, rnorm)(n)))>, <lang rev(c(0.0, cumsum(`::`(stats, rnorm)(n))))>);
    goto L6(r32);
  D9():
    deopt 56 [i2];
  D14():
    deopt 86 [n2];
  D24():
    deopt 120 [];
  L7(r35):
    rev = ldf rev;
    check L45() else D21();
  L25():
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p5 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p6 = prom<V +>{
      xpd2 = ld xpd;
      xpd3 = force? xpd2;
      checkMissing(xpd3);
      return xpd3;
    };
    r24 = dyn polygon[, , xpd, col, lty, lwd, border](p4, p5, p6, "orange", 2.0, 2.0, "red");
    check L26() else D10();
  L32():
    n3 = force? n2;
    checkMissing(n3);
    r30 = `:`(n3, 0.0);
    c5 = ldf c in base;
    r31 = dyn c5(r29, r30);
    check L33() else D15();
  L36():
    sym7 = ldf cumsum;
    base7 = ldf cumsum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L38() else L39();
  L37():
    r34 = dyn base6(0.0, <lang cumsum(`::`(stats, rnorm)(n))>);
    goto L7(r34);
  L48():
    p11 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p12 = prom<V +>{
      yy = ld yy;
      yy1 = force? yy;
      checkMissing(yy1);
      return yy1;
    };
    r59 = dyn plot1[, , type, xlab, ylab](p11, p12, "n", "Time", "Distance");
    check L49() else D25();
  D10():
    deopt 69 [i2, r24];
  D15():
    deopt 91 [r31];
  D21():
    deopt 113 [];
  D25():
    deopt 129 [r59];
  L8(r37):
    c6 = ldf c in base;
    r43 = dyn c6(0.0, r37);
    check L44() else D20();
  L26():
    goto L3(i2);
  L33():
    goto L5(r31);
  L38():
    __ = ldf `::`;
    check L40() else D16();
  L39():
    r36 = dyn base7(<lang `::`(stats, rnorm)(n)>);
    goto L8(r36);
  L45():
    p10 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r45):
      return r45;
    L2():
      sym9 = ldf cumsum;
      base9 = ldf cumsum in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r44 = dyn base8(0.0, <lang cumsum(`::`(stats, rnorm)(n))>);
      goto L0(r44);
    L1(r47):
      c7 = ldf c in base;
      r53 = dyn c7(0.0, r47);
      goto L0(r53);
    L4():
      __1 = ldf `::`;
      r48 = dyn __1("stats", "rnorm");
      checkFun.0(r48);
      r49 = r48 as cls;
      p9 = prom<V +>{
        n6 = ld n;
        n7 = force? n6;
        checkMissing(n7);
        return n7;
      };
      r51 = dyn r49(p9);
      cumsum1 = ldf cumsum in base;
      r52 = dyn cumsum1(r51);
      goto L1(r52);
    L5():
      r46 = dyn base9(<lang `::`(stats, rnorm)(n)>);
      goto L1(r46);
    };
    r55 = dyn rev(p10);
    check L46() else D22();
  L49():
    polygon1 = ldf polygon;
    check L50() else D26();
  D16():
    deopt 101 [];
  D20():
    deopt 111 [r43];
  D22():
    deopt 115 [r55];
  D26():
    deopt 131 [];
  L40():
    r38 = dyn __("stats", "rnorm");
    check L41() else D17();
  L44():
    goto L7(r43);
  L46():
    c8 = ldf c in base;
    r56 = dyn c8(r35, r55);
    check L47() else D23();
  L50():
    p13 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    p14 = prom<V +>{
      yy2 = ld yy;
      yy3 = force? yy2;
      checkMissing(yy3);
      return yy3;
    };
    r62 = dyn polygon1[, , col, border](p13, p14, "gray", "red");
    check L51() else D27();
  D17():
    deopt 104 [r38];
  D23():
    deopt 117 [r56];
  D27():
    deopt 138 [r62];
  L41():
    checkFun.0(r38);
    r39 = r38 as cls;
    p8 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    r41 = dyn r39(p8);
    check L42() else D18();
  L47():
    goto L6(r56);
  L51():
    title = ldf title;
    check L52() else D28();
  D18():
    deopt 107 [r41];
  D28():
    deopt 140 [];
  L42():
    cumsum = ldf cumsum in base;
    r42 = dyn cumsum(r41);
    check L43() else D19();
  L52():
    r63 = dyn title("Distance Between Brownian Motions");
    check L53() else D29();
  D19():
    deopt 109 [r42];
  D29():
    deopt 142 [r63];
  L43():
    goto L8(r42);
  L53():
    par2 = ldf par;
    check L54() else D30();
  D30():
    deopt 144 [];
  L54():
    p15 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r65):
      return r65;
    L1():
      c9 = ldf c in base;
      r66 = dyn c9(2.0, 1.0);
      goto L0(r66);
    L2():
      r64 = dyn base10(2.0, 1.0);
      goto L0(r64);
    };
    r68 = dyn par2[mfrow](p15);
    check L55() else D31();
  D31():
    deopt 147 [r68];
  L55():
    st op = r68;
    plot2 = ldf plot;
    check L56() else D32();
  D32():
    deopt 150 [];
  L56():
    p16 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      c10 = ldf c in base;
      r71 = dyn c10(1.0, 9.0);
      goto L0(r71);
    L2():
      r69 = dyn base11(1.0, 9.0);
      goto L0(r69);
    };
    p17 = prom<V +>{
      return <int 1, 2>;
    };
    r74 = dyn plot2[, , type](p16, p17, "n");
    check L57() else D33();
  D33():
    deopt 155 [r74];
  L57():
    polygon2 = ldf polygon;
    check L58() else D34();
  D34():
    deopt 157 [];
  L58():
    p18 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9>;
    };
    p19 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r77):
      return r77;
    L1():
      c11 = ldf c in base;
      r78 = dyn c11(2.0, 1.0, 2.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0);
      goto L0(r78);
    L2():
      r76 = dyn base12(2.0, 1.0, 2.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0);
      goto L0(r76);
    };
    p20 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r81):
      return r81;
    L1():
      c12 = ldf c in base;
      r82 = dyn c12("red", "blue");
      goto L0(r82);
    L2():
      r80 = dyn base13("red", "blue");
      goto L0(r80);
    };
    p21 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r85):
      return r85;
    L1():
      c13 = ldf c in base;
      r86 = dyn c13("green", "yellow");
      goto L0(r86);
    L2():
      r84 = dyn base14("green", "yellow");
      goto L0(r84);
    };
    p22 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r89):
      return r89;
    L1():
      c14 = ldf c in base;
      r90 = dyn c14("dashed", "solid");
      goto L0(r90);
    L2():
      r88 = dyn base15("dashed", "solid");
      goto L0(r88);
    };
    r92 = dyn polygon2[, , col, border, lwd, lty](p18, p19, p20, p21, 3.0, p22);
    check L59() else D35();
  D35():
    deopt 168 [r92];
  L59():
    plot3 = ldf plot;
    check L60() else D36();
  D36():
    deopt 170 [];
  L60():
    p23 = prom<V +>{
      sym16 = ldf c;
      base16 = ldf c in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r94):
      return r94;
    L1():
      c15 = ldf c in base;
      r95 = dyn c15(1.0, 9.0);
      goto L0(r95);
    L2():
      r93 = dyn base16(1.0, 9.0);
      goto L0(r93);
    };
    p24 = prom<V +>{
      return <int 1, 2>;
    };
    r98 = dyn plot3[, , type](p23, p24, "n");
    check L61() else D37();
  D37():
    deopt 175 [r98];
  L61():
    polygon3 = ldf polygon;
    check L62() else D38();
  D38():
    deopt 177 [];
  L62():
    p25 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9>;
    };
    p26 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r101):
      return r101;
    L1():
      c16 = ldf c in base;
      r102 = dyn c16(2.0, 1.0, 2.0, 1.0, NA_LGL, 2.0, 1.0, 2.0, 1.0);
      goto L0(r102);
    L2():
      r100 = dyn base17(2.0, 1.0, 2.0, 1.0, NA_LGL, 2.0, 1.0, 2.0, 1.0);
      goto L0(r100);
    };
    p27 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r105):
      return r105;
    L1():
      c17 = ldf c in base;
      r106 = dyn c17("red", "blue");
      goto L0(r106);
    L2():
      r104 = dyn base18("red", "blue");
      goto L0(r104);
    };
    p28 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r109):
      return r109;
    L1():
      c18 = ldf c in base;
      r110 = dyn c18("green", "yellow");
      goto L0(r110);
    L2():
      r108 = dyn base19("green", "yellow");
      goto L0(r108);
    };
    p29 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r113):
      return r113;
    L1():
      c19 = ldf c in base;
      r114 = dyn c19("dashed", "solid");
      goto L0(r114);
    L2():
      r112 = dyn base20("dashed", "solid");
      goto L0(r112);
    };
    r116 = dyn polygon3[, , col, border, lwd, lty](p25, p26, p27, p28, 3.0, p29);
    check L63() else D39();
  D39():
    deopt 188 [r116];
  L63():
    par3 = ldf par;
    check L64() else D40();
  D40():
    deopt 190 [];
  L64():
    p30 = prom<V +>{
      op2 = ld op;
      op3 = force? op2;
      checkMissing(op3);
      return op3;
    };
    r118 = dyn par3(p30);
    check L65() else D41();
  D41():
    deopt 192 [r118];
  L65():
    plot4 = ldf plot;
    check L66() else D42();
  D42():
    deopt 194 [];
  L66():
    p31 = prom<V +>{
      sym21 = ldf c;
      base21 = ldf c in base;
      guard21 = `==`.4(sym21, base21);
      if guard21 then L1() else L2();
    L0(r120):
      return r120;
    L1():
      c20 = ldf c in base;
      r121 = dyn c20(1.0, 9.0);
      goto L0(r121);
    L2():
      r119 = dyn base21(1.0, 9.0);
      goto L0(r119);
    };
    p32 = prom<V +>{
      return <int 1, 2>;
    };
    r124 = dyn plot4[, , type](p31, p32, "n");
    check L67() else D43();
  D43():
    deopt 199 [r124];
  L67():
    polygon4 = ldf polygon;
    check L68() else D44();
  D44():
    deopt 201 [];
  L68():
    p33 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9>;
    };
    p34 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L1() else L2();
    L0(r127):
      return r127;
    L1():
      c21 = ldf c in base;
      r128 = dyn c21(2.0, 1.0, 2.0, 1.0, NA_LGL, 2.0, 1.0, 2.0, 1.0);
      goto L0(r128);
    L2():
      r126 = dyn base22(2.0, 1.0, 2.0, 1.0, NA_LGL, 2.0, 1.0, 2.0, 1.0);
      goto L0(r126);
    };
    p35 = prom<V +>{
      sym23 = ldf c;
      base23 = ldf c in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r131):
      return r131;
    L1():
      c22 = ldf c in base;
      r132 = dyn c22(10.0, 20.0);
      goto L0(r132);
    L2():
      r130 = dyn base23(10.0, 20.0);
      goto L0(r130);
    };
    p36 = prom<V +>{
      sym24 = ldf c;
      base24 = ldf c in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L1() else L2();
    L0(r135):
      return r135;
    L1():
      c23 = ldf c in base;
      r136 = dyn c23(-45.0, 45.0);
      goto L0(r136);
    L2():
      r134 = dyn base24(<lang `-`(45.0)>, 45.0);
      goto L0(r134);
    };
    r138 = dyn polygon4[, , density, angle](p33, p34, p35, p36);
    check L69() else D45();
  D45():
    deopt 208 [r138];
  L69():
    popenv;
    return r138;
  }
}
fun inner800199277(x, y, density, angle, border, col, lty, `...`, fillOddEven) {
  (reg x:*, reg y:*, reg density:*, reg angle:*, reg border:*, reg col:*, reg lty:*, reg ddd:dots, reg fillOddEven:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var density:*, reg density_isMissing:L, reg density_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var `...`:dots?, var fillOddEven:*, reg fillOddEven_isMissing:L, reg fillOddEven_orDefault:*, reg xy_coords:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg y1:*, reg y2:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg density1:*, reg density2:V, reg is_numeric:cls, reg r7:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg c5:L, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c8:L, reg r11:V, reg density3:*, reg density4:V, reg is_na:cls, reg r12:V, reg density5:*, reg density6:V, reg r13:V, reg r14:V, reg all:cls, reg r15:V, reg c9:L, reg c10:V, reg c12:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg angle1:*, reg angle2:V, reg c13:V, reg r19:V, reg c14:L, reg c16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg c19:L, reg r21:V, reg density7:*, reg density8:V, reg c20:V, reg r22:V, reg c21:L, reg c22:V, reg c24:L, reg r23:cls, reg r24:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg missing:cls, reg r27:V, reg c25:L, reg c26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg c30:L, reg r29:V, reg col1:*, reg col2:V, reg c31:V, reg c32:L, reg c33:V, reg c35:L, reg par1:cls, reg r30:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg r35:V, reg col3:*, reg col4:V, reg is_na1:cls, reg r36:V, reg any:cls, reg r37:V, reg c36:L, reg par2:cls, reg r38:V, reg l:*, reg c37:L, reg r40:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r42:V, reg dx1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg l5:*, reg r49:V, reg r50:V, reg col5:*, reg col6:V, reg is_na2:cls, reg r51:V, reg ___:cls, reg r52:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:V, reg border1:*, reg border2:V, reg c38:V, reg c39:L, reg col7:*, reg col8:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r55:V, reg r56:V, reg border3:*, reg border4:V, reg c40:L, reg c41:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r57:V, reg r58:V, reg border5:*, reg border6:V, reg is_na3:cls, reg r59:V, reg r60:V, reg c42:L, reg c44:V, reg border7:*, reg border8:V, reg c45:L, reg c46:V, reg c48:L, reg col10:*, reg col11:V, reg col12:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r61:V, reg r62:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r63:V, reg r64:V, reg xy:*, reg xy1:V, reg c49:L, reg xy3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r65:V, reg r66:I, reg c50:L, reg r68:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r71:V, reg r72:V, reg r73:V, reg xy4:*, reg xy5:V, reg c51:L, reg r75:V, reg xy7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r77:V, reg dx7:V, reg r78:V, reg is_na4:cls, reg r79:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r84:V, reg r85:V, reg r86:V, reg r87:V, reg xy8:*, reg xy9:V, reg c52:L, reg r90:V, reg r91:V, reg xy11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r94:V, reg r95:V, reg dx9:V, reg r96:V, reg is_na5:cls, reg r97:V, reg r98:V, reg __:cls, reg r99:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg r101:V, reg xy12:*, reg xy13:V, reg c53:L, reg xy15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r102:V, reg length:cls, reg r103:V, reg r104:V, reg c54:cls, reg r105:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r106:V, reg r107:V, reg ends:*, reg ends1:V, reg length1:cls, reg r108:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r109:V, reg r110:V, reg col14:*, reg col15:V, reg num_polygons:*, reg num_polygons1:V, reg rep_len:cls, reg r111:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r112:V, reg r113:V, reg border9:*, reg border10:V, reg length2:cls, reg r114:V, reg c55:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r115:V, reg r116:V, reg border11:*, reg border12:V, reg num_polygons2:*, reg num_polygons3:V, reg rep_len1:cls, reg r117:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r119:V, reg r120:V, reg lty1:*, reg lty2:V, reg length3:cls, reg r121:V, reg c56:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r122:V, reg r123:V, reg lty3:*, reg lty4:V, reg num_polygons4:*, reg num_polygons5:V, reg rep_len2:cls, reg r124:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r126:V, reg r127:V, reg density9:*, reg density10:V, reg length4:cls, reg r128:V, reg c57:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r129:V, reg r130:V, reg density11:*, reg density12:V, reg num_polygons6:*, reg num_polygons7:V, reg rep_len3:cls, reg r131:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r133:V, reg r134:V, reg angle3:*, reg angle4:V, reg num_polygons8:*, reg num_polygons9:V, reg rep_len4:cls, reg r135:V, reg ends2:*, reg ends3:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c58:L, reg x3:V, reg end:*, reg end1:V, reg start:*, reg start1:V, reg r136:V, reg c59:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r137:V, reg i9:I, reg r138:V, reg density13:*, reg density14:V, reg c60:V, reg c61:L, reg i10:I, reg c62:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r139:V, reg i14:I, reg c66:L, reg r140:V, reg density15:*, reg density16:V, reg c67:L, reg i16:I, reg c69:L, reg density18:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i18:I, reg c71:L, reg dx13:V, reg i19:*, reg i20:V, reg __1:cls, reg r141:V, reg is_na6:cls, reg r142:V, reg c72:L, reg c73:V, reg c75:L, reg i22:I, reg c76:V, reg density19:*, reg density20:V, reg c78:L, reg i25:I, reg c80:L, reg density22:V, reg dr14:V, reg dc7:L, reg dx14:V, reg i27:I, reg c82:L, reg dx15:V, reg i28:*, reg i29:V, reg __2:cls, reg r143:V, reg r144:V, reg c83:L, reg c84:V, reg c86:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r145:V, reg i35:I, reg r146:V, reg _External_graphics:cls, reg C_polygon:*, reg C_polygon1:V, reg p3:p(V +), reg xy16:*, reg xy17:V, reg c87:L, reg xy19:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r148:V, reg c88:L, reg dx19:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg start2:*, reg start3:V, reg end2:*, reg end3:V, reg r149:V, reg r150:V, reg __3:cls, reg r151:V, reg p4:p(V +), reg xy20:*, reg xy21:V, reg c89:L, reg xy23:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg r153:V, reg c90:L, reg dx25:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg start4:*, reg start5:V, reg end4:*, reg end5:V, reg r154:V, reg r155:V, reg __4:cls, reg r156:V, reg p5:p(V +), reg col16:*, reg col17:V, reg c91:L, reg col19:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg i36:*, reg i37:V, reg __5:cls, reg r158:V, reg p6:p(V +), reg lty5:*, reg lty6:V, reg c92:L, reg lty8:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg i38:*, reg i39:V, reg __6:cls, reg r160:V, reg p7:p(V +), reg ddd1:dots?, reg r162:V, reg i40:I, reg density23:*, reg density24:V, reg c93:L, reg i42:I, reg density26:V, reg dr28:V, reg dc14:L, reg dx32:V, reg i44:I, reg dx33:V, reg i45:*, reg i46:V, reg __7:cls, reg r164:V, reg r165:V, reg c94:L, reg polygon_fullhatch:cls, reg xy24:*, reg xy25:V, reg c95:L, reg xy27:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r166:V, reg c96:L, reg dx37:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg start6:*, reg start7:V, reg end6:*, reg end7:V, reg r167:V, reg r168:V, reg __8:cls, reg r169:V, reg p8:p(V +), reg xy28:*, reg xy29:V, reg c97:L, reg xy31:V, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg r171:V, reg c98:L, reg dx43:V, reg dr36:V, reg dc18:L, reg dx44:V, reg dx45:V, reg start8:*, reg start9:V, reg end8:*, reg end9:V, reg r172:V, reg r173:V, reg __9:cls, reg r174:V, reg p9:p(V +), reg col20:*, reg col21:V, reg c99:L, reg col23:V, reg dr38:V, reg dc19:L, reg dx46:V, reg dx47:V, reg i49:*, reg i50:V, reg __10:cls, reg r176:V, reg p10:p(V +), reg lty9:*, reg lty10:V, reg c100:L, reg lty12:V, reg dr40:V, reg dc20:L, reg dx48:V, reg dx49:V, reg i51:*, reg i52:V, reg __11:cls, reg r178:V, reg p11:p(V +), reg density27:*, reg density28:V, reg c101:L, reg density30:V, reg dr42:V, reg dc21:L, reg dx50:V, reg dx51:V, reg i53:*, reg i54:V, reg __12:cls, reg r180:V, reg p12:p(V +), reg angle5:*, reg angle6:V, reg c102:L, reg angle8:V, reg dr44:V, reg dc22:L, reg dx52:V, reg dx53:V, reg i55:*, reg i56:V, reg __13:cls, reg r182:V, reg p13:p(V +), reg __debug_hatch:*, reg __debug_hatch1:V, reg p14:p(V +), reg ddd2:dots?, reg r185:V, reg i57:*, reg i58:V, reg r186:V, reg i59:I, reg end10:*, reg end11:V, reg r188:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r189:V, reg r190:V, reg _External_graphics1:cls, reg C_polygon2:*, reg C_polygon3:V, reg p15:p(V +), reg xy32:*, reg xy33:V, reg c103:L, reg xy35:V, reg dr46:V, reg dc23:L, reg dx54:V, reg dx55:V, reg r192:V, reg p16:p(V +), reg xy36:*, reg xy37:V, reg c104:L, reg xy39:V, reg dr48:V, reg dc24:L, reg dx56:V, reg dx57:V, reg r194:V, reg p17:p(V +), reg border13:*, reg border14:V, reg p18:p(V +), reg lty13:*, reg lty14:V, reg p19:p(V +), reg ddd3:dots?, reg r198:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r200:V, reg r201:V, reg border15:*, reg border16:V, reg c105:L, reg c106:L, reg isTRUE:cls, reg border17:*, reg border18:V, reg p20:p(V +), reg r203:V, reg c107:L, reg par3:cls, reg r204:V, reg r205:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r207:V, reg _External_graphics2:cls, reg C_polygon4:*, reg C_polygon5:V, reg p21:p(V +), reg xy40:*, reg xy41:V, reg c108:L, reg xy43:V, reg dr50:V, reg dc25:L, reg dx58:V, reg dx59:V, reg r209:V, reg p22:p(V +), reg xy44:*, reg xy45:V, reg c109:L, reg xy47:V, reg dr52:V, reg dc26:L, reg dx60:V, reg dx61:V, reg r211:V, reg p23:p(V +), reg col24:*, reg col25:V, reg p24:p(V +), reg border19:*, reg border20:V, reg p25:p(V +), reg lty15:*, reg lty16:V, reg p26:p(V +), reg ddd4:dots?, reg r216:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r217:V, reg r218:V, reg invisible:cls, reg r219:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    density_isMissing = missing.0(density);
    if density_isMissing then L1(NULL) else L1(density);
  L1(density_orDefault):
    st density = density_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L2(45.0) else L2(angle);
  L2(angle_orDefault):
    st angle = angle_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L3(NULL) else L3(border);
  L3(border_orDefault):
    st border = border_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L4(NA_LGL) else L4(col);
  L4(col_orDefault):
    st col = col_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L5() else L6(lty);
  L5():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("lty");
      return r;
    };
    goto L6(p);
  L6(lty_orDefault):
    st lty = lty_orDefault;
    st `...` = ddd;
    fillOddEven_isMissing = missing.0(fillOddEven);
    if fillOddEven_isMissing then L7(FALSE) else L7(fillOddEven);
  L7(fillOddEven_orDefault):
    st fillOddEven = fillOddEven_orDefault;
    st `..debug.hatch` = FALSE;
    xy_coords = ldf `xy.coords`;
    check L82() else D0();
  D0():
    deopt 4 [];
  L82():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r4 = dyn xy_coords[, , setLab](p1, p2, FALSE);
    check L83() else D1();
  D1():
    deopt 9 [r4];
  L83():
    st xy = r4;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L84() else L85();
  L8(r6):
    c = `as.logical`(r6);
    if c then L88() else L9(c);
  L84():
    density1 = ld density;
    check L86() else D2();
  L85():
    r5 = dyn base(<sym density>);
    goto L8(r5);
  D2():
    deopt 13 [density1];
  L9(c2):
    c12 = `as.logical`(c2);
    if c12 then L98() else L12();
  L86():
    density2 = force? density1;
    checkMissing(density2);
    is_numeric = ldf `is.numeric` in base;
    r7 = dyn is_numeric(density2);
    check L87() else D3();
  L88():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L89() else L90();
  D3():
    deopt 16 [r7];
  L10(c5, r9):
    c9 = `as.logical`(r9);
    c10 = `&&`(c5, c9);
    goto L9(c10);
  L12():
    goto L13();
  L13():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L100() else L101();
  L87():
    goto L8(r7);
  L89():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L91() else L92();
  L90():
    r8 = dyn base1(<lang `|`(is.na(density), `<`(density, 0.0))>);
    goto L10(c, r8);
  L98():
    st density = NULL;
    goto L13();
  L11(c8, r11):
    density5 = ld density;
    check L95() else D6();
  L14(r18):
    r19 = `!`(r18);
    c14 = `as.logical`(r19);
    if c14 then L103() else L15(c14);
  L91():
    density3 = ld density;
    check L93() else D4();
  L92():
    r10 = dyn base2(<sym density>);
    goto L11(c, r10);
  L100():
    angle1 = ld angle;
    check L102() else D8();
  L101():
    r17 = dyn base3(<sym angle>);
    goto L14(r17);
  D4():
    deopt 21 [c, density3];
  D6():
    deopt 24 [c8, r11, density5];
  D8():
    deopt 38 [angle1];
  L15(c16):
    c24 = `as.logical`(c16);
    if c24 then L108() else L17();
  L93():
    density4 = force? density3;
    checkMissing(density4);
    is_na = ldf `is.na` in base;
    r12 = dyn is_na(density4);
    check L94() else D5();
  L95():
    density6 = force? density5;
    checkMissing(density6);
    r13 = `<`(density6, 0.0);
    r14 = `||`(r11, r13);
    all = ldf all in base;
    r15 = dyn all(r14);
    check L96() else D7();
  L102():
    angle2 = force? angle1;
    checkMissing(angle2);
    c13 = `==`(angle2, NULL);
    goto L14(c13);
  L103():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L104() else L105();
  D5():
    deopt 24 [c, r12];
  D7():
    deopt 30 [c8, r15];
  L16(c19, r21):
    r22 = `!`(r21);
    c21 = `as.logical`(r22);
    c22 = `&&`(c19, c21);
    goto L15(c22);
  L17():
    sym31 = ldf `is.logical`;
    base31 = ldf `is.logical` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L291() else L292();
  L75():
    sym33 = ldf invisible;
    base33 = ldf invisible in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L306() else L307();
  L94():
    goto L11(c, r12);
  L96():
    goto L10(c8, r15);
  L104():
    density7 = ld density;
    check L106() else D9();
  L105():
    r20 = dyn base4(<sym density>);
    goto L16(c14, r20);
  L108():
    r23 = clos inner226200646;
    st `polygon.onehatch` = r23;
    r24 = clos inner2395908955;
    st `polygon.fullhatch` = r24;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L109() else L110();
  D9():
    deopt 43 [c14, density7];
  L18(r26):
    c25 = `as.logical`(r26);
    if c25 then L19(c25) else L111();
  L76(r201):
    c106 = `as.logical`(r201);
    if c106 then L294() else L77();
  L81(r218):
    popenv;
    return r218;
  L106():
    density8 = force? density7;
    checkMissing(density8);
    c20 = `==`(density8, NULL);
    goto L16(c14, c20);
  L109():
    missing = ldf missing in base;
    r27 = dyn missing(<sym col>);
    goto L18(r27);
  L110():
    r25 = dyn base5(<sym col>);
    goto L18(r25);
  L291():
    border15 = ld border;
    check L293() else D77();
  L292():
    r200 = dyn base31(<sym border>);
    goto L76(r200);
  L306():
    invisible = ldf invisible in base;
    r219 = dyn invisible();
    check L308() else D84();
  L307():
    r217 = dyn base33();
    goto L81(r217);
  D77():
    deopt 330 [border15];
  D84():
    deopt 361 [r219];
  L19(c26):
    c35 = `as.logical`(c26);
    if c35 then L116() else L21();
  L77():
    goto L80();
  L80():
    sym32 = ldf `.External.graphics`;
    base32 = ldf `.External.graphics` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L302() else L303();
  L111():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L112() else L113();
  L293():
    border16 = force? border15;
    checkMissing(border16);
    c105 = `is.logical`(border16);
    goto L76(c105);
  L294():
    isTRUE = ldf isTRUE;
    check L295() else D78();
  L308():
    goto L81(r219);
  D78():
    deopt 334 [];
  L20(c30, r29):
    c32 = `as.logical`(r29);
    c33 = `||`(c30, c32);
    goto L19(c33);
  L21():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L120() else L121();
  L22():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L138() else L139();
  L112():
    col1 = ld col;
    check L114() else D10();
  L113():
    r28 = dyn base6(<sym col>);
    goto L20(c25, r28);
  L116():
    par1 = ldf par;
    check L117() else D11();
  L295():
    p20 = prom<V +>{
      border17 = ld border;
      border18 = force? border17;
      checkMissing(border18);
      return border18;
    };
    r203 = dyn isTRUE(p20);
    check L296() else D79();
  L302():
    _External_graphics2 = ldf `.External.graphics`;
    check L304() else D82();
  L303():
    r207 = dyn base32(<sym C_polygon>, <lang `$`(xy, x)>, <lang `$`(xy, y)>, <sym col>, <sym border>, <sym lty>, <sym ...>);
    goto L75();
  D10():
    deopt 58 [c25, col1];
  D11():
    deopt 63 [];
  D79():
    deopt 336 [r203];
  D82():
    deopt 349 [];
  L23(r33):
    c36 = `as.logical`(r33);
    if c36 then L127() else L25();
  L28(r54):
    c39 = `as.logical`(r54);
    if c39 then L141() else L29();
  L114():
    col2 = force? col1;
    checkMissing(col2);
    c31 = `==`(col2, NULL);
    goto L20(c25, c31);
  L117():
    r30 = dyn par1("fg");
    check L118() else D12();
  L120():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L122() else L123();
  L121():
    r32 = dyn base7(<lang is.na(col)>);
    goto L23(r32);
  L138():
    border1 = ld border;
    check L140() else D20();
  L139():
    r53 = dyn base10(<sym border>);
    goto L28(r53);
  L296():
    c107 = `as.logical`(r203);
    if c107 then L297() else L78();
  L304():
    p21 = prom<V +>{
      C_polygon4 = ld C_polygon;
      C_polygon5 = force? C_polygon4;
      checkMissing(C_polygon5);
      return C_polygon5;
    };
    p22 = prom<V +>{
      xy40 = ld xy;
      xy41 = force? xy40;
      checkMissing(xy41);
      c108 = `is.object`(xy41);
      if c108 then L1() else L2(xy41);
    L0(dx59):
      return dx59;
    L1():
      dr50 = tryDispatchBuiltin.1("$", xy41);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(xy43):
      r209 = `$`(xy43, <sym x>);
      goto L0(r209);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx58);
    };
    p23 = prom<V +>{
      xy44 = ld xy;
      xy45 = force? xy44;
      checkMissing(xy45);
      c109 = `is.object`(xy45);
      if c109 then L1() else L2(xy45);
    L0(dx61):
      return dx61;
    L1():
      dr52 = tryDispatchBuiltin.1("$", xy45);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(xy47):
      r211 = `$`(xy47, <sym y>);
      goto L0(r211);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx60);
    };
    p24 = prom<V +>{
      col24 = ld col;
      col25 = force? col24;
      checkMissing(col25);
      return col25;
    };
    p25 = prom<V +>{
      border19 = ld border;
      border20 = force? border19;
      checkMissing(border20);
      return border20;
    };
    p26 = prom<V +>{
      lty15 = ld lty;
      lty16 = force? lty15;
      checkMissing(lty16);
      return lty16;
    };
    ddd4 = ld `...`;
    r216 = dyn _External_graphics2[, , , , , , `...`](p21, p22, p23, p24, p25, p26, ddd4);
    check L305() else D83();
  D12():
    deopt 65 [r30];
  D20():
    deopt 93 [border1];
  D83():
    deopt 357 [r216];
  L24(r35):
    any = ldf any in base;
    r37 = dyn any(r35);
    check L126() else D15();
  L25():
    goto L22();
  L29():
    goto L30();
  L30():
    sym11 = ldf `is.logical`;
    base11 = ldf `is.logical` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L144() else L145();
  L78():
    st border = NA_LGL;
    goto L79(NA_LGL);
  L79(r205):
    goto L80();
  L118():
    st col = r30;
    goto L22();
  L122():
    col3 = ld col;
    check L124() else D13();
  L123():
    r34 = dyn base8(<sym col>);
    goto L24(r34);
  L127():
    par2 = ldf par;
    check L128() else D16();
  L140():
    border2 = force? border1;
    checkMissing(border2);
    c38 = `==`(border2, NULL);
    goto L28(c38);
  L141():
    col7 = ld col;
    check L142() else D21();
  L297():
    par3 = ldf par;
    check L298() else D80();
  L305():
    goto L75();
  D13():
    deopt 71 [col3];
  D15():
    deopt 76 [r37];
  D16():
    deopt 78 [];
  D21():
    deopt 96 [col7];
  D80():
    deopt 338 [];
  L31(r56):
    c41 = `as.logical`(r56);
    if c41 then L147() else L32();
  L124():
    col4 = force? col3;
    checkMissing(col4);
    is_na1 = ldf `is.na` in base;
    r36 = dyn is_na1(col4);
    check L125() else D14();
  L126():
    goto L23(r37);
  L128():
    r38 = dyn par2("fg");
    check L129() else D17();
  L142():
    col8 = force? col7;
    checkMissing(col8);
    st border = col8;
    goto L30();
  L144():
    border3 = ld border;
    check L146() else D22();
  L145():
    r55 = dyn base11(<sym border>);
    goto L31(r55);
  L298():
    r204 = dyn par3("fg");
    check L299() else D81();
  D14():
    deopt 74 [r36];
  D17():
    deopt 80 [r38];
  D22():
    deopt 102 [border3];
  D81():
    deopt 340 [r204];
  L32():
    goto L37();
  L37():
    st start = 1.0;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L159() else L160();
  L125():
    goto L24(r36);
  L129():
    l = ld col;
    c37 = `is.object`(l);
    if c37 then L130() else L131(r38, l);
  L146():
    border4 = force? border3;
    checkMissing(border4);
    c40 = `is.logical`(border4);
    goto L31(c40);
  L147():
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L148() else L149();
  L299():
    st border = r204;
    goto L79(r204);
  L26(r42, dx1):
    st col = dx1;
    goto L22();
  L33(r58):
    r60 = `!`(r58);
    c42 = `as.logical`(r60);
    if c42 then L152() else L34(c42);
  L38(r62):
    st ends = r62;
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L196() else L197();
  L130():
    dr = tryDispatchBuiltin.0("[<-", l, r38);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L132() else L131(r38, dr);
  L131(r40, l2):
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L133() else L134();
  L148():
    border5 = ld border;
    check L150() else D23();
  L149():
    r57 = dyn base12(<sym border>);
    goto L33(r57);
  L159():
    sym14 = ldf seq_along;
    base14 = ldf seq_along in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L161() else L162();
  L160():
    r61 = dyn base13(<lang `[`(seq_along(`$`(xy, x)), `|`(is.na(`$`(xy, x)), is.na(`$`(xy, y))))>, <lang `+`(length(`$`(xy, x)), 1.0)>);
    goto L38(r61);
  D23():
    deopt 107 [border5];
  L27(r48, l5, r49, r50):
    ___ = ldf `[<-` in base;
    r52 = dyn ___(l5, r49, r50);
    goto L26(r48, r52);
  L34(c44):
    c48 = `as.logical`(c44);
    if c48 then L155() else L35();
  L39(r64):
    c50 = `is.object`(r64);
    if c50 then L168() else L169(r64);
  L44(r107):
    st `num.polygons` = r107;
    sym19 = ldf rep_len;
    base19 = ldf rep_len in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L200() else L201();
  L132():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(r38, dx);
  L133():
    col5 = ld col;
    check L135() else D18();
  L134():
    r47 = dyn base9(<sym col>);
    goto L27(r40, l2, r38, r47);
  L150():
    border6 = force? border5;
    checkMissing(border6);
    is_na3 = ldf `is.na` in base;
    r59 = dyn is_na3(border6);
    check L151() else D24();
  L152():
    border7 = ld border;
    check L153() else D25();
  L161():
    xy = ld xy;
    check L163() else D27();
  L162():
    r63 = dyn base14(<lang `$`(xy, x)>);
    goto L39(r63);
  L196():
    ends = ld ends;
    check L198() else D35();
  L197():
    r106 = dyn base18(<sym ends>);
    goto L44(r106);
  D18():
    deopt 84 [r40, l2, r38, col5];
  D24():
    deopt 110 [r59];
  D25():
    deopt 112 [c42, border7];
  D27():
    deopt 129 [xy];
  D35():
    deopt 162 [ends];
  L35():
    st border = NA_LGL;
    goto L36(NA_LGL);
  L36(col12):
    goto L37();
  L40(dx5):
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L187() else L188();
  L45(r110):
    st col = r110;
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L205() else L206();
  L135():
    col6 = force? col5;
    checkMissing(col6);
    is_na2 = ldf `is.na` in base;
    r51 = dyn is_na2(col6);
    check L136() else D19();
  L151():
    goto L33(r59);
  L153():
    border8 = force? border7;
    checkMissing(border8);
    c45 = `as.logical`(border8);
    c46 = `&&`(c42, c45);
    goto L34(c46);
  L155():
    col10 = ld col;
    check L156() else D26();
  L163():
    xy1 = force? xy;
    checkMissing(xy1);
    c49 = `is.object`(xy1);
    if c49 then L165() else L166(xy1);
  L168():
    dr4 = tryDispatchBuiltin.1("[", r64);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L170() else L169(dr4);
  L169(r68):
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L171() else L172();
  L198():
    ends1 = force? ends;
    checkMissing(ends1);
    length1 = ldf length in base;
    r108 = dyn length1(ends1);
    check L199() else D36();
  L200():
    col14 = ld col;
    check L202() else D37();
  L201():
    r109 = dyn base19(<sym col>, <sym num.polygons>);
    goto L45(r109);
  D19():
    deopt 87 [r40, l2, r38, r51];
  D26():
    deopt 115 [col10];
  D36():
    deopt 165 [r108];
  D37():
    deopt 169 [col14];
  L41(r72, r73):
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L179() else L180();
  L43(r101):
    r104 = `+`(r101, 1.0);
    c54 = ldf c in base;
    r105 = dyn c54(dx5, r104);
    check L195() else D34();
  L46(r113):
    c55 = `as.logical`(r113);
    if c55 then L209() else L47();
  L136():
    goto L27(r40, l2, r38, r51);
  L156():
    col11 = force? col10;
    checkMissing(col11);
    st border = col11;
    goto L36(col11);
  L164(dx3):
    r66 = seq_along(dx3);
    goto L39(r66);
  L165():
    dr2 = tryDispatchBuiltin.1("$", xy1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L167() else L166(dr2);
  L166(xy3):
    r65 = `$`(xy3, <sym x>);
    goto L164(r65);
  L170():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L40(dx4);
  L171():
    xy4 = ld xy;
    check L173() else D28();
  L172():
    r71 = dyn base15(<lang `$`(xy, x)>);
    goto L41(r68, r71);
  L187():
    xy12 = ld xy;
    check L189() else D32();
  L188():
    r100 = dyn base17(<lang `$`(xy, x)>);
    goto L43(r100);
  L199():
    goto L44(r108);
  L202():
    col15 = force? col14;
    checkMissing(col15);
    num_polygons = ld `num.polygons`;
    check L203() else D38();
  L205():
    border9 = ld border;
    check L207() else D40();
  L206():
    r112 = dyn base20(<sym border>);
    goto L46(r112);
  D28():
    deopt 135 [r68, xy4];
  D32():
    deopt 150 [xy12];
  D34():
    deopt 158 [r105];
  D38():
    deopt 171 [num_polygons];
  D40():
    deopt 178 [border9];
  L42(r85, r86, r87):
    r98 = `||`(r86, r87);
    __ = ldf `[` in base;
    r99 = dyn __(r85, r98);
    goto L40(r99);
  L47():
    goto L49();
  L49():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L216() else L217();
  L167():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L164(dx2);
  L173():
    xy5 = force? xy4;
    checkMissing(xy5);
    c51 = `is.object`(xy5);
    if c51 then L175() else L176(r68, xy5);
  L179():
    xy8 = ld xy;
    check L181() else D30();
  L180():
    r84 = dyn base16(<lang `$`(xy, y)>);
    goto L42(r72, r73, r84);
  L189():
    xy13 = force? xy12;
    checkMissing(xy13);
    c53 = `is.object`(xy13);
    if c53 then L191() else L192(xy13);
  L195():
    goto L38(r105);
  L203():
    num_polygons1 = force? num_polygons;
    checkMissing(num_polygons1);
    rep_len = ldf rep_len in base;
    r111 = dyn rep_len(col15, num_polygons1);
    check L204() else D39();
  L207():
    border10 = force? border9;
    checkMissing(border10);
    length2 = ldf length in base;
    r114 = dyn length2(border10);
    check L208() else D41();
  L209():
    sym21 = ldf rep_len;
    base21 = ldf rep_len in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L210() else L211();
  D30():
    deopt 141 [r72, r73, xy8];
  D39():
    deopt 174 [r111];
  D41():
    deopt 181 [r114];
  L48(r116):
    st border = r116;
    goto L49();
  L50(r120):
    c56 = `as.logical`(r120);
    if c56 then L220() else L51();
  L174(r77, dx7):
    is_na4 = ldf `is.na` in base;
    r79 = dyn is_na4(dx7);
    check L178() else D29();
  L175():
    dr6 = tryDispatchBuiltin.1("$", xy5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L177() else L176(r68, dr6);
  L176(r75, xy7):
    r78 = `$`(xy7, <sym x>);
    goto L174(r75, r78);
  L181():
    xy9 = force? xy8;
    checkMissing(xy9);
    c52 = `is.object`(xy9);
    if c52 then L183() else L184(r72, r73, xy9);
  L190(dx11):
    length = ldf length in base;
    r103 = dyn length(dx11);
    check L194() else D33();
  L191():
    dr10 = tryDispatchBuiltin.1("$", xy13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L193() else L192(dr10);
  L192(xy15):
    r102 = `$`(xy15, <sym x>);
    goto L190(r102);
  L204():
    goto L45(r111);
  L208():
    goto L46(r114);
  L210():
    border11 = ld border;
    check L212() else D42();
  L211():
    r115 = dyn base21(<sym border>, <sym num.polygons>);
    goto L48(r115);
  L216():
    lty1 = ld lty;
    check L218() else D45();
  L217():
    r119 = dyn base22(<sym lty>);
    goto L50(r119);
  D29():
    deopt 139 [r77, r79];
  D33():
    deopt 154 [r103];
  D42():
    deopt 184 [border11];
  D45():
    deopt 195 [lty1];
  L51():
    goto L53();
  L53():
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L227() else L228();
  L177():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L174(r68, dx6);
  L178():
    goto L41(r77, r79);
  L182(r94, r95, dx9):
    is_na5 = ldf `is.na` in base;
    r97 = dyn is_na5(dx9);
    check L186() else D31();
  L183():
    dr8 = tryDispatchBuiltin.1("$", xy9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L185() else L184(r72, r73, dr8);
  L184(r90, r91, xy11):
    r96 = `$`(xy11, <sym y>);
    goto L182(r90, r91, r96);
  L193():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L190(dx10);
  L194():
    goto L43(r103);
  L212():
    border12 = force? border11;
    checkMissing(border12);
    num_polygons2 = ld `num.polygons`;
    check L213() else D43();
  L218():
    lty2 = force? lty1;
    checkMissing(lty2);
    length3 = ldf length in base;
    r121 = dyn length3(lty2);
    check L219() else D46();
  L220():
    sym23 = ldf rep_len;
    base23 = ldf rep_len in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L221() else L222();
  D31():
    deopt 145 [r94, r95, r97];
  D43():
    deopt 186 [num_polygons2];
  D46():
    deopt 198 [r121];
  L52(r123):
    st lty = r123;
    goto L53();
  L54(r127):
    c57 = `as.logical`(r127);
    if c57 then L231() else L55();
  L185():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L182(r72, r73, dx8);
  L186():
    goto L42(r94, r95, r97);
  L213():
    num_polygons3 = force? num_polygons2;
    checkMissing(num_polygons3);
    rep_len1 = ldf rep_len in base;
    r117 = dyn rep_len1(border12, num_polygons3);
    check L214() else D44();
  L219():
    goto L50(r121);
  L221():
    lty3 = ld lty;
    check L223() else D47();
  L222():
    r122 = dyn base23(<sym lty>, <sym num.polygons>);
    goto L52(r122);
  L227():
    density9 = ld density;
    check L229() else D50();
  L228():
    r126 = dyn base24(<sym density>);
    goto L54(r126);
  D44():
    deopt 189 [r117];
  D47():
    deopt 201 [lty3];
  D50():
    deopt 212 [density9];
  L55():
    goto L57();
  L57():
    sym26 = ldf rep_len;
    base26 = ldf rep_len in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L238() else L239();
  L214():
    goto L48(r117);
  L223():
    lty4 = force? lty3;
    checkMissing(lty4);
    num_polygons4 = ld `num.polygons`;
    check L224() else D48();
  L229():
    density10 = force? density9;
    checkMissing(density10);
    length4 = ldf length in base;
    r128 = dyn length4(density10);
    check L230() else D51();
  L231():
    sym25 = ldf rep_len;
    base25 = ldf rep_len in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L232() else L233();
  D48():
    deopt 203 [num_polygons4];
  D51():
    deopt 215 [r128];
  L56(r130):
    st density = r130;
    goto L57();
  L58(r134):
    st angle = r134;
    st i = 1;
    ends2 = ld ends;
    check L243() else D58();
  L224():
    num_polygons5 = force? num_polygons4;
    checkMissing(num_polygons5);
    rep_len2 = ldf rep_len in base;
    r124 = dyn rep_len2(lty4, num_polygons5);
    check L225() else D49();
  L230():
    goto L54(r128);
  L232():
    density11 = ld density;
    check L234() else D52();
  L233():
    r129 = dyn base25(<sym density>, <sym num.polygons>);
    goto L56(r129);
  L238():
    angle3 = ld angle;
    check L240() else D55();
  L239():
    r133 = dyn base26(<sym angle>, <sym num.polygons>);
    goto L58(r133);
  D49():
    deopt 206 [r124];
  D52():
    deopt 218 [density11];
  D55():
    deopt 229 [angle3];
  D58():
    deopt 239 [ends2];
  L225():
    goto L52(r124);
  L234():
    density12 = force? density11;
    checkMissing(density12);
    num_polygons6 = ld `num.polygons`;
    check L235() else D53();
  L240():
    angle4 = force? angle3;
    checkMissing(angle4);
    num_polygons8 = ld `num.polygons`;
    check L241() else D56();
  L243():
    ends3 = force? ends2;
    checkMissing(ends3);
    s = toForSeq(ends3);
    l6 = length(s);
    i = 0;
    goto L59(i);
  D53():
    deopt 220 [num_polygons6];
  D56():
    deopt 231 [num_polygons8];
  L59(i1):
    i2 = `+`.1(i1, 1);
    c58 = `<`.1(l6, i2);
    if c58 then L244() else L73();
  L235():
    num_polygons7 = force? num_polygons6;
    checkMissing(num_polygons7);
    rep_len3 = ldf rep_len in base;
    r131 = dyn rep_len3(density12, num_polygons7);
    check L236() else D54();
  L241():
    num_polygons9 = force? num_polygons8;
    checkMissing(num_polygons9);
    rep_len4 = ldf rep_len in base;
    r135 = dyn rep_len4(angle4, num_polygons9);
    check L242() else D57();
  D54():
    deopt 223 [r131];
  D57():
    deopt 234 [r135];
  L73():
    x3 = `[[`(s, i2, NULL, TRUE);
    st end = x3;
    end = ld end;
    check L245() else D59();
  L236():
    goto L56(r131);
  L242():
    goto L58(r135);
  L244():
    sym30 = ldf `.External.graphics`;
    base30 = ldf `.External.graphics` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L286() else L287();
  D59():
    deopt 241 [i2, end];
  L74(r190):
    goto L75();
  L245():
    end1 = force? end;
    checkMissing(end1);
    start = ld start;
    check L246() else D60();
  L286():
    _External_graphics1 = ldf `.External.graphics`;
    check L288() else D75();
  L287():
    r189 = dyn base30(<sym C_polygon>, <lang `$`(xy, x)>, <lang `$`(xy, y)>, NA_LGL, <sym border>, <sym lty>, <sym ...>);
    goto L74(r189);
  D60():
    deopt 242 [i2, end1, start];
  D75():
    deopt 320 [];
  L246():
    start1 = force? start;
    checkMissing(start1);
    r136 = `>`(end1, start1);
    c59 = `as.logical`(r136);
    if c59 then L247() else L60();
  L288():
    p15 = prom<V +>{
      C_polygon2 = ld C_polygon;
      C_polygon3 = force? C_polygon2;
      checkMissing(C_polygon3);
      return C_polygon3;
    };
    p16 = prom<V +>{
      xy32 = ld xy;
      xy33 = force? xy32;
      checkMissing(xy33);
      c103 = `is.object`(xy33);
      if c103 then L1() else L2(xy33);
    L0(dx55):
      return dx55;
    L1():
      dr46 = tryDispatchBuiltin.1("$", xy33);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(xy35):
      r192 = `$`(xy35, <sym x>);
      goto L0(r192);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx54);
    };
    p17 = prom<V +>{
      xy36 = ld xy;
      xy37 = force? xy36;
      checkMissing(xy37);
      c104 = `is.object`(xy37);
      if c104 then L1() else L2(xy37);
    L0(dx57):
      return dx57;
    L1():
      dr48 = tryDispatchBuiltin.1("$", xy37);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(xy39):
      r194 = `$`(xy39, <sym y>);
      goto L0(r194);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx56);
    };
    p18 = prom<V +>{
      border13 = ld border;
      border14 = force? border13;
      checkMissing(border14);
      return border14;
    };
    p19 = prom<V +>{
      lty13 = ld lty;
      lty14 = force? lty13;
      checkMissing(lty14);
      return lty14;
    };
    ddd3 = ld `...`;
    r198 = dyn _External_graphics1[, , , , , , `...`](p15, p16, p17, NA_LGL, p18, p19, ddd3);
    check L289() else D76();
  D76():
    deopt 328 [r198];
  L60():
    goto L72(i2);
  L72(i59):
    end10 = ld end;
    check L285() else D74();
  L247():
    sym27 = ldf `is.null`;
    base27 = ldf `is.null` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L248() else L249();
  L289():
    goto L74(r198);
  D74():
    deopt 310 [i59, end10];
  L61(i9, r138):
    c61 = `as.logical`(r138);
    if c61 then L62(i9, c61) else L251();
  L248():
    density13 = ld density;
    check L250() else D61();
  L249():
    r137 = dyn base27(<sym density>);
    goto L61(i2, r137);
  L285():
    end11 = force? end10;
    checkMissing(end11);
    r188 = `+`(end11, 1.0);
    st start = r188;
    goto L59(i59);
  D61():
    deopt 246 [i2, density13];
  L62(i10, c62):
    c75 = `as.logical`(c62);
    if c75 then L65(i10, c75) else L261();
  L250():
    density14 = force? density13;
    checkMissing(density14);
    c60 = `==`(density14, NULL);
    goto L61(i2, c60);
  L251():
    sym28 = ldf `is.na`;
    base28 = ldf `is.na` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L252() else L253();
  L63(i14, c66, r140):
    c72 = `as.logical`(r140);
    c73 = `||`(c66, c72);
    goto L62(i14, c73);
  L65(i22, c76):
    c86 = `as.logical`(c76);
    if c86 then L268() else L67();
  L252():
    density15 = ld density;
    check L254() else D62();
  L253():
    r139 = dyn base28(<lang `[`(density, i)>);
    goto L63(i9, c61, r139);
  L261():
    density19 = ld density;
    check L262() else D65();
  D62():
    deopt 251 [i9, c61, density15];
  D65():
    deopt 259 [i10, c75, density19];
  L67():
    density23 = ld density;
    check L274() else D69();
  L69(i40):
    i57 = ld i;
    check L283() else D73();
  L254():
    density16 = force? density15;
    checkMissing(density16);
    c67 = `is.object`(density16);
    if c67 then L255() else L256(i9, c61, density16);
  L262():
    density20 = force? density19;
    checkMissing(density20);
    c78 = `is.object`(density20);
    if c78 then L263() else L264(i10, c75, density20);
  L268():
    sym29 = ldf `.External.graphics`;
    base29 = ldf `.External.graphics` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L269() else L270();
  D69():
    deopt 278 [i22, density23];
  D73():
    deopt 303 [i40, i57];
  L64(i18, c71, dx13):
    is_na6 = ldf `is.na` in base;
    r142 = dyn is_na6(dx13);
    check L259() else D64();
  L66(i27, c82, dx15):
    r144 = `<`(dx15, 0.0);
    c83 = `as.logical`(r144);
    c84 = `||`(c82, c83);
    goto L65(i27, c84);
  L68(i35, r146):
    goto L69(i35);
  L255():
    dr12 = tryDispatchBuiltin.1("[", density16);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L257() else L256(i9, c61, dr12);
  L256(i16, c69, density18):
    i19 = ld i;
    check L258() else D63();
  L263():
    dr14 = tryDispatchBuiltin.1("[", density20);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L265() else L264(i10, c75, dr14);
  L264(i25, c80, density22):
    i28 = ld i;
    check L266() else D66();
  L269():
    _External_graphics = ldf `.External.graphics`;
    check L271() else D67();
  L270():
    r145 = dyn base29(<sym C_polygon>, <lang `[`(`$`(xy, x), `:`(start, `(`(`-`(end, 1.0))))>, <lang `[`(`$`(xy, y), `:`(start, `(`(`-`(end, 1.0))))>, <lang `[`(col, i)>, NA_LGL, <lang `[`(lty, i)>, <sym ...>);
    goto L68(i22, r145);
  L274():
    density24 = force? density23;
    checkMissing(density24);
    c93 = `is.object`(density24);
    if c93 then L275() else L276(i22, density24);
  L283():
    i58 = force? i57;
    checkMissing(i58);
    r186 = `+`(i58, 1.0);
    st i = r186;
    goto L72(i40);
  D63():
    deopt 253 [i16, c69, density18, i19];
  D64():
    deopt 257 [i18, c71, r142];
  D66():
    deopt 261 [i25, c80, density22, i28];
  D67():
    deopt 269 [i22];
  L70(i44, dx33):
    r165 = `>`(dx33, 0.0);
    c94 = `as.logical`(r165);
    if c94 then L279() else L71();
  L257():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L64(i9, c61, dx12);
  L258():
    i20 = force? i19;
    __1 = ldf `[` in base;
    r141 = dyn __1(density18, i20);
    goto L64(i16, c69, r141);
  L259():
    goto L63(i18, c71, r142);
  L265():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L66(i10, c75, dx14);
  L266():
    i29 = force? i28;
    __2 = ldf `[` in base;
    r143 = dyn __2(density22, i29);
    goto L66(i25, c80, r143);
  L271():
    p3 = prom<V +>{
      C_polygon = ld C_polygon;
      C_polygon1 = force? C_polygon;
      checkMissing(C_polygon1);
      return C_polygon1;
    };
    p4 = prom<V +>{
      xy16 = ld xy;
      xy17 = force? xy16;
      checkMissing(xy17);
      c87 = `is.object`(xy17);
      if c87 then L2() else L3(xy17);
    L1(dx17):
      c88 = `is.object`(dx17);
      if c88 then L5() else L6(dx17);
    L2():
      dr16 = tryDispatchBuiltin.1("$", xy17);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(xy19):
      r148 = `$`(xy19, <sym x>);
      goto L1(r148);
    L0(dx21):
      return dx21;
    L4():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx16);
    L5():
      dr18 = tryDispatchBuiltin.1("[", dx17);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(dx19):
      start2 = ld start;
      start3 = force? start2;
      checkMissing(start3);
      end2 = ld end;
      end3 = force? end2;
      checkMissing(end3);
      r149 = `-`(end3, 1.0);
      r150 = `:`(start3, r149);
      __3 = ldf `[` in base;
      r151 = dyn __3(dx19, r150);
      goto L0(r151);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    p5 = prom<V +>{
      xy20 = ld xy;
      xy21 = force? xy20;
      checkMissing(xy21);
      c89 = `is.object`(xy21);
      if c89 then L2() else L3(xy21);
    L1(dx23):
      c90 = `is.object`(dx23);
      if c90 then L5() else L6(dx23);
    L2():
      dr20 = tryDispatchBuiltin.1("$", xy21);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(xy23):
      r153 = `$`(xy23, <sym y>);
      goto L1(r153);
    L0(dx27):
      return dx27;
    L4():
      dx22 = getTryDispatchBuiltinValue(dr20);
      goto L1(dx22);
    L5():
      dr22 = tryDispatchBuiltin.1("[", dx23);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L7() else L6(dr22);
    L6(dx25):
      start4 = ld start;
      start5 = force? start4;
      checkMissing(start5);
      end4 = ld end;
      end5 = force? end4;
      checkMissing(end5);
      r154 = `-`(end5, 1.0);
      r155 = `:`(start5, r154);
      __4 = ldf `[` in base;
      r156 = dyn __4(dx25, r155);
      goto L0(r156);
    L7():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx26);
    };
    p6 = prom<V +>{
      col16 = ld col;
      col17 = force? col16;
      checkMissing(col17);
      c91 = `is.object`(col17);
      if c91 then L1() else L2(col17);
    L0(dx29):
      return dx29;
    L1():
      dr24 = tryDispatchBuiltin.1("[", col17);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(col19):
      i36 = ld i;
      i37 = force? i36;
      __5 = ldf `[` in base;
      r158 = dyn __5(col19, i37);
      goto L0(r158);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx28);
    };
    p7 = prom<V +>{
      lty5 = ld lty;
      lty6 = force? lty5;
      checkMissing(lty6);
      c92 = `is.object`(lty6);
      if c92 then L1() else L2(lty6);
    L0(dx31):
      return dx31;
    L1():
      dr26 = tryDispatchBuiltin.1("[", lty6);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(lty8):
      i38 = ld i;
      i39 = force? i38;
      __6 = ldf `[` in base;
      r160 = dyn __6(lty8, i39);
      goto L0(r160);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx30);
    };
    ddd1 = ld `...`;
    r162 = dyn _External_graphics[, , , , , , `...`](p3, p4, p5, p6, NA_LGL, p7, ddd1);
    check L272() else D68();
  L275():
    dr28 = tryDispatchBuiltin.1("[", density24);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L277() else L276(i22, dr28);
  L276(i42, density26):
    i45 = ld i;
    check L278() else D70();
  D68():
    deopt 277 [i22, r162];
  D70():
    deopt 280 [i42, density26, i45];
  L71():
    goto L69(i44);
  L272():
    goto L68(i22, r162);
  L277():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L70(i22, dx32);
  L278():
    i46 = force? i45;
    __7 = ldf `[` in base;
    r164 = dyn __7(density26, i46);
    goto L70(i42, r164);
  L279():
    polygon_fullhatch = ldf `polygon.fullhatch`;
    check L280() else D71();
  D71():
    deopt 286 [i44];
  L280():
    p8 = prom<V +>{
      xy24 = ld xy;
      xy25 = force? xy24;
      checkMissing(xy25);
      c95 = `is.object`(xy25);
      if c95 then L2() else L3(xy25);
    L1(dx35):
      c96 = `is.object`(dx35);
      if c96 then L5() else L6(dx35);
    L2():
      dr30 = tryDispatchBuiltin.1("$", xy25);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L4() else L3(dr30);
    L3(xy27):
      r166 = `$`(xy27, <sym x>);
      goto L1(r166);
    L0(dx39):
      return dx39;
    L4():
      dx34 = getTryDispatchBuiltinValue(dr30);
      goto L1(dx34);
    L5():
      dr32 = tryDispatchBuiltin.1("[", dx35);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L7() else L6(dr32);
    L6(dx37):
      start6 = ld start;
      start7 = force? start6;
      checkMissing(start7);
      end6 = ld end;
      end7 = force? end6;
      checkMissing(end7);
      r167 = `-`(end7, 1.0);
      r168 = `:`(start7, r167);
      __8 = ldf `[` in base;
      r169 = dyn __8(dx37, r168);
      goto L0(r169);
    L7():
      dx38 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx38);
    };
    p9 = prom<V +>{
      xy28 = ld xy;
      xy29 = force? xy28;
      checkMissing(xy29);
      c97 = `is.object`(xy29);
      if c97 then L2() else L3(xy29);
    L1(dx41):
      c98 = `is.object`(dx41);
      if c98 then L5() else L6(dx41);
    L2():
      dr34 = tryDispatchBuiltin.1("$", xy29);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L4() else L3(dr34);
    L3(xy31):
      r171 = `$`(xy31, <sym y>);
      goto L1(r171);
    L0(dx45):
      return dx45;
    L4():
      dx40 = getTryDispatchBuiltinValue(dr34);
      goto L1(dx40);
    L5():
      dr36 = tryDispatchBuiltin.1("[", dx41);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L7() else L6(dr36);
    L6(dx43):
      start8 = ld start;
      start9 = force? start8;
      checkMissing(start9);
      end8 = ld end;
      end9 = force? end8;
      checkMissing(end9);
      r172 = `-`(end9, 1.0);
      r173 = `:`(start9, r172);
      __9 = ldf `[` in base;
      r174 = dyn __9(dx43, r173);
      goto L0(r174);
    L7():
      dx44 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx44);
    };
    p10 = prom<V +>{
      col20 = ld col;
      col21 = force? col20;
      checkMissing(col21);
      c99 = `is.object`(col21);
      if c99 then L1() else L2(col21);
    L0(dx47):
      return dx47;
    L1():
      dr38 = tryDispatchBuiltin.1("[", col21);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(col23):
      i49 = ld i;
      i50 = force? i49;
      __10 = ldf `[` in base;
      r176 = dyn __10(col23, i50);
      goto L0(r176);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx46);
    };
    p11 = prom<V +>{
      lty9 = ld lty;
      lty10 = force? lty9;
      checkMissing(lty10);
      c100 = `is.object`(lty10);
      if c100 then L1() else L2(lty10);
    L0(dx49):
      return dx49;
    L1():
      dr40 = tryDispatchBuiltin.1("[", lty10);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(lty12):
      i51 = ld i;
      i52 = force? i51;
      __11 = ldf `[` in base;
      r178 = dyn __11(lty12, i52);
      goto L0(r178);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx48);
    };
    p12 = prom<V +>{
      density27 = ld density;
      density28 = force? density27;
      checkMissing(density28);
      c101 = `is.object`(density28);
      if c101 then L1() else L2(density28);
    L0(dx51):
      return dx51;
    L1():
      dr42 = tryDispatchBuiltin.1("[", density28);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(density30):
      i53 = ld i;
      i54 = force? i53;
      __12 = ldf `[` in base;
      r180 = dyn __12(density30, i54);
      goto L0(r180);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx50);
    };
    p13 = prom<V +>{
      angle5 = ld angle;
      angle6 = force? angle5;
      checkMissing(angle6);
      c102 = `is.object`(angle6);
      if c102 then L1() else L2(angle6);
    L0(dx53):
      return dx53;
    L1():
      dr44 = tryDispatchBuiltin.1("[", angle6);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(angle8):
      i55 = ld i;
      i56 = force? i55;
      __13 = ldf `[` in base;
      r182 = dyn __13(angle8, i56);
      goto L0(r182);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx52);
    };
    p14 = prom<V +>{
      __debug_hatch = ld `..debug.hatch`;
      __debug_hatch1 = force? __debug_hatch;
      checkMissing(__debug_hatch1);
      return __debug_hatch1;
    };
    ddd2 = ld `...`;
    r185 = dyn polygon_fullhatch[, , col, lty, density, angle, `..debug.hatch`, `...`](p8, p9, p10, p11, p12, p13, p14, ddd2);
    check L281() else D72();
  D72():
    deopt 300 [i44, r185];
  L281():
    goto L69(i44);
  }
}
fun inner226200646(x, y, x0, y0, xd, yd, `..debug.hatch`, `...`) {
  (reg x:*, reg y:*, reg x0:*, reg y0:*, reg xd:*, reg yd:*, reg __debug_hatch:*, reg ddd:dots) -+> V { var x:*, var y:*, var x0:*, var y0:*, var xd:*, var yd:*, var `..debug.hatch`:*, reg __debug_hatch_isMissing:L, reg __debug_hatch_orDefault:*, var `...`:dots?, reg __debug_hatch1:*, reg __debug_hatch2:V, reg c:L, reg points:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r2:V, reg arrows:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg y3:*, reg y4:V, reg p3:p(V +), reg x5:*, reg x6:V, reg xd1:*, reg xd2:V, reg r5:V, reg p4:p(V +), reg y5:*, reg y6:V, reg yd1:*, reg yd2:V, reg r7:V, reg p5:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg xd3:*, reg xd4:V, reg y7:*, reg y8:V, reg y9:*, reg y10:V, reg r13:V, reg r14:V, reg yd3:*, reg yd4:V, reg x7:*, reg x8:V, reg x9:*, reg x10:V, reg r15:V, reg r16:V, reg r17:V, reg r18:V, reg as_integer:cls, reg r19:V, reg halfplane:*, reg halfplane1:V, reg c1:L, reg halfplane3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r20:V, reg halfplane4:*, reg halfplane5:V, reg c2:L, reg dx3:V, reg halfplane7:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg dx10:V, reg halfplane10:V, reg r22:V, reg halfplane11:*, reg halfplane12:V, reg length:cls, reg r23:V, reg r24:V, reg __1:cls, reg r25:V, reg r26:V, reg cross:*, reg cross1:V, reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg does_cross:*, reg does_cross1:V, reg any:cls, reg r30:V, reg r31:V, reg c3:L, reg x11:*, reg x12:V, reg c4:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx11:V, reg dx12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg x17:V, reg r35:V, reg x18:*, reg x19:V, reg length1:cls, reg r36:V, reg r37:V, reg __2:cls, reg r38:V, reg c5:L, reg dx14:V, reg dr6:V, reg dc3:L, reg dx15:V, reg dx16:V, reg does_cross2:*, reg does_cross3:V, reg __3:cls, reg r39:V, reg y11:*, reg y12:V, reg c6:L, reg y14:V, reg dr8:V, reg dc4:L, reg dx17:V, reg dx18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg y17:V, reg r41:V, reg y18:*, reg y19:V, reg length2:cls, reg r42:V, reg r43:V, reg __4:cls, reg r44:V, reg c7:L, reg dx20:V, reg dr10:V, reg dc5:L, reg dx21:V, reg dx22:V, reg does_cross4:*, reg does_cross5:V, reg __5:cls, reg r45:V, reg x20:*, reg x21:V, reg c8:L, reg x23:V, reg dr12:V, reg dc6:L, reg dx23:V, reg dx24:V, reg __6:cls, reg r46:V, reg c9:L, reg dx26:V, reg dr14:V, reg dc7:L, reg dx27:V, reg dx28:V, reg does_cross6:*, reg does_cross7:V, reg __7:cls, reg r47:V, reg y20:*, reg y21:V, reg c10:L, reg y23:V, reg dr16:V, reg dc8:L, reg dx29:V, reg dx30:V, reg __8:cls, reg r48:V, reg c11:L, reg dx32:V, reg dr18:V, reg dc9:L, reg dx33:V, reg dx34:V, reg does_cross8:*, reg does_cross9:V, reg __9:cls, reg r49:V, reg x24:*, reg x25:V, reg x26:*, reg x27:V, reg r50:V, reg y24:*, reg y25:V, reg y26:*, reg y27:V, reg r51:V, reg r52:V, reg y28:*, reg y29:V, reg y30:*, reg y31:V, reg r53:V, reg x28:*, reg x29:V, reg x30:*, reg x31:V, reg r54:V, reg r55:V, reg r56:V, reg xd5:*, reg xd6:V, reg y32:*, reg y33:V, reg y34:*, reg y35:V, reg r57:V, reg r58:V, reg yd5:*, reg yd6:V, reg x32:*, reg x33:V, reg x34:*, reg x35:V, reg r59:V, reg r60:V, reg r61:V, reg r62:V, reg order:cls, reg t:*, reg t1:V, reg p6:p(V +), reg r64:V, reg t2:*, reg t3:V, reg c12:L, reg t5:V, reg dr20:V, reg dc10:L, reg dx35:V, reg dx36:V, reg o:*, reg o1:V, reg __10:cls, reg r65:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r66:V, reg r67:V, reg cross2:*, reg cross3:V, reg c13:L, reg cross5:V, reg dr22:V, reg dc11:L, reg dx37:V, reg dx38:V, reg does_cross10:*, reg does_cross11:V, reg __11:cls, reg r68:V, reg c14:L, reg dx40:V, reg dr24:V, reg dc12:L, reg dx41:V, reg dx42:V, reg o2:*, reg o3:V, reg __12:cls, reg r69:V, reg cumsum:cls, reg r70:V, reg fillOddEven:*, reg fillOddEven1:V, reg c15:L, reg crossings:*, reg crossings1:V, reg __13:cls, reg r71:V, reg crossings2:*, reg crossings3:V, reg r73:V, reg x36:*, reg x37:V, reg xd7:*, reg xd8:V, reg tsort:*, reg tsort1:V, reg r74:V, reg r75:V, reg y36:*, reg y37:V, reg yd7:*, reg yd8:V, reg tsort2:*, reg tsort3:V, reg r76:V, reg r77:V, reg lx:*, reg lx1:V, reg c16:L, reg lx3:V, reg dr26:V, reg dc13:L, reg dx43:V, reg dx44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r78:V, reg lx6:V, reg r79:V, reg lx7:*, reg lx8:V, reg length3:cls, reg r80:V, reg r81:V, reg __14:cls, reg r82:V, reg c17:L, reg dx46:V, reg dr28:V, reg dc14:L, reg dx47:V, reg dx48:V, reg drawline:*, reg drawline1:V, reg __15:cls, reg r83:V, reg ly:*, reg ly1:V, reg c18:L, reg ly3:V, reg dr30:V, reg dc15:L, reg dx49:V, reg dx50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r84:V, reg ly6:V, reg r85:V, reg ly7:*, reg ly8:V, reg length4:cls, reg r86:V, reg r87:V, reg __16:cls, reg r88:V, reg c19:L, reg dx52:V, reg dr32:V, reg dc16:L, reg dx53:V, reg dx54:V, reg drawline2:*, reg drawline3:V, reg __17:cls, reg r89:V, reg lx9:*, reg lx10:V, reg c20:L, reg lx12:V, reg dr34:V, reg dc17:L, reg dx55:V, reg dx56:V, reg __18:cls, reg r90:V, reg c21:L, reg dx58:V, reg dr36:V, reg dc18:L, reg dx59:V, reg dx60:V, reg drawline4:*, reg drawline5:V, reg __19:cls, reg r91:V, reg ly9:*, reg ly10:V, reg c22:L, reg ly12:V, reg dr38:V, reg dc19:L, reg dx61:V, reg dx62:V, reg __20:cls, reg r92:V, reg c23:L, reg dx64:V, reg dr40:V, reg dc20:L, reg dx65:V, reg dx66:V, reg drawline6:*, reg drawline7:V, reg __21:cls, reg r93:V, reg segments:cls, reg lx13:*, reg lx14:V, reg p7:p(V +), reg ly13:*, reg ly14:V, reg p8:p(V +), reg lx15:*, reg lx16:V, reg p9:p(V +), reg ly15:*, reg ly16:V, reg p10:p(V +), reg ddd1:dots?, reg r98:V |
    mkenv;
    st x = x;
    st y = y;
    st x0 = x0;
    st y0 = y0;
    st xd = xd;
    st yd = yd;
    __debug_hatch_isMissing = missing.0(__debug_hatch);
    if __debug_hatch_isMissing then L0(FALSE) else L0(__debug_hatch);
  L0(__debug_hatch_orDefault):
    st `..debug.hatch` = __debug_hatch_orDefault;
    st `...` = ddd;
    __debug_hatch1 = ld `..debug.hatch`;
    check L36() else D0();
  D0():
    deopt 0 [__debug_hatch1];
  L36():
    __debug_hatch2 = force? __debug_hatch1;
    checkMissing(__debug_hatch2);
    c = `as.logical`(__debug_hatch2);
    if c then L37() else L1();
  L1():
    goto L2();
  L2():
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L37():
    points = ldf points;
    check L38() else D1();
  D1():
    deopt 3 [];
  L3(r12):
    st halfplane = r12;
    halfplane = ld halfplane;
    check L52() else D12();
  L38():
    p = prom<V +>{
      x1 = ld x0;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      y1 = ld y0;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r2 = dyn points(p, p1);
    check L39() else D2();
  L43():
    xd3 = ld xd;
    check L45() else D5();
  L44():
    r11 = dyn base(<lang `<=`(`-`(`*`(xd, `(`(`-`(y, y0))), `*`(yd, `(`(`-`(x, x0)))), 0.0)>);
    goto L3(r11);
  D2():
    deopt 6 [r2];
  D5():
    deopt 18 [xd3];
  D12():
    deopt 35 [halfplane];
  L39():
    arrows = ldf arrows;
    check L40() else D3();
  L45():
    xd4 = force? xd3;
    checkMissing(xd4);
    y7 = ld y;
    check L46() else D6();
  L52():
    halfplane1 = force? halfplane;
    checkMissing(halfplane1);
    c1 = `is.object`(halfplane1);
    if c1 then L53() else L54(halfplane1);
  D3():
    deopt 8 [];
  D6():
    deopt 19 [xd4, y7];
  L4(dx1):
    halfplane4 = ld halfplane;
    check L56() else D13();
  L40():
    p2 = prom<V +>{
      x3 = ld x0;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      y3 = ld y0;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    p4 = prom<V +>{
      x5 = ld x0;
      x6 = force? x5;
      checkMissing(x6);
      xd1 = ld xd;
      xd2 = force? xd1;
      checkMissing(xd2);
      r5 = `+`(x6, xd2);
      return r5;
    };
    p5 = prom<V +>{
      y5 = ld y0;
      y6 = force? y5;
      checkMissing(y6);
      yd1 = ld yd;
      yd2 = force? yd1;
      checkMissing(yd2);
      r7 = `+`(y6, yd2);
      return r7;
    };
    r9 = dyn arrows(p2, p3, p4, p5);
    check L41() else D4();
  L46():
    y8 = force? y7;
    checkMissing(y8);
    y9 = ld y0;
    check L47() else D7();
  L53():
    dr = tryDispatchBuiltin.1("[", halfplane1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L55() else L54(dr);
  L54(halfplane3):
    __ = ldf `[` in base;
    r20 = dyn __(halfplane3, -1);
    goto L4(r20);
  D4():
    deopt 13 [r9];
  D7():
    deopt 20 [xd4, y8, y9];
  D13():
    deopt 39 [dx1, halfplane4];
  L41():
    goto L2();
  L47():
    y10 = force? y9;
    checkMissing(y10);
    r13 = `-`(y8, y10);
    r14 = `*`(xd4, r13);
    yd3 = ld yd;
    check L48() else D8();
  L55():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L56():
    halfplane5 = force? halfplane4;
    checkMissing(halfplane5);
    c2 = `is.object`(halfplane5);
    if c2 then L57() else L58(dx1, halfplane5);
  D8():
    deopt 23 [r14, yd3];
  L5(dx6, dx7):
    r26 = `-`(dx6, dx7);
    st cross = r26;
    cross = ld cross;
    check L64() else D16();
  L48():
    yd4 = force? yd3;
    checkMissing(yd4);
    x7 = ld x;
    check L49() else D9();
  L57():
    dr2 = tryDispatchBuiltin.1("[", halfplane5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(dx1, dr2);
  L58(dx3, halfplane7):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  D9():
    deopt 24 [r14, yd4, x7];
  D16():
    deopt 51 [cross];
  L6(dx10, halfplane10, r22):
    r24 = `-`(<missing>, r22);
    __1 = ldf `[` in base;
    r25 = dyn __1(halfplane10, r24);
    goto L5(dx10, r25);
  L49():
    x8 = force? x7;
    checkMissing(x8);
    x9 = ld x0;
    check L50() else D10();
  L59():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx1, dx5);
  L60():
    halfplane11 = ld halfplane;
    check L62() else D14();
  L61():
    r21 = dyn base1(<sym halfplane>);
    goto L6(dx3, halfplane7, r21);
  L64():
    cross1 = force? cross;
    checkMissing(cross1);
    r27 = `!=`(cross1, 0.0);
    st `does.cross` = r27;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  D10():
    deopt 25 [r14, yd4, x8, x9];
  D14():
    deopt 43 [dx3, halfplane7, halfplane11];
  L7(r29):
    r31 = `!`(r29);
    c3 = `as.logical`(r31);
    if c3 then L69() else L8();
  L50():
    x10 = force? x9;
    checkMissing(x10);
    r15 = `-`(x8, x10);
    r16 = `*`(yd4, r15);
    r17 = `-`(r14, r16);
    r18 = `<=`(r17, 0.0);
    as_integer = ldf `as.integer` in base;
    r19 = dyn as_integer(r18);
    check L51() else D11();
  L62():
    halfplane12 = force? halfplane11;
    checkMissing(halfplane12);
    length = ldf length in base;
    r23 = dyn length(halfplane12);
    check L63() else D15();
  L65():
    does_cross = ld `does.cross`;
    check L67() else D17();
  L66():
    r28 = dyn base2(<sym does.cross>);
    goto L7(r28);
  D11():
    deopt 33 [r19];
  D15():
    deopt 46 [dx3, halfplane7, r23];
  D17():
    deopt 58 [does_cross];
  L8():
    x11 = ld x;
    check L72() else D19();
  L51():
    goto L3(r19);
  L63():
    goto L6(dx3, halfplane7, r23);
  L67():
    does_cross1 = force? does_cross;
    checkMissing(does_cross1);
    any = ldf any in base;
    r30 = dyn any(does_cross1);
    check L68() else D18();
  L69():
    popenv;
    return NULL;
  D18():
    deopt 61 [r30];
  D19():
    deopt 68 [x11];
  L68():
    goto L7(r30);
  L72():
    x12 = force? x11;
    checkMissing(x12);
    c4 = `is.object`(x12);
    if c4 then L73() else L74(x12);
  L10(dx12):
    c5 = `is.object`(dx12);
    if c5 then L80() else L81(dx12);
  L73():
    dr4 = tryDispatchBuiltin.1("[", x12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L75() else L74(dr4);
  L74(x14):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L76() else L77();
  L11(x17, r35):
    r37 = `-`(<missing>, r35);
    __2 = ldf `[` in base;
    r38 = dyn __2(x17, r37);
    goto L10(r38);
  L12(dx16):
    st x1 = dx16;
    y11 = ld y;
    check L84() else D23();
  L75():
    dx11 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx11);
  L76():
    x18 = ld x;
    check L78() else D20();
  L77():
    r34 = dyn base3(<sym x>);
    goto L11(x14, r34);
  L80():
    dr6 = tryDispatchBuiltin.1("[", dx12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(dr6);
  L81(dx14):
    does_cross2 = ld `does.cross`;
    check L83() else D22();
  D20():
    deopt 72 [x14, x18];
  D22():
    deopt 78 [dx14, does_cross2];
  D23():
    deopt 82 [y11];
  L78():
    x19 = force? x18;
    checkMissing(x19);
    length1 = ldf length in base;
    r36 = dyn length1(x19);
    check L79() else D21();
  L82():
    dx15 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx15);
  L83():
    does_cross3 = force? does_cross2;
    __3 = ldf `[` in base;
    r39 = dyn __3(dx14, does_cross3);
    goto L12(r39);
  L84():
    y12 = force? y11;
    checkMissing(y12);
    c6 = `is.object`(y12);
    if c6 then L85() else L86(y12);
  D21():
    deopt 75 [x14, r36];
  L13(dx18):
    c7 = `is.object`(dx18);
    if c7 then L92() else L93(dx18);
  L79():
    goto L11(x14, r36);
  L85():
    dr8 = tryDispatchBuiltin.1("[", y12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L87() else L86(dr8);
  L86(y14):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L88() else L89();
  L14(y17, r41):
    r43 = `-`(<missing>, r41);
    __4 = ldf `[` in base;
    r44 = dyn __4(y17, r43);
    goto L13(r44);
  L15(dx22):
    st y1 = dx22;
    x20 = ld x;
    check L96() else D27();
  L87():
    dx17 = getTryDispatchBuiltinValue(dr8);
    goto L13(dx17);
  L88():
    y18 = ld y;
    check L90() else D24();
  L89():
    r40 = dyn base4(<sym y>);
    goto L14(y14, r40);
  L92():
    dr10 = tryDispatchBuiltin.1("[", dx18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L94() else L93(dr10);
  L93(dx20):
    does_cross4 = ld `does.cross`;
    check L95() else D26();
  D24():
    deopt 86 [y14, y18];
  D26():
    deopt 92 [dx20, does_cross4];
  D27():
    deopt 96 [x20];
  L90():
    y19 = force? y18;
    checkMissing(y19);
    length2 = ldf length in base;
    r42 = dyn length2(y19);
    check L91() else D25();
  L94():
    dx21 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx21);
  L95():
    does_cross5 = force? does_cross4;
    __5 = ldf `[` in base;
    r45 = dyn __5(dx20, does_cross5);
    goto L15(r45);
  L96():
    x21 = force? x20;
    checkMissing(x21);
    c8 = `is.object`(x21);
    if c8 then L97() else L98(x21);
  D25():
    deopt 89 [y14, r42];
  L16(dx24):
    c9 = `is.object`(dx24);
    if c9 then L100() else L101(dx24);
  L91():
    goto L14(y14, r42);
  L97():
    dr12 = tryDispatchBuiltin.1("[", x21);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L99() else L98(dr12);
  L98(x23):
    __6 = ldf `[` in base;
    r46 = dyn __6(x23, -1);
    goto L16(r46);
  L17(dx28):
    st x2 = dx28;
    y20 = ld y;
    check L104() else D29();
  L99():
    dx23 = getTryDispatchBuiltinValue(dr12);
    goto L16(dx23);
  L100():
    dr14 = tryDispatchBuiltin.1("[", dx24);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L102() else L101(dr14);
  L101(dx26):
    does_cross6 = ld `does.cross`;
    check L103() else D28();
  D28():
    deopt 101 [dx26, does_cross6];
  D29():
    deopt 105 [y20];
  L102():
    dx27 = getTryDispatchBuiltinValue(dr14);
    goto L17(dx27);
  L103():
    does_cross7 = force? does_cross6;
    __7 = ldf `[` in base;
    r47 = dyn __7(dx26, does_cross7);
    goto L17(r47);
  L104():
    y21 = force? y20;
    checkMissing(y21);
    c10 = `is.object`(y21);
    if c10 then L105() else L106(y21);
  L18(dx30):
    c11 = `is.object`(dx30);
    if c11 then L108() else L109(dx30);
  L105():
    dr16 = tryDispatchBuiltin.1("[", y21);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L107() else L106(dr16);
  L106(y23):
    __8 = ldf `[` in base;
    r48 = dyn __8(y23, -1);
    goto L18(r48);
  L19(dx34):
    st y2 = dx34;
    x24 = ld x1;
    check L112() else D31();
  L107():
    dx29 = getTryDispatchBuiltinValue(dr16);
    goto L18(dx29);
  L108():
    dr18 = tryDispatchBuiltin.1("[", dx30);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L110() else L109(dr18);
  L109(dx32):
    does_cross8 = ld `does.cross`;
    check L111() else D30();
  D30():
    deopt 110 [dx32, does_cross8];
  D31():
    deopt 114 [x24];
  L110():
    dx33 = getTryDispatchBuiltinValue(dr18);
    goto L19(dx33);
  L111():
    does_cross9 = force? does_cross8;
    __9 = ldf `[` in base;
    r49 = dyn __9(dx32, does_cross9);
    goto L19(r49);
  L112():
    x25 = force? x24;
    checkMissing(x25);
    x26 = ld x0;
    check L113() else D32();
  D32():
    deopt 115 [x25, x26];
  L113():
    x27 = force? x26;
    checkMissing(x27);
    r50 = `-`(x25, x27);
    y24 = ld y2;
    check L114() else D33();
  D33():
    deopt 117 [r50, y24];
  L114():
    y25 = force? y24;
    checkMissing(y25);
    y26 = ld y1;
    check L115() else D34();
  D34():
    deopt 118 [r50, y25, y26];
  L115():
    y27 = force? y26;
    checkMissing(y27);
    r51 = `-`(y25, y27);
    r52 = `*`(r50, r51);
    y28 = ld y1;
    check L116() else D35();
  D35():
    deopt 121 [r52, y28];
  L116():
    y29 = force? y28;
    checkMissing(y29);
    y30 = ld y0;
    check L117() else D36();
  D36():
    deopt 122 [r52, y29, y30];
  L117():
    y31 = force? y30;
    checkMissing(y31);
    r53 = `-`(y29, y31);
    x28 = ld x2;
    check L118() else D37();
  D37():
    deopt 124 [r52, r53, x28];
  L118():
    x29 = force? x28;
    checkMissing(x29);
    x30 = ld x1;
    check L119() else D38();
  D38():
    deopt 125 [r52, r53, x29, x30];
  L119():
    x31 = force? x30;
    checkMissing(x31);
    r54 = `-`(x29, x31);
    r55 = `*`(r53, r54);
    r56 = `-`(r52, r55);
    xd5 = ld xd;
    check L120() else D39();
  D39():
    deopt 129 [r56, xd5];
  L120():
    xd6 = force? xd5;
    checkMissing(xd6);
    y32 = ld y2;
    check L121() else D40();
  D40():
    deopt 130 [r56, xd6, y32];
  L121():
    y33 = force? y32;
    checkMissing(y33);
    y34 = ld y1;
    check L122() else D41();
  D41():
    deopt 131 [r56, xd6, y33, y34];
  L122():
    y35 = force? y34;
    checkMissing(y35);
    r57 = `-`(y33, y35);
    r58 = `*`(xd6, r57);
    yd5 = ld yd;
    check L123() else D42();
  D42():
    deopt 134 [r56, r58, yd5];
  L123():
    yd6 = force? yd5;
    checkMissing(yd6);
    x32 = ld x2;
    check L124() else D43();
  D43():
    deopt 135 [r56, r58, yd6, x32];
  L124():
    x33 = force? x32;
    checkMissing(x33);
    x34 = ld x1;
    check L125() else D44();
  D44():
    deopt 136 [r56, r58, yd6, x33, x34];
  L125():
    x35 = force? x34;
    checkMissing(x35);
    r59 = `-`(x33, x35);
    r60 = `*`(yd6, r59);
    r61 = `-`(r58, r60);
    r62 = `/`(r56, r61);
    st t = r62;
    order = ldf order;
    check L126() else D45();
  D45():
    deopt 144 [];
  L126():
    p6 = prom<V +>{
      t = ld t;
      t1 = force? t;
      checkMissing(t1);
      return t1;
    };
    r64 = dyn order(p6);
    check L127() else D46();
  D46():
    deopt 146 [r64];
  L127():
    st o = r64;
    t2 = ld t;
    check L128() else D47();
  D47():
    deopt 148 [t2];
  L128():
    t3 = force? t2;
    checkMissing(t3);
    c12 = `is.object`(t3);
    if c12 then L129() else L130(t3);
  L20(dx36):
    st tsort = dx36;
    sym5 = ldf cumsum;
    base5 = ldf cumsum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L133() else L134();
  L129():
    dr20 = tryDispatchBuiltin.1("[", t3);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L131() else L130(dr20);
  L130(t5):
    o = ld o;
    check L132() else D48();
  D48():
    deopt 150 [t5, o];
  L21(r67):
    st crossings = r67;
    fillOddEven = ld fillOddEven;
    check L145() else D53();
  L131():
    dx35 = getTryDispatchBuiltinValue(dr20);
    goto L20(dx35);
  L132():
    o1 = force? o;
    __10 = ldf `[` in base;
    r65 = dyn __10(t5, o1);
    goto L20(r65);
  L133():
    cross2 = ld cross;
    check L135() else D49();
  L134():
    r66 = dyn base5(<lang `[`(`[`(cross, does.cross), o)>);
    goto L21(r66);
  D49():
    deopt 156 [cross2];
  D53():
    deopt 167 [fillOddEven];
  L135():
    cross3 = force? cross2;
    checkMissing(cross3);
    c13 = `is.object`(cross3);
    if c13 then L136() else L137(cross3);
  L145():
    fillOddEven1 = force? fillOddEven;
    checkMissing(fillOddEven1);
    c15 = `as.logical`(fillOddEven1);
    if c15 then L146() else L24();
  L22(dx38):
    c14 = `is.object`(dx38);
    if c14 then L140() else L141(dx38);
  L24():
    goto L25();
  L25():
    crossings2 = ld crossings;
    check L150() else D56();
  L136():
    dr22 = tryDispatchBuiltin.1("[", cross3);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L138() else L137(dr22);
  L137(cross5):
    does_cross10 = ld `does.cross`;
    check L139() else D50();
  L146():
    crossings = ld crossings;
    check L147() else D54();
  D50():
    deopt 158 [cross5, does_cross10];
  D54():
    deopt 170 [crossings];
  D56():
    deopt 178 [crossings2];
  L23(dx42):
    cumsum = ldf cumsum in base;
    r70 = dyn cumsum(dx42);
    check L144() else D52();
  L138():
    dx37 = getTryDispatchBuiltinValue(dr22);
    goto L22(dx37);
  L139():
    does_cross11 = force? does_cross10;
    __11 = ldf `[` in base;
    r68 = dyn __11(cross5, does_cross11);
    goto L22(r68);
  L140():
    dr24 = tryDispatchBuiltin.1("[", dx38);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L142() else L141(dr24);
  L141(dx40):
    o2 = ld o;
    check L143() else D51();
  L147():
    crossings1 = force? crossings;
    checkMissing(crossings1);
    __13 = ldf `%%` in base;
    r71 = dyn __13(crossings1, 2.0);
    check L148() else D55();
  L150():
    crossings3 = force? crossings2;
    checkMissing(crossings3);
    r73 = `!=`(crossings3, 0.0);
    st drawline = r73;
    x36 = ld x0;
    check L151() else D57();
  D51():
    deopt 161 [dx40, o2];
  D52():
    deopt 165 [r70];
  D55():
    deopt 174 [r71];
  D57():
    deopt 183 [x36];
  L142():
    dx41 = getTryDispatchBuiltinValue(dr24);
    goto L23(dx41);
  L143():
    o3 = force? o2;
    __12 = ldf `[` in base;
    r69 = dyn __12(dx40, o3);
    goto L23(r69);
  L144():
    goto L21(r70);
  L148():
    st crossings = r71;
    goto L25();
  L151():
    x37 = force? x36;
    checkMissing(x37);
    xd7 = ld xd;
    check L152() else D58();
  D58():
    deopt 184 [x37, xd7];
  L152():
    xd8 = force? xd7;
    checkMissing(xd8);
    tsort = ld tsort;
    check L153() else D59();
  D59():
    deopt 185 [x37, xd8, tsort];
  L153():
    tsort1 = force? tsort;
    checkMissing(tsort1);
    r74 = `*`(xd8, tsort1);
    r75 = `+`(x37, r74);
    st lx = r75;
    y36 = ld y0;
    check L154() else D60();
  D60():
    deopt 190 [y36];
  L154():
    y37 = force? y36;
    checkMissing(y37);
    yd7 = ld yd;
    check L155() else D61();
  D61():
    deopt 191 [y37, yd7];
  L155():
    yd8 = force? yd7;
    checkMissing(yd8);
    tsort2 = ld tsort;
    check L156() else D62();
  D62():
    deopt 192 [y37, yd8, tsort2];
  L156():
    tsort3 = force? tsort2;
    checkMissing(tsort3);
    r76 = `*`(yd8, tsort3);
    r77 = `+`(y37, r76);
    st ly = r77;
    lx = ld lx;
    check L157() else D63();
  D63():
    deopt 197 [lx];
  L157():
    lx1 = force? lx;
    checkMissing(lx1);
    c16 = `is.object`(lx1);
    if c16 then L158() else L159(lx1);
  L26(dx44):
    c17 = `is.object`(dx44);
    if c17 then L165() else L166(dx44);
  L158():
    dr26 = tryDispatchBuiltin.1("[", lx1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L160() else L159(dr26);
  L159(lx3):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L161() else L162();
  L27(lx6, r79):
    r81 = `-`(<missing>, r79);
    __14 = ldf `[` in base;
    r82 = dyn __14(lx6, r81);
    goto L26(r82);
  L28(dx48):
    st lx1 = dx48;
    ly = ld ly;
    check L169() else D67();
  L160():
    dx43 = getTryDispatchBuiltinValue(dr26);
    goto L26(dx43);
  L161():
    lx7 = ld lx;
    check L163() else D64();
  L162():
    r78 = dyn base6(<sym lx>);
    goto L27(lx3, r78);
  L165():
    dr28 = tryDispatchBuiltin.1("[", dx44);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L167() else L166(dr28);
  L166(dx46):
    drawline = ld drawline;
    check L168() else D66();
  D64():
    deopt 201 [lx3, lx7];
  D66():
    deopt 207 [dx46, drawline];
  D67():
    deopt 211 [ly];
  L163():
    lx8 = force? lx7;
    checkMissing(lx8);
    length3 = ldf length in base;
    r80 = dyn length3(lx8);
    check L164() else D65();
  L167():
    dx47 = getTryDispatchBuiltinValue(dr28);
    goto L28(dx47);
  L168():
    drawline1 = force? drawline;
    __15 = ldf `[` in base;
    r83 = dyn __15(dx46, drawline1);
    goto L28(r83);
  L169():
    ly1 = force? ly;
    checkMissing(ly1);
    c18 = `is.object`(ly1);
    if c18 then L170() else L171(ly1);
  D65():
    deopt 204 [lx3, r80];
  L29(dx50):
    c19 = `is.object`(dx50);
    if c19 then L177() else L178(dx50);
  L164():
    goto L27(lx3, r80);
  L170():
    dr30 = tryDispatchBuiltin.1("[", ly1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L172() else L171(dr30);
  L171(ly3):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L173() else L174();
  L30(ly6, r85):
    r87 = `-`(<missing>, r85);
    __16 = ldf `[` in base;
    r88 = dyn __16(ly6, r87);
    goto L29(r88);
  L31(dx54):
    st ly1 = dx54;
    lx9 = ld lx;
    check L181() else D71();
  L172():
    dx49 = getTryDispatchBuiltinValue(dr30);
    goto L29(dx49);
  L173():
    ly7 = ld ly;
    check L175() else D68();
  L174():
    r84 = dyn base7(<sym ly>);
    goto L30(ly3, r84);
  L177():
    dr32 = tryDispatchBuiltin.1("[", dx50);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L179() else L178(dr32);
  L178(dx52):
    drawline2 = ld drawline;
    check L180() else D70();
  D68():
    deopt 215 [ly3, ly7];
  D70():
    deopt 221 [dx52, drawline2];
  D71():
    deopt 225 [lx9];
  L175():
    ly8 = force? ly7;
    checkMissing(ly8);
    length4 = ldf length in base;
    r86 = dyn length4(ly8);
    check L176() else D69();
  L179():
    dx53 = getTryDispatchBuiltinValue(dr32);
    goto L31(dx53);
  L180():
    drawline3 = force? drawline2;
    __17 = ldf `[` in base;
    r89 = dyn __17(dx52, drawline3);
    goto L31(r89);
  L181():
    lx10 = force? lx9;
    checkMissing(lx10);
    c20 = `is.object`(lx10);
    if c20 then L182() else L183(lx10);
  D69():
    deopt 218 [ly3, r86];
  L32(dx56):
    c21 = `is.object`(dx56);
    if c21 then L185() else L186(dx56);
  L176():
    goto L30(ly3, r86);
  L182():
    dr34 = tryDispatchBuiltin.1("[", lx10);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L184() else L183(dr34);
  L183(lx12):
    __18 = ldf `[` in base;
    r90 = dyn __18(lx12, -1);
    goto L32(r90);
  L33(dx60):
    st lx2 = dx60;
    ly9 = ld ly;
    check L189() else D73();
  L184():
    dx55 = getTryDispatchBuiltinValue(dr34);
    goto L32(dx55);
  L185():
    dr36 = tryDispatchBuiltin.1("[", dx56);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L187() else L186(dr36);
  L186(dx58):
    drawline4 = ld drawline;
    check L188() else D72();
  D72():
    deopt 230 [dx58, drawline4];
  D73():
    deopt 234 [ly9];
  L187():
    dx59 = getTryDispatchBuiltinValue(dr36);
    goto L33(dx59);
  L188():
    drawline5 = force? drawline4;
    __19 = ldf `[` in base;
    r91 = dyn __19(dx58, drawline5);
    goto L33(r91);
  L189():
    ly10 = force? ly9;
    checkMissing(ly10);
    c22 = `is.object`(ly10);
    if c22 then L190() else L191(ly10);
  L34(dx62):
    c23 = `is.object`(dx62);
    if c23 then L193() else L194(dx62);
  L190():
    dr38 = tryDispatchBuiltin.1("[", ly10);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L192() else L191(dr38);
  L191(ly12):
    __20 = ldf `[` in base;
    r92 = dyn __20(ly12, -1);
    goto L34(r92);
  L35(dx66):
    st ly2 = dx66;
    segments = ldf segments;
    check L197() else D75();
  L192():
    dx61 = getTryDispatchBuiltinValue(dr38);
    goto L34(dx61);
  L193():
    dr40 = tryDispatchBuiltin.1("[", dx62);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L195() else L194(dr40);
  L194(dx64):
    drawline6 = ld drawline;
    check L196() else D74();
  D74():
    deopt 239 [dx64, drawline6];
  D75():
    deopt 244 [];
  L195():
    dx65 = getTryDispatchBuiltinValue(dr40);
    goto L35(dx65);
  L196():
    drawline7 = force? drawline6;
    __21 = ldf `[` in base;
    r93 = dyn __21(dx64, drawline7);
    goto L35(r93);
  L197():
    p7 = prom<V +>{
      lx13 = ld lx1;
      lx14 = force? lx13;
      checkMissing(lx14);
      return lx14;
    };
    p8 = prom<V +>{
      ly13 = ld ly1;
      ly14 = force? ly13;
      checkMissing(ly14);
      return ly14;
    };
    p9 = prom<V +>{
      lx15 = ld lx2;
      lx16 = force? lx15;
      checkMissing(lx16);
      return lx16;
    };
    p10 = prom<V +>{
      ly15 = ld ly2;
      ly16 = force? ly15;
      checkMissing(ly16);
      return ly16;
    };
    ddd1 = ld `...`;
    r98 = dyn segments[, , , , `...`](p7, p8, p9, p10, ddd1);
    check L198() else D76();
  D76():
    deopt 250 [r98];
  L198():
    popenv;
    return r98;
  }
}
fun inner2395908955(x, y, density, angle, `..debug.hatch`, `...`) {
  (reg x:*, reg y:*, reg density:*, reg angle:*, reg __debug_hatch:*, reg ddd:dots) -+> V { var x:*, var y:*, var density:*, var angle:*, var `..debug.hatch`:*, reg __debug_hatch_isMissing:L, reg __debug_hatch_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg c1:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg y1:*, reg y2:V, reg y3:*, reg y4:V, reg c2:L, reg y6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r6:V, reg c3:cls, reg r7:V, reg angle1:*, reg angle2:V, reg __2:cls, reg r8:V, reg par:cls, reg r9:V, reg c4:L, reg c5:V, reg par1:cls, reg r10:V, reg c7:L, reg c8:V, reg c10:L, reg warning:cls, reg r11:V, reg par2:cls, reg r14:V, reg par3:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg usr:*, reg usr1:V, reg c11:L, reg usr3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __3:cls, reg r18:V, reg usr4:*, reg usr5:V, reg c12:L, reg dx7:V, reg usr7:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg dx11:V, reg __4:cls, reg r19:V, reg r20:V, reg usr8:*, reg usr9:V, reg c13:L, reg usr11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r21:V, reg usr12:*, reg usr13:V, reg c14:L, reg dx15:V, reg usr15:V, reg dr10:V, reg dc5:L, reg dx17:V, reg dx18:V, reg dx19:V, reg __6:cls, reg r22:V, reg r23:V, reg c15:cls, reg r24:V, reg pin:*, reg pin1:V, reg r25:V, reg upi:*, reg upi1:V, reg c16:L, reg upi3:V, reg dr12:V, reg dc6:L, reg dx20:V, reg dx21:V, reg __7:cls, reg r26:V, reg r27:V, reg c17:L, reg angle3:*, reg angle4:V, reg r28:V, reg upi4:*, reg upi5:V, reg c18:L, reg upi7:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg __8:cls, reg r30:V, reg r31:V, reg c19:L, reg angle5:*, reg angle6:V, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg upi8:*, reg upi9:V, reg abs:cls, reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg angle7:*, reg angle8:V, reg r39:V, reg r40:V, reg r41:V, reg upi10:*, reg upi11:V, reg c20:L, reg r43:V, reg upi13:V, reg dr16:V, reg dc8:L, reg dx24:V, reg r45:V, reg dx25:V, reg __9:cls, reg r46:V, reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg angle9:*, reg angle10:V, reg r50:V, reg r51:V, reg r52:V, reg upi14:*, reg upi15:V, reg c21:L, reg r54:V, reg upi17:V, reg dr18:V, reg dc9:L, reg dx26:V, reg r56:V, reg dx27:V, reg __10:cls, reg r57:V, reg r58:V, reg angle11:*, reg angle12:V, reg r59:V, reg c22:L, reg c23:V, reg angle13:*, reg angle14:V, reg r60:V, reg c25:L, reg c26:V, reg c28:L, reg angle15:*, reg angle16:V, reg r61:V, reg c29:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r62:V, reg r63:V, reg x7:*, reg x8:V, reg max:cls, reg r64:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:V, reg x9:*, reg x10:V, reg min:cls, reg r67:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:V, reg x11:*, reg x12:V, reg min1:cls, reg r71:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r72:V, reg r73:V, reg x13:*, reg x14:V, reg max1:cls, reg r74:V, reg upi18:*, reg upi19:V, reg c30:L, reg upi21:V, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg __11:cls, reg r75:V, reg density1:*, reg density2:V, reg r76:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg r80:V, reg r81:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r84:V, reg r85:V, reg r86:V, reg angle17:*, reg angle18:V, reg r87:V, reg r88:V, reg r89:V, reg abs1:cls, reg r90:V, reg r91:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r92:V, reg r93:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r94:V, reg r95:V, reg y7:*, reg y8:V, reg min2:cls, reg r96:V, reg first_x:*, reg first_x1:V, reg yd:*, reg yd1:V, reg r97:V, reg xd:*, reg xd1:V, reg r98:V, reg r99:V, reg y_shift:*, reg y_shift1:V, reg r100:V, reg r101:V, reg y_shift2:*, reg y_shift3:V, reg r102:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r103:V, reg r104:V, reg y9:*, reg y10:V, reg max2:cls, reg r105:V, reg last_x:*, reg last_x1:V, reg yd2:*, reg yd3:V, reg r106:V, reg xd2:*, reg xd3:V, reg r107:V, reg r108:V, reg y11:*, reg y12:V, reg y_end:*, reg y_end1:V, reg r109:V, reg c31:L, reg polygon_onehatch:cls, reg x15:*, reg x16:V, reg p:p(V +), reg y13:*, reg y14:V, reg p1:p(V +), reg x17:*, reg x18:V, reg p2:p(V +), reg y15:*, reg y16:V, reg p3:p(V +), reg xd4:*, reg xd5:V, reg p4:p(V +), reg yd4:*, reg yd5:V, reg p5:p(V +), reg __debug_hatch1:*, reg __debug_hatch2:V, reg p6:p(V +), reg ddd1:dots?, reg r117:V, reg y17:*, reg y18:V, reg y_shift4:*, reg y_shift5:V, reg r118:V, reg angle19:*, reg angle20:V, reg r119:V, reg c32:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r120:V, reg r121:V, reg y19:*, reg y20:V, reg max3:cls, reg r122:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r123:V, reg r124:V, reg y21:*, reg y22:V, reg min3:cls, reg r125:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r127:V, reg r128:V, reg y23:*, reg y24:V, reg min4:cls, reg r129:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r130:V, reg r131:V, reg y25:*, reg y26:V, reg max4:cls, reg r132:V, reg upi22:*, reg upi23:V, reg c33:L, reg upi25:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg __12:cls, reg r133:V, reg density3:*, reg density4:V, reg r134:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r137:V, reg r138:V, reg r139:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r142:V, reg r143:V, reg r144:V, reg angle21:*, reg angle22:V, reg r145:V, reg r146:V, reg r147:V, reg abs2:cls, reg r148:V, reg r149:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r150:V, reg r151:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r152:V, reg r153:V, reg x19:*, reg x20:V, reg min5:cls, reg r154:V, reg first_y:*, reg first_y1:V, reg xd6:*, reg xd7:V, reg r155:V, reg yd6:*, reg yd7:V, reg r156:V, reg r157:V, reg x_shift:*, reg x_shift1:V, reg r158:V, reg r159:V, reg x_shift2:*, reg x_shift3:V, reg r160:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r161:V, reg r162:V, reg x21:*, reg x22:V, reg max5:cls, reg r163:V, reg last_y:*, reg last_y1:V, reg xd8:*, reg xd9:V, reg r164:V, reg yd8:*, reg yd9:V, reg r165:V, reg r166:V, reg x23:*, reg x24:V, reg x_end:*, reg x_end1:V, reg r167:V, reg c34:L, reg polygon_onehatch1:cls, reg x25:*, reg x26:V, reg p7:p(V +), reg y27:*, reg y28:V, reg p8:p(V +), reg x27:*, reg x28:V, reg p9:p(V +), reg y29:*, reg y30:V, reg p10:p(V +), reg xd10:*, reg xd11:V, reg p11:p(V +), reg yd10:*, reg yd11:V, reg p12:p(V +), reg __debug_hatch3:*, reg __debug_hatch4:V, reg p13:p(V +), reg ddd2:dots?, reg r175:V, reg x29:*, reg x30:V, reg x_shift4:*, reg x_shift5:V, reg r176:V |
    mkenv;
    st x = x;
    st y = y;
    st density = density;
    st angle = angle;
    __debug_hatch_isMissing = missing.0(__debug_hatch);
    if __debug_hatch_isMissing then L0(FALSE) else L0(__debug_hatch);
  L0(__debug_hatch_orDefault):
    st `..debug.hatch` = __debug_hatch_orDefault;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L54() else L55();
  L1(r1):
    st x = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L62() else L63();
  L54():
    x1 = ld x;
    check L56() else D0();
  L55():
    r = dyn base(<sym x>, <lang `[`(x, 1)>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L3(r5):
    st y = r5;
    angle1 = ld angle;
    check L70() else D6();
  L56():
    x2 = force? x1;
    checkMissing(x2);
    x3 = ld x;
    check L57() else D1();
  L62():
    y1 = ld y;
    check L64() else D3();
  L63():
    r4 = dyn base1(<sym y>, <lang `[`(y, 1)>);
    goto L3(r4);
  D1():
    deopt 4 [x3];
  D3():
    deopt 14 [y1];
  D6():
    deopt 25 [angle1];
  L57():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L58() else L59(x4);
  L64():
    y2 = force? y1;
    checkMissing(y2);
    y3 = ld y;
    check L65() else D4();
  L70():
    angle2 = force? angle1;
    checkMissing(angle2);
    __2 = ldf `%%` in base;
    r8 = dyn __2(angle2, 180.0);
    check L71() else D7();
  D4():
    deopt 16 [y3];
  D7():
    deopt 29 [r8];
  L2(dx1):
    c1 = ldf c in base;
    r3 = dyn c1(x2, dx1);
    check L61() else D2();
  L58():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(dr);
  L59(x6):
    __ = ldf `[` in base;
    r2 = dyn __(x6, 1);
    goto L2(r2);
  L65():
    y4 = force? y3;
    checkMissing(y4);
    c2 = `is.object`(y4);
    if c2 then L66() else L67(y4);
  L71():
    st angle = r8;
    par = ldf par;
    check L72() else D8();
  D2():
    deopt 10 [r3];
  D8():
    deopt 32 [];
  L4(dx3):
    c3 = ldf c in base;
    r7 = dyn c3(y2, dx3);
    check L69() else D5();
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L61():
    goto L1(r3);
  L66():
    dr2 = tryDispatchBuiltin.1("[", y4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L68() else L67(dr2);
  L67(y6):
    __1 = ldf `[` in base;
    r6 = dyn __1(y6, 1);
    goto L4(r6);
  L72():
    r9 = dyn par("xlog");
    check L73() else D9();
  D5():
    deopt 22 [r7];
  D9():
    deopt 34 [r9];
  L68():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L69():
    goto L3(r7);
  L73():
    c4 = `as.logical`(r9);
    if c4 then L5(c4) else L74();
  L5(c5):
    c10 = `as.logical`(c5);
    if c10 then L78() else L6();
  L74():
    par1 = ldf par;
    check L75() else D10();
  D10():
    deopt 36 [c4];
  L6():
    par2 = ldf par;
    check L83() else D14();
  L75():
    r10 = dyn par1("ylog");
    check L76() else D11();
  L78():
    warning = ldf warning;
    check L79() else D12();
  D11():
    deopt 38 [c4, r10];
  D12():
    deopt 41 [];
  D14():
    deopt 50 [];
  L76():
    c7 = `as.logical`(r10);
    c8 = `||`(c4, c7);
    goto L5(c8);
  L79():
    r11 = dyn warning("cannot hatch with logarithmic scale active");
    check L80() else D13();
  L83():
    r14 = dyn par2("usr");
    check L84() else D15();
  D13():
    deopt 43 [r11];
  D15():
    deopt 52 [r14];
  L80():
    popenv;
    return NULL;
  L84():
    st usr = r14;
    par3 = ldf par;
    check L85() else D16();
  D16():
    deopt 55 [];
  L85():
    r15 = dyn par3("pin");
    check L86() else D17();
  D17():
    deopt 57 [r15];
  L86():
    st pin = r15;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L87() else L88();
  L8(r17):
    pin = ld pin;
    check L106() else D23();
  L87():
    usr = ld usr;
    check L89() else D18();
  L88():
    r16 = dyn base2(<lang `-`(`[`(usr, 2), `[`(usr, 1))>, <lang `-`(`[`(usr, 4), `[`(usr, 3))>);
    goto L8(r16);
  D18():
    deopt 61 [usr];
  D23():
    deopt 82 [r17, pin];
  L89():
    usr1 = force? usr;
    checkMissing(usr1);
    c11 = `is.object`(usr1);
    if c11 then L90() else L91(usr1);
  L106():
    pin1 = force? pin;
    checkMissing(pin1);
    r25 = `/`(r17, pin1);
    st upi = r25;
    upi = ld upi;
    check L107() else D24();
  D24():
    deopt 86 [upi];
  L9(dx5):
    usr4 = ld usr;
    check L93() else D19();
  L90():
    dr4 = tryDispatchBuiltin.1("[", usr1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L92() else L91(dr4);
  L91(usr3):
    __3 = ldf `[` in base;
    r18 = dyn __3(usr3, 2);
    goto L9(r18);
  L107():
    upi1 = force? upi;
    checkMissing(upi1);
    c16 = `is.object`(upi1);
    if c16 then L108() else L109(upi1);
  D19():
    deopt 65 [dx5, usr4];
  L13(dx21):
    r27 = `<`(dx21, 0.0);
    c17 = `as.logical`(r27);
    if c17 then L111() else L14();
  L92():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L93():
    usr5 = force? usr4;
    checkMissing(usr5);
    c12 = `is.object`(usr5);
    if c12 then L94() else L95(dx5, usr5);
  L108():
    dr12 = tryDispatchBuiltin.1("[", upi1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L110() else L109(dr12);
  L109(upi3):
    __7 = ldf `[` in base;
    r26 = dyn __7(upi3, 1);
    goto L13(r26);
  L10(dx10, dx11):
    r20 = `-`(dx10, dx11);
    usr8 = ld usr;
    check L97() else D20();
  L14():
    goto L15();
  L15():
    upi4 = ld upi;
    check L114() else D26();
  L94():
    dr6 = tryDispatchBuiltin.1("[", usr5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L96() else L95(dx5, dr6);
  L95(dx7, usr7):
    __4 = ldf `[` in base;
    r19 = dyn __4(usr7, 1);
    goto L10(dx7, r19);
  L110():
    dx20 = getTryDispatchBuiltinValue(dr12);
    goto L13(dx20);
  L111():
    angle3 = ld angle;
    check L112() else D25();
  D20():
    deopt 71 [usr8];
  D25():
    deopt 94 [180.0, angle3];
  D26():
    deopt 100 [upi4];
  L96():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx5, dx9);
  L97():
    usr9 = force? usr8;
    checkMissing(usr9);
    c13 = `is.object`(usr9);
    if c13 then L98() else L99(usr9);
  L112():
    angle4 = force? angle3;
    checkMissing(angle4);
    r28 = `-`(180.0, angle4);
    st angle = r28;
    goto L15();
  L114():
    upi5 = force? upi4;
    checkMissing(upi5);
    c18 = `is.object`(upi5);
    if c18 then L115() else L116(upi5);
  L11(dx13):
    usr12 = ld usr;
    check L101() else D21();
  L16(dx23):
    r31 = `<`(dx23, 0.0);
    c19 = `as.logical`(r31);
    if c19 then L118() else L17();
  L98():
    dr8 = tryDispatchBuiltin.1("[", usr9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L100() else L99(dr8);
  L99(usr11):
    __5 = ldf `[` in base;
    r21 = dyn __5(usr11, 4);
    goto L11(r21);
  L115():
    dr14 = tryDispatchBuiltin.1("[", upi5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L117() else L116(dr14);
  L116(upi7):
    __8 = ldf `[` in base;
    r30 = dyn __8(upi7, 2);
    goto L16(r30);
  D21():
    deopt 75 [dx13, usr12];
  L17():
    goto L18();
  L18():
    sym3 = ldf abs;
    base3 = ldf abs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L121() else L122();
  L100():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx12);
  L101():
    usr13 = force? usr12;
    checkMissing(usr13);
    c14 = `is.object`(usr13);
    if c14 then L102() else L103(dx13, usr13);
  L117():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L16(dx22);
  L118():
    angle5 = ld angle;
    check L119() else D27();
  D27():
    deopt 108 [180.0, angle5];
  L12(dx18, dx19):
    r23 = `-`(dx18, dx19);
    c15 = ldf c in base;
    r24 = dyn c15(r20, r23);
    check L105() else D22();
  L19(r35):
    st upi = r35;
    sym4 = ldf cos;
    base4 = ldf cos in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L125() else L126();
  L102():
    dr10 = tryDispatchBuiltin.1("[", usr13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L104() else L103(dx13, dr10);
  L103(dx15, usr15):
    __6 = ldf `[` in base;
    r22 = dyn __6(usr15, 3);
    goto L12(dx15, r22);
  L119():
    angle6 = force? angle5;
    checkMissing(angle6);
    r32 = `-`(180.0, angle6);
    st angle = r32;
    goto L18();
  L121():
    upi8 = ld upi;
    check L123() else D28();
  L122():
    r34 = dyn base3(<sym upi>);
    goto L19(r34);
  D22():
    deopt 82 [r24];
  D28():
    deopt 116 [upi8];
  L20(r38):
    upi10 = ld upi;
    check L128() else D31();
  L104():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L12(dx13, dx17);
  L105():
    goto L8(r24);
  L123():
    upi9 = force? upi8;
    checkMissing(upi9);
    abs = ldf abs in base;
    r36 = dyn abs(upi9);
    check L124() else D29();
  L125():
    angle7 = ld angle;
    check L127() else D30();
  L126():
    r37 = dyn base4(<lang `*`(`/`(angle, 180.0), pi)>);
    goto L20(r37);
  D29():
    deopt 119 [r36];
  D30():
    deopt 122 [angle7];
  D31():
    deopt 128 [r38, upi10];
  L124():
    goto L19(r36);
  L127():
    angle8 = force? angle7;
    checkMissing(angle8);
    r39 = `/`(angle8, 180.0);
    r40 = `*`(r39, 3.141592653589793);
    r41 = cos(r40);
    goto L20(r41);
  L128():
    upi11 = force? upi10;
    checkMissing(upi11);
    c20 = `is.object`(upi11);
    if c20 then L129() else L130(r38, upi11);
  L21(r45, dx25):
    r47 = `*`(r45, dx25);
    st xd = r47;
    sym5 = ldf sin;
    base5 = ldf sin in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L132() else L133();
  L129():
    dr16 = tryDispatchBuiltin.1("[", upi11);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L131() else L130(r38, dr16);
  L130(r43, upi13):
    __9 = ldf `[` in base;
    r46 = dyn __9(upi13, 1);
    goto L21(r43, r46);
  L22(r49):
    upi14 = ld upi;
    check L135() else D33();
  L131():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L21(r38, dx24);
  L132():
    angle9 = ld angle;
    check L134() else D32();
  L133():
    r48 = dyn base5(<lang `*`(`/`(angle, 180.0), pi)>);
    goto L22(r48);
  D32():
    deopt 136 [angle9];
  D33():
    deopt 142 [r49, upi14];
  L134():
    angle10 = force? angle9;
    checkMissing(angle10);
    r50 = `/`(angle10, 180.0);
    r51 = `*`(r50, 3.141592653589793);
    r52 = sin(r51);
    goto L22(r52);
  L135():
    upi15 = force? upi14;
    checkMissing(upi15);
    c21 = `is.object`(upi15);
    if c21 then L136() else L137(r49, upi15);
  L23(r56, dx27):
    r58 = `*`(r56, dx27);
    st yd = r58;
    angle11 = ld angle;
    check L139() else D34();
  L136():
    dr18 = tryDispatchBuiltin.1("[", upi15);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L138() else L137(r49, dr18);
  L137(r54, upi17):
    __10 = ldf `[` in base;
    r57 = dyn __10(upi17, 2);
    goto L23(r54, r57);
  D34():
    deopt 149 [angle11];
  L138():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L23(r49, dx26);
  L139():
    angle12 = force? angle11;
    checkMissing(angle12);
    r59 = `<`(angle12, 45.0);
    c22 = `as.logical`(r59);
    if c22 then L24(c22) else L140();
  L24(c23):
    c28 = `as.logical`(c23);
    if c28 then L143() else L25();
  L140():
    angle13 = ld angle;
    check L141() else D35();
  D35():
    deopt 153 [c22, angle13];
  L25():
    angle19 = ld angle;
    check L201() else D67();
  L141():
    angle14 = force? angle13;
    checkMissing(angle14);
    r60 = `>`(angle14, 135.0);
    c25 = `as.logical`(r60);
    c26 = `||`(c22, c25);
    goto L24(c26);
  L143():
    angle15 = ld angle;
    check L144() else D36();
  D36():
    deopt 158 [angle15];
  D67():
    deopt 270 [angle19];
  L144():
    angle16 = force? angle15;
    checkMissing(angle16);
    r61 = `<`(angle16, 45.0);
    c29 = `as.logical`(r61);
    if c29 then L145() else L26();
  L201():
    angle20 = force? angle19;
    checkMissing(angle20);
    r119 = `<`(angle20, 90.0);
    c32 = `as.logical`(r119);
    if c32 then L202() else L40();
  L26():
    sym8 = ldf min;
    base8 = ldf min in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L155() else L156();
  L29():
    upi18 = ld upi;
    check L163() else D45();
  L40():
    sym17 = ldf min;
    base17 = ldf min in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L212() else L213();
  L43():
    upi22 = ld upi;
    check L220() else D76();
  L145():
    sym6 = ldf max;
    base6 = ldf max in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L146() else L147();
  L202():
    sym15 = ldf max;
    base15 = ldf max in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L203() else L204();
  D45():
    deopt 190 [upi18];
  D76():
    deopt 302 [upi22];
  L27(r63):
    st `first.x` = r63;
    sym7 = ldf min;
    base7 = ldf min in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L150() else L151();
  L30(r70):
    st `first.x` = r70;
    sym9 = ldf max;
    base9 = ldf max in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L159() else L160();
  L41(r121):
    st `first.y` = r121;
    sym16 = ldf min;
    base16 = ldf min in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L207() else L208();
  L44(r128):
    st `first.y` = r128;
    sym18 = ldf max;
    base18 = ldf max in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L216() else L217();
  L146():
    x7 = ld x;
    check L148() else D37();
  L147():
    r62 = dyn base6(<sym x>);
    goto L27(r62);
  L155():
    x11 = ld x;
    check L157() else D41();
  L156():
    r69 = dyn base8(<sym x>);
    goto L30(r69);
  L163():
    upi19 = force? upi18;
    checkMissing(upi19);
    c30 = `is.object`(upi19);
    if c30 then L164() else L165(upi19);
  L203():
    y19 = ld y;
    check L205() else D68();
  L204():
    r120 = dyn base15(<sym y>);
    goto L41(r120);
  L212():
    y23 = ld y;
    check L214() else D72();
  L213():
    r127 = dyn base17(<sym y>);
    goto L44(r127);
  L220():
    upi23 = force? upi22;
    checkMissing(upi23);
    c33 = `is.object`(upi23);
    if c33 then L221() else L222(upi23);
  D37():
    deopt 164 [x7];
  D41():
    deopt 178 [x11];
  D68():
    deopt 276 [y19];
  D72():
    deopt 290 [y23];
  L28(r66):
    st `last.x` = r66;
    goto L29();
  L31(r73):
    st `last.x` = r73;
    goto L29();
  L32(dx29):
    density1 = ld density;
    check L167() else D46();
  L42(r124):
    st `last.y` = r124;
    goto L43();
  L45(r131):
    st `last.y` = r131;
    goto L43();
  L46(dx31):
    density3 = ld density;
    check L224() else D77();
  L148():
    x8 = force? x7;
    checkMissing(x8);
    max = ldf max in base;
    r64 = dyn max(x8);
    check L149() else D38();
  L150():
    x9 = ld x;
    check L152() else D39();
  L151():
    r65 = dyn base7(<sym x>);
    goto L28(r65);
  L157():
    x12 = force? x11;
    checkMissing(x12);
    min1 = ldf min in base;
    r71 = dyn min1(x12);
    check L158() else D42();
  L159():
    x13 = ld x;
    check L161() else D43();
  L160():
    r72 = dyn base9(<sym x>);
    goto L31(r72);
  L164():
    dr20 = tryDispatchBuiltin.1("[", upi19);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L166() else L165(dr20);
  L165(upi21):
    __11 = ldf `[` in base;
    r75 = dyn __11(upi21, 2);
    goto L32(r75);
  L205():
    y20 = force? y19;
    checkMissing(y20);
    max3 = ldf max in base;
    r122 = dyn max3(y20);
    check L206() else D69();
  L207():
    y21 = ld y;
    check L209() else D70();
  L208():
    r123 = dyn base16(<sym y>);
    goto L42(r123);
  L214():
    y24 = force? y23;
    checkMissing(y24);
    min4 = ldf min in base;
    r129 = dyn min4(y24);
    check L215() else D73();
  L216():
    y25 = ld y;
    check L218() else D74();
  L217():
    r130 = dyn base18(<sym y>);
    goto L45(r130);
  L221():
    dr22 = tryDispatchBuiltin.1("[", upi23);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L223() else L222(dr22);
  L222(upi25):
    __12 = ldf `[` in base;
    r133 = dyn __12(upi25, 1);
    goto L46(r133);
  D38():
    deopt 167 [r64];
  D39():
    deopt 171 [x9];
  D42():
    deopt 181 [r71];
  D43():
    deopt 185 [x13];
  D46():
    deopt 194 [dx29, density1];
  D69():
    deopt 279 [r122];
  D70():
    deopt 283 [y21];
  D73():
    deopt 293 [r129];
  D74():
    deopt 297 [y25];
  D77():
    deopt 306 [dx31, density3];
  L149():
    goto L27(r64);
  L152():
    x10 = force? x9;
    checkMissing(x10);
    min = ldf min in base;
    r67 = dyn min(x10);
    check L153() else D40();
  L158():
    goto L30(r71);
  L161():
    x14 = force? x13;
    checkMissing(x14);
    max1 = ldf max in base;
    r74 = dyn max1(x14);
    check L162() else D44();
  L166():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L32(dx28);
  L167():
    density2 = force? density1;
    checkMissing(density2);
    r76 = `/`(dx29, density2);
    sym10 = ldf abs;
    base10 = ldf abs in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L168() else L169();
  L206():
    goto L41(r122);
  L209():
    y22 = force? y21;
    checkMissing(y22);
    min3 = ldf min in base;
    r125 = dyn min3(y22);
    check L210() else D71();
  L215():
    goto L44(r129);
  L218():
    y26 = force? y25;
    checkMissing(y26);
    max4 = ldf max in base;
    r132 = dyn max4(y26);
    check L219() else D75();
  L223():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L46(dx30);
  L224():
    density4 = force? density3;
    checkMissing(density4);
    r134 = `/`(dx31, density4);
    sym19 = ldf abs;
    base19 = ldf abs in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L225() else L226();
  D40():
    deopt 174 [r67];
  D44():
    deopt 188 [r74];
  D71():
    deopt 286 [r125];
  D75():
    deopt 300 [r132];
  L33(r80, r81):
    r91 = `/`(r80, r81);
    st `y.shift` = r91;
    st x0 = 0.0;
    sym12 = ldf floor;
    base12 = ldf floor in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L174() else L175();
  L47(r138, r139):
    r149 = `/`(r138, r139);
    st `x.shift` = r149;
    sym21 = ldf floor;
    base21 = ldf floor in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L231() else L232();
  L153():
    goto L28(r67);
  L162():
    goto L31(r74);
  L168():
    sym11 = ldf cos;
    base11 = ldf cos in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L170() else L171();
  L169():
    r79 = dyn base10(<lang cos(`*`(`/`(angle, 180.0), pi))>);
    goto L33(r76, r79);
  L210():
    goto L42(r125);
  L219():
    goto L45(r132);
  L225():
    sym20 = ldf sin;
    base20 = ldf sin in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L227() else L228();
  L226():
    r137 = dyn base19(<lang sin(`*`(`/`(angle, 180.0), pi))>);
    goto L47(r134, r137);
  L34(r85, r86):
    abs1 = ldf abs in base;
    r90 = dyn abs1(r86);
    check L173() else D48();
  L35(r93):
    y_shift2 = ld `y.shift`;
    check L184() else D55();
  L48(r143, r144):
    abs2 = ldf abs in base;
    r148 = dyn abs2(r144);
    check L230() else D79();
  L49(r151):
    x_shift2 = ld `x.shift`;
    check L241() else D86();
  L170():
    angle17 = ld angle;
    check L172() else D47();
  L171():
    r84 = dyn base11(<lang `*`(`/`(angle, 180.0), pi)>);
    goto L34(r76, r84);
  L174():
    sym13 = ldf min;
    base13 = ldf min in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L176() else L177();
  L175():
    r92 = dyn base12(<lang `/`(`(`(`-`(min(y), `/`(`*`(first.x, yd), xd))), y.shift)>);
    goto L35(r92);
  L227():
    angle21 = ld angle;
    check L229() else D78();
  L228():
    r142 = dyn base20(<lang `*`(`/`(angle, 180.0), pi)>);
    goto L48(r134, r142);
  L231():
    sym22 = ldf min;
    base22 = ldf min in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L233() else L234();
  L232():
    r150 = dyn base21(<lang `/`(`(`(`-`(min(x), `/`(`*`(first.y, xd), yd))), x.shift)>);
    goto L49(r150);
  D47():
    deopt 199 [r76, angle17];
  D48():
    deopt 207 [r85, r90];
  D55():
    deopt 228 [r93, y_shift2];
  D78():
    deopt 311 [r134, angle21];
  D79():
    deopt 319 [r143, r148];
  D86():
    deopt 337 [r151, x_shift2];
  L36(r95):
    first_x = ld `first.x`;
    check L180() else D51();
  L50(r153):
    first_y = ld `first.y`;
    check L237() else D82();
  L172():
    angle18 = force? angle17;
    checkMissing(angle18);
    r87 = `/`(angle18, 180.0);
    r88 = `*`(r87, 3.141592653589793);
    r89 = cos(r88);
    goto L34(r76, r89);
  L173():
    goto L33(r85, r90);
  L176():
    y7 = ld y;
    check L178() else D49();
  L177():
    r94 = dyn base13(<sym y>);
    goto L36(r94);
  L184():
    y_shift3 = force? y_shift2;
    checkMissing(y_shift3);
    r102 = `*`(r93, y_shift3);
    st y0 = r102;
    sym14 = ldf max;
    base14 = ldf max in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L185() else L186();
  L229():
    angle22 = force? angle21;
    checkMissing(angle22);
    r145 = `/`(angle22, 180.0);
    r146 = `*`(r145, 3.141592653589793);
    r147 = sin(r146);
    goto L48(r134, r147);
  L230():
    goto L47(r143, r148);
  L233():
    x19 = ld x;
    check L235() else D80();
  L234():
    r152 = dyn base22(<sym x>);
    goto L50(r152);
  L241():
    x_shift3 = force? x_shift2;
    checkMissing(x_shift3);
    r160 = `*`(r151, x_shift3);
    st x0 = r160;
    st y0 = 0.0;
    sym23 = ldf max;
    base23 = ldf max in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L242() else L243();
  D49():
    deopt 216 [y7];
  D51():
    deopt 219 [r95, first_x];
  D80():
    deopt 325 [x19];
  D82():
    deopt 328 [r153, first_y];
  L37(r104):
    last_x = ld `last.x`;
    check L189() else D58();
  L51(r162):
    last_y = ld `last.y`;
    check L246() else D89();
  L178():
    y8 = force? y7;
    checkMissing(y8);
    min2 = ldf min in base;
    r96 = dyn min2(y8);
    check L179() else D50();
  L180():
    first_x1 = force? first_x;
    checkMissing(first_x1);
    yd = ld yd;
    check L181() else D52();
  L185():
    y9 = ld y;
    check L187() else D56();
  L186():
    r103 = dyn base14(<sym y>);
    goto L37(r103);
  L235():
    x20 = force? x19;
    checkMissing(x20);
    min5 = ldf min in base;
    r154 = dyn min5(x20);
    check L236() else D81();
  L237():
    first_y1 = force? first_y;
    checkMissing(first_y1);
    xd6 = ld xd;
    check L238() else D83();
  L242():
    x21 = ld x;
    check L244() else D87();
  L243():
    r161 = dyn base23(<sym x>);
    goto L51(r161);
  D50():
    deopt 219 [r96];
  D52():
    deopt 220 [r95, first_x1, yd];
  D56():
    deopt 234 [y9];
  D58():
    deopt 237 [r104, last_x];
  D81():
    deopt 328 [r154];
  D83():
    deopt 329 [r153, first_y1, xd6];
  D87():
    deopt 346 [x21];
  D89():
    deopt 349 [r162, last_y];
  L179():
    goto L36(r96);
  L181():
    yd1 = force? yd;
    checkMissing(yd1);
    r97 = `*`(first_x1, yd1);
    xd = ld xd;
    check L182() else D53();
  L187():
    y10 = force? y9;
    checkMissing(y10);
    max2 = ldf max in base;
    r105 = dyn max2(y10);
    check L188() else D57();
  L189():
    last_x1 = force? last_x;
    checkMissing(last_x1);
    yd2 = ld yd;
    check L190() else D59();
  L236():
    goto L50(r154);
  L238():
    xd7 = force? xd6;
    checkMissing(xd7);
    r155 = `*`(first_y1, xd7);
    yd6 = ld yd;
    check L239() else D84();
  L244():
    x22 = force? x21;
    checkMissing(x22);
    max5 = ldf max in base;
    r163 = dyn max5(x22);
    check L245() else D88();
  L246():
    last_y1 = force? last_y;
    checkMissing(last_y1);
    xd8 = ld xd;
    check L247() else D90();
  D53():
    deopt 222 [r95, r97, xd];
  D57():
    deopt 237 [r105];
  D59():
    deopt 238 [r104, last_x1, yd2];
  D84():
    deopt 331 [r153, r155, yd6];
  D88():
    deopt 349 [r163];
  D90():
    deopt 350 [r162, last_y1, xd8];
  L182():
    xd1 = force? xd;
    checkMissing(xd1);
    r98 = `/`(r97, xd1);
    r99 = `-`(r95, r98);
    y_shift = ld `y.shift`;
    check L183() else D54();
  L188():
    goto L37(r105);
  L190():
    yd3 = force? yd2;
    checkMissing(yd3);
    r106 = `*`(last_x1, yd3);
    xd2 = ld xd;
    check L191() else D60();
  L239():
    yd7 = force? yd6;
    checkMissing(yd7);
    r156 = `/`(r155, yd7);
    r157 = `-`(r153, r156);
    x_shift = ld `x.shift`;
    check L240() else D85();
  L245():
    goto L51(r163);
  L247():
    xd9 = force? xd8;
    checkMissing(xd9);
    r164 = `*`(last_y1, xd9);
    yd8 = ld yd;
    check L248() else D91();
  D54():
    deopt 225 [r99, y_shift];
  D60():
    deopt 240 [r104, r106, xd2];
  D85():
    deopt 334 [r157, x_shift];
  D91():
    deopt 352 [r162, r164, yd8];
  L183():
    y_shift1 = force? y_shift;
    checkMissing(y_shift1);
    r100 = `/`(r99, y_shift1);
    r101 = floor(r100);
    goto L35(r101);
  L191():
    xd3 = force? xd2;
    checkMissing(xd3);
    r107 = `/`(r106, xd3);
    r108 = `-`(r104, r107);
    st `y.end` = r108;
    goto L39();
  L240():
    x_shift1 = force? x_shift;
    checkMissing(x_shift1);
    r158 = `/`(r157, x_shift1);
    r159 = floor(r158);
    goto L49(r159);
  L248():
    yd9 = force? yd8;
    checkMissing(yd9);
    r165 = `/`(r164, yd9);
    r166 = `-`(r162, r165);
    st `x.end` = r166;
    goto L53();
  L39():
    y11 = ld y0;
    check L192() else D61();
  L53():
    x23 = ld x0;
    check L249() else D92();
  D61():
    deopt 245 [y11];
  D92():
    deopt 357 [x23];
  L192():
    y12 = force? y11;
    checkMissing(y12);
    y_end = ld `y.end`;
    check L193() else D62();
  L249():
    x24 = force? x23;
    checkMissing(x24);
    x_end = ld `x.end`;
    check L250() else D93();
  D62():
    deopt 246 [y12, y_end];
  D93():
    deopt 358 [x24, x_end];
  L193():
    y_end1 = force? y_end;
    checkMissing(y_end1);
    r109 = `<`(y12, y_end1);
    c31 = `as.logical`(r109);
    if c31 then L194() else L38();
  L250():
    x_end1 = force? x_end;
    checkMissing(x_end1);
    r167 = `<`(x24, x_end1);
    c34 = `as.logical`(r167);
    if c34 then L251() else L52();
  L38():
    invisible.0();
    popenv;
    return NULL;
  L52():
    invisible.0();
    popenv;
    return NULL;
  L194():
    polygon_onehatch = ldf `polygon.onehatch`;
    check L195() else D63();
  L251():
    polygon_onehatch1 = ldf `polygon.onehatch`;
    check L252() else D94();
  D63():
    deopt 250 [];
  D94():
    deopt 362 [];
  L195():
    p = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p1 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      return y14;
    };
    p2 = prom<V +>{
      x17 = ld x0;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p3 = prom<V +>{
      y15 = ld y0;
      y16 = force? y15;
      checkMissing(y16);
      return y16;
    };
    p4 = prom<V +>{
      xd4 = ld xd;
      xd5 = force? xd4;
      checkMissing(xd5);
      return xd5;
    };
    p5 = prom<V +>{
      yd4 = ld yd;
      yd5 = force? yd4;
      checkMissing(yd5);
      return yd5;
    };
    p6 = prom<V +>{
      __debug_hatch1 = ld `..debug.hatch`;
      __debug_hatch2 = force? __debug_hatch1;
      checkMissing(__debug_hatch2);
      return __debug_hatch2;
    };
    ddd1 = ld `...`;
    r117 = dyn polygon_onehatch[, , , , , , `..debug.hatch`, `...`](p, p1, p2, p3, p4, p5, p6, ddd1);
    check L196() else D64();
  L252():
    p7 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    p8 = prom<V +>{
      y27 = ld y;
      y28 = force? y27;
      checkMissing(y28);
      return y28;
    };
    p9 = prom<V +>{
      x27 = ld x0;
      x28 = force? x27;
      checkMissing(x28);
      return x28;
    };
    p10 = prom<V +>{
      y29 = ld y0;
      y30 = force? y29;
      checkMissing(y30);
      return y30;
    };
    p11 = prom<V +>{
      xd10 = ld xd;
      xd11 = force? xd10;
      checkMissing(xd11);
      return xd11;
    };
    p12 = prom<V +>{
      yd10 = ld yd;
      yd11 = force? yd10;
      checkMissing(yd11);
      return yd11;
    };
    p13 = prom<V +>{
      __debug_hatch3 = ld `..debug.hatch`;
      __debug_hatch4 = force? __debug_hatch3;
      checkMissing(__debug_hatch4);
      return __debug_hatch4;
    };
    ddd2 = ld `...`;
    r175 = dyn polygon_onehatch1[, , , , , , `..debug.hatch`, `...`](p7, p8, p9, p10, p11, p12, p13, ddd2);
    check L253() else D95();
  D64():
    deopt 260 [r117];
  D95():
    deopt 372 [r175];
  L196():
    y17 = ld y0;
    check L197() else D65();
  L253():
    x29 = ld x0;
    check L254() else D96();
  D65():
    deopt 261 [y17];
  D96():
    deopt 373 [x29];
  L197():
    y18 = force? y17;
    checkMissing(y18);
    y_shift4 = ld `y.shift`;
    check L198() else D66();
  L254():
    x30 = force? x29;
    checkMissing(x30);
    x_shift4 = ld `x.shift`;
    check L255() else D97();
  D66():
    deopt 262 [y18, y_shift4];
  D97():
    deopt 374 [x30, x_shift4];
  L198():
    y_shift5 = force? y_shift4;
    checkMissing(y_shift5);
    r118 = `+`(y18, y_shift5);
    st y0 = r118;
    goto L39();
  L255():
    x_shift5 = force? x_shift4;
    checkMissing(x_shift5);
    r176 = `+`(x30, x_shift5);
    st x0 = r176;
    goto L53();
  }
}