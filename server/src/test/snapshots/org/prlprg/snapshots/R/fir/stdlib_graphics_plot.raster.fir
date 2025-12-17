fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg grDevices:*, reg grDevices1:V, reg p:p(V +), reg r4:V, reg as_raster:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg plot:cls, reg r10:*, reg r11:V, reg p2:p(V +), reg r13:V, reg plot1:cls, reg r14:*, reg r15:V, reg p3:p(V +), reg r17:V, reg plot2:cls, reg r18:*, reg r19:V, reg p4:p(V +), reg r21:V, reg par:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg rep:cls, reg r24:V, reg p5:p(V +), reg r26:V, reg plot3:cls, reg r27:*, reg r28:V, reg p6:p(V +), reg r30:V, reg par1:cls, reg op:*, reg op1:V, reg p7:p(V +), reg r32:V, reg plot4:cls, reg r33:*, reg r34:V, reg p8:p(V +), reg r36:V, reg box:cls, reg r37:V, reg title:cls, reg r38:V, reg plot5:cls, reg r39:V, reg plot6:cls, reg r40:*, reg r41:V, reg p9:p(V +), reg r43:V |
    mkenv;
    r = clos inner1772369318;
    st `plot.raster` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    as_raster = ldf `as.raster`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym grDevices>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      grDevices = ld grDevices;
      grDevices1 = force? grDevices;
      checkMissing(grDevices1);
      return grDevices1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c(0.5, 1.0, 0.5);
      goto L0(r7);
    L2():
      r5 = dyn base1(0.5, 1.0, 0.5);
      goto L0(r5);
    };
    r9 = dyn as_raster(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r9];
  L4():
    goto L0();
  L6():
    st r = r9;
    plot = ldf plot;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    p2 = prom<V +>{
      r10 = ld r;
      r11 = force? r10;
      checkMissing(r11);
      return r11;
    };
    r13 = dyn plot(p2);
    check L8() else D5();
  D5():
    deopt 16 [r13];
  L8():
    plot1 = ldf plot;
    check L9() else D6();
  D6():
    deopt 18 [];
  L9():
    p3 = prom<V +>{
      r14 = ld r;
      r15 = force? r14;
      checkMissing(r15);
      return r15;
    };
    r17 = dyn plot1[, interpolate](p3, FALSE);
    check L10() else D7();
  D7():
    deopt 22 [r17];
  L10():
    plot2 = ldf plot;
    check L11() else D8();
  D8():
    deopt 24 [];
  L11():
    p4 = prom<V +>{
      r18 = ld r;
      r19 = force? r18;
      checkMissing(r19);
      return r19;
    };
    r21 = dyn plot2[, asp](p4, NA_LGL);
    check L12() else D9();
  D9():
    deopt 28 [r21];
  L12():
    par = ldf par;
    check L13() else D10();
  D10():
    deopt 30 [];
  L13():
    p5 = prom<V +>{
      sym2 = ldf rep;
      base2 = ldf rep in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      rep = ldf rep in base;
      r24 = dyn rep(0.0, 4.0);
      goto L0(r24);
    L2():
      r22 = dyn base2(0.0, 4.0);
      goto L0(r22);
    };
    r26 = dyn par[mar](p5);
    check L14() else D11();
  D11():
    deopt 33 [r26];
  L14():
    st op = r26;
    plot3 = ldf plot;
    check L15() else D12();
  D12():
    deopt 36 [];
  L15():
    p6 = prom<V +>{
      r27 = ld r;
      r28 = force? r27;
      checkMissing(r28);
      return r28;
    };
    r30 = dyn plot3[, asp](p6, NA_LGL);
    check L16() else D13();
  D13():
    deopt 40 [r30];
  L16():
    par1 = ldf par;
    check L17() else D14();
  D14():
    deopt 42 [];
  L17():
    p7 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r32 = dyn par1(p7);
    check L18() else D15();
  D15():
    deopt 44 [r32];
  L18():
    plot4 = ldf plot;
    check L19() else D16();
  D16():
    deopt 46 [];
  L19():
    p8 = prom<V +>{
      r33 = ld r;
      r34 = force? r33;
      checkMissing(r34);
      return r34;
    };
    r36 = dyn plot4[, asp](p8, NA_LGL);
    check L20() else D17();
  D17():
    deopt 50 [r36];
  L20():
    box = ldf box;
    check L21() else D18();
  D18():
    deopt 52 [];
  L21():
    r37 = dyn box();
    check L22() else D19();
  D19():
    deopt 53 [r37];
  L22():
    title = ldf title;
    check L23() else D20();
  D20():
    deopt 55 [];
  L23():
    r38 = dyn title[main]("This is my raster");
    check L24() else D21();
  D21():
    deopt 58 [r38];
  L24():
    plot5 = ldf plot;
    check L25() else D22();
  D22():
    deopt 60 [];
  L25():
    r39 = dyn plot5(1.0);
    check L26() else D23();
  D23():
    deopt 62 [r39];
  L26():
    plot6 = ldf plot;
    check L27() else D24();
  D24():
    deopt 64 [];
  L27():
    p9 = prom<V +>{
      r40 = ld r;
      r41 = force? r40;
      checkMissing(r41);
      return r41;
    };
    r43 = dyn plot6[, add](p9, TRUE);
    check L28() else D25();
  D25():
    deopt 68 [r43];
  L28():
    popenv;
    return r43;
  }
}
fun inner1772369318(x, y, xlim, ylim, xaxs, yaxs, asp, add, `...`) {
  (reg x:*, reg y:*, reg xlim:*, reg ylim:*, reg xaxs:*, reg yaxs:*, reg asp:*, reg add:*, reg ddd:dots) -+> V { var x:*, var y:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ncol:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg nrow:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r9:V, reg c1:cls, reg r10:V, reg p3:p(V +), var xaxs:*, reg xaxs_isMissing:L, reg xaxs_orDefault:*, var yaxs:*, reg yaxs_isMissing:L, reg yaxs_orDefault:*, var asp:*, reg asp_isMissing:L, reg asp_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var `...`:dots?, reg add1:*, reg add2:V, reg r12:V, reg c2:L, reg plot_new:cls, reg r13:V, reg plot_window:cls, reg xlim1:*, reg xlim2:V, reg p4:p(V +), reg ylim1:*, reg ylim2:V, reg p5:p(V +), reg asp1:*, reg asp2:V, reg p6:p(V +), reg xaxs1:*, reg xaxs2:V, reg p7:p(V +), reg yaxs1:*, reg yaxs2:V, reg p8:p(V +), reg r19:V, reg rasterImage:cls, reg x5:*, reg x6:V, reg p9:p(V +), reg ncol1:cls, reg x7:*, reg x8:V, reg p10:p(V +), reg r23:V, reg p11:p(V +), reg nrow1:cls, reg x9:*, reg x10:V, reg p12:p(V +), reg r26:V, reg p13:p(V +), reg ddd1:dots?, reg r28:V |
    mkenv;
    st x = x;
    st y = y;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L0() else L1(xlim);
  L0():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      ncol = ldf ncol;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r3 = dyn ncol(p);
      c = ldf c in base;
      r4 = dyn c(0.0, r3);
      goto L0(r4);
    L2():
      r = dyn base(0.0, <lang ncol(x)>);
      goto L0(r);
    };
    goto L1(p1);
  L1(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L2() else L3(ylim);
  L2():
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      nrow = ldf nrow;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r9 = dyn nrow(p2);
      c1 = ldf c in base;
      r10 = dyn c1(0.0, r9);
      goto L0(r10);
    L2():
      r6 = dyn base1(0.0, <lang nrow(x)>);
      goto L0(r6);
    };
    goto L3(p3);
  L3(ylim_orDefault):
    st ylim = ylim_orDefault;
    xaxs_isMissing = missing.0(xaxs);
    if xaxs_isMissing then L4("i") else L4(xaxs);
  L4(xaxs_orDefault):
    st xaxs = xaxs_orDefault;
    yaxs_isMissing = missing.0(yaxs);
    if yaxs_isMissing then L5("i") else L5(yaxs);
  L5(yaxs_orDefault):
    st yaxs = yaxs_orDefault;
    asp_isMissing = missing.0(asp);
    if asp_isMissing then L6(1.0) else L6(asp);
  L6(asp_orDefault):
    st asp = asp_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L7(FALSE) else L7(add);
  L7(add_orDefault):
    st add = add_orDefault;
    st `...` = ddd;
    add1 = ld add;
    check L10() else D0();
  D0():
    deopt 0 [add1];
  L10():
    add2 = force? add1;
    checkMissing(add2);
    r12 = `!`(add2);
    c2 = `as.logical`(r12);
    if c2 then L11() else L8();
  L8():
    goto L9();
  L9():
    rasterImage = ldf rasterImage;
    check L17() else D5();
  L11():
    plot_new = ldf `plot.new`;
    check L12() else D1();
  D1():
    deopt 4 [];
  D5():
    deopt 22 [];
  L12():
    r13 = dyn plot_new();
    check L13() else D2();
  L17():
    p9 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p11 = prom<V +>{
      ncol1 = ldf ncol;
      p10 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r23 = dyn ncol1(p10);
      return r23;
    };
    p13 = prom<V +>{
      nrow1 = ldf nrow;
      p12 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r26 = dyn nrow1(p12);
      return r26;
    };
    ddd1 = ld `...`;
    r28 = dyn rasterImage[, , , , , `...`](p9, 0.0, 0.0, p11, p13, ddd1);
    check L18() else D6();
  D2():
    deopt 5 [r13];
  D6():
    deopt 29 [r28];
  L13():
    plot_window = ldf `plot.window`;
    check L14() else D3();
  L18():
    popenv;
    return r28;
  D3():
    deopt 7 [];
  L14():
    p4 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p5 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p6 = prom<V +>{
      asp1 = ld asp;
      asp2 = force? asp1;
      checkMissing(asp2);
      return asp2;
    };
    p7 = prom<V +>{
      xaxs1 = ld xaxs;
      xaxs2 = force? xaxs1;
      checkMissing(xaxs2);
      return xaxs2;
    };
    p8 = prom<V +>{
      yaxs1 = ld yaxs;
      yaxs2 = force? yaxs1;
      checkMissing(yaxs2);
      return yaxs2;
    };
    r19 = dyn plot_window[xlim, ylim, asp, xaxs, yaxs](p4, p5, p6, p7, p8);
    check L15() else D4();
  D4():
    deopt 18 [r19];
  L15():
    goto L9();
  }
}