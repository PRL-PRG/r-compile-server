fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg l:*, reg c1:L, reg r11:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg l5:*, reg r20:V, reg r21:V, reg c2:cls, reg r22:V, reg ___:cls, reg r23:V, reg runmed:cls, reg y:*, reg y1:V, reg p1:p(V +), reg r25:V, reg runmed1:cls, reg y2:*, reg y3:V, reg p2:p(V +), reg r27:V, reg runmed2:cls, reg y4:*, reg y5:V, reg p3:p(V +), reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg c3:cls, reg r32:V, reg plot:cls, reg y6:*, reg y7:V, reg p4:p(V +), reg r34:V, reg lines:cls, reg ys:*, reg ys1:V, reg p5:p(V +), reg r36:V, reg matlines:cls, reg cbind:cls, reg s7k:*, reg s7k1:V, reg p6:p(V +), reg s7_:*, reg s7_1:V, reg p7:p(V +), reg s7m:*, reg s7m1:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg col3:*, reg col4:V, reg p10:p(V +), reg r43:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg c4:cls, reg r46:V, reg legend:cls, reg paste:cls, reg eRules:*, reg eRules1:V, reg p11:p(V +), reg r48:V, reg p12:p(V +), reg col5:*, reg col6:V, reg p13:p(V +), reg r51:V, reg stopifnot:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r52:V, reg r53:V, reg s7m2:*, reg s7m3:V, reg smoothEnds:cls, reg s7k2:*, reg s7k3:V, reg p14:p(V +), reg r55:V, reg identical:cls, reg r56:V, reg p15:p(V +), reg r58:V, reg y8:*, reg y9:V, reg l6:*, reg c5:L, reg r60:L, reg l8:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r67:V, reg r68:L, reg l11:*, reg r69:L, reg r70:V, reg c6:cls, reg r71:V, reg ___1:cls, reg r72:V, reg sapply:cls, reg eRules2:*, reg eRules3:V, reg p16:p(V +), reg r74:cls, reg p17:p(V +), reg r76:V, reg matlines1:cls, reg rN:*, reg rN1:V, reg p18:p(V +), reg adjustcolor:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r78:V, reg r79:V, reg c7:cls, reg r80:V, reg p19:p(V +), reg r82:V, reg p20:p(V +), reg r84:V, reg l12:*, reg c8:L, reg r86:L, reg l14:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r93:V, reg r94:L, reg l17:*, reg r95:L, reg r96:V, reg c9:cls, reg r97:V, reg ___2:cls, reg r98:V, reg sapply1:cls, reg eRules4:*, reg eRules5:V, reg p21:p(V +), reg r100:cls, reg p22:p(V +), reg r102:V, reg head:cls, reg rN_:*, reg rN_1:V, reg p23:p(V +), reg r104:V, reg tail:cls, reg rN_2:*, reg rN_3:V, reg p24:p(V +), reg r106:V, reg stopifnot1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r107:V, reg r108:V, reg rN2:*, reg rN3:V, reg c10:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r109:V, reg anyNA:cls, reg r110:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r112:V, reg which:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r114:V, reg r115:V, reg rN6:*, reg rN7:V, reg c11:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __1:cls, reg r116:V, reg is_na:cls, reg r117:V, reg p25:p(V +), reg r119:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r120:V, reg r121:V, reg c12:cls, reg r122:V, reg identical1:cls, reg r123:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r124:V, reg which1:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r126:V, reg r127:V, reg rN_4:*, reg rN_5:V, reg is_na1:cls, reg r128:V, reg p26:p(V +), reg r130:V, reg cbind1:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r131:V, reg r132:V, reg c13:cls, reg r133:V, reg p27:p(V +), reg r135:V, reg identical2:cls, reg r136:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r137:V, reg r138:V, reg rN_6:*, reg rN_7:V, reg c14:L, reg rN_9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r139:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r140:V, reg r141:V, reg c15:cls, reg r142:V, reg identical3:cls, reg r143:V, reg p28:p(V +), reg r145:V |
    mkenv;
    r = clos inner604700630;
    st smoothEnds = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0():
    r5 = `:`(-20.0, 20.0);
    r6 = `^`(r5, 2.0);
    st ys = r6;
    st y = r6;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L10():
    require = ldf require;
    check L12() else D0();
  L11():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1(r8):
    l = ld y;
    c1 = `is.object`(l);
    if c1 then L17() else L18(r8, l);
  L12():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L13() else D1();
  L14():
    c = ldf c in base;
    r9 = dyn c(100.0, 30.0, 400.0, 470.0);
    check L16() else D2();
  L15():
    r7 = dyn base1(100.0, 30.0, 400.0, 470.0);
    goto L1(r7);
  D1():
    deopt 7 [r4];
  D2():
    deopt 23 [r9];
  L2(dx1):
    st y = dx1;
    runmed = ldf runmed;
    check L23() else D4();
  L13():
    goto L0();
  L16():
    goto L1(r9);
  L17():
    dr = tryDispatchBuiltin.0("[<-", l, r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(r8, dr);
  L18(r11, l2):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  D4():
    deopt 36 [];
  L3(r19, l5, r20, r21):
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l5, r20, r21);
    goto L2(r23);
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L20():
    c2 = ldf c in base;
    r22 = dyn c2(1.0, 10.0, 21.0, 41.0);
    check L22() else D3();
  L21():
    r18 = dyn base2(1.0, 10.0, 21.0, 41.0);
    goto L3(r11, l2, r8, r18);
  L23():
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r25 = dyn runmed[, , endrule](p1, 7.0, "keep");
    check L24() else D5();
  D3():
    deopt 32 [r11, l2, r8, r22];
  D5():
    deopt 41 [r25];
  L22():
    goto L3(r11, l2, r8, r22);
  L24():
    st s7k = r25;
    runmed1 = ldf runmed;
    check L25() else D6();
  D6():
    deopt 44 [];
  L25():
    p2 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r27 = dyn runmed1[, , endrule](p2, 7.0, "const");
    check L26() else D7();
  D7():
    deopt 49 [r27];
  L26():
    st `s7.` = r27;
    runmed2 = ldf runmed;
    check L27() else D8();
  D8():
    deopt 52 [];
  L27():
    p3 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r29 = dyn runmed2(p3, 7.0);
    check L28() else D9();
  D9():
    deopt 55 [r29];
  L28():
    st s7m = r29;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L4(r31):
    st col3 = r31;
    plot = ldf plot;
    check L32() else D11();
  L29():
    c3 = ldf c in base;
    r32 = dyn c3("midnightblue", "blue", "steelblue");
    check L31() else D10();
  L30():
    r30 = dyn base3("midnightblue", "blue", "steelblue");
    goto L4(r30);
  D10():
    deopt 63 [r32];
  D11():
    deopt 66 [];
  L31():
    goto L4(r32);
  L32():
    p4 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r34 = dyn plot[, main](p4, "Running Medians -- runmed(*, k=7, endrule = X)");
    check L33() else D12();
  D12():
    deopt 70 [r34];
  L33():
    lines = ldf lines;
    check L34() else D13();
  D13():
    deopt 72 [];
  L34():
    p5 = prom<V +>{
      ys = ld ys;
      ys1 = force? ys;
      checkMissing(ys1);
      return ys1;
    };
    r36 = dyn lines[, col](p5, "light gray");
    check L35() else D14();
  D14():
    deopt 76 [r36];
  L35():
    matlines = ldf matlines;
    check L36() else D15();
  D15():
    deopt 78 [];
  L36():
    p9 = prom<V +>{
      cbind = ldf cbind;
      p6 = prom<V +>{
        s7k = ld s7k;
        s7k1 = force? s7k;
        checkMissing(s7k1);
        return s7k1;
      };
      p7 = prom<V +>{
        s7_ = ld `s7.`;
        s7_1 = force? s7_;
        checkMissing(s7_1);
        return s7_1;
      };
      p8 = prom<V +>{
        s7m = ld s7m;
        s7m1 = force? s7m;
        checkMissing(s7m1);
        return s7m1;
      };
      r40 = dyn cbind(p6, p7, p8);
      return r40;
    };
    p10 = prom<V +>{
      col3 = ld col3;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    r43 = dyn matlines[, lwd, lty, col](p9, 1.5, 1.0, p10);
    check L37() else D16();
  D16():
    deopt 86 [r43];
  L37():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L5(r45):
    st eRules = r45;
    legend = ldf legend;
    check L41() else D18();
  L38():
    c4 = ldf c in base;
    r46 = dyn c4("keep", "constant", "median");
    check L40() else D17();
  L39():
    r44 = dyn base4("keep", "constant", "median");
    goto L5(r44);
  D17():
    deopt 93 [r46];
  D18():
    deopt 96 [];
  L40():
    goto L5(r46);
  L41():
    p12 = prom<V +>{
      paste = ldf paste;
      p11 = prom<V +>{
        eRules = ld eRules;
        eRules1 = force? eRules;
        checkMissing(eRules1);
        return eRules1;
      };
      r48 = dyn paste[, , sep]("endrule", p11, " = ");
      return r48;
    };
    p13 = prom<V +>{
      col5 = ld col3;
      col6 = force? col5;
      checkMissing(col6);
      return col6;
    };
    r51 = dyn legend[, , col, lwd, lty, bty]("topleft", p12, p13, 1.5, 1.0, "n");
    check L42() else D19();
  D19():
    deopt 107 [r51];
  L42():
    stopifnot = ldf stopifnot;
    check L43() else D20();
  D20():
    deopt 109 [];
  L43():
    p15 = prom<V +>{
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      s7m2 = ld s7m;
      s7m3 = force? s7m2;
      checkMissing(s7m3);
      smoothEnds = ldf smoothEnds;
      p14 = prom<V +>{
        s7k2 = ld s7k;
        s7k3 = force? s7k2;
        checkMissing(s7k3);
        return s7k3;
      };
      r55 = dyn smoothEnds(p14, 7.0);
      identical = ldf identical in base;
      r56 = dyn identical(s7m3, r55, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r56);
    L2():
      r52 = dyn base5(<sym s7m>, <lang smoothEnds(s7k, 7.0)>);
      goto L0(r52);
    };
    r58 = dyn stopifnot(p15);
    check L44() else D21();
  D21():
    deopt 111 [r58];
  L44():
    y8 = ld y;
    check L45() else D22();
  D22():
    deopt 112 [y8];
  L45():
    y9 = force? y8;
    checkMissing(y9);
    st yN = y9;
    l6 = ld yN;
    c5 = `is.object`(l6);
    if c5 then L46() else L47(NA_LGL, l6);
  L6(dx3):
    st yN = dx3;
    sapply = ldf sapply;
    check L52() else D24();
  L46():
    dr2 = tryDispatchBuiltin.0("[<-", l6, NA_LGL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(NA_LGL, dr2);
  L47(r60, l8):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  D24():
    deopt 127 [];
  L7(r68, l11, r69, r70):
    ___1 = ldf `[<-` in base;
    r72 = dyn ___1(l11, r69, r70);
    goto L6(r72);
  L48():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L49():
    c6 = ldf c in base;
    r71 = dyn c6(2.0, 40.0);
    check L51() else D23();
  L50():
    r67 = dyn base6(2.0, 40.0);
    goto L7(r60, l8, NA_LGL, r67);
  L52():
    p16 = prom<V +>{
      eRules2 = ld eRules;
      eRules3 = force? eRules2;
      checkMissing(eRules3);
      return eRules3;
    };
    p17 = prom<V +>{
      r74 = clos inner620290382;
      return r74;
    };
    r76 = dyn sapply(p16, p17);
    check L53() else D25();
  D23():
    deopt 123 [r60, l8, NA_LGL, r71];
  D25():
    deopt 130 [r76];
  L51():
    goto L7(r60, l8, NA_LGL, r71);
  L53():
    st rN = r76;
    matlines1 = ldf matlines;
    check L54() else D26();
  D26():
    deopt 133 [];
  L54():
    p18 = prom<V +>{
      rN = ld rN;
      rN1 = force? rN;
      checkMissing(rN1);
      return rN1;
    };
    p20 = prom<V +>{
      adjustcolor = ldf adjustcolor;
      p19 = prom<V +>{
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r79):
        return r79;
      L1():
        c7 = ldf c in base;
        r80 = dyn c7("red", "orange4", "orange1");
        goto L0(r80);
      L2():
        r78 = dyn base7("red", "orange4", "orange1");
        goto L0(r78);
      };
      r82 = dyn adjustcolor(p19, 0.5);
      return r82;
    };
    r84 = dyn matlines1[, type, pch, lwd, lty, col](p18, "b", 4.0, 3.0, 2.0, p20);
    check L55() else D27();
  D27():
    deopt 145 [r84];
  L55():
    l12 = ld yN;
    c8 = `is.object`(l12);
    if c8 then L56() else L57(NA_LGL, l12);
  L8(dx5):
    st yN = dx5;
    sapply1 = ldf sapply;
    check L62() else D29();
  L56():
    dr4 = tryDispatchBuiltin.0("[<-", l12, NA_LGL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L58() else L57(NA_LGL, dr4);
  L57(r86, l14):
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L59() else L60();
  D29():
    deopt 159 [];
  L9(r94, l17, r95, r96):
    ___2 = ldf `[<-` in base;
    r98 = dyn ___2(l17, r95, r96);
    goto L8(r98);
  L58():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx4);
  L59():
    c9 = ldf c in base;
    r97 = dyn c9(1.0, <int 20, 21>);
    check L61() else D28();
  L60():
    r93 = dyn base8(1.0, <lang `:`(20.0, 21.0)>);
    goto L9(r86, l14, NA_LGL, r93);
  L62():
    p21 = prom<V +>{
      eRules4 = ld eRules;
      eRules5 = force? eRules4;
      checkMissing(eRules5);
      return eRules5;
    };
    p22 = prom<V +>{
      r100 = clos inner620290382;
      return r100;
    };
    r102 = dyn sapply1(p21, p22);
    check L63() else D30();
  D28():
    deopt 155 [r86, l14, NA_LGL, r97];
  D30():
    deopt 162 [r102];
  L61():
    goto L9(r86, l14, NA_LGL, r97);
  L63():
    st `rN.` = r102;
    head = ldf head;
    check L64() else D31();
  D31():
    deopt 165 [];
  L64():
    p23 = prom<V +>{
      rN_ = ld `rN.`;
      rN_1 = force? rN_;
      checkMissing(rN_1);
      return rN_1;
    };
    r104 = dyn head(p23, 4.0);
    check L65() else D32();
  D32():
    deopt 168 [r104];
  L65():
    tail = ldf tail;
    check L66() else D33();
  D33():
    deopt 170 [];
  L66():
    p24 = prom<V +>{
      rN_2 = ld `rN.`;
      rN_3 = force? rN_2;
      checkMissing(rN_3);
      return rN_3;
    };
    r106 = dyn tail(p24);
    check L67() else D34();
  D34():
    deopt 172 [r106];
  L67():
    stopifnot1 = ldf stopifnot;
    check L68() else D35();
  D35():
    deopt 174 [];
  L68():
    p28 = prom<V +>{
      sym9 = ldf anyNA;
      base9 = ldf anyNA in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L8() else L9();
    L0(r108):
      `!`(r108);
      sym10 = ldf identical;
      base10 = ldf identical in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L13() else L14();
    L8():
      rN2 = ld rN;
      rN3 = force? rN2;
      checkMissing(rN3);
      c10 = `is.object`(rN3);
      if c10 then L10() else L11();
    L9():
      r107 = dyn base9(<lang `[`(rN, , `:`(2.0, 3.0))>);
      goto L0(r107);
    L1(dx7):
      anyNA = ldf anyNA in base;
      r110 = dyn anyNA(dx7);
      goto L0(r110);
    L2():
      sym13 = ldf identical;
      base13 = ldf identical in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L17() else L18();
    L10():
      dr6 = tryDispatchBuiltin.1("[", rN3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L12() else L11();
    L11():
      __ = ldf `[` in base;
      r109 = dyn __(rN3, <missing>, <int 2, 3>);
      goto L1(r109);
    L13():
      which = ldf which;
      p25 = prom<V +>{
        sym11 = ldf `is.na`;
        base11 = ldf `is.na` in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L2() else L3();
      L0(r115):
        return r115;
      L2():
        rN6 = ld rN;
        rN7 = force? rN6;
        checkMissing(rN7);
        c11 = `is.object`(rN7);
        if c11 then L4() else L5();
      L3():
        r114 = dyn base11(<lang `[`(rN, , "keep")>);
        goto L0(r114);
      L1(dx9):
        is_na = ldf `is.na` in base;
        r117 = dyn is_na(dx9);
        goto L0(r117);
      L4():
        dr8 = tryDispatchBuiltin.1("[", rN7);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L6() else L5();
      L5():
        __1 = ldf `[` in base;
        r116 = dyn __1(rN7, <missing>, "keep");
        goto L1(r116);
      L6():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L1(dx8);
      };
      r119 = dyn which(p25);
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L15() else L16();
    L14():
      r112 = dyn base10(<lang which(is.na(`[`(rN, , "keep")))>, <lang c(2, 40)>);
      goto L2();
    L3(r121):
      identical1 = ldf identical in base;
      r123 = dyn identical1(r119, r121, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L2();
    L4():
      sym16 = ldf identical;
      base16 = ldf identical in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L19() else L20();
    L12():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    L15():
      c12 = ldf c in base;
      r122 = dyn c12(2, 40);
      goto L3(r122);
    L16():
      r120 = dyn base12(2, 40);
      goto L3(r120);
    L17():
      which1 = ldf which;
      p26 = prom<V +>{
        sym14 = ldf `is.na`;
        base14 = ldf `is.na` in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L1() else L2();
      L0(r127):
        return r127;
      L1():
        rN_4 = ld `rN.`;
        rN_5 = force? rN_4;
        checkMissing(rN_5);
        is_na1 = ldf `is.na` in base;
        r128 = dyn is_na1(rN_5);
        goto L0(r128);
      L2():
        r126 = dyn base14(<sym rN.>);
        goto L0(r126);
      };
      r130 = dyn which1[, `arr.ind`, useNames](p26, TRUE, FALSE);
      cbind1 = ldf cbind;
      p27 = prom<V +>{
        sym15 = ldf c;
        base15 = ldf c in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L1() else L2();
      L0(r132):
        return r132;
      L1():
        c13 = ldf c in base;
        r133 = dyn c13(<int 1, 2>, 40);
        goto L0(r133);
      L2():
        r131 = dyn base15(<lang `:`(1.0, 2.0)>, 40);
        goto L0(r131);
      };
      r135 = dyn cbind1(p27, 1);
      identical2 = ldf identical in base;
      r136 = dyn identical2(r130, r135, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L4();
    L18():
      r124 = dyn base13(<lang which(is.na(rN.), arr.ind=TRUE, useNames=FALSE)>, <lang cbind(c(`:`(1.0, 2.0), 40), 1)>);
      goto L4();
    L5(r138):
      return r138;
    L19():
      rN_6 = ld `rN.`;
      rN_7 = force? rN_6;
      checkMissing(rN_7);
      c14 = `is.object`(rN_7);
      if c14 then L21() else L22(rN_7);
    L20():
      r137 = dyn base16(<lang `[`(rN., `:`(38.0, 41.0), "median")>, <lang c(289.0, 289.0, 397.0, 470.0)>);
      goto L5(r137);
    L6(dx11):
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L24() else L25();
    L21():
      dr10 = tryDispatchBuiltin.1("[", rN_7);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L23() else L22(dr10);
    L22(rN_9):
      __2 = ldf `[` in base;
      r139 = dyn __2(rN_9, <int 38, 39, 40, 41>, "median");
      goto L6(r139);
    L7(r141):
      identical3 = ldf identical in base;
      r143 = dyn identical3(dx11, r141, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L5(r143);
    L23():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L6(dx10);
    L24():
      c15 = ldf c in base;
      r142 = dyn c15(289.0, 289.0, 397.0, 470.0);
      goto L7(r142);
    L25():
      r140 = dyn base17(289.0, 289.0, 397.0, 470.0);
      goto L7(r140);
    };
    r145 = dyn stopifnot1[exprs](p28);
    check L69() else D36();
  D36():
    deopt 177 [r145];
  L69():
    popenv;
    return r145;
  }
}
fun inner604700630(y, k) {
  (reg y:*, reg k:*) -+> V { var y:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, reg r:cls, reg r1:cls, reg r2:cls, reg r3:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg k1:*, reg k2:V, reg as_integer:cls, reg r6:V, reg k3:*, reg k4:V, reg r7:V, reg c:L, reg c1:V, reg k5:*, reg k6:V, reg __:cls, reg r8:V, reg r9:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r10:V, reg k7:*, reg k8:V, reg ___:cls, reg r12:V, reg k9:*, reg k10:V, reg r13:V, reg c7:L, reg y1:*, reg y2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg y3:*, reg y4:V, reg length:cls, reg r18:V, reg n:*, reg n1:V, reg r19:V, reg n2:*, reg n3:V, reg r20:V, reg y5:*, reg y6:V, reg k11:*, reg k12:V, reg r21:V, reg c8:L, reg med_3:cls, reg y7:*, reg y8:V, reg c9:L, reg y10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r22:V, reg p:p(V +), reg r24:V, reg l:*, reg c10:L, reg r26:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___1:cls, reg r29:V, reg med_4:cls, reg y11:*, reg y12:V, reg c11:L, reg y14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg y17:V, reg r31:V, reg n4:*, reg n5:V, reg n_1:*, reg n_2:V, reg n_3:*, reg n_4:V, reg c12:cls, reg r32:V, reg __2:cls, reg r33:V, reg p1:p(V +), reg r35:V, reg l3:*, reg c13:L, reg r37:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg n_5:*, reg n_6:V, reg ___2:cls, reg r40:V, reg k13:*, reg k14:V, reg r41:V, reg c14:L, reg k15:*, reg k16:V, reg r42:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x:V, reg i5:*, reg i6:V, reg r43:V, reg r44:V, reg med_odd:cls, reg y18:*, reg y19:V, reg c16:L, reg y21:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg j:*, reg j1:V, reg r45:V, reg __3:cls, reg r46:V, reg p2:p(V +), reg j2:*, reg j3:V, reg p3:p(V +), reg r49:V, reg l7:*, reg c17:L, reg i8:I, reg r51:V, reg l9:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i10:I, reg dx11:V, reg i11:*, reg i12:V, reg ___3:cls, reg r54:V, reg med_odd1:cls, reg y22:*, reg y23:V, reg c18:L, reg y25:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg n6:*, reg n7:V, reg r55:V, reg j4:*, reg j5:V, reg r56:V, reg n8:*, reg n9:V, reg r57:V, reg __4:cls, reg r58:V, reg p4:p(V +), reg j6:*, reg j7:V, reg p5:p(V +), reg r61:V, reg l10:*, reg c19:L, reg i14:I, reg r63:V, reg l12:*, reg dr14:V, reg dc7:L, reg dx14:V, reg i16:I, reg dx15:V, reg n10:*, reg n11:V, reg i17:*, reg i18:V, reg r66:V, reg r67:V, reg ___4:cls, reg r68:V, reg i19:V, reg med3i:cls, reg y26:*, reg y27:V, reg c20:L, reg y29:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r69:V, reg p6:p(V +), reg sm:*, reg sm1:V, reg c21:L, reg sm3:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __6:cls, reg r71:V, reg p7:p(V +), reg sm4:*, reg sm5:V, reg c22:L, reg sm7:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __7:cls, reg r73:V, reg sm8:*, reg sm9:V, reg c23:L, reg dx23:V, reg r75:I, reg sm11:V, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg r77:I, reg dx27:V, reg __8:cls, reg r78:V, reg sm12:*, reg sm13:V, reg c24:L, reg dx30:V, reg r80:I, reg dx31:V, reg sm15:V, reg dr24:V, reg dc12:L, reg dx34:V, reg dx35:V, reg r82:I, reg dx36:V, reg dx37:V, reg __9:cls, reg r83:V, reg r84:V, reg r85:V, reg r86:V, reg p8:p(V +), reg r88:V, reg l13:*, reg c25:L, reg r90:V, reg l15:*, reg dr26:V, reg dc13:L, reg dx38:V, reg dx39:V, reg ___5:cls, reg r93:V, reg med3i1:cls, reg y30:*, reg y31:V, reg c26:L, reg y33:V, reg dr28:V, reg dc14:L, reg dx40:V, reg dx41:V, reg n12:*, reg n13:V, reg __10:cls, reg r94:V, reg p9:p(V +), reg sm16:*, reg sm17:V, reg c27:L, reg sm19:V, reg dr30:V, reg dc15:L, reg dx42:V, reg dx43:V, reg n_7:*, reg n_8:V, reg __11:cls, reg r96:V, reg p10:p(V +), reg sm20:*, reg sm21:V, reg c28:L, reg sm23:V, reg dr32:V, reg dc16:L, reg dx44:V, reg dx45:V, reg n_9:*, reg n_10:V, reg __12:cls, reg r98:V, reg sm24:*, reg sm25:V, reg c29:L, reg dx47:V, reg r100:I, reg sm27:V, reg dr34:V, reg dc17:L, reg dx49:V, reg dx50:V, reg r102:I, reg dx51:V, reg n_11:*, reg n_12:V, reg __13:cls, reg r103:V, reg sm28:*, reg sm29:V, reg c30:L, reg dx54:V, reg r105:I, reg dx55:V, reg sm31:V, reg dr36:V, reg dc18:L, reg dx58:V, reg dx59:V, reg r107:I, reg dx60:V, reg dx61:V, reg n_13:*, reg n_14:V, reg __14:cls, reg r108:V, reg r109:V, reg r110:V, reg r111:V, reg p11:p(V +), reg r113:V, reg l16:*, reg c31:L, reg r115:V, reg l18:*, reg dr38:V, reg dc19:L, reg dx62:V, reg dx63:V, reg n14:*, reg n15:V, reg ___6:cls, reg r118:V, reg sm32:*, reg sm33:V |
    mkenv;
    st y = y;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(3.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    r = clos inner1700783966;
    st med3 = r;
    r1 = clos inner2501545716;
    st `med.3` = r1;
    r2 = clos inner1700783966;
    st med3i = r2;
    r3 = clos inner851502008;
    st `med.odd` = r3;
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L1(r5):
    st k = r5;
    k3 = ld k;
    check L24() else D2();
  L20():
    k1 = ld k;
    check L22() else D0();
  L21():
    r4 = dyn base(<sym k>);
    goto L1(r4);
  D0():
    deopt 14 [k1];
  D2():
    deopt 19 [k3];
  L22():
    k2 = force? k1;
    checkMissing(k2);
    as_integer = ldf `as.integer` in base;
    r6 = dyn as_integer(k2);
    check L23() else D1();
  L24():
    k4 = force? k3;
    checkMissing(k4);
    r7 = `<`(k4, 0);
    c = `as.logical`(r7);
    if c then L2(c) else L25();
  D1():
    deopt 17 [r6];
  L2(c1):
    c6 = `as.logical`(c1);
    if c6 then L29() else L3();
  L23():
    goto L1(r6);
  L25():
    k5 = ld k;
    check L26() else D3();
  D3():
    deopt 24 [c, k5];
  L3():
    goto L4();
  L4():
    k7 = ld k;
    check L33() else D7();
  L26():
    k6 = force? k5;
    checkMissing(k6);
    __ = ldf `%%` in base;
    r8 = dyn __(k6, 2);
    check L27() else D4();
  L29():
    stop = ldf stop;
    check L30() else D5();
  D4():
    deopt 28 [c, r8];
  D5():
    deopt 33 [];
  D7():
    deopt 39 [k7];
  L27():
    r9 = `==`(r8, 0);
    c3 = `as.logical`(r9);
    c4 = `||`(c, c3);
    goto L2(c4);
  L30():
    r10 = dyn stop("bandwidth 'k' must be >= 1 and odd!");
    check L31() else D6();
  L33():
    k8 = force? k7;
    checkMissing(k8);
    ___ = ldf `%/%` in base;
    r12 = dyn ___(k8, 2);
    check L34() else D8();
  D6():
    deopt 35 [r10];
  D8():
    deopt 43 [r12];
  L31():
    goto L4();
  L34():
    st k = r12;
    k9 = ld k;
    check L35() else D9();
  D9():
    deopt 45 [k9];
  L35():
    k10 = force? k9;
    checkMissing(k10);
    r13 = `<`(k10, 1);
    c7 = `as.logical`(r13);
    if c7 then L36() else L5();
  L5():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L36():
    y1 = ld y;
    check L37() else D10();
  D10():
    deopt 49 [y1];
  L7(r17):
    st n = r17;
    n = ld n;
    check L44() else D13();
  L37():
    y2 = force? y1;
    checkMissing(y2);
    popenv;
    return y2;
  L40():
    y3 = ld y;
    check L42() else D11();
  L41():
    r16 = dyn base1(<sym y>);
    goto L7(r16);
  D11():
    deopt 56 [y3];
  D13():
    deopt 61 [n];
  L42():
    y4 = force? y3;
    checkMissing(y4);
    length = ldf length in base;
    r18 = dyn length(y4);
    check L43() else D12();
  L44():
    n1 = force? n;
    checkMissing(n1);
    r19 = `-`(n1, 1);
    st n_1 = r19;
    n2 = ld n;
    check L45() else D14();
  D12():
    deopt 59 [r18];
  D14():
    deopt 66 [n2];
  L43():
    goto L7(r18);
  L45():
    n3 = force? n2;
    checkMissing(n3);
    r20 = `-`(n3, 2);
    st n_2 = r20;
    y5 = ld y;
    check L46() else D15();
  D15():
    deopt 71 [y5];
  L46():
    y6 = force? y5;
    checkMissing(y6);
    st sm = y6;
    k11 = ld k;
    check L47() else D16();
  D16():
    deopt 74 [k11];
  L47():
    k12 = force? k11;
    checkMissing(k12);
    r21 = `>=`(k12, 2);
    c8 = `as.logical`(r21);
    if c8 then L48() else L8();
  L8():
    goto L17();
  L17():
    med3i = ldf med3i;
    check L80() else D32();
  L48():
    med_3 = ldf `med.3`;
    check L49() else D17();
  D17():
    deopt 79 [];
  D32():
    deopt 143 [];
  L49():
    p = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      c9 = `is.object`(y8);
      if c9 then L1() else L2(y8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", y8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(y10):
      __1 = ldf `[` in base;
      r22 = dyn __1(y10, <int 1, 2, 3>);
      goto L0(r22);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r24 = dyn med_3(p);
    check L50() else D18();
  L80():
    p6 = prom<V +>{
      y26 = ld y;
      y27 = force? y26;
      checkMissing(y27);
      c20 = `is.object`(y27);
      if c20 then L1() else L2(y27);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", y27);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(y29):
      __5 = ldf `[` in base;
      r69 = dyn __5(y29, 1);
      goto L0(r69);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p7 = prom<V +>{
      sm = ld sm;
      sm1 = force? sm;
      checkMissing(sm1);
      c21 = `is.object`(sm1);
      if c21 then L1() else L2(sm1);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", sm1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(sm3):
      __6 = ldf `[` in base;
      r71 = dyn __6(sm3, 2);
      goto L0(r71);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p8 = prom<V +>{
      sm4 = ld sm;
      sm5 = force? sm4;
      checkMissing(sm5);
      c22 = `is.object`(sm5);
      if c22 then L3() else L4(sm5);
    L0(dx21):
      sm8 = ld sm;
      sm9 = force? sm8;
      checkMissing(sm9);
      c23 = `is.object`(sm9);
      if c23 then L6() else L7(dx21, 2, sm9);
    L3():
      dr20 = tryDispatchBuiltin.1("[", sm5);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L5() else L4(dr20);
    L4(sm7):
      __7 = ldf `[` in base;
      r73 = dyn __7(sm7, 2);
      goto L0(r73);
    L1(dx26, r77, dx27):
      sm12 = ld sm;
      sm13 = force? sm12;
      checkMissing(sm13);
      c24 = `is.object`(sm13);
      if c24 then L9() else L10(dx26, r77, dx27, sm13);
    L5():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    L6():
      dr22 = tryDispatchBuiltin.1("[", sm9);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L8() else L7(dx21, 2, dr22);
    L7(dx23, r75, sm11):
      __8 = ldf `[` in base;
      r78 = dyn __8(sm11, 3);
      goto L1(dx23, r75, r78);
    L2(dx35, r82, dx36, dx37):
      r84 = `-`(dx36, dx37);
      r85 = `*`(r82, r84);
      r86 = `-`(dx35, r85);
      return r86;
    L8():
      dx25 = getTryDispatchBuiltinValue(dr22);
      goto L1(dx21, 2, dx25);
    L9():
      dr24 = tryDispatchBuiltin.1("[", sm13);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L11() else L10(dx26, r77, dx27, dr24);
    L10(dx30, r80, dx31, sm15):
      __9 = ldf `[` in base;
      r83 = dyn __9(sm15, 2);
      goto L2(dx30, r80, dx31, r83);
    L11():
      dx34 = getTryDispatchBuiltinValue(dr24);
      goto L2(dx26, r77, dx27, dx34);
    };
    r88 = dyn med3i(p6, p7, p8);
    check L81() else D33();
  D18():
    deopt 81 [r24];
  D33():
    deopt 147 [r88];
  L50():
    l = ld sm;
    c10 = `is.object`(l);
    if c10 then L51() else L52(r24, l);
  L81():
    l13 = ld sm;
    c25 = `is.object`(l13);
    if c25 then L82() else L83(r88, l13);
  L9(dx3):
    st sm = dx3;
    med_4 = ldf `med.3`;
    check L54() else D19();
  L18(dx39):
    st sm = dx39;
    med3i1 = ldf med3i;
    check L85() else D34();
  L51():
    dr2 = tryDispatchBuiltin.0("[<-", l, r24);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(r24, dr2);
  L52(r26, l2):
    ___1 = ldf `[<-` in base;
    r29 = dyn ___1(l2, r24, 2);
    goto L9(r29);
  L82():
    dr26 = tryDispatchBuiltin.0("[<-", l13, r88);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L84() else L83(r88, dr26);
  L83(r90, l15):
    ___5 = ldf `[<-` in base;
    r93 = dyn ___5(l15, r88, 1);
    goto L18(r93);
  D19():
    deopt 88 [];
  D34():
    deopt 154 [];
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L54():
    p1 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      c11 = `is.object`(y12);
      if c11 then L2() else L3(y12);
    L0(dx5):
      return dx5;
    L2():
      dr4 = tryDispatchBuiltin.1("[", y12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(y14):
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L1(y17, r31):
      __2 = ldf `[` in base;
      r33 = dyn __2(y17, r31);
      goto L0(r33);
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      n_1 = ld n_1;
      n_2 = force? n_1;
      checkMissing(n_2);
      n_3 = ld n_2;
      n_4 = force? n_3;
      checkMissing(n_4);
      c12 = ldf c in base;
      r32 = dyn c12(n5, n_2, n_4);
      goto L1(y14, r32);
    L6():
      r30 = dyn base2(<sym n>, <sym n_1>, <sym n_2>);
      goto L1(y14, r30);
    };
    r35 = dyn med_4(p1);
    check L55() else D20();
  L84():
    dx38 = getTryDispatchBuiltinValue(dr26);
    goto L18(dx38);
  L85():
    p9 = prom<V +>{
      y30 = ld y;
      y31 = force? y30;
      checkMissing(y31);
      c26 = `is.object`(y31);
      if c26 then L1() else L2(y31);
    L0(dx41):
      return dx41;
    L1():
      dr28 = tryDispatchBuiltin.1("[", y31);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(y33):
      n12 = ld n;
      n13 = force? n12;
      __10 = ldf `[` in base;
      r94 = dyn __10(y33, n13);
      goto L0(r94);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx40);
    };
    p10 = prom<V +>{
      sm16 = ld sm;
      sm17 = force? sm16;
      checkMissing(sm17);
      c27 = `is.object`(sm17);
      if c27 then L1() else L2(sm17);
    L0(dx43):
      return dx43;
    L1():
      dr30 = tryDispatchBuiltin.1("[", sm17);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(sm19):
      n_7 = ld n_1;
      n_8 = force? n_7;
      __11 = ldf `[` in base;
      r96 = dyn __11(sm19, n_8);
      goto L0(r96);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx42);
    };
    p11 = prom<V +>{
      sm20 = ld sm;
      sm21 = force? sm20;
      checkMissing(sm21);
      c28 = `is.object`(sm21);
      if c28 then L3() else L4(sm21);
    L0(dx45):
      sm24 = ld sm;
      sm25 = force? sm24;
      checkMissing(sm25);
      c29 = `is.object`(sm25);
      if c29 then L6() else L7(dx45, 2, sm25);
    L3():
      dr32 = tryDispatchBuiltin.1("[", sm21);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L5() else L4(dr32);
    L4(sm23):
      n_9 = ld n_1;
      n_10 = force? n_9;
      __12 = ldf `[` in base;
      r98 = dyn __12(sm23, n_10);
      goto L0(r98);
    L1(dx50, r102, dx51):
      sm28 = ld sm;
      sm29 = force? sm28;
      checkMissing(sm29);
      c30 = `is.object`(sm29);
      if c30 then L9() else L10(dx50, r102, dx51, sm29);
    L5():
      dx44 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx44);
    L6():
      dr34 = tryDispatchBuiltin.1("[", sm25);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L8() else L7(dx45, 2, dr34);
    L7(dx47, r100, sm27):
      n_11 = ld n_2;
      n_12 = force? n_11;
      __13 = ldf `[` in base;
      r103 = dyn __13(sm27, n_12);
      goto L1(dx47, r100, r103);
    L2(dx59, r107, dx60, dx61):
      r109 = `-`(dx60, dx61);
      r110 = `*`(r107, r109);
      r111 = `-`(dx59, r110);
      return r111;
    L8():
      dx49 = getTryDispatchBuiltinValue(dr34);
      goto L1(dx45, 2, dx49);
    L9():
      dr36 = tryDispatchBuiltin.1("[", sm29);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L11() else L10(dx50, r102, dx51, dr36);
    L10(dx54, r105, dx55, sm31):
      n_13 = ld n_1;
      n_14 = force? n_13;
      __14 = ldf `[` in base;
      r108 = dyn __14(sm31, n_14);
      goto L2(dx54, r105, dx55, r108);
    L11():
      dx58 = getTryDispatchBuiltinValue(dr36);
      goto L2(dx50, r102, dx51, dx58);
    };
    r113 = dyn med3i1(p9, p10, p11);
    check L86() else D35();
  D20():
    deopt 90 [r35];
  D35():
    deopt 158 [r113];
  L55():
    l3 = ld sm;
    c13 = `is.object`(l3);
    if c13 then L56() else L57(r35, l3);
  L86():
    l16 = ld sm;
    c31 = `is.object`(l16);
    if c31 then L87() else L88(r113, l16);
  L10(dx7):
    st sm = dx7;
    k13 = ld k;
    check L60() else D22();
  L19(dx63):
    st sm = dx63;
    sm32 = ld sm;
    check L91() else D37();
  L56():
    dr6 = tryDispatchBuiltin.0("[<-", l3, r35);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L58() else L57(r35, dr6);
  L57(r37, l5):
    n_5 = ld n_1;
    check L59() else D21();
  L87():
    dr38 = tryDispatchBuiltin.0("[<-", l16, r113);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L89() else L88(r113, dr38);
  L88(r115, l18):
    n14 = ld n;
    check L90() else D36();
  D21():
    deopt 92 [r37, l5, r35, n_5];
  D22():
    deopt 96 [k13];
  D36():
    deopt 160 [r115, l18, r113, n14];
  D37():
    deopt 164 [sm32];
  L58():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx6);
  L59():
    n_6 = force? n_5;
    ___2 = ldf `[<-` in base;
    r40 = dyn ___2(l5, r35, n_6);
    goto L10(r40);
  L60():
    k14 = force? k13;
    checkMissing(k14);
    r41 = `>=`(k14, 3);
    c14 = `as.logical`(r41);
    if c14 then L61() else L11();
  L89():
    dx62 = getTryDispatchBuiltinValue(dr38);
    goto L19(dx62);
  L90():
    n15 = force? n14;
    ___6 = ldf `[<-` in base;
    r118 = dyn ___6(l18, r113, n15);
    goto L19(r118);
  L91():
    sm33 = force? sm32;
    checkMissing(sm33);
    popenv;
    return sm33;
  L11():
    goto L16(NULL);
  L16(i19):
    goto L17();
  L61():
    k15 = ld k;
    check L62() else D23();
  D23():
    deopt 101 [3.0, k15];
  L62():
    k16 = force? k15;
    checkMissing(k16);
    r42 = `:`(3.0, k16);
    s = toForSeq(r42);
    l6 = length(s);
    i = 0;
    goto L12(i);
  L12(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l6, i2);
    if c15 then L63() else L15();
  L15():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    i5 = ld i;
    check L64() else D24();
  L63():
    goto L16(i2);
  D24():
    deopt 105 [i2, 2, i5];
  L64():
    i6 = force? i5;
    checkMissing(i6);
    r43 = `*`(2, i6);
    r44 = `-`(r43, 1);
    st j = r44;
    med_odd = ldf `med.odd`;
    check L65() else D25();
  D25():
    deopt 112 [i2];
  L65():
    p2 = prom<V +>{
      y18 = ld y;
      y19 = force? y18;
      checkMissing(y19);
      c16 = `is.object`(y19);
      if c16 then L1() else L2(y19);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", y19);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(y21):
      j = ld j;
      j1 = force? j;
      checkMissing(j1);
      r45 = `:`(1, j1);
      __3 = ldf `[` in base;
      r46 = dyn __3(y21, r45);
      goto L0(r46);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p3 = prom<V +>{
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      return j3;
    };
    r49 = dyn med_odd(p2, p3);
    check L66() else D26();
  D26():
    deopt 115 [i2, r49];
  L66():
    l7 = ld sm;
    c17 = `is.object`(l7);
    if c17 then L67() else L68(i2, r49, l7);
  L13(i10, dx11):
    st sm = dx11;
    med_odd1 = ldf `med.odd`;
    check L71() else D28();
  L67():
    dr10 = tryDispatchBuiltin.0("[<-", l7, r49);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L69() else L68(i2, r49, dr10);
  L68(i8, r51, l9):
    i11 = ld i;
    check L70() else D27();
  D27():
    deopt 117 [i8, r51, l9, r49, i11];
  D28():
    deopt 122 [i10];
  L69():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L13(i2, dx10);
  L70():
    i12 = force? i11;
    ___3 = ldf `[<-` in base;
    r54 = dyn ___3(l9, r49, i12);
    goto L13(i8, r54);
  L71():
    p4 = prom<V +>{
      y22 = ld y;
      y23 = force? y22;
      checkMissing(y23);
      c18 = `is.object`(y23);
      if c18 then L1() else L2(y23);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", y23);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(y25):
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      r55 = `+`(n7, 1);
      j4 = ld j;
      j5 = force? j4;
      checkMissing(j5);
      r56 = `-`(r55, j5);
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      r57 = `:`(r56, n9);
      __4 = ldf `[` in base;
      r58 = dyn __4(y25, r57);
      goto L0(r58);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p5 = prom<V +>{
      j6 = ld j;
      j7 = force? j6;
      checkMissing(j7);
      return j7;
    };
    r61 = dyn med_odd1(p4, p5);
    check L72() else D29();
  D29():
    deopt 125 [i10, r61];
  L72():
    l10 = ld sm;
    c19 = `is.object`(l10);
    if c19 then L73() else L74(i10, r61, l10);
  L14(i16, dx15):
    st sm = dx15;
    goto L12(i16);
  L73():
    dr14 = tryDispatchBuiltin.0("[<-", l10, r61);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L75() else L74(i10, r61, dr14);
  L74(i14, r63, l12):
    n10 = ld n;
    check L76() else D30();
  D30():
    deopt 127 [i14, r63, l12, r61, n10];
  L75():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L14(i10, dx14);
  L76():
    n11 = force? n10;
    checkMissing(n11);
    i17 = ld i;
    check L77() else D31();
  D31():
    deopt 128 [i14, r63, l12, r61, n11, i17];
  L77():
    i18 = force? i17;
    checkMissing(i18);
    r66 = `-`(n11, i18);
    r67 = `+`(r66, 1);
    ___4 = ldf `[<-` in base;
    r68 = dyn ___4(l12, r61, r67);
    goto L14(i14, r68);
  }
}
fun inner1700783966(a, b, c) {
  (reg a:*, reg b:*, reg c:*) -+> V { var a:*, var b:*, var c:*, reg b1:*, reg b2:V, reg a1:*, reg a2:V, reg b3:*, reg b4:V, reg r:V, reg c1:L, reg c2:*, reg c3:V, reg b5:*, reg b6:V, reg r1:V, reg c4:L, reg a3:*, reg a4:V, reg c5:*, reg c6:V, reg r2:V, reg c7:L, reg a5:*, reg a6:V, reg a7:V, reg c8:*, reg c9:V, reg a8:V, reg c10:*, reg c11:V, reg b7:*, reg b8:V, reg r3:V, reg c12:L, reg a10:*, reg a11:V, reg c13:*, reg c14:V, reg r4:V, reg c15:L, reg a12:*, reg a13:V, reg a14:V, reg c16:*, reg c17:V, reg m:*, reg m1:V |
    mkenv;
    st a = a;
    st b = b;
    st c = c;
    b1 = ld b;
    check L9() else D0();
  D0():
    deopt 0 [b1];
  L9():
    b2 = force? b1;
    checkMissing(b2);
    st m = b2;
    a1 = ld a;
    check L10() else D1();
  D1():
    deopt 3 [a1];
  L10():
    a2 = force? a1;
    checkMissing(a2);
    b3 = ld b;
    check L11() else D2();
  D2():
    deopt 4 [a2, b3];
  L11():
    b4 = force? b3;
    checkMissing(b4);
    r = `<`(a2, b4);
    c1 = `as.logical`(r);
    if c1 then L12() else L0();
  L0():
    c10 = ld c;
    check L24() else D9();
  L5():
    m = ld m;
    check L34() else D15();
  L12():
    c2 = ld c;
    check L13() else D3();
  D3():
    deopt 7 [c2];
  D9():
    deopt 22 [c10];
  D15():
    deopt 37 [m];
  L13():
    c3 = force? c2;
    checkMissing(c3);
    b5 = ld b;
    check L14() else D4();
  L24():
    c11 = force? c10;
    checkMissing(c11);
    b7 = ld b;
    check L25() else D10();
  L34():
    m1 = force? m;
    checkMissing(m1);
    popenv;
    return m1;
  D4():
    deopt 8 [c3, b5];
  D10():
    deopt 23 [c11, b7];
  L14():
    b6 = force? b5;
    checkMissing(b6);
    r1 = `<`(c3, b6);
    c4 = `as.logical`(r1);
    if c4 then L15() else L1();
  L25():
    b8 = force? b7;
    checkMissing(b8);
    r3 = `>`(c11, b8);
    c12 = `as.logical`(r3);
    if c12 then L26() else L6();
  L1():
    goto L4(NULL);
  L4(a8):
    goto L5();
  L6():
    goto L5();
  L15():
    a3 = ld a;
    check L16() else D5();
  L26():
    a10 = ld a;
    check L27() else D11();
  D5():
    deopt 11 [a3];
  D11():
    deopt 26 [a10];
  L16():
    a4 = force? a3;
    checkMissing(a4);
    c5 = ld c;
    check L17() else D6();
  L27():
    a11 = force? a10;
    checkMissing(a11);
    c13 = ld c;
    check L28() else D12();
  D6():
    deopt 12 [a4, c5];
  D12():
    deopt 27 [a11, c13];
  L17():
    c6 = force? c5;
    checkMissing(c6);
    r2 = `>=`(a4, c6);
    c7 = `as.logical`(r2);
    if c7 then L18() else L2();
  L28():
    c14 = force? c13;
    checkMissing(c14);
    r4 = `<=`(a11, c14);
    c15 = `as.logical`(r4);
    if c15 then L29() else L7();
  L2():
    c8 = ld c;
    check L21() else D8();
  L3(a7):
    st m = a7;
    goto L4(a7);
  L7():
    c16 = ld c;
    check L32() else D14();
  L8(a14):
    st m = a14;
    goto L5();
  L18():
    a5 = ld a;
    check L19() else D7();
  L29():
    a12 = ld a;
    check L30() else D13();
  D7():
    deopt 15 [a5];
  D8():
    deopt 17 [c8];
  D13():
    deopt 30 [a12];
  D14():
    deopt 32 [c16];
  L19():
    a6 = force? a5;
    checkMissing(a6);
    goto L3(a6);
  L21():
    c9 = force? c8;
    checkMissing(c9);
    goto L3(c9);
  L30():
    a13 = force? a12;
    checkMissing(a13);
    goto L8(a13);
  L32():
    c17 = force? c16;
    checkMissing(c17);
    goto L8(c17);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg anyNA:cls, reg r2:V, reg c:L, reg mean_default:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg x9:V, reg r4:V, reg x10:*, reg x11:V, reg is_na:cls, reg r5:V, reg r6:V, reg __:cls, reg r7:V, reg p:p(V +), reg r9:V, reg med3:cls, reg x12:*, reg x13:V, reg c2:L, reg x15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg p1:p(V +), reg x16:*, reg x17:V, reg c3:L, reg x19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r12:V, reg p2:p(V +), reg x20:*, reg x21:V, reg c4:L, reg x23:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r14:V, reg p3:p(V +), reg r16:V |
    mkenv;
    st x = x;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    med3 = ldf med3;
    check L10() else D4();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    anyNA = ldf anyNA in base;
    r2 = dyn anyNA(x2);
    check L5() else D1();
  L6():
    mean_default = ldf `mean.default`;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 13 [];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c1 = `is.object`(x4);
      if c1 then L2() else L3(x4);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(x6):
      sym1 = ldf `is.na`;
      base1 = ldf `is.na` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(x9, r4):
      r6 = `!`(r4);
      __ = ldf `[` in base;
      r7 = dyn __(x9, r6);
      goto L0(r7);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      is_na = ldf `is.na` in base;
      r5 = dyn is_na(x11);
      goto L1(x6, r5);
    L6():
      r3 = dyn base1(<sym x>);
      goto L1(x6, r3);
    };
    r9 = dyn mean_default[, `na.rm`](p, TRUE);
    check L8() else D3();
  L10():
    p1 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      c2 = `is.object`(x13);
      if c2 then L1() else L2(x13);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", x13);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x15):
      __1 = ldf `[[` in base;
      r10 = dyn __1(x15, 1);
      goto L0(r10);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      c3 = `is.object`(x17);
      if c3 then L1() else L2(x17);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", x17);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x19):
      __2 = ldf `[[` in base;
      r12 = dyn __2(x19, 2);
      goto L0(r12);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p3 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      c4 = `is.object`(x21);
      if c4 then L1() else L2(x21);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", x21);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x23):
      __3 = ldf `[[` in base;
      r14 = dyn __3(x23, 3);
      goto L0(r14);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r16 = dyn med3(p1, p2, p3);
    check L11() else D5();
  D3():
    deopt 11 [r9];
  D5():
    deopt 17 [r16];
  L8():
    popenv;
    return r9;
  L11():
    popenv;
    return r16;
  }
}
fun inner851502008(x, n) {
  (reg x:*, reg n:*) -+> V { var x:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg anyNA:cls, reg r6:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg x11:V, reg r10:V, reg x12:*, reg x13:V, reg is_na:cls, reg r11:V, reg r12:V, reg __:cls, reg r13:V, reg length1:cls, reg r14:V, reg n1:*, reg n2:V, reg r16:V, reg ___:cls, reg r17:V, reg c2:L, reg sort:cls, reg x14:*, reg x15:V, reg p1:p(V +), reg half:*, reg half1:V, reg p2:p(V +), reg r20:V, reg c3:L, reg r22:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg half2:*, reg half3:V, reg __1:cls, reg r23:V, reg x16:*, reg x17:V, reg c4:L, reg x19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r24:V |
    mkenv;
    st x = x;
    n_isMissing = missing.0(n);
    if n_isMissing then L0() else L1(n);
  L0():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      length = ldf length in base;
      r2 = dyn length(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L1(p);
  L1(n_orDefault):
    st n = n_orDefault;
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L2(r5):
    c = `as.logical`(r5);
    if c then L15() else L3();
  L11():
    x3 = ld x;
    check L13() else D0();
  L12():
    r4 = dyn base1(<sym x>);
    goto L2(r4);
  D0():
    deopt 2 [x3];
  L3():
    goto L7();
  L7():
    n1 = ld n;
    check L28() else D6();
  L13():
    x4 = force? x3;
    checkMissing(x4);
    anyNA = ldf anyNA in base;
    r6 = dyn anyNA(x4);
    check L14() else D1();
  L15():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  D1():
    deopt 5 [r6];
  D6():
    deopt 25 [n1];
  L4(r8):
    st n = r8;
    goto L7();
  L14():
    goto L2(r6);
  L16():
    x5 = ld x;
    check L18() else D2();
  L17():
    r7 = dyn base2(<lang `<-`(x, `[`(x, `!`(is.na(x))))>);
    goto L4(r7);
  L28():
    n2 = force? n1;
    checkMissing(n2);
    r16 = `+`(n2, 1);
    ___ = ldf `%/%` in base;
    r17 = dyn ___(r16, 2);
    check L29() else D7();
  D2():
    deopt 8 [x5];
  D7():
    deopt 31 [r17];
  L18():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L19() else L20(x6);
  L29():
    st half = r17;
    c2 = `as.logical`(r17);
    if c2 then L30() else L8();
  L5(dx1):
    st x = dx1;
    length1 = ldf length in base;
    r14 = dyn length1(dx1);
    check L26() else D5();
  L8():
    x16 = ld x;
    check L38() else D11();
  L19():
    dr = tryDispatchBuiltin.1("[", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(x8):
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L30():
    sort = ldf sort;
    check L31() else D8();
  D5():
    deopt 20 [r14];
  D8():
    deopt 34 [];
  D11():
    deopt 42 [x16];
  L6(x11, r10):
    r12 = `!`(r10);
    __ = ldf `[` in base;
    r13 = dyn __(x11, r12);
    goto L5(r13);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L22():
    x12 = ld x;
    check L24() else D3();
  L23():
    r9 = dyn base3(<sym x>);
    goto L6(x8, r9);
  L26():
    goto L4(r14);
  L31():
    p1 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    p2 = prom<V +>{
      half = ld half;
      half1 = force? half;
      checkMissing(half1);
      return half1;
    };
    r20 = dyn sort[, partial](p1, p2);
    check L32() else D9();
  L38():
    x17 = force? x16;
    checkMissing(x17);
    c4 = `is.object`(x17);
    if c4 then L39() else L40(x17);
  D3():
    deopt 12 [x8, x12];
  D9():
    deopt 38 [r20];
  L10(dx5):
    popenv;
    return dx5;
  L24():
    x13 = force? x12;
    checkMissing(x13);
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(x13);
    check L25() else D4();
  L32():
    c3 = `is.object`(r20);
    if c3 then L33() else L34(r20);
  L39():
    dr4 = tryDispatchBuiltin.1("[", x17);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(dr4);
  L40(x19):
    __2 = ldf `[` in base;
    r24 = dyn __2(x19, 1);
    goto L10(r24);
  D4():
    deopt 15 [x8, r11];
  L9(dx3):
    popenv;
    return dx3;
  L25():
    goto L6(x8, r11);
  L33():
    dr2 = tryDispatchBuiltin.1("[", r20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(dr2);
  L34(r22):
    half2 = ld half;
    check L36() else D10();
  L41():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  D10():
    deopt 39 [r22, half2];
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L36():
    half3 = force? half2;
    __1 = ldf `[` in base;
    r23 = dyn __1(r22, half3);
    goto L9(r23);
  }
}
fun inner620290382(R) {
  (reg R:*) -+> V { var R:*, reg runmed:cls, reg yN:*, reg yN1:V, reg p:p(V +), reg R1:*, reg R2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st R = R;
    runmed = ldf runmed;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      yN = ld yN;
      yN1 = force? yN;
      checkMissing(yN1);
      return yN1;
    };
    p1 = prom<V +>{
      R1 = ld R;
      R2 = force? R1;
      checkMissing(R2);
      return R2;
    };
    r2 = dyn runmed[, , endrule](p, 7.0, p1);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}