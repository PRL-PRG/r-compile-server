fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg require1:cls, reg graphics:*, reg graphics1:V, reg p1:p(V +), reg r8:V, reg factor:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg round:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg rnorm:cls, reg n:*, reg n1:V, reg nn:*, reg nn1:V, reg r14:V, reg p3:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg r26:V, reg g:*, reg g1:V, reg as_numeric:cls, reg r27:V, reg r28:V, reg r29:V, reg split:cls, reg x:*, reg x1:V, reg p4:p(V +), reg g2:*, reg g3:V, reg p5:p(V +), reg r32:V, reg boxplot:cls, reg xg:*, reg xg1:V, reg p6:p(V +), reg r34:V, reg sapply:cls, reg xg2:*, reg xg3:V, reg p7:p(V +), reg length:*, reg length1:V, reg p8:p(V +), reg r37:V, reg sapply1:cls, reg xg4:*, reg xg5:V, reg p9:p(V +), reg mean:*, reg mean1:V, reg p10:p(V +), reg r40:V, reg unsplit:cls, reg lapply:cls, reg split1:cls, reg x2:*, reg x3:V, reg p11:p(V +), reg g4:*, reg g5:V, reg p12:p(V +), reg r43:V, reg p13:p(V +), reg scale:*, reg scale1:V, reg p14:p(V +), reg r46:V, reg p15:p(V +), reg g6:*, reg g7:V, reg p16:p(V +), reg r49:V, reg x4:*, reg x5:V, reg lapply1:cls, reg split2:cls, reg x6:*, reg x7:V, reg p17:p(V +), reg g8:*, reg g9:V, reg p18:p(V +), reg r52:V, reg p19:p(V +), reg scale2:*, reg scale3:V, reg p20:p(V +), reg r55:V, reg l:*, reg split__:cls, reg g10:*, reg g11:V, reg p21:p(V +), reg r57:V, reg tapply:cls, reg z:*, reg z1:V, reg p22:p(V +), reg g12:*, reg g13:V, reg p23:p(V +), reg sd:*, reg sd1:V, reg p24:p(V +), reg r61:V, reg tapply1:cls, reg zz:*, reg zz1:V, reg p25:p(V +), reg g14:*, reg g15:V, reg p26:p(V +), reg sd2:*, reg sd3:V, reg p27:p(V +), reg r65:V, reg airquality:*, reg airquality1:V, reg c:L, reg airquality3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r66:V, reg split3:cls, reg airquality4:*, reg airquality5:V, reg p28:p(V +), reg g16:*, reg g17:V, reg p29:p(V +), reg r69:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r70:V, reg l1:*, reg l2:V, reg split4:cls, reg airquality6:*, reg airquality7:V, reg p30:p(V +), reg __:cls, reg r73:V, reg p31:p(V +), reg r75:V, reg identical:cls, reg r76:V, reg lapply2:cls, reg l3:*, reg l4:V, reg p32:p(V +), reg transform:*, reg transform1:V, reg p33:p(V +), reg scale4:cls, reg Ozone:*, reg Ozone1:V, reg p34:p(V +), reg r80:V, reg p35:p(V +), reg r82:V, reg unsplit1:cls, reg l5:*, reg l6:V, reg p36:p(V +), reg g18:*, reg g19:V, reg p37:p(V +), reg r85:V, reg head:cls, reg aq2:*, reg aq3:V, reg p38:p(V +), reg r87:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r88:V, reg with:cls, reg aq4:*, reg aq5:V, reg p39:p(V +), reg tapply2:cls, reg Oz_Z:*, reg Oz_Z1:V, reg p40:p(V +), reg Month:*, reg Month1:V, reg p41:p(V +), reg sd4:*, reg sd5:V, reg p42:p(V +), reg r94:V, reg p43:p(V +), reg r96:V, reg cbind:cls, reg p44:p(V +), reg p45:p(V +), reg r99:V, reg split5:cls, reg ma:*, reg ma1:V, reg p46:p(V +), reg col:cls, reg ma2:*, reg ma3:V, reg p47:p(V +), reg r102:V, reg p48:p(V +), reg r104:V, reg split6:cls, reg p49:p(V +), reg p50:p(V +), reg r107:V |
    mkenv;
    r = clos inner2674830739;
    st split = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    require = ldf require;
    check L8() else D0();
  L7():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    st n = 10.0;
    st nn = 100.0;
    factor = ldf factor;
    check L14() else D4();
  L8():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L9() else D1();
  L10():
    require1 = ldf require;
    check L12() else D2();
  L11():
    r5 = dyn base1(<sym graphics>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  D4():
    deopt 20 [];
  L9():
    goto L0();
  L12():
    p1 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r8 = dyn require1(p1);
    check L13() else D3();
  L14():
    p2 = prom<V +>{
      sym2 = ldf round;
      base2 = ldf round in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      round = ldf round in base;
      r11 = dyn round(<lang `*`(n, runif(`*`(n, nn)))>);
      goto L0(r11);
    L2():
      r9 = dyn base2(<lang `*`(n, runif(`*`(n, nn)))>);
      goto L0(r9);
    };
    r13 = dyn factor(p2);
    check L15() else D5();
  D3():
    deopt 12 [r8];
  D5():
    deopt 22 [r13];
  L13():
    goto L1();
  L15():
    st g = r13;
    rnorm = ldf rnorm;
    check L16() else D6();
  D6():
    deopt 25 [];
  L16():
    p3 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      nn = ld nn;
      nn1 = force? nn;
      checkMissing(nn1);
      r14 = `*`(n1, nn1);
      return r14;
    };
    r16 = dyn rnorm(p3);
    check L17() else D7();
  D7():
    deopt 27 [r16];
  L17():
    sym3 = ldf sqrt;
    base3 = ldf sqrt in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L18() else L19();
  L2(r20, r21):
    r29 = `+`(r20, r21);
    st x = r29;
    split = ldf split;
    check L24() else D10();
  L18():
    sym4 = ldf `as.numeric`;
    base4 = ldf `as.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L20() else L21();
  L19():
    r19 = dyn base3(<lang as.numeric(g)>);
    goto L2(r16, r19);
  D10():
    deopt 38 [];
  L3(r25, r26):
    r28 = sqrt(r26);
    goto L2(r25, r28);
  L20():
    g = ld g;
    check L22() else D8();
  L21():
    r24 = dyn base4(<sym g>);
    goto L3(r16, r24);
  L24():
    p4 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p5 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    r32 = dyn split(p4, p5);
    check L25() else D11();
  D8():
    deopt 30 [r16, g];
  D11():
    deopt 41 [r32];
  L22():
    g1 = force? g;
    checkMissing(g1);
    as_numeric = ldf `as.numeric` in base;
    r27 = dyn as_numeric(g1);
    check L23() else D9();
  L25():
    st xg = r32;
    boxplot = ldf boxplot;
    check L26() else D12();
  D9():
    deopt 33 [r16, r27];
  D12():
    deopt 44 [];
  L23():
    goto L3(r16, r27);
  L26():
    p6 = prom<V +>{
      xg = ld xg;
      xg1 = force? xg;
      checkMissing(xg1);
      return xg1;
    };
    r34 = dyn boxplot[, col, notch, varwidth](p6, "lavender", TRUE, TRUE);
    check L27() else D13();
  D13():
    deopt 52 [r34];
  L27():
    sapply = ldf sapply;
    check L28() else D14();
  D14():
    deopt 54 [];
  L28():
    p7 = prom<V +>{
      xg2 = ld xg;
      xg3 = force? xg2;
      checkMissing(xg3);
      return xg3;
    };
    p8 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    r37 = dyn sapply(p7, p8);
    check L29() else D15();
  D15():
    deopt 57 [r37];
  L29():
    sapply1 = ldf sapply;
    check L30() else D16();
  D16():
    deopt 59 [];
  L30():
    p9 = prom<V +>{
      xg4 = ld xg;
      xg5 = force? xg4;
      checkMissing(xg5);
      return xg5;
    };
    p10 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r40 = dyn sapply1(p9, p10);
    check L31() else D17();
  D17():
    deopt 62 [r40];
  L31():
    unsplit = ldf unsplit;
    check L32() else D18();
  D18():
    deopt 64 [];
  L32():
    p15 = prom<V +>{
      lapply = ldf lapply;
      p13 = prom<V +>{
        split1 = ldf split;
        p11 = prom<V +>{
          x2 = ld x;
          x3 = force? x2;
          checkMissing(x3);
          return x3;
        };
        p12 = prom<V +>{
          g4 = ld g;
          g5 = force? g4;
          checkMissing(g5);
          return g5;
        };
        r43 = dyn split1(p11, p12);
        return r43;
      };
      p14 = prom<V +>{
        scale = ld scale;
        scale1 = force? scale;
        checkMissing(scale1);
        return scale1;
      };
      r46 = dyn lapply(p13, p14);
      return r46;
    };
    p16 = prom<V +>{
      g6 = ld g;
      g7 = force? g6;
      checkMissing(g7);
      return g7;
    };
    r49 = dyn unsplit(p15, p16);
    check L33() else D19();
  D19():
    deopt 67 [r49];
  L33():
    st z = r49;
    x4 = ld x;
    check L34() else D20();
  D20():
    deopt 69 [x4];
  L34():
    x5 = force? x4;
    checkMissing(x5);
    st zz = x5;
    lapply1 = ldf lapply;
    check L35() else D21();
  D21():
    deopt 73 [];
  L35():
    p19 = prom<V +>{
      split2 = ldf split;
      p17 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      p18 = prom<V +>{
        g8 = ld g;
        g9 = force? g8;
        checkMissing(g9);
        return g9;
      };
      r52 = dyn split2(p17, p18);
      return r52;
    };
    p20 = prom<V +>{
      scale2 = ld scale;
      scale3 = force? scale2;
      checkMissing(scale3);
      return scale3;
    };
    r55 = dyn lapply1(p19, p20);
    check L36() else D22();
  D22():
    deopt 76 [r55];
  L36():
    l = ld zz;
    split__ = ldf `split<-`;
    check L37() else D23();
  D23():
    deopt 78 [r55, l, r55];
  L37():
    p21 = prom<V +>{
      g10 = ld g;
      g11 = force? g10;
      checkMissing(g11);
      return g11;
    };
    r57 = dyn split__(l, NULL, p21, r55);
    check L38() else D24();
  D24():
    deopt 81 [r55, r57];
  L38():
    st zz = r57;
    tapply = ldf tapply;
    check L39() else D25();
  D25():
    deopt 84 [];
  L39():
    p22 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p23 = prom<V +>{
      g12 = ld g;
      g13 = force? g12;
      checkMissing(g13);
      return g13;
    };
    p24 = prom<V +>{
      sd = ld sd;
      sd1 = force? sd;
      checkMissing(sd1);
      return sd1;
    };
    r61 = dyn tapply(p22, p23, p24);
    check L40() else D26();
  D26():
    deopt 88 [r61];
  L40():
    tapply1 = ldf tapply;
    check L41() else D27();
  D27():
    deopt 90 [];
  L41():
    p25 = prom<V +>{
      zz = ld zz;
      zz1 = force? zz;
      checkMissing(zz1);
      return zz1;
    };
    p26 = prom<V +>{
      g14 = ld g;
      g15 = force? g14;
      checkMissing(g15);
      return g15;
    };
    p27 = prom<V +>{
      sd2 = ld sd;
      sd3 = force? sd2;
      checkMissing(sd3);
      return sd3;
    };
    r65 = dyn tapply1(p25, p26, p27);
    check L42() else D28();
  D28():
    deopt 94 [r65];
  L42():
    airquality = ld airquality;
    check L43() else D29();
  D29():
    deopt 95 [airquality];
  L43():
    airquality1 = force? airquality;
    checkMissing(airquality1);
    c = `is.object`(airquality1);
    if c then L45() else L46(airquality1);
  L44(dx1):
    st g = dx1;
    split3 = ldf split;
    check L48() else D30();
  L45():
    dr = tryDispatchBuiltin.1("$", airquality1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(airquality3):
    r66 = `$`(airquality3, <sym Month>);
    goto L44(r66);
  D30():
    deopt 100 [];
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L44(dx);
  L48():
    p28 = prom<V +>{
      airquality4 = ld airquality;
      airquality5 = force? airquality4;
      checkMissing(airquality5);
      return airquality5;
    };
    p29 = prom<V +>{
      g16 = ld g;
      g17 = force? g16;
      checkMissing(g17);
      return g17;
    };
    r69 = dyn split3(p28, p29);
    check L49() else D31();
  D31():
    deopt 103 [r69];
  L49():
    st l = r69;
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L4():
    lapply2 = ldf lapply;
    check L56() else D36();
  L50():
    l1 = ld l;
    check L52() else D32();
  L51():
    r70 = dyn base5(<sym l>, <lang split(airquality, `~`(Month))>);
    goto L4();
  D32():
    deopt 107 [l1];
  D36():
    deopt 124 [];
  L52():
    l2 = force? l1;
    checkMissing(l2);
    split4 = ldf split;
    check L53() else D33();
  L56():
    p32 = prom<V +>{
      l3 = ld l;
      l4 = force? l3;
      checkMissing(l4);
      return l4;
    };
    p33 = prom<V +>{
      transform = ld transform;
      transform1 = force? transform;
      checkMissing(transform1);
      return transform1;
    };
    p35 = prom<V +>{
      scale4 = ldf scale;
      p34 = prom<V +>{
        Ozone = ld Ozone;
        Ozone1 = force? Ozone;
        checkMissing(Ozone1);
        return Ozone1;
      };
      r80 = dyn scale4(p34);
      return r80;
    };
    r82 = dyn lapply2[, , `Oz.Z`](p32, p33, p35);
    check L57() else D37();
  D33():
    deopt 110 [];
  D37():
    deopt 129 [r82];
  L53():
    p30 = prom<V +>{
      airquality6 = ld airquality;
      airquality7 = force? airquality6;
      checkMissing(airquality7);
      return airquality7;
    };
    p31 = prom<V +>{
      __ = ldf `~` in base;
      r73 = dyn __(<sym Month>);
      return r73;
    };
    r75 = dyn split4(p30, p31);
    check L54() else D34();
  L57():
    st l = r82;
    unsplit1 = ldf unsplit;
    check L58() else D38();
  D34():
    deopt 113 [r75];
  D38():
    deopt 132 [];
  L54():
    identical = ldf identical in base;
    r76 = dyn identical(l2, r75, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L55() else D35();
  L58():
    p36 = prom<V +>{
      l5 = ld l;
      l6 = force? l5;
      checkMissing(l6);
      return l6;
    };
    p37 = prom<V +>{
      g18 = ld g;
      g19 = force? g18;
      checkMissing(g19);
      return g19;
    };
    r85 = dyn unsplit1(p36, p37);
    check L59() else D39();
  D35():
    deopt 122 [r76];
  D39():
    deopt 135 [r85];
  L55():
    goto L4();
  L59():
    st aq2 = r85;
    head = ldf head;
    check L60() else D40();
  D40():
    deopt 138 [];
  L60():
    p38 = prom<V +>{
      aq2 = ld aq2;
      aq3 = force? aq2;
      checkMissing(aq3);
      return aq3;
    };
    r87 = dyn head(p38);
    check L61() else D41();
  D41():
    deopt 140 [r87];
  L61():
    sym6 = ldf with;
    base6 = ldf with in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  L5():
    cbind = ldf cbind;
    check L66() else D44();
  L62():
    with = ldf with;
    check L64() else D42();
  L63():
    r88 = dyn base6(<sym aq2>, <lang tapply(Oz.Z, Month, sd, na.rm=TRUE)>);
    goto L5();
  D42():
    deopt 143 [];
  D44():
    deopt 148 [];
  L64():
    p39 = prom<V +>{
      aq4 = ld aq2;
      aq5 = force? aq4;
      checkMissing(aq5);
      return aq5;
    };
    p43 = prom<V +>{
      tapply2 = ldf tapply;
      p40 = prom<V +>{
        Oz_Z = ld `Oz.Z`;
        Oz_Z1 = force? Oz_Z;
        checkMissing(Oz_Z1);
        return Oz_Z1;
      };
      p41 = prom<V +>{
        Month = ld Month;
        Month1 = force? Month;
        checkMissing(Month1);
        return Month1;
      };
      p42 = prom<V +>{
        sd4 = ld sd;
        sd5 = force? sd4;
        checkMissing(sd5);
        return sd5;
      };
      r94 = dyn tapply2[, , , `na.rm`](p40, p41, p42, TRUE);
      return r94;
    };
    r96 = dyn with(p39, p43);
    check L65() else D43();
  L66():
    p44 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p45 = prom<V +>{
      return <real 16.0, 9.0, 4.0, 1.0, 0.0, 1.0, 4.0, 9.0, 16.0, 25.0>;
    };
    r99 = dyn cbind[x, y](p44, p45);
    check L67() else D45();
  D43():
    deopt 146 [r96];
  D45():
    deopt 153 [r99];
  L65():
    goto L5();
  L67():
    st ma = r99;
    split5 = ldf split;
    check L68() else D46();
  D46():
    deopt 156 [];
  L68():
    p46 = prom<V +>{
      ma = ld ma;
      ma1 = force? ma;
      checkMissing(ma1);
      return ma1;
    };
    p48 = prom<V +>{
      col = ldf col;
      p47 = prom<V +>{
        ma2 = ld ma;
        ma3 = force? ma2;
        checkMissing(ma3);
        return ma3;
      };
      r102 = dyn col(p47);
      return r102;
    };
    r104 = dyn split5(p46, p48);
    check L69() else D47();
  D47():
    deopt 159 [r104];
  L69():
    split6 = ldf split;
    check L70() else D48();
  D48():
    deopt 161 [];
  L70():
    p49 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p50 = prom<V +>{
      return <int 1, 2>;
    };
    r107 = dyn split6(p49, p50);
    check L71() else D49();
  D49():
    deopt 164 [r107];
  L71():
    popenv;
    return r107;
  }
}
fun inner2674830739(x, f, drop, `...`) {
  (reg x:*, reg f:*, reg drop:*, reg ddd:dots) -+> V { var x:*, var f:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st f = f;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L0(FALSE) else L0(drop);
  L0(drop_orDefault):
    st drop = drop_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("split");
    goto L1(r2);
  L3():
    r = dyn base("split");
    goto L1(r);
  }
}