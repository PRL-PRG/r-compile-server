fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg plot:cls, reg p1:p(V +), reg rnorm:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg axis:cls, reg p3:p(V +), reg LETTERS:*, reg LETTERS1:V, reg c:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg axis1:cls, reg r13:V, reg box:cls, reg r14:V, reg plot1:cls, reg p5:p(V +), reg rnorm1:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg axis2:cls, reg p7:p(V +), reg LETTERS4:*, reg LETTERS5:V, reg c1:L, reg LETTERS7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r20:V, reg p8:p(V +), reg r22:V, reg axis3:cls, reg r23:V, reg axis4:cls, reg r24:V, reg plot2:cls, reg p9:p(V +), reg r26:V, reg axis5:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg c2:cls, reg r29:V, reg p10:p(V +), reg r31:V, reg plot3:cls, reg r32:V, reg p11:p(V +), reg r34:V, reg title:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg quote:cls, reg r37:V, reg p12:p(V +), reg r39:V, reg axis6:cls, reg r40:V, reg r41:V, reg p13:p(V +), reg p14:p(V +), reg r44:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r45:V, reg r46:V, reg c3:cls, reg r47:V, reg paste0:cls, reg ifelse:cls, reg gaps:*, reg gaps1:V, reg r48:V, reg p15:p(V +), reg r50:V, reg p16:p(V +), reg formatC:cls, reg gaps2:*, reg gaps3:V, reg p17:p(V +), reg r53:V, reg p18:p(V +), reg r55:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r56:V, reg r57:V, reg gaps4:*, reg gaps5:V, reg r58:I, reg jj:*, reg jj1:V, reg r59:V, reg r60:V, reg jj2:*, reg jj3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg gaps6:*, reg gaps7:V, reg c5:L, reg i6:I, reg gaps9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg j:*, reg j1:V, reg __2:cls, reg r61:V, reg r62:V, reg axis7:cls, reg r63:V, reg r64:V, reg p19:p(V +), reg gaps10:*, reg gaps11:V, reg c6:L, reg gaps13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg j2:*, reg j3:V, reg __3:cls, reg r66:V, reg p20:p(V +), reg p21:p(V +), reg linG:*, reg linG1:V, reg c7:L, reg linG3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg j4:*, reg j5:V, reg __4:cls, reg r69:V, reg p22:p(V +), reg isD:*, reg isD1:V, reg c8:L, reg p23:p(V +), reg isD2:*, reg isD3:V, reg r72:V, reg p24:p(V +), reg r74:V, reg mtext:cls, reg chG:*, reg chG1:V, reg p25:p(V +), reg p26:p(V +), reg linG4:*, reg linG5:V, reg r77:V, reg p27:p(V +), reg p28:p(V +), reg ifelse1:cls, reg gaps14:*, reg gaps15:V, reg r80:V, reg p29:p(V +), reg r82:V, reg p30:p(V +), reg r84:V |
    mkenv;
    r = clos inner835839319;
    st axis = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    plot = ldf plot;
    check L10() else D2();
  L6():
    require = ldf require;
    check L8() else D0();
  L7():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
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
    p1 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p2 = prom<V +>{
      rnorm = ldf rnorm;
      r6 = dyn rnorm(4.0);
      return r6;
    };
    r8 = dyn plot[, , axes](p1, p2, FALSE);
    check L11() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [r8];
  L9():
    goto L0();
  L11():
    axis = ldf axis;
    check L12() else D4();
  D4():
    deopt 16 [];
  L12():
    p3 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p4 = prom<V +>{
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      c = `is.object`(LETTERS1);
      if c then L1() else L2(LETTERS1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", LETTERS1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(LETTERS3):
      __ = ldf `[` in base;
      r10 = dyn __(LETTERS3, <int 1, 2, 3, 4>);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r12 = dyn axis(1.0, p3, p4);
    check L13() else D5();
  D5():
    deopt 20 [r12];
  L13():
    axis1 = ldf axis;
    check L14() else D6();
  D6():
    deopt 22 [];
  L14():
    r13 = dyn axis1(2.0);
    check L15() else D7();
  D7():
    deopt 24 [r13];
  L15():
    box = ldf box;
    check L16() else D8();
  D8():
    deopt 26 [];
  L16():
    r14 = dyn box();
    check L17() else D9();
  D9():
    deopt 27 [r14];
  L17():
    plot1 = ldf plot;
    check L18() else D10();
  D10():
    deopt 29 [];
  L18():
    p5 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    p6 = prom<V +>{
      rnorm1 = ldf rnorm;
      r16 = dyn rnorm1(7.0);
      return r16;
    };
    r18 = dyn plot1[, , main, type, xaxt, `frame.plot`, col](p5, p6, "axis() examples", "s", "n", FALSE, "red");
    check L19() else D11();
  D11():
    deopt 42 [r18];
  L19():
    axis2 = ldf axis;
    check L20() else D12();
  D12():
    deopt 44 [];
  L20():
    p7 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    p8 = prom<V +>{
      LETTERS4 = ld LETTERS;
      LETTERS5 = force? LETTERS4;
      checkMissing(LETTERS5);
      c1 = `is.object`(LETTERS5);
      if c1 then L1() else L2(LETTERS5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", LETTERS5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(LETTERS7):
      __1 = ldf `[` in base;
      r20 = dyn __1(LETTERS7, <int 1, 2, 3, 4, 5, 6, 7>);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r22 = dyn axis2[, , , `col.axis`](1.0, p7, p8, "blue");
    check L21() else D13();
  D13():
    deopt 50 [r22];
  L21():
    axis3 = ldf axis;
    check L22() else D14();
  D14():
    deopt 52 [];
  L22():
    r23 = dyn axis3[, col, `col.axis`, lwd](4.0, "violet", "dark violet", 2.0);
    check L23() else D15();
  D15():
    deopt 60 [r23];
  L23():
    axis4 = ldf axis;
    check L24() else D16();
  D16():
    deopt 62 [];
  L24():
    r24 = dyn axis4[, col, lty, lwd](3.0, "gold", 2.0, 0.5);
    check L25() else D17();
  D17():
    deopt 70 [r24];
  L25():
    plot2 = ldf plot;
    check L26() else D18();
  D18():
    deopt 72 [];
  L26():
    p9 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r26 = dyn plot2[, xaxt](p9, "n");
    check L27() else D19();
  D19():
    deopt 76 [r26];
  L27():
    axis5 = ldf axis;
    check L28() else D20();
  D20():
    deopt 78 [];
  L28():
    p10 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c2 = ldf c in base;
      r29 = dyn c2(2.0, 9.0, 7.0);
      goto L0(r29);
    L2():
      r27 = dyn base1(2.0, 9.0, 7.0);
      goto L0(r27);
    };
    r31 = dyn axis5[, xaxp](1.0, p10);
    check L29() else D21();
  D21():
    deopt 82 [r31];
  L29():
    plot3 = ldf plot;
    check L30() else D22();
  D22():
    deopt 84 [];
  L30():
    p11 = prom<V +>{
      r32 = `:`(0.0, 100.0);
      return r32;
    };
    r34 = dyn plot3[, type, axes, ann](p11, "n", FALSE, FALSE);
    check L31() else D23();
  D23():
    deopt 92 [r34];
  L31():
    title = ldf title;
    check L32() else D24();
  D24():
    deopt 94 [];
  L32():
    p12 = prom<V +>{
      sym2 = ldf quote;
      base2 = ldf quote in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      quote = ldf quote in base;
      r37 = dyn quote(<lang `~`("axis(1, .., gap.axis = f),", `~`(`>=`(f, 0.0)))>);
      goto L0(r37);
    L2():
      r35 = dyn base2(<lang `~`("axis(1, .., gap.axis = f),", `~`(`>=`(f, 0.0)))>);
      goto L0(r35);
    };
    r39 = dyn title(p12);
    check L33() else D25();
  D25():
    deopt 96 [r39];
  L33():
    axis6 = ldf axis;
    check L34() else D26();
  D26():
    deopt 98 [];
  L34():
    p13 = prom<V +>{
      r40 = `:`(0.0, 20.0);
      r41 = `*`(5.0, r40);
      return r41;
    };
    p14 = prom<V +>{
      return 0.25;
    };
    r44 = dyn axis6[, at, las, `gap.axis`](2.0, p13, 1.0, p14);
    check L35() else D27();
  D27():
    deopt 106 [r44];
  L35():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L1(r46):
    st gaps = r46;
    paste0 = ldf paste0;
    check L39() else D29();
  L36():
    c3 = ldf c in base;
    r47 = dyn c3(4.0, 2.0, 1.0, 0.5, 0.25, 0.1, 0.0);
    check L38() else D28();
  L37():
    r45 = dyn base3(4.0, 2.0, 1.0, <lang `/`(1.0, 2.0)>, <lang `/`(1.0, 4.0)>, 0.1, 0.0);
    goto L1(r45);
  D28():
    deopt 119 [r47];
  D29():
    deopt 122 [];
  L38():
    goto L1(r47);
  L39():
    p16 = prom<V +>{
      ifelse = ldf ifelse;
      p15 = prom<V +>{
        gaps = ld gaps;
        gaps1 = force? gaps;
        checkMissing(gaps1);
        r48 = `==`(gaps1, 1.0);
        return r48;
      };
      r50 = dyn ifelse(p15, "default:  ", "");
      return r50;
    };
    p18 = prom<V +>{
      formatC = ldf formatC;
      p17 = prom<V +>{
        gaps2 = ld gaps;
        gaps3 = force? gaps2;
        checkMissing(gaps3);
        return gaps3;
      };
      r53 = dyn formatC(p17);
      return r53;
    };
    r55 = dyn paste0(p16, "gap.axis=", p18);
    check L40() else D30();
  D30():
    deopt 126 [r55];
  L40():
    st chG = r55;
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L2(r57):
    st jj = r57;
    jj = ld jj;
    check L44() else D32();
  L41():
    gaps4 = ld gaps;
    check L43() else D31();
  L42():
    r56 = dyn base4(<sym gaps>);
    goto L2(r56);
  D31():
    deopt 129 [gaps4];
  D32():
    deopt 134 [-2.5, jj];
  L43():
    gaps5 = force? gaps4;
    checkMissing(gaps5);
    r58 = seq_along(gaps5);
    goto L2(r58);
  L44():
    jj1 = force? jj;
    checkMissing(jj1);
    r59 = `-`(jj1, 1.0);
    r60 = `*`(-2.5, r59);
    st linG = r60;
    jj2 = ld jj;
    check L45() else D33();
  D33():
    deopt 140 [jj2];
  L45():
    jj3 = force? jj2;
    checkMissing(jj3);
    s = toForSeq(jj3);
    l = length(s);
    i = 0;
    goto L3(i);
  L3(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L46() else L5();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    gaps6 = ld gaps;
    check L47() else D34();
  L46():
    mtext = ldf mtext;
    check L54() else D38();
  D34():
    deopt 142 [i2, gaps6];
  D38():
    deopt 170 [];
  L47():
    gaps7 = force? gaps6;
    checkMissing(gaps7);
    c5 = `is.object`(gaps7);
    if c5 then L48() else L49(i2, gaps7);
  L54():
    p25 = prom<V +>{
      chG = ld chG;
      chG1 = force? chG;
      checkMissing(chG1);
      return chG1;
    };
    p26 = prom<V +>{
      return -1.0;
    };
    p27 = prom<V +>{
      linG4 = ld linG;
      linG5 = force? linG4;
      checkMissing(linG5);
      r77 = `-`(linG5, 0.5);
      return r77;
    };
    p28 = prom<V +>{
      return 0.75;
    };
    p30 = prom<V +>{
      ifelse1 = ldf ifelse;
      p29 = prom<V +>{
        gaps14 = ld gaps;
        gaps15 = force? gaps14;
        checkMissing(gaps15);
        r80 = `==`(gaps15, 1.0);
        return r80;
      };
      r82 = dyn ifelse1(p29, "forest green", "blue3");
      return r82;
    };
    r84 = dyn mtext[, side, padj, line, cex, col](p25, 1.0, p26, p27, p28, p30);
    check L55() else D39();
  D39():
    deopt 182 [r84];
  L4(i8, dx5):
    r62 = `==`(dx5, 1.0);
    st isD = r62;
    axis7 = ldf axis;
    check L52() else D36();
  L48():
    dr4 = tryDispatchBuiltin.1("[", gaps7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(i2, dr4);
  L49(i6, gaps9):
    j = ld j;
    check L51() else D35();
  L55():
    popenv;
    return r84;
  D35():
    deopt 144 [i6, gaps9, j];
  D36():
    deopt 151 [i8];
  L50():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(i2, dx4);
  L51():
    j1 = force? j;
    __2 = ldf `[` in base;
    r61 = dyn __2(gaps9, j1);
    goto L4(i6, r61);
  L52():
    p19 = prom<V +>{
      r63 = `:`(0.0, 20.0);
      r64 = `*`(5.0, r63);
      return r64;
    };
    p20 = prom<V +>{
      gaps10 = ld gaps;
      gaps11 = force? gaps10;
      checkMissing(gaps11);
      c6 = `is.object`(gaps11);
      if c6 then L1() else L2(gaps11);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", gaps11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(gaps13):
      j2 = ld j;
      j3 = force? j2;
      __3 = ldf `[` in base;
      r66 = dyn __3(gaps13, j3);
      goto L0(r66);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p21 = prom<V +>{
      return -1.0;
    };
    p22 = prom<V +>{
      linG = ld linG;
      linG1 = force? linG;
      checkMissing(linG1);
      c7 = `is.object`(linG1);
      if c7 then L1() else L2(linG1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", linG1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(linG3):
      j4 = ld j;
      j5 = force? j4;
      __4 = ldf `[` in base;
      r69 = dyn __4(linG3, j5);
      goto L0(r69);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p23 = prom<V +>{
      isD = ld isD;
      isD1 = force? isD;
      checkMissing(isD1);
      c8 = `as.logical`(isD1);
      if c8 then L1() else L0();
    L0():
      return 1.0;
    L1():
      return "forest green";
    };
    p24 = prom<V +>{
      isD2 = ld isD;
      isD3 = force? isD2;
      checkMissing(isD3);
      r72 = `+`(1.0, isD3);
      return r72;
    };
    r74 = dyn axis7[, at, `gap.axis`, padj, line, `col.axis`, `font.axis`](1.0, p19, p20, p21, p22, p23, p24);
    check L53() else D37();
  D37():
    deopt 165 [i8, r74];
  L53():
    goto L3(i8);
  }
}
fun inner835839319(side, at, labels, tick, line, pos, outer, font, lty, lwd, `lwd.ticks`, col, `col.ticks`, hadj, padj, `gap.axis`, `...`) {
  (reg side:*, reg at:*, reg labels:*, reg tick:*, reg line:*, reg pos:*, reg outer:*, reg font:*, reg lty:*, reg lwd:*, reg lwd_ticks:*, reg col:*, reg col_ticks:*, reg hadj:*, reg padj:*, reg gap_axis:*, reg ddd:dots) -+> V { var side:*, var at:*, reg at_isMissing:L, reg at_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var tick:*, reg tick_isMissing:L, reg tick_orDefault:*, var line:*, reg line_isMissing:L, reg line_orDefault:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, var outer:*, reg outer_isMissing:L, reg outer_orDefault:*, var font:*, reg font_isMissing:L, reg font_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, var `lwd.ticks`:*, reg lwd_ticks_isMissing:L, reg lwd_ticks_orDefault:*, reg lwd1:*, reg lwd2:V, reg p:p(V +), var col:*, reg col_isMissing:L, reg col_orDefault:*, var `col.ticks`:*, reg col_ticks_isMissing:L, reg col_ticks_orDefault:*, var hadj:*, reg hadj_isMissing:L, reg hadj_orDefault:*, var padj:*, reg padj_isMissing:L, reg padj_orDefault:*, var `gap.axis`:*, reg gap_axis_isMissing:L, reg gap_axis_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg col1:*, reg col2:V, reg c:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c6:L, reg r4:V, reg missing:cls, reg r5:V, reg r6:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c15:L, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg c18:L, reg r10:V, reg list:cls, reg ddd1:dots?, reg r11:V, reg c19:L, reg c21:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg c23:L, reg dx1:V, reg r14:V, reg c24:V, reg r15:V, reg c25:L, reg c26:V, reg c28:L, reg fg:*, reg fg1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg _External_graphics:cls, reg C_axis:*, reg C_axis1:V, reg p1:p(V +), reg side1:*, reg side2:V, reg p2:p(V +), reg at1:*, reg at2:V, reg p3:p(V +), reg as_graphicsAnnot:cls, reg labels1:*, reg labels2:V, reg p4:p(V +), reg r24:V, reg p5:p(V +), reg tick1:*, reg tick2:V, reg p6:p(V +), reg line1:*, reg line2:V, reg p7:p(V +), reg pos1:*, reg pos2:V, reg p8:p(V +), reg outer1:*, reg outer2:V, reg p9:p(V +), reg font1:*, reg font2:V, reg p10:p(V +), reg lty1:*, reg lty2:V, reg p11:p(V +), reg lwd3:*, reg lwd4:V, reg p12:p(V +), reg lwd_ticks1:*, reg lwd_ticks2:V, reg p13:p(V +), reg col3:*, reg col4:V, reg p14:p(V +), reg col_ticks1:*, reg col_ticks2:V, reg p15:p(V +), reg hadj1:*, reg hadj2:V, reg p16:p(V +), reg padj1:*, reg padj2:V, reg p17:p(V +), reg gap_axis1:*, reg gap_axis2:V, reg p18:p(V +), reg ddd2:dots?, reg r39:V, reg invisible:cls, reg r40:V |
    mkenv;
    st side = side;
    at_isMissing = missing.0(at);
    if at_isMissing then L0(NULL) else L0(at);
  L0(at_orDefault):
    st at = at_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L1(TRUE) else L1(labels);
  L1(labels_orDefault):
    st labels = labels_orDefault;
    tick_isMissing = missing.0(tick);
    if tick_isMissing then L2(TRUE) else L2(tick);
  L2(tick_orDefault):
    st tick = tick_orDefault;
    line_isMissing = missing.0(line);
    if line_isMissing then L3(NA_LGL) else L3(line);
  L3(line_orDefault):
    st line = line_orDefault;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L4(NA_LGL) else L4(pos);
  L4(pos_orDefault):
    st pos = pos_orDefault;
    outer_isMissing = missing.0(outer);
    if outer_isMissing then L5(FALSE) else L5(outer);
  L5(outer_orDefault):
    st outer = outer_orDefault;
    font_isMissing = missing.0(font);
    if font_isMissing then L6(NA_LGL) else L6(font);
  L6(font_orDefault):
    st font = font_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L7("solid") else L7(lty);
  L7(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L8(1.0) else L8(lwd);
  L8(lwd_orDefault):
    st lwd = lwd_orDefault;
    lwd_ticks_isMissing = missing.0(lwd_ticks);
    if lwd_ticks_isMissing then L9() else L10(lwd_ticks);
  L9():
    p = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    goto L10(p);
  L10(lwd_ticks_orDefault):
    st `lwd.ticks` = lwd_ticks_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L11(NULL) else L11(col);
  L11(col_orDefault):
    st col = col_orDefault;
    col_ticks_isMissing = missing.0(col_ticks);
    if col_ticks_isMissing then L12(NULL) else L12(col_ticks);
  L12(col_ticks_orDefault):
    st `col.ticks` = col_ticks_orDefault;
    hadj_isMissing = missing.0(hadj);
    if hadj_isMissing then L13(NA_LGL) else L13(hadj);
  L13(hadj_orDefault):
    st hadj = hadj_orDefault;
    padj_isMissing = missing.0(padj);
    if padj_isMissing then L14(NA_LGL) else L14(padj);
  L14(padj_orDefault):
    st padj = padj_orDefault;
    gap_axis_isMissing = missing.0(gap_axis);
    if gap_axis_isMissing then L15(NA_LGL) else L15(gap_axis);
  L15(gap_axis_orDefault):
    st `gap.axis` = gap_axis_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L16(r2):
    c1 = `as.logical`(r2);
    if c1 then L29() else L17(c1);
  L26():
    col1 = ld col;
    check L28() else D0();
  L27():
    r1 = dyn base(<sym col>);
    goto L16(r1);
  D0():
    deopt 1 [col1];
  L17(c3):
    c10 = `as.logical`(c3);
    if c10 then L33() else L19(c10);
  L28():
    col2 = force? col1;
    checkMissing(col2);
    c = `==`(col2, NULL);
    goto L16(c);
  L29():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L18(c6, r4):
    r6 = `!`(r4);
    c7 = `as.logical`(r6);
    c8 = `&&`(c6, c7);
    goto L17(c8);
  L19(c12):
    c28 = `as.logical`(c12);
    if c28 then L45() else L22();
  L30():
    missing = ldf missing in base;
    r5 = dyn missing(<sym ...>);
    goto L18(c1, r5);
  L31():
    r3 = dyn base1(<sym ...>);
    goto L18(c1, r3);
  L33():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L20(c15, r8):
    r15 = `!`(r8);
    c25 = `as.logical`(r15);
    c26 = `&&`(c15, c25);
    goto L19(c26);
  L22():
    goto L23();
  L23():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L34():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L35():
    r7 = dyn base2(<lang `<-`(fg, `$`(list(...), fg))>);
    goto L20(c10, r7);
  L45():
    fg = ld fg;
    check L46() else D3();
  D3():
    deopt 20 [fg];
  L21(c18, r10):
    c19 = `is.object`(r10);
    if c19 then L41() else L42(c18, r10);
  L24(r17):
    popenv;
    return r17;
  L36():
    list = ldf list;
    check L38() else D1();
  L37():
    r9 = dyn base3(<sym ...>);
    goto L21(c10, r9);
  L46():
    fg1 = force? fg;
    checkMissing(fg1);
    st col = fg1;
    goto L23();
  L48():
    sym5 = ldf `.External.graphics`;
    base5 = ldf `.External.graphics` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L49():
    r16 = dyn base4(<lang .External.graphics(C_axis, side, at, as.graphicsAnnot(labels), tick, line, pos, outer, font, lty, lwd, lwd.ticks, col, col.ticks, hadj, padj, gap.axis, ...)>);
    goto L24(r16);
  D1():
    deopt 12 [c10];
  L25(r19):
    invisible = ldf invisible in base;
    r40 = dyn invisible(r19);
    check L54() else D6();
  L38():
    ddd1 = ld `...`;
    r11 = dyn list[`...`](ddd1);
    check L39() else D2();
  L40(c23, dx1):
    st fg = dx1;
    c24 = `==`(dx1, NULL);
    goto L20(c23, c24);
  L41():
    dr = tryDispatchBuiltin.1("$", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(c18, dr);
  L42(c21, r13):
    r14 = `$`(r13, <sym fg>);
    goto L40(c21, r14);
  L50():
    _External_graphics = ldf `.External.graphics`;
    check L52() else D4();
  L51():
    r18 = dyn base5(<sym C_axis>, <sym side>, <sym at>, <lang as.graphicsAnnot(labels)>, <sym tick>, <sym line>, <sym pos>, <sym outer>, <sym font>, <sym lty>, <sym lwd>, <sym lwd.ticks>, <sym col>, <sym col.ticks>, <sym hadj>, <sym padj>, <sym gap.axis>, <sym ...>);
    goto L25(r18);
  D2():
    deopt 14 [c10, r11];
  D4():
    deopt 29 [];
  D6():
    deopt 50 [r40];
  L39():
    goto L21(c10, r11);
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L40(c18, dx);
  L52():
    p1 = prom<V +>{
      C_axis = ld C_axis;
      C_axis1 = force? C_axis;
      checkMissing(C_axis1);
      return C_axis1;
    };
    p2 = prom<V +>{
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      return side2;
    };
    p3 = prom<V +>{
      at1 = ld at;
      at2 = force? at1;
      checkMissing(at2);
      return at2;
    };
    p5 = prom<V +>{
      as_graphicsAnnot = ldf `as.graphicsAnnot`;
      p4 = prom<V +>{
        labels1 = ld labels;
        labels2 = force? labels1;
        checkMissing(labels2);
        return labels2;
      };
      r24 = dyn as_graphicsAnnot(p4);
      return r24;
    };
    p6 = prom<V +>{
      tick1 = ld tick;
      tick2 = force? tick1;
      checkMissing(tick2);
      return tick2;
    };
    p7 = prom<V +>{
      line1 = ld line;
      line2 = force? line1;
      checkMissing(line2);
      return line2;
    };
    p8 = prom<V +>{
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      return pos2;
    };
    p9 = prom<V +>{
      outer1 = ld outer;
      outer2 = force? outer1;
      checkMissing(outer2);
      return outer2;
    };
    p10 = prom<V +>{
      font1 = ld font;
      font2 = force? font1;
      checkMissing(font2);
      return font2;
    };
    p11 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p12 = prom<V +>{
      lwd3 = ld lwd;
      lwd4 = force? lwd3;
      checkMissing(lwd4);
      return lwd4;
    };
    p13 = prom<V +>{
      lwd_ticks1 = ld `lwd.ticks`;
      lwd_ticks2 = force? lwd_ticks1;
      checkMissing(lwd_ticks2);
      return lwd_ticks2;
    };
    p14 = prom<V +>{
      col3 = ld col;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    p15 = prom<V +>{
      col_ticks1 = ld `col.ticks`;
      col_ticks2 = force? col_ticks1;
      checkMissing(col_ticks2);
      return col_ticks2;
    };
    p16 = prom<V +>{
      hadj1 = ld hadj;
      hadj2 = force? hadj1;
      checkMissing(hadj2);
      return hadj2;
    };
    p17 = prom<V +>{
      padj1 = ld padj;
      padj2 = force? padj1;
      checkMissing(padj2);
      return padj2;
    };
    p18 = prom<V +>{
      gap_axis1 = ld `gap.axis`;
      gap_axis2 = force? gap_axis1;
      checkMissing(gap_axis2);
      return gap_axis2;
    };
    ddd2 = ld `...`;
    r39 = dyn _External_graphics[, , , , , , , , , , , , , , , , , `...`](p1, p2, p3, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, ddd2);
    check L53() else D5();
  L54():
    goto L24(r40);
  D5():
    deopt 48 [r39];
  L53():
    goto L25(r39);
  }
}