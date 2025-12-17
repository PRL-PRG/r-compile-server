fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg stepfun:cls, reg p1:p(V +), reg y0:*, reg y1:V, reg p2:p(V +), reg r10:V, reg stepfun1:cls, reg p3:p(V +), reg y2:*, reg y3:V, reg p4:p(V +), reg r13:V, reg stepfun2:cls, reg p5:p(V +), reg y4:*, reg y5:V, reg p6:p(V +), reg r16:V, reg seq:cls, reg r17:V, reg par:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg c1:cls, reg r20:V, reg p7:p(V +), reg r22:V, reg plot:cls, reg sfun0:*, reg sfun1:V, reg p8:p(V +), reg r24:V, reg plot1:cls, reg sfun2:*, reg sfun3:V, reg p9:p(V +), reg tt:*, reg tt1:V, reg p10:p(V +), reg r27:V, reg plot2:cls, reg sfun_2:*, reg sfun_3:V, reg p11:p(V +), reg r29:V, reg plot3:cls, reg sfun_4:*, reg sfun_5:V, reg p12:p(V +), reg tt2:*, reg tt3:V, reg p13:p(V +), reg r32:V, reg plot4:cls, reg sfun4:*, reg sfun5:V, reg p14:p(V +), reg r34:V, reg lines:cls, reg sfun6:*, reg sfun7:V, reg p15:p(V +), reg tt4:*, reg tt5:V, reg p16:p(V +), reg r37:V, reg plot5:cls, reg sfun8:*, reg sfun9:V, reg p17:p(V +), reg r39:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg lines1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg sfun10:*, reg sfun11:V, reg sfun_6:*, reg sfun_7:V, reg stepfun3:cls, reg p18:p(V +), reg y6:*, reg y7:V, reg p19:p(V +), reg r44:V, reg list:cls, reg r45:V, reg c3:L, reg r47:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r48:V, reg p20:p(V +), reg i7:*, reg i8:V, reg p21:p(V +), reg r51:V, reg legend:cls, reg paste:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r52:V, reg r53:V, reg c4:cls, reg r54:V, reg p22:p(V +), reg r56:V, reg p23:p(V +), reg p24:p(V +), reg r59:V, reg par1:cls, reg op:*, reg op1:V, reg p25:p(V +), reg r61:V, reg plot6:cls, reg sfun12:*, reg sfun13:V, reg p26:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r63:V, reg r64:V, reg c5:cls, reg r65:V, reg p27:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r67:V, reg r68:V, reg c6:cls, reg r69:V, reg p28:p(V +), reg r71:V, reg plot_stepfun:cls, reg rt:cls, reg r72:V, reg p29:p(V +), reg r74:V |
    mkenv;
    r = clos inner3183345136;
    st `plot.stepfun` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1(r6):
    st y0 = r6;
    stepfun = ldf stepfun;
    check L11() else D3();
  L6():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L7() else D1();
  L8():
    c = ldf c in base;
    r7 = dyn c(1.0, 2.0, 4.0, 3.0);
    check L10() else D2();
  L9():
    r5 = dyn base1(1.0, 2.0, 4.0, 3.0);
    goto L1(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 15 [r7];
  D3():
    deopt 18 [];
  L7():
    goto L0();
  L10():
    goto L1(r7);
  L11():
    p1 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p2 = prom<V +>{
      y0 = ld y0;
      y1 = force? y0;
      checkMissing(y1);
      return y1;
    };
    r10 = dyn stepfun[, , f](p1, p2, 0.0);
    check L12() else D4();
  D4():
    deopt 23 [r10];
  L12():
    st sfun0 = r10;
    stepfun1 = ldf stepfun;
    check L13() else D5();
  D5():
    deopt 26 [];
  L13():
    p3 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p4 = prom<V +>{
      y2 = ld y0;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r13 = dyn stepfun1[, , f](p3, p4, 0.2);
    check L14() else D6();
  D6():
    deopt 31 [r13];
  L14():
    st `sfun.2` = r13;
    stepfun2 = ldf stepfun;
    check L15() else D7();
  D7():
    deopt 34 [];
  L15():
    p5 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p6 = prom<V +>{
      y4 = ld y0;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r16 = dyn stepfun2[, , right](p5, p6, TRUE);
    check L16() else D8();
  D8():
    deopt 39 [r16];
  L16():
    st sfun1 = r16;
    seq = ldf seq;
    check L17() else D9();
  D9():
    deopt 42 [];
  L17():
    r17 = dyn seq[, , by](0.0, 3.0, 0.1);
    check L18() else D10();
  D10():
    deopt 47 [r17];
  L18():
    st tt = r17;
    par = ldf par;
    check L19() else D11();
  D11():
    deopt 50 [];
  L19():
    p7 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c1 = ldf c in base;
      r20 = dyn c1(2.0, 2.0);
      goto L0(r20);
    L2():
      r18 = dyn base2(2.0, 2.0);
      goto L0(r18);
    };
    r22 = dyn par[mfrow](p7);
    check L20() else D12();
  D12():
    deopt 53 [r22];
  L20():
    st op = r22;
    plot = ldf plot;
    check L21() else D13();
  D13():
    deopt 56 [];
  L21():
    p8 = prom<V +>{
      sfun0 = ld sfun0;
      sfun1 = force? sfun0;
      checkMissing(sfun1);
      return sfun1;
    };
    r24 = dyn plot(p8);
    check L22() else D14();
  D14():
    deopt 58 [r24];
  L22():
    plot1 = ldf plot;
    check L23() else D15();
  D15():
    deopt 60 [];
  L23():
    p9 = prom<V +>{
      sfun2 = ld sfun0;
      sfun3 = force? sfun2;
      checkMissing(sfun3);
      return sfun3;
    };
    p10 = prom<V +>{
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      return tt1;
    };
    r27 = dyn plot1[, xval, add, `col.hor`](p9, p10, TRUE, "bisque");
    check L24() else D16();
  D16():
    deopt 68 [r27];
  L24():
    plot2 = ldf plot;
    check L25() else D17();
  D17():
    deopt 70 [];
  L25():
    p11 = prom<V +>{
      sfun_2 = ld `sfun.2`;
      sfun_3 = force? sfun_2;
      checkMissing(sfun_3);
      return sfun_3;
    };
    r29 = dyn plot2(p11);
    check L26() else D18();
  D18():
    deopt 72 [r29];
  L26():
    plot3 = ldf plot;
    check L27() else D19();
  D19():
    deopt 74 [];
  L27():
    p12 = prom<V +>{
      sfun_4 = ld `sfun.2`;
      sfun_5 = force? sfun_4;
      checkMissing(sfun_5);
      return sfun_5;
    };
    p13 = prom<V +>{
      tt2 = ld tt;
      tt3 = force? tt2;
      checkMissing(tt3);
      return tt3;
    };
    r32 = dyn plot3[, xval, add, col](p12, p13, TRUE, "orange");
    check L28() else D20();
  D20():
    deopt 82 [r32];
  L28():
    plot4 = ldf plot;
    check L29() else D21();
  D21():
    deopt 84 [];
  L29():
    p14 = prom<V +>{
      sfun4 = ld sfun1;
      sfun5 = force? sfun4;
      checkMissing(sfun5);
      return sfun5;
    };
    r34 = dyn plot4(p14);
    check L30() else D22();
  D22():
    deopt 86 [r34];
  L30():
    lines = ldf lines;
    check L31() else D23();
  D23():
    deopt 88 [];
  L31():
    p15 = prom<V +>{
      sfun6 = ld sfun1;
      sfun7 = force? sfun6;
      checkMissing(sfun7);
      return sfun7;
    };
    p16 = prom<V +>{
      tt4 = ld tt;
      tt5 = force? tt4;
      checkMissing(tt5);
      return tt5;
    };
    r37 = dyn lines[, xval, `col.hor`](p15, p16, "coral");
    check L32() else D24();
  D24():
    deopt 94 [r37];
  L32():
    plot5 = ldf plot;
    check L33() else D25();
  D25():
    deopt 96 [];
  L33():
    p17 = prom<V +>{
      sfun8 = ld sfun0;
      sfun9 = force? sfun8;
      checkMissing(sfun9);
      return sfun9;
    };
    r39 = dyn plot5[, verticals, main](p17, FALSE, "stepfun(x, y0, f=f)  for f = 0, .2, 1");
    check L34() else D26();
  D26():
    deopt 102 [r39];
  L34():
    s = toForSeq(<int 1, 2, 3>);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L35() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    lines1 = ldf lines;
    check L36() else D27();
  L35():
    legend = ldf legend;
    check L38() else D29();
  D27():
    deopt 106 [i2];
  D29():
    deopt 115 [];
  L36():
    p20 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r41):
      c3 = `is.object`(r41);
      if c3 then L4() else L5(r41);
    L2():
      sfun10 = ld sfun0;
      sfun11 = force? sfun10;
      checkMissing(sfun11);
      sfun_6 = ld `sfun.2`;
      sfun_7 = force? sfun_6;
      checkMissing(sfun_7);
      stepfun3 = ldf stepfun;
      p18 = prom<V +>{
        return <int 1, 2, 3>;
      };
      p19 = prom<V +>{
        y6 = ld y0;
        y7 = force? y6;
        checkMissing(y7);
        return y7;
      };
      r44 = dyn stepfun3[, , f](p18, p19, 1.0);
      list = ldf list in base;
      r45 = dyn list(sfun11, sfun_7, r44);
      goto L0(r45);
    L3():
      r40 = dyn base3(<sym sfun0>, <sym sfun.2>, <lang stepfun(`:`(1.0, 3.0), y0, f=1.0)>);
      goto L0(r40);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[[", r41);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r47):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r48 = dyn __(r47, i6);
      goto L1(r48);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p21 = prom<V +>{
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      return i8;
    };
    r51 = dyn lines1[, col](p20, p21);
    check L37() else D28();
  L38():
    p23 = prom<V +>{
      paste = ldf paste;
      p22 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r53):
        return r53;
      L1():
        c4 = ldf c in base;
        r54 = dyn c4(0.0, 0.2, 1.0);
        goto L0(r54);
      L2():
        r52 = dyn base4(0.0, 0.2, 1.0);
        goto L0(r52);
      };
      r56 = dyn paste("f =", p22);
      return r56;
    };
    p24 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r59 = dyn legend[, , , col, lty, `y.intersp`](2.5, 1.9, p23, p24, 1.0, 1.0);
    check L39() else D30();
  D28():
    deopt 110 [i2, r51];
  D30():
    deopt 125 [r59];
  L37():
    goto L2(i2);
  L39():
    par1 = ldf par;
    check L40() else D31();
  D31():
    deopt 127 [];
  L40():
    p25 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r61 = dyn par1(p25);
    check L41() else D32();
  D32():
    deopt 129 [r61];
  L41():
    plot6 = ldf plot;
    check L42() else D33();
  D33():
    deopt 131 [];
  L42():
    p26 = prom<V +>{
      sfun12 = ld sfun0;
      sfun13 = force? sfun12;
      checkMissing(sfun13);
      return sfun13;
    };
    p27 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r64):
      return r64;
    L1():
      c5 = ldf c in base;
      r65 = dyn c5(0.0, 5.0);
      goto L0(r65);
    L2():
      r63 = dyn base5(0.0, 5.0);
      goto L0(r63);
    };
    p28 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r68):
      return r68;
    L1():
      c6 = ldf c in base;
      r69 = dyn c6(0.0, 3.5);
      goto L0(r69);
    L2():
      r67 = dyn base6(0.0, 3.5);
      goto L0(r67);
    };
    r71 = dyn plot6[, xlim, ylim, main](p26, p27, p28, "plot(stepfun(*), xlim= . , ylim = .)");
    check L43() else D34();
  D34():
    deopt 139 [r71];
  L43():
    plot_stepfun = ldf `plot.stepfun`;
    check L44() else D35();
  D35():
    deopt 141 [];
  L44():
    p29 = prom<V +>{
      rt = ldf rt;
      r72 = dyn rt[, df](50.0, 3.0);
      return r72;
    };
    r74 = dyn plot_stepfun[, `col.vert`](p29, "gray20");
    check L45() else D36();
  D36():
    deopt 145 [r74];
  L45():
    popenv;
    return r74;
  }
}
fun inner3183345136(x, xval, xlim, ylim, xlab, ylab, main, add, verticals, `do.points`, pch, col, `col.points`, `cex.points`, `col.hor`, `col.vert`, lty, lwd, `...`) {
  (reg x:*, reg xval:*, reg xlim:*, reg ylim:*, reg xlab:*, reg ylab:*, reg main:*, reg add:*, reg verticals:*, reg do_points:*, reg pch:*, reg col:*, reg col_points:*, reg cex_points:*, reg col_hor:*, reg col_vert:*, reg lty:*, reg lwd:*, reg ddd:dots) -+> V { var x:*, var xval:*, var xlim:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg y:*, reg y1:V, reg Fn_kn:*, reg Fn_kn1:V, reg c:cls, reg r4:V, reg range:cls, reg r5:V, reg p:p(V +), var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var verticals:*, reg verticals_isMissing:L, reg verticals_orDefault:*, var `do.points`:*, reg do_points_isMissing:L, reg do_points_orDefault:*, reg n:*, reg n1:V, reg r7:V, reg p1:p(V +), var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, reg par:cls, reg r9:V, reg p2:p(V +), var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par1:cls, reg r11:V, reg p3:p(V +), var `col.points`:*, reg col_points_isMissing:L, reg col_points_orDefault:*, reg col1:*, reg col2:V, reg p4:p(V +), var `cex.points`:*, reg cex_points_isMissing:L, reg cex_points_orDefault:*, reg par2:cls, reg r14:V, reg p5:p(V +), var `col.hor`:*, reg col_hor_isMissing:L, reg col_hor_orDefault:*, reg col3:*, reg col4:V, reg p6:p(V +), var `col.vert`:*, reg col_vert_isMissing:L, reg col_vert_orDefault:*, reg col5:*, reg col6:V, reg p7:p(V +), var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par3:cls, reg r18:V, reg p8:p(V +), var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, reg par4:cls, reg r20:V, reg p9:p(V +), var `...`:dots?, reg is_stepfun:cls, reg x1:*, reg x2:V, reg p10:p(V +), reg r23:V, reg r24:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r27:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg substitute:cls, reg r30:V, reg ecdf:cls, reg x5:*, reg x6:V, reg p11:p(V +), reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg call:cls, reg r35:V, reg l:*, reg attr__:cls, reg r36:V, reg r37:V, reg stop:cls, reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg missing:cls, reg r42:V, reg c3:L, reg deparse:cls, reg ____:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg x7:*, reg x8:V, reg attr:cls, reg r45:V, reg p12:p(V +), reg sys_call:cls, reg r47:V, reg p13:p(V +), reg r49:V, reg p14:p(V +), reg r51:V, reg knots:cls, reg x9:*, reg x10:V, reg p15:p(V +), reg r54:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg missing1:cls, reg r57:V, reg c4:L, reg knF:*, reg knF1:V, reg knF2:V, reg sort:cls, reg xval1:*, reg xval2:V, reg p16:p(V +), reg r59:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r60:V, reg r61:V, reg missing2:cls, reg r62:V, reg c5:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r63:V, reg r64:V, reg xval3:*, reg xval4:V, reg range1:cls, reg r65:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg xval5:*, reg xval6:V, reg length:cls, reg r68:V, reg r69:V, reg c6:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg r71:V, reg diff:cls, reg rx:*, reg rx1:V, reg p17:p(V +), reg r73:V, reg r74:V, reg median:cls, reg diff1:cls, reg xval7:*, reg xval8:V, reg p18:p(V +), reg r76:V, reg p19:p(V +), reg r78:V, reg max:cls, reg r79:V, reg r80:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r81:V, reg r82:V, reg xval9:*, reg xval10:V, reg abs:cls, reg r83:V, reg r84:V, reg rx2:*, reg rx3:V, reg dr:*, reg dr1:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r85:V, reg rx6:V, reg dr4:V, reg r86:V, reg c7:cls, reg r87:V, reg r88:V, reg r89:V, reg diff2:cls, reg xlim1:*, reg xlim2:V, reg p20:p(V +), reg r92:V, reg xval11:*, reg xval12:V, reg c8:L, reg xval14:V, reg dr5:V, reg dc:L, reg dx:V, reg dx1:V, reg xlim3:*, reg xlim4:V, reg c9:L, reg xval16:V, reg xlim6:V, reg dr7:V, reg dc1:L, reg dx2:V, reg xval18:V, reg dx3:V, reg __:cls, reg r93:V, reg dr9:*, reg dr10:V, reg r94:V, reg xval19:*, reg xval20:V, reg r95:V, reg xval21:*, reg xval22:V, reg xlim7:*, reg xlim8:V, reg c10:L, reg xval25:V, reg r97:V, reg xval26:V, reg xlim10:V, reg dr11:V, reg dc2:L, reg dx4:V, reg xval29:V, reg r99:V, reg xval30:V, reg dx5:V, reg __1:cls, reg r100:V, reg dr13:*, reg dr14:V, reg r101:V, reg r102:V, reg r103:V, reg __2:cls, reg r104:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r105:V, reg r106:V, reg xlim11:*, reg xlim12:V, reg c11:L, reg xlim14:V, reg dr15:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r107:V, reg dr17:*, reg dr18:V, reg r108:V, reg xval31:*, reg xval32:V, reg xlim15:*, reg xlim16:V, reg c12:L, reg xlim18:V, reg dr19:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r109:V, reg dr21:*, reg dr22:V, reg r110:V, reg c13:cls, reg r111:V, reg ti:*, reg ti1:V, reg c14:L, reg ti3:V, reg dr23:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r112:V, reg ti6:V, reg r113:V, reg ti7:*, reg ti8:V, reg length1:cls, reg r114:V, reg r115:V, reg __5:cls, reg r116:V, reg ti9:*, reg ti10:V, reg c15:L, reg ti12:V, reg dr25:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r117:V, reg x11:cls, reg ti_l:*, reg ti_l1:V, reg ti_r:*, reg ti_r1:V, reg r118:V, reg r119:V, reg p21:p(V +), reg r121:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r122:V, reg r123:V, reg y2:*, reg y3:V, reg length2:cls, reg r124:V, reg x12:cls, reg xval33:*, reg xval34:V, reg p22:p(V +), reg r126:V, reg dev_hold:cls, reg r127:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r128:V, reg on_exit:cls, reg r130:V, reg add1:*, reg add2:V, reg c16:L, reg segments:cls, reg ti_l2:*, reg ti_l3:V, reg p23:p(V +), reg y4:*, reg y5:V, reg p24:p(V +), reg ti_r2:*, reg ti_r3:V, reg p25:p(V +), reg y6:*, reg y7:V, reg p26:p(V +), reg col_hor1:*, reg col_hor2:V, reg p27:p(V +), reg lty1:*, reg lty2:V, reg p28:p(V +), reg lwd1:*, reg lwd2:V, reg p29:p(V +), reg ddd1:dots?, reg r138:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r140:V, reg r141:V, reg missing3:cls, reg r142:V, reg c17:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r143:V, reg r144:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r145:V, reg r146:V, reg y8:*, reg y9:V, reg Fn_kn2:*, reg Fn_kn3:V, reg c18:cls, reg r147:V, reg range2:cls, reg r148:V, reg plot:cls, reg xlim19:*, reg xlim20:V, reg p30:p(V +), reg ylim1:*, reg ylim2:V, reg p31:p(V +), reg xlab1:*, reg xlab2:V, reg p32:p(V +), reg ylab1:*, reg ylab2:V, reg p33:p(V +), reg main1:*, reg main2:V, reg p34:p(V +), reg ddd2:dots?, reg r155:V, reg segments1:cls, reg ti_l4:*, reg ti_l5:V, reg p35:p(V +), reg y10:*, reg y11:V, reg p36:p(V +), reg ti_r4:*, reg ti_r5:V, reg p37:p(V +), reg y12:*, reg y13:V, reg p38:p(V +), reg col_hor3:*, reg col_hor4:V, reg p39:p(V +), reg lty3:*, reg lty4:V, reg p40:p(V +), reg lwd3:*, reg lwd4:V, reg p41:p(V +), reg r163:V, reg do_points1:*, reg do_points2:V, reg c19:L, reg points:cls, reg xval35:*, reg xval36:V, reg p42:p(V +), reg Fn_kn4:*, reg Fn_kn5:V, reg p43:p(V +), reg pch1:*, reg pch2:V, reg p44:p(V +), reg col_points1:*, reg col_points2:V, reg p45:p(V +), reg cex_points1:*, reg cex_points2:V, reg p46:p(V +), reg r169:V, reg verticals1:*, reg verticals2:V, reg c20:L, reg segments2:cls, reg xval37:*, reg xval38:V, reg p47:p(V +), reg y14:*, reg y15:V, reg c21:L, reg y17:V, reg dr27:V, reg dc7:L, reg dx14:V, reg dx15:V, reg n2:*, reg n3:V, reg r172:V, reg __7:cls, reg r173:V, reg p48:p(V +), reg xval39:*, reg xval40:V, reg p49:p(V +), reg y18:*, reg y19:V, reg c22:L, reg y21:V, reg dr29:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __8:cls, reg r176:V, reg p50:p(V +), reg col_vert1:*, reg col_vert2:V, reg p51:p(V +), reg lty5:*, reg lty6:V, reg p52:p(V +), reg lwd5:*, reg lwd6:V, reg p53:p(V +), reg r181:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r183:V, reg r184:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r185:V, reg r186:V, reg ti13:*, reg ti14:V, reg y22:*, reg y23:V, reg list:cls, reg r187:V, reg invisible:cls, reg r188:V |
    mkenv;
    st x = x;
    st xval = xval;
    st xlim = xlim;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L0() else L1(ylim);
  L0():
    p = prom<V +>{
      sym = ldf range;
      base = ldf range in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(<lang c(y, Fn.kn)>);
      goto L0(r);
    L1(r3):
      range = ldf range in base;
      r5 = dyn range(r3);
      goto L0(r5);
    L4():
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      Fn_kn = ld `Fn.kn`;
      Fn_kn1 = force? Fn_kn;
      checkMissing(Fn_kn1);
      c = ldf c in base;
      r4 = dyn c(y1, Fn_kn1);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym y>, <sym Fn.kn>);
      goto L1(r2);
    };
    goto L1(p);
  L1(ylim_orDefault):
    st ylim = ylim_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L2("x") else L2(xlab);
  L2(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L3("f(x)") else L3(ylab);
  L3(ylab_orDefault):
    st ylab = ylab_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L4(NULL) else L4(main);
  L4(main_orDefault):
    st main = main_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L5(FALSE) else L5(add);
  L5(add_orDefault):
    st add = add_orDefault;
    verticals_isMissing = missing.0(verticals);
    if verticals_isMissing then L6(TRUE) else L6(verticals);
  L6(verticals_orDefault):
    st verticals = verticals_orDefault;
    do_points_isMissing = missing.0(do_points);
    if do_points_isMissing then L7() else L8(do_points);
  L7():
    p1 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      r7 = `<`(n1, 1000.0);
      visible.0();
      return r7;
    };
    goto L8(p1);
  L8(do_points_orDefault):
    st `do.points` = do_points_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L9() else L10(pch);
  L9():
    p2 = prom<V +>{
      par = ldf par;
      r9 = dyn par("pch");
      return r9;
    };
    goto L10(p2);
  L10(pch_orDefault):
    st pch = pch_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L11() else L12(col);
  L11():
    p3 = prom<V +>{
      par1 = ldf par;
      r11 = dyn par1("col");
      return r11;
    };
    goto L12(p3);
  L12(col_orDefault):
    st col = col_orDefault;
    col_points_isMissing = missing.0(col_points);
    if col_points_isMissing then L13() else L14(col_points);
  L13():
    p4 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    goto L14(p4);
  L14(col_points_orDefault):
    st `col.points` = col_points_orDefault;
    cex_points_isMissing = missing.0(cex_points);
    if cex_points_isMissing then L15() else L16(cex_points);
  L15():
    p5 = prom<V +>{
      par2 = ldf par;
      r14 = dyn par2("cex");
      return r14;
    };
    goto L16(p5);
  L16(cex_points_orDefault):
    st `cex.points` = cex_points_orDefault;
    col_hor_isMissing = missing.0(col_hor);
    if col_hor_isMissing then L17() else L18(col_hor);
  L17():
    p6 = prom<V +>{
      col3 = ld col;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    goto L18(p6);
  L18(col_hor_orDefault):
    st `col.hor` = col_hor_orDefault;
    col_vert_isMissing = missing.0(col_vert);
    if col_vert_isMissing then L19() else L20(col_vert);
  L19():
    p7 = prom<V +>{
      col5 = ld col;
      col6 = force? col5;
      checkMissing(col6);
      return col6;
    };
    goto L20(p7);
  L20(col_vert_orDefault):
    st `col.vert` = col_vert_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L21() else L22(lty);
  L21():
    p8 = prom<V +>{
      par3 = ldf par;
      r18 = dyn par3("lty");
      return r18;
    };
    goto L22(p8);
  L22(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L23() else L24(lwd);
  L23():
    p9 = prom<V +>{
      par4 = ldf par;
      r20 = dyn par4("lwd");
      return r20;
    };
    goto L24(p9);
  L24(lwd_orDefault):
    st lwd = lwd_orDefault;
    st `...` = ddd;
    is_stepfun = ldf `is.stepfun`;
    check L72() else D0();
  D0():
    deopt 1 [];
  L72():
    p10 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r23 = dyn is_stepfun(p10);
    check L73() else D1();
  D1():
    deopt 3 [r23];
  L73():
    r24 = `!`(r23);
    c1 = `as.logical`(r24);
    if c1 then L74() else L25();
  L25():
    goto L31();
  L31():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L92() else L93();
  L74():
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L75() else L76();
  L26(r26):
    c2 = `as.logical`(r26);
    if c2 then L79() else L27();
  L32(r41):
    c3 = `as.logical`(r41);
    if c3 then L94() else L33();
  L75():
    x3 = ld x;
    check L77() else D2();
  L76():
    r25 = dyn base2(<sym x>);
    goto L26(r25);
  L92():
    missing = ldf missing in base;
    r42 = dyn missing(<sym main>);
    goto L32(r42);
  L93():
    r40 = dyn base5(<sym main>);
    goto L32(r40);
  D2():
    deopt 7 [x3];
  L27():
    stop = ldf stop;
    check L89() else D8();
  L30(r37):
    goto L31();
  L33():
    goto L34();
  L34():
    knots = ldf knots;
    check L98() else D12();
  L77():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r27 = dyn is_numeric(x4);
    check L78() else D3();
  L79():
    sym3 = ldf substitute;
    base3 = ldf substitute in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L80() else L81();
  L94():
    deparse = ldf deparse;
    check L95() else D10();
  D3():
    deopt 10 [r27];
  D8():
    deopt 30 [];
  D10():
    deopt 39 [];
  D12():
    deopt 46 [];
  L28(r29):
    st sarg = r29;
    ecdf = ldf ecdf;
    check L82() else D4();
  L78():
    goto L26(r27);
  L80():
    substitute = ldf substitute in base;
    r30 = dyn substitute(<sym x>);
    goto L28(r30);
  L81():
    r28 = dyn base3(<sym x>);
    goto L28(r28);
  L89():
    r38 = dyn stop("'plot.stepfun' called with wrong type of argument 'x'");
    check L90() else D9();
  L95():
    p14 = prom<V +>{
      ____ = ldf `%||%`;
      p12 = prom<V +>{
        sym6 = ldf attr;
        base6 = ldf attr in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r44):
        return r44;
      L1():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        attr = ldf attr in base;
        r45 = dyn attr(x8, "call");
        goto L0(r45);
      L2():
        r43 = dyn base6(<sym x>, "call");
        goto L0(r43);
      };
      p13 = prom<V +>{
        sys_call = ldf `sys.call`;
        r47 = dyn sys_call();
        return r47;
      };
      r49 = dyn ____(p12, p13);
      return r49;
    };
    r51 = dyn deparse(p14);
    check L96() else D11();
  L98():
    p15 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r54 = dyn knots(p15);
    check L99() else D13();
  D4():
    deopt 16 [];
  D9():
    deopt 32 [r38];
  D11():
    deopt 41 [r51];
  D13():
    deopt 48 [r54];
  L82():
    p11 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r32 = dyn ecdf(p11);
    check L83() else D5();
  L90():
    goto L30(r38);
  L96():
    st main = r51;
    goto L34();
  L99():
    st knF = r54;
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  D5():
    deopt 18 [r32];
  L35(r56):
    c4 = `as.logical`(r56);
    if c4 then L102() else L36();
  L83():
    st x = r32;
    sym4 = ldf call;
    base4 = ldf call in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L84() else L85();
  L100():
    missing1 = ldf missing in base;
    r57 = dyn missing1(<sym xval>);
    goto L35(r57);
  L101():
    r55 = dyn base7(<sym xval>);
    goto L35(r55);
  L29(r34):
    l = ld x;
    attr__ = ldf `attr<-`;
    check L86() else D6();
  L36():
    sort = ldf sort;
    check L105() else D15();
  L37(knF2):
    st xval = knF2;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L107() else L108();
  L84():
    call = ldf call in base;
    r35 = dyn call("ecdf", <sym sarg>);
    goto L29(r35);
  L85():
    r33 = dyn base4("ecdf", <sym sarg>);
    goto L29(r33);
  L102():
    knF = ld knF;
    check L103() else D14();
  D6():
    deopt 24 [r34, l, r34];
  D14():
    deopt 53 [knF];
  D15():
    deopt 56 [];
  L38(r61):
    c5 = `as.logical`(r61);
    if c5 then L109() else L39();
  L86():
    r36 = dyn attr__(l, NULL, "call", r34);
    check L87() else D7();
  L103():
    knF1 = force? knF;
    checkMissing(knF1);
    goto L37(knF1);
  L105():
    p16 = prom<V +>{
      xval1 = ld xval;
      xval2 = force? xval1;
      checkMissing(xval2);
      return xval2;
    };
    r59 = dyn sort(p16);
    check L106() else D16();
  L107():
    missing2 = ldf missing in base;
    r62 = dyn missing2(<sym xlim>);
    goto L38(r62);
  L108():
    r60 = dyn base8(<sym xlim>);
    goto L38(r60);
  D7():
    deopt 27 [r34, r36];
  D16():
    deopt 58 [r59];
  L39():
    diff2 = ldf diff;
    check L137() else D31();
  L47():
    xval11 = ld xval;
    check L139() else D33();
  L87():
    st x = r36;
    goto L30(r34);
  L106():
    goto L37(r59);
  L109():
    sym9 = ldf range;
    base9 = ldf range in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L110() else L111();
  D31():
    deopt 114 [];
  D33():
    deopt 118 [xval11];
  L40(r64):
    st rx = r64;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L114() else L115();
  L110():
    xval3 = ld xval;
    check L112() else D17();
  L111():
    r63 = dyn base9(<sym xval>);
    goto L40(r63);
  L137():
    p20 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    r92 = dyn diff2(p20);
    check L138() else D32();
  L139():
    xval12 = force? xval11;
    checkMissing(xval12);
    c8 = `is.object`(xval12);
    if c8 then L140() else L141(xval12);
  D17():
    deopt 65 [xval3];
  D32():
    deopt 116 [r92];
  L41(r67):
    r69 = `>`(r67, 1);
    c6 = `as.logical`(r69);
    if c6 then L118() else L42();
  L48(dx1):
    st xval = dx1;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L155() else L156();
  L112():
    xval4 = force? xval3;
    checkMissing(xval4);
    range1 = ldf range in base;
    r65 = dyn range1(xval4);
    check L113() else D18();
  L114():
    xval5 = ld xval;
    check L116() else D19();
  L115():
    r66 = dyn base10(<sym xval>);
    goto L41(r66);
  L138():
    st dr = r92;
    goto L47();
  L140():
    dr5 = tryDispatchBuiltin.1("[", xval12);
    dc = getTryDispatchBuiltinDispatched(dr5);
    if dc then L142() else L141(dr5);
  L141(xval14):
    xlim3 = ld xlim;
    check L143() else D34();
  D18():
    deopt 68 [r65];
  D19():
    deopt 72 [xval5];
  D34():
    deopt 120 [xval14, xlim3];
  L42():
    sym12 = ldf abs;
    base12 = ldf abs in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L127() else L128();
  L44(r80):
    st dr = r80;
    rx2 = ld rx;
    check L131() else D28();
  L51(r106):
    st ti = r106;
    ti = ld ti;
    check L169() else D46();
  L113():
    goto L40(r65);
  L116():
    xval6 = force? xval5;
    checkMissing(xval6);
    length = ldf length in base;
    r68 = dyn length(xval6);
    check L117() else D20();
  L118():
    sym11 = ldf max;
    base11 = ldf max in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L119() else L120();
  L142():
    dx = getTryDispatchBuiltinValue(dr5);
    goto L48(dx);
  L143():
    xlim4 = force? xlim3;
    checkMissing(xlim4);
    c9 = `is.object`(xlim4);
    if c9 then L144() else L145(xval14, xlim4);
  L155():
    xlim11 = ld xlim;
    check L157() else D40();
  L156():
    r105 = dyn base14(<lang `-`(`[`(xlim, 1), dr)>, <sym xval>, <lang `+`(`[`(xlim, 2), dr)>);
    goto L51(r105);
  D20():
    deopt 75 [r68];
  D28():
    deopt 101 [rx2];
  D40():
    deopt 142 [xlim11];
  D46():
    deopt 161 [ti];
  L43(r71):
    goto L44(r71);
  L45(r82):
    r84 = `/`(r82, 16.0);
    goto L44(r84);
  L49(xval18, dx3):
    dr9 = ld dr;
    check L147() else D35();
  L117():
    goto L41(r68);
  L119():
    diff = ldf diff;
    check L121() else D21();
  L120():
    r70 = dyn base11(<lang `*`(0.08, diff(rx))>, <lang median(diff(xval))>);
    goto L43(r70);
  L127():
    xval9 = ld xval;
    check L129() else D26();
  L128():
    r81 = dyn base12(<sym xval>);
    goto L45(r81);
  L131():
    rx3 = force? rx2;
    checkMissing(rx3);
    dr = ld dr;
    check L132() else D29();
  L144():
    dr7 = tryDispatchBuiltin.1("[", xlim4);
    dc1 = getTryDispatchBuiltinDispatched(dr7);
    if dc1 then L146() else L145(xval14, dr7);
  L145(xval16, xlim6):
    __ = ldf `[` in base;
    r93 = dyn __(xlim6, 1);
    goto L49(xval16, r93);
  L157():
    xlim12 = force? xlim11;
    checkMissing(xlim12);
    c11 = `is.object`(xlim12);
    if c11 then L158() else L159(xlim12);
  L169():
    ti1 = force? ti;
    checkMissing(ti1);
    c14 = `is.object`(ti1);
    if c14 then L170() else L171(ti1);
  D21():
    deopt 82 [0.08];
  D26():
    deopt 94 [xval9];
  D29():
    deopt 102 [rx3, dr];
  D35():
    deopt 124 [xval18, dx3, dr9];
  L52(dx7):
    dr17 = ld dr;
    check L161() else D41();
  L54(dx11):
    st `ti.l` = dx11;
    ti9 = ld ti;
    check L177() else D49();
  L121():
    p17 = prom<V +>{
      rx = ld rx;
      rx1 = force? rx;
      checkMissing(rx1);
      return rx1;
    };
    r73 = dyn diff(p17);
    check L122() else D22();
  L129():
    xval10 = force? xval9;
    checkMissing(xval10);
    abs = ldf abs in base;
    r83 = dyn abs(xval10);
    check L130() else D27();
  L132():
    dr1 = force? dr;
    checkMissing(dr1);
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L133() else L134();
  L146():
    dx2 = getTryDispatchBuiltinValue(dr7);
    goto L49(xval14, dx2);
  L147():
    dr10 = force? dr9;
    checkMissing(dr10);
    r94 = `-`(dx3, dr10);
    xval19 = ld xval;
    check L148() else D36();
  L158():
    dr15 = tryDispatchBuiltin.1("[", xlim12);
    dc3 = getTryDispatchBuiltinDispatched(dr15);
    if dc3 then L160() else L159(dr15);
  L159(xlim14):
    __3 = ldf `[` in base;
    r107 = dyn __3(xlim14, 1);
    goto L52(r107);
  L170():
    dr23 = tryDispatchBuiltin.1("[", ti1);
    dc5 = getTryDispatchBuiltinDispatched(dr23);
    if dc5 then L172() else L171(dr23);
  L171(ti3):
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L173() else L174();
  D22():
    deopt 84 [0.08, r73];
  D27():
    deopt 97 [r83];
  D36():
    deopt 126 [xval18, r94, xval19];
  D41():
    deopt 146 [dx7, dr17];
  D49():
    deopt 172 [ti9];
  L46(rx6, dr4, r86):
    r88 = `*`(dr4, r86);
    r89 = `+`(rx6, r88);
    st xlim = r89;
    goto L47();
  L55(ti6, r113):
    r115 = `-`(<missing>, r113);
    __5 = ldf `[` in base;
    r116 = dyn __5(ti6, r115);
    goto L54(r116);
  L122():
    r74 = `*`(0.08, r73);
    median = ldf median;
    check L123() else D23();
  L130():
    goto L45(r83);
  L133():
    c7 = ldf c in base;
    r87 = dyn c7(-1.0, 1.0);
    check L135() else D30();
  L134():
    r85 = dyn base13(<lang `-`(1.0)>, 1.0);
    goto L46(rx3, dr1, r85);
  L148():
    xval20 = force? xval19;
    checkMissing(xval20);
    r95 = `<=`(r94, xval20);
    xval21 = ld xval;
    check L149() else D37();
  L160():
    dx6 = getTryDispatchBuiltinValue(dr15);
    goto L52(dx6);
  L161():
    dr18 = force? dr17;
    checkMissing(dr18);
    r108 = `-`(dx7, dr18);
    xval31 = ld xval;
    check L162() else D42();
  L172():
    dx10 = getTryDispatchBuiltinValue(dr23);
    goto L54(dx10);
  L173():
    ti7 = ld ti;
    check L175() else D47();
  L174():
    r112 = dyn base15(<sym ti>);
    goto L55(ti3, r112);
  L177():
    ti10 = force? ti9;
    checkMissing(ti10);
    c15 = `is.object`(ti10);
    if c15 then L178() else L179(ti10);
  D23():
    deopt 87 [];
  D30():
    deopt 109 [rx3, dr1, r87];
  D37():
    deopt 128 [xval18, r95, xval21];
  D42():
    deopt 149 [xval31];
  D47():
    deopt 165 [ti3, ti7];
  L56(dx13):
    st `ti.r` = dx13;
    x11 = ldf x;
    check L181() else D50();
  L123():
    p19 = prom<V +>{
      diff1 = ldf diff;
      p18 = prom<V +>{
        xval7 = ld xval;
        xval8 = force? xval7;
        checkMissing(xval8);
        return xval8;
      };
      r76 = dyn diff1(p18);
      return r76;
    };
    r78 = dyn median(p19);
    check L124() else D24();
  L135():
    goto L46(rx3, dr1, r87);
  L149():
    xval22 = force? xval21;
    checkMissing(xval22);
    xlim7 = ld xlim;
    check L150() else D38();
  L162():
    xval32 = force? xval31;
    checkMissing(xval32);
    xlim15 = ld xlim;
    check L163() else D43();
  L175():
    ti8 = force? ti7;
    checkMissing(ti8);
    length1 = ldf length in base;
    r114 = dyn length1(ti8);
    check L176() else D48();
  L178():
    dr25 = tryDispatchBuiltin.1("[", ti10);
    dc6 = getTryDispatchBuiltinDispatched(dr25);
    if dc6 then L180() else L179(dr25);
  L179(ti12):
    __6 = ldf `[` in base;
    r117 = dyn __6(ti12, -1);
    goto L56(r117);
  D24():
    deopt 89 [r78];
  D38():
    deopt 129 [xval18, r95, xval22, xlim7];
  D43():
    deopt 151 [xlim15];
  D48():
    deopt 168 [ti3, r114];
  D50():
    deopt 179 [];
  L124():
    max = ldf max in base;
    r79 = dyn max(r74, r78);
    check L125() else D25();
  L150():
    xlim8 = force? xlim7;
    checkMissing(xlim8);
    c10 = `is.object`(xlim8);
    if c10 then L151() else L152(xval18, r95, xval22, xlim8);
  L163():
    xlim16 = force? xlim15;
    checkMissing(xlim16);
    c12 = `is.object`(xlim16);
    if c12 then L164() else L165(xlim16);
  L176():
    goto L55(ti3, r114);
  L180():
    dx12 = getTryDispatchBuiltinValue(dr25);
    goto L56(dx12);
  L181():
    p21 = prom<V +>{
      ti_l = ld `ti.l`;
      ti_l1 = force? ti_l;
      checkMissing(ti_l1);
      ti_r = ld `ti.r`;
      ti_r1 = force? ti_r;
      checkMissing(ti_r1);
      r118 = `+`(ti_l1, ti_r1);
      r119 = `*`(0.5, r118);
      return r119;
    };
    r121 = dyn x11(p21);
    check L182() else D51();
  D25():
    deopt 91 [r79];
  D51():
    deopt 181 [r121];
  L50(xval29, r99, xval30, dx5):
    dr13 = ld dr;
    check L154() else D39();
  L53(dx9):
    dr21 = ld dr;
    check L167() else D44();
  L125():
    goto L43(r79);
  L151():
    dr11 = tryDispatchBuiltin.1("[", xlim8);
    dc2 = getTryDispatchBuiltinDispatched(dr11);
    if dc2 then L153() else L152(xval18, r95, xval22, dr11);
  L152(xval25, r97, xval26, xlim10):
    __1 = ldf `[` in base;
    r100 = dyn __1(xlim10, 2);
    goto L50(xval25, r97, xval26, r100);
  L164():
    dr19 = tryDispatchBuiltin.1("[", xlim16);
    dc4 = getTryDispatchBuiltinDispatched(dr19);
    if dc4 then L166() else L165(dr19);
  L165(xlim18):
    __4 = ldf `[` in base;
    r109 = dyn __4(xlim18, 2);
    goto L53(r109);
  L182():
    st y = r121;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L183() else L184();
  D39():
    deopt 133 [xval29, r99, xval30, dx5, dr13];
  D44():
    deopt 155 [dx9, dr21];
  L57(r123):
    st n = r123;
    x12 = ldf x;
    check L187() else D54();
  L153():
    dx4 = getTryDispatchBuiltinValue(dr11);
    goto L50(xval18, r95, xval22, dx4);
  L154():
    dr14 = force? dr13;
    checkMissing(dr14);
    r101 = `+`(dx5, dr14);
    r102 = `<=`(xval30, r101);
    r103 = `&&`(r99, r102);
    __2 = ldf `[` in base;
    r104 = dyn __2(xval29, r103);
    goto L48(r104);
  L166():
    dx8 = getTryDispatchBuiltinValue(dr19);
    goto L53(dx8);
  L167():
    dr22 = force? dr21;
    checkMissing(dr22);
    r110 = `+`(dx9, dr22);
    c13 = ldf c in base;
    r111 = dyn c13(r108, xval32, r110);
    check L168() else D45();
  L183():
    y2 = ld y;
    check L185() else D52();
  L184():
    r122 = dyn base16(<sym y>);
    goto L57(r122);
  D45():
    deopt 159 [r111];
  D52():
    deopt 185 [y2];
  D54():
    deopt 191 [];
  L168():
    goto L51(r111);
  L185():
    y3 = force? y2;
    checkMissing(y3);
    length2 = ldf length in base;
    r124 = dyn length2(y3);
    check L186() else D53();
  L187():
    p22 = prom<V +>{
      xval33 = ld xval;
      xval34 = force? xval33;
      checkMissing(xval34);
      return xval34;
    };
    r126 = dyn x12(p22);
    check L188() else D55();
  D53():
    deopt 188 [r124];
  D55():
    deopt 193 [r126];
  L186():
    goto L57(r124);
  L188():
    st `Fn.kn` = r126;
    dev_hold = ldf `dev.hold`;
    check L189() else D56();
  D56():
    deopt 196 [];
  L189():
    r127 = dyn dev_hold();
    check L190() else D57();
  D57():
    deopt 197 [r127];
  L190():
    sym17 = ldf `on.exit`;
    base17 = ldf `on.exit` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L191() else L192();
  L58():
    add1 = ld add;
    check L193() else D58();
  L191():
    on_exit = ldf `on.exit` in base;
    r130 = dyn on_exit(<lang dev.flush()>);
    goto L58();
  L192():
    r128 = dyn base17(<lang dev.flush()>);
    goto L58();
  D58():
    deopt 201 [add1];
  L193():
    add2 = force? add1;
    checkMissing(add2);
    c16 = `as.logical`(add2);
    if c16 then L194() else L59();
  L59():
    sym18 = ldf missing;
    base18 = ldf missing in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L198() else L199();
  L60():
    do_points1 = ld `do.points`;
    check L214() else D69();
  L194():
    segments = ldf segments;
    check L195() else D59();
  D59():
    deopt 204 [];
  D69():
    deopt 266 [do_points1];
  L61(r141):
    c17 = `as.logical`(r141);
    if c17 then L200() else L62();
  L195():
    p23 = prom<V +>{
      ti_l2 = ld `ti.l`;
      ti_l3 = force? ti_l2;
      checkMissing(ti_l3);
      return ti_l3;
    };
    p24 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p25 = prom<V +>{
      ti_r2 = ld `ti.r`;
      ti_r3 = force? ti_r2;
      checkMissing(ti_r3);
      return ti_r3;
    };
    p26 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p27 = prom<V +>{
      col_hor1 = ld `col.hor`;
      col_hor2 = force? col_hor1;
      checkMissing(col_hor2);
      return col_hor2;
    };
    p28 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p29 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    ddd1 = ld `...`;
    r138 = dyn segments[, , , , col, lty, lwd, `...`](p23, p24, p25, p26, p27, p28, p29, ddd1);
    check L196() else D60();
  L198():
    missing3 = ldf missing in base;
    r142 = dyn missing3(<sym ylim>);
    goto L61(r142);
  L199():
    r140 = dyn base18(<sym ylim>);
    goto L61(r140);
  L214():
    do_points2 = force? do_points1;
    checkMissing(do_points2);
    c19 = `as.logical`(do_points2);
    if c19 then L215() else L66();
  D60():
    deopt 216 [r138];
  L62():
    goto L65();
  L65():
    plot = ldf plot;
    check L210() else D65();
  L66():
    goto L67();
  L67():
    verticals1 = ld verticals;
    check L219() else D72();
  L196():
    goto L60();
  L200():
    sym19 = ldf range;
    base19 = ldf range in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L201() else L202();
  L215():
    points = ldf points;
    check L216() else D70();
  D65():
    deopt 236 [];
  D70():
    deopt 269 [];
  D72():
    deopt 281 [verticals1];
  L63(r144):
    st ylim = r144;
    goto L65();
  L201():
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L203() else L204();
  L202():
    r143 = dyn base19(<lang c(y, Fn.kn)>);
    goto L63(r143);
  L210():
    p30 = prom<V +>{
      xlim19 = ld xlim;
      xlim20 = force? xlim19;
      checkMissing(xlim20);
      return xlim20;
    };
    p31 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p32 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p33 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p34 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    ddd2 = ld `...`;
    r155 = dyn plot[, , type, xlim, ylim, xlab, ylab, main, `...`](NA_LGL, NA_LGL, "n", p30, p31, p32, p33, p34, ddd2);
    check L211() else D66();
  L216():
    p42 = prom<V +>{
      xval35 = ld xval;
      xval36 = force? xval35;
      checkMissing(xval36);
      return xval36;
    };
    p43 = prom<V +>{
      Fn_kn4 = ld `Fn.kn`;
      Fn_kn5 = force? Fn_kn4;
      checkMissing(Fn_kn5);
      return Fn_kn5;
    };
    p44 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    p45 = prom<V +>{
      col_points1 = ld `col.points`;
      col_points2 = force? col_points1;
      checkMissing(col_points2);
      return col_points2;
    };
    p46 = prom<V +>{
      cex_points1 = ld `cex.points`;
      cex_points2 = force? cex_points1;
      checkMissing(cex_points2);
      return cex_points2;
    };
    r169 = dyn points[, , pch, col, cex](p42, p43, p44, p45, p46);
    check L217() else D71();
  L219():
    verticals2 = force? verticals1;
    checkMissing(verticals2);
    c20 = `as.logical`(verticals2);
    if c20 then L220() else L68();
  D66():
    deopt 252 [r155];
  D71():
    deopt 278 [r169];
  L64(r146):
    range2 = ldf range in base;
    r148 = dyn range2(r146);
    check L208() else D64();
  L68():
    goto L69();
  L69():
    sym21 = ldf invisible;
    base21 = ldf invisible in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L224() else L225();
  L203():
    y8 = ld y;
    check L205() else D61();
  L204():
    r145 = dyn base20(<sym y>, <sym Fn.kn>);
    goto L64(r145);
  L211():
    segments1 = ldf segments;
    check L212() else D67();
  L217():
    goto L67();
  L220():
    segments2 = ldf segments;
    check L221() else D73();
  D61():
    deopt 224 [y8];
  D64():
    deopt 231 [r148];
  D67():
    deopt 254 [];
  D73():
    deopt 284 [];
  L70(r184):
    popenv;
    return r184;
  L205():
    y9 = force? y8;
    checkMissing(y9);
    Fn_kn2 = ld `Fn.kn`;
    check L206() else D62();
  L208():
    goto L63(r148);
  L212():
    p35 = prom<V +>{
      ti_l4 = ld `ti.l`;
      ti_l5 = force? ti_l4;
      checkMissing(ti_l5);
      return ti_l5;
    };
    p36 = prom<V +>{
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      return y11;
    };
    p37 = prom<V +>{
      ti_r4 = ld `ti.r`;
      ti_r5 = force? ti_r4;
      checkMissing(ti_r5);
      return ti_r5;
    };
    p38 = prom<V +>{
      y12 = ld y;
      y13 = force? y12;
      checkMissing(y13);
      return y13;
    };
    p39 = prom<V +>{
      col_hor3 = ld `col.hor`;
      col_hor4 = force? col_hor3;
      checkMissing(col_hor4);
      return col_hor4;
    };
    p40 = prom<V +>{
      lty3 = ld lty;
      lty4 = force? lty3;
      checkMissing(lty4);
      return lty4;
    };
    p41 = prom<V +>{
      lwd3 = ld lwd;
      lwd4 = force? lwd3;
      checkMissing(lwd4);
      return lwd4;
    };
    r163 = dyn segments1[, , , , col, lty, lwd](p35, p36, p37, p38, p39, p40, p41);
    check L213() else D68();
  L221():
    p47 = prom<V +>{
      xval37 = ld xval;
      xval38 = force? xval37;
      checkMissing(xval38);
      return xval38;
    };
    p48 = prom<V +>{
      y14 = ld y;
      y15 = force? y14;
      checkMissing(y15);
      c21 = `is.object`(y15);
      if c21 then L1() else L2(y15);
    L0(dx15):
      return dx15;
    L1():
      dr27 = tryDispatchBuiltin.1("[", y15);
      dc7 = getTryDispatchBuiltinDispatched(dr27);
      if dc7 then L3() else L2(dr27);
    L2(y17):
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r172 = `-`(<missing>, n3);
      __7 = ldf `[` in base;
      r173 = dyn __7(y17, r172);
      goto L0(r173);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr27);
      goto L0(dx14);
    };
    p49 = prom<V +>{
      xval39 = ld xval;
      xval40 = force? xval39;
      checkMissing(xval40);
      return xval40;
    };
    p50 = prom<V +>{
      y18 = ld y;
      y19 = force? y18;
      checkMissing(y19);
      c22 = `is.object`(y19);
      if c22 then L1() else L2(y19);
    L0(dx17):
      return dx17;
    L1():
      dr29 = tryDispatchBuiltin.1("[", y19);
      dc8 = getTryDispatchBuiltinDispatched(dr29);
      if dc8 then L3() else L2(dr29);
    L2(y21):
      __8 = ldf `[` in base;
      r176 = dyn __8(y21, -1);
      goto L0(r176);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr29);
      goto L0(dx16);
    };
    p51 = prom<V +>{
      col_vert1 = ld `col.vert`;
      col_vert2 = force? col_vert1;
      checkMissing(col_vert2);
      return col_vert2;
    };
    p52 = prom<V +>{
      lty5 = ld lty;
      lty6 = force? lty5;
      checkMissing(lty6);
      return lty6;
    };
    p53 = prom<V +>{
      lwd5 = ld lwd;
      lwd6 = force? lwd5;
      checkMissing(lwd6);
      return lwd6;
    };
    r181 = dyn segments2[, , , , col, lty, lwd](p47, p48, p49, p50, p51, p52, p53);
    check L222() else D74();
  L224():
    sym22 = ldf list;
    base22 = ldf list in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L226() else L227();
  L225():
    r183 = dyn base21(<lang list(t=ti, y=y)>);
    goto L70(r183);
  D62():
    deopt 226 [Fn_kn2];
  D68():
    deopt 265 [r163];
  D74():
    deopt 295 [r181];
  L71(r186):
    invisible = ldf invisible in base;
    r188 = dyn invisible(r186);
    check L231() else D78();
  L206():
    Fn_kn3 = force? Fn_kn2;
    checkMissing(Fn_kn3);
    c18 = ldf c in base;
    r147 = dyn c18(y9, Fn_kn3);
    check L207() else D63();
  L213():
    goto L60();
  L222():
    goto L69();
  L226():
    ti13 = ld ti;
    check L228() else D75();
  L227():
    r185 = dyn base22[t, y](<sym ti>, <sym y>);
    goto L71(r185);
  D63():
    deopt 229 [r147];
  D75():
    deopt 302 [ti13];
  D78():
    deopt 311 [r188];
  L207():
    goto L64(r147);
  L228():
    ti14 = force? ti13;
    checkMissing(ti14);
    y22 = ld y;
    check L229() else D76();
  L231():
    goto L70(r188);
  D76():
    deopt 305 [y22];
  L229():
    y23 = force? y22;
    checkMissing(y23);
    list = ldf list in base;
    r187 = dyn list(ti14, y23);
    check L230() else D77();
  D77():
    deopt 309 [r187];
  L230():
    goto L71(r187);
  }
}