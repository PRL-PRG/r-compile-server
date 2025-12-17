fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg require1:cls, reg grDevices:*, reg grDevices1:V, reg p1:p(V +), reg r8:V, reg sunflowerplot:cls, reg iris:*, reg iris1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg sunflowerplot1:cls, reg iris4:*, reg iris5:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg sunflowerplot2:cls, reg __2:cls, reg r15:V, reg p4:p(V +), reg iris8:*, reg iris9:V, reg p5:p(V +), reg r18:V, reg sunflowerplot3:cls, reg sort:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:R, reg r23:V, reg round:cls, reg r24:V, reg r25:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg round1:cls, reg r31:V, reg p8:p(V +), reg r33:V, reg xyTable:cls, reg sort1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:R, reg r38:V, reg round2:cls, reg r39:V, reg r40:V, reg p9:p(V +), reg r42:V, reg p10:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg round3:cls, reg r46:V, reg p11:p(V +), reg r48:V, reg __3:cls, reg r49:V, reg r50:cls, reg xyT:*, reg xyT1:V, reg p12:p(V +), reg r52:V, reg sunflowerplot4:cls, reg xyT2:*, reg xyT3:V, reg p13:p(V +), reg r54:V, reg sunflowerplot5:cls, reg rnorm:cls, reg r55:V, reg p14:p(V +), reg rnorm1:cls, reg r57:V, reg p15:p(V +), reg rpois:cls, reg r59:V, reg p16:p(V +), reg r61:V |
    mkenv;
    r = clos inner2044426018;
    st sunflowerplot = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    sunflowerplot = ldf sunflowerplot;
    check L10() else D4();
  L4():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    require1 = ldf require;
    check L8() else D2();
  L7():
    r5 = dyn base1(<sym grDevices>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  D4():
    deopt 14 [];
  L5():
    goto L0();
  L8():
    p1 = prom<V +>{
      grDevices = ld grDevices;
      grDevices1 = force? grDevices;
      checkMissing(grDevices1);
      return grDevices1;
    };
    r8 = dyn require1(p1);
    check L9() else D3();
  L10():
    p2 = prom<V +>{
      iris = ld iris;
      iris1 = force? iris;
      checkMissing(iris1);
      c = `is.object`(iris1);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", iris1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r9 = dyn __(iris1, <missing>, <int 3, 4>);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r11 = dyn sunflowerplot(p2);
    check L11() else D5();
  D3():
    deopt 12 [r8];
  D5():
    deopt 16 [r11];
  L9():
    goto L1();
  L11():
    sunflowerplot1 = ldf sunflowerplot;
    check L12() else D6();
  D6():
    deopt 18 [];
  L12():
    p3 = prom<V +>{
      iris4 = ld iris;
      iris5 = force? iris4;
      checkMissing(iris5);
      c1 = `is.object`(iris5);
      if c1 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", iris5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r12 = dyn __1(iris5, <missing>, <int 3, 4>);
      goto L0(r12);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r14 = dyn sunflowerplot1[, cex, `cex.fact`, size, `seg.lwd`](p3, 0.2, 1.0, 0.035, 0.8);
    check L13() else D7();
  D7():
    deopt 28 [r14];
  L13():
    sunflowerplot2 = ldf sunflowerplot;
    check L14() else D8();
  D8():
    deopt 30 [];
  L14():
    p4 = prom<V +>{
      __2 = ldf `~` in base;
      r15 = dyn __2(<sym Petal.Width>, <sym Petal.Length>);
      return r15;
    };
    p5 = prom<V +>{
      iris8 = ld iris;
      iris9 = force? iris8;
      checkMissing(iris9);
      return iris9;
    };
    r18 = dyn sunflowerplot2[, data, cex, `cex.fact`, size, `seg.lwd`](p4, p5, 0.2, 1.0, 0.035, 0.8);
    check L15() else D9();
  D9():
    deopt 42 [r18];
  L15():
    sunflowerplot3 = ldf sunflowerplot;
    check L16() else D10();
  D10():
    deopt 44 [];
  L16():
    p7 = prom<V +>{
      sort = ldf sort;
      p6 = prom<V +>{
        sym2 = ldf round;
        base2 = ldf round in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r22, r23):
        r25 = `*`(r22, r23);
        return r25;
      L1():
        round = ldf round in base;
        r24 = dyn round(<lang rnorm(100.0)>);
        goto L0(2.0, r24);
      L2():
        r21 = dyn base2(<lang rnorm(100.0)>);
        goto L0(2.0, r21);
      };
      r27 = dyn sort(p6);
      return r27;
    };
    p8 = prom<V +>{
      sym3 = ldf round;
      base3 = ldf round in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      round1 = ldf round in base;
      r31 = dyn round1(<lang rnorm(100.0)>, 0.0);
      goto L0(r31);
    L2():
      r29 = dyn base3(<lang rnorm(100.0)>, 0.0);
      goto L0(r29);
    };
    r33 = dyn sunflowerplot3[x, y, main](p7, p8, "Sunflower Plot of Rounded N(0,1)");
    check L17() else D11();
  D11():
    deopt 51 [r33];
  L17():
    xyTable = ldf xyTable;
    check L18() else D12();
  D12():
    deopt 53 [];
  L18():
    p10 = prom<V +>{
      sort1 = ldf sort;
      p9 = prom<V +>{
        sym4 = ldf round;
        base4 = ldf round in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r37, r38):
        r40 = `*`(r37, r38);
        return r40;
      L1():
        round2 = ldf round in base;
        r39 = dyn round2(<lang rnorm(100.0)>);
        goto L0(2.0, r39);
      L2():
        r36 = dyn base4(<lang rnorm(100.0)>);
        goto L0(2.0, r36);
      };
      r42 = dyn sort1(p9);
      return r42;
    };
    p11 = prom<V +>{
      sym5 = ldf round;
      base5 = ldf round in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      round3 = ldf round in base;
      r46 = dyn round3(<lang rnorm(100.0)>, 0.0);
      goto L0(r46);
    L2():
      r44 = dyn base5(<lang rnorm(100.0)>, 0.0);
      goto L0(r44);
    };
    r48 = dyn xyTable[x, y, digits](p10, p11, 3.0);
    check L19() else D13();
  D13():
    deopt 60 [r48];
  L19():
    st xyT = r48;
    __3 = ldf `::`;
    check L20() else D14();
  D14():
    deopt 63 [];
  L20():
    r49 = dyn __3("utils", "str");
    check L21() else D15();
  D15():
    deopt 66 [r49];
  L21():
    checkFun.0(r49);
    r50 = r49 as cls;
    p12 = prom<V +>{
      xyT = ld xyT;
      xyT1 = force? xyT;
      checkMissing(xyT1);
      return xyT1;
    };
    r52 = dyn r50[, `vec.len`](p12, 20.0);
    check L22() else D16();
  D16():
    deopt 71 [r52];
  L22():
    sunflowerplot4 = ldf sunflowerplot;
    check L23() else D17();
  D17():
    deopt 73 [];
  L23():
    p13 = prom<V +>{
      xyT2 = ld xyT;
      xyT3 = force? xyT2;
      checkMissing(xyT3);
      return xyT3;
    };
    r54 = dyn sunflowerplot4[, main](p13, "2nd Sunflower Plot of Rounded N(0,1)");
    check L24() else D18();
  D18():
    deopt 77 [r54];
  L24():
    sunflowerplot5 = ldf sunflowerplot;
    check L25() else D19();
  D19():
    deopt 79 [];
  L25():
    p14 = prom<V +>{
      rnorm = ldf rnorm;
      r55 = dyn rnorm(100.0);
      return r55;
    };
    p15 = prom<V +>{
      rnorm1 = ldf rnorm;
      r57 = dyn rnorm1(100.0);
      return r57;
    };
    p16 = prom<V +>{
      rpois = ldf rpois;
      r59 = dyn rpois[n, lambda](100.0, 2.0);
      return r59;
    };
    r61 = dyn sunflowerplot5[, , number, main, rotate, col](p14, p15, p16, "Sunflower plot (marked point process)", TRUE, "blue4");
    check L26() else D20();
  D20():
    deopt 90 [r61];
  L26():
    popenv;
    return r61;
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
    r2 = dyn UseMethod("sunflowerplot");
    goto L0(r2);
  L2():
    r = dyn base("sunflowerplot");
    goto L0(r);
  }
}