fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg mosaicplot:cls, reg Titanic:*, reg Titanic1:V, reg p1:p(V +), reg r6:V, reg mosaicplot1:cls, reg __:cls, reg r7:V, reg p2:p(V +), reg Titanic2:*, reg Titanic3:V, reg p3:p(V +), reg r10:V, reg mosaicplot2:cls, reg HairEyeColor:*, reg HairEyeColor1:V, reg p4:p(V +), reg r12:V, reg loglin:cls, reg HairEyeColor2:*, reg HairEyeColor3:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg list:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg pchisq:cls, reg fm:*, reg fm1:V, reg c:L, reg fm3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r19:V, reg p7:p(V +), reg fm4:*, reg fm5:V, reg c1:L, reg fm7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r21:V, reg p8:p(V +), reg r23:V, reg mosaicplot3:cls, reg HairEyeColor4:*, reg HairEyeColor5:V, reg p9:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg list1:cls, reg r27:V, reg p10:p(V +), reg r29:V, reg loglin1:cls, reg HairEyeColor6:*, reg HairEyeColor7:V, reg p11:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg list2:cls, reg r33:V, reg p12:p(V +), reg r35:V, reg pchisq1:cls, reg fm8:*, reg fm9:V, reg c2:L, reg fm11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r36:V, reg p13:p(V +), reg fm12:*, reg fm13:V, reg c3:L, reg fm15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r38:V, reg p14:p(V +), reg r40:V, reg mosaicplot4:cls, reg __1:cls, reg r41:V, reg p15:p(V +), reg mtcars:*, reg mtcars1:V, reg p16:p(V +), reg r44:V, reg mosaicplot5:cls, reg __2:cls, reg r45:V, reg p17:p(V +), reg mtcars2:*, reg mtcars3:V, reg p18:p(V +), reg p19:p(V +), reg r49:V |
    mkenv;
    r = clos inner2044426018;
    st mosaicplot = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    mosaicplot = ldf mosaicplot;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      Titanic = ld Titanic;
      Titanic1 = force? Titanic;
      checkMissing(Titanic1);
      return Titanic1;
    };
    r6 = dyn mosaicplot[, main, color](p1, "Survival on the Titanic", TRUE);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 15 [r6];
  L4():
    goto L0();
  L6():
    mosaicplot1 = ldf mosaicplot;
    check L7() else D4();
  D4():
    deopt 17 [];
  L7():
    p2 = prom<V +>{
      __ = ldf `~` in base;
      r7 = dyn __(<lang `+`(`+`(Sex, Age), Survived)>);
      return r7;
    };
    p3 = prom<V +>{
      Titanic2 = ld Titanic;
      Titanic3 = force? Titanic2;
      checkMissing(Titanic3);
      return Titanic3;
    };
    r10 = dyn mosaicplot1[, data, color](p2, p3, TRUE);
    check L8() else D5();
  D5():
    deopt 23 [r10];
  L8():
    mosaicplot2 = ldf mosaicplot;
    check L9() else D6();
  D6():
    deopt 25 [];
  L9():
    p4 = prom<V +>{
      HairEyeColor = ld HairEyeColor;
      HairEyeColor1 = force? HairEyeColor;
      checkMissing(HairEyeColor1);
      return HairEyeColor1;
    };
    r12 = dyn mosaicplot2[, shade](p4, TRUE);
    check L10() else D7();
  D7():
    deopt 29 [r12];
  L10():
    loglin = ldf loglin;
    check L11() else D8();
  D8():
    deopt 31 [];
  L11():
    p5 = prom<V +>{
      HairEyeColor2 = ld HairEyeColor;
      HairEyeColor3 = force? HairEyeColor2;
      checkMissing(HairEyeColor3);
      return HairEyeColor3;
    };
    p6 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      list = ldf list in base;
      r16 = dyn list(1.0, 2.0, 3.0);
      goto L0(r16);
    L2():
      r14 = dyn base1(1.0, 2.0, 3.0);
      goto L0(r14);
    };
    r18 = dyn loglin(p5, p6);
    check L12() else D9();
  D9():
    deopt 34 [r18];
  L12():
    st fm = r18;
    pchisq = ldf pchisq;
    check L13() else D10();
  D10():
    deopt 37 [];
  L13():
    p7 = prom<V +>{
      fm = ld fm;
      fm1 = force? fm;
      checkMissing(fm1);
      c = `is.object`(fm1);
      if c then L1() else L2(fm1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", fm1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(fm3):
      r19 = `$`(fm3, <sym pearson>);
      goto L0(r19);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p8 = prom<V +>{
      fm4 = ld fm;
      fm5 = force? fm4;
      checkMissing(fm5);
      c1 = `is.object`(fm5);
      if c1 then L1() else L2(fm5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", fm5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(fm7):
      r21 = `$`(fm7, <sym df>);
      goto L0(r21);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r23 = dyn pchisq[, , `lower.tail`](p7, p8, FALSE);
    check L14() else D11();
  D11():
    deopt 42 [r23];
  L14():
    mosaicplot3 = ldf mosaicplot;
    check L15() else D12();
  D12():
    deopt 44 [];
  L15():
    p9 = prom<V +>{
      HairEyeColor4 = ld HairEyeColor;
      HairEyeColor5 = force? HairEyeColor4;
      checkMissing(HairEyeColor5);
      return HairEyeColor5;
    };
    p10 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      list1 = ldf list in base;
      r27 = dyn list1(<int 1, 2>, 3.0);
      goto L0(r27);
    L2():
      r25 = dyn base2(<lang `:`(1.0, 2.0)>, 3.0);
      goto L0(r25);
    };
    r29 = dyn mosaicplot3[, shade, margin](p9, TRUE, p10);
    check L16() else D13();
  D13():
    deopt 50 [r29];
  L16():
    loglin1 = ldf loglin;
    check L17() else D14();
  D14():
    deopt 52 [];
  L17():
    p11 = prom<V +>{
      HairEyeColor6 = ld HairEyeColor;
      HairEyeColor7 = force? HairEyeColor6;
      checkMissing(HairEyeColor7);
      return HairEyeColor7;
    };
    p12 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      list2 = ldf list in base;
      r33 = dyn list2(<int 1, 2>, 3.0);
      goto L0(r33);
    L2():
      r31 = dyn base3(<lang `:`(1.0, 2.0)>, 3.0);
      goto L0(r31);
    };
    r35 = dyn loglin1(p11, p12);
    check L18() else D15();
  D15():
    deopt 55 [r35];
  L18():
    st fm = r35;
    pchisq1 = ldf pchisq;
    check L19() else D16();
  D16():
    deopt 58 [];
  L19():
    p13 = prom<V +>{
      fm8 = ld fm;
      fm9 = force? fm8;
      checkMissing(fm9);
      c2 = `is.object`(fm9);
      if c2 then L1() else L2(fm9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", fm9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(fm11):
      r36 = `$`(fm11, <sym pearson>);
      goto L0(r36);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p14 = prom<V +>{
      fm12 = ld fm;
      fm13 = force? fm12;
      checkMissing(fm13);
      c3 = `is.object`(fm13);
      if c3 then L1() else L2(fm13);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", fm13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(fm15):
      r38 = `$`(fm15, <sym df>);
      goto L0(r38);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r40 = dyn pchisq1[, , `lower.tail`](p13, p14, FALSE);
    check L20() else D17();
  D17():
    deopt 63 [r40];
  L20():
    mosaicplot4 = ldf mosaicplot;
    check L21() else D18();
  D18():
    deopt 65 [];
  L21():
    p15 = prom<V +>{
      __1 = ldf `~` in base;
      r41 = dyn __1(<lang `+`(gear, carb)>);
      return r41;
    };
    p16 = prom<V +>{
      mtcars = ld mtcars;
      mtcars1 = force? mtcars;
      checkMissing(mtcars1);
      return mtcars1;
    };
    r44 = dyn mosaicplot4[, data, color, las](p15, p16, TRUE, 1.0);
    check L22() else D19();
  D19():
    deopt 73 [r44];
  L22():
    mosaicplot5 = ldf mosaicplot;
    check L23() else D20();
  D20():
    deopt 75 [];
  L23():
    p17 = prom<V +>{
      __2 = ldf `~` in base;
      r45 = dyn __2(<lang `+`(gear, carb)>);
      return r45;
    };
    p18 = prom<V +>{
      mtcars2 = ld mtcars;
      mtcars3 = force? mtcars2;
      checkMissing(mtcars3);
      return mtcars3;
    };
    p19 = prom<V +>{
      return <int 2, 3>;
    };
    r49 = dyn mosaicplot5[, data, color, las](p17, p18, p19, 1.0);
    check L24() else D21();
  D21():
    deopt 83 [r49];
  L24():
    popenv;
    return r49;
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
    r2 = dyn UseMethod("mosaicplot");
    goto L0(r2);
  L2():
    r = dyn base("mosaicplot");
    goto L0(r);
  }
}