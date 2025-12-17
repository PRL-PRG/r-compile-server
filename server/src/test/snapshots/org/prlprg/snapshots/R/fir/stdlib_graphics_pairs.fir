fun main() {
  () -+> V { reg r:cls, reg pairs:cls, reg iris:*, reg iris1:V, reg c:L, reg iris3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg c2:L, reg r7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg r12:V, reg iris4:*, reg iris5:V, reg c3:L, reg r14:V, reg iris7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r16:V, reg dx5:V, reg r17:V, reg unclass:cls, reg r18:V, reg __1:cls, reg r19:V, reg p1:p(V +), reg r21:V, reg pairs1:cls, reg __2:cls, reg r22:V, reg p2:p(V +), reg swiss:*, reg swiss1:V, reg p3:p(V +), reg Education:*, reg Education1:V, reg r25:V, reg p4:p(V +), reg r27:V, reg pairs2:cls, reg USJudgeRatings:*, reg USJudgeRatings1:V, reg p5:p(V +), reg p6:p(V +), reg r30:V, reg pairs3:cls, reg USJudgeRatings2:*, reg USJudgeRatings3:V, reg p7:p(V +), reg r32:V, reg r33:cls, reg pairs4:cls, reg USJudgeRatings4:*, reg USJudgeRatings5:V, reg c4:L, reg USJudgeRatings7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r34:V, reg p8:p(V +), reg panel_smooth:*, reg panel_smooth1:V, reg p9:p(V +), reg panel_hist:*, reg panel_hist1:V, reg p10:p(V +), reg r38:V, reg r39:cls, reg pairs5:cls, reg USJudgeRatings8:*, reg USJudgeRatings9:V, reg p11:p(V +), reg panel_smooth2:*, reg panel_smooth3:V, reg p12:p(V +), reg panel_cor:*, reg panel_cor1:V, reg p13:p(V +), reg r43:V, reg pairs6:cls, reg iris8:*, reg iris9:V, reg c5:L, reg iris11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r44:V, reg p14:p(V +), reg r46:V, reg pairs7:cls, reg iris12:*, reg iris13:V, reg p15:p(V +), reg p16:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r49:V, reg r50:V, reg c6:cls, reg r51:V, reg p17:p(V +), reg r53:V |
    mkenv;
    r = clos inner2044426018;
    st pairs = r;
    pairs = ldf pairs;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      iris = ld iris;
      iris1 = force? iris;
      checkMissing(iris1);
      c = `is.object`(iris1);
      if c then L1() else L2(iris1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", iris1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(iris3):
      __ = ldf `[` in base;
      r1 = dyn __(iris3, <int 1, 2, 3, 4>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r4):
      c2 = `is.object`(r4);
      if c2 then L5() else L6(r4);
    L3():
      c1 = ldf c in base;
      r5 = dyn c1("red", "green3", "blue");
      goto L0(r5);
    L4():
      r3 = dyn base("red", "green3", "blue");
      goto L0(r3);
    L1(dx3):
      return dx3;
    L5():
      dr2 = tryDispatchBuiltin.1("[", r4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(r7):
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L8() else L9();
    L2(r11, r12):
      __1 = ldf `[` in base;
      r19 = dyn __1(r11, r12);
      goto L1(r19);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L8():
      iris4 = ld iris;
      iris5 = force? iris4;
      checkMissing(iris5);
      c3 = `is.object`(iris5);
      if c3 then L11() else L12(r7, iris5);
    L9():
      r10 = dyn base1(<lang `$`(iris, Species)>);
      goto L2(r7, r10);
    L10(r16, dx5):
      unclass = ldf unclass in base;
      r18 = dyn unclass(dx5);
      goto L2(r16, r18);
    L11():
      dr4 = tryDispatchBuiltin.1("$", iris5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L13() else L12(r7, dr4);
    L12(r14, iris7):
      r17 = `$`(iris7, <sym Species>);
      goto L10(r14, r17);
    L13():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L10(r7, dx4);
    };
    r21 = dyn pairs[, main, pch, bg](p, "Anderson's Iris Data -- 3 species", 21.0, p1);
    check L1() else D1();
  D1():
    deopt 12 [r21];
  L1():
    pairs1 = ldf pairs;
    check L2() else D2();
  D2():
    deopt 14 [];
  L2():
    p2 = prom<V +>{
      __2 = ldf `~` in base;
      r22 = dyn __2(<lang `+`(`+`(Fertility, Education), Catholic)>);
      return r22;
    };
    p3 = prom<V +>{
      swiss = ld swiss;
      swiss1 = force? swiss;
      checkMissing(swiss1);
      return swiss1;
    };
    p4 = prom<V +>{
      Education = ld Education;
      Education1 = force? Education;
      checkMissing(Education1);
      r25 = `<`(Education1, 20.0);
      return r25;
    };
    r27 = dyn pairs1[, data, row1attop, subset, main](p2, p3, FALSE, p4, "Swiss data, Education < 20");
    check L3() else D3();
  D3():
    deopt 24 [r27];
  L3():
    pairs2 = ldf pairs;
    check L4() else D4();
  D4():
    deopt 26 [];
  L4():
    p5 = prom<V +>{
      USJudgeRatings = ld USJudgeRatings;
      USJudgeRatings1 = force? USJudgeRatings;
      checkMissing(USJudgeRatings1);
      return USJudgeRatings1;
    };
    p6 = prom<V +>{
      return 0.1;
    };
    r30 = dyn pairs2[, gap](p5, p6);
    check L5() else D5();
  D5():
    deopt 30 [r30];
  L5():
    pairs3 = ldf pairs;
    check L6() else D6();
  D6():
    deopt 32 [];
  L6():
    p7 = prom<V +>{
      USJudgeRatings2 = ld USJudgeRatings;
      USJudgeRatings3 = force? USJudgeRatings2;
      checkMissing(USJudgeRatings3);
      return USJudgeRatings3;
    };
    r32 = dyn pairs3[, `text.panel`, `upper.panel`](p7, NULL, NULL);
    check L7() else D7();
  D7():
    deopt 38 [r32];
  L7():
    r33 = clos inner2044426018;
    st `panel.hist` = r33;
    pairs4 = ldf pairs;
    check L8() else D8();
  D8():
    deopt 43 [];
  L8():
    p8 = prom<V +>{
      USJudgeRatings4 = ld USJudgeRatings;
      USJudgeRatings5 = force? USJudgeRatings4;
      checkMissing(USJudgeRatings5);
      c4 = `is.object`(USJudgeRatings5);
      if c4 then L1() else L2(USJudgeRatings5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", USJudgeRatings5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(USJudgeRatings7):
      __3 = ldf `[` in base;
      r34 = dyn __3(USJudgeRatings7, <int 1, 2, 3, 4, 5>);
      goto L0(r34);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p9 = prom<V +>{
      panel_smooth = ld `panel.smooth`;
      panel_smooth1 = force? panel_smooth;
      checkMissing(panel_smooth1);
      return panel_smooth1;
    };
    p10 = prom<V +>{
      panel_hist = ld `panel.hist`;
      panel_hist1 = force? panel_hist;
      checkMissing(panel_hist1);
      return panel_hist1;
    };
    r38 = dyn pairs4[, panel, cex, pch, bg, horOdd, `diag.panel`, `cex.labels`, `font.labels`](p8, p9, 1.5, 24.0, "light blue", TRUE, p10, 2.0, 2.0);
    check L9() else D9();
  D9():
    deopt 61 [r38];
  L9():
    r39 = clos inner3136802421;
    st `panel.cor` = r39;
    pairs5 = ldf pairs;
    check L10() else D10();
  D10():
    deopt 66 [];
  L10():
    p11 = prom<V +>{
      USJudgeRatings8 = ld USJudgeRatings;
      USJudgeRatings9 = force? USJudgeRatings8;
      checkMissing(USJudgeRatings9);
      return USJudgeRatings9;
    };
    p12 = prom<V +>{
      panel_smooth2 = ld `panel.smooth`;
      panel_smooth3 = force? panel_smooth2;
      checkMissing(panel_smooth3);
      return panel_smooth3;
    };
    p13 = prom<V +>{
      panel_cor = ld `panel.cor`;
      panel_cor1 = force? panel_cor;
      checkMissing(panel_cor1);
      return panel_cor1;
    };
    r43 = dyn pairs5[, `lower.panel`, `upper.panel`, gap, row1attop](p11, p12, p13, 0.0, FALSE);
    check L11() else D11();
  D11():
    deopt 76 [r43];
  L11():
    pairs6 = ldf pairs;
    check L12() else D12();
  D12():
    deopt 78 [];
  L12():
    p14 = prom<V +>{
      iris8 = ld iris;
      iris9 = force? iris8;
      checkMissing(iris9);
      c5 = `is.object`(iris9);
      if c5 then L1() else L2(iris9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", iris9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(iris11):
      __4 = ldf `[` in base;
      r44 = dyn __4(iris11, -5.0);
      goto L0(r44);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r46 = dyn pairs6[, log](p14, "xy");
    check L13() else D13();
  D13():
    deopt 82 [r46];
  L13():
    pairs7 = ldf pairs;
    check L14() else D14();
  D14():
    deopt 84 [];
  L14():
    p15 = prom<V +>{
      iris12 = ld iris;
      iris13 = force? iris12;
      checkMissing(iris13);
      return iris13;
    };
    p16 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p17 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      c6 = ldf c in base;
      r51 = dyn c6(2.0, 2.0, 3.0, 2.0);
      goto L0(r51);
    L2():
      r49 = dyn base2(2.0, 2.0, 3.0, 2.0);
      goto L0(r49);
    };
    r53 = dyn pairs7[, log, main, `line.main`, oma](p15, p16, "Lengths and Widths in [log]", 1.5, p17);
    check L15() else D15();
  D15():
    deopt 94 [r53];
  L15():
    popenv;
    return r53;
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
    r2 = dyn UseMethod("pairs");
    goto L0(r2);
  L2():
    r = dyn base("pairs");
    goto L0(r);
  }
}
fun inner3136802421(x, y, digits, prefix, `cex.cor`, `...`) {
  (reg x:*, reg y:*, reg digits:*, reg prefix:*, reg cex_cor:*, reg ddd:dots) -+> V { var x:*, var y:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, var `cex.cor`:*, var `...`:dots?, reg par:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg cor:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg y1:*, reg y2:V, reg p2:p(V +), reg r9:V, reg abs:cls, reg r10:V, reg format:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg r13:*, reg r14:V, reg c1:cls, reg r15:V, reg p3:p(V +), reg digits1:*, reg digits2:V, reg p4:p(V +), reg r18:V, reg c2:L, reg r20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg paste0:cls, reg prefix1:*, reg prefix2:V, reg p5:p(V +), reg txt:*, reg txt1:V, reg p6:p(V +), reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg missing:cls, reg r27:V, reg c3:L, reg strwidth:cls, reg txt2:*, reg txt3:V, reg p7:p(V +), reg r29:V, reg r30:V, reg text:cls, reg txt4:*, reg txt5:V, reg p8:p(V +), reg cex_cor1:*, reg cex_cor2:V, reg r33:*, reg r34:V, reg r35:V, reg p9:p(V +), reg r37:V |
    mkenv;
    st x = x;
    st y = y;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(2.0) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L1("") else L1(prefix);
  L1(prefix_orDefault):
    st prefix = prefix_orDefault;
    st `cex.cor` = cex_cor;
    st `...` = ddd;
    par = ldf par;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(0.0, 1.0, 0.0, 1.0);
      goto L0(r2);
    L2():
      r = dyn base(0.0, 1.0, 0.0, 1.0);
      goto L0(r);
    };
    r4 = dyn par[usr](p);
    check L8() else D1();
  D1():
    deopt 4 [r4];
  L8():
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L2(r6):
    st r = r6;
    format = ldf format;
    check L14() else D5();
  L9():
    cor = ldf cor;
    check L11() else D2();
  L10():
    r5 = dyn base1(<lang cor(x, y)>);
    goto L2(r5);
  D2():
    deopt 8 [];
  D5():
    deopt 16 [];
  L11():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r9 = dyn cor(p1, p2);
    check L12() else D3();
  L14():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      r13 = ld r;
      r14 = force? r13;
      checkMissing(r14);
      c1 = ldf c in base;
      r15 = dyn c1(r14, 0.123456789);
      goto L0(r15);
    L2():
      r11 = dyn base2(<sym r>, 0.123456789);
      goto L0(r11);
    };
    p4 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    r18 = dyn format[, digits](p3, p4);
    check L15() else D6();
  D3():
    deopt 11 [r9];
  D6():
    deopt 20 [r18];
  L12():
    abs = ldf abs in base;
    r10 = dyn abs(r9);
    check L13() else D4();
  L15():
    c2 = `is.object`(r18);
    if c2 then L16() else L17(r18);
  D4():
    deopt 13 [r10];
  L3(dx1):
    st txt = dx1;
    paste0 = ldf paste0;
    check L19() else D7();
  L13():
    goto L2(r10);
  L16():
    dr = tryDispatchBuiltin.1("[", r18);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(r20):
    __ = ldf `[` in base;
    r21 = dyn __(r20, 1.0);
    goto L3(r21);
  D7():
    deopt 26 [];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L19():
    p5 = prom<V +>{
      prefix1 = ld prefix;
      prefix2 = force? prefix1;
      checkMissing(prefix2);
      return prefix2;
    };
    p6 = prom<V +>{
      txt = ld txt;
      txt1 = force? txt;
      checkMissing(txt1);
      return txt1;
    };
    r24 = dyn paste0(p5, p6);
    check L20() else D8();
  D8():
    deopt 29 [r24];
  L20():
    st txt = r24;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L4(r26):
    c3 = `as.logical`(r26);
    if c3 then L23() else L5();
  L21():
    missing = ldf missing in base;
    r27 = dyn missing(<sym cex.cor>);
    goto L4(r27);
  L22():
    r25 = dyn base3(<sym cex.cor>);
    goto L4(r25);
  L5():
    goto L6();
  L6():
    text = ldf text;
    check L27() else D11();
  L23():
    strwidth = ldf strwidth;
    check L24() else D9();
  D9():
    deopt 36 [0.8];
  D11():
    deopt 44 [];
  L24():
    p7 = prom<V +>{
      txt2 = ld txt;
      txt3 = force? txt2;
      checkMissing(txt3);
      return txt3;
    };
    r29 = dyn strwidth(p7);
    check L25() else D10();
  L27():
    p8 = prom<V +>{
      txt4 = ld txt;
      txt5 = force? txt4;
      checkMissing(txt5);
      return txt5;
    };
    p9 = prom<V +>{
      cex_cor1 = ld `cex.cor`;
      cex_cor2 = force? cex_cor1;
      checkMissing(cex_cor2);
      r33 = ld r;
      r34 = force? r33;
      checkMissing(r34);
      r35 = `*`(cex_cor2, r34);
      return r35;
    };
    r37 = dyn text[, , , cex](0.5, 0.5, p8, p9);
    check L28() else D12();
  D10():
    deopt 38 [0.8, r29];
  D12():
    deopt 50 [r37];
  L25():
    r30 = `/`(0.8, r29);
    st `cex.cor` = r30;
    goto L6();
  L28():
    popenv;
    return r37;
  }
}