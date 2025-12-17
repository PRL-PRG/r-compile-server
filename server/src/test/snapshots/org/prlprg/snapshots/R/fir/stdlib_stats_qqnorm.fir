fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg rt:cls, reg r5:V, reg qqnorm:cls, reg y:*, reg y1:V, reg p1:p(V +), reg r7:V, reg qqline:cls, reg y2:*, reg y3:V, reg p2:p(V +), reg r9:V, reg qqplot:cls, reg y4:*, reg y5:V, reg p3:p(V +), reg rt1:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg qqnorm1:cls, reg precip:*, reg precip1:V, reg p5:p(V +), reg r15:V, reg rchisq:cls, reg r16:V, reg qqplot1:cls, reg qchisq:cls, reg ppoints:cls, reg r17:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg y6:*, reg y7:V, reg p8:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg expression:cls, reg r24:V, reg p9:p(V +), reg r26:V, reg qqline1:cls, reg y8:*, reg y9:V, reg p10:p(V +), reg r28:cls, reg p11:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg c:cls, reg r32:V, reg p12:p(V +), reg r34:V, reg mtext:cls, reg r35:V, reg data_frame:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg c1:cls, reg r38:V, reg p13:p(V +), reg gl:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg c2:cls, reg r42:V, reg p14:p(V +), reg r44:V, reg p15:p(V +), reg r46:V, reg ks_test:cls, reg __:cls, reg r47:V, reg p16:p(V +), reg switzer:*, reg switzer1:V, reg p17:p(V +), reg r50:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg with:cls, reg switzer2:*, reg switzer3:V, reg p18:p(V +), reg split:cls, reg angle:*, reg angle1:V, reg p19:p(V +), reg sex:*, reg sex1:V, reg p20:p(V +), reg r56:V, reg p21:p(V +), reg r58:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r59:V, reg with1:cls, reg d:*, reg d1:V, reg p22:p(V +), reg qqplot2:cls, reg Female:*, reg Female1:V, reg p23:p(V +), reg Male:*, reg Male1:V, reg p24:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r64:V, reg r65:V, reg c3:cls, reg r66:V, reg p25:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r68:V, reg r69:V, reg c4:cls, reg r70:V, reg p26:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r72:V, reg r73:V, reg list:cls, reg r74:V, reg p27:p(V +), reg r76:V, reg p28:p(V +), reg r78:V, reg abline:cls, reg r79:V, reg set_seed:cls, reg r80:V, reg rnorm:cls, reg r81:V, reg rnorm1:cls, reg r82:V, reg ks_test1:cls, reg x:*, reg x1:V, reg p29:p(V +), reg y10:*, reg y11:V, reg p30:p(V +), reg ex:*, reg ex1:V, reg p31:p(V +), reg r86:V, reg c5:L, reg r88:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r89:V, reg qqplot3:cls, reg x2:*, reg x3:V, reg p32:p(V +), reg y12:*, reg y13:V, reg p33:p(V +), reg pval:*, reg pval1:V, reg r92:V, reg p34:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r94:V, reg r95:V, reg ex2:*, reg ex3:V, reg list1:cls, reg r96:V, reg p35:p(V +), reg r98:V, reg abline1:cls, reg r99:V |
    mkenv;
    r = clos inner2813596033;
    st qqnorm = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    rt = ldf rt;
    check L7() else D2();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    r5 = dyn rt[, df](200.0, 5.0);
    check L8() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r5];
  L6():
    goto L0();
  L8():
    st y = r5;
    qqnorm = ldf qqnorm;
    check L9() else D4();
  D4():
    deopt 16 [];
  L9():
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r7 = dyn qqnorm(p1);
    check L10() else D5();
  D5():
    deopt 18 [r7];
  L10():
    qqline = ldf qqline;
    check L11() else D6();
  D6():
    deopt 20 [];
  L11():
    p2 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r9 = dyn qqline[, col](p2, 2.0);
    check L12() else D7();
  D7():
    deopt 24 [r9];
  L12():
    qqplot = ldf qqplot;
    check L13() else D8();
  D8():
    deopt 26 [];
  L13():
    p3 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p4 = prom<V +>{
      rt1 = ldf rt;
      r11 = dyn rt1[, df](300.0, 5.0);
      return r11;
    };
    r13 = dyn qqplot(p3, p4);
    check L14() else D9();
  D9():
    deopt 29 [r13];
  L14():
    qqnorm1 = ldf qqnorm;
    check L15() else D10();
  D10():
    deopt 31 [];
  L15():
    p5 = prom<V +>{
      precip = ld precip;
      precip1 = force? precip;
      checkMissing(precip1);
      return precip1;
    };
    r15 = dyn qqnorm1[, ylab](p5, "Precipitation [in/yr] for 70 US cities");
    check L16() else D11();
  D11():
    deopt 35 [r15];
  L16():
    rchisq = ldf rchisq;
    check L17() else D12();
  D12():
    deopt 37 [];
  L17():
    r16 = dyn rchisq[, df](500.0, 3.0);
    check L18() else D13();
  D13():
    deopt 41 [r16];
  L18():
    st y = r16;
    qqplot1 = ldf qqplot;
    check L19() else D14();
  D14():
    deopt 44 [];
  L19():
    p7 = prom<V +>{
      qchisq = ldf qchisq;
      p6 = prom<V +>{
        ppoints = ldf ppoints;
        r17 = dyn ppoints(500.0);
        return r17;
      };
      r19 = dyn qchisq[, df](p6, 3.0);
      return r19;
    };
    p8 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p9 = prom<V +>{
      sym1 = ldf expression;
      base1 = ldf expression in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      expression = ldf expression in base;
      r24 = dyn expression(<lang `~`("Q-Q plot for", `~`(`[`({
              `^`(chi, 2.0)
            }, `==`(nu, 3.0))))>);
      goto L0(r24);
    L2():
      r22 = dyn base1(<lang `~`("Q-Q plot for", `~`(`[`({
              `^`(chi, 2.0)
            }, `==`(nu, 3.0))))>);
      goto L0(r22);
    };
    r26 = dyn qqplot1[, , main](p7, p8, p9);
    check L20() else D15();
  D15():
    deopt 49 [r26];
  L20():
    qqline1 = ldf qqline;
    check L21() else D16();
  D16():
    deopt 51 [];
  L21():
    p10 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    p11 = prom<V +>{
      r28 = clos inner3913899244;
      return r28;
    };
    p12 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      c = ldf c in base;
      r32 = dyn c(0.1, 0.6);
      goto L0(r32);
    L2():
      r30 = dyn base2(0.1, 0.6);
      goto L0(r30);
    };
    r34 = dyn qqline1[, distribution, probs, col](p10, p11, p12, 2.0);
    check L22() else D17();
  D17():
    deopt 59 [r34];
  L22():
    mtext = ldf mtext;
    check L23() else D18();
  D18():
    deopt 61 [];
  L23():
    r35 = dyn mtext("qqline(*, dist = qchisq(., df=3), prob = c(0.1, 0.6))");
    check L24() else D19();
  D19():
    deopt 63 [r35];
  L24():
    data_frame = ldf `data.frame`;
    check L25() else D20();
  D20():
    deopt 65 [];
  L25():
    p13 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c1 = ldf c in base;
      r38 = dyn c1(-31.0, -30.0, -25.0, -25.0, -23.0, -23.0, -22.0, -20.0, -20.0, -18.0, -18.0, -18.0, -16.0, -15.0, -15.0, -14.0, -13.0, -11.0, -10.0, -9.0, -8.0, -7.0, -7.0, -7.0, -6.0, -6.0, -4.0, -4.0, -3.0, -2.0, -2.0, -1.0, 1.0, 1.0, 4.0, 5.0, 11.0, 12.0, 16.0, 34.0, -31.0, -20.0, -18.0, -16.0, -16.0, -16.0, -15.0, -14.0, -14.0, -14.0, -14.0, -13.0, -13.0, -11.0, -11.0, -10.0, -9.0, -9.0, -8.0, -7.0, -7.0, -6.0, -6.0, -5.0, -5.0, -5.0, -4.0, -2.0, -2.0, -2.0, 0.0, 0.0, 1.0, 1.0, 2.0, 4.0, 5.0, 5.0, 6.0, 17.0);
      goto L0(r38);
    L2():
      r36 = dyn base3(<lang `-`(31.0)>, <lang `-`(30.0)>, <lang `-`(25.0)>, <lang `-`(25.0)>, <lang `-`(23.0)>, <lang `-`(23.0)>, <lang `-`(22.0)>, <lang `-`(20.0)>, <lang `-`(20.0)>, <lang `-`(18.0)>, <lang `-`(18.0)>, <lang `-`(18.0)>, <lang `-`(16.0)>, <lang `-`(15.0)>, <lang `-`(15.0)>, <lang `-`(14.0)>, <lang `-`(13.0)>, <lang `-`(11.0)>, <lang `-`(10.0)>, <lang `-`(9.0)>, <lang `-`(8.0)>, <lang `-`(7.0)>, <lang `-`(7.0)>, <lang `-`(7.0)>, <lang `-`(6.0)>, <lang `-`(6.0)>, <lang `-`(4.0)>, <lang `-`(4.0)>, <lang `-`(3.0)>, <lang `-`(2.0)>, <lang `-`(2.0)>, <lang `-`(1.0)>, 1.0, 1.0, 4.0, 5.0, 11.0, 12.0, 16.0, 34.0, <lang `-`(31.0)>, <lang `-`(20.0)>, <lang `-`(18.0)>, <lang `-`(16.0)>, <lang `-`(16.0)>, <lang `-`(16.0)>, <lang `-`(15.0)>, <lang `-`(14.0)>, <lang `-`(14.0)>, <lang `-`(14.0)>, <lang `-`(14.0)>, <lang `-`(13.0)>, <lang `-`(13.0)>, <lang `-`(11.0)>, <lang `-`(11.0)>, <lang `-`(10.0)>, <lang `-`(9.0)>, <lang `-`(9.0)>, <lang `-`(8.0)>, <lang `-`(7.0)>, <lang `-`(7.0)>, <lang `-`(6.0)>, <lang `-`(6.0)>, <lang `-`(5.0)>, <lang `-`(5.0)>, <lang `-`(5.0)>, <lang `-`(4.0)>, <lang `-`(2.0)>, <lang `-`(2.0)>, <lang `-`(2.0)>, 0.0, 0.0, 1.0, 1.0, 2.0, 4.0, 5.0, 5.0, 6.0, 17.0);
      goto L0(r36);
    };
    p15 = prom<V +>{
      gl = ldf gl;
      p14 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r41):
        return r41;
      L1():
        c2 = ldf c in base;
        r42 = dyn c2("Female", "Male");
        goto L0(r42);
      L2():
        r40 = dyn base4("Female", "Male");
        goto L0(r40);
      };
      r44 = dyn gl[, , labels](2.0, 40.0, p14);
      return r44;
    };
    r46 = dyn data_frame[angle, sex](p13, p15);
    check L26() else D21();
  D21():
    deopt 70 [r46];
  L26():
    st switzer = r46;
    ks_test = ldf `ks.test`;
    check L27() else D22();
  D22():
    deopt 73 [];
  L27():
    p16 = prom<V +>{
      __ = ldf `~` in base;
      r47 = dyn __(<sym angle>, <sym sex>);
      return r47;
    };
    p17 = prom<V +>{
      switzer = ld switzer;
      switzer1 = force? switzer;
      checkMissing(switzer1);
      return switzer1;
    };
    r50 = dyn ks_test[, data](p16, p17);
    check L28() else D23();
  D23():
    deopt 77 [r50];
  L28():
    sym5 = ldf with;
    base5 = ldf with in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L29() else L30();
  L1(r52):
    st d = r52;
    sym6 = ldf with;
    base6 = ldf with in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L33() else L34();
  L29():
    with = ldf with;
    check L31() else D24();
  L30():
    r51 = dyn base5(<sym switzer>, <lang split(angle, sex)>);
    goto L1(r51);
  D24():
    deopt 80 [];
  L2():
    abline = ldf abline;
    check L37() else D28();
  L31():
    p18 = prom<V +>{
      switzer2 = ld switzer;
      switzer3 = force? switzer2;
      checkMissing(switzer3);
      return switzer3;
    };
    p21 = prom<V +>{
      split = ldf split;
      p19 = prom<V +>{
        angle = ld angle;
        angle1 = force? angle;
        checkMissing(angle1);
        return angle1;
      };
      p20 = prom<V +>{
        sex = ld sex;
        sex1 = force? sex;
        checkMissing(sex1);
        return sex1;
      };
      r56 = dyn split(p19, p20);
      return r56;
    };
    r58 = dyn with(p18, p21);
    check L32() else D25();
  L33():
    with1 = ldf with;
    check L35() else D26();
  L34():
    r59 = dyn base6(<sym d>, <lang qqplot(Female, Male, pch=19.0, xlim=c(`-`(31.0), 31.0), ylim=c(`-`(31.0), 31.0), conf.level=0.945, conf.args=list(col="lightgrey", exact=TRUE))>);
    goto L2();
  D25():
    deopt 83 [r58];
  D26():
    deopt 87 [];
  D28():
    deopt 92 [];
  L32():
    goto L1(r58);
  L35():
    p22 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    p28 = prom<V +>{
      qqplot2 = ldf qqplot;
      p23 = prom<V +>{
        Female = ld Female;
        Female1 = force? Female;
        checkMissing(Female1);
        return Female1;
      };
      p24 = prom<V +>{
        Male = ld Male;
        Male1 = force? Male;
        checkMissing(Male1);
        return Male1;
      };
      p25 = prom<V +>{
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r65):
        return r65;
      L1():
        c3 = ldf c in base;
        r66 = dyn c3(-31.0, 31.0);
        goto L0(r66);
      L2():
        r64 = dyn base7(<lang `-`(31.0)>, 31.0);
        goto L0(r64);
      };
      p26 = prom<V +>{
        sym8 = ldf c;
        base8 = ldf c in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r69):
        return r69;
      L1():
        c4 = ldf c in base;
        r70 = dyn c4(-31.0, 31.0);
        goto L0(r70);
      L2():
        r68 = dyn base8(<lang `-`(31.0)>, 31.0);
        goto L0(r68);
      };
      p27 = prom<V +>{
        sym9 = ldf list;
        base9 = ldf list in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r73):
        return r73;
      L1():
        list = ldf list in base;
        r74 = dyn list("lightgrey", TRUE);
        goto L0(r74);
      L2():
        r72 = dyn base9[col, exact]("lightgrey", TRUE);
        goto L0(r72);
      };
      r76 = dyn qqplot2[, , pch, xlim, ylim, `conf.level`, `conf.args`](p23, p24, 19.0, p25, p26, 0.945, p27);
      return r76;
    };
    r78 = dyn with1(p22, p28);
    check L36() else D27();
  L37():
    r79 = dyn abline[a, b](0.0, 1.0);
    check L38() else D29();
  D27():
    deopt 90 [r78];
  D29():
    deopt 97 [r79];
  L36():
    goto L2();
  L38():
    set_seed = ldf `set.seed`;
    check L39() else D30();
  D30():
    deopt 99 [];
  L39():
    r80 = dyn set_seed(1.0);
    check L40() else D31();
  D31():
    deopt 101 [r80];
  L40():
    rnorm = ldf rnorm;
    check L41() else D32();
  D32():
    deopt 103 [];
  L41():
    r81 = dyn rnorm(50.0);
    check L42() else D33();
  D33():
    deopt 105 [r81];
  L42():
    st x = r81;
    rnorm1 = ldf rnorm;
    check L43() else D34();
  D34():
    deopt 108 [];
  L43():
    r82 = dyn rnorm1[, mean, sd](50.0, 0.5, 0.95);
    check L44() else D35();
  D35():
    deopt 114 [r82];
  L44():
    st y = r82;
    st ex = TRUE;
    ks_test1 = ldf `ks.test`;
    check L45() else D36();
  D36():
    deopt 120 [];
  L45():
    p29 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p30 = prom<V +>{
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      return y11;
    };
    p31 = prom<V +>{
      ex = ld ex;
      ex1 = force? ex;
      checkMissing(ex1);
      return ex1;
    };
    r86 = dyn ks_test1[, , exact](p29, p30, p31);
    check L46() else D37();
  D37():
    deopt 125 [r86];
  L46():
    c5 = `is.object`(r86);
    if c5 then L48() else L49(r86);
  L47(dx1):
    st pval = dx1;
    qqplot3 = ldf qqplot;
    check L51() else D38();
  L48():
    dr = tryDispatchBuiltin.1("$", r86);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(dr);
  L49(r88):
    r89 = `$`(r88, <sym p.value>);
    goto L47(r89);
  D38():
    deopt 129 [];
  L50():
    dx = getTryDispatchBuiltinValue(dr);
    goto L47(dx);
  L51():
    p32 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p33 = prom<V +>{
      y12 = ld y;
      y13 = force? y12;
      checkMissing(y13);
      return y13;
    };
    p34 = prom<V +>{
      pval = ld pval;
      pval1 = force? pval;
      checkMissing(pval1);
      r92 = `-`(1.0, pval1);
      return r92;
    };
    p35 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r95):
      return r95;
    L1():
      ex2 = ld ex;
      ex3 = force? ex2;
      checkMissing(ex3);
      list1 = ldf list in base;
      r96 = dyn list1(ex3, "lightgrey");
      goto L0(r96);
    L2():
      r94 = dyn base10[exact, col](<sym ex>, "lightgrey");
      goto L0(r94);
    };
    r98 = dyn qqplot3[, , pch, `conf.level`, `conf.args`](p32, p33, 19.0, p34, p35);
    check L52() else D39();
  D39():
    deopt 138 [r98];
  L52():
    abline1 = ldf abline;
    check L53() else D40();
  D40():
    deopt 140 [];
  L53():
    r99 = dyn abline1[a, b](0.0, 1.0);
    check L54() else D41();
  D41():
    deopt 145 [r99];
  L54():
    popenv;
    return r99;
  }
}
fun inner2813596033(y, `...`) {
  (reg y:*, reg ddd:dots) -+> V { var y:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st y = y;
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
    r2 = dyn UseMethod("qqnorm");
    goto L0(r2);
  L2():
    r = dyn base("qqnorm");
    goto L0(r);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg qchisq:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V |
    mkenv;
    st p = p;
    qchisq = ldf qchisq;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    r1 = dyn qchisq[, df](p3, 3.0);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}