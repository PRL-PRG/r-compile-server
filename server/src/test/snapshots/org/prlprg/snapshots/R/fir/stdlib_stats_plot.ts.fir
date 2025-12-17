fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg ts:cls, reg matrix:cls, reg rt:cls, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg plot:cls, reg z:*, reg z1:V, reg p5:p(V +), reg r16:V, reg plot1:cls, reg z2:*, reg z3:V, reg p6:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg c1:cls, reg r20:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg c2:cls, reg r24:V, reg p8:p(V +), reg r26:V, reg title:cls, reg r27:V, reg window:cls, reg z4:*, reg z5:V, reg c3:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r28:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg c4:cls, reg r32:V, reg p10:p(V +), reg r34:V, reg plot2:cls, reg z8:*, reg z9:V, reg p11:p(V +), reg r36:V, reg plot3:cls, reg z10:*, reg z11:V, reg p12:p(V +), reg p13:p(V +), reg p14:p(V +), reg r40:V, reg plot4:cls, reg nhtemp:*, reg nhtemp1:V, reg p15:p(V +), reg lag:cls, reg nhtemp2:*, reg nhtemp3:V, reg p16:p(V +), reg r43:V, reg p17:p(V +), reg r45:V, reg plot5:cls, reg lag1:cls, reg sunspots:*, reg sunspots1:V, reg p18:p(V +), reg r47:V, reg p19:p(V +), reg sunspots2:*, reg sunspots3:V, reg p20:p(V +), reg r50:V, reg EuStockMarkets:*, reg EuStockMarkets1:V, reg c5:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r51:V, reg plot6:cls, reg lag2:cls, reg SMI:*, reg SMI1:V, reg p21:p(V +), reg r53:V, reg p22:p(V +), reg SMI2:*, reg SMI3:V, reg p23:p(V +), reg r56:V, reg plot7:cls, reg lag3:cls, reg SMI4:*, reg SMI5:V, reg p24:p(V +), reg r58:V, reg p25:p(V +), reg SMI6:*, reg SMI7:V, reg p26:p(V +), reg r61:V |
    mkenv;
    r = clos inner1548818147;
    st `plot.ts` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    ts = ldf ts;
    check L6() else D2();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L4():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    p3 = prom<V +>{
      matrix = ldf matrix;
      p2 = prom<V +>{
        rt = ldf rt;
        p1 = prom<V +>{
          return 1600.0;
        };
        r6 = dyn rt[, df](p1, 3.0);
        return r6;
      };
      r8 = dyn matrix(p2, 200.0, 8.0);
      return r8;
    };
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c = ldf c in base;
      r12 = dyn c(1961.0, 1.0);
      goto L0(r12);
    L2():
      r10 = dyn base1(1961.0, 1.0);
      goto L0(r10);
    };
    r14 = dyn ts[, start, frequency](p3, p4, 12.0);
    check L7() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 15 [r14];
  L5():
    goto L0();
  L7():
    st z = r14;
    plot = ldf plot;
    check L8() else D4();
  D4():
    deopt 18 [];
  L8():
    p5 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r16 = dyn plot[, `yax.flip`](p5, TRUE);
    check L9() else D5();
  D5():
    deopt 22 [r16];
  L9():
    plot1 = ldf plot;
    check L10() else D6();
  D6():
    deopt 24 [];
  L10():
    p6 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    p7 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c1 = ldf c in base;
      r20 = dyn c1(0.0, 0.0, 0.0, 0.0);
      goto L0(r20);
    L2():
      r18 = dyn base2(0.0, 0.0, 0.0, 0.0);
      goto L0(r18);
    };
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c2 = ldf c in base;
      r24 = dyn c2(1.0, 1.0, 5.0, 1.0);
      goto L0(r24);
    L2():
      r22 = dyn base3(1.0, 1.0, 5.0, 1.0);
      goto L0(r22);
    };
    r26 = dyn plot1[, axes, ann, `frame.plot`, `mar.multi`, `oma.multi`](p6, FALSE, FALSE, TRUE, p7, p8);
    check L11() else D7();
  D7():
    deopt 36 [r26];
  L11():
    title = ldf title;
    check L12() else D8();
  D8():
    deopt 38 [];
  L12():
    r27 = dyn title("plot(ts(..), axes=FALSE, ann=FALSE, frame.plot=TRUE, mar..., oma...)");
    check L13() else D9();
  D9():
    deopt 40 [r27];
  L13():
    window = ldf window;
    check L14() else D10();
  D10():
    deopt 42 [];
  L14():
    p9 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c3 = `is.object`(z5);
      if c3 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", z5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r28 = dyn __(z5, <missing>, <int 1, 2, 3>);
      goto L0(r28);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p10 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      c4 = ldf c in base;
      r32 = dyn c4(1969.0, 12.0);
      goto L0(r32);
    L2():
      r30 = dyn base4(1969.0, 12.0);
      goto L0(r30);
    };
    r34 = dyn window[, end](p9, p10);
    check L15() else D11();
  D11():
    deopt 46 [r34];
  L15():
    st z = r34;
    plot2 = ldf plot;
    check L16() else D12();
  D12():
    deopt 49 [];
  L16():
    p11 = prom<V +>{
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      return z9;
    };
    r36 = dyn plot2[, type](p11, "b");
    check L17() else D13();
  D13():
    deopt 53 [r36];
  L17():
    plot3 = ldf plot;
    check L18() else D14();
  D14():
    deopt 55 [];
  L18():
    p12 = prom<V +>{
      z10 = ld z;
      z11 = force? z10;
      checkMissing(z11);
      return z11;
    };
    p13 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p14 = prom<V +>{
      return <int 4, 3, 2>;
    };
    r40 = dyn plot3[, `plot.type`, lty, col](p12, "single", p13, p14);
    check L19() else D15();
  D15():
    deopt 63 [r40];
  L19():
    plot4 = ldf plot;
    check L20() else D16();
  D16():
    deopt 65 [];
  L20():
    p15 = prom<V +>{
      nhtemp = ld nhtemp;
      nhtemp1 = force? nhtemp;
      checkMissing(nhtemp1);
      return nhtemp1;
    };
    p17 = prom<V +>{
      lag = ldf lag;
      p16 = prom<V +>{
        nhtemp2 = ld nhtemp;
        nhtemp3 = force? nhtemp2;
        checkMissing(nhtemp3);
        return nhtemp3;
      };
      r43 = dyn lag(p16, 1.0);
      return r43;
    };
    r45 = dyn plot4[, , cex, col, main](p15, p17, 0.8, "blue", "Lag plot of New Haven temperatures");
    check L21() else D17();
  D17():
    deopt 74 [r45];
  L21():
    plot5 = ldf plot;
    check L22() else D18();
  D18():
    deopt 76 [];
  L22():
    p19 = prom<V +>{
      lag1 = ldf lag;
      p18 = prom<V +>{
        sunspots = ld sunspots;
        sunspots1 = force? sunspots;
        checkMissing(sunspots1);
        return sunspots1;
      };
      r47 = dyn lag1(p18, 1.0);
      return r47;
    };
    p20 = prom<V +>{
      sunspots2 = ld sunspots;
      sunspots3 = force? sunspots2;
      checkMissing(sunspots3);
      return sunspots3;
    };
    r50 = dyn plot5[, , pch](p19, p20, ".");
    check L23() else D19();
  D19():
    deopt 81 [r50];
  L23():
    EuStockMarkets = ld EuStockMarkets;
    check L24() else D20();
  D20():
    deopt 82 [EuStockMarkets];
  L24():
    EuStockMarkets1 = force? EuStockMarkets;
    checkMissing(EuStockMarkets1);
    c5 = `is.object`(EuStockMarkets1);
    if c5 then L25() else L26();
  L1(dx3):
    st SMI = dx3;
    plot6 = ldf plot;
    check L28() else D21();
  L25():
    dr2 = tryDispatchBuiltin.1("[", EuStockMarkets1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26();
  L26():
    __1 = ldf `[` in base;
    r51 = dyn __1(EuStockMarkets1, <missing>, "SMI");
    goto L1(r51);
  D21():
    deopt 90 [];
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L28():
    p22 = prom<V +>{
      lag2 = ldf lag;
      p21 = prom<V +>{
        SMI = ld SMI;
        SMI1 = force? SMI;
        checkMissing(SMI1);
        return SMI1;
      };
      r53 = dyn lag2(p21, 1.0);
      return r53;
    };
    p23 = prom<V +>{
      SMI2 = ld SMI;
      SMI3 = force? SMI2;
      checkMissing(SMI3);
      return SMI3;
    };
    r56 = dyn plot6[, , pch](p22, p23, ".");
    check L29() else D22();
  D22():
    deopt 95 [r56];
  L29():
    plot7 = ldf plot;
    check L30() else D23();
  D23():
    deopt 97 [];
  L30():
    p25 = prom<V +>{
      lag3 = ldf lag;
      p24 = prom<V +>{
        SMI4 = ld SMI;
        SMI5 = force? SMI4;
        checkMissing(SMI5);
        return SMI5;
      };
      r58 = dyn lag3(p24, 20.0);
      return r58;
    };
    p26 = prom<V +>{
      SMI6 = ld SMI;
      SMI7 = force? SMI6;
      checkMissing(SMI7);
      return SMI7;
    };
    r61 = dyn plot7[, , pch, log, main, `xy.lines`](p25, p26, ".", "xy", "4 weeks lagged SMI stocks -- log scale", TRUE);
    check L31() else D24();
  D24():
    deopt 108 [r61];
  L31():
    popenv;
    return r61;
  }
}
fun inner1548818147(x, y, `plot.type`, `xy.labels`, `xy.lines`, panel, nc, `yax.flip`, `mar.multi`, `oma.multi`, axes, `...`) {
  (reg x:*, reg y:*, reg plot_type:*, reg xy_labels:*, reg xy_lines:*, reg panel:*, reg nc:*, reg yax_flip:*, reg mar_multi:*, reg oma_multi:*, reg axes:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var `plot.type`:*, reg plot_type_isMissing:L, reg plot_type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `xy.labels`:*, var `xy.lines`:*, var panel:*, reg panel_isMissing:L, reg panel_orDefault:*, reg lines:*, reg lines1:V, reg p1:p(V +), var nc:*, var `yax.flip`:*, reg yax_flip_isMissing:L, reg yax_flip_orDefault:*, var `mar.multi`:*, reg mar_multi_isMissing:L, reg mar_multi_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg yax_flip1:*, reg yax_flip2:V, reg c1:L, reg r7:R, reg c2:cls, reg r8:V, reg p2:p(V +), var `oma.multi`:*, reg oma_multi_isMissing:L, reg oma_multi_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg c3:cls, reg r12:V, reg p3:p(V +), var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `...`:dots?, reg r14:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg missing:cls, reg r17:V, reg r18:V, reg c4:L, reg deparse1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg substitute:cls, reg r21:V, reg p4:p(V +), reg r23:V, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg missing1:cls, reg r27:V, reg r28:V, reg c5:L, reg deparse2:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg substitute1:cls, reg r31:V, reg p5:p(V +), reg r33:V, reg r34:V, reg plotts:cls, reg x1:*, reg x2:V, reg p6:p(V +), reg y1:*, reg y2:V, reg p7:p(V +), reg plot_type1:*, reg plot_type2:V, reg p8:p(V +), reg xy_labels1:*, reg xy_labels2:V, reg p9:p(V +), reg xy_lines1:*, reg xy_lines2:V, reg p10:p(V +), reg panel1:*, reg panel2:V, reg p11:p(V +), reg nc1:*, reg nc2:V, reg p12:p(V +), reg xlabel:*, reg xlabel1:V, reg p13:p(V +), reg ylabel:*, reg ylabel1:V, reg p14:p(V +), reg axes1:*, reg axes2:V, reg p15:p(V +), reg ddd1:dots?, reg r45:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    plot_type_isMissing = missing.0(plot_type);
    if plot_type_isMissing then L1() else L2(plot_type);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("multiple", "single");
      goto L0(r2);
    L2():
      r = dyn base("multiple", "single");
      goto L0(r);
    };
    goto L2(p);
  L2(plot_type_orDefault):
    st `plot.type` = plot_type_orDefault;
    st `xy.labels` = xy_labels;
    st `xy.lines` = xy_lines;
    panel_isMissing = missing.0(panel);
    if panel_isMissing then L3() else L4(panel);
  L3():
    p1 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    goto L4(p1);
  L4(panel_orDefault):
    st panel = panel_orDefault;
    st nc = nc;
    yax_flip_isMissing = missing.0(yax_flip);
    if yax_flip_isMissing then L5(FALSE) else L5(yax_flip);
  L5(yax_flip_orDefault):
    st `yax.flip` = yax_flip_orDefault;
    mar_multi_isMissing = missing.0(mar_multi);
    if mar_multi_isMissing then L6() else L7(mar_multi);
  L6():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r6):
      return r6;
    L3():
      yax_flip1 = ld `yax.flip`;
      yax_flip2 = force? yax_flip1;
      checkMissing(yax_flip2);
      c1 = `as.logical`(yax_flip2);
      if c1 then L5() else L1();
    L4():
      r5 = dyn base1(0.0, 5.1, 0.0, <lang if(yax.flip, 5.1, 2.1)>);
      goto L0(r5);
    L1():
      goto L2(2.1);
    L2(r7):
      c2 = ldf c in base;
      r8 = dyn c2(0.0, 5.1, 0.0, r7);
      goto L0(r8);
    L5():
      goto L2(5.1);
    };
    goto L7(p2);
  L7(mar_multi_orDefault):
    st `mar.multi` = mar_multi_orDefault;
    oma_multi_isMissing = missing.0(oma_multi);
    if oma_multi_isMissing then L8() else L9(oma_multi);
  L8():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c3 = ldf c in base;
      r12 = dyn c3(6.0, 0.0, 5.0, 0.0);
      goto L0(r12);
    L2():
      r10 = dyn base2(6.0, 0.0, 5.0, 0.0);
      goto L0(r10);
    };
    goto L9(p3);
  L9(oma_multi_orDefault):
    st `oma.multi` = oma_multi_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L10(TRUE) else L10(axes);
  L10(axes_orDefault):
    st axes = axes_orDefault;
    st `...` = ddd;
    r14 = clos inner1013110970;
    st plotts = r14;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  L11(r16):
    r18 = `!`(r16);
    c4 = `as.logical`(r18);
    if c4 then L19() else L12();
  L17():
    missing = ldf missing in base;
    r17 = dyn missing(<sym x>);
    goto L11(r17);
  L18():
    r15 = dyn base3(<sym x>);
    goto L11(r15);
  L12():
    goto L13(NULL);
  L13(r24):
    st xlabel = r24;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L23() else L24();
  L19():
    deparse1 = ldf deparse1;
    check L20() else D0();
  D0():
    deopt 8 [];
  L14(r26):
    r28 = `!`(r26);
    c5 = `as.logical`(r28);
    if c5 then L25() else L15();
  L20():
    p4 = prom<V +>{
      sym4 = ldf substitute;
      base4 = ldf substitute in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      substitute = ldf substitute in base;
      r21 = dyn substitute(<sym x>);
      goto L0(r21);
    L2():
      r19 = dyn base4(<sym x>);
      goto L0(r19);
    };
    r23 = dyn deparse1(p4);
    check L21() else D1();
  L23():
    missing1 = ldf missing in base;
    r27 = dyn missing1(<sym y>);
    goto L14(r27);
  L24():
    r25 = dyn base5(<sym y>);
    goto L14(r25);
  D1():
    deopt 10 [r23];
  L15():
    goto L16(NULL);
  L16(r34):
    st ylabel = r34;
    plotts = ldf plotts;
    check L29() else D4();
  L21():
    goto L13(r23);
  L25():
    deparse2 = ldf deparse1;
    check L26() else D2();
  D2():
    deopt 19 [];
  D4():
    deopt 26 [];
  L26():
    p5 = prom<V +>{
      sym6 = ldf substitute;
      base6 = ldf substitute in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      substitute1 = ldf substitute in base;
      r31 = dyn substitute1(<sym y>);
      goto L0(r31);
    L2():
      r29 = dyn base6(<sym y>);
      goto L0(r29);
    };
    r33 = dyn deparse2(p5);
    check L27() else D3();
  L29():
    p6 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p7 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p8 = prom<V +>{
      plot_type1 = ld `plot.type`;
      plot_type2 = force? plot_type1;
      checkMissing(plot_type2);
      return plot_type2;
    };
    p9 = prom<V +>{
      xy_labels1 = ld `xy.labels`;
      xy_labels2 = force? xy_labels1;
      checkMissing(xy_labels2);
      return xy_labels2;
    };
    p10 = prom<V +>{
      xy_lines1 = ld `xy.lines`;
      xy_lines2 = force? xy_lines1;
      checkMissing(xy_lines2);
      return xy_lines2;
    };
    p11 = prom<V +>{
      panel1 = ld panel;
      panel2 = force? panel1;
      checkMissing(panel2);
      return panel2;
    };
    p12 = prom<V +>{
      nc1 = ld nc;
      nc2 = force? nc1;
      checkMissing(nc2);
      return nc2;
    };
    p13 = prom<V +>{
      xlabel = ld xlabel;
      xlabel1 = force? xlabel;
      checkMissing(xlabel1);
      return xlabel1;
    };
    p14 = prom<V +>{
      ylabel = ld ylabel;
      ylabel1 = force? ylabel;
      checkMissing(ylabel1);
      return ylabel1;
    };
    p15 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    ddd1 = ld `...`;
    r45 = dyn plotts[x, y, `plot.type`, `xy.labels`, `xy.lines`, panel, nc, xlabel, ylabel, axes, `...`](p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, ddd1);
    check L30() else D5();
  D3():
    deopt 21 [r33];
  D5():
    deopt 48 [r45];
  L27():
    goto L16(r33);
  L30():
    popenv;
    return r45;
  }
}
fun inner1013110970(x, y, `plot.type`, `xy.labels`, `xy.lines`, panel, nc, xlabel, ylabel, type, xlim, ylim, xlab, ylab, log, col, bg, pch, cex, lty, lwd, axes, `frame.plot`, ann, `cex.lab`, `col.lab`, `font.lab`, `cex.axis`, `col.axis`, `font.axis`, main, `...`) {
  (reg x:*, reg y:*, reg plot_type:*, reg xy_labels:*, reg xy_lines:*, reg panel:*, reg nc:*, reg xlabel:*, reg ylabel:*, reg type:*, reg xlim:*, reg ylim:*, reg xlab:*, reg ylab:*, reg log:*, reg col:*, reg bg:*, reg pch:*, reg cex:*, reg lty:*, reg lwd:*, reg axes:*, reg frame_plot:*, reg ann:*, reg cex_lab:*, reg col_lab:*, reg font_lab:*, reg cex_axis:*, reg col_axis:*, reg font_axis:*, reg main:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var `plot.type`:*, reg plot_type_isMissing:L, reg plot_type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `xy.labels`:*, var `xy.lines`:*, var panel:*, reg panel_isMissing:L, reg panel_orDefault:*, reg lines:*, reg lines1:V, reg p1:p(V +), var nc:*, var xlabel:*, var ylabel:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r5:V, reg p2:p(V +), var bg:*, reg bg_isMissing:L, reg bg_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, reg par1:cls, reg r7:V, reg p3:p(V +), var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, reg par2:cls, reg r9:V, reg p4:p(V +), var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par3:cls, reg r11:V, reg p5:p(V +), var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, reg par4:cls, reg r13:V, reg p6:p(V +), var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, reg axes1:*, reg axes2:V, reg p7:p(V +), var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, reg par5:cls, reg r16:V, reg p8:p(V +), var `cex.lab`:*, reg cex_lab_isMissing:L, reg cex_lab_orDefault:*, reg par6:cls, reg r18:V, reg p9:p(V +), var `col.lab`:*, reg col_lab_isMissing:L, reg col_lab_orDefault:*, reg par7:cls, reg r20:V, reg p10:p(V +), var `font.lab`:*, reg font_lab_isMissing:L, reg font_lab_orDefault:*, reg par8:cls, reg r22:V, reg p11:p(V +), var `cex.axis`:*, reg cex_axis_isMissing:L, reg cex_axis_orDefault:*, reg par9:cls, reg r24:V, reg p12:p(V +), var `col.axis`:*, reg col_axis_isMissing:L, reg col_axis_orDefault:*, reg par10:cls, reg r26:V, reg p13:p(V +), var `font.axis`:*, reg font_axis_isMissing:L, reg font_axis_orDefault:*, reg par11:cls, reg r28:V, reg p14:p(V +), var main:*, reg main_isMissing:L, reg main_orDefault:*, var `...`:dots?, reg match_arg:cls, reg plot_type1:*, reg plot_type2:V, reg p15:p(V +), reg r31:V, reg NCOL:cls, reg x1:*, reg x2:V, reg p16:p(V +), reg r33:V, reg plot_type3:*, reg plot_type4:V, reg r34:V, reg c1:L, reg c3:V, reg nser:*, reg nser1:V, reg r35:V, reg c4:L, reg c5:V, reg c7:L, reg r36:cls, reg match_fun:cls, reg panel1:*, reg panel2:V, reg p17:p(V +), reg r38:V, reg NCOL1:cls, reg x3:*, reg x4:V, reg p18:p(V +), reg r40:V, reg nser2:*, reg nser3:V, reg r41:V, reg c8:L, reg stop:cls, reg r42:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r44:V, reg r45:V, reg main1:*, reg main2:V, reg c9:V, reg c10:L, reg xlabel1:*, reg xlabel2:V, reg ____:cls, reg colnames:cls, reg x5:*, reg x6:V, reg p19:p(V +), reg r47:V, reg p20:p(V +), reg paste:cls, reg nser4:*, reg nser5:V, reg r49:V, reg p21:p(V +), reg r51:V, reg p22:p(V +), reg r53:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r54:V, reg r55:V, reg missing:cls, reg r56:V, reg c11:L, reg nser6:*, reg nser7:V, reg r57:V, reg c12:L, reg r58:R, reg sym3:cls, reg base3:cls, reg guard3:L, reg r60:V, reg r61:V, reg nser8:*, reg nser9:V, reg nc1:*, reg nc2:V, reg r62:V, reg r63:V, reg par12:cls, reg mar_multi:*, reg mar_multi1:V, reg p23:p(V +), reg oma_multi:*, reg oma_multi1:V, reg p24:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r66:V, reg r67:V, reg nr:*, reg nr1:V, reg nc3:*, reg nc4:V, reg c13:cls, reg r68:V, reg p25:p(V +), reg r70:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r71:V, reg on_exit:cls, reg r73:V, reg nser10:*, reg nser11:V, reg r74:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c14:L, reg x7:V, reg plot_default:cls, reg x8:*, reg x9:V, reg c15:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r75:V, reg p26:p(V +), reg log1:*, reg log2:V, reg p27:p(V +), reg col1:*, reg col2:V, reg p28:p(V +), reg bg1:*, reg bg2:V, reg p29:p(V +), reg pch1:*, reg pch2:V, reg p30:p(V +), reg ann1:*, reg ann2:V, reg p31:p(V +), reg ddd1:dots?, reg r82:V, reg panel3:cls, reg x12:*, reg x13:V, reg c16:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __1:cls, reg r83:V, reg p32:p(V +), reg col3:*, reg col4:V, reg p33:p(V +), reg bg3:*, reg bg4:V, reg p34:p(V +), reg pch3:*, reg pch4:V, reg p35:p(V +), reg cex1:*, reg cex2:V, reg p36:p(V +), reg lwd1:*, reg lwd2:V, reg p37:p(V +), reg lty1:*, reg lty2:V, reg p38:p(V +), reg type1:*, reg type2:V, reg p39:p(V +), reg ddd2:dots?, reg r92:V, reg frame_plot1:*, reg frame_plot2:V, reg c17:L, reg box:cls, reg ddd3:dots?, reg r93:V, reg i11:I, reg i12:*, reg i13:V, reg __2:cls, reg r95:V, reg c18:L, reg i14:I, reg c19:V, reg yax_flip:*, reg yax_flip1:V, reg r96:V, reg c21:L, reg c22:V, reg c24:L, reg i19:I, reg r97:R, reg i20:*, reg i21:V, reg nr2:*, reg nr3:V, reg __3:cls, reg r98:V, reg r99:V, reg c25:L, reg i22:I, reg c26:V, reg i24:*, reg i25:V, reg nser12:*, reg nser13:V, reg r100:V, reg c28:L, reg c29:V, reg axes3:*, reg axes4:V, reg c31:L, reg axis:cls, reg y_side:*, reg y_side1:V, reg p40:p(V +), reg cex_axis1:*, reg cex_axis2:V, reg p41:p(V +), reg col_axis1:*, reg col_axis2:V, reg p42:p(V +), reg font_axis1:*, reg font_axis2:V, reg p43:p(V +), reg ddd4:dots?, reg r105:V, reg do_xax:*, reg do_xax1:V, reg c32:L, reg axis1:cls, reg cex_axis3:*, reg cex_axis4:V, reg p44:p(V +), reg col_axis3:*, reg col_axis4:V, reg p45:p(V +), reg font_axis3:*, reg font_axis4:V, reg p46:p(V +), reg ddd5:dots?, reg r109:V, reg i31:I, reg r110:V, reg i32:I, reg ann3:*, reg ann4:V, reg c33:L, reg mtext:cls, reg nm:*, reg nm1:V, reg c34:L, reg nm3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i35:*, reg i36:V, reg __4:cls, reg r112:V, reg p47:p(V +), reg y_side2:*, reg y_side3:V, reg p48:p(V +), reg cex_lab1:*, reg cex_lab2:V, reg p49:p(V +), reg col_lab1:*, reg col_lab2:V, reg p50:p(V +), reg font_lab1:*, reg font_lab2:V, reg p51:p(V +), reg ddd6:dots?, reg r118:V, reg do_xax2:*, reg do_xax3:V, reg c35:L, reg mtext1:cls, reg xlab1:*, reg xlab2:V, reg p52:p(V +), reg cex_lab3:*, reg cex_lab4:V, reg p53:p(V +), reg col_lab3:*, reg col_lab4:V, reg p54:p(V +), reg font_lab3:*, reg font_lab4:V, reg p55:p(V +), reg ddd7:dots?, reg r123:V, reg i39:I, reg r124:V, reg i40:I, reg ann5:*, reg ann6:V, reg c36:L, reg c38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r126:V, reg c41:L, reg r127:V, reg main3:*, reg main4:V, reg c42:V, reg r128:V, reg c43:L, reg c44:V, reg c46:L, reg par13:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r129:V, reg r130:V, reg c47:cls, reg r131:V, reg p56:p(V +), reg r133:V, reg addmain:cls, reg main5:*, reg main6:V, reg p57:p(V +), reg ddd8:dots?, reg r135:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r137:V, reg r138:V, reg invisible:cls, reg r139:V, reg as_ts:cls, reg x16:*, reg x17:V, reg p58:p(V +), reg r143:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r144:V, reg r145:V, reg y1:*, reg y2:V, reg c48:V, reg r146:V, reg c49:L, reg hasTsp:cls, reg y3:*, reg y4:V, reg p59:p(V +), reg r148:V, reg NCOL2:cls, reg x18:*, reg x19:V, reg p60:p(V +), reg r150:V, reg r151:V, reg c50:L, reg c51:V, reg NCOL3:cls, reg y5:*, reg y6:V, reg p61:p(V +), reg r153:V, reg r154:V, reg c53:L, reg c54:V, reg c56:L, reg stop1:cls, reg r155:V, reg is_ts:cls, reg x20:*, reg x21:V, reg p62:p(V +), reg r158:V, reg c57:L, reg c59:V, reg is_ts1:cls, reg y7:*, reg y8:V, reg p63:p(V +), reg r160:V, reg c60:L, reg c61:V, reg c63:L, reg ts_intersect:cls, reg x22:*, reg x23:V, reg p64:p(V +), reg y9:*, reg y10:V, reg p65:p(V +), reg r163:V, reg xy_coords:cls, reg xy:*, reg xy1:V, reg c64:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __5:cls, reg r164:V, reg p66:p(V +), reg xy4:*, reg xy5:V, reg c65:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __6:cls, reg r166:V, reg p67:p(V +), reg xlabel4:*, reg xlabel5:V, reg p68:p(V +), reg ylabel1:*, reg ylabel2:V, reg p69:p(V +), reg log3:*, reg log4:V, reg p70:p(V +), reg r171:V, reg xy_coords1:cls, reg x24:*, reg x25:V, reg p71:p(V +), reg y11:*, reg y12:V, reg p72:p(V +), reg xlabel6:*, reg xlabel7:V, reg p73:p(V +), reg ylabel3:*, reg ylabel4:V, reg p74:p(V +), reg log5:*, reg log6:V, reg p75:p(V +), reg r178:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r179:V, reg r180:V, reg missing1:cls, reg r181:V, reg c66:L, reg xy8:*, reg xy9:V, reg c67:L, reg xy11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r182:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r183:V, reg r184:V, reg missing2:cls, reg r185:V, reg c68:L, reg xy12:*, reg xy13:V, reg c69:L, reg xy15:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r186:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r187:V, reg r188:V, reg xlim1:*, reg xlim2:V, reg c70:V, reg c71:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r189:V, reg r190:V, reg xy16:*, reg xy17:V, reg c72:L, reg xy19:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r191:V, reg c73:L, reg dx19:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r192:V, reg dx24:V, reg r193:V, reg xy20:*, reg xy21:V, reg c74:L, reg dx26:V, reg xy23:V, reg dr18:V, reg dc9:L, reg dx28:V, reg dx29:V, reg dx30:V, reg r194:V, reg is_finite:cls, reg r195:V, reg __7:cls, reg r196:V, reg range:cls, reg r197:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r199:V, reg r200:V, reg ylim1:*, reg ylim2:V, reg c75:V, reg c76:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r201:V, reg r202:V, reg xy24:*, reg xy25:V, reg c77:L, reg xy27:V, reg dr20:V, reg dc10:L, reg dx31:V, reg dx32:V, reg r203:V, reg c78:L, reg dx34:V, reg dr22:V, reg dc11:L, reg dx35:V, reg dx36:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r204:V, reg dx39:V, reg r205:V, reg xy28:*, reg xy29:V, reg c79:L, reg dx41:V, reg xy31:V, reg dr24:V, reg dc12:L, reg dx43:V, reg dx44:V, reg dx45:V, reg r206:V, reg is_finite1:cls, reg r207:V, reg __8:cls, reg r208:V, reg range1:cls, reg r209:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r211:V, reg r212:V, reg xy32:*, reg xy33:V, reg c80:L, reg xy35:V, reg dr26:V, reg dc13:L, reg dx46:V, reg dx47:V, reg r213:V, reg length:cls, reg r214:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r215:V, reg r216:V, reg missing3:cls, reg r217:V, reg c81:L, reg n:*, reg n1:V, reg r218:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r220:V, reg r221:V, reg xy_labels1:*, reg xy_labels2:V, reg c82:L, reg c83:L, reg xy_labels3:*, reg xy_labels4:V, reg xy_labels5:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r222:V, reg r223:V, reg xy_labels6:*, reg xy_labels7:V, reg c84:L, reg r224:V, reg c85:L, reg stop2:cls, reg r225:V, reg do_lab:*, reg do_lab1:V, reg c86:L, reg r227:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r228:V, reg r229:V, reg missing4:cls, reg r230:V, reg c87:L, reg type3:*, reg type4:V, reg dev_hold:cls, reg r231:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r232:V, reg on_exit1:cls, reg r234:V, reg plot_default1:cls, reg xy36:*, reg xy37:V, reg p76:p(V +), reg ptype:*, reg ptype1:V, reg p77:p(V +), reg xlab3:*, reg xlab4:V, reg p78:p(V +), reg ylab1:*, reg ylab2:V, reg p79:p(V +), reg xlim3:*, reg xlim4:V, reg p80:p(V +), reg ylim3:*, reg ylim4:V, reg p81:p(V +), reg log7:*, reg log8:V, reg p82:p(V +), reg col5:*, reg col6:V, reg p83:p(V +), reg bg5:*, reg bg6:V, reg p84:p(V +), reg pch5:*, reg pch6:V, reg p85:p(V +), reg cex3:*, reg cex4:V, reg p86:p(V +), reg lty3:*, reg lty4:V, reg p87:p(V +), reg lwd3:*, reg lwd4:V, reg p88:p(V +), reg axes5:*, reg axes6:V, reg p89:p(V +), reg frame_plot3:*, reg frame_plot4:V, reg p90:p(V +), reg ann7:*, reg ann8:V, reg p91:p(V +), reg main7:*, reg main8:V, reg p92:p(V +), reg ddd9:dots?, reg r252:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r253:V, reg r254:V, reg missing5:cls, reg r255:V, reg c88:L, reg do_lab2:*, reg do_lab3:V, reg do_lab5:*, reg do_lab6:V, reg c89:L, reg text:cls, reg xy38:*, reg xy39:V, reg p93:p(V +), reg sym25:cls, reg base25:cls, reg guard25:L, reg r257:V, reg r258:V, reg xy_labels8:*, reg xy_labels9:V, reg c90:L, reg c91:L, reg xy_labels10:*, reg xy_labels11:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r259:V, reg r260:V, reg tsp:cls, reg x26:*, reg x27:V, reg p94:p(V +), reg r262:V, reg tsp1:cls, reg y13:*, reg y14:V, reg p95:p(V +), reg r264:V, reg r265:V, reg all:cls, reg r266:V, reg c92:L, reg formatC:cls, reg sym27:cls, reg base27:cls, reg guard27:L, reg r267:V, reg r268:V, reg time:cls, reg x28:*, reg x29:V, reg p96:p(V +), reg r270:V, reg unclass:cls, reg r271:V, reg p97:p(V +), reg r273:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r274:V, reg r275:V, reg xy40:*, reg xy41:V, reg c93:L, reg xy43:V, reg dr28:V, reg dc14:L, reg dx48:V, reg dx49:V, reg r276:V, reg r277:I, reg p98:p(V +), reg col7:*, reg col8:V, reg p99:p(V +), reg cex5:*, reg cex6:V, reg p100:p(V +), reg r281:V, reg xy_lines1:*, reg xy_lines2:V, reg c94:L, reg lines2:cls, reg xy44:*, reg xy45:V, reg p101:p(V +), reg col9:*, reg col10:V, reg p102:p(V +), reg lty5:*, reg lty6:V, reg p103:p(V +), reg lwd5:*, reg lwd6:V, reg p104:p(V +), reg do_lab7:*, reg do_lab8:V, reg c95:L, reg p105:p(V +), reg r288:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r290:V, reg r291:V, reg invisible1:cls, reg r292:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r295:V, reg r296:V, reg missing6:cls, reg r297:V, reg c96:L, reg colnames1:cls, reg x30:*, reg x31:V, reg p106:p(V +), reg r299:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r300:V, reg r301:V, reg ylab3:*, reg ylab4:V, reg length1:cls, reg r302:V, reg r303:V, reg c97:L, reg xlabel8:*, reg xlabel9:V, reg xlabel10:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r304:V, reg r305:V, reg x32:*, reg x33:V, reg is_matrix:cls, reg r306:V, reg c98:L, reg ncol:cls, reg x34:*, reg x35:V, reg p107:p(V +), reg r308:V, reg time1:cls, reg x36:*, reg x37:V, reg p108:p(V +), reg r310:V, reg xy_coords2:cls, reg matrix:cls, reg sym33:cls, reg base33:cls, reg guard33:L, reg r311:V, reg r312:V, reg tx:*, reg tx1:V, reg k:*, reg k1:V, reg rep_int:cls, reg r313:V, reg p109:p(V +), reg k2:*, reg k3:V, reg p110:p(V +), reg r316:V, reg p111:p(V +), reg x38:*, reg x39:V, reg p112:p(V +), reg log9:*, reg log10:V, reg p113:p(V +), reg r320:V, reg tx2:*, reg tx3:V, reg l1:*, reg c99:L, reg tx5:V, reg l3:*, reg dr30:V, reg dc15:L, reg dx50:V, reg tx7:V, reg dx51:V, reg r321:V, reg xy_coords3:cls, reg x40:*, reg x41:V, reg p114:p(V +), reg log11:*, reg log12:V, reg p115:p(V +), reg r324:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r325:V, reg r326:V, reg xlim5:*, reg xlim6:V, reg c100:V, reg c101:L, reg sym35:cls, reg base35:cls, reg guard35:L, reg r327:V, reg r328:V, reg xy46:*, reg xy47:V, reg c102:L, reg xy49:V, reg dr32:V, reg dc16:L, reg dx52:V, reg dx53:V, reg r329:V, reg range2:cls, reg r330:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r332:V, reg r333:V, reg ylim5:*, reg ylim6:V, reg c103:V, reg c104:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r334:V, reg r335:V, reg xy50:*, reg xy51:V, reg c105:L, reg xy53:V, reg dr34:V, reg dc17:L, reg dx54:V, reg dx55:V, reg r336:V, reg c106:L, reg dx57:V, reg dr36:V, reg dc18:L, reg dx58:V, reg dx59:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r337:V, reg dx62:V, reg r338:V, reg xy54:*, reg xy55:V, reg c107:L, reg dx64:V, reg xy57:V, reg dr38:V, reg dc19:L, reg dx66:V, reg dx67:V, reg dx68:V, reg r339:V, reg is_finite2:cls, reg r340:V, reg __9:cls, reg r341:V, reg range3:cls, reg r342:V, reg plot_new:cls, reg r344:V, reg plot_window:cls, reg xlim7:*, reg xlim8:V, reg p116:p(V +), reg ylim7:*, reg ylim8:V, reg p117:p(V +), reg log13:*, reg log14:V, reg p118:p(V +), reg ddd10:dots?, reg r348:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r349:V, reg r350:V, reg x42:*, reg x43:V, reg is_matrix1:cls, reg r351:V, reg c108:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r352:V, reg r353:V, reg k4:*, reg k5:V, reg r354:I, reg s1:V, reg l4:I, reg i41:I, reg i42:I, reg i43:I, reg c109:L, reg x44:V, reg lines_default:cls, reg xy58:*, reg xy59:V, reg c110:L, reg xy61:V, reg dr40:V, reg dc20:L, reg dx69:V, reg dx70:V, reg r355:V, reg p119:p(V +), reg x45:*, reg x46:V, reg c111:L, reg dr42:V, reg dc21:L, reg dx71:V, reg dx72:V, reg i46:*, reg i47:V, reg __10:cls, reg r357:V, reg p120:p(V +), reg col11:*, reg col12:V, reg c112:L, reg col14:V, reg dr44:V, reg dc22:L, reg dx73:V, reg dx74:V, reg i48:*, reg i49:V, reg r359:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r360:V, reg col17:V, reg r361:V, reg col18:*, reg col19:V, reg length2:cls, reg r362:V, reg __11:cls, reg r363:V, reg r364:V, reg __12:cls, reg r365:V, reg p121:p(V +), reg lty7:*, reg lty8:V, reg c113:L, reg lty10:V, reg dr46:V, reg dc23:L, reg dx75:V, reg dx76:V, reg i50:*, reg i51:V, reg r367:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r368:V, reg lty13:V, reg r369:V, reg lty14:*, reg lty15:V, reg length3:cls, reg r370:V, reg __13:cls, reg r371:V, reg r372:V, reg __14:cls, reg r373:V, reg p122:p(V +), reg lwd7:*, reg lwd8:V, reg c114:L, reg lwd10:V, reg dr48:V, reg dc24:L, reg dx77:V, reg dx78:V, reg i52:*, reg i53:V, reg r375:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r376:V, reg lwd13:V, reg r377:V, reg lwd14:*, reg lwd15:V, reg length4:cls, reg r378:V, reg __15:cls, reg r379:V, reg r380:V, reg __16:cls, reg r381:V, reg p123:p(V +), reg bg7:*, reg bg8:V, reg c115:L, reg bg10:V, reg dr50:V, reg dc25:L, reg dx79:V, reg dx80:V, reg i54:*, reg i55:V, reg r383:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r384:V, reg bg13:V, reg r385:V, reg bg14:*, reg bg15:V, reg length5:cls, reg r386:V, reg __17:cls, reg r387:V, reg r388:V, reg __18:cls, reg r389:V, reg p124:p(V +), reg pch7:*, reg pch8:V, reg c116:L, reg pch10:V, reg dr52:V, reg dc26:L, reg dx81:V, reg dx82:V, reg i56:*, reg i57:V, reg r391:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r392:V, reg pch13:V, reg r393:V, reg pch14:*, reg pch15:V, reg length6:cls, reg r394:V, reg __19:cls, reg r395:V, reg r396:V, reg __20:cls, reg r397:V, reg p125:p(V +), reg cex7:*, reg cex8:V, reg c117:L, reg cex10:V, reg dr54:V, reg dc27:L, reg dx83:V, reg dx84:V, reg i58:*, reg i59:V, reg r399:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r400:V, reg cex13:V, reg r401:V, reg cex14:*, reg cex15:V, reg length7:cls, reg r402:V, reg __21:cls, reg r403:V, reg r404:V, reg __22:cls, reg r405:V, reg p126:p(V +), reg type5:*, reg type6:V, reg p127:p(V +), reg r408:V, reg lines_default1:cls, reg xy62:*, reg xy63:V, reg c118:L, reg xy65:V, reg dr56:V, reg dc28:L, reg dx85:V, reg dx86:V, reg r409:V, reg p128:p(V +), reg x49:*, reg x50:V, reg p129:p(V +), reg col20:*, reg col21:V, reg c119:L, reg col23:V, reg dr58:V, reg dc29:L, reg dx87:V, reg dx88:V, reg __23:cls, reg r412:V, reg p130:p(V +), reg bg16:*, reg bg17:V, reg p131:p(V +), reg lty16:*, reg lty17:V, reg c120:L, reg lty19:V, reg dr60:V, reg dc30:L, reg dx89:V, reg dx90:V, reg __24:cls, reg r415:V, reg p132:p(V +), reg lwd16:*, reg lwd17:V, reg c121:L, reg lwd19:V, reg dr62:V, reg dc31:L, reg dx91:V, reg dx92:V, reg __25:cls, reg r417:V, reg p133:p(V +), reg pch16:*, reg pch17:V, reg c122:L, reg pch19:V, reg dr64:V, reg dc32:L, reg dx93:V, reg dx94:V, reg __26:cls, reg r419:V, reg p134:p(V +), reg cex16:*, reg cex17:V, reg c123:L, reg cex19:V, reg dr66:V, reg dc33:L, reg dx95:V, reg dx96:V, reg __27:cls, reg r421:V, reg p135:p(V +), reg type7:*, reg type8:V, reg p136:p(V +), reg r424:V, reg ann9:*, reg ann10:V, reg c124:L, reg title:cls, reg main9:*, reg main10:V, reg p137:p(V +), reg xlab5:*, reg xlab6:V, reg p138:p(V +), reg ylab5:*, reg ylab6:V, reg p139:p(V +), reg ddd11:dots?, reg r428:V, reg axes7:*, reg axes8:V, reg c125:L, reg axis2:cls, reg ddd12:dots?, reg r430:V, reg axis3:cls, reg ddd13:dots?, reg r431:V, reg frame_plot5:*, reg frame_plot6:V, reg c126:L, reg box1:cls, reg ddd14:dots?, reg r433:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    plot_type_isMissing = missing.0(plot_type);
    if plot_type_isMissing then L1() else L2(plot_type);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("multiple", "single");
      goto L0(r2);
    L2():
      r = dyn base("multiple", "single");
      goto L0(r);
    };
    goto L2(p);
  L2(plot_type_orDefault):
    st `plot.type` = plot_type_orDefault;
    st `xy.labels` = xy_labels;
    st `xy.lines` = xy_lines;
    panel_isMissing = missing.0(panel);
    if panel_isMissing then L3() else L4(panel);
  L3():
    p1 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    goto L4(p1);
  L4(panel_orDefault):
    st panel = panel_orDefault;
    st nc = nc;
    st xlabel = xlabel;
    st ylabel = ylabel;
    type_isMissing = missing.0(type);
    if type_isMissing then L5("l") else L5(type);
  L5(type_orDefault):
    st type = type_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L6(NULL) else L6(xlim);
  L6(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L7(NULL) else L7(ylim);
  L7(ylim_orDefault):
    st ylim = ylim_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L8("Time") else L8(xlab);
  L8(xlab_orDefault):
    st xlab = xlab_orDefault;
    st ylab = ylab;
    log_isMissing = missing.0(log);
    if log_isMissing then L9("") else L9(log);
  L9(log_orDefault):
    st log = log_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L10() else L11(col);
  L10():
    p2 = prom<V +>{
      par = ldf par;
      r5 = dyn par("col");
      return r5;
    };
    goto L11(p2);
  L11(col_orDefault):
    st col = col_orDefault;
    bg_isMissing = missing.0(bg);
    if bg_isMissing then L12(NA_LGL) else L12(bg);
  L12(bg_orDefault):
    st bg = bg_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L13() else L14(pch);
  L13():
    p3 = prom<V +>{
      par1 = ldf par;
      r7 = dyn par1("pch");
      return r7;
    };
    goto L14(p3);
  L14(pch_orDefault):
    st pch = pch_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L15() else L16(cex);
  L15():
    p4 = prom<V +>{
      par2 = ldf par;
      r9 = dyn par2("cex");
      return r9;
    };
    goto L16(p4);
  L16(cex_orDefault):
    st cex = cex_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L17() else L18(lty);
  L17():
    p5 = prom<V +>{
      par3 = ldf par;
      r11 = dyn par3("lty");
      return r11;
    };
    goto L18(p5);
  L18(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L19() else L20(lwd);
  L19():
    p6 = prom<V +>{
      par4 = ldf par;
      r13 = dyn par4("lwd");
      return r13;
    };
    goto L20(p6);
  L20(lwd_orDefault):
    st lwd = lwd_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L21(TRUE) else L21(axes);
  L21(axes_orDefault):
    st axes = axes_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L22() else L23(frame_plot);
  L22():
    p7 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    goto L23(p7);
  L23(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L24() else L25(ann);
  L24():
    p8 = prom<V +>{
      par5 = ldf par;
      r16 = dyn par5("ann");
      return r16;
    };
    goto L25(p8);
  L25(ann_orDefault):
    st ann = ann_orDefault;
    cex_lab_isMissing = missing.0(cex_lab);
    if cex_lab_isMissing then L26() else L27(cex_lab);
  L26():
    p9 = prom<V +>{
      par6 = ldf par;
      r18 = dyn par6("cex.lab");
      return r18;
    };
    goto L27(p9);
  L27(cex_lab_orDefault):
    st `cex.lab` = cex_lab_orDefault;
    col_lab_isMissing = missing.0(col_lab);
    if col_lab_isMissing then L28() else L29(col_lab);
  L28():
    p10 = prom<V +>{
      par7 = ldf par;
      r20 = dyn par7("col.lab");
      return r20;
    };
    goto L29(p10);
  L29(col_lab_orDefault):
    st `col.lab` = col_lab_orDefault;
    font_lab_isMissing = missing.0(font_lab);
    if font_lab_isMissing then L30() else L31(font_lab);
  L30():
    p11 = prom<V +>{
      par8 = ldf par;
      r22 = dyn par8("font.lab");
      return r22;
    };
    goto L31(p11);
  L31(font_lab_orDefault):
    st `font.lab` = font_lab_orDefault;
    cex_axis_isMissing = missing.0(cex_axis);
    if cex_axis_isMissing then L32() else L33(cex_axis);
  L32():
    p12 = prom<V +>{
      par9 = ldf par;
      r24 = dyn par9("cex.axis");
      return r24;
    };
    goto L33(p12);
  L33(cex_axis_orDefault):
    st `cex.axis` = cex_axis_orDefault;
    col_axis_isMissing = missing.0(col_axis);
    if col_axis_isMissing then L34() else L35(col_axis);
  L34():
    p13 = prom<V +>{
      par10 = ldf par;
      r26 = dyn par10("col.axis");
      return r26;
    };
    goto L35(p13);
  L35(col_axis_orDefault):
    st `col.axis` = col_axis_orDefault;
    font_axis_isMissing = missing.0(font_axis);
    if font_axis_isMissing then L36() else L37(font_axis);
  L36():
    p14 = prom<V +>{
      par11 = ldf par;
      r28 = dyn par11("font.axis");
      return r28;
    };
    goto L37(p14);
  L37(font_axis_orDefault):
    st `font.axis` = font_axis_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L38(NULL) else L38(main);
  L38(main_orDefault):
    st main = main_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L155() else D0();
  D0():
    deopt 1 [];
  L155():
    p15 = prom<V +>{
      plot_type1 = ld `plot.type`;
      plot_type2 = force? plot_type1;
      checkMissing(plot_type2);
      return plot_type2;
    };
    r31 = dyn match_arg(p15);
    check L156() else D1();
  D1():
    deopt 3 [r31];
  L156():
    st `plot.type` = r31;
    NCOL = ldf NCOL;
    check L157() else D2();
  D2():
    deopt 6 [];
  L157():
    p16 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r33 = dyn NCOL(p16);
    check L158() else D3();
  D3():
    deopt 8 [r33];
  L158():
    st nser = r33;
    plot_type3 = ld `plot.type`;
    check L159() else D4();
  D4():
    deopt 10 [plot_type3];
  L159():
    plot_type4 = force? plot_type3;
    checkMissing(plot_type4);
    r34 = `==`(plot_type4, "multiple");
    c1 = `as.logical`(r34);
    if c1 then L160() else L39(c1);
  L39(c3):
    c7 = `as.logical`(c3);
    if c7 then L163() else L40();
  L160():
    nser = ld nser;
    check L161() else D5();
  D5():
    deopt 14 [c1, nser];
  L40():
    as_ts = ldf `as.ts`;
    check L258() else D57();
  L161():
    nser1 = force? nser;
    checkMissing(nser1);
    r35 = `>`(nser1, 1.0);
    c4 = `as.logical`(r35);
    c5 = `&&`(c1, c4);
    goto L39(c5);
  L163():
    r36 = clos inner4001857310;
    st addmain = r36;
    match_fun = ldf `match.fun`;
    check L164() else D6();
  D6():
    deopt 23 [];
  D57():
    deopt 277 [];
  L164():
    p17 = prom<V +>{
      panel1 = ld panel;
      panel2 = force? panel1;
      checkMissing(panel2);
      return panel2;
    };
    r38 = dyn match_fun(p17);
    check L165() else D7();
  L258():
    p58 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    r143 = dyn as_ts(p58);
    check L259() else D58();
  D7():
    deopt 25 [r38];
  D58():
    deopt 279 [r143];
  L165():
    st panel = r38;
    NCOL1 = ldf NCOL;
    check L166() else D8();
  L259():
    st x = r143;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L260() else L261();
  D8():
    deopt 28 [];
  L75(r145):
    r146 = `!`(r145);
    c49 = `as.logical`(r146);
    if c49 then L263() else L76();
  L166():
    p18 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r40 = dyn NCOL1(p18);
    check L167() else D9();
  L260():
    y1 = ld y;
    check L262() else D59();
  L261():
    r144 = dyn base9(<sym y>);
    goto L75(r144);
  D9():
    deopt 30 [r40];
  D59():
    deopt 282 [y1];
  L76():
    sym30 = ldf missing;
    base30 = ldf missing in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L416() else L417();
  L167():
    st nser = r40;
    nser2 = ld nser;
    check L168() else D10();
  L262():
    y2 = force? y1;
    checkMissing(y2);
    c48 = `==`(y2, NULL);
    goto L75(c48);
  L263():
    hasTsp = ldf hasTsp;
    check L264() else D60();
  D10():
    deopt 32 [nser2];
  D60():
    deopt 287 [];
  L125(r296):
    c96 = `as.logical`(r296);
    if c96 then L418() else L126();
  L168():
    nser3 = force? nser2;
    checkMissing(nser3);
    r41 = `>`(nser3, 10.0);
    c8 = `as.logical`(r41);
    if c8 then L169() else L41();
  L264():
    p59 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r148 = dyn hasTsp(p59);
    check L265() else D61();
  L416():
    missing6 = ldf missing in base;
    r297 = dyn missing6(<sym ylab>);
    goto L125(r297);
  L417():
    r295 = dyn base30(<sym ylab>);
    goto L125(r295);
  D61():
    deopt 289 [r148];
  L41():
    goto L42();
  L42():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L173() else L174();
  L126():
    goto L130();
  L130():
    sym32 = ldf `is.matrix`;
    base32 = ldf `is.matrix` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L429() else L430();
  L169():
    stop = ldf stop;
    check L170() else D11();
  L265():
    st y = r148;
    NCOL2 = ldf NCOL;
    check L266() else D62();
  L418():
    colnames1 = ldf colnames;
    check L419() else D112();
  D11():
    deopt 37 [];
  D62():
    deopt 292 [];
  D112():
    deopt 547 [];
  L43(r45):
    c10 = `as.logical`(r45);
    if c10 then L176() else L44();
  L131(r305):
    c98 = `as.logical`(r305);
    if c98 then L433() else L132();
  L170():
    r42 = dyn stop("cannot plot more than 10 series as \"multiple\"");
    check L171() else D12();
  L173():
    main1 = ld main;
    check L175() else D13();
  L174():
    r44 = dyn base1(<sym main>);
    goto L43(r44);
  L266():
    p60 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      return x19;
    };
    r150 = dyn NCOL2(p60);
    check L267() else D63();
  L419():
    p106 = prom<V +>{
      x30 = ld x;
      x31 = force? x30;
      checkMissing(x31);
      return x31;
    };
    r299 = dyn colnames1(p106);
    check L420() else D113();
  L429():
    x32 = ld x;
    check L431() else D117();
  L430():
    r304 = dyn base32(<sym x>);
    goto L131(r304);
  D12():
    deopt 39 [r42];
  D13():
    deopt 43 [main1];
  D63():
    deopt 294 [r150];
  D113():
    deopt 549 [r299];
  D117():
    deopt 568 [x32];
  L44():
    goto L45();
  L45():
    ____ = ldf `%||%`;
    check L179() else D15();
  L132():
    xy_coords3 = ldf `xy.coords`;
    check L446() else D126();
  L133():
    sym34 = ldf `is.null`;
    base34 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L448() else L449();
  L171():
    goto L42();
  L175():
    main2 = force? main1;
    checkMissing(main2);
    c9 = `==`(main2, NULL);
    goto L43(c9);
  L176():
    xlabel1 = ld xlabel;
    check L177() else D14();
  L267():
    r151 = `>`(r150, 1.0);
    c50 = `as.logical`(r151);
    if c50 then L77(c50) else L268();
  L420():
    st ylab = r299;
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L421() else L422();
  L431():
    x33 = force? x32;
    checkMissing(x33);
    is_matrix = ldf `is.matrix` in base;
    r306 = dyn is_matrix(x33);
    check L432() else D118();
  L433():
    ncol = ldf ncol;
    check L434() else D119();
  D14():
    deopt 46 [xlabel1];
  D15():
    deopt 52 [];
  D118():
    deopt 571 [r306];
  D119():
    deopt 573 [];
  D126():
    deopt 600 [];
  L77(c51):
    c56 = `as.logical`(c51);
    if c56 then L272() else L78();
  L127(r301):
    r303 = `!=`(r301, 1);
    c97 = `as.logical`(r303);
    if c97 then L425() else L128();
  L134(r326):
    c101 = `as.logical`(r326);
    if c101 then L451() else L135();
  L177():
    xlabel2 = force? xlabel1;
    checkMissing(xlabel2);
    st main = xlabel2;
    goto L45();
  L179():
    p20 = prom<V +>{
      colnames = ldf colnames;
      p19 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r47 = dyn colnames(p19);
      return r47;
    };
    p22 = prom<V +>{
      paste = ldf paste;
      p21 = prom<V +>{
        nser4 = ld nser;
        nser5 = force? nser4;
        checkMissing(nser5);
        r49 = `:`(1, nser5);
        return r49;
      };
      r51 = dyn paste("Series", p21);
      return r51;
    };
    r53 = dyn ____(p20, p22);
    check L180() else D16();
  L268():
    NCOL3 = ldf NCOL;
    check L269() else D64();
  L421():
    ylab3 = ld ylab;
    check L423() else D114();
  L422():
    r300 = dyn base31(<sym ylab>);
    goto L127(r300);
  L432():
    goto L131(r306);
  L434():
    p107 = prom<V +>{
      x34 = ld x;
      x35 = force? x34;
      checkMissing(x35);
      return x35;
    };
    r308 = dyn ncol(p107);
    check L435() else D120();
  L446():
    p114 = prom<V +>{
      x40 = ld x;
      x41 = force? x40;
      checkMissing(x41);
      return x41;
    };
    p115 = prom<V +>{
      log11 = ld log;
      log12 = force? log11;
      checkMissing(log12);
      return log12;
    };
    r324 = dyn xy_coords3[, , log, setLab](p114, NULL, p115, FALSE);
    check L447() else D127();
  L448():
    xlim5 = ld xlim;
    check L450() else D128();
  L449():
    r325 = dyn base34(<sym xlim>);
    goto L134(r325);
  D16():
    deopt 55 [r53];
  D64():
    deopt 298 [c50];
  D114():
    deopt 553 [ylab3];
  D120():
    deopt 575 [r308];
  D127():
    deopt 607 [r324];
  D128():
    deopt 610 [xlim5];
  L78():
    goto L79();
  L79():
    is_ts = ldf `is.ts`;
    check L276() else D68();
  L128():
    goto L129(NULL);
  L129(xlabel10):
    goto L130();
  L135():
    goto L137();
  L137():
    sym36 = ldf `is.null`;
    base36 = ldf `is.null` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L461() else L462();
  L180():
    st nm = r53;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L181() else L182();
  L269():
    p61 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r153 = dyn NCOL3(p61);
    check L270() else D65();
  L272():
    stop1 = ldf stop;
    check L273() else D66();
  L423():
    ylab4 = force? ylab3;
    checkMissing(ylab4);
    length1 = ldf length in base;
    r302 = dyn length1(ylab4);
    check L424() else D115();
  L425():
    xlabel8 = ld xlabel;
    check L426() else D116();
  L435():
    st k = r308;
    time1 = ldf time;
    check L436() else D121();
  L447():
    st xy = r324;
    goto L133();
  L450():
    xlim6 = force? xlim5;
    checkMissing(xlim6);
    c100 = `==`(xlim6, NULL);
    goto L134(c100);
  L451():
    sym35 = ldf range;
    base35 = ldf range in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L452() else L453();
  D65():
    deopt 300 [c50, r153];
  D66():
    deopt 305 [];
  D68():
    deopt 311 [];
  D115():
    deopt 556 [r302];
  D116():
    deopt 559 [xlabel8];
  D121():
    deopt 578 [];
  L46(r55):
    c11 = `as.logical`(r55);
    if c11 then L183() else L47();
  L136(r328):
    st xlim = r328;
    goto L137();
  L138(r333):
    c104 = `as.logical`(r333);
    if c104 then L464() else L139();
  L181():
    missing = ldf missing in base;
    r56 = dyn missing(<sym nc>);
    goto L46(r56);
  L182():
    r54 = dyn base2(<sym nc>);
    goto L46(r54);
  L270():
    r154 = `>`(r153, 1.0);
    c53 = `as.logical`(r154);
    c54 = `||`(c50, c53);
    goto L77(c54);
  L273():
    r155 = dyn stop1("scatter plots only for univariate time series");
    check L274() else D67();
  L276():
    p62 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    r158 = dyn is_ts(p62);
    check L277() else D69();
  L424():
    goto L127(r302);
  L426():
    xlabel9 = force? xlabel8;
    checkMissing(xlabel9);
    st ylab = xlabel9;
    goto L129(xlabel9);
  L436():
    p108 = prom<V +>{
      x36 = ld x;
      x37 = force? x36;
      checkMissing(x37);
      return x37;
    };
    r310 = dyn time1(p108);
    check L437() else D122();
  L452():
    xy46 = ld xy;
    check L454() else D129();
  L453():
    r327 = dyn base35(<lang `$`(xy, x)>);
    goto L136(r327);
  L461():
    ylim5 = ld ylim;
    check L463() else D131();
  L462():
    r332 = dyn base36(<sym ylim>);
    goto L138(r332);
  D67():
    deopt 307 [r155];
  D69():
    deopt 313 [r158];
  D122():
    deopt 580 [r310];
  D129():
    deopt 615 [xy46];
  D131():
    deopt 624 [ylim5];
  L47():
    goto L50();
  L50():
    sym3 = ldf ceiling;
    base3 = ldf ceiling in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L188() else L189();
  L139():
    goto L143();
  L143():
    plot_new = ldf `plot.new`;
    check L485() else D136();
  L183():
    nser6 = ld nser;
    check L184() else D17();
  L274():
    goto L79();
  L277():
    c57 = `as.logical`(r158);
    if c57 then L278() else L80(c57);
  L437():
    st tx = r310;
    xy_coords2 = ldf `xy.coords`;
    check L438() else D123();
  L454():
    xy47 = force? xy46;
    checkMissing(xy47);
    c102 = `is.object`(xy47);
    if c102 then L456() else L457(xy47);
  L463():
    ylim6 = force? ylim5;
    checkMissing(ylim6);
    c103 = `==`(ylim6, NULL);
    goto L138(c103);
  L464():
    sym37 = ldf range;
    base37 = ldf range in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L465() else L466();
  D17():
    deopt 60 [nser6];
  D123():
    deopt 583 [];
  D136():
    deopt 646 [];
  L51(r61):
    st nr = r61;
    par12 = ldf par;
    check L192() else D20();
  L80(c59):
    c63 = `as.logical`(c59);
    if c63 then L282() else L81();
  L140(r335):
    st ylim = r335;
    goto L143();
  L184():
    nser7 = force? nser6;
    checkMissing(nser7);
    r57 = `>`(nser7, 4.0);
    c12 = `as.logical`(r57);
    if c12 then L185() else L48();
  L188():
    nser8 = ld nser;
    check L190() else D18();
  L189():
    r60 = dyn base3(<lang `/`(nser, nc)>);
    goto L51(r60);
  L278():
    is_ts1 = ldf `is.ts`;
    check L279() else D70();
  L438():
    p111 = prom<V +>{
      matrix = ldf matrix;
      p109 = prom<V +>{
        sym33 = ldf `rep.int`;
        base33 = ldf `rep.int` in base;
        guard33 = `==`.4(sym33, base33);
        if guard33 then L1() else L2();
      L0(r312):
        return r312;
      L1():
        tx = ld tx;
        tx1 = force? tx;
        checkMissing(tx1);
        k = ld k;
        k1 = force? k;
        checkMissing(k1);
        rep_int = ldf `rep.int` in base;
        r313 = dyn rep_int(tx1, k1);
        goto L0(r313);
      L2():
        r311 = dyn base33(<sym tx>, <sym k>);
        goto L0(r311);
      };
      p110 = prom<V +>{
        k2 = ld k;
        k3 = force? k2;
        checkMissing(k3);
        return k3;
      };
      r316 = dyn matrix[, ncol](p109, p110);
      return r316;
    };
    p112 = prom<V +>{
      x38 = ld x;
      x39 = force? x38;
      checkMissing(x39);
      return x39;
    };
    p113 = prom<V +>{
      log9 = ld log;
      log10 = force? log9;
      checkMissing(log10);
      return log10;
    };
    r320 = dyn xy_coords2[x, y, log, setLab](p111, p112, p113, FALSE);
    check L439() else D124();
  L455(dx53):
    range2 = ldf range in base;
    r330 = dyn range2(dx53);
    check L459() else D130();
  L456():
    dr32 = tryDispatchBuiltin.1("$", xy47);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L458() else L457(dr32);
  L457(xy49):
    r329 = `$`(xy49, <sym x>);
    goto L455(r329);
  L465():
    xy50 = ld xy;
    check L467() else D132();
  L466():
    r334 = dyn base37(<lang `[`(`$`(xy, y), is.finite(`$`(xy, y)))>);
    goto L140(r334);
  L485():
    r344 = dyn plot_new();
    check L486() else D137();
  D18():
    deopt 72 [nser8];
  D20():
    deopt 79 [];
  D70():
    deopt 315 [c57];
  D124():
    deopt 592 [r320];
  D130():
    deopt 619 [r330];
  D132():
    deopt 629 [xy50];
  D137():
    deopt 647 [r344];
  L48():
    goto L49(1.0);
  L49(r58):
    st nc = r58;
    goto L50();
  L81():
    xy_coords1 = ldf `xy.coords`;
    check L288() else D76();
  L82():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L290() else L291();
  L185():
    goto L49(2.0);
  L190():
    nser9 = force? nser8;
    checkMissing(nser9);
    nc1 = ld nc;
    check L191() else D19();
  L192():
    p23 = prom<V +>{
      mar_multi = ld `mar.multi`;
      mar_multi1 = force? mar_multi;
      checkMissing(mar_multi1);
      return mar_multi1;
    };
    p24 = prom<V +>{
      oma_multi = ld `oma.multi`;
      oma_multi1 = force? oma_multi;
      checkMissing(oma_multi1);
      return oma_multi1;
    };
    p25 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      nc3 = ld nc;
      nc4 = force? nc3;
      checkMissing(nc4);
      c13 = ldf c in base;
      r68 = dyn c13(nr1, nc4);
      goto L0(r68);
    L2():
      r66 = dyn base4(<sym nr>, <sym nc>);
      goto L0(r66);
    };
    r70 = dyn par12[mar, oma, mfcol](p23, p24, p25);
    check L193() else D21();
  L279():
    p63 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r160 = dyn is_ts1(p63);
    check L280() else D71();
  L282():
    ts_intersect = ldf `ts.intersect`;
    check L283() else D72();
  L439():
    st xy = r320;
    tx2 = ld tx;
    check L440() else D125();
  L458():
    dx52 = getTryDispatchBuiltinValue(dr32);
    goto L455(dx52);
  L459():
    goto L136(r330);
  L467():
    xy51 = force? xy50;
    checkMissing(xy51);
    c105 = `is.object`(xy51);
    if c105 then L469() else L470(xy51);
  L486():
    plot_window = ldf `plot.window`;
    check L487() else D138();
  D19():
    deopt 73 [nser9, nc1];
  D21():
    deopt 86 [r70];
  D71():
    deopt 317 [c57, r160];
  D72():
    deopt 320 [];
  D76():
    deopt 335 [];
  D125():
    deopt 594 [tx2];
  D138():
    deopt 649 [];
  L83(r180):
    c66 = `as.logical`(r180);
    if c66 then L292() else L84();
  L191():
    nc2 = force? nc1;
    checkMissing(nc2);
    r62 = `/`(nser9, nc2);
    r63 = ceiling(r62);
    goto L51(r63);
  L193():
    st oldpar = r70;
    sym5 = ldf `on.exit`;
    base5 = ldf `on.exit` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L194() else L195();
  L280():
    c60 = `as.logical`(r160);
    c61 = `&&`(c57, c60);
    goto L80(c61);
  L283():
    p64 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      return x23;
    };
    p65 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    r163 = dyn ts_intersect(p64, p65);
    check L284() else D73();
  L288():
    p71 = prom<V +>{
      x24 = ld x;
      x25 = force? x24;
      checkMissing(x25);
      return x25;
    };
    p72 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      return y12;
    };
    p73 = prom<V +>{
      xlabel6 = ld xlabel;
      xlabel7 = force? xlabel6;
      checkMissing(xlabel7);
      return xlabel7;
    };
    p74 = prom<V +>{
      ylabel3 = ld ylabel;
      ylabel4 = force? ylabel3;
      checkMissing(ylabel4);
      return ylabel4;
    };
    p75 = prom<V +>{
      log5 = ld log;
      log6 = force? log5;
      checkMissing(log6);
      return log6;
    };
    r178 = dyn xy_coords1(p71, p72, p73, p74, p75);
    check L289() else D77();
  L290():
    missing1 = ldf missing in base;
    r181 = dyn missing1(<sym xlab>);
    goto L83(r181);
  L291():
    r179 = dyn base10(<sym xlab>);
    goto L83(r179);
  L440():
    tx3 = force? tx2;
    checkMissing(tx3);
    l1 = ld xy;
    c99 = `is.object`(l1);
    if c99 then L442() else L443(tx3, l1);
  L468(dx55):
    c106 = `is.object`(dx55);
    if c106 then L472() else L473(dx55);
  L469():
    dr34 = tryDispatchBuiltin.1("$", xy51);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L471() else L470(dr34);
  L470(xy53):
    r336 = `$`(xy53, <sym y>);
    goto L468(r336);
  L487():
    p116 = prom<V +>{
      xlim7 = ld xlim;
      xlim8 = force? xlim7;
      checkMissing(xlim8);
      return xlim8;
    };
    p117 = prom<V +>{
      ylim7 = ld ylim;
      ylim8 = force? ylim7;
      checkMissing(ylim8);
      return ylim8;
    };
    p118 = prom<V +>{
      log13 = ld log;
      log14 = force? log13;
      checkMissing(log14);
      return log14;
    };
    ddd10 = ld `...`;
    r348 = dyn plot_window[, , , `...`](p116, p117, p118, ddd10);
    check L488() else D139();
  D73():
    deopt 323 [r163];
  D77():
    deopt 341 [r178];
  D139():
    deopt 654 [r348];
  L52():
    nser10 = ld nser;
    check L196() else D22();
  L84():
    goto L85();
  L85():
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L299() else L300();
  L141(dx59):
    range3 = ldf range in base;
    r342 = dyn range3(dx59);
    check L483() else D135();
  L194():
    on_exit = ldf `on.exit` in base;
    r73 = dyn on_exit(<lang par(oldpar)>);
    goto L52();
  L195():
    r71 = dyn base5(<lang par(oldpar)>);
    goto L52();
  L284():
    st xy = r163;
    xy_coords = ldf `xy.coords`;
    check L285() else D74();
  L289():
    st xy = r178;
    goto L82();
  L292():
    xy8 = ld xy;
    check L293() else D78();
  L441(tx7, dx51):
    st xy = dx51;
    goto L133();
  L442():
    dr30 = tryDispatchBuiltin.0("$<-", l1, tx3);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L444() else L443(tx3, dr30);
  L443(tx5, l3):
    r321 = `$<-`(l3, <sym x>, tx3);
    goto L441(tx5, r321);
  L471():
    dx54 = getTryDispatchBuiltinValue(dr34);
    goto L468(dx54);
  L472():
    dr36 = tryDispatchBuiltin.1("[", dx55);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L474() else L473(dr36);
  L473(dx57):
    sym38 = ldf `is.finite`;
    base38 = ldf `is.finite` in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L475() else L476();
  L488():
    sym39 = ldf `is.matrix`;
    base39 = ldf `is.matrix` in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L489() else L490();
  D22():
    deopt 92 [1, nser10];
  D74():
    deopt 326 [];
  D78():
    deopt 346 [xy8];
  D135():
    deopt 641 [r342];
  L86(r184):
    c68 = `as.logical`(r184);
    if c68 then L301() else L87();
  L142(dx62, r338):
    __9 = ldf `[` in base;
    r341 = dyn __9(dx62, r338);
    goto L141(r341);
  L144(r350):
    c108 = `as.logical`(r350);
    if c108 then L493() else L145();
  L196():
    nser11 = force? nser10;
    checkMissing(nser11);
    r74 = `:`(1, nser11);
    s = toForSeq(r74);
    l = length(s);
    i = 0;
    goto L53(i);
  L285():
    p66 = prom<V +>{
      xy = ld xy;
      xy1 = force? xy;
      checkMissing(xy1);
      c64 = `is.object`(xy1);
      if c64 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", xy1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r164 = dyn __5(xy1, <missing>, 1.0);
      goto L0(r164);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p67 = prom<V +>{
      xy4 = ld xy;
      xy5 = force? xy4;
      checkMissing(xy5);
      c65 = `is.object`(xy5);
      if c65 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", xy5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __6 = ldf `[` in base;
      r166 = dyn __6(xy5, <missing>, 2.0);
      goto L0(r166);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p68 = prom<V +>{
      xlabel4 = ld xlabel;
      xlabel5 = force? xlabel4;
      checkMissing(xlabel5);
      return xlabel5;
    };
    p69 = prom<V +>{
      ylabel1 = ld ylabel;
      ylabel2 = force? ylabel1;
      checkMissing(ylabel2);
      return ylabel2;
    };
    p70 = prom<V +>{
      log3 = ld log;
      log4 = force? log3;
      checkMissing(log4);
      return log4;
    };
    r171 = dyn xy_coords(p66, p67, p68, p69, p70);
    check L286() else D75();
  L293():
    xy9 = force? xy8;
    checkMissing(xy9);
    c67 = `is.object`(xy9);
    if c67 then L295() else L296(xy9);
  L299():
    missing2 = ldf missing in base;
    r185 = dyn missing2(<sym ylab>);
    goto L86(r185);
  L300():
    r183 = dyn base11(<sym ylab>);
    goto L86(r183);
  L444():
    dx50 = getTryDispatchBuiltinValue(dr30);
    goto L441(tx3, dx50);
  L474():
    dx58 = getTryDispatchBuiltinValue(dr36);
    goto L141(dx58);
  L475():
    xy54 = ld xy;
    check L477() else D133();
  L476():
    r337 = dyn base38(<lang `$`(xy, y)>);
    goto L142(dx57, r337);
  L483():
    goto L140(r342);
  L489():
    x42 = ld x;
    check L491() else D140();
  L490():
    r349 = dyn base39(<sym x>);
    goto L144(r349);
  D75():
    deopt 332 [r171];
  D133():
    deopt 634 [dx57, xy54];
  D140():
    deopt 657 [x42];
  L53(i1):
    i2 = `+`.1(i1, 1);
    c14 = `<`.1(l, i2);
    if c14 then L197() else L68();
  L87():
    goto L88();
  L88():
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L308() else L309();
  L145():
    lines_default1 = ldf `lines.default`;
    check L501() else D145();
  L149():
    ann9 = ld ann;
    check L503() else D147();
  L286():
    st xy = r171;
    goto L82();
  L294(dx11):
    st xlab = dx11;
    goto L85();
  L295():
    dr10 = tryDispatchBuiltin.1("$", xy9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L297() else L296(dr10);
  L296(xy11):
    r182 = `$`(xy11, <sym xlab>);
    goto L294(r182);
  L301():
    xy12 = ld xy;
    check L302() else D79();
  L477():
    xy55 = force? xy54;
    checkMissing(xy55);
    c107 = `is.object`(xy55);
    if c107 then L479() else L480(dx57, xy55);
  L491():
    x43 = force? x42;
    checkMissing(x43);
    is_matrix1 = ldf `is.matrix` in base;
    r351 = dyn is_matrix1(x43);
    check L492() else D141();
  L493():
    sym40 = ldf seq_len;
    base40 = ldf seq_len in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L494() else L495();
  D79():
    deopt 355 [xy12];
  D141():
    deopt 660 [r351];
  D145():
    deopt 688 [];
  D147():
    deopt 706 [ann9];
  L68():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    plot_default = ldf `plot.default`;
    check L198() else D23();
  L89(r188):
    c71 = `as.logical`(r188);
    if c71 then L311() else L90();
  L146(r353):
    s1 = toForSeq(r353);
    l4 = length(s1);
    i41 = 0;
    goto L147(i41);
  L197():
    ann5 = ld ann;
    check L241() else D50();
  L297():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L294(dx10);
  L302():
    xy13 = force? xy12;
    checkMissing(xy13);
    c69 = `is.object`(xy13);
    if c69 then L304() else L305(xy13);
  L308():
    xlim1 = ld xlim;
    check L310() else D80();
  L309():
    r187 = dyn base12(<sym xlim>);
    goto L89(r187);
  L478(dx67, dx68):
    is_finite2 = ldf `is.finite` in base;
    r340 = dyn is_finite2(dx68);
    check L482() else D134();
  L479():
    dr38 = tryDispatchBuiltin.1("$", xy55);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L481() else L480(dx57, dr38);
  L480(dx64, xy57):
    r339 = `$`(xy57, <sym y>);
    goto L478(dx64, r339);
  L492():
    goto L144(r351);
  L494():
    k4 = ld k;
    check L496() else D142();
  L495():
    r352 = dyn base40(<sym k>);
    goto L146(r352);
  L501():
    p128 = prom<V +>{
      xy62 = ld xy;
      xy63 = force? xy62;
      checkMissing(xy63);
      c118 = `is.object`(xy63);
      if c118 then L1() else L2(xy63);
    L0(dx86):
      return dx86;
    L1():
      dr56 = tryDispatchBuiltin.1("$", xy63);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(xy65):
      r409 = `$`(xy65, <sym x>);
      goto L0(r409);
    L3():
      dx85 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx85);
    };
    p129 = prom<V +>{
      x49 = ld x;
      x50 = force? x49;
      checkMissing(x50);
      return x50;
    };
    p130 = prom<V +>{
      col20 = ld col;
      col21 = force? col20;
      checkMissing(col21);
      c119 = `is.object`(col21);
      if c119 then L1() else L2(col21);
    L0(dx88):
      return dx88;
    L1():
      dr58 = tryDispatchBuiltin.1("[", col21);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(col23):
      __23 = ldf `[` in base;
      r412 = dyn __23(col23, 1);
      goto L0(r412);
    L3():
      dx87 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx87);
    };
    p131 = prom<V +>{
      bg16 = ld bg;
      bg17 = force? bg16;
      checkMissing(bg17);
      return bg17;
    };
    p132 = prom<V +>{
      lty16 = ld lty;
      lty17 = force? lty16;
      checkMissing(lty17);
      c120 = `is.object`(lty17);
      if c120 then L1() else L2(lty17);
    L0(dx90):
      return dx90;
    L1():
      dr60 = tryDispatchBuiltin.1("[", lty17);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L3() else L2(dr60);
    L2(lty19):
      __24 = ldf `[` in base;
      r415 = dyn __24(lty19, 1);
      goto L0(r415);
    L3():
      dx89 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx89);
    };
    p133 = prom<V +>{
      lwd16 = ld lwd;
      lwd17 = force? lwd16;
      checkMissing(lwd17);
      c121 = `is.object`(lwd17);
      if c121 then L1() else L2(lwd17);
    L0(dx92):
      return dx92;
    L1():
      dr62 = tryDispatchBuiltin.1("[", lwd17);
      dc31 = getTryDispatchBuiltinDispatched(dr62);
      if dc31 then L3() else L2(dr62);
    L2(lwd19):
      __25 = ldf `[` in base;
      r417 = dyn __25(lwd19, 1);
      goto L0(r417);
    L3():
      dx91 = getTryDispatchBuiltinValue(dr62);
      goto L0(dx91);
    };
    p134 = prom<V +>{
      pch16 = ld pch;
      pch17 = force? pch16;
      checkMissing(pch17);
      c122 = `is.object`(pch17);
      if c122 then L1() else L2(pch17);
    L0(dx94):
      return dx94;
    L1():
      dr64 = tryDispatchBuiltin.1("[", pch17);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(pch19):
      __26 = ldf `[` in base;
      r419 = dyn __26(pch19, 1);
      goto L0(r419);
    L3():
      dx93 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx93);
    };
    p135 = prom<V +>{
      cex16 = ld cex;
      cex17 = force? cex16;
      checkMissing(cex17);
      c123 = `is.object`(cex17);
      if c123 then L1() else L2(cex17);
    L0(dx96):
      return dx96;
    L1():
      dr66 = tryDispatchBuiltin.1("[", cex17);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(cex19):
      __27 = ldf `[` in base;
      r421 = dyn __27(cex19, 1);
      goto L0(r421);
    L3():
      dx95 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx95);
    };
    p136 = prom<V +>{
      type7 = ld type;
      type8 = force? type7;
      checkMissing(type8);
      return type8;
    };
    r424 = dyn lines_default1[, , col, bg, lty, lwd, pch, cex, type](p128, p129, p130, p131, p132, p133, p134, p135, p136);
    check L502() else D146();
  L503():
    ann10 = force? ann9;
    checkMissing(ann10);
    c124 = `as.logical`(ann10);
    if c124 then L504() else L150();
  D23():
    deopt 96 [i2];
  D50():
    deopt 249 [ann5];
  D80():
    deopt 362 [xlim1];
  D134():
    deopt 638 [dx67, r340];
  D142():
    deopt 662 [k4];
  D146():
    deopt 705 [r424];
  L90():
    goto L94();
  L94():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L332() else L333();
  L147(i42):
    i43 = `+`.1(i42, 1);
    c109 = `<`.1(l4, i43);
    if c109 then L497() else L148();
  L150():
    goto L151();
  L151():
    axes7 = ld axes;
    check L508() else D150();
  L198():
    p26 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      c15 = `is.object`(x9);
      if c15 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x9);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r75 = dyn __(x9, <missing>, i6);
      goto L0(r75);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p27 = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    p28 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p29 = prom<V +>{
      bg1 = ld bg;
      bg2 = force? bg1;
      checkMissing(bg2);
      return bg2;
    };
    p30 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    p31 = prom<V +>{
      ann1 = ld ann;
      ann2 = force? ann1;
      checkMissing(ann2);
      return ann2;
    };
    ddd1 = ld `...`;
    r82 = dyn plot_default[, axes, xlab, ylab, log, col, bg, pch, ann, type, `...`](p26, FALSE, "", "", p27, p28, p29, p30, p31, "n", ddd1);
    check L199() else D24();
  L241():
    ann6 = force? ann5;
    checkMissing(ann6);
    c36 = `as.logical`(ann6);
    if c36 then L242() else L69(c36);
  L303(dx14):
    st ylab = dx14;
    goto L88();
  L304():
    dr12 = tryDispatchBuiltin.1("$", xy13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L306() else L305(dr12);
  L305(xy15):
    r186 = `$`(xy15, <sym ylab>);
    goto L303(r186);
  L310():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c70 = `==`(xlim2, NULL);
    goto L89(c70);
  L311():
    sym13 = ldf range;
    base13 = ldf range in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L312() else L313();
  L481():
    dx66 = getTryDispatchBuiltinValue(dr38);
    goto L478(dx57, dx66);
  L482():
    goto L142(dx67, r340);
  L496():
    k5 = force? k4;
    checkMissing(k5);
    r354 = seq_len(k5);
    goto L146(r354);
  L502():
    goto L149();
  L504():
    title = ldf title;
    check L505() else D148();
  D24():
    deopt 117 [i2, r82];
  D148():
    deopt 709 [];
  D150():
    deopt 720 [axes7];
  L69(c38):
    c46 = `as.logical`(c38);
    if c46 then L247() else L71();
  L91(r190):
    st xlim = r190;
    goto L94();
  L95(r200):
    c76 = `as.logical`(r200);
    if c76 then L335() else L96();
  L148():
    x44 = `[[`(s1, i43, NULL, TRUE);
    st i = x44;
    lines_default = ldf `lines.default`;
    check L498() else D143();
  L199():
    panel3 = ldf panel;
    check L200() else D25();
  L242():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L243() else L244();
  L306():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L303(dx13);
  L312():
    xy16 = ld xy;
    check L314() else D81();
  L313():
    r189 = dyn base13(<lang `[`(`$`(xy, x), is.finite(`$`(xy, x)))>);
    goto L91(r189);
  L332():
    ylim1 = ld ylim;
    check L334() else D85();
  L333():
    r199 = dyn base15(<sym ylim>);
    goto L95(r199);
  L497():
    goto L149();
  L505():
    p137 = prom<V +>{
      main9 = ld main;
      main10 = force? main9;
      checkMissing(main10);
      return main10;
    };
    p138 = prom<V +>{
      xlab5 = ld xlab;
      xlab6 = force? xlab5;
      checkMissing(xlab6);
      return xlab6;
    };
    p139 = prom<V +>{
      ylab5 = ld ylab;
      ylab6 = force? ylab5;
      checkMissing(ylab6);
      return ylab6;
    };
    ddd11 = ld `...`;
    r428 = dyn title[main, xlab, ylab, `...`](p137, p138, p139, ddd11);
    check L506() else D149();
  L508():
    axes8 = force? axes7;
    checkMissing(axes8);
    c125 = `as.logical`(axes8);
    if c125 then L509() else L152();
  D25():
    deopt 119 [i2];
  D81():
    deopt 367 [xy16];
  D85():
    deopt 384 [ylim1];
  D143():
    deopt 666 [i43];
  D149():
    deopt 717 [r428];
  L70(c41, r127):
    r128 = `!`(r127);
    c43 = `as.logical`(r128);
    c44 = `&&`(c41, c43);
    goto L69(c44);
  L71():
    goto L72();
  L72():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L253() else L254();
  L96():
    goto L100();
  L100():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L356() else L357();
  L152():
    goto L153();
  L153():
    frame_plot5 = ld `frame.plot`;
    check L515() else D155();
  L200():
    p32 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      c16 = `is.object`(x13);
      if c16 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x13);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      i7 = ld i;
      i8 = force? i7;
      __1 = ldf `[` in base;
      r83 = dyn __1(x13, <missing>, i8);
      goto L0(r83);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p33 = prom<V +>{
      col3 = ld col;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    p34 = prom<V +>{
      bg3 = ld bg;
      bg4 = force? bg3;
      checkMissing(bg4);
      return bg4;
    };
    p35 = prom<V +>{
      pch3 = ld pch;
      pch4 = force? pch3;
      checkMissing(pch4);
      return pch4;
    };
    p36 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p37 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    p38 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p39 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    ddd2 = ld `...`;
    r92 = dyn panel3[, col, bg, pch, cex, lwd, lty, type, `...`](p32, p33, p34, p35, p36, p37, p38, p39, ddd2);
    check L201() else D26();
  L243():
    main3 = ld main;
    check L245() else D51();
  L244():
    r126 = dyn base6(<sym main>);
    goto L70(c36, r126);
  L247():
    par13 = ldf par;
    check L248() else D52();
  L314():
    xy17 = force? xy16;
    checkMissing(xy17);
    c72 = `is.object`(xy17);
    if c72 then L316() else L317(xy17);
  L334():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c75 = `==`(ylim2, NULL);
    goto L95(c75);
  L335():
    sym16 = ldf range;
    base16 = ldf range in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L336() else L337();
  L498():
    p119 = prom<V +>{
      xy58 = ld xy;
      xy59 = force? xy58;
      checkMissing(xy59);
      c110 = `is.object`(xy59);
      if c110 then L1() else L2(xy59);
    L0(dx70):
      return dx70;
    L1():
      dr40 = tryDispatchBuiltin.1("$", xy59);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(xy61):
      r355 = `$`(xy61, <sym x>);
      goto L0(r355);
    L3():
      dx69 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx69);
    };
    p120 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      c111 = `is.object`(x46);
      if c111 then L1() else L2();
    L0(dx72):
      return dx72;
    L1():
      dr42 = tryDispatchBuiltin.1("[", x46);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2();
    L2():
      i46 = ld i;
      i47 = force? i46;
      __10 = ldf `[` in base;
      r357 = dyn __10(x46, <missing>, i47);
      goto L0(r357);
    L3():
      dx71 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx71);
    };
    p121 = prom<V +>{
      col11 = ld col;
      col12 = force? col11;
      checkMissing(col12);
      c112 = `is.object`(col12);
      if c112 then L2() else L3(col12);
    L0(dx74):
      return dx74;
    L2():
      dr44 = tryDispatchBuiltin.1("[", col12);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L4() else L3(dr44);
    L3(col14):
      i48 = ld i;
      i49 = force? i48;
      checkMissing(i49);
      r359 = `-`(i49, 1);
      sym41 = ldf length;
      base41 = ldf length in base;
      guard41 = `==`.4(sym41, base41);
      if guard41 then L5() else L6();
    L1(col17, r361):
      __11 = ldf `%%` in base;
      r363 = dyn __11(r359, r361);
      r364 = `+`(r363, 1);
      __12 = ldf `[` in base;
      r365 = dyn __12(col17, r364);
      goto L0(r365);
    L4():
      dx73 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx73);
    L5():
      col18 = ld col;
      col19 = force? col18;
      checkMissing(col19);
      length2 = ldf length in base;
      r362 = dyn length2(col19);
      goto L1(col14, r362);
    L6():
      r360 = dyn base41(<sym col>);
      goto L1(col14, r360);
    };
    p122 = prom<V +>{
      lty7 = ld lty;
      lty8 = force? lty7;
      checkMissing(lty8);
      c113 = `is.object`(lty8);
      if c113 then L2() else L3(lty8);
    L0(dx76):
      return dx76;
    L2():
      dr46 = tryDispatchBuiltin.1("[", lty8);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L4() else L3(dr46);
    L3(lty10):
      i50 = ld i;
      i51 = force? i50;
      checkMissing(i51);
      r367 = `-`(i51, 1);
      sym42 = ldf length;
      base42 = ldf length in base;
      guard42 = `==`.4(sym42, base42);
      if guard42 then L5() else L6();
    L1(lty13, r369):
      __13 = ldf `%%` in base;
      r371 = dyn __13(r367, r369);
      r372 = `+`(r371, 1);
      __14 = ldf `[` in base;
      r373 = dyn __14(lty13, r372);
      goto L0(r373);
    L4():
      dx75 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx75);
    L5():
      lty14 = ld lty;
      lty15 = force? lty14;
      checkMissing(lty15);
      length3 = ldf length in base;
      r370 = dyn length3(lty15);
      goto L1(lty10, r370);
    L6():
      r368 = dyn base42(<sym lty>);
      goto L1(lty10, r368);
    };
    p123 = prom<V +>{
      lwd7 = ld lwd;
      lwd8 = force? lwd7;
      checkMissing(lwd8);
      c114 = `is.object`(lwd8);
      if c114 then L2() else L3(lwd8);
    L0(dx78):
      return dx78;
    L2():
      dr48 = tryDispatchBuiltin.1("[", lwd8);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L4() else L3(dr48);
    L3(lwd10):
      i52 = ld i;
      i53 = force? i52;
      checkMissing(i53);
      r375 = `-`(i53, 1);
      sym43 = ldf length;
      base43 = ldf length in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L5() else L6();
    L1(lwd13, r377):
      __15 = ldf `%%` in base;
      r379 = dyn __15(r375, r377);
      r380 = `+`(r379, 1);
      __16 = ldf `[` in base;
      r381 = dyn __16(lwd13, r380);
      goto L0(r381);
    L4():
      dx77 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx77);
    L5():
      lwd14 = ld lwd;
      lwd15 = force? lwd14;
      checkMissing(lwd15);
      length4 = ldf length in base;
      r378 = dyn length4(lwd15);
      goto L1(lwd10, r378);
    L6():
      r376 = dyn base43(<sym lwd>);
      goto L1(lwd10, r376);
    };
    p124 = prom<V +>{
      bg7 = ld bg;
      bg8 = force? bg7;
      checkMissing(bg8);
      c115 = `is.object`(bg8);
      if c115 then L2() else L3(bg8);
    L0(dx80):
      return dx80;
    L2():
      dr50 = tryDispatchBuiltin.1("[", bg8);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L4() else L3(dr50);
    L3(bg10):
      i54 = ld i;
      i55 = force? i54;
      checkMissing(i55);
      r383 = `-`(i55, 1);
      sym44 = ldf length;
      base44 = ldf length in base;
      guard44 = `==`.4(sym44, base44);
      if guard44 then L5() else L6();
    L1(bg13, r385):
      __17 = ldf `%%` in base;
      r387 = dyn __17(r383, r385);
      r388 = `+`(r387, 1);
      __18 = ldf `[` in base;
      r389 = dyn __18(bg13, r388);
      goto L0(r389);
    L4():
      dx79 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx79);
    L5():
      bg14 = ld bg;
      bg15 = force? bg14;
      checkMissing(bg15);
      length5 = ldf length in base;
      r386 = dyn length5(bg15);
      goto L1(bg10, r386);
    L6():
      r384 = dyn base44(<sym bg>);
      goto L1(bg10, r384);
    };
    p125 = prom<V +>{
      pch7 = ld pch;
      pch8 = force? pch7;
      checkMissing(pch8);
      c116 = `is.object`(pch8);
      if c116 then L2() else L3(pch8);
    L0(dx82):
      return dx82;
    L2():
      dr52 = tryDispatchBuiltin.1("[", pch8);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L4() else L3(dr52);
    L3(pch10):
      i56 = ld i;
      i57 = force? i56;
      checkMissing(i57);
      r391 = `-`(i57, 1);
      sym45 = ldf length;
      base45 = ldf length in base;
      guard45 = `==`.4(sym45, base45);
      if guard45 then L5() else L6();
    L1(pch13, r393):
      __19 = ldf `%%` in base;
      r395 = dyn __19(r391, r393);
      r396 = `+`(r395, 1);
      __20 = ldf `[` in base;
      r397 = dyn __20(pch13, r396);
      goto L0(r397);
    L4():
      dx81 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx81);
    L5():
      pch14 = ld pch;
      pch15 = force? pch14;
      checkMissing(pch15);
      length6 = ldf length in base;
      r394 = dyn length6(pch15);
      goto L1(pch10, r394);
    L6():
      r392 = dyn base45(<sym pch>);
      goto L1(pch10, r392);
    };
    p126 = prom<V +>{
      cex7 = ld cex;
      cex8 = force? cex7;
      checkMissing(cex8);
      c117 = `is.object`(cex8);
      if c117 then L2() else L3(cex8);
    L0(dx84):
      return dx84;
    L2():
      dr54 = tryDispatchBuiltin.1("[", cex8);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L4() else L3(dr54);
    L3(cex10):
      i58 = ld i;
      i59 = force? i58;
      checkMissing(i59);
      r399 = `-`(i59, 1);
      sym46 = ldf length;
      base46 = ldf length in base;
      guard46 = `==`.4(sym46, base46);
      if guard46 then L5() else L6();
    L1(cex13, r401):
      __21 = ldf `%%` in base;
      r403 = dyn __21(r399, r401);
      r404 = `+`(r403, 1);
      __22 = ldf `[` in base;
      r405 = dyn __22(cex13, r404);
      goto L0(r405);
    L4():
      dx83 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx83);
    L5():
      cex14 = ld cex;
      cex15 = force? cex14;
      checkMissing(cex15);
      length7 = ldf length in base;
      r402 = dyn length7(cex15);
      goto L1(cex10, r402);
    L6():
      r400 = dyn base46(<sym cex>);
      goto L1(cex10, r400);
    };
    p127 = prom<V +>{
      type5 = ld type;
      type6 = force? type5;
      checkMissing(type6);
      return type6;
    };
    r408 = dyn lines_default[, , col, lty, lwd, bg, pch, cex, type](p119, p120, p121, p122, p123, p124, p125, p126, p127);
    check L499() else D144();
  L506():
    goto L151();
  L509():
    axis2 = ldf axis;
    check L510() else D151();
  D26():
    deopt 136 [i2, r92];
  D51():
    deopt 252 [c36, main3];
  D52():
    deopt 258 [];
  D144():
    deopt 683 [i43, r408];
  D151():
    deopt 723 [];
  D155():
    deopt 734 [frame_plot5];
  L73(r138):
    popenv;
    return r138;
  L97(r202):
    st ylim = r202;
    goto L100();
  L101(r212):
    st n = r212;
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L364() else L365();
  L201():
    frame_plot1 = ld `frame.plot`;
    check L202() else D27();
  L245():
    main4 = force? main3;
    checkMissing(main4);
    c42 = `==`(main4, NULL);
    goto L70(c36, c42);
  L248():
    p56 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r130):
      return r130;
    L1():
      c47 = ldf c in base;
      r131 = dyn c47(1.0, 1.0);
      goto L0(r131);
    L2():
      r129 = dyn base7(1.0, 1.0);
      goto L0(r129);
    };
    r133 = dyn par13[mfcol](p56);
    check L249() else D53();
  L253():
    invisible = ldf invisible in base;
    r139 = dyn invisible();
    check L255() else D56();
  L254():
    r137 = dyn base8();
    goto L73(r137);
  L315(dx17):
    c73 = `is.object`(dx17);
    if c73 then L319() else L320(dx17);
  L316():
    dr14 = tryDispatchBuiltin.1("$", xy17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L318() else L317(dr14);
  L317(xy19):
    r191 = `$`(xy19, <sym x>);
    goto L315(r191);
  L336():
    xy24 = ld xy;
    check L338() else D86();
  L337():
    r201 = dyn base16(<lang `[`(`$`(xy, y), is.finite(`$`(xy, y)))>);
    goto L97(r201);
  L356():
    xy32 = ld xy;
    check L358() else D90();
  L357():
    r211 = dyn base18(<lang `$`(xy, x)>);
    goto L101(r211);
  L499():
    goto L147(i43);
  L510():
    ddd12 = ld `...`;
    r430 = dyn axis2[, `...`](1.0, ddd12);
    check L511() else D152();
  L515():
    frame_plot6 = force? frame_plot5;
    checkMissing(frame_plot6);
    c126 = `as.logical`(frame_plot6);
    if c126 then L516() else L154();
  D27():
    deopt 137 [i2, frame_plot1];
  D53():
    deopt 261 [r133];
  D56():
    deopt 272 [r139];
  D86():
    deopt 389 [xy24];
  D90():
    deopt 407 [xy32];
  D152():
    deopt 726 [r430];
  L92(dx21):
    range = ldf range in base;
    r197 = dyn range(dx21);
    check L330() else D84();
  L102(r216):
    c81 = `as.logical`(r216);
    if c81 then L366() else L103();
  L154():
    invisible.0();
    popenv;
    return NULL;
  L202():
    frame_plot2 = force? frame_plot1;
    checkMissing(frame_plot2);
    c17 = `as.logical`(frame_plot2);
    if c17 then L203() else L54();
  L249():
    addmain = ldf addmain;
    check L250() else D54();
  L255():
    goto L73(r139);
  L318():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L315(dx16);
  L319():
    dr16 = tryDispatchBuiltin.1("[", dx17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L321() else L320(dr16);
  L320(dx19):
    sym14 = ldf `is.finite`;
    base14 = ldf `is.finite` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L322() else L323();
  L338():
    xy25 = force? xy24;
    checkMissing(xy25);
    c77 = `is.object`(xy25);
    if c77 then L340() else L341(xy25);
  L358():
    xy33 = force? xy32;
    checkMissing(xy33);
    c80 = `is.object`(xy33);
    if c80 then L360() else L361(xy33);
  L364():
    missing3 = ldf missing in base;
    r217 = dyn missing3(<sym xy.labels>);
    goto L102(r217);
  L365():
    r215 = dyn base19(<sym xy.labels>);
    goto L102(r215);
  L511():
    axis3 = ldf axis;
    check L512() else D153();
  L516():
    box1 = ldf box;
    check L517() else D156();
  D54():
    deopt 263 [];
  D84():
    deopt 379 [r197];
  D153():
    deopt 728 [];
  D156():
    deopt 737 [];
  L54():
    goto L55(i2);
  L55(i11):
    i12 = ld i;
    check L207() else D30();
  L93(dx24, r193):
    __7 = ldf `[` in base;
    r196 = dyn __7(dx24, r193);
    goto L92(r196);
  L103():
    goto L104();
  L104():
    sym20 = ldf `is.logical`;
    base20 = ldf `is.logical` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L369() else L370();
  L203():
    box = ldf box;
    check L204() else D28();
  L250():
    p57 = prom<V +>{
      main5 = ld main;
      main6 = force? main5;
      checkMissing(main6);
      return main6;
    };
    ddd8 = ld `...`;
    r135 = dyn addmain[, `...`](p57, ddd8);
    check L251() else D55();
  L321():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L92(dx20);
  L322():
    xy20 = ld xy;
    check L324() else D82();
  L323():
    r192 = dyn base14(<lang `$`(xy, x)>);
    goto L93(dx19, r192);
  L330():
    goto L91(r197);
  L339(dx32):
    c78 = `is.object`(dx32);
    if c78 then L343() else L344(dx32);
  L340():
    dr20 = tryDispatchBuiltin.1("$", xy25);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L342() else L341(dr20);
  L341(xy27):
    r203 = `$`(xy27, <sym y>);
    goto L339(r203);
  L359(dx47):
    length = ldf length in base;
    r214 = dyn length(dx47);
    check L363() else D91();
  L360():
    dr26 = tryDispatchBuiltin.1("$", xy33);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L362() else L361(dr26);
  L361(xy35):
    r213 = `$`(xy35, <sym x>);
    goto L359(r213);
  L366():
    n = ld n;
    check L367() else D92();
  L512():
    ddd13 = ld `...`;
    r431 = dyn axis3[, `...`](2.0, ddd13);
    check L513() else D154();
  L517():
    ddd14 = ld `...`;
    r433 = dyn box1[`...`](ddd14);
    check L518() else D157();
  D28():
    deopt 140 [i2];
  D30():
    deopt 146 [i11, i12];
  D55():
    deopt 266 [r135];
  D82():
    deopt 372 [dx19, xy20];
  D91():
    deopt 411 [r214];
  D92():
    deopt 416 [n];
  D154():
    deopt 731 [r431];
  D157():
    deopt 739 [r433];
  L98(dx36):
    range1 = ldf range in base;
    r209 = dyn range1(dx36);
    check L354() else D89();
  L105(r221):
    c83 = `as.logical`(r221);
    if c83 then L372() else L106();
  L204():
    ddd3 = ld `...`;
    r93 = dyn box[`...`](ddd3);
    check L205() else D29();
  L207():
    i13 = force? i12;
    checkMissing(i13);
    __2 = ldf `%%` in base;
    r95 = dyn __2(i13, 2.0);
    check L208() else D31();
  L251():
    goto L72();
  L324():
    xy21 = force? xy20;
    checkMissing(xy21);
    c74 = `is.object`(xy21);
    if c74 then L326() else L327(dx19, xy21);
  L342():
    dx31 = getTryDispatchBuiltinValue(dr20);
    goto L339(dx31);
  L343():
    dr22 = tryDispatchBuiltin.1("[", dx32);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L345() else L344(dr22);
  L344(dx34):
    sym17 = ldf `is.finite`;
    base17 = ldf `is.finite` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L346() else L347();
  L362():
    dx46 = getTryDispatchBuiltinValue(dr26);
    goto L359(dx46);
  L363():
    goto L101(r214);
  L367():
    n1 = force? n;
    checkMissing(n1);
    r218 = `<=`(n1, 150.0);
    st `xy.labels` = r218;
    goto L104();
  L369():
    xy_labels1 = ld `xy.labels`;
    check L371() else D93();
  L370():
    r220 = dyn base20(<sym xy.labels>);
    goto L105(r220);
  L513():
    goto L153();
  L518():
    popenv;
    return r433;
  D29():
    deopt 142 [i2, r93];
  D31():
    deopt 150 [i11, r95];
  D89():
    deopt 401 [r209];
  D93():
    deopt 424 [xy_labels1];
  L99(dx39, r205):
    __8 = ldf `[` in base;
    r208 = dyn __8(dx39, r205);
    goto L98(r208);
  L106():
    sym21 = ldf `is.character`;
    base21 = ldf `is.character` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L375() else L376();
  L107(xy_labels5):
    st `do.lab` = xy_labels5;
    do_lab = ld `do.lab`;
    check L382() else D98();
  L205():
    goto L55(i2);
  L208():
    c18 = `as.logical`(r95);
    if c18 then L56(i11, c18) else L209();
  L325(dx29, dx30):
    is_finite = ldf `is.finite` in base;
    r195 = dyn is_finite(dx30);
    check L329() else D83();
  L326():
    dr18 = tryDispatchBuiltin.1("$", xy21);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L328() else L327(dx19, dr18);
  L327(dx26, xy23):
    r194 = `$`(xy23, <sym x>);
    goto L325(dx26, r194);
  L345():
    dx35 = getTryDispatchBuiltinValue(dr22);
    goto L98(dx35);
  L346():
    xy28 = ld xy;
    check L348() else D87();
  L347():
    r204 = dyn base17(<lang `$`(xy, y)>);
    goto L99(dx34, r204);
  L354():
    goto L97(r209);
  L371():
    xy_labels2 = force? xy_labels1;
    checkMissing(xy_labels2);
    c82 = `is.logical`(xy_labels2);
    goto L105(c82);
  L372():
    xy_labels3 = ld `xy.labels`;
    check L373() else D94();
  D83():
    deopt 376 [dx29, r195];
  D87():
    deopt 394 [dx34, xy28];
  D94():
    deopt 427 [xy_labels3];
  D98():
    deopt 443 [do_lab];
  L56(i14, c19):
    c24 = `as.logical`(c19);
    if c24 then L212() else L57();
  L108(r223):
    r224 = `!`(r223);
    c85 = `as.logical`(r224);
    if c85 then L378() else L109();
  L209():
    yax_flip = ld `yax.flip`;
    check L210() else D32();
  L328():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L325(dx19, dx28);
  L329():
    goto L93(dx29, r195);
  L348():
    xy29 = force? xy28;
    checkMissing(xy29);
    c79 = `is.object`(xy29);
    if c79 then L350() else L351(dx34, xy29);
  L373():
    xy_labels4 = force? xy_labels3;
    checkMissing(xy_labels4);
    goto L107(xy_labels4);
  L375():
    xy_labels6 = ld `xy.labels`;
    check L377() else D95();
  L376():
    r222 = dyn base21(<sym xy.labels>);
    goto L108(r222);
  L382():
    do_lab1 = force? do_lab;
    checkMissing(do_lab1);
    c86 = `as.logical`(do_lab1);
    if c86 then L383() else L111();
  D32():
    deopt 151 [i11, c18, yax_flip];
  D95():
    deopt 430 [xy_labels6];
  L57():
    goto L58(i14, 4.0);
  L58(i19, r97):
    st `y.side` = r97;
    i20 = ld i;
    check L214() else D33();
  L109():
    goto L110();
  L110():
    goto L107(TRUE);
  L111():
    sym22 = ldf missing;
    base22 = ldf missing in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L385() else L386();
  L112(r227):
    st ptype = r227;
    dev_hold = ldf `dev.hold`;
    check L390() else D100();
  L210():
    yax_flip1 = force? yax_flip;
    checkMissing(yax_flip1);
    r96 = `!`(yax_flip1);
    c21 = `as.logical`(r96);
    c22 = `||`(c18, c21);
    goto L56(i11, c22);
  L212():
    goto L58(i14, 2.0);
  L349(dx44, dx45):
    is_finite1 = ldf `is.finite` in base;
    r207 = dyn is_finite1(dx45);
    check L353() else D88();
  L350():
    dr24 = tryDispatchBuiltin.1("$", xy29);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L352() else L351(dx34, dr24);
  L351(dx41, xy31):
    r206 = `$`(xy31, <sym y>);
    goto L349(dx41, r206);
  L377():
    xy_labels7 = force? xy_labels6;
    checkMissing(xy_labels7);
    c84 = `is.character`(xy_labels7);
    goto L108(c84);
  L378():
    stop2 = ldf stop;
    check L379() else D96();
  L383():
    goto L112("n");
  D33():
    deopt 161 [i19, i20];
  D88():
    deopt 398 [dx44, r207];
  D96():
    deopt 435 [];
  D100():
    deopt 456 [];
  L113(r229):
    c87 = `as.logical`(r229);
    if c87 then L387() else L114();
  L214():
    i21 = force? i20;
    checkMissing(i21);
    nr2 = ld nr;
    check L215() else D34();
  L352():
    dx43 = getTryDispatchBuiltinValue(dr24);
    goto L349(dx34, dx43);
  L353():
    goto L99(dx44, r207);
  L379():
    r225 = dyn stop2("'xy.labels' must be logical or character");
    check L380() else D97();
  L385():
    missing4 = ldf missing in base;
    r230 = dyn missing4(<sym type>);
    goto L113(r230);
  L386():
    r228 = dyn base22(<sym type>);
    goto L113(r228);
  L390():
    r231 = dyn dev_hold();
    check L391() else D101();
  D34():
    deopt 163 [i19, nr2];
  D97():
    deopt 437 [r225];
  D101():
    deopt 457 [r231];
  L114():
    type3 = ld type;
    check L389() else D99();
  L215():
    nr3 = force? nr2;
    checkMissing(nr3);
    __3 = ldf `%%` in base;
    r98 = dyn __3(i21, nr3);
    check L216() else D35();
  L380():
    goto L110();
  L387():
    goto L112("p");
  L391():
    sym23 = ldf `on.exit`;
    base23 = ldf `on.exit` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L392() else L393();
  D35():
    deopt 166 [i19, r98];
  D99():
    deopt 452 [type3];
  L115():
    plot_default1 = ldf `plot.default`;
    check L394() else D102();
  L216():
    r99 = `==`(r98, 0.0);
    c25 = `as.logical`(r99);
    if c25 then L59(i19, c25) else L217();
  L389():
    type4 = force? type3;
    checkMissing(type4);
    goto L112(type4);
  L392():
    on_exit1 = ldf `on.exit` in base;
    r234 = dyn on_exit1(<lang dev.flush()>);
    goto L115();
  L393():
    r232 = dyn base23(<lang dev.flush()>);
    goto L115();
  D102():
    deopt 462 [];
  L59(i22, c26):
    st `do.xax` = c26;
    axes3 = ld axes;
    check L221() else D38();
  L217():
    i24 = ld i;
    check L218() else D36();
  L394():
    p76 = prom<V +>{
      xy36 = ld xy;
      xy37 = force? xy36;
      checkMissing(xy37);
      return xy37;
    };
    p77 = prom<V +>{
      ptype = ld ptype;
      ptype1 = force? ptype;
      checkMissing(ptype1);
      return ptype1;
    };
    p78 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p79 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p80 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      return xlim4;
    };
    p81 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    p82 = prom<V +>{
      log7 = ld log;
      log8 = force? log7;
      checkMissing(log8);
      return log8;
    };
    p83 = prom<V +>{
      col5 = ld col;
      col6 = force? col5;
      checkMissing(col6);
      return col6;
    };
    p84 = prom<V +>{
      bg5 = ld bg;
      bg6 = force? bg5;
      checkMissing(bg6);
      return bg6;
    };
    p85 = prom<V +>{
      pch5 = ld pch;
      pch6 = force? pch5;
      checkMissing(pch6);
      return pch6;
    };
    p86 = prom<V +>{
      cex3 = ld cex;
      cex4 = force? cex3;
      checkMissing(cex4);
      return cex4;
    };
    p87 = prom<V +>{
      lty3 = ld lty;
      lty4 = force? lty3;
      checkMissing(lty4);
      return lty4;
    };
    p88 = prom<V +>{
      lwd3 = ld lwd;
      lwd4 = force? lwd3;
      checkMissing(lwd4);
      return lwd4;
    };
    p89 = prom<V +>{
      axes5 = ld axes;
      axes6 = force? axes5;
      checkMissing(axes6);
      return axes6;
    };
    p90 = prom<V +>{
      frame_plot3 = ld `frame.plot`;
      frame_plot4 = force? frame_plot3;
      checkMissing(frame_plot4);
      return frame_plot4;
    };
    p91 = prom<V +>{
      ann7 = ld ann;
      ann8 = force? ann7;
      checkMissing(ann8);
      return ann8;
    };
    p92 = prom<V +>{
      main7 = ld main;
      main8 = force? main7;
      checkMissing(main8);
      return main8;
    };
    ddd9 = ld `...`;
    r252 = dyn plot_default1[, type, xlab, ylab, xlim, ylim, log, col, bg, pch, cex, lty, lwd, axes, `frame.plot`, ann, main, `...`](p76, p77, p78, p79, p80, p81, p82, p83, p84, p85, p86, p87, p88, p89, p90, p91, p92, ddd9);
    check L395() else D103();
  D36():
    deopt 169 [i19, c25, i24];
  D38():
    deopt 175 [i22, axes3];
  D103():
    deopt 497 [r252];
  L218():
    i25 = force? i24;
    checkMissing(i25);
    nser12 = ld nser;
    check L219() else D37();
  L221():
    axes4 = force? axes3;
    checkMissing(axes4);
    c31 = `as.logical`(axes4);
    if c31 then L222() else L60();
  L395():
    sym24 = ldf missing;
    base24 = ldf missing in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L396() else L397();
  D37():
    deopt 170 [i19, c25, i25, nser12];
  L60():
    goto L63(i22);
  L63(i32):
    ann3 = ld ann;
    check L231() else D44();
  L116(r254):
    c88 = `as.logical`(r254);
    if c88 then L398() else L117();
  L219():
    nser13 = force? nser12;
    checkMissing(nser13);
    r100 = `==`(i25, nser13);
    c28 = `as.logical`(r100);
    c29 = `||`(c25, c28);
    goto L59(i19, c29);
  L222():
    axis = ldf axis;
    check L223() else D39();
  L396():
    missing5 = ldf missing in base;
    r255 = dyn missing5(<sym xy.lines>);
    goto L116(r255);
  L397():
    r253 = dyn base24(<sym xy.lines>);
    goto L116(r253);
  D39():
    deopt 178 [i22];
  D44():
    deopt 209 [i32, ann3];
  L117():
    goto L118();
  L118():
    do_lab5 = ld `do.lab`;
    check L401() else D105();
  L223():
    p40 = prom<V +>{
      y_side = ld `y.side`;
      y_side1 = force? y_side;
      checkMissing(y_side1);
      return y_side1;
    };
    p41 = prom<V +>{
      cex_axis1 = ld `cex.axis`;
      cex_axis2 = force? cex_axis1;
      checkMissing(cex_axis2);
      return cex_axis2;
    };
    p42 = prom<V +>{
      col_axis1 = ld `col.axis`;
      col_axis2 = force? col_axis1;
      checkMissing(col_axis2);
      return col_axis2;
    };
    p43 = prom<V +>{
      font_axis1 = ld `font.axis`;
      font_axis2 = force? font_axis1;
      checkMissing(font_axis2);
      return font_axis2;
    };
    ddd4 = ld `...`;
    r105 = dyn axis[, xpd, `cex.axis`, `col.axis`, `font.axis`, `...`](p40, NA_LGL, p41, p42, p43, ddd4);
    check L224() else D40();
  L231():
    ann4 = force? ann3;
    checkMissing(ann4);
    c33 = `as.logical`(ann4);
    if c33 then L232() else L64();
  L398():
    do_lab2 = ld `do.lab`;
    check L399() else D104();
  D40():
    deopt 189 [i22, r105];
  D104():
    deopt 501 [do_lab2];
  D105():
    deopt 506 [do_lab5];
  L64():
    goto L67(i32);
  L67(i40):
    goto L53(i40);
  L224():
    do_xax = ld `do.xax`;
    check L225() else D41();
  L232():
    mtext = ldf mtext;
    check L233() else D45();
  L399():
    do_lab3 = force? do_lab2;
    checkMissing(do_lab3);
    st `xy.lines` = do_lab3;
    goto L118();
  L401():
    do_lab6 = force? do_lab5;
    checkMissing(do_lab6);
    c89 = `as.logical`(do_lab6);
    if c89 then L402() else L119();
  D41():
    deopt 190 [i22, do_xax];
  D45():
    deopt 212 [i32];
  L119():
    goto L120();
  L120():
    xy_lines1 = ld `xy.lines`;
    check L406() else D108();
  L225():
    do_xax1 = force? do_xax;
    checkMissing(do_xax1);
    c32 = `as.logical`(do_xax1);
    if c32 then L226() else L61();
  L233():
    p47 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      c34 = `is.object`(nm1);
      if c34 then L1() else L2(nm1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", nm1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(nm3):
      i35 = ld i;
      i36 = force? i35;
      __4 = ldf `[` in base;
      r112 = dyn __4(nm3, i36);
      goto L0(r112);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p48 = prom<V +>{
      y_side2 = ld `y.side`;
      y_side3 = force? y_side2;
      checkMissing(y_side3);
      return y_side3;
    };
    p49 = prom<V +>{
      cex_lab1 = ld `cex.lab`;
      cex_lab2 = force? cex_lab1;
      checkMissing(cex_lab2);
      return cex_lab2;
    };
    p50 = prom<V +>{
      col_lab1 = ld `col.lab`;
      col_lab2 = force? col_lab1;
      checkMissing(col_lab2);
      return col_lab2;
    };
    p51 = prom<V +>{
      font_lab1 = ld `font.lab`;
      font_lab2 = force? font_lab1;
      checkMissing(font_lab2);
      return font_lab2;
    };
    ddd6 = ld `...`;
    r118 = dyn mtext[, , line, cex, col, font, `...`](p47, p48, 3.0, p49, p50, p51, ddd6);
    check L234() else D46();
  L402():
    text = ldf text;
    check L403() else D106();
  D46():
    deopt 224 [i32, r118];
  D106():
    deopt 509 [];
  D108():
    deopt 520 [xy_lines1];
  L61():
    goto L62(i22, NULL);
  L62(i31, r110):
    goto L63(i31);
  L226():
    axis1 = ldf axis;
    check L227() else D42();
  L234():
    do_xax2 = ld `do.xax`;
    check L235() else D47();
  L403():
    p93 = prom<V +>{
      xy38 = ld xy;
      xy39 = force? xy38;
      checkMissing(xy39);
      return xy39;
    };
    p98 = prom<V +>{
      sym25 = ldf `is.character`;
      base25 = ldf `is.character` in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L5() else L6();
    L0(r258):
      c91 = `as.logical`(r258);
      if c91 then L7() else L1();
    L5():
      xy_labels8 = ld `xy.labels`;
      xy_labels9 = force? xy_labels8;
      checkMissing(xy_labels9);
      c90 = `is.character`(xy_labels9);
      goto L0(c90);
    L6():
      r257 = dyn base25(<sym xy.labels>);
      goto L0(r257);
    L1():
      sym26 = ldf all;
      base26 = ldf all in base;
      guard26 = `==`.4(sym26, base26);
      if guard26 then L9() else L10();
    L7():
      xy_labels10 = ld `xy.labels`;
      xy_labels11 = force? xy_labels10;
      checkMissing(xy_labels11);
      return xy_labels11;
    L2(r260):
      c92 = `as.logical`(r260);
      if c92 then L11() else L3();
    L9():
      tsp = ldf tsp;
      p94 = prom<V +>{
        x26 = ld x;
        x27 = force? x26;
        checkMissing(x27);
        return x27;
      };
      r262 = dyn tsp(p94);
      tsp1 = ldf tsp;
      p95 = prom<V +>{
        y13 = ld y;
        y14 = force? y13;
        checkMissing(y14);
        return y14;
      };
      r264 = dyn tsp1(p95);
      r265 = `==`(r262, r264);
      all = ldf all in base;
      r266 = dyn all(r265);
      goto L2(r266);
    L10():
      r259 = dyn base26(<lang `==`(tsp(x), tsp(y))>);
      goto L2(r259);
    L3():
      sym28 = ldf seq_along;
      base28 = ldf seq_along in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L13() else L14();
    L11():
      formatC = ldf formatC;
      p97 = prom<V +>{
        sym27 = ldf unclass;
        base27 = ldf unclass in base;
        guard27 = `==`.4(sym27, base27);
        if guard27 then L1() else L2();
      L0(r268):
        return r268;
      L1():
        time = ldf time;
        p96 = prom<V +>{
          x28 = ld x;
          x29 = force? x28;
          checkMissing(x29);
          return x29;
        };
        r270 = dyn time(p96);
        unclass = ldf unclass in base;
        r271 = dyn unclass(r270);
        goto L0(r271);
      L2():
        r267 = dyn base27(<lang time(x)>);
        goto L0(r267);
      };
      r273 = dyn formatC[, width](p97, 1.0);
      return r273;
    L4(r275):
      return r275;
    L13():
      xy40 = ld xy;
      xy41 = force? xy40;
      checkMissing(xy41);
      c93 = `is.object`(xy41);
      if c93 then L16() else L17(xy41);
    L14():
      r274 = dyn base28(<lang `$`(xy, x)>);
      goto L4(r274);
    L15(dx49):
      r277 = seq_along(dx49);
      goto L4(r277);
    L16():
      dr28 = tryDispatchBuiltin.1("$", xy41);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L18() else L17(dr28);
    L17(xy43):
      r276 = `$`(xy43, <sym x>);
      goto L15(r276);
    L18():
      dx48 = getTryDispatchBuiltinValue(dr28);
      goto L15(dx48);
    };
    p99 = prom<V +>{
      col7 = ld col;
      col8 = force? col7;
      checkMissing(col8);
      return col8;
    };
    p100 = prom<V +>{
      cex5 = ld cex;
      cex6 = force? cex5;
      checkMissing(cex6);
      return cex6;
    };
    r281 = dyn text[, labels, col, cex](p93, p98, p99, p100);
    check L404() else D107();
  L406():
    xy_lines2 = force? xy_lines1;
    checkMissing(xy_lines2);
    c94 = `as.logical`(xy_lines2);
    if c94 then L407() else L121();
  D42():
    deopt 193 [i22];
  D47():
    deopt 225 [i32, do_xax2];
  D107():
    deopt 517 [r281];
  L121():
    goto L122();
  L122():
    sym29 = ldf invisible;
    base29 = ldf invisible in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L411() else L412();
  L227():
    p44 = prom<V +>{
      cex_axis3 = ld `cex.axis`;
      cex_axis4 = force? cex_axis3;
      checkMissing(cex_axis4);
      return cex_axis4;
    };
    p45 = prom<V +>{
      col_axis3 = ld `col.axis`;
      col_axis4 = force? col_axis3;
      checkMissing(col_axis4);
      return col_axis4;
    };
    p46 = prom<V +>{
      font_axis3 = ld `font.axis`;
      font_axis4 = force? font_axis3;
      checkMissing(font_axis4);
      return font_axis4;
    };
    ddd5 = ld `...`;
    r109 = dyn axis1[, xpd, `cex.axis`, `col.axis`, `font.axis`, `...`](1.0, NA_LGL, p44, p45, p46, ddd5);
    check L228() else D43();
  L235():
    do_xax3 = force? do_xax2;
    checkMissing(do_xax3);
    c35 = `as.logical`(do_xax3);
    if c35 then L236() else L65();
  L404():
    goto L120();
  L407():
    lines2 = ldf lines;
    check L408() else D109();
  D43():
    deopt 204 [i22, r109];
  D109():
    deopt 523 [];
  L65():
    goto L66(i32, NULL);
  L66(i39, r124):
    goto L67(i39);
  L123(r291):
    popenv;
    return r291;
  L228():
    goto L62(i22, r109);
  L236():
    mtext1 = ldf mtext;
    check L237() else D48();
  L408():
    p101 = prom<V +>{
      xy44 = ld xy;
      xy45 = force? xy44;
      checkMissing(xy45);
      return xy45;
    };
    p102 = prom<V +>{
      col9 = ld col;
      col10 = force? col9;
      checkMissing(col10);
      return col10;
    };
    p103 = prom<V +>{
      lty5 = ld lty;
      lty6 = force? lty5;
      checkMissing(lty6);
      return lty6;
    };
    p104 = prom<V +>{
      lwd5 = ld lwd;
      lwd6 = force? lwd5;
      checkMissing(lwd6);
      return lwd6;
    };
    p105 = prom<V +>{
      do_lab7 = ld `do.lab`;
      do_lab8 = force? do_lab7;
      checkMissing(do_lab8);
      c95 = `as.logical`(do_lab8);
      if c95 then L1() else L0();
    L0():
      return "l";
    L1():
      return "c";
    };
    r288 = dyn lines2[, col, lty, lwd, type](p101, p102, p103, p104, p105);
    check L409() else D110();
  L411():
    invisible1 = ldf invisible in base;
    r292 = dyn invisible1();
    check L413() else D111();
  L412():
    r290 = dyn base29();
    goto L123(r290);
  D48():
    deopt 228 [i32];
  D110():
    deopt 533 [r288];
  D111():
    deopt 539 [r292];
  L237():
    p52 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p53 = prom<V +>{
      cex_lab3 = ld `cex.lab`;
      cex_lab4 = force? cex_lab3;
      checkMissing(cex_lab4);
      return cex_lab4;
    };
    p54 = prom<V +>{
      col_lab3 = ld `col.lab`;
      col_lab4 = force? col_lab3;
      checkMissing(col_lab4);
      return col_lab4;
    };
    p55 = prom<V +>{
      font_lab3 = ld `font.lab`;
      font_lab4 = force? font_lab3;
      checkMissing(font_lab4);
      return font_lab4;
    };
    ddd7 = ld `...`;
    r123 = dyn mtext1[, side, line, cex, col, font, `...`](p52, 1.0, 3.0, p53, p54, p55, ddd7);
    check L238() else D49();
  L409():
    goto L122();
  L413():
    goto L123(r292);
  D49():
    deopt 241 [i32, r123];
  L238():
    goto L66(i32, r123);
  }
}
fun inner4001857310(main, `cex.main`, `font.main`, `col.main`, `...`) {
  (reg main:*, reg cex_main:*, reg font_main:*, reg col_main:*, reg ddd:dots) -+> V { var main:*, var `cex.main`:*, reg cex_main_isMissing:L, reg cex_main_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var `font.main`:*, reg font_main_isMissing:L, reg font_main_orDefault:*, reg par1:cls, reg r2:V, reg p1:p(V +), var `col.main`:*, reg col_main_isMissing:L, reg col_main_orDefault:*, reg par2:cls, reg r4:V, reg p2:p(V +), var `...`:dots?, reg mtext:cls, reg main1:*, reg main2:V, reg p3:p(V +), reg cex_main1:*, reg cex_main2:V, reg p4:p(V +), reg font_main1:*, reg font_main2:V, reg p5:p(V +), reg col_main1:*, reg col_main2:V, reg p6:p(V +), reg ddd1:dots?, reg r10:V |
    mkenv;
    st main = main;
    cex_main_isMissing = missing.0(cex_main);
    if cex_main_isMissing then L0() else L1(cex_main);
  L0():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("cex.main");
      return r;
    };
    goto L1(p);
  L1(cex_main_orDefault):
    st `cex.main` = cex_main_orDefault;
    font_main_isMissing = missing.0(font_main);
    if font_main_isMissing then L2() else L3(font_main);
  L2():
    p1 = prom<V +>{
      par1 = ldf par;
      r2 = dyn par1("font.main");
      return r2;
    };
    goto L3(p1);
  L3(font_main_orDefault):
    st `font.main` = font_main_orDefault;
    col_main_isMissing = missing.0(col_main);
    if col_main_isMissing then L4() else L5(col_main);
  L4():
    p2 = prom<V +>{
      par2 = ldf par;
      r4 = dyn par2("col.main");
      return r4;
    };
    goto L5(p2);
  L5(col_main_orDefault):
    st `col.main` = col_main_orDefault;
    st `...` = ddd;
    mtext = ldf mtext;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p3 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p4 = prom<V +>{
      cex_main1 = ld `cex.main`;
      cex_main2 = force? cex_main1;
      checkMissing(cex_main2);
      return cex_main2;
    };
    p5 = prom<V +>{
      font_main1 = ld `font.main`;
      font_main2 = force? font_main1;
      checkMissing(font_main2);
      return font_main2;
    };
    p6 = prom<V +>{
      col_main1 = ld `col.main`;
      col_main2 = force? col_main1;
      checkMissing(col_main2);
      return col_main2;
    };
    ddd1 = ld `...`;
    r10 = dyn mtext[, side, line, cex, font, col, `...`](p3, 3.0, 3.0, p4, p5, p6, ddd1);
    check L7() else D1();
  D1():
    deopt 14 [r10];
  L7():
    popenv;
    return r10;
  }
}