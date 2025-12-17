fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg require1:cls, reg grDevices:*, reg grDevices1:V, reg p1:p(V +), reg r8:V, reg sort:cls, reg runif:cls, reg r9:V, reg r10:V, reg p2:p(V +), reg r12:V, reg runif1:cls, reg r13:V, reg cbind:cls, reg z:*, reg z1:V, reg p3:p(V +), reg runif2:cls, reg r15:V, reg r16:V, reg p4:p(V +), reg runif3:cls, reg r18:V, reg p5:p(V +), reg r20:V, reg symbols:cls, reg x:*, reg x1:V, reg p6:p(V +), reg y:*, reg y1:V, reg p7:p(V +), reg cbind1:cls, reg z2:*, reg z3:V, reg p8:p(V +), reg r24:V, reg p9:p(V +), reg p10:p(V +), reg r27:V, reg symbols1:cls, reg x2:*, reg x3:V, reg p11:p(V +), reg y2:*, reg y3:V, reg p12:p(V +), reg z4:*, reg z5:V, reg p13:p(V +), reg r31:V, reg text:cls, reg x4:*, reg x5:V, reg p14:p(V +), reg y4:*, reg y5:V, reg p15:p(V +), reg apply:cls, reg format:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg round:cls, reg r36:V, reg p16:p(V +), reg r38:V, reg p17:p(V +), reg paste:*, reg paste1:V, reg p18:p(V +), reg r41:V, reg p19:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r43:V, reg r44:V, reg c:cls, reg r45:V, reg p20:p(V +), reg r47:V, reg nrow:cls, reg trees:*, reg trees1:V, reg p21:p(V +), reg r49:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg r51:V, reg with:cls, reg trees2:*, reg trees3:V, reg p22:p(V +), reg symbols2:cls, reg Height:*, reg Height1:V, reg p23:p(V +), reg Volume:*, reg Volume1:V, reg p24:p(V +), reg Girth:*, reg Girth1:V, reg r55:V, reg p25:p(V +), reg palette:cls, reg rainbow:cls, reg N:*, reg N1:V, reg p26:p(V +), reg r59:V, reg p27:p(V +), reg r61:V, reg symbols3:cls, reg Height2:*, reg Height3:V, reg p28:p(V +), reg Volume2:*, reg Volume3:V, reg p29:p(V +), reg Girth2:*, reg Girth3:V, reg r64:V, reg p30:p(V +), reg N2:*, reg N3:V, reg r66:V, reg p31:p(V +), reg palette1:cls, reg op:*, reg op1:V, reg p32:p(V +), reg r70:V, reg p33:p(V +), reg r72:V |
    mkenv;
    r = clos inner3179244297;
    st symbols = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    st x = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    sort = ldf sort;
    check L11() else D4();
  L5():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    require1 = ldf require;
    check L9() else D2();
  L8():
    r5 = dyn base1(<sym grDevices>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  D4():
    deopt 17 [];
  L6():
    goto L0();
  L9():
    p1 = prom<V +>{
      grDevices = ld grDevices;
      grDevices1 = force? grDevices;
      checkMissing(grDevices1);
      return grDevices1;
    };
    r8 = dyn require1(p1);
    check L10() else D3();
  L11():
    p2 = prom<V +>{
      runif = ldf runif;
      r9 = dyn runif(10.0);
      r10 = `*`(10.0, r9);
      return r10;
    };
    r12 = dyn sort(p2);
    check L12() else D5();
  D3():
    deopt 12 [r8];
  D5():
    deopt 19 [r12];
  L10():
    goto L1();
  L12():
    st y = r12;
    runif1 = ldf runif;
    check L13() else D6();
  D6():
    deopt 22 [];
  L13():
    r13 = dyn runif1(10.0);
    check L14() else D7();
  D7():
    deopt 24 [r13];
  L14():
    st z = r13;
    cbind = ldf cbind;
    check L15() else D8();
  D8():
    deopt 27 [];
  L15():
    p3 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p4 = prom<V +>{
      runif2 = ldf runif;
      r15 = dyn runif2(10.0);
      r16 = `*`(2.0, r15);
      return r16;
    };
    p5 = prom<V +>{
      runif3 = ldf runif;
      r18 = dyn runif3(10.0);
      return r18;
    };
    r20 = dyn cbind(p3, p4, p5);
    check L16() else D9();
  D9():
    deopt 31 [r20];
  L16():
    st z3 = r20;
    symbols = ldf symbols;
    check L17() else D10();
  D10():
    deopt 34 [];
  L17():
    p6 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p7 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p9 = prom<V +>{
      cbind1 = ldf cbind;
      p8 = prom<V +>{
        z2 = ld z;
        z3 = force? z2;
        checkMissing(z3);
        return z3;
      };
      r24 = dyn cbind1(0.5, 1.0, p8);
      return r24;
    };
    p10 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r27 = dyn symbols[, , thermometers, inches, fg](p6, p7, p9, 0.5, p10);
    check L18() else D11();
  D11():
    deopt 43 [r27];
  L18():
    symbols1 = ldf symbols;
    check L19() else D12();
  D12():
    deopt 45 [];
  L19():
    p11 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p12 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p13 = prom<V +>{
      z4 = ld z3;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    r31 = dyn symbols1[, , thermometers, inches](p11, p12, p13, FALSE);
    check L20() else D13();
  D13():
    deopt 52 [r31];
  L20():
    text = ldf text;
    check L21() else D14();
  D14():
    deopt 54 [];
  L21():
    p14 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p15 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p19 = prom<V +>{
      apply = ldf apply;
      p17 = prom<V +>{
        format = ldf format;
        p16 = prom<V +>{
          sym2 = ldf round;
          base2 = ldf round in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r35):
          return r35;
        L1():
          round = ldf round in base;
          r36 = dyn round(<sym z3>, 2.0);
          goto L0(r36);
        L2():
          r34 = dyn base2[, digits](<sym z3>, 2.0);
          goto L0(r34);
        };
        r38 = dyn format(p16);
        return r38;
      };
      p18 = prom<V +>{
        paste = ld paste;
        paste1 = force? paste;
        checkMissing(paste1);
        return paste1;
      };
      r41 = dyn apply[, , , collapse](p17, 1.0, p18, ",");
      return r41;
    };
    p20 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      c = ldf c in base;
      r45 = dyn c(-0.2, 0.0);
      goto L0(r45);
    L2():
      r43 = dyn base3(<lang `-`(0.2)>, 0.0);
      goto L0(r43);
    };
    r47 = dyn text[, , , adj, cex, col, xpd](p14, p15, p19, p20, 0.75, "purple", NA_LGL);
    check L22() else D15();
  D15():
    deopt 66 [r47];
  L22():
    nrow = ldf nrow;
    check L23() else D16();
  D16():
    deopt 68 [];
  L23():
    p21 = prom<V +>{
      trees = ld trees;
      trees1 = force? trees;
      checkMissing(trees1);
      return trees1;
    };
    r49 = dyn nrow(p21);
    check L24() else D17();
  D17():
    deopt 70 [r49];
  L24():
    st N = r49;
    sym4 = ldf with;
    base4 = ldf with in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L25() else L26();
  L2(r51):
    popenv;
    return r51;
  L25():
    with = ldf with;
    check L27() else D18();
  L26():
    r50 = dyn base4(<sym trees>, <lang {
      symbols(Height, Volume, circles=`/`(Girth, 24.0), inches=FALSE, main="Trees' Girth");
      `<-`(op, palette(rainbow(N, end=0.9)));
      symbols(Height, Volume, circles=`/`(Girth, 16.0), inches=FALSE, bg=`:`(1.0, N), fg="gray30", main="symbols(*, circles = Girth/16, bg = 1:N)");
      palette(op)
    }>);
    goto L2(r50);
  D18():
    deopt 74 [];
  L27():
    p22 = prom<V +>{
      trees2 = ld trees;
      trees3 = force? trees2;
      checkMissing(trees3);
      return trees3;
    };
    p33 = prom<V +>{
      symbols2 = ldf symbols;
      p23 = prom<V +>{
        Height = ld Height;
        Height1 = force? Height;
        checkMissing(Height1);
        return Height1;
      };
      p24 = prom<V +>{
        Volume = ld Volume;
        Volume1 = force? Volume;
        checkMissing(Volume1);
        return Volume1;
      };
      p25 = prom<V +>{
        Girth = ld Girth;
        Girth1 = force? Girth;
        checkMissing(Girth1);
        r55 = `/`(Girth1, 24.0);
        return r55;
      };
      dyn symbols2[, , circles, inches, main](p23, p24, p25, FALSE, "Trees' Girth");
      palette = ldf palette;
      p27 = prom<V +>{
        rainbow = ldf rainbow;
        p26 = prom<V +>{
          N = ld N;
          N1 = force? N;
          checkMissing(N1);
          return N1;
        };
        r59 = dyn rainbow[, end](p26, 0.9);
        return r59;
      };
      r61 = dyn palette(p27);
      st op = r61;
      symbols3 = ldf symbols;
      p28 = prom<V +>{
        Height2 = ld Height;
        Height3 = force? Height2;
        checkMissing(Height3);
        return Height3;
      };
      p29 = prom<V +>{
        Volume2 = ld Volume;
        Volume3 = force? Volume2;
        checkMissing(Volume3);
        return Volume3;
      };
      p30 = prom<V +>{
        Girth2 = ld Girth;
        Girth3 = force? Girth2;
        checkMissing(Girth3);
        r64 = `/`(Girth3, 16.0);
        return r64;
      };
      p31 = prom<V +>{
        N2 = ld N;
        N3 = force? N2;
        checkMissing(N3);
        r66 = `:`(1.0, N3);
        return r66;
      };
      dyn symbols3[, , circles, inches, bg, fg, main](p28, p29, p30, FALSE, p31, "gray30", "symbols(*, circles = Girth/16, bg = 1:N)");
      palette1 = ldf palette;
      p32 = prom<V +>{
        op = ld op;
        op1 = force? op;
        checkMissing(op1);
        return op1;
      };
      r70 = dyn palette1(p32);
      return r70;
    };
    r72 = dyn with(p22, p33);
    check L28() else D19();
  D19():
    deopt 77 [r72];
  L28():
    goto L2(r72);
  }
}
fun inner3179244297(x, y, circles, squares, rectangles, stars, thermometers, boxplots, inches, add, fg, bg, xlab, ylab, main, xlim, ylim, `...`) {
  (reg x:*, reg y:*, reg circles:*, reg squares:*, reg rectangles:*, reg stars:*, reg thermometers:*, reg boxplots:*, reg inches:*, reg add:*, reg fg:*, reg bg:*, reg xlab:*, reg ylab:*, reg main:*, reg xlim:*, reg ylim:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var circles:*, var squares:*, var rectangles:*, var stars:*, var thermometers:*, var boxplots:*, var inches:*, reg inches_isMissing:L, reg inches_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var fg:*, reg fg_isMissing:L, reg fg_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var bg:*, reg bg_isMissing:L, reg bg_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg r5:V, reg c:L, reg count:*, reg count1:V, reg r6:V, reg circles1:*, reg circles2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg missing1:cls, reg r10:V, reg r11:V, reg c1:L, reg count2:*, reg count3:V, reg r12:V, reg squares1:*, reg squares2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg missing2:cls, reg r16:V, reg r17:V, reg c2:L, reg count4:*, reg count5:V, reg r18:V, reg rectangles1:*, reg rectangles2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg missing3:cls, reg r22:V, reg r23:V, reg c3:L, reg count6:*, reg count7:V, reg r24:V, reg stars1:*, reg stars2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg missing4:cls, reg r28:V, reg r29:V, reg c4:L, reg count8:*, reg count9:V, reg r30:V, reg thermometers1:*, reg thermometers2:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg missing5:cls, reg r34:V, reg r35:V, reg c5:L, reg count10:*, reg count11:V, reg r36:V, reg boxplots1:*, reg boxplots2:V, reg count12:*, reg count13:V, reg r38:V, reg c6:L, reg stop:cls, reg r39:V, reg xy_coords:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg y1:*, reg y2:V, reg p2:p(V +), reg deparse1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg substitute:cls, reg r45:V, reg p3:p(V +), reg r47:V, reg p4:p(V +), reg deparse2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg substitute1:cls, reg r51:V, reg p5:p(V +), reg r53:V, reg p6:p(V +), reg r55:V, reg xy:*, reg xy1:V, reg c7:L, reg xy3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r56:V, reg xy4:*, reg xy5:V, reg c8:L, reg xy7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r57:V, reg add1:*, reg add2:V, reg r58:V, reg c9:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg r60:V, reg xlab1:*, reg xlab2:V, reg c10:V, reg c11:L, reg xy8:*, reg xy9:V, reg c12:L, reg xy11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r61:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg r63:V, reg ylab1:*, reg ylab2:V, reg c13:V, reg c14:L, reg xy12:*, reg xy13:V, reg c15:L, reg xy15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r65:V, reg r66:V, reg xlim1:*, reg xlim2:V, reg c16:V, reg c17:L, reg extendrange:cls, reg x3:*, reg x4:V, reg p7:p(V +), reg r68:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg r71:V, reg ylim1:*, reg ylim2:V, reg c18:V, reg c19:L, reg extendrange1:cls, reg y3:*, reg y4:V, reg p8:p(V +), reg r73:V, reg plot:cls, reg xlim3:*, reg xlim4:V, reg p9:p(V +), reg ylim3:*, reg ylim4:V, reg p10:p(V +), reg xlab3:*, reg xlab4:V, reg p11:p(V +), reg ylab3:*, reg ylab4:V, reg p12:p(V +), reg main1:*, reg main2:V, reg p13:p(V +), reg ddd1:dots?, reg r80:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r82:V, reg r83:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r84:V, reg r85:V, reg _External_graphics:cls, reg C_symbols:*, reg C_symbols1:V, reg p14:p(V +), reg x5:*, reg x6:V, reg p15:p(V +), reg y5:*, reg y6:V, reg p16:p(V +), reg type:*, reg type1:V, reg p17:p(V +), reg data:*, reg data1:V, reg p18:p(V +), reg inches1:*, reg inches2:V, reg p19:p(V +), reg bg1:*, reg bg2:V, reg p20:p(V +), reg fg1:*, reg fg2:V, reg p21:p(V +), reg ddd2:dots?, reg r94:V, reg invisible:cls, reg r95:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    st circles = circles;
    st squares = squares;
    st rectangles = rectangles;
    st stars = stars;
    st thermometers = thermometers;
    st boxplots = boxplots;
    inches_isMissing = missing.0(inches);
    if inches_isMissing then L1(TRUE) else L1(inches);
  L1(inches_orDefault):
    st inches = inches_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L2(FALSE) else L2(add);
  L2(add_orDefault):
    st add = add_orDefault;
    fg_isMissing = missing.0(fg);
    if fg_isMissing then L3() else L4(fg);
  L3():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("col");
      return r;
    };
    goto L4(p);
  L4(fg_orDefault):
    st fg = fg_orDefault;
    bg_isMissing = missing.0(bg);
    if bg_isMissing then L5(NA_LGL) else L5(bg);
  L5(bg_orDefault):
    st bg = bg_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L6(NULL) else L6(xlab);
  L6(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L7(NULL) else L7(ylab);
  L7(ylab_orDefault):
    st ylab = ylab_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L8(NULL) else L8(main);
  L8(main_orDefault):
    st main = main_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L9(NULL) else L9(xlim);
  L9(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L10(NULL) else L10(ylim);
  L10(ylim_orDefault):
    st ylim = ylim_orDefault;
    st `...` = ddd;
    st count = 0.0;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L47() else L48();
  L11(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L49() else L12();
  L47():
    missing = ldf missing in base;
    r4 = dyn missing(<sym circles>);
    goto L11(r4);
  L48():
    r2 = dyn base(<sym circles>);
    goto L11(r2);
  L12():
    goto L13();
  L13():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L53() else L54();
  L49():
    count = ld count;
    check L50() else D0();
  D0():
    deopt 7 [count];
  L14(r9):
    r11 = `!`(r9);
    c1 = `as.logical`(r11);
    if c1 then L55() else L15();
  L50():
    count1 = force? count;
    checkMissing(count1);
    r6 = `+`(count1, 1.0);
    st count = r6;
    circles1 = ld circles;
    check L51() else D1();
  L53():
    missing1 = ldf missing in base;
    r10 = dyn missing1(<sym squares>);
    goto L14(r10);
  L54():
    r8 = dyn base1(<sym squares>);
    goto L14(r8);
  D1():
    deopt 12 [circles1];
  L15():
    goto L16();
  L16():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L51():
    circles2 = force? circles1;
    checkMissing(circles2);
    st data = circles2;
    st type = 1.0;
    goto L13();
  L55():
    count2 = ld count;
    check L56() else D2();
  D2():
    deopt 24 [count2];
  L17(r15):
    r17 = `!`(r15);
    c2 = `as.logical`(r17);
    if c2 then L61() else L18();
  L56():
    count3 = force? count2;
    checkMissing(count3);
    r12 = `+`(count3, 1.0);
    st count = r12;
    squares1 = ld squares;
    check L57() else D3();
  L59():
    missing2 = ldf missing in base;
    r16 = dyn missing2(<sym rectangles>);
    goto L17(r16);
  L60():
    r14 = dyn base2(<sym rectangles>);
    goto L17(r14);
  D3():
    deopt 29 [squares1];
  L18():
    goto L19();
  L19():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L65() else L66();
  L57():
    squares2 = force? squares1;
    checkMissing(squares2);
    st data = squares2;
    st type = 2.0;
    goto L16();
  L61():
    count4 = ld count;
    check L62() else D4();
  D4():
    deopt 41 [count4];
  L20(r21):
    r23 = `!`(r21);
    c3 = `as.logical`(r23);
    if c3 then L67() else L21();
  L62():
    count5 = force? count4;
    checkMissing(count5);
    r18 = `+`(count5, 1.0);
    st count = r18;
    rectangles1 = ld rectangles;
    check L63() else D5();
  L65():
    missing3 = ldf missing in base;
    r22 = dyn missing3(<sym stars>);
    goto L20(r22);
  L66():
    r20 = dyn base3(<sym stars>);
    goto L20(r20);
  D5():
    deopt 46 [rectangles1];
  L21():
    goto L22();
  L22():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  L63():
    rectangles2 = force? rectangles1;
    checkMissing(rectangles2);
    st data = rectangles2;
    st type = 3.0;
    goto L19();
  L67():
    count6 = ld count;
    check L68() else D6();
  D6():
    deopt 58 [count6];
  L23(r27):
    r29 = `!`(r27);
    c4 = `as.logical`(r29);
    if c4 then L73() else L24();
  L68():
    count7 = force? count6;
    checkMissing(count7);
    r24 = `+`(count7, 1.0);
    st count = r24;
    stars1 = ld stars;
    check L69() else D7();
  L71():
    missing4 = ldf missing in base;
    r28 = dyn missing4(<sym thermometers>);
    goto L23(r28);
  L72():
    r26 = dyn base4(<sym thermometers>);
    goto L23(r26);
  D7():
    deopt 63 [stars1];
  L24():
    goto L25();
  L25():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L77() else L78();
  L69():
    stars2 = force? stars1;
    checkMissing(stars2);
    st data = stars2;
    st type = 4.0;
    goto L22();
  L73():
    count8 = ld count;
    check L74() else D8();
  D8():
    deopt 75 [count8];
  L26(r33):
    r35 = `!`(r33);
    c5 = `as.logical`(r35);
    if c5 then L79() else L27();
  L74():
    count9 = force? count8;
    checkMissing(count9);
    r30 = `+`(count9, 1.0);
    st count = r30;
    thermometers1 = ld thermometers;
    check L75() else D9();
  L77():
    missing5 = ldf missing in base;
    r34 = dyn missing5(<sym boxplots>);
    goto L26(r34);
  L78():
    r32 = dyn base5(<sym boxplots>);
    goto L26(r32);
  D9():
    deopt 80 [thermometers1];
  L27():
    goto L28();
  L28():
    count12 = ld count;
    check L83() else D12();
  L75():
    thermometers2 = force? thermometers1;
    checkMissing(thermometers2);
    st data = thermometers2;
    st type = 5.0;
    goto L25();
  L79():
    count10 = ld count;
    check L80() else D10();
  D10():
    deopt 92 [count10];
  D12():
    deopt 105 [count12];
  L80():
    count11 = force? count10;
    checkMissing(count11);
    r36 = `+`(count11, 1.0);
    st count = r36;
    boxplots1 = ld boxplots;
    check L81() else D11();
  L83():
    count13 = force? count12;
    checkMissing(count13);
    r38 = `!=`(count13, 1.0);
    c6 = `as.logical`(r38);
    if c6 then L84() else L29();
  D11():
    deopt 97 [boxplots1];
  L29():
    goto L30();
  L30():
    xy_coords = ldf `xy.coords`;
    check L88() else D15();
  L81():
    boxplots2 = force? boxplots1;
    checkMissing(boxplots2);
    st data = boxplots2;
    st type = 6.0;
    goto L28();
  L84():
    stop = ldf stop;
    check L85() else D13();
  D13():
    deopt 110 [];
  D15():
    deopt 116 [];
  L85():
    r39 = dyn stop("exactly one symbol type must be specified");
    check L86() else D14();
  L88():
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
    p4 = prom<V +>{
      deparse1 = ldf deparse1;
      p3 = prom<V +>{
        sym6 = ldf substitute;
        base6 = ldf substitute in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r44):
        return r44;
      L1():
        substitute = ldf substitute in base;
        r45 = dyn substitute(<sym x>);
        goto L0(r45);
      L2():
        r43 = dyn base6(<sym x>);
        goto L0(r43);
      };
      r47 = dyn deparse1(p3);
      return r47;
    };
    p6 = prom<V +>{
      deparse2 = ldf deparse1;
      p5 = prom<V +>{
        sym7 = ldf substitute;
        base7 = ldf substitute in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r50):
        return r50;
      L1():
        substitute1 = ldf substitute in base;
        r51 = dyn substitute1(<sym y>);
        goto L0(r51);
      L2():
        r49 = dyn base7(<sym y>);
        goto L0(r49);
      };
      r53 = dyn deparse2(p5);
      return r53;
    };
    r55 = dyn xy_coords[, , xlab, ylab](p1, p2, p4, p6);
    check L89() else D16();
  D14():
    deopt 112 [r39];
  D16():
    deopt 123 [r55];
  L86():
    goto L30();
  L89():
    st xy = r55;
    xy = ld xy;
    check L90() else D17();
  D17():
    deopt 125 [xy];
  L90():
    xy1 = force? xy;
    checkMissing(xy1);
    c7 = `is.object`(xy1);
    if c7 then L92() else L93(xy1);
  L91(dx1):
    st x = dx1;
    xy4 = ld xy;
    check L95() else D18();
  L92():
    dr = tryDispatchBuiltin.1("$", xy1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L94() else L93(dr);
  L93(xy3):
    r56 = `$`(xy3, <sym x>);
    goto L91(r56);
  D18():
    deopt 129 [xy4];
  L94():
    dx = getTryDispatchBuiltinValue(dr);
    goto L91(dx);
  L95():
    xy5 = force? xy4;
    checkMissing(xy5);
    c8 = `is.object`(xy5);
    if c8 then L97() else L98(xy5);
  L96(dx3):
    st y = dx3;
    add1 = ld add;
    check L100() else D19();
  L97():
    dr2 = tryDispatchBuiltin.1("$", xy5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L99() else L98(dr2);
  L98(xy7):
    r57 = `$`(xy7, <sym y>);
    goto L96(r57);
  D19():
    deopt 133 [add1];
  L99():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L96(dx2);
  L100():
    add2 = force? add1;
    checkMissing(add2);
    r58 = `!`(add2);
    c9 = `as.logical`(r58);
    if c9 then L101() else L31();
  L31():
    goto L44();
  L44():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L139() else L140();
  L101():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L32(r60):
    c11 = `as.logical`(r60);
    if c11 then L105() else L33();
  L45(r83):
    popenv;
    return r83;
  L102():
    xlab1 = ld xlab;
    check L104() else D20();
  L103():
    r59 = dyn base8(<sym xlab>);
    goto L32(r59);
  L139():
    sym13 = ldf `.External.graphics`;
    base13 = ldf `.External.graphics` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L141() else L142();
  L140():
    r82 = dyn base12(<lang .External.graphics(C_symbols, x, y, type, data, inches, bg, fg, ...)>);
    goto L45(r82);
  D20():
    deopt 137 [xlab1];
  L33():
    goto L34();
  L34():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L112() else L113();
  L46(r85):
    invisible = ldf invisible in base;
    r95 = dyn invisible(r85);
    check L145() else D34();
  L104():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c10 = `==`(xlab2, NULL);
    goto L32(c10);
  L105():
    xy8 = ld xy;
    check L106() else D21();
  L141():
    _External_graphics = ldf `.External.graphics`;
    check L143() else D32();
  L142():
    r84 = dyn base13(<sym C_symbols>, <sym x>, <sym y>, <sym type>, <sym data>, <sym inches>, <sym bg>, <sym fg>, <sym ...>);
    goto L46(r84);
  D21():
    deopt 140 [xy8];
  D32():
    deopt 206 [];
  D34():
    deopt 218 [r95];
  L35(r63):
    c14 = `as.logical`(r63);
    if c14 then L115() else L36();
  L106():
    xy9 = force? xy8;
    checkMissing(xy9);
    c12 = `is.object`(xy9);
    if c12 then L108() else L109(xy9);
  L112():
    ylab1 = ld ylab;
    check L114() else D22();
  L113():
    r62 = dyn base9(<sym ylab>);
    goto L35(r62);
  L143():
    p14 = prom<V +>{
      C_symbols = ld C_symbols;
      C_symbols1 = force? C_symbols;
      checkMissing(C_symbols1);
      return C_symbols1;
    };
    p15 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p16 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    p17 = prom<V +>{
      type = ld type;
      type1 = force? type;
      checkMissing(type1);
      return type1;
    };
    p18 = prom<V +>{
      data = ld data;
      data1 = force? data;
      checkMissing(data1);
      return data1;
    };
    p19 = prom<V +>{
      inches1 = ld inches;
      inches2 = force? inches1;
      checkMissing(inches2);
      return inches2;
    };
    p20 = prom<V +>{
      bg1 = ld bg;
      bg2 = force? bg1;
      checkMissing(bg2);
      return bg2;
    };
    p21 = prom<V +>{
      fg1 = ld fg;
      fg2 = force? fg1;
      checkMissing(fg2);
      return fg2;
    };
    ddd2 = ld `...`;
    r94 = dyn _External_graphics[, , , , , , , , `...`](p14, p15, p16, p17, p18, p19, p20, p21, ddd2);
    check L144() else D33();
  L145():
    goto L45(r95);
  D22():
    deopt 147 [ylab1];
  D33():
    deopt 216 [r94];
  L36():
    goto L37();
  L37():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L122() else L123();
  L107(dx5):
    st xlab = dx5;
    goto L34();
  L108():
    dr4 = tryDispatchBuiltin.1("$", xy9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L110() else L109(dr4);
  L109(xy11):
    r61 = `$`(xy11, <sym xlab>);
    goto L107(r61);
  L114():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c13 = `==`(ylab2, NULL);
    goto L35(c13);
  L115():
    xy12 = ld xy;
    check L116() else D23();
  L144():
    goto L46(r94);
  D23():
    deopt 150 [xy12];
  L38(r66):
    c17 = `as.logical`(r66);
    if c17 then L125() else L39();
  L110():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L107(dx4);
  L116():
    xy13 = force? xy12;
    checkMissing(xy13);
    c15 = `is.object`(xy13);
    if c15 then L118() else L119(xy13);
  L122():
    xlim1 = ld xlim;
    check L124() else D24();
  L123():
    r65 = dyn base10(<sym xlim>);
    goto L38(r65);
  D24():
    deopt 157 [xlim1];
  L39():
    goto L40();
  L40():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L129() else L130();
  L117(dx8):
    st ylab = dx8;
    goto L37();
  L118():
    dr6 = tryDispatchBuiltin.1("$", xy13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L120() else L119(dr6);
  L119(xy15):
    r64 = `$`(xy15, <sym ylab>);
    goto L117(r64);
  L124():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c16 = `==`(xlim2, NULL);
    goto L38(c16);
  L125():
    extendrange = ldf extendrange;
    check L126() else D25();
  D25():
    deopt 161 [];
  L41(r71):
    c19 = `as.logical`(r71);
    if c19 then L132() else L42();
  L120():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L117(dx7);
  L126():
    p7 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r68 = dyn extendrange[, f](p7, 0.1);
    check L127() else D26();
  L129():
    ylim1 = ld ylim;
    check L131() else D27();
  L130():
    r70 = dyn base11(<sym ylim>);
    goto L41(r70);
  D26():
    deopt 165 [r68];
  D27():
    deopt 170 [ylim1];
  L42():
    goto L43();
  L43():
    plot = ldf plot;
    check L136() else D30();
  L127():
    st xlim = r68;
    goto L40();
  L131():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c18 = `==`(ylim2, NULL);
    goto L41(c18);
  L132():
    extendrange1 = ldf extendrange;
    check L133() else D28();
  D28():
    deopt 174 [];
  D30():
    deopt 183 [];
  L133():
    p8 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r73 = dyn extendrange1[, f](p8, 0.1);
    check L134() else D29();
  L136():
    p9 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      return xlim4;
    };
    p10 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    p11 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p12 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p13 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    ddd1 = ld `...`;
    r80 = dyn plot[, , type, xlim, ylim, xlab, ylab, main, `...`](NA_LGL, NA_LGL, "n", p9, p10, p11, p12, p13, ddd1);
    check L137() else D31();
  D29():
    deopt 178 [r73];
  D31():
    deopt 199 [r80];
  L134():
    st ylim = r73;
    goto L43();
  L137():
    goto L44();
  }
}