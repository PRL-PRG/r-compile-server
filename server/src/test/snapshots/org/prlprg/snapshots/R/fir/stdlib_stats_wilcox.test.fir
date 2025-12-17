fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg wilcox_test:cls, reg x:*, reg x1:V, reg p1:p(V +), reg y:*, reg y1:V, reg p2:p(V +), reg r13:V, reg wilcox_test1:cls, reg y2:*, reg y3:V, reg x2:*, reg x3:V, reg r14:V, reg p3:p(V +), reg r16:V, reg wilcox_test2:cls, reg y4:*, reg y5:V, reg x4:*, reg x5:V, reg r17:V, reg p4:p(V +), reg r19:V, reg data_frame:cls, reg x6:*, reg x7:V, reg p5:p(V +), reg y6:*, reg y7:V, reg p6:p(V +), reg y8:*, reg y9:V, reg x8:*, reg x9:V, reg r22:V, reg p7:p(V +), reg r24:V, reg wilcox_test3:cls, reg __:cls, reg r25:V, reg p8:p(V +), reg depression:*, reg depression1:V, reg p9:p(V +), reg r28:V, reg wilcox_test4:cls, reg __1:cls, reg r29:V, reg p10:p(V +), reg depression2:*, reg depression3:V, reg p11:p(V +), reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg c2:cls, reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg c3:cls, reg r38:V, reg wilcox_test5:cls, reg x10:*, reg x11:V, reg p12:p(V +), reg y10:*, reg y11:V, reg p13:p(V +), reg r41:V, reg wilcox_test6:cls, reg x12:*, reg x13:V, reg p14:p(V +), reg y12:*, reg y13:V, reg p15:p(V +), reg r44:V, reg wilcox_test7:cls, reg rnorm:cls, reg r45:V, reg p16:p(V +), reg rnorm1:cls, reg r47:V, reg p17:p(V +), reg r49:V, reg boxplot:cls, reg __2:cls, reg r50:V, reg p18:p(V +), reg airquality:*, reg airquality1:V, reg p19:p(V +), reg r53:V, reg wilcox_test8:cls, reg __3:cls, reg r54:V, reg p20:p(V +), reg airquality2:*, reg airquality3:V, reg p21:p(V +), reg _in_:cls, reg Month:*, reg Month1:V, reg p22:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg r59:V, reg c4:cls, reg r60:V, reg p23:p(V +), reg r62:V, reg p24:p(V +), reg r64:V, reg wilcox_test9:cls, reg p25:p(V +), reg p26:p(V +), reg r67:V, reg wilcox_test10:cls, reg p27:p(V +), reg p28:p(V +), reg r70:V, reg wilcox_test11:cls, reg p29:p(V +), reg p30:p(V +), reg r73:V |
    mkenv;
    r = clos inner2044426018;
    st `wilcox.test` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    require = ldf require;
    check L7() else D0();
  L6():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1(r6):
    st x = r6;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L7():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L8() else D1();
  L9():
    c = ldf c in base;
    r7 = dyn c(1.83, 0.5, 1.62, 2.48, 1.68, 1.88, 1.55, 3.06, 1.3);
    check L11() else D2();
  L10():
    r5 = dyn base1(1.83, 0.5, 1.62, 2.48, 1.68, 1.88, 1.55, 3.06, 1.3);
    goto L1(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 20 [r7];
  L2(r9):
    st y = r9;
    wilcox_test = ldf `wilcox.test`;
    check L15() else D4();
  L8():
    goto L0();
  L11():
    goto L1(r7);
  L12():
    c1 = ldf c in base;
    r10 = dyn c1(0.878, 0.647, 0.598, 2.05, 1.06, 1.29, 1.06, 3.14, 1.29);
    check L14() else D3();
  L13():
    r8 = dyn base2(0.878, 0.647, 0.598, 2.05, 1.06, 1.29, 1.06, 3.14, 1.29);
    goto L2(r8);
  D3():
    deopt 34 [r10];
  D4():
    deopt 37 [];
  L14():
    goto L2(r10);
  L15():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r13 = dyn wilcox_test[, , paired, alternative](p1, p2, TRUE, "greater");
    check L16() else D5();
  D5():
    deopt 44 [r13];
  L16():
    wilcox_test1 = ldf `wilcox.test`;
    check L17() else D6();
  D6():
    deopt 46 [];
  L17():
    p3 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      r14 = `-`(y3, x3);
      return r14;
    };
    r16 = dyn wilcox_test1[, alternative](p3, "less");
    check L18() else D7();
  D7():
    deopt 50 [r16];
  L18():
    wilcox_test2 = ldf `wilcox.test`;
    check L19() else D8();
  D8():
    deopt 52 [];
  L19():
    p4 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      r17 = `-`(y5, x5);
      return r17;
    };
    r19 = dyn wilcox_test2[, alternative, exact, correct](p4, "less", FALSE, FALSE);
    check L20() else D9();
  D9():
    deopt 60 [r19];
  L20():
    data_frame = ldf `data.frame`;
    check L21() else D10();
  D10():
    deopt 62 [];
  L21():
    p5 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p6 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p7 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      r22 = `-`(y9, x9);
      return r22;
    };
    r24 = dyn data_frame[first, second, change](p5, p6, p7);
    check L22() else D11();
  D11():
    deopt 69 [r24];
  L22():
    st depression = r24;
    wilcox_test3 = ldf `wilcox.test`;
    check L23() else D12();
  D12():
    deopt 72 [];
  L23():
    p8 = prom<V +>{
      __ = ldf `~` in base;
      r25 = dyn __(<sym change>, 1.0);
      return r25;
    };
    p9 = prom<V +>{
      depression = ld depression;
      depression1 = force? depression;
      checkMissing(depression1);
      return depression1;
    };
    r28 = dyn wilcox_test3[, data](p8, p9);
    check L24() else D13();
  D13():
    deopt 76 [r28];
  L24():
    wilcox_test4 = ldf `wilcox.test`;
    check L25() else D14();
  D14():
    deopt 78 [];
  L25():
    p10 = prom<V +>{
      __1 = ldf `~` in base;
      r29 = dyn __1(<lang Pair(first, second)>, 1.0);
      return r29;
    };
    p11 = prom<V +>{
      depression2 = ld depression;
      depression3 = force? depression2;
      checkMissing(depression3);
      return depression3;
    };
    r32 = dyn wilcox_test4[, data](p10, p11);
    check L26() else D15();
  D15():
    deopt 82 [r32];
  L26():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L3(r34):
    st x = r34;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L27():
    c2 = ldf c in base;
    r35 = dyn c2(0.8, 0.83, 1.89, 1.04, 1.45, 1.38, 1.91, 1.64, 0.73, 1.46);
    check L29() else D16();
  L28():
    r33 = dyn base3(0.8, 0.83, 1.89, 1.04, 1.45, 1.38, 1.91, 1.64, 0.73, 1.46);
    goto L3(r33);
  D16():
    deopt 96 [r35];
  L4(r37):
    st y = r37;
    wilcox_test5 = ldf `wilcox.test`;
    check L33() else D18();
  L29():
    goto L3(r35);
  L30():
    c3 = ldf c in base;
    r38 = dyn c3(1.15, 0.88, 0.9, 0.74, 1.21);
    check L32() else D17();
  L31():
    r36 = dyn base4(1.15, 0.88, 0.9, 0.74, 1.21);
    goto L4(r36);
  D17():
    deopt 106 [r38];
  D18():
    deopt 109 [];
  L32():
    goto L4(r38);
  L33():
    p12 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    p13 = prom<V +>{
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      return y11;
    };
    r41 = dyn wilcox_test5[, , alternative](p12, p13, "g");
    check L34() else D19();
  D19():
    deopt 114 [r41];
  L34():
    wilcox_test6 = ldf `wilcox.test`;
    check L35() else D20();
  D20():
    deopt 116 [];
  L35():
    p14 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    p15 = prom<V +>{
      y12 = ld y;
      y13 = force? y12;
      checkMissing(y13);
      return y13;
    };
    r44 = dyn wilcox_test6[, , alternative, exact, correct](p14, p15, "greater", FALSE, FALSE);
    check L36() else D21();
  D21():
    deopt 125 [r44];
  L36():
    wilcox_test7 = ldf `wilcox.test`;
    check L37() else D22();
  D22():
    deopt 127 [];
  L37():
    p16 = prom<V +>{
      rnorm = ldf rnorm;
      r45 = dyn rnorm(10.0);
      return r45;
    };
    p17 = prom<V +>{
      rnorm1 = ldf rnorm;
      r47 = dyn rnorm1(10.0, 2.0);
      return r47;
    };
    r49 = dyn wilcox_test7[, , `conf.int`](p16, p17, TRUE);
    check L38() else D23();
  D23():
    deopt 132 [r49];
  L38():
    boxplot = ldf boxplot;
    check L39() else D24();
  D24():
    deopt 134 [];
  L39():
    p18 = prom<V +>{
      __2 = ldf `~` in base;
      r50 = dyn __2(<sym Ozone>, <sym Month>);
      return r50;
    };
    p19 = prom<V +>{
      airquality = ld airquality;
      airquality1 = force? airquality;
      checkMissing(airquality1);
      return airquality1;
    };
    r53 = dyn boxplot[, data](p18, p19);
    check L40() else D25();
  D25():
    deopt 138 [r53];
  L40():
    wilcox_test8 = ldf `wilcox.test`;
    check L41() else D26();
  D26():
    deopt 140 [];
  L41():
    p20 = prom<V +>{
      __3 = ldf `~` in base;
      r54 = dyn __3(<sym Ozone>, <sym Month>);
      return r54;
    };
    p21 = prom<V +>{
      airquality2 = ld airquality;
      airquality3 = force? airquality2;
      checkMissing(airquality3);
      return airquality3;
    };
    p24 = prom<V +>{
      _in_ = ldf `%in%`;
      p22 = prom<V +>{
        Month = ld Month;
        Month1 = force? Month;
        checkMissing(Month1);
        return Month1;
      };
      p23 = prom<V +>{
        sym5 = ldf c;
        base5 = ldf c in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r59):
        return r59;
      L1():
        c4 = ldf c in base;
        r60 = dyn c4(5.0, 8.0);
        goto L0(r60);
      L2():
        r58 = dyn base5(5.0, 8.0);
        goto L0(r58);
      };
      r62 = dyn _in_(p22, p23);
      return r62;
    };
    r64 = dyn wilcox_test8[, data, subset](p20, p21, p24);
    check L42() else D27();
  D27():
    deopt 146 [r64];
  L42():
    wilcox_test9 = ldf `wilcox.test`;
    check L43() else D28();
  D28():
    deopt 148 [];
  L43():
    p25 = prom<V +>{
      return <int 4, 3, 2>;
    };
    p26 = prom<V +>{
      return <int 3, 2, 1>;
    };
    r67 = dyn wilcox_test9[, , paired](p25, p26, TRUE);
    check L44() else D29();
  D29():
    deopt 153 [r67];
  L44():
    wilcox_test10 = ldf `wilcox.test`;
    check L45() else D30();
  D30():
    deopt 155 [];
  L45():
    p27 = prom<V +>{
      return <real 0.4, 0.3, 0.2>;
    };
    p28 = prom<V +>{
      return <real 0.3, 0.2, 0.1>;
    };
    r70 = dyn wilcox_test10[, , paired](p27, p28, TRUE);
    check L46() else D31();
  D31():
    deopt 160 [r70];
  L46():
    wilcox_test11 = ldf `wilcox.test`;
    check L47() else D32();
  D32():
    deopt 162 [];
  L47():
    p29 = prom<V +>{
      return <real 0.4, 0.3, 0.2>;
    };
    p30 = prom<V +>{
      return <real 0.3, 0.2, 0.1>;
    };
    r73 = dyn wilcox_test11[, , paired, `digits.rank`](p29, p30, TRUE, 9.0);
    check L48() else D33();
  D33():
    deopt 169 [r73];
  L48():
    popenv;
    return r73;
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
    r2 = dyn UseMethod("wilcox.test");
    goto L0(r2);
  L2():
    r = dyn base("wilcox.test");
    goto L0(r);
  }
}