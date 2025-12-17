fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg r3:V, reg rnorm:cls, reg r4:V, reg runif:cls, reg r5:V, reg ks_test:cls, reg x:*, reg x1:V, reg p:p(V +), reg y:*, reg y1:V, reg p1:p(V +), reg r8:V, reg ks_test1:cls, reg x2:*, reg x3:V, reg r9:V, reg p2:p(V +), reg r11:V, reg ks_test2:cls, reg x4:*, reg x5:V, reg r12:V, reg p3:p(V +), reg r14:V, reg ks_test3:cls, reg x6:*, reg x7:V, reg r15:V, reg p4:p(V +), reg r17:V, reg rnorm1:cls, reg p5:p(V +), reg r19:V, reg plot:cls, reg ecdf:cls, reg x8:*, reg x9:V, reg p6:p(V +), reg r21:V, reg p7:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg x10:*, reg x11:V, reg x12:*, reg x13:V, reg c:cls, reg r27:V, reg range:cls, reg r28:V, reg p8:p(V +), reg r30:V, reg plot1:cls, reg ecdf1:cls, reg x14:*, reg x15:V, reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg t_test:cls, reg x16:*, reg x17:V, reg p11:p(V +), reg x18:*, reg x19:V, reg p12:p(V +), reg r37:V, reg wilcox_test:cls, reg x20:*, reg x21:V, reg p13:p(V +), reg x22:*, reg x23:V, reg p14:p(V +), reg r40:V, reg ks_test4:cls, reg x24:*, reg x25:V, reg p15:p(V +), reg x26:*, reg x27:V, reg p16:p(V +), reg r43:V, reg ks_test5:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg c1:cls, reg r46:V, reg p17:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg c2:cls, reg r50:V, reg p18:p(V +), reg r52:V, reg ks_test6:cls, reg __:cls, reg r53:V, reg p19:p(V +), reg airquality:*, reg airquality1:V, reg p20:p(V +), reg _in_:cls, reg Month:*, reg Month1:V, reg p21:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg c3:cls, reg r59:V, reg p22:p(V +), reg r61:V, reg p23:p(V +), reg r63:V |
    mkenv;
    r = clos inner2044426018;
    st `ks.test` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    rnorm = ldf rnorm;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base("graphics");
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    r3 = dyn require("graphics");
    check L4() else D1();
  L5():
    r4 = dyn rnorm(50.0);
    check L6() else D3();
  D1():
    deopt 7 [r3];
  D3():
    deopt 11 [r4];
  L4():
    goto L0();
  L6():
    st x = r4;
    runif = ldf runif;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    r5 = dyn runif(30.0);
    check L8() else D5();
  D5():
    deopt 16 [r5];
  L8():
    st y = r5;
    ks_test = ldf `ks.test`;
    check L9() else D6();
  D6():
    deopt 19 [];
  L9():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r8 = dyn ks_test(p, p1);
    check L10() else D7();
  D7():
    deopt 22 [r8];
  L10():
    ks_test1 = ldf `ks.test`;
    check L11() else D8();
  D8():
    deopt 24 [];
  L11():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      r9 = `+`(x3, 2.0);
      return r9;
    };
    r11 = dyn ks_test1(p2, "pgamma", 3.0, 2.0);
    check L12() else D9();
  D9():
    deopt 29 [r11];
  L12():
    ks_test2 = ldf `ks.test`;
    check L13() else D10();
  D10():
    deopt 31 [];
  L13():
    p3 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      r12 = `+`(x5, 2.0);
      return r12;
    };
    r14 = dyn ks_test2[, , , , exact](p3, "pgamma", 3.0, 2.0, FALSE);
    check L14() else D11();
  D11():
    deopt 38 [r14];
  L14():
    ks_test3 = ldf `ks.test`;
    check L15() else D12();
  D12():
    deopt 40 [];
  L15():
    p4 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      r15 = `+`(x7, 2.0);
      return r15;
    };
    r17 = dyn ks_test3[, , , , alternative](p4, "pgamma", 3.0, 2.0, "gr");
    check L16() else D13();
  D13():
    deopt 47 [r17];
  L16():
    rnorm1 = ldf rnorm;
    check L17() else D14();
  D14():
    deopt 49 [];
  L17():
    p5 = prom<V +>{
      return -1.0;
    };
    r19 = dyn rnorm1(50.0, p5);
    check L18() else D15();
  D15():
    deopt 52 [r19];
  L18():
    st x2 = r19;
    plot = ldf plot;
    check L19() else D16();
  D16():
    deopt 55 [];
  L19():
    p7 = prom<V +>{
      ecdf = ldf ecdf;
      p6 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      r21 = dyn ecdf(p6);
      return r21;
    };
    p8 = prom<V +>{
      sym1 = ldf range;
      base1 = ldf range in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r24):
      return r24;
    L2():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r23 = dyn base1(<lang c(x, x2)>);
      goto L0(r23);
    L1(r26):
      range = ldf range in base;
      r28 = dyn range(r26);
      goto L0(r28);
    L4():
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      x12 = ld x2;
      x13 = force? x12;
      checkMissing(x13);
      c = ldf c in base;
      r27 = dyn c(x11, x13);
      goto L1(r27);
    L5():
      r25 = dyn base2(<sym x>, <sym x2>);
      goto L1(r25);
    };
    r30 = dyn plot[, xlim](p7, p8);
    check L20() else D17();
  D17():
    deopt 59 [r30];
  L20():
    plot1 = ldf plot;
    check L21() else D18();
  D18():
    deopt 61 [];
  L21():
    p10 = prom<V +>{
      ecdf1 = ldf ecdf;
      p9 = prom<V +>{
        x14 = ld x2;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r32 = dyn ecdf1(p9);
      return r32;
    };
    r34 = dyn plot1[, add, lty](p10, TRUE, "dashed");
    check L22() else D19();
  D19():
    deopt 67 [r34];
  L22():
    t_test = ldf `t.test`;
    check L23() else D20();
  D20():
    deopt 69 [];
  L23():
    p11 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    p12 = prom<V +>{
      x18 = ld x2;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r37 = dyn t_test[, , alternative](p11, p12, "g");
    check L24() else D21();
  D21():
    deopt 74 [r37];
  L24():
    wilcox_test = ldf `wilcox.test`;
    check L25() else D22();
  D22():
    deopt 76 [];
  L25():
    p13 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    p14 = prom<V +>{
      x22 = ld x2;
      x23 = force? x22;
      checkMissing(x23);
      return x23;
    };
    r40 = dyn wilcox_test[, , alternative](p13, p14, "g");
    check L26() else D23();
  D23():
    deopt 81 [r40];
  L26():
    ks_test4 = ldf `ks.test`;
    check L27() else D24();
  D24():
    deopt 83 [];
  L27():
    p15 = prom<V +>{
      x24 = ld x;
      x25 = force? x24;
      checkMissing(x25);
      return x25;
    };
    p16 = prom<V +>{
      x26 = ld x2;
      x27 = force? x26;
      checkMissing(x27);
      return x27;
    };
    r43 = dyn ks_test4[, , alternative](p15, p16, "l");
    check L28() else D25();
  D25():
    deopt 88 [r43];
  L28():
    ks_test5 = ldf `ks.test`;
    check L29() else D26();
  D26():
    deopt 90 [];
  L29():
    p17 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      c1 = ldf c in base;
      r46 = dyn c1(1.0, 2.0, 2.0, 3.0, 3.0);
      goto L0(r46);
    L2():
      r44 = dyn base3(1.0, 2.0, 2.0, 3.0, 3.0);
      goto L0(r44);
    };
    p18 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      c2 = ldf c in base;
      r50 = dyn c2(1.0, 2.0, 3.0, 3.0, 4.0, 5.0, 6.0);
      goto L0(r50);
    L2():
      r48 = dyn base4(1.0, 2.0, 3.0, 3.0, 4.0, 5.0, 6.0);
      goto L0(r48);
    };
    r52 = dyn ks_test5(p17, p18);
    check L30() else D27();
  D27():
    deopt 93 [r52];
  L30():
    ks_test6 = ldf `ks.test`;
    check L31() else D28();
  D28():
    deopt 95 [];
  L31():
    p19 = prom<V +>{
      __ = ldf `~` in base;
      r53 = dyn __(<sym Ozone>, <sym Month>);
      return r53;
    };
    p20 = prom<V +>{
      airquality = ld airquality;
      airquality1 = force? airquality;
      checkMissing(airquality1);
      return airquality1;
    };
    p23 = prom<V +>{
      _in_ = ldf `%in%`;
      p21 = prom<V +>{
        Month = ld Month;
        Month1 = force? Month;
        checkMissing(Month1);
        return Month1;
      };
      p22 = prom<V +>{
        sym5 = ldf c;
        base5 = ldf c in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r58):
        return r58;
      L1():
        c3 = ldf c in base;
        r59 = dyn c3(5.0, 8.0);
        goto L0(r59);
      L2():
        r57 = dyn base5(5.0, 8.0);
        goto L0(r57);
      };
      r61 = dyn _in_(p21, p22);
      return r61;
    };
    r63 = dyn ks_test6[, data, subset](p19, p20, p23);
    check L32() else D29();
  D29():
    deopt 101 [r63];
  L32():
    popenv;
    return r63;
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
    r2 = dyn UseMethod("ks.test");
    goto L0(r2);
  L2():
    r = dyn base("ks.test");
    goto L0(r);
  }
}