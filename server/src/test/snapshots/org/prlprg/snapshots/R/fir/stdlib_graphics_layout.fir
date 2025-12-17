fun main() {
  () -+> V { reg r:cls, reg par:cls, reg r1:V, reg layout:cls, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg layout_show:cls, reg r9:V, reg layout1:cls, reg matrix1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg r16:V, reg layout_show1:cls, reg nf:*, reg nf1:V, reg p4:p(V +), reg r18:V, reg layout2:cls, reg matrix2:cls, reg r19:V, reg p5:p(V +), reg lcm:cls, reg r21:V, reg p6:p(V +), reg lcm1:cls, reg r23:V, reg p7:p(V +), reg r25:V, reg layout_show2:cls, reg nf2:*, reg nf3:V, reg p8:p(V +), reg r27:V, reg pmin:cls, reg pmax:cls, reg p9:p(V +), reg __:cls, reg r29:V, reg r30:cls, reg r31:V, reg p10:p(V +), reg r33:V, reg p11:p(V +), reg r35:V, reg pmin1:cls, reg pmax1:cls, reg p12:p(V +), reg __1:cls, reg r37:V, reg r38:cls, reg r39:V, reg p13:p(V +), reg r41:V, reg p14:p(V +), reg r43:V, reg hist:cls, reg x:*, reg x1:V, reg p15:p(V +), reg seq:cls, reg p16:p(V +), reg r46:V, reg p17:p(V +), reg r48:V, reg hist1:cls, reg y:*, reg y1:V, reg p18:p(V +), reg seq1:cls, reg p19:p(V +), reg r51:V, reg p20:p(V +), reg r53:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r54:V, reg r55:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r56:V, reg r57:V, reg xhist:*, reg xhist1:V, reg c2:L, reg xhist3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r58:V, reg yhist:*, reg yhist1:V, reg c3:L, reg yhist3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r59:V, reg c4:cls, reg r60:V, reg max:cls, reg r61:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r62:V, reg r63:V, reg c5:cls, reg r64:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r65:V, reg r66:V, reg c6:cls, reg r67:V, reg layout3:cls, reg matrix3:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r68:V, reg r69:V, reg c7:cls, reg r70:V, reg p21:p(V +), reg r72:V, reg p22:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r74:V, reg r75:V, reg c8:cls, reg r76:V, reg p23:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r78:V, reg r79:V, reg c9:cls, reg r80:V, reg p24:p(V +), reg r82:V, reg layout_show3:cls, reg nf4:*, reg nf5:V, reg p25:p(V +), reg r84:V, reg par1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r85:V, reg r86:V, reg c10:cls, reg r87:V, reg p26:p(V +), reg r89:V, reg plot:cls, reg x2:*, reg x3:V, reg p27:p(V +), reg y2:*, reg y3:V, reg p28:p(V +), reg xrange:*, reg xrange1:V, reg p29:p(V +), reg yrange:*, reg yrange1:V, reg p30:p(V +), reg r94:V, reg par2:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r95:V, reg r96:V, reg c11:cls, reg r97:V, reg p31:p(V +), reg r99:V, reg barplot:cls, reg xhist4:*, reg xhist5:V, reg c12:L, reg xhist7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r100:V, reg p32:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r102:V, reg r103:V, reg top:*, reg top1:V, reg c13:cls, reg r104:V, reg p33:p(V +), reg r106:V, reg par3:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r107:V, reg r108:V, reg c14:cls, reg r109:V, reg p34:p(V +), reg r111:V, reg barplot1:cls, reg yhist4:*, reg yhist5:V, reg c15:L, reg yhist7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r112:V, reg p35:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r114:V, reg r115:V, reg top2:*, reg top3:V, reg c16:cls, reg r116:V, reg p36:p(V +), reg r118:V, reg par4:cls, reg def_par:*, reg def_par1:V, reg p37:p(V +), reg r120:V |
    mkenv;
    r = clos inner1474055075;
    st layout = r;
    par = ldf par;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    r1 = dyn par[`no.readonly`](TRUE);
    check L5() else D1();
  D1():
    deopt 7 [r1];
  L5():
    st `def.par` = r1;
    layout = ldf layout;
    check L6() else D2();
  D2():
    deopt 10 [];
  L6():
    p1 = prom<V +>{
      matrix = ldf matrix;
      p = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r3):
        return r3;
      L1():
        c = ldf c in base;
        r4 = dyn c(1.0, 1.0, 0.0, 2.0);
        goto L0(r4);
      L2():
        r2 = dyn base(1.0, 1.0, 0.0, 2.0);
        goto L0(r2);
      };
      r6 = dyn matrix[, , , byrow](p, 2.0, 2.0, TRUE);
      return r6;
    };
    r8 = dyn layout(p1);
    check L7() else D3();
  D3():
    deopt 12 [r8];
  L7():
    layout_show = ldf `layout.show`;
    check L8() else D4();
  D4():
    deopt 14 [];
  L8():
    r9 = dyn layout_show(2.0);
    check L9() else D5();
  D5():
    deopt 16 [r9];
  L9():
    layout1 = ldf layout;
    check L10() else D6();
  D6():
    deopt 18 [];
  L10():
    p3 = prom<V +>{
      matrix1 = ldf matrix;
      p2 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r11):
        return r11;
      L1():
        c1 = ldf c in base;
        r12 = dyn c1(1.0, 1.0, 0.0, 2.0);
        goto L0(r12);
      L2():
        r10 = dyn base1(1.0, 1.0, 0.0, 2.0);
        goto L0(r10);
      };
      r14 = dyn matrix1[, , , byrow](p2, 2.0, 2.0, TRUE);
      return r14;
    };
    r16 = dyn layout1[, respect](p3, TRUE);
    check L11() else D7();
  D7():
    deopt 22 [r16];
  L11():
    st nf = r16;
    layout_show1 = ldf `layout.show`;
    check L12() else D8();
  D8():
    deopt 25 [];
  L12():
    p4 = prom<V +>{
      nf = ld nf;
      nf1 = force? nf;
      checkMissing(nf1);
      return nf1;
    };
    r18 = dyn layout_show1(p4);
    check L13() else D9();
  D9():
    deopt 27 [r18];
  L13():
    layout2 = ldf layout;
    check L14() else D10();
  D10():
    deopt 29 [];
  L14():
    p5 = prom<V +>{
      matrix2 = ldf matrix;
      r19 = dyn matrix2(1.0);
      return r19;
    };
    p6 = prom<V +>{
      lcm = ldf lcm;
      r21 = dyn lcm(5.0);
      return r21;
    };
    p7 = prom<V +>{
      lcm1 = ldf lcm;
      r23 = dyn lcm1(5.0);
      return r23;
    };
    r25 = dyn layout2[, widths, heights](p5, p6, p7);
    check L15() else D11();
  D11():
    deopt 35 [r25];
  L15():
    st nf = r25;
    layout_show2 = ldf `layout.show`;
    check L16() else D12();
  D12():
    deopt 38 [];
  L16():
    p8 = prom<V +>{
      nf2 = ld nf;
      nf3 = force? nf2;
      checkMissing(nf3);
      return nf3;
    };
    r27 = dyn layout_show2(p8);
    check L17() else D13();
  D13():
    deopt 40 [r27];
  L17():
    pmin = ldf pmin;
    check L18() else D14();
  D14():
    deopt 42 [];
  L18():
    p11 = prom<V +>{
      pmax = ldf pmax;
      p9 = prom<V +>{
        return -3.0;
      };
      p10 = prom<V +>{
        __ = ldf `::`;
        r29 = dyn __("stats", "rnorm");
        checkFun.0(r29);
        r30 = r29 as cls;
        r31 = dyn r30(50.0);
        return r31;
      };
      r33 = dyn pmax(p9, p10);
      return r33;
    };
    r35 = dyn pmin(3.0, p11);
    check L19() else D15();
  D15():
    deopt 45 [r35];
  L19():
    st x = r35;
    pmin1 = ldf pmin;
    check L20() else D16();
  D16():
    deopt 48 [];
  L20():
    p14 = prom<V +>{
      pmax1 = ldf pmax;
      p12 = prom<V +>{
        return -3.0;
      };
      p13 = prom<V +>{
        __1 = ldf `::`;
        r37 = dyn __1("stats", "rnorm");
        checkFun.0(r37);
        r38 = r37 as cls;
        r39 = dyn r38(50.0);
        return r39;
      };
      r41 = dyn pmax1(p12, p13);
      return r41;
    };
    r43 = dyn pmin1(3.0, p14);
    check L21() else D17();
  D17():
    deopt 51 [r43];
  L21():
    st y = r43;
    hist = ldf hist;
    check L22() else D18();
  D18():
    deopt 54 [];
  L22():
    p15 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p17 = prom<V +>{
      seq = ldf seq;
      p16 = prom<V +>{
        return -3.0;
      };
      r46 = dyn seq(p16, 3.0, 0.5);
      return r46;
    };
    r48 = dyn hist[, breaks, plot](p15, p17, FALSE);
    check L23() else D19();
  D19():
    deopt 60 [r48];
  L23():
    st xhist = r48;
    hist1 = ldf hist;
    check L24() else D20();
  D20():
    deopt 63 [];
  L24():
    p18 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p20 = prom<V +>{
      seq1 = ldf seq;
      p19 = prom<V +>{
        return -3.0;
      };
      r51 = dyn seq1(p19, 3.0, 0.5);
      return r51;
    };
    r53 = dyn hist1[, breaks, plot](p18, p20, FALSE);
    check L25() else D21();
  D21():
    deopt 69 [r53];
  L25():
    st yhist = r53;
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L0(r55):
    st top = r55;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L26():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L27():
    r54 = dyn base2(<lang c(`$`(xhist, counts), `$`(yhist, counts))>);
    goto L0(r54);
  L1(r57):
    max = ldf max in base;
    r61 = dyn max(r57);
    check L41() else D25();
  L2(r63):
    st xrange = r63;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L45() else L46();
  L28():
    xhist = ld xhist;
    check L30() else D22();
  L29():
    r56 = dyn base3(<lang `$`(xhist, counts)>, <lang `$`(yhist, counts)>);
    goto L1(r56);
  L42():
    c5 = ldf c in base;
    r64 = dyn c5(-3.0, 3.0);
    check L44() else D26();
  L43():
    r62 = dyn base4(<lang `-`(3.0)>, 3.0);
    goto L2(r62);
  D22():
    deopt 75 [xhist];
  D25():
    deopt 84 [r61];
  D26():
    deopt 92 [r64];
  L3(r66):
    st yrange = r66;
    layout3 = ldf layout;
    check L48() else D28();
  L30():
    xhist1 = force? xhist;
    checkMissing(xhist1);
    c2 = `is.object`(xhist1);
    if c2 then L32() else L33(xhist1);
  L41():
    goto L0(r61);
  L44():
    goto L2(r64);
  L45():
    c6 = ldf c in base;
    r67 = dyn c6(-3.0, 3.0);
    check L47() else D27();
  L46():
    r65 = dyn base5(<lang `-`(3.0)>, 3.0);
    goto L3(r65);
  D27():
    deopt 100 [r67];
  D28():
    deopt 103 [];
  L31(dx1):
    yhist = ld yhist;
    check L35() else D23();
  L32():
    dr = tryDispatchBuiltin.1("$", xhist1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(xhist3):
    r58 = `$`(xhist3, <sym counts>);
    goto L31(r58);
  L47():
    goto L3(r67);
  L48():
    p22 = prom<V +>{
      matrix3 = ldf matrix;
      p21 = prom<V +>{
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r69):
        return r69;
      L1():
        c7 = ldf c in base;
        r70 = dyn c7(2.0, 0.0, 1.0, 3.0);
        goto L0(r70);
      L2():
        r68 = dyn base6(2.0, 0.0, 1.0, 3.0);
        goto L0(r68);
      };
      r72 = dyn matrix3[, , , byrow](p21, 2.0, 2.0, TRUE);
      return r72;
    };
    p23 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      c8 = ldf c in base;
      r76 = dyn c8(3.0, 1.0);
      goto L0(r76);
    L2():
      r74 = dyn base7(3.0, 1.0);
      goto L0(r74);
    };
    p24 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r79):
      return r79;
    L1():
      c9 = ldf c in base;
      r80 = dyn c9(1.0, 3.0);
      goto L0(r80);
    L2():
      r78 = dyn base8(1.0, 3.0);
      goto L0(r78);
    };
    r82 = dyn layout3(p22, p23, p24, TRUE);
    check L49() else D29();
  D23():
    deopt 78 [yhist];
  D29():
    deopt 108 [r82];
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L31(dx);
  L35():
    yhist1 = force? yhist;
    checkMissing(yhist1);
    c3 = `is.object`(yhist1);
    if c3 then L37() else L38(yhist1);
  L49():
    st nf = r82;
    layout_show3 = ldf `layout.show`;
    check L50() else D30();
  D30():
    deopt 111 [];
  L36(dx3):
    c4 = ldf c in base;
    r60 = dyn c4(dx1, dx3);
    check L40() else D24();
  L37():
    dr2 = tryDispatchBuiltin.1("$", yhist1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(dr2);
  L38(yhist3):
    r59 = `$`(yhist3, <sym counts>);
    goto L36(r59);
  L50():
    p25 = prom<V +>{
      nf4 = ld nf;
      nf5 = force? nf4;
      checkMissing(nf5);
      return nf5;
    };
    r84 = dyn layout_show3(p25);
    check L51() else D31();
  D24():
    deopt 82 [r60];
  D31():
    deopt 113 [r84];
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L36(dx2);
  L40():
    goto L1(r60);
  L51():
    par1 = ldf par;
    check L52() else D32();
  D32():
    deopt 115 [];
  L52():
    p26 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r86):
      return r86;
    L1():
      c10 = ldf c in base;
      r87 = dyn c10(3.0, 3.0, 1.0, 1.0);
      goto L0(r87);
    L2():
      r85 = dyn base9(3.0, 3.0, 1.0, 1.0);
      goto L0(r85);
    };
    r89 = dyn par1[mar](p26);
    check L53() else D33();
  D33():
    deopt 118 [r89];
  L53():
    plot = ldf plot;
    check L54() else D34();
  D34():
    deopt 120 [];
  L54():
    p27 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p28 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p29 = prom<V +>{
      xrange = ld xrange;
      xrange1 = force? xrange;
      checkMissing(xrange1);
      return xrange1;
    };
    p30 = prom<V +>{
      yrange = ld yrange;
      yrange1 = force? yrange;
      checkMissing(yrange1);
      return yrange1;
    };
    r94 = dyn plot[, , xlim, ylim, xlab, ylab](p27, p28, p29, p30, "", "");
    check L55() else D35();
  D35():
    deopt 131 [r94];
  L55():
    par2 = ldf par;
    check L56() else D36();
  D36():
    deopt 133 [];
  L56():
    p31 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r96):
      return r96;
    L1():
      c11 = ldf c in base;
      r97 = dyn c11(0.0, 3.0, 1.0, 1.0);
      goto L0(r97);
    L2():
      r95 = dyn base10(0.0, 3.0, 1.0, 1.0);
      goto L0(r95);
    };
    r99 = dyn par2[mar](p31);
    check L57() else D37();
  D37():
    deopt 136 [r99];
  L57():
    barplot = ldf barplot;
    check L58() else D38();
  D38():
    deopt 138 [];
  L58():
    p32 = prom<V +>{
      xhist4 = ld xhist;
      xhist5 = force? xhist4;
      checkMissing(xhist5);
      c12 = `is.object`(xhist5);
      if c12 then L1() else L2(xhist5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", xhist5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(xhist7):
      r100 = `$`(xhist7, <sym counts>);
      goto L0(r100);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p33 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r103):
      return r103;
    L1():
      top = ld top;
      top1 = force? top;
      checkMissing(top1);
      c13 = ldf c in base;
      r104 = dyn c13(0.0, top1);
      goto L0(r104);
    L2():
      r102 = dyn base11(0.0, <sym top>);
      goto L0(r102);
    };
    r106 = dyn barplot[, axes, ylim, space](p32, FALSE, p33, 0.0);
    check L59() else D39();
  D39():
    deopt 146 [r106];
  L59():
    par3 = ldf par;
    check L60() else D40();
  D40():
    deopt 148 [];
  L60():
    p34 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r108):
      return r108;
    L1():
      c14 = ldf c in base;
      r109 = dyn c14(3.0, 0.0, 1.0, 1.0);
      goto L0(r109);
    L2():
      r107 = dyn base12(3.0, 0.0, 1.0, 1.0);
      goto L0(r107);
    };
    r111 = dyn par3[mar](p34);
    check L61() else D41();
  D41():
    deopt 151 [r111];
  L61():
    barplot1 = ldf barplot;
    check L62() else D42();
  D42():
    deopt 153 [];
  L62():
    p35 = prom<V +>{
      yhist4 = ld yhist;
      yhist5 = force? yhist4;
      checkMissing(yhist5);
      c15 = `is.object`(yhist5);
      if c15 then L1() else L2(yhist5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", yhist5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(yhist7):
      r112 = `$`(yhist7, <sym counts>);
      goto L0(r112);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p36 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r115):
      return r115;
    L1():
      top2 = ld top;
      top3 = force? top2;
      checkMissing(top3);
      c16 = ldf c in base;
      r116 = dyn c16(0.0, top3);
      goto L0(r116);
    L2():
      r114 = dyn base13(0.0, <sym top>);
      goto L0(r114);
    };
    r118 = dyn barplot1[, axes, xlim, space, horiz](p35, FALSE, p36, 0.0, TRUE);
    check L63() else D43();
  D43():
    deopt 163 [r118];
  L63():
    par4 = ldf par;
    check L64() else D44();
  D44():
    deopt 165 [];
  L64():
    p37 = prom<V +>{
      def_par = ld `def.par`;
      def_par1 = force? def_par;
      checkMissing(def_par1);
      return def_par1;
    };
    r120 = dyn par4(p37);
    check L65() else D45();
  D45():
    deopt 167 [r120];
  L65():
    popenv;
    return r120;
  }
}
fun inner1474055075(mat, widths, heights, respect) {
  (reg mat:*, reg widths:*, reg heights:*, reg respect:*) -+> V { var mat:*, var widths:*, reg widths_isMissing:L, reg widths_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ncol:cls, reg mat1:*, reg mat2:V, reg p:p(V +), reg r3:V, reg rep_int:cls, reg r4:V, reg p1:p(V +), var heights:*, reg heights_isMissing:L, reg heights_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg nrow:cls, reg mat3:*, reg mat4:V, reg p2:p(V +), reg r9:V, reg rep_int1:cls, reg r10:V, reg p3:p(V +), var respect:*, reg respect_isMissing:L, reg respect_orDefault:*, reg l:*, reg storage_mode__:cls, reg r12:V, reg as_matrix:cls, reg mat5:*, reg mat6:V, reg p4:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg respect1:*, reg respect2:V, reg c:L, reg r17:V, reg c1:L, reg as_matrix1:cls, reg respect3:*, reg respect4:V, reg p5:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg respect5:*, reg respect6:V, reg is_matrix:cls, reg r22:V, reg r23:V, reg c2:L, reg c3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg c7:L, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg c10:L, reg r27:V, reg respect7:*, reg respect8:V, reg dim:cls, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg c13:L, reg r32:V, reg r33:V, reg mat7:*, reg mat8:V, reg dim1:cls, reg r34:V, reg r35:V, reg any:cls, reg r36:V, reg c14:L, reg c15:V, reg c17:L, reg stop:cls, reg r37:V, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg r41:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r42:V, reg r43:V, reg mat9:*, reg mat10:V, reg max:cls, reg r44:V, reg as_integer:cls, reg r45:V, reg num_figures:*, reg num_figures1:V, reg r46:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c18:L, reg x:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg i7:I, reg r48:V, reg i8:*, reg i9:V, reg mat11:*, reg mat12:V, reg match:cls, reg r49:V, reg r50:V, reg c19:L, reg stop1:cls, reg gettextf:cls, reg num_figures2:*, reg num_figures3:V, reg p6:p(V +), reg r52:V, reg p7:p(V +), reg r54:V, reg i12:I, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg mat13:*, reg mat14:V, reg dim2:cls, reg r58:V, reg dm:*, reg dm1:V, reg c20:L, reg dm3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r59:V, reg dm4:*, reg dm5:V, reg c21:L, reg dm7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r60:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r61:V, reg r62:V, reg widths1:*, reg widths2:V, reg c22:L, reg c23:L, reg grep:cls, reg widths3:*, reg widths4:V, reg p8:p(V +), reg r64:V, reg r65:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r66:V, reg r67:V, reg heights1:*, reg heights2:V, reg c24:L, reg c25:L, reg grep1:cls, reg heights3:*, reg heights4:V, reg p9:p(V +), reg r69:V, reg r70:V, reg r71:cls, reg pad1_rm_cm:cls, reg widths5:*, reg widths6:V, reg p10:p(V +), reg cm_widths:*, reg cm_widths1:V, reg p11:p(V +), reg num_cols:*, reg num_cols1:V, reg p12:p(V +), reg r75:V, reg pad1_rm_cm1:cls, reg heights5:*, reg heights6:V, reg p13:p(V +), reg cm_heights:*, reg cm_heights1:V, reg p14:p(V +), reg num_rows:*, reg num_rows1:V, reg p15:p(V +), reg r79:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r80:V, reg r81:V, reg respect9:*, reg respect10:V, reg is_matrix1:cls, reg r82:V, reg c26:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r83:V, reg r84:V, reg respect11:*, reg respect12:V, reg as_integer1:cls, reg r85:V, reg matrix:cls, reg num_rows2:*, reg num_rows3:V, reg p16:p(V +), reg num_cols2:*, reg num_cols3:V, reg p17:p(V +), reg r89:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r90:V, reg C_layout:*, reg C_layout1:V, reg num_rows4:*, reg num_rows5:V, reg num_cols4:*, reg num_cols5:V, reg mat15:*, reg mat16:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r92:V, reg r93:V, reg num_figures4:*, reg num_figures5:V, reg as_integer2:cls, reg r94:V, reg widths7:*, reg widths8:V, reg heights7:*, reg heights8:V, reg cm_widths2:*, reg cm_widths3:V, reg cm_heights2:*, reg cm_heights3:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r95:V, reg r96:V, reg respect13:*, reg respect14:V, reg as_integer3:cls, reg r97:V, reg respect_mat:*, reg respect_mat1:V, reg _External_graphics:cls, reg r98:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r99:V, reg r100:V, reg num_figures6:*, reg num_figures7:V, reg invisible:cls, reg r101:V |
    mkenv;
    st mat = mat;
    widths_isMissing = missing.0(widths);
    if widths_isMissing then L0() else L1(widths);
  L0():
    p1 = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      ncol = ldf ncol;
      p = prom<V +>{
        mat1 = ld mat;
        mat2 = force? mat1;
        checkMissing(mat2);
        return mat2;
      };
      r3 = dyn ncol(p);
      rep_int = ldf `rep.int` in base;
      r4 = dyn rep_int(1.0, r3);
      goto L0(r4);
    L2():
      r = dyn base(1.0, <lang ncol(mat)>);
      goto L0(r);
    };
    goto L1(p1);
  L1(widths_orDefault):
    st widths = widths_orDefault;
    heights_isMissing = missing.0(heights);
    if heights_isMissing then L2() else L3(heights);
  L2():
    p3 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      nrow = ldf nrow;
      p2 = prom<V +>{
        mat3 = ld mat;
        mat4 = force? mat3;
        checkMissing(mat4);
        return mat4;
      };
      r9 = dyn nrow(p2);
      rep_int1 = ldf `rep.int` in base;
      r10 = dyn rep_int1(1.0, r9);
      goto L0(r10);
    L2():
      r6 = dyn base1(1.0, <lang nrow(mat)>);
      goto L0(r6);
    };
    goto L3(p3);
  L3(heights_orDefault):
    st heights = heights_orDefault;
    respect_isMissing = missing.0(respect);
    if respect_isMissing then L4(FALSE) else L4(respect);
  L4(respect_orDefault):
    st respect = respect_orDefault;
    l = ld mat;
    storage_mode__ = ldf `storage.mode<-`;
    check L39() else D0();
  D0():
    deopt 3 ["integer", l, "integer"];
  L39():
    r12 = dyn storage_mode__(l, NULL, "integer");
    check L40() else D1();
  D1():
    deopt 5 ["integer", r12];
  L40():
    st mat = r12;
    as_matrix = ldf `as.matrix`;
    check L41() else D2();
  D2():
    deopt 8 [];
  L41():
    p4 = prom<V +>{
      mat5 = ld mat;
      mat6 = force? mat5;
      checkMissing(mat6);
      return mat6;
    };
    r14 = dyn as_matrix(p4);
    check L42() else D3();
  D3():
    deopt 10 [r14];
  L42():
    st mat = r14;
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L5(r16):
    r17 = `!`(r16);
    c1 = `as.logical`(r17);
    if c1 then L46() else L6();
  L43():
    respect1 = ld respect;
    check L45() else D4();
  L44():
    r15 = dyn base2(<sym respect>);
    goto L5(r15);
  D4():
    deopt 13 [respect1];
  L6():
    goto L14();
  L14():
    sym7 = ldf `as.integer`;
    base7 = ldf `as.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  L45():
    respect2 = force? respect1;
    checkMissing(respect2);
    c = `is.logical`(respect2);
    goto L5(c);
  L46():
    as_matrix1 = ldf `as.matrix`;
    check L47() else D5();
  D5():
    deopt 18 [];
  L15(r41):
    st `num.figures` = r41;
    num_figures = ld `num.figures`;
    check L78() else D19();
  L47():
    p5 = prom<V +>{
      respect3 = ld respect;
      respect4 = force? respect3;
      checkMissing(respect4);
      return respect4;
    };
    r19 = dyn as_matrix1(p5);
    check L48() else D6();
  L71():
    sym8 = ldf max;
    base8 = ldf max in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  L72():
    r40 = dyn base7(<lang max(mat)>);
    goto L15(r40);
  D6():
    deopt 20 [r19];
  D19():
    deopt 66 [1, num_figures];
  L16(r43):
    as_integer = ldf `as.integer` in base;
    r45 = dyn as_integer(r43);
    check L77() else D18();
  L48():
    st respect = r19;
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L73():
    mat9 = ld mat;
    check L75() else D16();
  L74():
    r42 = dyn base8(<sym mat>);
    goto L16(r42);
  L78():
    num_figures1 = force? num_figures;
    checkMissing(num_figures1);
    r46 = `:`(1, num_figures1);
    s = toForSeq(r46);
    l1 = length(s);
    i = 0;
    goto L17(i);
  D16():
    deopt 58 [mat9];
  D18():
    deopt 63 [r45];
  L7(r21):
    r23 = `!`(r21);
    c2 = `as.logical`(r23);
    if c2 then L8(c2) else L53();
  L17(i1):
    i2 = `+`.1(i1, 1);
    c18 = `<`.1(l1, i2);
    if c18 then L79() else L21();
  L49():
    respect5 = ld respect;
    check L51() else D7();
  L50():
    r20 = dyn base3(<sym respect>);
    goto L7(r20);
  L75():
    mat10 = force? mat9;
    checkMissing(mat10);
    max = ldf max in base;
    r44 = dyn max(mat10);
    check L76() else D17();
  L77():
    goto L15(r45);
  D7():
    deopt 24 [respect5];
  D17():
    deopt 61 [r44];
  L8(c3):
    c17 = `as.logical`(c3);
    if c17 then L66() else L12();
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L80() else L81();
  L51():
    respect6 = force? respect5;
    checkMissing(respect6);
    is_matrix = ldf `is.matrix` in base;
    r22 = dyn is_matrix(respect6);
    check L52() else D8();
  L53():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L76():
    goto L16(r44);
  L79():
    sym10 = ldf dim;
    base10 = ldf dim in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L89() else L90();
  D8():
    deopt 27 [r22];
  L9(c7, r25):
    c14 = `as.logical`(r25);
    c15 = `||`(c7, c14);
    goto L8(c15);
  L12():
    goto L13(NULL);
  L13(r38):
    goto L14();
  L18(i7, r48):
    r50 = `==`(r48, 0);
    c19 = `as.logical`(r50);
    if c19 then L85() else L19();
  L22(r57):
    st dm = r57;
    dm = ld dm;
    check L93() else D27();
  L52():
    goto L7(r22);
  L54():
    sym5 = ldf dim;
    base5 = ldf dim in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L55():
    r24 = dyn base4(<lang `!=`(dim(respect), dim(mat))>);
    goto L9(c2, r24);
  L66():
    stop = ldf stop;
    check L67() else D14();
  L80():
    i8 = ld i;
    check L82() else D20();
  L81():
    r47 = dyn base9[, , nomatch](<sym i>, <sym mat>, 0);
    goto L18(i2, r47);
  L89():
    mat13 = ld mat;
    check L91() else D25();
  L90():
    r56 = dyn base10(<sym mat>);
    goto L22(r56);
  D14():
    deopt 47 [];
  D20():
    deopt 71 [i2, i8];
  D25():
    deopt 94 [mat13];
  D27():
    deopt 99 [dm];
  L10(c10, r27):
    sym6 = ldf dim;
    base6 = ldf dim in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L60() else L61();
  L19():
    goto L20(i7);
  L20(i12):
    goto L17(i12);
  L56():
    respect7 = ld respect;
    check L58() else D9();
  L57():
    r26 = dyn base5(<sym respect>);
    goto L10(c2, r26);
  L67():
    r37 = dyn stop("'respect' must be logical or matrix with same dimension as 'mat'");
    check L68() else D15();
  L82():
    i9 = force? i8;
    checkMissing(i9);
    mat11 = ld mat;
    check L83() else D21();
  L85():
    stop1 = ldf stop;
    check L86() else D23();
  L91():
    mat14 = force? mat13;
    checkMissing(mat14);
    dim2 = ldf dim in base;
    r58 = dyn dim2(mat14);
    check L92() else D26();
  L93():
    dm1 = force? dm;
    checkMissing(dm1);
    c20 = `is.object`(dm1);
    if c20 then L94() else L95(dm1);
  D9():
    deopt 33 [c2, respect7];
  D15():
    deopt 49 [r37];
  D21():
    deopt 73 [i2, mat11];
  D23():
    deopt 82 [i7];
  D26():
    deopt 97 [r58];
  L11(c13, r32, r33):
    r35 = `!=`(r32, r33);
    any = ldf any in base;
    r36 = dyn any(r35);
    check L64() else D13();
  L23(dx1):
    st `num.rows` = dx1;
    dm4 = ld dm;
    check L97() else D28();
  L58():
    respect8 = force? respect7;
    checkMissing(respect8);
    dim = ldf dim in base;
    r28 = dyn dim(respect8);
    check L59() else D10();
  L60():
    mat7 = ld mat;
    check L62() else D11();
  L61():
    r31 = dyn base6(<sym mat>);
    goto L11(c10, r27, r31);
  L68():
    goto L13(r37);
  L83():
    mat12 = force? mat11;
    checkMissing(mat12);
    match = ldf match in base;
    r49 = dyn match(i9, mat12, 0, NULL);
    check L84() else D22();
  L86():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        num_figures2 = ld `num.figures`;
        num_figures3 = force? num_figures2;
        checkMissing(num_figures3);
        return num_figures3;
      };
      r52 = dyn gettextf("layout matrix must contain at least one reference\nto each of the values {1 ... %d}\n", p6);
      return r52;
    };
    r54 = dyn stop1[, domain](p7, NA_LGL);
    check L87() else D24();
  L92():
    goto L22(r58);
  L94():
    dr = tryDispatchBuiltin.1("[", dm1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L96() else L95(dr);
  L95(dm3):
    __ = ldf `[` in base;
    r59 = dyn __(dm3, 1);
    goto L23(r59);
  D10():
    deopt 36 [c2, r28];
  D11():
    deopt 38 [c10, r27, mat7];
  D13():
    deopt 44 [c13, r36];
  D22():
    deopt 78 [i2, r49];
  D24():
    deopt 86 [i7, r54];
  D28():
    deopt 105 [dm4];
  L59():
    goto L10(c2, r28);
  L62():
    mat8 = force? mat7;
    checkMissing(mat8);
    dim1 = ldf dim in base;
    r34 = dyn dim1(mat8);
    check L63() else D12();
  L64():
    goto L9(c13, r36);
  L84():
    goto L18(i2, r49);
  L87():
    goto L20(i7);
  L96():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L97():
    dm5 = force? dm4;
    checkMissing(dm5);
    c21 = `is.object`(dm5);
    if c21 then L98() else L99(dm5);
  D12():
    deopt 41 [c10, r27, r34];
  L24(dx3):
    st `num.cols` = dx3;
    sym11 = ldf `is.character`;
    base11 = ldf `is.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L101() else L102();
  L63():
    goto L11(c10, r27, r34);
  L98():
    dr2 = tryDispatchBuiltin.1("[", dm5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L100() else L99(dr2);
  L99(dm7):
    __1 = ldf `[` in base;
    r60 = dyn __1(dm7, 2);
    goto L24(r60);
  L25(r62):
    c23 = `as.logical`(r62);
    if c23 then L104() else L26();
  L100():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L101():
    widths1 = ld widths;
    check L103() else D29();
  L102():
    r61 = dyn base11(<sym widths>);
    goto L25(r61);
  D29():
    deopt 112 [widths1];
  L26():
    goto L27(NULL);
  L27(r65):
    st `cm.widths` = r65;
    sym12 = ldf `is.character`;
    base12 = ldf `is.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L108() else L109();
  L103():
    widths2 = force? widths1;
    checkMissing(widths2);
    c22 = `is.character`(widths2);
    goto L25(c22);
  L104():
    grep = ldf grep;
    check L105() else D30();
  D30():
    deopt 116 [];
  L28(r67):
    c25 = `as.logical`(r67);
    if c25 then L111() else L29();
  L105():
    p8 = prom<V +>{
      widths3 = ld widths;
      widths4 = force? widths3;
      checkMissing(widths4);
      return widths4;
    };
    r64 = dyn grep[, , fixed]("cm", p8, TRUE);
    check L106() else D31();
  L108():
    heights1 = ld heights;
    check L110() else D32();
  L109():
    r66 = dyn base12(<sym heights>);
    goto L28(r66);
  D31():
    deopt 121 [r64];
  D32():
    deopt 126 [heights1];
  L29():
    goto L30(NULL);
  L30(r70):
    st `cm.heights` = r70;
    r71 = clos inner310378405;
    st `pad1.rm.cm` = r71;
    pad1_rm_cm = ldf `pad1.rm.cm`;
    check L115() else D35();
  L106():
    goto L27(r64);
  L110():
    heights2 = force? heights1;
    checkMissing(heights2);
    c24 = `is.character`(heights2);
    goto L28(c24);
  L111():
    grep1 = ldf grep;
    check L112() else D33();
  D33():
    deopt 130 [];
  D35():
    deopt 143 [];
  L112():
    p9 = prom<V +>{
      heights3 = ld heights;
      heights4 = force? heights3;
      checkMissing(heights4);
      return heights4;
    };
    r69 = dyn grep1[, , fixed]("cm", p9, TRUE);
    check L113() else D34();
  L115():
    p10 = prom<V +>{
      widths5 = ld widths;
      widths6 = force? widths5;
      checkMissing(widths6);
      return widths6;
    };
    p11 = prom<V +>{
      cm_widths = ld `cm.widths`;
      cm_widths1 = force? cm_widths;
      checkMissing(cm_widths1);
      return cm_widths1;
    };
    p12 = prom<V +>{
      num_cols = ld `num.cols`;
      num_cols1 = force? num_cols;
      checkMissing(num_cols1);
      return num_cols1;
    };
    r75 = dyn pad1_rm_cm[, , len](p10, p11, p12);
    check L116() else D36();
  D34():
    deopt 135 [r69];
  D36():
    deopt 148 [r75];
  L113():
    goto L30(r69);
  L116():
    st widths = r75;
    pad1_rm_cm1 = ldf `pad1.rm.cm`;
    check L117() else D37();
  D37():
    deopt 151 [];
  L117():
    p13 = prom<V +>{
      heights5 = ld heights;
      heights6 = force? heights5;
      checkMissing(heights6);
      return heights6;
    };
    p14 = prom<V +>{
      cm_heights = ld `cm.heights`;
      cm_heights1 = force? cm_heights;
      checkMissing(cm_heights1);
      return cm_heights1;
    };
    p15 = prom<V +>{
      num_rows = ld `num.rows`;
      num_rows1 = force? num_rows;
      checkMissing(num_rows1);
      return num_rows1;
    };
    r79 = dyn pad1_rm_cm1[, , len](p13, p14, p15);
    check L118() else D38();
  D38():
    deopt 156 [r79];
  L118():
    st heights = r79;
    sym13 = ldf `is.matrix`;
    base13 = ldf `is.matrix` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L119() else L120();
  L31(r81):
    c26 = `as.logical`(r81);
    if c26 then L123() else L32();
  L119():
    respect9 = ld respect;
    check L121() else D39();
  L120():
    r80 = dyn base13(<sym respect>);
    goto L31(r80);
  D39():
    deopt 160 [respect9];
  L32():
    matrix = ldf matrix;
    check L129() else D43();
  L34():
    sym15 = ldf `.External.graphics`;
    base15 = ldf `.External.graphics` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L131() else L132();
  L121():
    respect10 = force? respect9;
    checkMissing(respect10);
    is_matrix1 = ldf `is.matrix` in base;
    r82 = dyn is_matrix1(respect10);
    check L122() else D40();
  L123():
    sym14 = ldf `as.integer`;
    base14 = ldf `as.integer` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L124() else L125();
  D40():
    deopt 163 [r82];
  D43():
    deopt 175 [];
  L33(r84):
    st `respect.mat` = r84;
    st respect = 2.0;
    goto L34();
  L35():
    sym18 = ldf invisible;
    base18 = ldf invisible in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L151() else L152();
  L122():
    goto L31(r82);
  L124():
    respect11 = ld respect;
    check L126() else D41();
  L125():
    r83 = dyn base14(<sym respect>);
    goto L33(r83);
  L129():
    p16 = prom<V +>{
      num_rows2 = ld `num.rows`;
      num_rows3 = force? num_rows2;
      checkMissing(num_rows3);
      return num_rows3;
    };
    p17 = prom<V +>{
      num_cols2 = ld `num.cols`;
      num_cols3 = force? num_cols2;
      checkMissing(num_cols3);
      return num_cols3;
    };
    r89 = dyn matrix(0, p16, p17);
    check L130() else D44();
  L131():
    C_layout = ld C_layout;
    check L133() else D45();
  L132():
    r90 = dyn base15[, , , , , `col.widths`, `row.heights`, , , respect, ](<sym C_layout>, <sym num.rows>, <sym num.cols>, <sym mat>, <lang as.integer(num.figures)>, <sym widths>, <sym heights>, <sym cm.widths>, <sym cm.heights>, <lang as.integer(respect)>, <sym respect.mat>);
    goto L35();
  D41():
    deopt 166 [respect11];
  D44():
    deopt 179 [r89];
  D45():
    deopt 183 [C_layout];
  L38(r100):
    popenv;
    return r100;
  L126():
    respect12 = force? respect11;
    checkMissing(respect12);
    as_integer1 = ldf `as.integer` in base;
    r85 = dyn as_integer1(respect12);
    check L127() else D42();
  L130():
    st `respect.mat` = r89;
    goto L34();
  L133():
    C_layout1 = force? C_layout;
    checkMissing(C_layout1);
    num_rows4 = ld `num.rows`;
    check L134() else D46();
  L151():
    num_figures6 = ld `num.figures`;
    check L153() else D59();
  L152():
    r99 = dyn base18(<sym num.figures>);
    goto L38(r99);
  D42():
    deopt 169 [r85];
  D46():
    deopt 185 [num_rows4];
  D59():
    deopt 220 [num_figures6];
  L127():
    goto L33(r85);
  L134():
    num_rows5 = force? num_rows4;
    checkMissing(num_rows5);
    num_cols4 = ld `num.cols`;
    check L135() else D47();
  L153():
    num_figures7 = force? num_figures6;
    checkMissing(num_figures7);
    invisible = ldf invisible in base;
    r101 = dyn invisible(num_figures7);
    check L154() else D60();
  D47():
    deopt 187 [num_cols4];
  D60():
    deopt 223 [r101];
  L135():
    num_cols5 = force? num_cols4;
    checkMissing(num_cols5);
    mat15 = ld mat;
    check L136() else D48();
  L154():
    goto L38(r101);
  D48():
    deopt 189 [mat15];
  L136():
    mat16 = force? mat15;
    checkMissing(mat16);
    sym16 = ldf `as.integer`;
    base16 = ldf `as.integer` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L137() else L138();
  L36(r93):
    widths7 = ld widths;
    check L141() else D51();
  L137():
    num_figures4 = ld `num.figures`;
    check L139() else D49();
  L138():
    r92 = dyn base16(<sym num.figures>);
    goto L36(r92);
  D49():
    deopt 193 [num_figures4];
  D51():
    deopt 197 [widths7];
  L139():
    num_figures5 = force? num_figures4;
    checkMissing(num_figures5);
    as_integer2 = ldf `as.integer` in base;
    r94 = dyn as_integer2(num_figures5);
    check L140() else D50();
  L141():
    widths8 = force? widths7;
    checkMissing(widths8);
    heights7 = ld heights;
    check L142() else D52();
  D50():
    deopt 196 [r94];
  D52():
    deopt 200 [heights7];
  L140():
    goto L36(r94);
  L142():
    heights8 = force? heights7;
    checkMissing(heights8);
    cm_widths2 = ld `cm.widths`;
    check L143() else D53();
  D53():
    deopt 203 [cm_widths2];
  L143():
    cm_widths3 = force? cm_widths2;
    checkMissing(cm_widths3);
    cm_heights2 = ld `cm.heights`;
    check L144() else D54();
  D54():
    deopt 205 [cm_heights2];
  L144():
    cm_heights3 = force? cm_heights2;
    checkMissing(cm_heights3);
    sym17 = ldf `as.integer`;
    base17 = ldf `as.integer` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L145() else L146();
  L37(r96):
    respect_mat = ld `respect.mat`;
    check L149() else D57();
  L145():
    respect13 = ld respect;
    check L147() else D55();
  L146():
    r95 = dyn base17(<sym respect>);
    goto L37(r95);
  D55():
    deopt 209 [respect13];
  D57():
    deopt 214 [respect_mat];
  L147():
    respect14 = force? respect13;
    checkMissing(respect14);
    as_integer3 = ldf `as.integer` in base;
    r97 = dyn as_integer3(respect14);
    check L148() else D56();
  L149():
    respect_mat1 = force? respect_mat;
    checkMissing(respect_mat1);
    _External_graphics = ldf `.External.graphics` in base;
    r98 = dyn _External_graphics(C_layout1, num_rows5, num_cols5, mat16, r93, widths8, heights8, cm_widths3, cm_heights3, r96, respect_mat1);
    check L150() else D58();
  D56():
    deopt 212 [r97];
  D58():
    deopt 217 [r98];
  L148():
    goto L37(r97);
  L150():
    goto L35();
  }
}
fun inner310378405(v, `cm.v`, len) {
  (reg v:*, reg cm_v:*, reg len:*) -+> V { var v:*, var `cm.v`:*, var len:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg v1:*, reg v2:V, reg length:cls, reg r2:V, reg len1:*, reg len2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg v3:*, reg v4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg len3:*, reg len4:V, reg ll:*, reg ll1:V, reg r8:V, reg rep_int:cls, reg r9:V, reg c1:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg v5:*, reg v6:V, reg c2:L, reg c3:L, reg v7:*, reg v8:V, reg c4:L, reg v10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cm_v1:*, reg cm_v2:V, reg __:cls, reg r14:V, reg substring:cls, reg wcm:*, reg wcm1:V, reg p:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg wcm2:*, reg wcm3:V, reg nchar:cls, reg r18:V, reg r19:V, reg p1:p(V +), reg r21:V, reg l:*, reg c5:L, reg r23:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg cm_v3:*, reg cm_v4:V, reg ___:cls, reg r26:V, reg chartr:cls, reg getOption:cls, reg r27:V, reg p2:p(V +), reg v11:*, reg v12:V, reg p3:p(V +), reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg v13:*, reg v14:V, reg as_numeric:cls, reg r34:V |
    mkenv;
    st v = v;
    st `cm.v` = cm_v;
    st len = len;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    st ll = r1;
    len1 = ld len;
    check L15() else D2();
  L11():
    v1 = ld v;
    check L13() else D0();
  L12():
    r = dyn base(<sym v>);
    goto L0(r);
  D0():
    deopt 2 [v1];
  D2():
    deopt 6 [r1, len1];
  L13():
    v2 = force? v1;
    checkMissing(v2);
    length = ldf length in base;
    r2 = dyn length(v2);
    check L14() else D1();
  L15():
    len2 = force? len1;
    checkMissing(len2);
    r3 = `<`(r1, len2);
    c = `as.logical`(r3);
    if c then L16() else L1();
  D1():
    deopt 5 [r2];
  L1():
    goto L4();
  L4():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L14():
    goto L0(r2);
  L16():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L2(r5):
    st v = r5;
    goto L4();
  L5(r13):
    c3 = `as.logical`(r13);
    if c3 then L30() else L6();
  L17():
    v3 = ld v;
    check L19() else D3();
  L18():
    r4 = dyn base1(<sym v>, <lang rep.int(1.0, `-`(len, ll))>);
    goto L2(r4);
  L27():
    v5 = ld v;
    check L29() else D8();
  L28():
    r12 = dyn base3(<sym v>);
    goto L5(r12);
  D3():
    deopt 11 [v3];
  D8():
    deopt 28 [v5];
  L6():
    goto L9();
  L9():
    sym5 = ldf `as.numeric`;
    base5 = ldf `as.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L45() else L46();
  L19():
    v4 = force? v3;
    checkMissing(v4);
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L29():
    v6 = force? v5;
    checkMissing(v6);
    c2 = `is.character`(v6);
    goto L5(c2);
  L30():
    v7 = ld v;
    check L31() else D9();
  D9():
    deopt 31 [v7];
  L3(r7):
    c1 = ldf c in base;
    r10 = dyn c1(v4, r7);
    check L25() else D7();
  L10(r33):
    popenv;
    return r33;
  L20():
    len3 = ld len;
    check L22() else D4();
  L21():
    r6 = dyn base2(1.0, <lang `-`(len, ll)>);
    goto L3(r6);
  L31():
    v8 = force? v7;
    checkMissing(v8);
    c4 = `is.object`(v8);
    if c4 then L32() else L33(v8);
  L45():
    v13 = ld v;
    check L47() else D16();
  L46():
    r32 = dyn base5(<sym v>);
    goto L10(r32);
  D4():
    deopt 16 [len3];
  D7():
    deopt 23 [r10];
  D16():
    deopt 59 [v13];
  L7(dx1):
    st wcm = dx1;
    substring = ldf substring;
    check L36() else D11();
  L22():
    len4 = force? len3;
    checkMissing(len4);
    ll = ld ll;
    check L23() else D5();
  L25():
    goto L2(r10);
  L32():
    dr = tryDispatchBuiltin.1("[", v8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(v10):
    cm_v1 = ld `cm.v`;
    check L35() else D10();
  L47():
    v14 = force? v13;
    checkMissing(v14);
    as_numeric = ldf `as.numeric` in base;
    r34 = dyn as_numeric(v14);
    check L48() else D17();
  D5():
    deopt 17 [len4, ll];
  D10():
    deopt 33 [v10, cm_v1];
  D11():
    deopt 38 [];
  D17():
    deopt 62 [r34];
  L23():
    ll1 = force? ll;
    checkMissing(ll1);
    r8 = `-`(len4, ll1);
    rep_int = ldf `rep.int` in base;
    r9 = dyn rep_int(1.0, r8);
    check L24() else D6();
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L35():
    cm_v2 = force? cm_v1;
    __ = ldf `[` in base;
    r14 = dyn __(v10, cm_v2);
    goto L7(r14);
  L36():
    p = prom<V +>{
      wcm = ld wcm;
      wcm1 = force? wcm;
      checkMissing(wcm1);
      return wcm1;
    };
    p1 = prom<V +>{
      sym4 = ldf nchar;
      base4 = ldf nchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r17):
      r19 = `-`(r17, 3.0);
      return r19;
    L1():
      wcm2 = ld wcm;
      wcm3 = force? wcm2;
      checkMissing(wcm3);
      nchar = ldf nchar in base;
      r18 = dyn nchar(wcm3, "c", FALSE, NA_LGL);
      goto L0(r18);
    L2():
      r16 = dyn base4[, type](<sym wcm>, "c");
      goto L0(r16);
    };
    r21 = dyn substring(p, 1, p1);
    check L37() else D12();
  L48():
    goto L10(r34);
  D6():
    deopt 21 [r9];
  D12():
    deopt 42 [r21];
  L24():
    goto L3(r9);
  L37():
    l = ld v;
    c5 = `is.object`(l);
    if c5 then L38() else L39(r21, l);
  L8(dx3):
    st v = dx3;
    chartr = ldf chartr;
    check L42() else D14();
  L38():
    dr2 = tryDispatchBuiltin.0("[<-", l, r21);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(r21, dr2);
  L39(r23, l2):
    cm_v3 = ld `cm.v`;
    check L41() else D13();
  D13():
    deopt 44 [r23, l2, r21, cm_v3];
  D14():
    deopt 49 [];
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L41():
    cm_v4 = force? cm_v3;
    ___ = ldf `[<-` in base;
    r26 = dyn ___(l2, r21, cm_v4);
    goto L8(r26);
  L42():
    p2 = prom<V +>{
      getOption = ldf getOption;
      r27 = dyn getOption("OutDec");
      return r27;
    };
    p3 = prom<V +>{
      v11 = ld v;
      v12 = force? v11;
      checkMissing(v12);
      return v12;
    };
    r30 = dyn chartr(p2, ".", p3);
    check L43() else D15();
  D15():
    deopt 53 [r30];
  L43():
    st v = r30;
    goto L9();
  }
}