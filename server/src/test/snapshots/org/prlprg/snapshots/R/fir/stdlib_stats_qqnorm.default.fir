fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner997560305;
    st `qqnorm.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner997560305(y, ylim, main, xlab, ylab, `plot.it`, datax, `...`) {
  (reg y:*, reg ylim:*, reg main:*, reg xlab:*, reg ylab:*, reg plot_it:*, reg datax:*, reg ddd:dots) -+> V { var y:*, var ylim:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `plot.it`:*, reg plot_it_isMissing:L, reg plot_it_orDefault:*, var datax:*, reg datax_isMissing:L, reg datax_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg y1:*, reg y2:V, reg is_na:cls, reg r4:V, reg any:cls, reg r5:V, reg c:L, reg y3:*, reg y4:V, reg y5:*, reg y6:V, reg c1:L, reg y8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ina:*, reg ina1:V, reg r6:V, reg __:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:R, reg r12:V, reg y9:*, reg y10:V, reg length:cls, reg r13:V, reg r14:V, reg c2:L, reg stop:cls, reg r15:V, reg plot_it1:*, reg plot_it2:V, reg c3:L, reg c5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg c8:L, reg r18:V, reg missing:cls, reg r19:V, reg c9:L, reg c10:V, reg c12:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg y11:*, reg y12:V, reg range:cls, reg r22:V, reg qnorm:cls, reg ppoints:cls, reg n:*, reg n1:V, reg p:p(V +), reg r25:V, reg p1:p(V +), reg r27:V, reg c13:L, reg r29:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg order:cls, reg order1:cls, reg y13:*, reg y14:V, reg p2:p(V +), reg r31:V, reg p3:p(V +), reg r33:V, reg __1:cls, reg r34:V, reg has_na:*, reg has_na1:V, reg c14:L, reg x:*, reg x1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg ina2:*, reg ina3:V, reg length1:cls, reg r39:V, reg rep_int:cls, reg r40:V, reg y15:*, reg y16:V, reg l:*, reg c15:L, reg y18:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg ina4:*, reg ina5:V, reg r41:V, reg ___:cls, reg r42:V, reg yN:*, reg yN1:V, reg plot_it3:*, reg plot_it4:V, reg c16:L, reg datax1:*, reg datax2:V, reg c17:L, reg plot:cls, reg y21:*, reg y22:V, reg p4:p(V +), reg x2:*, reg x3:V, reg p5:p(V +), reg main1:*, reg main2:V, reg p6:p(V +), reg ylab1:*, reg ylab2:V, reg p7:p(V +), reg xlab1:*, reg xlab2:V, reg p8:p(V +), reg ylim1:*, reg ylim2:V, reg p9:p(V +), reg ddd1:dots?, reg r49:V, reg r50:V, reg plot1:cls, reg x4:*, reg x5:V, reg p10:p(V +), reg y23:*, reg y24:V, reg p11:p(V +), reg main3:*, reg main4:V, reg p12:p(V +), reg xlab3:*, reg xlab4:V, reg p13:p(V +), reg ylab3:*, reg ylab4:V, reg p14:p(V +), reg ylim3:*, reg ylim4:V, reg p15:p(V +), reg ddd2:dots?, reg r57:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg datax3:*, reg datax4:V, reg c18:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg r62:V, reg y25:*, reg y26:V, reg x6:*, reg x7:V, reg list:cls, reg r63:V, reg r64:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r65:V, reg x8:*, reg x9:V, reg y27:*, reg y28:V, reg list1:cls, reg r66:V, reg invisible:cls, reg r67:V |
    mkenv;
    st y = y;
    st ylim = ylim;
    main_isMissing = missing.0(main);
    if main_isMissing then L0("Normal Q-Q Plot") else L0(main);
  L0(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L1("Theoretical Quantiles") else L1(xlab);
  L1(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L2("Sample Quantiles") else L2(ylab);
  L2(ylab_orDefault):
    st ylab = ylab_orDefault;
    plot_it_isMissing = missing.0(plot_it);
    if plot_it_isMissing then L3(TRUE) else L3(plot_it);
  L3(plot_it_orDefault):
    st `plot.it` = plot_it_orDefault;
    datax_isMissing = missing.0(datax);
    if datax_isMissing then L4(FALSE) else L4(datax);
  L4(datax_orDefault):
    st datax = datax_orDefault;
    st `...` = ddd;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L5(r1):
    st `has.na` = r1;
    c = `as.logical`(r1);
    if c then L39() else L7();
  L32():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L33():
    r = dyn base(<lang `<-`(ina, is.na(y))>);
    goto L5(r);
  L6(r3):
    st ina = r3;
    any = ldf any in base;
    r5 = dyn any(r3);
    check L38() else D2();
  L7():
    goto L9();
  L9():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L34():
    y1 = ld y;
    check L36() else D0();
  L35():
    r2 = dyn base1(<sym y>);
    goto L6(r2);
  L39():
    y3 = ld y;
    check L40() else D3();
  D0():
    deopt 4 [y1];
  D2():
    deopt 10 [r5];
  D3():
    deopt 12 [y3];
  L10(r11, r12):
    st n = r12;
    r14 = `==`(r11, r12);
    c2 = `as.logical`(r14);
    if c2 then L51() else L11();
  L36():
    y2 = force? y1;
    checkMissing(y2);
    is_na = ldf `is.na` in base;
    r4 = dyn is_na(y2);
    check L37() else D1();
  L38():
    goto L5(r5);
  L40():
    y4 = force? y3;
    checkMissing(y4);
    st yN = y4;
    y5 = ld y;
    check L41() else D4();
  L47():
    y9 = ld y;
    check L49() else D6();
  L48():
    r10 = dyn base2(<sym y>);
    goto L10(0.0, r10);
  D1():
    deopt 7 [r4];
  D4():
    deopt 15 [y5];
  D6():
    deopt 27 [0.0, y9];
  L11():
    goto L12();
  L12():
    plot_it1 = ld `plot.it`;
    check L55() else D10();
  L37():
    goto L6(r4);
  L41():
    y6 = force? y5;
    checkMissing(y6);
    c1 = `is.object`(y6);
    if c1 then L42() else L43(y6);
  L49():
    y10 = force? y9;
    checkMissing(y10);
    length = ldf length in base;
    r13 = dyn length(y10);
    check L50() else D7();
  L51():
    stop = ldf stop;
    check L52() else D8();
  D7():
    deopt 30 [0.0, r13];
  D8():
    deopt 34 [];
  D10():
    deopt 39 [plot_it1];
  L8(dx1):
    st y = dx1;
    goto L9();
  L42():
    dr = tryDispatchBuiltin.1("[", y6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43(dr);
  L43(y8):
    ina = ld ina;
    check L45() else D5();
  L50():
    goto L10(0.0, r13);
  L52():
    r15 = dyn stop("y is empty or has only NAs");
    check L53() else D9();
  L55():
    plot_it2 = force? plot_it1;
    checkMissing(plot_it2);
    c3 = `as.logical`(plot_it2);
    if c3 then L56() else L13(c3);
  D5():
    deopt 17 [y8, ina];
  D9():
    deopt 36 [r15];
  L13(c5):
    c12 = `as.logical`(c5);
    if c12 then L60() else L15();
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L45():
    ina1 = force? ina;
    checkMissing(ina1);
    r6 = `!`(ina1);
    __ = ldf `[` in base;
    r7 = dyn __(y8, r6);
    goto L8(r7);
  L53():
    goto L12();
  L56():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L14(c8, r18):
    c9 = `as.logical`(r18);
    c10 = `&&`(c8, c9);
    goto L13(c10);
  L15():
    goto L17();
  L17():
    qnorm = ldf qnorm;
    check L66() else D13();
  L57():
    missing = ldf missing in base;
    r19 = dyn missing(<sym ylim>);
    goto L14(c3, r19);
  L58():
    r17 = dyn base3(<sym ylim>);
    goto L14(c3, r17);
  L60():
    sym4 = ldf range;
    base4 = ldf range in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  D13():
    deopt 55 [];
  L16(r21):
    st ylim = r21;
    goto L17();
  L61():
    y11 = ld y;
    check L63() else D11();
  L62():
    r20 = dyn base4(<sym y>);
    goto L16(r20);
  L66():
    p1 = prom<V +>{
      ppoints = ldf ppoints;
      p = prom<V +>{
        n = ld n;
        n1 = force? n;
        checkMissing(n1);
        return n1;
      };
      r25 = dyn ppoints(p);
      return r25;
    };
    r27 = dyn qnorm(p1);
    check L67() else D14();
  D11():
    deopt 47 [y11];
  D14():
    deopt 57 [r27];
  L63():
    y12 = force? y11;
    checkMissing(y12);
    range = ldf range in base;
    r22 = dyn range(y12);
    check L64() else D12();
  L67():
    c13 = `is.object`(r27);
    if c13 then L68() else L69(r27);
  D12():
    deopt 50 [r22];
  L18(dx4):
    st x = dx4;
    has_na = ld `has.na`;
    check L73() else D17();
  L64():
    goto L16(r22);
  L68():
    dr2 = tryDispatchBuiltin.1("[", r27);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(dr2);
  L69(r29):
    order = ldf order;
    check L71() else D15();
  D15():
    deopt 59 [r29];
  D17():
    deopt 64 [has_na];
  L70():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx3);
  L71():
    p3 = prom<V +>{
      order1 = ldf order;
      p2 = prom<V +>{
        y13 = ld y;
        y14 = force? y13;
        checkMissing(y14);
        return y14;
      };
      r31 = dyn order1(p2);
      return r31;
    };
    r33 = dyn order(p3);
    check L72() else D16();
  L73():
    has_na1 = force? has_na;
    checkMissing(has_na1);
    c14 = `as.logical`(has_na1);
    if c14 then L74() else L19();
  D16():
    deopt 61 [r29, r33];
  L19():
    goto L23();
  L23():
    plot_it3 = ld `plot.it`;
    check L90() else D25();
  L72():
    __1 = ldf `[` in base;
    r34 = dyn __1(r29, r33);
    goto L18(r34);
  L74():
    x = ld x;
    check L75() else D18();
  D18():
    deopt 66 [x];
  D25():
    deopt 94 [plot_it3];
  L75():
    x1 = force? x;
    checkMissing(x1);
    st y = x1;
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L90():
    plot_it4 = force? plot_it3;
    checkMissing(plot_it4);
    c16 = `as.logical`(plot_it4);
    if c16 then L91() else L24();
  L20(r36):
    st x = r36;
    y15 = ld y;
    check L83() else D22();
  L24():
    goto L27();
  L27():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L100() else L101();
  L76():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  L77():
    r35 = dyn base5(NA_REAL, <lang length(ina)>);
    goto L20(r35);
  L91():
    datax1 = ld datax;
    check L92() else D26();
  D22():
    deopt 81 [y15];
  D26():
    deopt 96 [datax1];
  L21(r38):
    rep_int = ldf `rep.int` in base;
    r40 = dyn rep_int(NA_REAL, r38);
    check L82() else D21();
  L28(r60):
    popenv;
    return r60;
  L78():
    ina2 = ld ina;
    check L80() else D19();
  L79():
    r37 = dyn base6(<sym ina>);
    goto L21(r37);
  L83():
    y16 = force? y15;
    checkMissing(y16);
    l = ld x;
    c15 = `is.object`(l);
    if c15 then L84() else L85(y16, l);
  L92():
    datax2 = force? datax1;
    checkMissing(datax2);
    c17 = `as.logical`(datax2);
    if c17 then L93() else L25();
  L100():
    datax3 = ld datax;
    check L102() else D31();
  L101():
    r59 = dyn base7(<lang if(datax, list(x=y, y=x), list(x=x, y=y))>);
    goto L28(r59);
  D19():
    deopt 74 [ina2];
  D21():
    deopt 79 [r40];
  D31():
    deopt 130 [datax3];
  L22(dx6):
    st x = dx6;
    yN = ld yN;
    check L88() else D24();
  L25():
    plot1 = ldf plot;
    check L97() else D29();
  L26(r50):
    goto L27();
  L80():
    ina3 = force? ina2;
    checkMissing(ina3);
    length1 = ldf length in base;
    r39 = dyn length1(ina3);
    check L81() else D20();
  L82():
    goto L20(r40);
  L84():
    dr4 = tryDispatchBuiltin.0("[<-", l, y16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L86() else L85(y16, dr4);
  L85(y18, l2):
    ina4 = ld ina;
    check L87() else D23();
  L93():
    plot = ldf plot;
    check L94() else D27();
  L102():
    datax4 = force? datax3;
    checkMissing(datax4);
    c18 = `as.logical`(datax4);
    if c18 then L103() else L29();
  D20():
    deopt 77 [r39];
  D23():
    deopt 84 [y18, l2, y16, ina4];
  D24():
    deopt 89 [yN];
  D27():
    deopt 99 [];
  D29():
    deopt 113 [];
  L29():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L110() else L111();
  L31(r64):
    invisible = ldf invisible in base;
    r67 = dyn invisible(r64);
    check L115() else D38();
  L81():
    goto L21(r39);
  L86():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L22(dx5);
  L87():
    ina5 = force? ina4;
    checkMissing(ina5);
    r41 = `!`(ina5);
    ___ = ldf `[<-` in base;
    r42 = dyn ___(l2, y16, r41);
    goto L22(r42);
  L88():
    yN1 = force? yN;
    checkMissing(yN1);
    st y = yN1;
    goto L23();
  L94():
    p4 = prom<V +>{
      y21 = ld y;
      y22 = force? y21;
      checkMissing(y22);
      return y22;
    };
    p5 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p6 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p7 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p8 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p9 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    ddd1 = ld `...`;
    r49 = dyn plot[, , main, xlab, ylab, xlim, `...`](p4, p5, p6, p7, p8, p9, ddd1);
    check L95() else D28();
  L97():
    p10 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p11 = prom<V +>{
      y23 = ld y;
      y24 = force? y23;
      checkMissing(y24);
      return y24;
    };
    p12 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    p13 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p14 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p15 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    ddd2 = ld `...`;
    r57 = dyn plot1[, , main, xlab, ylab, ylim, `...`](p10, p11, p12, p13, p14, p15, ddd2);
    check L98() else D30();
  L103():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L104() else L105();
  D28():
    deopt 111 [r49];
  D30():
    deopt 125 [r57];
  D38():
    deopt 153 [r67];
  L30(r62):
    goto L31(r62);
  L95():
    goto L26(r49);
  L98():
    goto L26(r57);
  L104():
    y25 = ld y;
    check L106() else D32();
  L105():
    r61 = dyn base8[x, y](<sym y>, <sym x>);
    goto L30(r61);
  L110():
    x8 = ld x;
    check L112() else D35();
  L111():
    r65 = dyn base9[x, y](<sym x>, <sym y>);
    goto L31(r65);
  L115():
    goto L28(r67);
  D32():
    deopt 134 [y25];
  D35():
    deopt 144 [x8];
  L106():
    y26 = force? y25;
    checkMissing(y26);
    x6 = ld x;
    check L107() else D33();
  L112():
    x9 = force? x8;
    checkMissing(x9);
    y27 = ld y;
    check L113() else D36();
  D33():
    deopt 137 [x6];
  D36():
    deopt 147 [y27];
  L107():
    x7 = force? x6;
    checkMissing(x7);
    list = ldf list in base;
    r63 = dyn list(y26, x7);
    check L108() else D34();
  L113():
    y28 = force? y27;
    checkMissing(y28);
    list1 = ldf list in base;
    r66 = dyn list1(x9, y28);
    check L114() else D37();
  D34():
    deopt 141 [r63];
  D37():
    deopt 151 [r66];
  L108():
    goto L30(r63);
  L114():
    goto L31(r66);
  }
}