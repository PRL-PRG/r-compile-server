fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg r2:cls, reg r3:V, reg table:cls, reg cut:cls, reg Z:*, reg Z1:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg table1:cls, reg cut1:cls, reg Z2:*, reg Z3:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg sum:cls, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg __1:cls, reg r21:V, reg r22:cls, reg Z4:*, reg Z5:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg c:L, reg r28:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r29:V, reg sum1:cls, reg r30:V, reg cut2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg rep:cls, reg r33:V, reg p8:p(V +), reg r35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg c1:cls, reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg rep1:cls, reg r41:V, reg stopifnot:cls, reg table2:cls, reg x:*, reg x1:V, reg p9:p(V +), reg r43:V, reg tx0:*, reg tx1:V, reg r44:V, reg p10:p(V +), reg r46:V, reg table3:cls, reg cut3:cls, reg x2:*, reg x3:V, reg p11:p(V +), reg r48:V, reg p12:p(V +), reg r50:V, reg table4:cls, reg cut4:cls, reg x4:*, reg x5:V, reg p13:p(V +), reg p14:p(V +), reg r53:V, reg p15:p(V +), reg r55:V, reg table5:cls, reg cut5:cls, reg x6:*, reg x7:V, reg p16:p(V +), reg p17:p(V +), reg r58:V, reg p18:p(V +), reg r60:V, reg table6:cls, reg cut6:cls, reg x8:*, reg x9:V, reg p19:p(V +), reg p20:p(V +), reg r63:V, reg p21:p(V +), reg r65:V, reg table7:cls, reg cut7:cls, reg x10:*, reg x11:V, reg p22:p(V +), reg p23:p(V +), reg r68:V, reg p24:p(V +), reg r70:V, reg which:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r71:V, reg r72:V, reg cx:*, reg cx1:V, reg is_na:cls, reg r73:V, reg p25:p(V +), reg r75:V, reg x12:*, reg x13:V, reg c2:L, reg x15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r76:V, reg x18:V, reg r77:V, reg cx2:*, reg cx3:V, reg is_na1:cls, reg r78:V, reg __2:cls, reg r79:V, reg which1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r80:V, reg r81:V, reg cxl:*, reg cxl1:V, reg is_na2:cls, reg r82:V, reg p26:p(V +), reg r84:V, reg x19:*, reg x20:V, reg c3:L, reg x22:V, reg dr4:V, reg dc2:L, reg dx4:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r85:V, reg x25:V, reg r86:V, reg cxl2:*, reg cxl3:V, reg is_na3:cls, reg r87:V, reg __3:cls, reg r88:V, reg __4:cls, reg r89:V, reg r90:cls, reg r91:V, reg table8:cls, reg cut8:cls, reg y:*, reg y1:V, reg p27:p(V +), reg p28:p(V +), reg r94:V, reg p29:p(V +), reg r96:V, reg table9:cls, reg cut9:cls, reg y2:*, reg y3:V, reg p30:p(V +), reg p31:p(V +), reg r99:V, reg p32:p(V +), reg r101:V, reg table10:cls, reg cut10:cls, reg y4:*, reg y5:V, reg p33:p(V +), reg p34:p(V +), reg r104:V, reg p35:p(V +), reg r106:V, reg table11:cls, reg cut11:cls, reg y6:*, reg y7:V, reg p36:p(V +), reg p37:p(V +), reg r109:V, reg p38:p(V +), reg r111:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r112:V, reg r113:V, reg c4:cls, reg r114:V, reg cut12:cls, reg aaa:*, reg aaa1:V, reg p39:p(V +), reg r116:V, reg cut13:cls, reg aaa2:*, reg aaa3:V, reg p40:p(V +), reg r118:V, reg levels:cls, reg cut14:cls, reg aaa4:*, reg aaa5:V, reg p41:p(V +), reg r120:V, reg p42:p(V +), reg r122:V, reg cbind:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r123:V, reg r124:V, reg sub:cls, reg labs:*, reg labs1:V, reg p43:p(V +), reg r126:V, reg as_numeric:cls, reg r127:V, reg p44:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r129:V, reg r130:V, reg sub1:cls, reg labs2:*, reg labs3:V, reg p45:p(V +), reg r132:V, reg as_numeric1:cls, reg r133:V, reg p46:p(V +), reg r135:V |
    mkenv;
    r = clos inner2044426018;
    st cut = r;
    __ = ldf `::`;
    check L9() else D0();
  D0():
    deopt 4 [];
  L9():
    r1 = dyn __("stats", "rnorm");
    check L10() else D1();
  D1():
    deopt 7 [r1];
  L10():
    checkFun.0(r1);
    r2 = r1 as cls;
    r3 = dyn r2(10000.0);
    check L11() else D2();
  D2():
    deopt 10 [r3];
  L11():
    st Z = r3;
    table = ldf table;
    check L12() else D3();
  D3():
    deopt 13 [];
  L12():
    p2 = prom<V +>{
      cut = ldf cut;
      p = prom<V +>{
        Z = ld Z;
        Z1 = force? Z;
        checkMissing(Z1);
        return Z1;
      };
      p1 = prom<V +>{
        r5 = `:`(-6.0, 6.0);
        return r5;
      };
      r7 = dyn cut[, breaks](p, p1);
      return r7;
    };
    r9 = dyn table(p2);
    check L13() else D4();
  D4():
    deopt 15 [r9];
  L13():
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L14():
    table1 = ldf table;
    check L16() else D5();
  L15():
    r10 = dyn base(<lang table(cut(Z, breaks=`:`(`-`(6.0), 6.0), labels=FALSE))>);
    goto L0();
  D5():
    deopt 19 [];
  L1():
    cut2 = ldf cut;
    check L29() else D12();
  L16():
    p5 = prom<V +>{
      cut1 = ldf cut;
      p3 = prom<V +>{
        Z2 = ld Z;
        Z3 = force? Z2;
        checkMissing(Z3);
        return Z3;
      };
      p4 = prom<V +>{
        r13 = `:`(-6.0, 6.0);
        return r13;
      };
      r15 = dyn cut1[, breaks, labels](p3, p4, FALSE);
      return r15;
    };
    r17 = dyn table1(p5);
    check L17() else D6();
  L19():
    __1 = ldf `::`;
    check L21() else D8();
  L20():
    r19 = dyn base1(<lang `$`(`::`(graphics, hist)(Z, breaks=`:`(`-`(6.0), 6.0), plot=FALSE), counts)>);
    goto L1();
  D6():
    deopt 21 [r17];
  D8():
    deopt 27 [];
  D12():
    deopt 42 [];
  L17():
    sum = ldf sum in base;
    r18 = dyn sum(r17);
    check L18() else D7();
  L21():
    r21 = dyn __1("graphics", "hist");
    check L22() else D9();
  L29():
    p8 = prom<V +>{
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      rep = ldf rep in base;
      r33 = dyn rep(1.0, 5.0);
      goto L0(r33);
    L2():
      r31 = dyn base2(1.0, 5.0);
      goto L0(r31);
    };
    r35 = dyn cut2(p8, 4.0);
    check L30() else D13();
  D7():
    deopt 23 [r18];
  D9():
    deopt 30 [r21];
  D13():
    deopt 45 [r35];
  L18():
    goto L0();
  L22():
    checkFun.0(r21);
    r22 = r21 as cls;
    p6 = prom<V +>{
      Z4 = ld Z;
      Z5 = force? Z4;
      checkMissing(Z5);
      return Z5;
    };
    p7 = prom<V +>{
      r24 = `:`(-6.0, 6.0);
      return r24;
    };
    r26 = dyn r22[, breaks, plot](p6, p7, FALSE);
    check L23() else D10();
  L30():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  D10():
    deopt 37 [r26];
  L2(r37):
    st tx0 = r37;
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L23():
    c = `is.object`(r26);
    if c then L25() else L26(r26);
  L31():
    c1 = ldf c in base;
    r38 = dyn c1(9.0, 4.0, 6.0, 5.0, 3.0, 10.0, 5.0, 3.0, 5.0);
    check L33() else D14();
  L32():
    r36 = dyn base3(9.0, 4.0, 6.0, 5.0, 3.0, 10.0, 5.0, 3.0, 5.0);
    goto L2(r36);
  D14():
    deopt 58 [r38];
  L3(r40):
    st x = r40;
    stopifnot = ldf stopifnot;
    check L36() else D15();
  L24(dx1):
    sum1 = ldf sum in base;
    r30 = dyn sum1(dx1);
    check L28() else D11();
  L25():
    dr = tryDispatchBuiltin.1("$", r26);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(r28):
    r29 = `$`(r28, <sym counts>);
    goto L24(r29);
  L33():
    goto L2(r38);
  L34():
    rep1 = ldf rep in base;
    r41 = dyn rep1(<lang `:`(0.0, 8.0)>, <sym tx0>);
    goto L3(r41);
  L35():
    r39 = dyn base4(<lang `:`(0.0, 8.0)>, <sym tx0>);
    goto L3(r39);
  D11():
    deopt 40 [r30];
  D15():
    deopt 65 [];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L28():
    goto L1();
  L36():
    p10 = prom<V +>{
      table2 = ldf table;
      p9 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r43 = dyn table2(p9);
      tx0 = ld tx0;
      tx1 = force? tx0;
      checkMissing(tx1);
      r44 = `==`(r43, tx1);
      return r44;
    };
    r46 = dyn stopifnot(p10);
    check L37() else D16();
  D16():
    deopt 67 [r46];
  L37():
    table3 = ldf table;
    check L38() else D17();
  D17():
    deopt 69 [];
  L38():
    p12 = prom<V +>{
      cut3 = ldf cut;
      p11 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r48 = dyn cut3[, breaks](p11, 8.0);
      return r48;
    };
    r50 = dyn table3(p12);
    check L39() else D18();
  D18():
    deopt 71 [r50];
  L39():
    table4 = ldf table;
    check L40() else D19();
  D19():
    deopt 73 [];
  L40():
    p15 = prom<V +>{
      cut4 = ldf cut;
      p13 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      p14 = prom<V +>{
        return <real -6.0, -3.0, 0.0, 3.0, 6.0, 9.0, 12.0, 15.0>;
      };
      r53 = dyn cut4[, breaks](p13, p14);
      return r53;
    };
    r55 = dyn table4(p15);
    check L41() else D20();
  D20():
    deopt 75 [r55];
  L41():
    table5 = ldf table;
    check L42() else D21();
  D21():
    deopt 77 [];
  L42():
    p18 = prom<V +>{
      cut5 = ldf cut;
      p16 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      p17 = prom<V +>{
        return <real -6.0, -3.0, 0.0, 3.0, 6.0, 9.0, 12.0, 15.0>;
      };
      r58 = dyn cut5[, breaks, right](p16, p17, FALSE);
      return r58;
    };
    r60 = dyn table5(p18);
    check L43() else D22();
  D22():
    deopt 79 [r60];
  L43():
    table6 = ldf table;
    check L44() else D23();
  D23():
    deopt 81 [];
  L44():
    p21 = prom<V +>{
      cut6 = ldf cut;
      p19 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      p20 = prom<V +>{
        return <real 0.0, 2.0, 4.0, 6.0, 8.0>;
      };
      r63 = dyn cut6[, breaks](p19, p20);
      st cx = r63;
      invisible.0();
      return r63;
    };
    r65 = dyn table6(p21);
    check L45() else D24();
  D24():
    deopt 83 [r65];
  L45():
    table7 = ldf table;
    check L46() else D25();
  D25():
    deopt 85 [];
  L46():
    p24 = prom<V +>{
      cut7 = ldf cut;
      p22 = prom<V +>{
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        return x11;
      };
      p23 = prom<V +>{
        return <real 0.0, 2.0, 4.0, 6.0, 8.0>;
      };
      r68 = dyn cut7[, breaks, right](p22, p23, FALSE);
      st cxl = r68;
      invisible.0();
      return r68;
    };
    r70 = dyn table7(p24);
    check L47() else D26();
  D26():
    deopt 87 [r70];
  L47():
    which = ldf which;
    check L48() else D27();
  D27():
    deopt 89 [];
  L48():
    p25 = prom<V +>{
      sym5 = ldf `is.na`;
      base5 = ldf `is.na` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r72):
      return r72;
    L1():
      cx = ld cx;
      cx1 = force? cx;
      checkMissing(cx1);
      is_na = ldf `is.na` in base;
      r73 = dyn is_na(cx1);
      goto L0(r73);
    L2():
      r71 = dyn base5(<sym cx>);
      goto L0(r71);
    };
    r75 = dyn which(p25);
    check L49() else D28();
  D28():
    deopt 91 [r75];
  L49():
    x12 = ld x;
    check L50() else D29();
  D29():
    deopt 92 [x12];
  L50():
    x13 = force? x12;
    checkMissing(x13);
    c2 = `is.object`(x13);
    if c2 then L51() else L52(x13);
  L4():
    which1 = ldf which;
    check L58() else D32();
  L51():
    dr2 = tryDispatchBuiltin.1("[", x13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(x15):
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  D32():
    deopt 102 [];
  L5(x18, r77):
    __2 = ldf `[` in base;
    r79 = dyn __2(x18, r77);
    goto L4();
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4();
  L54():
    cx2 = ld cx;
    check L56() else D30();
  L55():
    r76 = dyn base6(<sym cx>);
    goto L5(x15, r76);
  L58():
    p26 = prom<V +>{
      sym7 = ldf `is.na`;
      base7 = ldf `is.na` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r81):
      return r81;
    L1():
      cxl = ld cxl;
      cxl1 = force? cxl;
      checkMissing(cxl1);
      is_na2 = ldf `is.na` in base;
      r82 = dyn is_na2(cxl1);
      goto L0(r82);
    L2():
      r80 = dyn base7(<sym cxl>);
      goto L0(r80);
    };
    r84 = dyn which1(p26);
    check L59() else D33();
  D30():
    deopt 96 [x15, cx2];
  D33():
    deopt 104 [r84];
  L56():
    cx3 = force? cx2;
    checkMissing(cx3);
    is_na1 = ldf `is.na` in base;
    r78 = dyn is_na1(cx3);
    check L57() else D31();
  L59():
    x19 = ld x;
    check L60() else D34();
  D31():
    deopt 99 [x15, r78];
  D34():
    deopt 105 [x19];
  L57():
    goto L5(x15, r78);
  L60():
    x20 = force? x19;
    checkMissing(x20);
    c3 = `is.object`(x20);
    if c3 then L61() else L62(x20);
  L6():
    __4 = ldf `::`;
    check L68() else D37();
  L61():
    dr4 = tryDispatchBuiltin.1("[", x20);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(dr4);
  L62(x22):
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L64() else L65();
  D37():
    deopt 115 [];
  L7(x25, r86):
    __3 = ldf `[` in base;
    r88 = dyn __3(x25, r86);
    goto L6();
  L63():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6();
  L64():
    cxl2 = ld cxl;
    check L66() else D35();
  L65():
    r85 = dyn base8(<sym cxl>);
    goto L7(x22, r85);
  L68():
    r89 = dyn __4("stats", "rnorm");
    check L69() else D38();
  D35():
    deopt 109 [x22, cxl2];
  D38():
    deopt 118 [r89];
  L66():
    cxl3 = force? cxl2;
    checkMissing(cxl3);
    is_na3 = ldf `is.na` in base;
    r87 = dyn is_na3(cxl3);
    check L67() else D36();
  L69():
    checkFun.0(r89);
    r90 = r89 as cls;
    r91 = dyn r90(100.0);
    check L70() else D39();
  D36():
    deopt 112 [x22, r87];
  D39():
    deopt 121 [r91];
  L67():
    goto L7(x22, r87);
  L70():
    st y = r91;
    table8 = ldf table;
    check L71() else D40();
  D40():
    deopt 124 [];
  L71():
    p29 = prom<V +>{
      cut8 = ldf cut;
      p27 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      p28 = prom<V +>{
        return <real -3.141592653589793, -2.0943951023931953, -1.0471975511965976, 0.0, 1.0471975511965976, 2.0943951023931953, 3.141592653589793>;
      };
      r94 = dyn cut8[, breaks](p27, p28);
      return r94;
    };
    r96 = dyn table8(p29);
    check L72() else D41();
  D41():
    deopt 126 [r96];
  L72():
    table9 = ldf table;
    check L73() else D42();
  D42():
    deopt 128 [];
  L73():
    p32 = prom<V +>{
      cut9 = ldf cut;
      p30 = prom<V +>{
        y2 = ld y;
        y3 = force? y2;
        checkMissing(y3);
        return y3;
      };
      p31 = prom<V +>{
        return <real -3.141592653589793, -2.0943951023931953, -1.0471975511965976, 0.0, 1.0471975511965976, 2.0943951023931953, 3.141592653589793>;
      };
      r99 = dyn cut9[, breaks, `dig.lab`](p30, p31, 4.0);
      return r99;
    };
    r101 = dyn table9(p32);
    check L74() else D43();
  D43():
    deopt 130 [r101];
  L74():
    table10 = ldf table;
    check L75() else D44();
  D44():
    deopt 132 [];
  L75():
    p35 = prom<V +>{
      cut10 = ldf cut;
      p33 = prom<V +>{
        y4 = ld y;
        y5 = force? y4;
        checkMissing(y5);
        return y5;
      };
      p34 = prom<V +>{
        return <real -3.0, -2.0, -1.0, 0.0, 1.0, 2.0, 3.0>;
      };
      r104 = dyn cut10[, breaks, `dig.lab`](p33, p34, 4.0);
      return r104;
    };
    r106 = dyn table10(p35);
    check L76() else D45();
  D45():
    deopt 134 [r106];
  L76():
    table11 = ldf table;
    check L77() else D46();
  D46():
    deopt 136 [];
  L77():
    p38 = prom<V +>{
      cut11 = ldf cut;
      p36 = prom<V +>{
        y6 = ld y;
        y7 = force? y6;
        checkMissing(y7);
        return y7;
      };
      p37 = prom<V +>{
        return <real -3.0, -2.0, -1.0, 0.0, 1.0, 2.0, 3.0>;
      };
      r109 = dyn cut11[, breaks, right](p36, p37, FALSE);
      return r109;
    };
    r111 = dyn table11(p38);
    check L78() else D47();
  D47():
    deopt 138 [r111];
  L78():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L79() else L80();
  L8(r113):
    st aaa = r113;
    cut12 = ldf cut;
    check L82() else D49();
  L79():
    c4 = ldf c in base;
    r114 = dyn c4(1.0, 2.0, 3.0, 4.0, 5.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0);
    check L81() else D48();
  L80():
    r112 = dyn base9(1.0, 2.0, 3.0, 4.0, 5.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0);
    goto L8(r112);
  D48():
    deopt 153 [r114];
  D49():
    deopt 156 [];
  L81():
    goto L8(r114);
  L82():
    p39 = prom<V +>{
      aaa = ld aaa;
      aaa1 = force? aaa;
      checkMissing(aaa1);
      return aaa1;
    };
    r116 = dyn cut12(p39, 3.0);
    check L83() else D50();
  D50():
    deopt 159 [r116];
  L83():
    cut13 = ldf cut;
    check L84() else D51();
  D51():
    deopt 161 [];
  L84():
    p40 = prom<V +>{
      aaa2 = ld aaa;
      aaa3 = force? aaa2;
      checkMissing(aaa3);
      return aaa3;
    };
    r118 = dyn cut13[, , `dig.lab`, ordered_result](p40, 3.0, 4.0, TRUE);
    check L85() else D52();
  D52():
    deopt 168 [r118];
  L85():
    levels = ldf levels;
    check L86() else D53();
  D53():
    deopt 170 [];
  L86():
    p42 = prom<V +>{
      cut14 = ldf cut;
      p41 = prom<V +>{
        aaa4 = ld aaa;
        aaa5 = force? aaa4;
        checkMissing(aaa5);
        return aaa5;
      };
      r120 = dyn cut14(p41, 3.0);
      return r120;
    };
    r122 = dyn levels(p42);
    check L87() else D54();
  D54():
    deopt 172 [r122];
  L87():
    st labs = r122;
    cbind = ldf cbind;
    check L88() else D55();
  D55():
    deopt 175 [];
  L88():
    p44 = prom<V +>{
      sym10 = ldf `as.numeric`;
      base10 = ldf `as.numeric` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r124):
      return r124;
    L1():
      sub = ldf sub;
      p43 = prom<V +>{
        labs = ld labs;
        labs1 = force? labs;
        checkMissing(labs1);
        return labs1;
      };
      r126 = dyn sub("\\((.+),.*", "\\1", p43);
      as_numeric = ldf `as.numeric` in base;
      r127 = dyn as_numeric(r126);
      goto L0(r127);
    L2():
      r123 = dyn base10(<lang sub("\\((.+),.*", "\\1", labs)>);
      goto L0(r123);
    };
    p46 = prom<V +>{
      sym11 = ldf `as.numeric`;
      base11 = ldf `as.numeric` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r130):
      return r130;
    L1():
      sub1 = ldf sub;
      p45 = prom<V +>{
        labs2 = ld labs;
        labs3 = force? labs2;
        checkMissing(labs3);
        return labs3;
      };
      r132 = dyn sub1("[^,]*,([^]]*)\\]", "\\1", p45);
      as_numeric1 = ldf `as.numeric` in base;
      r133 = dyn as_numeric1(r132);
      goto L0(r133);
    L2():
      r129 = dyn base11(<lang sub("[^,]*,([^]]*)\\]", "\\1", labs)>);
      goto L0(r129);
    };
    r135 = dyn cbind[lower, upper](p44, p46);
    check L89() else D56();
  D56():
    deopt 180 [r135];
  L89():
    popenv;
    return r135;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("cut");
    goto L0(r2);
  L2():
    r = dyn base("cut");
    goto L0(r);
  }
}