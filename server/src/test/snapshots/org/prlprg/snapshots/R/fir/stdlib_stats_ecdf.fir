fun main() {
  () -+> V { reg r:cls, reg rnorm:cls, reg r1:V, reg ecdf:cls, reg x:*, reg x1:V, reg p:p(V +), reg r3:V, reg Fn:*, reg Fn1:V, reg Fn2:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r5:V, reg seq:cls, reg p2:p(V +), reg r7:V, reg Fn3:cls, reg tt:*, reg tt1:V, reg p3:p(V +), reg r9:V, reg summary:cls, reg Fn4:*, reg Fn5:V, reg p4:p(V +), reg r12:V, reg knots:cls, reg Fn6:*, reg Fn7:V, reg p5:p(V +), reg r14:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg round:cls, reg r17:V, reg y:*, reg y1:V, reg c:L, reg y3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg l:*, reg c1:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg ___:cls, reg r19:V, reg ecdf1:cls, reg y4:*, reg y5:V, reg p6:p(V +), reg r21:V, reg Fn12:*, reg Fn13:V, reg knots1:cls, reg Fn14:*, reg Fn15:V, reg p7:p(V +), reg r23:V, reg summary1:cls, reg Fn16:*, reg Fn17:V, reg p8:p(V +), reg r25:V, reg summary_stepfun:cls, reg Fn18:*, reg Fn19:V, reg p9:p(V +), reg r27:V, reg ls:cls, reg environment:cls, reg Fn20:*, reg Fn21:V, reg p10:p(V +), reg r29:V, reg p11:p(V +), reg r31:V, reg __1:cls, reg r32:V, reg r33:cls, reg environment1:cls, reg Fn22:*, reg Fn23:V, reg p12:p(V +), reg r35:V, reg p13:p(V +), reg r37:V, reg stopifnot:cls, reg all_equal:cls, reg quantile:cls, reg Fn24:*, reg Fn25:V, reg p14:p(V +), reg r39:V, reg p15:p(V +), reg quantile1:cls, reg y6:*, reg y7:V, reg p16:p(V +), reg r42:V, reg p17:p(V +), reg r44:V, reg p18:p(V +), reg r46:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r47:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p19:p(V +), reg r50:V, reg par:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r51:V, reg r52:V, reg c2:cls, reg r53:V, reg p20:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r55:V, reg r56:V, reg c3:cls, reg r57:V, reg p21:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r61:V, reg r62:R, reg r63:V, reg c4:cls, reg r64:V, reg r65:V, reg p22:p(V +), reg r67:V, reg ecdf2:cls, reg rnorm1:cls, reg r68:V, reg p23:p(V +), reg r70:V, reg summary2:cls, reg F10:*, reg F11:V, reg p24:p(V +), reg r72:V, reg plot:cls, reg F12:*, reg F13:V, reg p25:p(V +), reg r74:V, reg plot1:cls, reg F14:*, reg F15:V, reg p26:p(V +), reg r76:V, reg plot2:cls, reg Fn26:*, reg Fn27:V, reg p27:p(V +), reg r78:V, reg mtext:cls, reg r79:V, reg unique:cls, reg sort:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r80:V, reg r81:V, reg seq1:cls, reg p28:p(V +), reg r83:V, reg knots2:cls, reg Fn28:*, reg Fn29:V, reg p29:p(V +), reg r85:V, reg c5:cls, reg r86:V, reg p30:p(V +), reg r88:V, reg p31:p(V +), reg r90:V, reg lines:cls, reg xx:*, reg xx1:V, reg p32:p(V +), reg Fn30:cls, reg xx2:*, reg xx3:V, reg p33:p(V +), reg r93:V, reg p34:p(V +), reg r95:V, reg abline:cls, reg knots3:cls, reg Fn31:*, reg Fn32:V, reg p35:p(V +), reg r97:V, reg p36:p(V +), reg r99:V, reg plot3:cls, reg xx4:*, reg xx5:V, reg p37:p(V +), reg Fn33:cls, reg xx6:*, reg xx7:V, reg p38:p(V +), reg r102:V, reg p39:p(V +), reg r104:V, reg plot4:cls, reg Fn34:*, reg Fn35:V, reg p40:p(V +), reg r106:V, reg abline1:cls, reg knots4:cls, reg Fn36:*, reg Fn37:V, reg p41:p(V +), reg r108:V, reg p42:p(V +), reg r110:V, reg plot5:cls, reg Fn38:*, reg Fn39:V, reg p43:p(V +), reg r112:V, reg plot_ecdf:cls, reg rnorm2:cls, reg r113:V, reg p44:p(V +), reg r115:V, reg title:cls, reg r116:V, reg par1:cls, reg op:*, reg op1:V, reg p45:p(V +), reg r118:V |
    mkenv;
    r = clos inner2501545716;
    st ecdf = r;
    rnorm = ldf rnorm;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    r1 = dyn rnorm(12.0);
    check L5() else D1();
  D1():
    deopt 6 [r1];
  L5():
    st x = r1;
    ecdf = ldf ecdf;
    check L6() else D2();
  D2():
    deopt 9 [];
  L6():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r3 = dyn ecdf(p);
    check L7() else D3();
  D3():
    deopt 11 [r3];
  L7():
    st Fn = r3;
    Fn = ld Fn;
    check L8() else D4();
  D4():
    deopt 13 [Fn];
  L8():
    Fn1 = force? Fn;
    checkMissing(Fn1);
    Fn2 = ldf Fn;
    check L9() else D5();
  D5():
    deopt 16 [];
  L9():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r5 = dyn Fn2(p1);
    check L10() else D6();
  D6():
    deopt 18 [r5];
  L10():
    seq = ldf seq;
    check L11() else D7();
  D7():
    deopt 20 [];
  L11():
    p2 = prom<V +>{
      return -2.0;
    };
    r7 = dyn seq[, , by](p2, 2.0, 0.1);
    check L12() else D8();
  D8():
    deopt 25 [r7];
  L12():
    st tt = r7;
    Fn3 = ldf Fn;
    check L13() else D9();
  D9():
    deopt 29 [12.0];
  L13():
    p3 = prom<V +>{
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      return tt1;
    };
    r9 = dyn Fn3(p3);
    check L14() else D10();
  D10():
    deopt 31 [12.0, r9];
  L14():
    `*`(12.0, r9);
    summary = ldf summary;
    check L15() else D11();
  D11():
    deopt 34 [];
  L15():
    p4 = prom<V +>{
      Fn4 = ld Fn;
      Fn5 = force? Fn4;
      checkMissing(Fn5);
      return Fn5;
    };
    r12 = dyn summary(p4);
    check L16() else D12();
  D12():
    deopt 36 [r12];
  L16():
    knots = ldf knots;
    check L17() else D13();
  D13():
    deopt 38 [];
  L17():
    p5 = prom<V +>{
      Fn6 = ld Fn;
      Fn7 = force? Fn6;
      checkMissing(Fn7);
      return Fn7;
    };
    r14 = dyn knots(p5);
    check L18() else D14();
  D14():
    deopt 40 [r14];
  L18():
    sym = ldf round;
    base = ldf round in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r16):
    st y = r16;
    y = ld y;
    check L21() else D15();
  L19():
    round = ldf round in base;
    r17 = dyn round(<lang rnorm(12.0)>, 1.0);
    goto L0(r17);
  L20():
    r15 = dyn base(<lang rnorm(12.0)>, 1.0);
    goto L0(r15);
  D15():
    deopt 45 [y];
  L21():
    y1 = force? y;
    checkMissing(y1);
    c = `is.object`(y1);
    if c then L22() else L23(y1);
  L1(dx1):
    l = ld y;
    c1 = `is.object`(l);
    if c1 then L25() else L26(dx1, l);
  L22():
    dr = tryDispatchBuiltin.1("[", y1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(y3):
    __ = ldf `[` in base;
    r18 = dyn __(y3, 1.0);
    goto L1(r18);
  L2(dx7):
    st y = dx7;
    ecdf1 = ldf ecdf;
    check L28() else D16();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L25():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(dx1, dr2);
  L26(dx3, l2):
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l2, dx1, 3.0);
    goto L2(r19);
  D16():
    deopt 56 [];
  L27():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx5);
  L28():
    p6 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r21 = dyn ecdf1(p6);
    check L29() else D17();
  D17():
    deopt 58 [r21];
  L29():
    st Fn12 = r21;
    Fn12 = ld Fn12;
    check L30() else D18();
  D18():
    deopt 60 [Fn12];
  L30():
    Fn13 = force? Fn12;
    checkMissing(Fn13);
    knots1 = ldf knots;
    check L31() else D19();
  D19():
    deopt 63 [];
  L31():
    p7 = prom<V +>{
      Fn14 = ld Fn12;
      Fn15 = force? Fn14;
      checkMissing(Fn15);
      return Fn15;
    };
    r23 = dyn knots1(p7);
    check L32() else D20();
  D20():
    deopt 65 [r23];
  L32():
    summary1 = ldf summary;
    check L33() else D21();
  D21():
    deopt 67 [];
  L33():
    p8 = prom<V +>{
      Fn16 = ld Fn12;
      Fn17 = force? Fn16;
      checkMissing(Fn17);
      return Fn17;
    };
    r25 = dyn summary1(p8);
    check L34() else D22();
  D22():
    deopt 69 [r25];
  L34():
    summary_stepfun = ldf `summary.stepfun`;
    check L35() else D23();
  D23():
    deopt 71 [];
  L35():
    p9 = prom<V +>{
      Fn18 = ld Fn12;
      Fn19 = force? Fn18;
      checkMissing(Fn19);
      return Fn19;
    };
    r27 = dyn summary_stepfun(p9);
    check L36() else D24();
  D24():
    deopt 73 [r27];
  L36():
    ls = ldf ls;
    check L37() else D25();
  D25():
    deopt 75 [];
  L37():
    p11 = prom<V +>{
      environment = ldf environment;
      p10 = prom<V +>{
        Fn20 = ld Fn12;
        Fn21 = force? Fn20;
        checkMissing(Fn21);
        return Fn21;
      };
      r29 = dyn environment(p10);
      return r29;
    };
    r31 = dyn ls(p11);
    check L38() else D26();
  D26():
    deopt 77 [r31];
  L38():
    __1 = ldf `::`;
    check L39() else D27();
  D27():
    deopt 79 [];
  L39():
    r32 = dyn __1("utils", "ls.str");
    check L40() else D28();
  D28():
    deopt 82 [r32];
  L40():
    checkFun.0(r32);
    r33 = r32 as cls;
    p13 = prom<V +>{
      environment1 = ldf environment;
      p12 = prom<V +>{
        Fn22 = ld Fn12;
        Fn23 = force? Fn22;
        checkMissing(Fn23);
        return Fn23;
      };
      r35 = dyn environment1(p12);
      return r35;
    };
    r37 = dyn r33(p13);
    check L41() else D29();
  D29():
    deopt 85 [r37];
  L41():
    stopifnot = ldf stopifnot;
    check L42() else D30();
  D30():
    deopt 87 [];
  L42():
    p18 = prom<V +>{
      all_equal = ldf `all.equal`;
      p15 = prom<V +>{
        quantile = ldf quantile;
        p14 = prom<V +>{
          Fn24 = ld Fn12;
          Fn25 = force? Fn24;
          checkMissing(Fn25);
          return Fn25;
        };
        r39 = dyn quantile(p14);
        return r39;
      };
      p17 = prom<V +>{
        quantile1 = ldf quantile;
        p16 = prom<V +>{
          y6 = ld y;
          y7 = force? y6;
          checkMissing(y7);
          return y7;
        };
        r42 = dyn quantile1(p16);
        return r42;
      };
      r44 = dyn all_equal(p15, p17);
      return r44;
    };
    r46 = dyn stopifnot(p18);
    check L43() else D31();
  D31():
    deopt 89 [r46];
  L43():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L3():
    par = ldf par;
    check L48() else D34();
  L44():
    require = ldf require;
    check L46() else D32();
  L45():
    r47 = dyn base1(<sym graphics>);
    goto L3();
  D32():
    deopt 92 [];
  D34():
    deopt 96 [];
  L46():
    p19 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r50 = dyn require(p19);
    check L47() else D33();
  L48():
    p20 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r52):
      return r52;
    L1():
      c2 = ldf c in base;
      r53 = dyn c2(3.0, 1.0);
      goto L0(r53);
    L2():
      r51 = dyn base2(3.0, 1.0);
      goto L0(r51);
    };
    p21 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      c3 = ldf c in base;
      r57 = dyn c3(1.5, 0.8, 0.0);
      goto L0(r57);
    L2():
      r55 = dyn base3(1.5, 0.8, 0.0);
      goto L0(r55);
    };
    p22 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r62, r63):
      r65 = `+`(r62, r63);
      return r65;
    L1():
      c4 = ldf c in base;
      r64 = dyn c4(3.0, 3.0, 2.0, 1.0);
      goto L0(0.1, r64);
    L2():
      r61 = dyn base4(3.0, 3.0, 2.0, 1.0);
      goto L0(0.1, r61);
    };
    r67 = dyn par[mfrow, mgp, mar](p20, p21, p22);
    check L49() else D35();
  D33():
    deopt 94 [r50];
  D35():
    deopt 103 [r67];
  L47():
    goto L3();
  L49():
    st op = r67;
    ecdf2 = ldf ecdf;
    check L50() else D36();
  D36():
    deopt 106 [];
  L50():
    p23 = prom<V +>{
      rnorm1 = ldf rnorm;
      r68 = dyn rnorm1(10.0);
      return r68;
    };
    r70 = dyn ecdf2(p23);
    check L51() else D37();
  D37():
    deopt 108 [r70];
  L51():
    st F10 = r70;
    summary2 = ldf summary;
    check L52() else D38();
  D38():
    deopt 111 [];
  L52():
    p24 = prom<V +>{
      F10 = ld F10;
      F11 = force? F10;
      checkMissing(F11);
      return F11;
    };
    r72 = dyn summary2(p24);
    check L53() else D39();
  D39():
    deopt 113 [r72];
  L53():
    plot = ldf plot;
    check L54() else D40();
  D40():
    deopt 115 [];
  L54():
    p25 = prom<V +>{
      F12 = ld F10;
      F13 = force? F12;
      checkMissing(F13);
      return F13;
    };
    r74 = dyn plot(p25);
    check L55() else D41();
  D41():
    deopt 117 [r74];
  L55():
    plot1 = ldf plot;
    check L56() else D42();
  D42():
    deopt 119 [];
  L56():
    p26 = prom<V +>{
      F14 = ld F10;
      F15 = force? F14;
      checkMissing(F15);
      return F15;
    };
    r76 = dyn plot1[, verticals, `do.points`](p26, TRUE, FALSE);
    check L57() else D43();
  D43():
    deopt 125 [r76];
  L57():
    plot2 = ldf plot;
    check L58() else D44();
  D44():
    deopt 127 [];
  L58():
    p27 = prom<V +>{
      Fn26 = ld Fn12;
      Fn27 = force? Fn26;
      checkMissing(Fn27);
      return Fn27;
    };
    r78 = dyn plot2[, lwd](p27, 2.0);
    check L59() else D45();
  D45():
    deopt 131 [r78];
  L59():
    mtext = ldf mtext;
    check L60() else D46();
  D46():
    deopt 133 [];
  L60():
    r79 = dyn mtext[, adj]("lwd = 2", 1.0);
    check L61() else D47();
  D47():
    deopt 137 [r79];
  L61():
    unique = ldf unique;
    check L62() else D48();
  D48():
    deopt 139 [];
  L62():
    p31 = prom<V +>{
      sort = ldf sort;
      p30 = prom<V +>{
        sym5 = ldf c;
        base5 = ldf c in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r81):
        return r81;
      L1():
        seq1 = ldf seq;
        p28 = prom<V +>{
          return -3.0;
        };
        r83 = dyn seq1[, , `length.out`](p28, 2.0, 201.0);
        knots2 = ldf knots;
        p29 = prom<V +>{
          Fn28 = ld Fn12;
          Fn29 = force? Fn28;
          checkMissing(Fn29);
          return Fn29;
        };
        r85 = dyn knots2(p29);
        c5 = ldf c in base;
        r86 = dyn c5(r83, r85);
        goto L0(r86);
      L2():
        r80 = dyn base5(<lang seq(`-`(3.0), 2.0, length.out=201.0)>, <lang knots(Fn12)>);
        goto L0(r80);
      };
      r88 = dyn sort(p30);
      return r88;
    };
    r90 = dyn unique(p31);
    check L63() else D49();
  D49():
    deopt 141 [r90];
  L63():
    st xx = r90;
    lines = ldf lines;
    check L64() else D50();
  D50():
    deopt 144 [];
  L64():
    p32 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p34 = prom<V +>{
      Fn30 = ldf Fn12;
      p33 = prom<V +>{
        xx2 = ld xx;
        xx3 = force? xx2;
        checkMissing(xx3);
        return xx3;
      };
      r93 = dyn Fn30(p33);
      return r93;
    };
    r95 = dyn lines[, , col](p32, p34, "blue");
    check L65() else D51();
  D51():
    deopt 149 [r95];
  L65():
    abline = ldf abline;
    check L66() else D52();
  D52():
    deopt 151 [];
  L66():
    p36 = prom<V +>{
      knots3 = ldf knots;
      p35 = prom<V +>{
        Fn31 = ld Fn12;
        Fn32 = force? Fn31;
        checkMissing(Fn32);
        return Fn32;
      };
      r97 = dyn knots3(p35);
      return r97;
    };
    r99 = dyn abline[v, lty, col](p36, 2.0, "gray70");
    check L67() else D53();
  D53():
    deopt 158 [r99];
  L67():
    plot3 = ldf plot;
    check L68() else D54();
  D54():
    deopt 160 [];
  L68():
    p37 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      return xx5;
    };
    p39 = prom<V +>{
      Fn33 = ldf Fn12;
      p38 = prom<V +>{
        xx6 = ld xx;
        xx7 = force? xx6;
        checkMissing(xx7);
        return xx7;
      };
      r102 = dyn Fn33(p38);
      return r102;
    };
    r104 = dyn plot3[, , type, cex](p37, p39, "o", 0.1);
    check L69() else D55();
  D55():
    deopt 167 [r104];
  L69():
    plot4 = ldf plot;
    check L70() else D56();
  D56():
    deopt 169 [];
  L70():
    p40 = prom<V +>{
      Fn34 = ld Fn12;
      Fn35 = force? Fn34;
      checkMissing(Fn35);
      return Fn35;
    };
    r106 = dyn plot4[, `col.hor`, add](p40, "red", TRUE);
    check L71() else D57();
  D57():
    deopt 175 [r106];
  L71():
    abline1 = ldf abline;
    check L72() else D58();
  D58():
    deopt 177 [];
  L72():
    p42 = prom<V +>{
      knots4 = ldf knots;
      p41 = prom<V +>{
        Fn36 = ld Fn12;
        Fn37 = force? Fn36;
        checkMissing(Fn37);
        return Fn37;
      };
      r108 = dyn knots4(p41);
      return r108;
    };
    r110 = dyn abline1[v, lty, col](p42, 2.0, "gray70");
    check L73() else D59();
  D59():
    deopt 184 [r110];
  L73():
    plot5 = ldf plot;
    check L74() else D60();
  D60():
    deopt 186 [];
  L74():
    p43 = prom<V +>{
      Fn38 = ld Fn12;
      Fn39 = force? Fn38;
      checkMissing(Fn39);
      return Fn39;
    };
    r112 = dyn plot5[, verticals, `col.points`, `col.hor`, `col.vert`](p43, TRUE, "blue", "red", "bisque");
    check L75() else D61();
  D61():
    deopt 196 [r112];
  L75():
    plot_ecdf = ldf `plot.ecdf`;
    check L76() else D62();
  D62():
    deopt 198 [];
  L76():
    p44 = prom<V +>{
      rnorm2 = ldf rnorm;
      r113 = dyn rnorm2(24.0);
      return r113;
    };
    r115 = dyn plot_ecdf(p44);
    check L77() else D63();
  D63():
    deopt 200 [r115];
  L77():
    title = ldf title;
    check L78() else D64();
  D64():
    deopt 202 [];
  L78():
    r116 = dyn title[, adj]("via  simple  plot.ecdf(x)", 1.0);
    check L79() else D65();
  D65():
    deopt 206 [r116];
  L79():
    par1 = ldf par;
    check L80() else D66();
  D66():
    deopt 208 [];
  L80():
    p45 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r118 = dyn par1(p45);
    check L81() else D67();
  D67():
    deopt 210 [r118];
  L81():
    popenv;
    return r118;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sort:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg length:cls, reg r4:V, reg n:*, reg n1:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg unique:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r9:V, reg approxfun:cls, reg vals:*, reg vals1:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg tabulate:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x7:*, reg x8:V, reg vals2:*, reg vals3:V, reg match:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg cumsum:cls, reg r18:V, reg n2:*, reg n3:V, reg r19:V, reg p4:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg rval:*, reg rval1:V, reg class:cls, reg r26:V, reg c1:cls, reg r27:V, reg l:*, reg class__:cls, reg r28:V, reg assign:cls, reg n4:*, reg n5:V, reg p5:p(V +), reg environment:cls, reg rval2:*, reg rval3:V, reg p6:p(V +), reg r31:V, reg p7:p(V +), reg r33:V, reg sys_call:cls, reg r34:V, reg l1:*, reg attr__:cls, reg r35:V, reg rval4:*, reg rval5:V |
    mkenv;
    st x = x;
    sort = ldf sort;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn sort(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    st x = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r3):
    st n = r3;
    n = ld n;
    check L11() else D4();
  L7():
    x3 = ld x;
    check L9() else D2();
  L8():
    r2 = dyn base(<sym x>);
    goto L0(r2);
  D2():
    deopt 7 [x3];
  D4():
    deopt 12 [n];
  L9():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r4 = dyn length(x4);
    check L10() else D3();
  L11():
    n1 = force? n;
    checkMissing(n1);
    r5 = `<`(n1, 1.0);
    c = `as.logical`(r5);
    if c then L12() else L1();
  D3():
    deopt 10 [r4];
  L1():
    goto L2();
  L2():
    unique = ldf unique;
    check L16() else D7();
  L10():
    goto L0(r4);
  L12():
    stop = ldf stop;
    check L13() else D5();
  D5():
    deopt 17 [];
  D7():
    deopt 23 [];
  L13():
    r6 = dyn stop("'x' must have 1 or more non-missing values");
    check L14() else D6();
  L16():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r9 = dyn unique(p1);
    check L17() else D8();
  D6():
    deopt 19 [r6];
  D8():
    deopt 25 [r9];
  L14():
    goto L2();
  L17():
    st vals = r9;
    approxfun = ldf approxfun;
    check L18() else D9();
  D9():
    deopt 28 [];
  L18():
    p2 = prom<V +>{
      vals = ld vals;
      vals1 = force? vals;
      checkMissing(vals1);
      return vals1;
    };
    p4 = prom<V +>{
      sym1 = ldf cumsum;
      base1 = ldf cumsum in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r19 = `/`(r12, n3);
      return r19;
    L1():
      tabulate = ldf tabulate;
      p3 = prom<V +>{
        sym2 = ldf match;
        base2 = ldf match in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r14):
        return r14;
      L1():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        vals2 = ld vals;
        vals3 = force? vals2;
        checkMissing(vals3);
        match = ldf match in base;
        r15 = dyn match(x8, vals3, NA_INT, NULL);
        goto L0(r15);
      L2():
        r13 = dyn base2(<sym x>, <sym vals>);
        goto L0(r13);
      };
      r17 = dyn tabulate(p3);
      cumsum = ldf cumsum in base;
      r18 = dyn cumsum(r17);
      goto L0(r18);
    L2():
      r11 = dyn base1(<lang tabulate(match(x, vals))>);
      goto L0(r11);
    };
    r21 = dyn approxfun[, , method, yleft, yright, f, ties](p2, p4, "constant", 0.0, 1.0, 0.0, "ordered");
    check L19() else D10();
  D10():
    deopt 41 [r21];
  L19():
    st rval = r21;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L3(r23):
    l = ld rval;
    class__ = ldf `class<-`;
    check L27() else D14();
  L20():
    sym4 = ldf class;
    base4 = ldf class in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L22() else L23();
  L21():
    r22 = dyn base3("ecdf", "stepfun", <lang class(rval)>);
    goto L3(r22);
  D14():
    deopt 56 [r23, l, r23];
  L4(r25):
    c1 = ldf c in base;
    r27 = dyn c1("ecdf", "stepfun", r25);
    check L26() else D13();
  L22():
    rval = ld rval;
    check L24() else D11();
  L23():
    r24 = dyn base4(<sym rval>);
    goto L4(r24);
  L27():
    r28 = dyn class__(l, NULL, r23);
    check L28() else D15();
  D11():
    deopt 49 [rval];
  D13():
    deopt 54 [r27];
  D15():
    deopt 58 [r23, r28];
  L24():
    rval1 = force? rval;
    checkMissing(rval1);
    class = ldf class in base;
    r26 = dyn class(rval1);
    check L25() else D12();
  L26():
    goto L3(r27);
  L28():
    st rval = r28;
    assign = ldf assign;
    check L29() else D16();
  D12():
    deopt 52 [r26];
  D16():
    deopt 61 [];
  L25():
    goto L4(r26);
  L29():
    p5 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    p7 = prom<V +>{
      environment = ldf environment;
      p6 = prom<V +>{
        rval2 = ld rval;
        rval3 = force? rval2;
        checkMissing(rval3);
        return rval3;
      };
      r31 = dyn environment(p6);
      return r31;
    };
    r33 = dyn assign[, , envir]("nobs", p5, p7);
    check L30() else D17();
  D17():
    deopt 66 [r33];
  L30():
    sys_call = ldf `sys.call`;
    check L31() else D18();
  D18():
    deopt 68 [];
  L31():
    r34 = dyn sys_call();
    check L32() else D19();
  D19():
    deopt 69 [r34];
  L32():
    l1 = ld rval;
    attr__ = ldf `attr<-`;
    check L33() else D20();
  D20():
    deopt 71 [r34, l1, r34];
  L33():
    r35 = dyn attr__(l1, NULL, "call", r34);
    check L34() else D21();
  D21():
    deopt 74 [r34, r35];
  L34():
    st rval = r35;
    rval4 = ld rval;
    check L35() else D22();
  D22():
    deopt 76 [rval4];
  L35():
    rval5 = force? rval4;
    checkMissing(rval5);
    popenv;
    return rval5;
  }
}