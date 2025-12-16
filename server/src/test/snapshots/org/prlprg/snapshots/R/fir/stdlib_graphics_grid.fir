fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg p:p(V +), reg r2:V, reg grid:cls, reg r3:V, reg par:cls, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg with:cls, reg iris:*, reg iris1:V, reg p2:p(V +), reg plot1:cls, reg Sepal_Length:*, reg Sepal_Length1:V, reg p3:p(V +), reg Sepal_Width:*, reg Sepal_Width1:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg Species:*, reg Species1:V, reg as_integer:cls, reg r13:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg c:cls, reg r17:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg c1:cls, reg r21:V, reg p7:p(V +), reg grid1:cls, reg r23:V, reg p8:p(V +), reg plot2:cls, reg Sepal_Length2:*, reg Sepal_Length3:V, reg p9:p(V +), reg Sepal_Width2:*, reg Sepal_Width3:V, reg p10:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg Species2:*, reg Species3:V, reg as_integer1:cls, reg r30:V, reg p11:p(V +), reg grid2:cls, reg r32:V, reg p12:p(V +), reg r34:V, reg p13:p(V +), reg r36:V, reg par1:cls, reg op:*, reg op1:V, reg p14:p(V +), reg r38:V, reg plot3:cls, reg r39:V, reg p15:p(V +), reg r41:V, reg grid3:cls, reg r42:V, reg str:cls, reg gr:*, reg gr1:V, reg p16:p(V +), reg r44:V, reg stopifnot:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg gr2:*, reg gr3:V, reg length:cls, reg r47:V, reg r48:V, reg p17:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg gr4:*, reg gr5:V, reg c2:L, reg gr7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r52:V, reg gr8:*, reg gr9:V, reg c3:L, reg gr11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r53:V, reg identical:cls, reg r54:V, reg p18:p(V +), reg gr12:*, reg gr13:V, reg c4:L, reg gr15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r56:V, reg r57:V, reg p19:p(V +), reg r59:V, reg plot4:cls, reg r60:V, reg p20:p(V +), reg r62:V, reg grid4:cls, reg r63:V, reg plot5:cls, reg r64:V, reg p21:p(V +), reg r66:V, reg grid5:cls, reg r67:V, reg stopifnot1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r68:V, reg r69:V, reg grll:*, reg grll1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg r71:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r72:V, reg r73:V, reg c5:cls, reg r74:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r75:V, reg r76:V, reg c6:cls, reg r77:V, reg list:cls, reg r78:V, reg identical1:cls, reg r79:V, reg p22:p(V +), reg r81:V, reg r82:V, reg r83:V, reg plot6:cls, reg __3:cls, reg r84:V, reg p23:p(V +), reg r86:V, reg grid6:cls, reg adjustcolor:cls, reg p24:p(V +), reg r88:V, reg p25:p(V +), reg r90:V, reg grid7:cls, reg r91:V, reg grid8:cls, reg r92:V, reg str1:cls, reg gr25:*, reg gr26:V, reg p26:p(V +), reg r94:V, reg stopifnot2:cls, reg grll2:*, reg grll3:V, reg c7:L, reg grll5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r95:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r96:V, reg dx10:V, reg r97:V, reg c8:cls, reg r98:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r100:V, reg r101:V, reg gr27:*, reg gr28:V, reg c9:L, reg gr30:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg r102:V, reg length1:cls, reg r103:V, reg all_equal:cls, reg r105:V, reg r106:V, reg p27:p(V +), reg gr31:*, reg gr32:V, reg c10:L, reg gr34:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg r108:V, reg p28:p(V +), reg r110:V, reg p29:p(V +), reg r112:V |
    mkenv;
    r = clos `inner-73688097`;
    st grid = r;
    plot = ldf plot;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      return <int 1, 2, 3>;
    };
    r2 = dyn plot(p);
    check L2() else D1();
  D1():
    deopt 6 [r2];
  L2():
    grid = ldf grid;
    check L3() else D2();
  D2():
    deopt 8 [];
  L3():
    r3 = dyn grid[, , lwd](NA_LGL, 5.0, 2.0);
    check L4() else D3();
  D3():
    deopt 13 [r3];
  L4():
    par = ldf par;
    check L5() else D4();
  D4():
    deopt 15 [];
  L5():
    p1 = prom<V +>{
      return <int 1, 2>;
    };
    r5 = dyn par[mfcol](p1);
    check L6() else D5();
  D5():
    deopt 18 [r5];
  L6():
    st op = r5;
    sym = ldf with;
    base = ldf with in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0():
    par1 = ldf par;
    check L11() else D8();
  L7():
    with = ldf with;
    check L9() else D6();
  L8():
    r6 = dyn base(<sym iris>, <lang {
      plot(Sepal.Length, Sepal.Width, col=as.integer(Species), xlim=c(4.0, 8.0), ylim=c(2.0, 4.5), panel.first=grid(), main="with(iris,  plot(...., panel.first = grid(), ..) )");
      plot(Sepal.Length, Sepal.Width, col=as.integer(Species), panel.first=grid(3.0, lty=1.0, lwd=2.0), main="... panel.first = grid(3, lty = 1, lwd = 2), ..")
    }>);
    goto L0();
  D6():
    deopt 22 [];
  D8():
    deopt 27 [];
  L9():
    p2 = prom<V +>{
      iris = ld iris;
      iris1 = force? iris;
      checkMissing(iris1);
      return iris1;
    };
    p13 = prom<V +>{
      plot1 = ldf plot;
      p3 = prom<V +>{
        Sepal_Length = ld `Sepal.Length`;
        Sepal_Length1 = force? Sepal_Length;
        checkMissing(Sepal_Length1);
        return Sepal_Length1;
      };
      p4 = prom<V +>{
        Sepal_Width = ld `Sepal.Width`;
        Sepal_Width1 = force? Sepal_Width;
        checkMissing(Sepal_Width1);
        return Sepal_Width1;
      };
      p5 = prom<V +>{
        sym1 = ldf `as.integer`;
        base1 = ldf `as.integer` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r12):
        return r12;
      L1():
        Species = ld Species;
        Species1 = force? Species;
        checkMissing(Species1);
        as_integer = ldf `as.integer` in base;
        r13 = dyn as_integer(Species1);
        goto L0(r13);
      L2():
        r11 = dyn base1(<sym Species>);
        goto L0(r11);
      };
      p6 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r16):
        return r16;
      L1():
        c = ldf c in base;
        r17 = dyn c(4.0, 8.0);
        goto L0(r17);
      L2():
        r15 = dyn base2(4.0, 8.0);
        goto L0(r15);
      };
      p7 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r20):
        return r20;
      L1():
        c1 = ldf c in base;
        r21 = dyn c1(2.0, 4.5);
        goto L0(r21);
      L2():
        r19 = dyn base3(2.0, 4.5);
        goto L0(r19);
      };
      p8 = prom<V +>{
        grid1 = ldf grid;
        r23 = dyn grid1();
        return r23;
      };
      dyn plot1[, , col, xlim, ylim, `panel.first`, main](p3, p4, p5, p6, p7, p8, "with(iris,  plot(...., panel.first = grid(), ..) )");
      plot2 = ldf plot;
      p9 = prom<V +>{
        Sepal_Length2 = ld `Sepal.Length`;
        Sepal_Length3 = force? Sepal_Length2;
        checkMissing(Sepal_Length3);
        return Sepal_Length3;
      };
      p10 = prom<V +>{
        Sepal_Width2 = ld `Sepal.Width`;
        Sepal_Width3 = force? Sepal_Width2;
        checkMissing(Sepal_Width3);
        return Sepal_Width3;
      };
      p11 = prom<V +>{
        sym4 = ldf `as.integer`;
        base4 = ldf `as.integer` in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r29):
        return r29;
      L1():
        Species2 = ld Species;
        Species3 = force? Species2;
        checkMissing(Species3);
        as_integer1 = ldf `as.integer` in base;
        r30 = dyn as_integer1(Species3);
        goto L0(r30);
      L2():
        r28 = dyn base4(<sym Species>);
        goto L0(r28);
      };
      p12 = prom<V +>{
        grid2 = ldf grid;
        r32 = dyn grid2[, lty, lwd](3.0, 1.0, 2.0);
        return r32;
      };
      r34 = dyn plot2[, , col, `panel.first`, main](p9, p10, p11, p12, "... panel.first = grid(3, lty = 1, lwd = 2), ..");
      return r34;
    };
    r36 = dyn with(p2, p13);
    check L10() else D7();
  L11():
    p14 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r38 = dyn par1(p14);
    check L12() else D9();
  D7():
    deopt 25 [r36];
  D9():
    deopt 29 [r38];
  L10():
    goto L0();
  L12():
    plot3 = ldf plot;
    check L13() else D10();
  D10():
    deopt 31 [];
  L13():
    p15 = prom<V +>{
      r39 = `:`(1.0, 64.0);
      return r39;
    };
    r41 = dyn plot3(p15);
    check L14() else D11();
  D11():
    deopt 33 [r41];
  L14():
    grid3 = ldf grid;
    check L15() else D12();
  D12():
    deopt 35 [];
  L15():
    r42 = dyn grid3();
    check L16() else D13();
  D13():
    deopt 36 [r42];
  L16():
    st gr = r42;
    str = ldf str;
    check L17() else D14();
  D14():
    deopt 39 [];
  L17():
    p16 = prom<V +>{
      gr = ld gr;
      gr1 = force? gr;
      checkMissing(gr1);
      return gr1;
    };
    r44 = dyn str(p16);
    check L18() else D15();
  D15():
    deopt 41 [r44];
  L18():
    stopifnot = ldf stopifnot;
    check L19() else D16();
  D16():
    deopt 43 [];
  L19():
    p17 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r46):
      r48 = `==`(r46, 2.0);
      return r48;
    L1():
      gr2 = ld gr;
      gr3 = force? gr2;
      checkMissing(gr3);
      length = ldf length in base;
      r47 = dyn length(gr3);
      goto L0(r47);
    L2():
      r45 = dyn base5(<sym gr>);
      goto L0(r45);
    };
    p18 = prom<V +>{
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L3() else L4();
    L0(r51):
      return r51;
    L3():
      gr4 = ld gr;
      gr5 = force? gr4;
      checkMissing(gr5);
      c2 = `is.object`(gr5);
      if c2 then L5() else L6(gr5);
    L4():
      r50 = dyn base6(<lang `[[`(gr, 1.0)>, <lang `[[`(gr, 2.0)>);
      goto L0(r50);
    L1(dx1):
      gr8 = ld gr;
      gr9 = force? gr8;
      checkMissing(gr9);
      c3 = `is.object`(gr9);
      if c3 then L8() else L9(gr9);
    L5():
      dr = tryDispatchBuiltin.1("[[", gr5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(gr7):
      __ = ldf `[[` in base;
      r52 = dyn __(gr7, 1.0);
      goto L1(r52);
    L2(dx3):
      identical = ldf identical in base;
      r54 = dyn identical(dx1, dx3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r54);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      dr2 = tryDispatchBuiltin.1("[[", gr9);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L10() else L9(dr2);
    L9(gr11):
      __1 = ldf `[[` in base;
      r53 = dyn __1(gr11, 2.0);
      goto L2(r53);
    L10():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L2(dx2);
    };
    p19 = prom<V +>{
      gr12 = ld gr;
      gr13 = force? gr12;
      checkMissing(gr13);
      c4 = `is.object`(gr13);
      if c4 then L1() else L2(gr13);
    L0(dx5):
      r57 = `==`(dx5, <real 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0>);
      return r57;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", gr13);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(gr15):
      __2 = ldf `[[` in base;
      r56 = dyn __2(gr15, "atx");
      goto L0(r56);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r59 = dyn stopifnot(p17, p18, p19);
    check L20() else D17();
  D17():
    deopt 47 [r59];
  L20():
    plot4 = ldf plot;
    check L21() else D18();
  D18():
    deopt 49 [];
  L21():
    p20 = prom<V +>{
      r60 = `:`(8.0, 270.0);
      return r60;
    };
    r62 = dyn plot4[, log](p20, "xy");
    check L22() else D19();
  D19():
    deopt 53 [r62];
  L22():
    grid4 = ldf grid;
    check L23() else D20();
  D20():
    deopt 55 [];
  L23():
    r63 = dyn grid4();
    check L24() else D21();
  D21():
    deopt 56 [r63];
  L24():
    plot5 = ldf plot;
    check L25() else D22();
  D22():
    deopt 58 [];
  L25():
    p21 = prom<V +>{
      r64 = `:`(8.0, 270.0);
      return r64;
    };
    r66 = dyn plot5[, log](p21, "xy");
    check L26() else D23();
  D23():
    deopt 62 [r66];
  L26():
    grid5 = ldf grid;
    check L27() else D24();
  D24():
    deopt 64 [];
  L27():
    r67 = dyn grid5[equilogs](FALSE);
    check L28() else D25();
  D25():
    deopt 67 [r67];
  L28():
    st grll = r67;
    stopifnot1 = ldf stopifnot;
    check L29() else D26();
  D26():
    deopt 70 [];
  L29():
    p22 = prom<V +>{
      sym7 = ldf identical;
      base7 = ldf identical in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L0(r69):
      return r69;
    L4():
      grll = ld grll;
      grll1 = force? grll;
      checkMissing(grll1);
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L6() else L7();
    L5():
      r68 = dyn base7(<sym grll>, <lang list(atx=c(1.0, 2.0, 5.0, 10.0, 20.0, 50.0, 100.0, 200.0), aty=c(10.0, 20.0, 50.0, 100.0, 200.0))>);
      goto L0(r68);
    L1(r71):
      identical1 = ldf identical in base;
      r79 = dyn identical1(grll1, r71, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r79);
    L6():
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L8() else L9();
    L7():
      r70 = dyn base8[atx, aty](<lang c(1.0, 2.0, 5.0, 10.0, 20.0, 50.0, 100.0, 200.0)>, <lang c(10.0, 20.0, 50.0, 100.0, 200.0)>);
      goto L1(r70);
    L2(r73):
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L10() else L11();
    L8():
      c5 = ldf c in base;
      r74 = dyn c5(1.0, 2.0, 5.0, 10.0, 20.0, 50.0, 100.0, 200.0);
      goto L2(r74);
    L9():
      r72 = dyn base9(1.0, 2.0, 5.0, 10.0, 20.0, 50.0, 100.0, 200.0);
      goto L2(r72);
    L3(r76):
      list = ldf list in base;
      r78 = dyn list(r73, r76);
      goto L1(r78);
    L10():
      c6 = ldf c in base;
      r77 = dyn c6(10.0, 20.0, 50.0, 100.0, 200.0);
      goto L3(r77);
    L11():
      r75 = dyn base10(10.0, 20.0, 50.0, 100.0, 200.0);
      goto L3(r75);
    };
    r81 = dyn stopifnot1(p22);
    check L30() else D27();
  D27():
    deopt 72 [r81];
  L30():
    r82 = `:`(-9.0, 70.0);
    r83 = `^`(2.0, r82);
    st x = r83;
    plot6 = ldf plot;
    check L31() else D28();
  D28():
    deopt 81 [];
  L31():
    p23 = prom<V +>{
      __3 = ldf `~` in base;
      r84 = dyn __3(<lang log(x)>, <sym x>);
      return r84;
    };
    r86 = dyn plot6[, log](p23, "xy");
    check L32() else D29();
  D29():
    deopt 85 [r86];
  L32():
    grid6 = ldf grid;
    check L33() else D30();
  D30():
    deopt 87 [];
  L33():
    p25 = prom<V +>{
      adjustcolor = ldf adjustcolor;
      p24 = prom<V +>{
        return 0.3333333333333333;
      };
      r88 = dyn adjustcolor("green", p24);
      return r88;
    };
    r90 = dyn grid6[equilogs, col](FALSE, p25);
    check L34() else D31();
  D31():
    deopt 92 [r90];
  L34():
    st grll = r90;
    grid7 = ldf grid;
    check L35() else D32();
  D32():
    deopt 95 [];
  L35():
    r91 = dyn grid7[nintLog](20.0);
    check L36() else D33();
  D33():
    deopt 98 [r91];
  L36():
    st gr20 = r91;
    grid8 = ldf grid;
    check L37() else D34();
  D34():
    deopt 101 [];
  L37():
    r92 = dyn grid8[nintLog, col](25.0, "thistle");
    check L38() else D35();
  D35():
    deopt 106 [r92];
  L38():
    st gr25 = r92;
    str1 = ldf str;
    check L39() else D36();
  D36():
    deopt 109 [];
  L39():
    p26 = prom<V +>{
      gr25 = ld gr25;
      gr26 = force? gr25;
      checkMissing(gr26);
      return gr26;
    };
    r94 = dyn str1(p26);
    check L40() else D37();
  D37():
    deopt 111 [r94];
  L40():
    stopifnot2 = ldf stopifnot;
    check L41() else D38();
  D38():
    deopt 113 [];
  L41():
    p29 = prom<V +>{
      grll2 = ld grll;
      grll3 = force? grll2;
      checkMissing(grll3);
      c7 = `is.object`(grll3);
      if c7 then L3() else L4(grll3);
    L2(dx7):
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L6() else L7();
    L3():
      dr6 = tryDispatchBuiltin.1("$", grll3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L5() else L4(dr6);
    L4(grll5):
      r95 = `$`(grll5, <sym aty>);
      goto L2(r95);
    L0(dx10, r97):
      `==`(dx10, r97);
      sym12 = ldf length;
      base12 = ldf length in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L8() else L9();
    L5():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx6);
    L6():
      c8 = ldf c in base;
      r98 = dyn c8(1.0, 2.0, 5.0, 10.0, 20.0, 50.0);
      goto L0(dx7, r98);
    L7():
      r96 = dyn base11(1.0, 2.0, 5.0, 10.0, 20.0, 50.0);
      goto L0(dx7, r96);
    L1(r101):
      `>=`(r101, 20.0);
      all_equal = ldf `all.equal`;
      p27 = prom<V +>{
        r105 = `:`(-3.0, 22.0);
        r106 = `^`(10.0, r105);
        return r106;
      };
      p28 = prom<V +>{
        gr31 = ld gr25;
        gr32 = force? gr31;
        checkMissing(gr32);
        c10 = `is.object`(gr32);
        if c10 then L1() else L2(gr32);
      L0(dx14):
        return dx14;
      L1():
        dr10 = tryDispatchBuiltin.1("$", gr32);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(gr34):
        r108 = `$`(gr34, <sym atx>);
        goto L0(r108);
      L3():
        dx13 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx13);
      };
      r110 = dyn all_equal[, , tol](p27, p28, 1.0E-15);
      return r110;
    L8():
      gr27 = ld gr20;
      gr28 = force? gr27;
      checkMissing(gr28);
      c9 = `is.object`(gr28);
      if c9 then L11() else L12(gr28);
    L9():
      r100 = dyn base12(<lang `$`(gr20, atx)>);
      goto L1(r100);
    L10(dx12):
      length1 = ldf length in base;
      r103 = dyn length1(dx12);
      goto L1(r103);
    L11():
      dr8 = tryDispatchBuiltin.1("$", gr28);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L13() else L12(dr8);
    L12(gr30):
      r102 = `$`(gr30, <sym atx>);
      goto L10(r102);
    L13():
      dx11 = getTryDispatchBuiltinValue(dr8);
      goto L10(dx11);
    };
    r112 = dyn stopifnot2[exprs](p29);
    check L42() else D39();
  D39():
    deopt 116 [r112];
  L42():
    popenv;
    return r112;
  }
}
fun `inner-73688097`(nx, ny, col, lty, lwd, equilogs, nintLog) {
  (reg nx:*, reg ny:*, reg col:*, reg lty:*, reg lwd:*, reg equilogs:*, reg nintLog:*) -+> V { var nx:*, reg nx_isMissing:L, reg nx_orDefault:*, var ny:*, reg ny_isMissing:L, reg ny_orDefault:*, reg nx1:*, reg nx2:V, reg p:p(V +), var col:*, reg col_isMissing:L, reg col_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, reg par:cls, reg r1:V, reg p1:p(V +), var equilogs:*, reg equilogs_isMissing:L, reg equilogs_orDefault:*, var nintLog:*, reg nintLog_isMissing:L, reg nintLog_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg nx3:*, reg nx4:V, reg c:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c6:L, reg r6:V, reg nx5:*, reg nx6:V, reg is_na:cls, reg r7:V, reg r8:V, reg c7:L, reg c10:L, reg c11:V, reg nx7:*, reg nx8:V, reg r9:V, reg c12:L, reg c13:V, reg c16:L, reg c17:V, reg c19:L, reg _grid_at:cls, reg nx9:*, reg nx10:V, reg p2:p(V +), reg par1:cls, reg r11:V, reg p3:p(V +), reg equilogs1:*, reg equilogs2:V, reg p4:p(V +), reg par2:cls, reg r14:V, reg p5:p(V +), reg par3:cls, reg r16:V, reg c20:L, reg r18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r19:V, reg p6:p(V +), reg nintLog1:*, reg nintLog2:V, reg c21:L, reg nintLog4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r21:V, reg p7:p(V +), reg r23:V, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg ny1:*, reg ny2:V, reg c22:V, reg c23:L, reg c24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg c28:L, reg r28:V, reg ny3:*, reg ny4:V, reg is_na1:cls, reg r29:V, reg r30:V, reg c29:L, reg c32:L, reg c33:V, reg ny5:*, reg ny6:V, reg r31:V, reg c34:L, reg c35:V, reg c38:L, reg c39:V, reg c41:L, reg _grid_at1:cls, reg ny7:*, reg ny8:V, reg p8:p(V +), reg par4:cls, reg r33:V, reg p9:p(V +), reg equilogs3:*, reg equilogs4:V, reg p10:p(V +), reg par5:cls, reg r36:V, reg p11:p(V +), reg par6:cls, reg r38:V, reg c42:L, reg r40:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r41:V, reg p12:p(V +), reg nintLog5:*, reg nintLog6:V, reg c43:L, reg nintLog8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg nintLog11:V, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg nintLog14:V, reg r46:V, reg nintLog15:*, reg nintLog16:V, reg length:cls, reg r47:V, reg min:cls, reg r48:V, reg __3:cls, reg r49:V, reg p13:p(V +), reg r51:V, reg r52:V, reg abline:cls, reg atx:*, reg atx1:V, reg p14:p(V +), reg aty:*, reg aty1:V, reg p15:p(V +), reg col1:*, reg col2:V, reg p16:p(V +), reg lty1:*, reg lty2:V, reg p17:p(V +), reg lwd1:*, reg lwd2:V, reg p18:p(V +), reg r58:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r59:V, reg r60:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r61:V, reg r62:V, reg atx2:*, reg atx3:V, reg aty2:*, reg aty3:V, reg list:cls, reg r63:V, reg invisible:cls, reg r64:V |
    mkenv;
    nx_isMissing = missing.0(nx);
    if nx_isMissing then L0(NULL) else L0(nx);
  L0(nx_orDefault):
    st nx = nx_orDefault;
    ny_isMissing = missing.0(ny);
    if ny_isMissing then L1() else L2(ny);
  L1():
    p = prom<V +>{
      nx1 = ld nx;
      nx2 = force? nx1;
      checkMissing(nx2);
      return nx2;
    };
    goto L2(p);
  L2(ny_orDefault):
    st ny = ny_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L3("lightgray") else L3(col);
  L3(col_orDefault):
    st col = col_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L4("dotted") else L4(lty);
  L4(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L5() else L6(lwd);
  L5():
    p1 = prom<V +>{
      par = ldf par;
      r1 = dyn par("lwd");
      return r1;
    };
    goto L6(p1);
  L6(lwd_orDefault):
    st lwd = lwd_orDefault;
    equilogs_isMissing = missing.0(equilogs);
    if equilogs_isMissing then L7(TRUE) else L7(equilogs);
  L7(equilogs_orDefault):
    st equilogs = equilogs_orDefault;
    nintLog_isMissing = missing.0(nintLog);
    if nintLog_isMissing then L8(NULL) else L8(nintLog);
  L8(nintLog_orDefault):
    st nintLog = nintLog_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L9(r4):
    c1 = `as.logical`(r4);
    if c1 then L10(c1) else L26();
  L23():
    nx3 = ld nx;
    check L25() else D0();
  L24():
    r3 = dyn base(<sym nx>);
    goto L9(r3);
  D0():
    deopt 1 [nx3];
  L10(c2):
    c19 = `as.logical`(c2);
    if c19 then L35() else L13();
  L25():
    nx4 = force? nx3;
    checkMissing(nx4);
    c = `==`(nx4, NULL);
    goto L9(c);
  L26():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L11(c6, r6):
    r8 = `!`(r6);
    c7 = `as.logical`(r8);
    if c7 then L31() else L12(c6, c7);
  L13():
    goto L14(NULL);
  L14(r24):
    st atx = r24;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L27():
    nx5 = ld nx;
    check L29() else D1();
  L28():
    r5 = dyn base1(<sym nx>);
    goto L11(c1, r5);
  L35():
    _grid_at = ldf `.grid.at`;
    check L36() else D4();
  D1():
    deopt 6 [c1, nx5];
  D4():
    deopt 18 [];
  L12(c10, c11):
    c16 = `as.logical`(c11);
    c17 = `||`(c10, c16);
    goto L10(c17);
  L15(r26):
    c23 = `as.logical`(r26);
    if c23 then L16(c23) else L42();
  L29():
    nx6 = force? nx5;
    checkMissing(nx6);
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(nx6);
    check L30() else D2();
  L31():
    nx7 = ld nx;
    check L32() else D3();
  L36():
    p2 = prom<V +>{
      nx9 = ld nx;
      nx10 = force? nx9;
      checkMissing(nx10);
      return nx10;
    };
    p3 = prom<V +>{
      par1 = ldf par;
      r11 = dyn par1("xlog");
      return r11;
    };
    p4 = prom<V +>{
      equilogs1 = ld equilogs;
      equilogs2 = force? equilogs1;
      checkMissing(equilogs2);
      return equilogs2;
    };
    p5 = prom<V +>{
      par2 = ldf par;
      r14 = dyn par2("xaxp");
      return r14;
    };
    p6 = prom<V +>{
      par3 = ldf par;
      r16 = dyn par3("usr");
      c20 = `is.object`(r16);
      if c20 then L1() else L2(r16);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r16);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r18):
      __ = ldf `[` in base;
      r19 = dyn __(r18, <int 1, 2>);
      goto L0(r19);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p7 = prom<V +>{
      nintLog1 = ld nintLog;
      nintLog2 = force? nintLog1;
      checkMissing(nintLog2);
      c21 = `is.object`(nintLog2);
      if c21 then L1() else L2(nintLog2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", nintLog2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(nintLog4):
      __1 = ldf `[` in base;
      r21 = dyn __1(nintLog4, 1.0);
      goto L0(r21);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r23 = dyn _grid_at[, , log, , axp, usr2, nintLog](1, p2, p3, p4, p5, p6, p7);
    check L37() else D5();
  L39():
    ny1 = ld ny;
    check L41() else D6();
  L40():
    r25 = dyn base2(<sym ny>);
    goto L15(r25);
  D2():
    deopt 9 [c1, r7];
  D3():
    deopt 11 [c6, c7, nx7];
  D5():
    deopt 30 [r23];
  D6():
    deopt 35 [ny1];
  L16(c24):
    c41 = `as.logical`(c24);
    if c41 then L51() else L19();
  L30():
    goto L11(c1, r7);
  L32():
    nx8 = force? nx7;
    checkMissing(nx8);
    r9 = `>=`(nx8, 1.0);
    c12 = `as.logical`(r9);
    c13 = `&&`(c7, c12);
    goto L12(c6, c13);
  L37():
    goto L14(r23);
  L41():
    ny2 = force? ny1;
    checkMissing(ny2);
    c22 = `==`(ny2, NULL);
    goto L15(c22);
  L42():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L17(c28, r28):
    r30 = `!`(r28);
    c29 = `as.logical`(r30);
    if c29 then L47() else L18(c28, c29);
  L19():
    goto L20(NULL);
  L20(r52):
    st aty = r52;
    abline = ldf abline;
    check L55() else D12();
  L43():
    ny3 = ld ny;
    check L45() else D7();
  L44():
    r27 = dyn base3(<sym ny>);
    goto L17(c23, r27);
  L51():
    _grid_at1 = ldf `.grid.at`;
    check L52() else D10();
  D7():
    deopt 40 [c23, ny3];
  D10():
    deopt 52 [];
  D12():
    deopt 69 [];
  L18(c32, c33):
    c38 = `as.logical`(c33);
    c39 = `||`(c32, c38);
    goto L16(c39);
  L45():
    ny4 = force? ny3;
    checkMissing(ny4);
    is_na1 = ldf `is.na` in base;
    r29 = dyn is_na1(ny4);
    check L46() else D8();
  L47():
    ny5 = ld ny;
    check L48() else D9();
  L52():
    p8 = prom<V +>{
      ny7 = ld ny;
      ny8 = force? ny7;
      checkMissing(ny8);
      return ny8;
    };
    p9 = prom<V +>{
      par4 = ldf par;
      r33 = dyn par4("ylog");
      return r33;
    };
    p10 = prom<V +>{
      equilogs3 = ld equilogs;
      equilogs4 = force? equilogs3;
      checkMissing(equilogs4);
      return equilogs4;
    };
    p11 = prom<V +>{
      par5 = ldf par;
      r36 = dyn par5("yaxp");
      return r36;
    };
    p12 = prom<V +>{
      par6 = ldf par;
      r38 = dyn par6("usr");
      c42 = `is.object`(r38);
      if c42 then L1() else L2(r38);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", r38);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(r40):
      __2 = ldf `[` in base;
      r41 = dyn __2(r40, <int 3, 4>);
      goto L0(r41);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p13 = prom<V +>{
      nintLog5 = ld nintLog;
      nintLog6 = force? nintLog5;
      checkMissing(nintLog6);
      c43 = `is.object`(nintLog6);
      if c43 then L3() else L4(nintLog6);
    L0(dx7):
      return dx7;
    L3():
      dr6 = tryDispatchBuiltin.1("[", nintLog6);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L5() else L4(dr6);
    L4(nintLog8):
      sym4 = ldf min;
      base4 = ldf min in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L6() else L7();
    L1(nintLog11, r44):
      __3 = ldf `[` in base;
      r49 = dyn __3(nintLog11, r44);
      goto L0(r49);
    L5():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L6():
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L8() else L9();
    L7():
      r43 = dyn base4(2, <lang length(nintLog)>);
      goto L1(nintLog8, r43);
    L2(nintLog14, r46):
      min = ldf min in base;
      r48 = dyn min(2, r46);
      goto L1(nintLog14, r48);
    L8():
      nintLog15 = ld nintLog;
      nintLog16 = force? nintLog15;
      checkMissing(nintLog16);
      length = ldf length in base;
      r47 = dyn length(nintLog16);
      goto L2(nintLog8, r47);
    L9():
      r45 = dyn base5(<sym nintLog>);
      goto L2(nintLog8, r45);
    };
    r51 = dyn _grid_at1[, , log, , axp, usr2, nintLog](2, p8, p9, p10, p11, p12, p13);
    check L53() else D11();
  L55():
    p14 = prom<V +>{
      atx = ld atx;
      atx1 = force? atx;
      checkMissing(atx1);
      return atx1;
    };
    p15 = prom<V +>{
      aty = ld aty;
      aty1 = force? aty;
      checkMissing(aty1);
      return aty1;
    };
    p16 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p17 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p18 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    r58 = dyn abline[v, h, col, lty, lwd](p14, p15, p16, p17, p18);
    check L56() else D13();
  D8():
    deopt 43 [c23, r29];
  D9():
    deopt 45 [c28, c29, ny5];
  D11():
    deopt 64 [r51];
  D13():
    deopt 80 [r58];
  L46():
    goto L17(c23, r29);
  L48():
    ny6 = force? ny5;
    checkMissing(ny6);
    r31 = `>=`(ny6, 1.0);
    c34 = `as.logical`(r31);
    c35 = `&&`(c29, c34);
    goto L18(c28, c35);
  L53():
    goto L20(r51);
  L56():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L57() else L58();
  L21(r60):
    popenv;
    return r60;
  L57():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L59() else L60();
  L58():
    r59 = dyn base6(<lang list(atx=atx, aty=aty)>);
    goto L21(r59);
  L22(r62):
    invisible = ldf invisible in base;
    r64 = dyn invisible(r62);
    check L64() else D17();
  L59():
    atx2 = ld atx;
    check L61() else D14();
  L60():
    r61 = dyn base7[atx, aty](<sym atx>, <sym aty>);
    goto L22(r61);
  D14():
    deopt 85 [atx2];
  D17():
    deopt 94 [r64];
  L61():
    atx3 = force? atx2;
    checkMissing(atx3);
    aty2 = ld aty;
    check L62() else D15();
  L64():
    goto L21(r64);
  D15():
    deopt 88 [aty2];
  L62():
    aty3 = force? aty2;
    checkMissing(aty3);
    list = ldf list in base;
    r63 = dyn list(atx3, aty3);
    check L63() else D16();
  D16():
    deopt 92 [r63];
  L63():
    goto L22(r63);
  }
}