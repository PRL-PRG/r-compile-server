fun main() {
  () -+> V { reg r:cls, reg table:cls, reg __:cls, reg r1:V, reg r2:cls, reg r3:V, reg p:p(V +), reg r5:V, reg plot:cls, reg Poiss_tab:*, reg Poiss_tab1:V, reg p1:p(V +), reg r7:V, reg plot1:cls, reg table1:cls, reg state_division:*, reg state_division1:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg plot2:cls, reg Titanic:*, reg Titanic1:V, reg p4:p(V +), reg r13:V |
    mkenv;
    r = clos inner688663414;
    st `plot.table` = r;
    table = ldf table;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `::`;
      r1 = dyn __("stats", "rpois");
      checkFun.0(r1);
      r2 = r1 as cls;
      r3 = dyn r2[, lambda](200.0, 5.0);
      return r3;
    };
    r5 = dyn table[N](p);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    st `Poiss.tab` = r5;
    plot = ldf plot;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      Poiss_tab = ld `Poiss.tab`;
      Poiss_tab1 = force? Poiss_tab;
      checkMissing(Poiss_tab1);
      return Poiss_tab1;
    };
    r7 = dyn plot[, main](p1, "plot(table(rpois(200, lambda = 5)))");
    check L3() else D3();
  D3():
    deopt 14 [r7];
  L3():
    plot1 = ldf plot;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p3 = prom<V +>{
      table1 = ldf table;
      p2 = prom<V +>{
        state_division = ld `state.division`;
        state_division1 = force? state_division;
        checkMissing(state_division1);
        return state_division1;
      };
      r9 = dyn table1(p2);
      return r9;
    };
    r11 = dyn plot1(p3);
    check L5() else D5();
  D5():
    deopt 18 [r11];
  L5():
    plot2 = ldf plot;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p4 = prom<V +>{
      Titanic = ld Titanic;
      Titanic1 = force? Titanic;
      checkMissing(Titanic1);
      return Titanic1;
    };
    r13 = dyn plot2[, main](p4, "plot(Titanic, main= *)");
    check L7() else D7();
  D7():
    deopt 24 [r13];
  L7():
    popenv;
    return r13;
  }
}
fun inner688663414(x, type, ylim, lwd, xlab, ylab, `frame.plot`, `...`) {
  (reg x:*, reg type:*, reg ylim:*, reg lwd:*, reg xlab:*, reg ylab:*, reg frame_plot:*, reg ddd:dots) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg max:cls, reg r4:V, reg c:cls, reg r5:V, reg p:p(V +), var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, reg is_num:*, reg is_num1:V, reg p1:p(V +), var `...`:dots?, reg deparse1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg substitute:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg x3:*, reg x4:V, reg dim:cls, reg r17:V, reg length:cls, reg r18:V, reg rnk:*, reg rnk1:V, reg r19:V, reg c1:L, reg stop:cls, reg r20:V, reg rnk2:*, reg rnk3:V, reg r22:V, reg c2:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg x5:*, reg x6:V, reg dimnames:cls, reg r25:V, reg dn:*, reg dn1:V, reg c3:L, reg dn3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg xlab1:*, reg xlab2:V, reg c4:V, reg c5:L, reg ____:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg dn4:*, reg dn5:V, reg names:cls, reg r31:V, reg p3:p(V +), reg r33:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg ylab1:*, reg ylab2:V, reg c6:V, reg c7:L, reg xnam:*, reg xnam1:V, reg suppressWarnings:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r39:V, reg r40:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r41:V, reg r42:V, reg nx:*, reg nx1:V, reg as_numeric:cls, reg r43:V, reg is_na:cls, reg r44:V, reg any:cls, reg r45:V, reg r46:V, reg p4:p(V +), reg r48:V, reg is_num2:*, reg is_num3:V, reg c8:L, reg xx:*, reg xx1:V, reg xx2:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r49:V, reg x7:*, reg x8:V, reg r50:I, reg plot:cls, reg x9:*, reg x10:V, reg p5:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r52:V, reg r53:V, reg x11:*, reg x12:V, reg unclass:cls, reg r54:V, reg p6:p(V +), reg type1:*, reg type2:V, reg p7:p(V +), reg ylim1:*, reg ylim2:V, reg p8:p(V +), reg xlab3:*, reg xlab4:V, reg p9:p(V +), reg ylab3:*, reg ylab4:V, reg p10:p(V +), reg frame_plot1:*, reg frame_plot2:V, reg p11:p(V +), reg lwd1:*, reg lwd2:V, reg p12:p(V +), reg ddd1:dots?, reg r62:V, reg r63:cls, reg isFALSE:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r64:V, reg r65:V, reg list:cls, reg ddd2:dots?, reg r66:V, reg c9:L, reg r68:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r69:V, reg p13:p(V +), reg r71:V, reg r72:V, reg c10:L, reg localaxis:cls, reg x13:*, reg x14:V, reg p14:p(V +), reg nx2:*, reg nx3:V, reg p15:p(V +), reg ddd3:dots?, reg r75:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r76:V, reg r77:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r78:V, reg r79:V, reg list1:cls, reg ddd4:dots?, reg r80:V, reg length1:cls, reg r81:V, reg c11:L, reg c13:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r82:V, reg c16:L, reg r83:V, reg dots:*, reg dots1:V, reg c17:L, reg c19:L, reg dots3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c21:L, reg dx5:V, reg r84:V, reg c22:V, reg r85:V, reg c23:L, reg c24:V, reg c26:L, reg mosaicplot:cls, reg x15:*, reg x16:V, reg p16:p(V +), reg xlab5:*, reg xlab6:V, reg p17:p(V +), reg ylab5:*, reg ylab6:V, reg p18:p(V +), reg ddd5:dots?, reg r89:V, reg mosaicplot1:cls, reg x17:*, reg x18:V, reg p19:p(V +), reg xlab7:*, reg xlab8:V, reg p20:p(V +), reg ylab7:*, reg ylab8:V, reg p21:p(V +), reg xnam3:*, reg xnam4:V, reg p22:p(V +), reg ddd6:dots?, reg r94:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("h") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L1() else L2(ylim);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf max;
      base1 = ldf max in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(0.0, <lang max(x)>);
      goto L0(r);
    L1(r3):
      c = ldf c in base;
      r5 = dyn c(0.0, r3);
      goto L0(r5);
    L4():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      max = ldf max in base;
      r4 = dyn max(x2);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym x>);
      goto L1(r2);
    };
    goto L2(p);
  L2(ylim_orDefault):
    st ylim = ylim_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L3(2.0) else L3(lwd);
  L3(lwd_orDefault):
    st lwd = lwd_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L4(NULL) else L4(xlab);
  L4(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L5(NULL) else L5(ylab);
  L5(ylab_orDefault):
    st ylab = ylab_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L6() else L7(frame_plot);
  L6():
    p1 = prom<V +>{
      is_num = ld `is.num`;
      is_num1 = force? is_num;
      checkMissing(is_num1);
      return is_num1;
    };
    goto L7(p1);
  L7(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    st `...` = ddd;
    deparse1 = ldf deparse1;
    check L29() else D0();
  D0():
    deopt 1 [];
  L29():
    p2 = prom<V +>{
      sym2 = ldf substitute;
      base2 = ldf substitute in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      substitute = ldf substitute in base;
      r10 = dyn substitute(<sym x>);
      goto L0(r10);
    L2():
      r8 = dyn base2(<sym x>);
      goto L0(r8);
    };
    r12 = dyn deparse1(p2);
    check L30() else D1();
  D1():
    deopt 3 [r12];
  L30():
    st xnam = r12;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L8(r14):
    st rnk = r14;
    rnk = ld rnk;
    check L38() else D5();
  L31():
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  L32():
    r13 = dyn base3(<lang dim(x)>);
    goto L8(r13);
  D5():
    deopt 16 [rnk];
  L9(r16):
    length = ldf length in base;
    r18 = dyn length(r16);
    check L37() else D4();
  L33():
    x3 = ld x;
    check L35() else D2();
  L34():
    r15 = dyn base4(<sym x>);
    goto L9(r15);
  L38():
    rnk1 = force? rnk;
    checkMissing(rnk1);
    r19 = `==`(rnk1, 0);
    c1 = `as.logical`(r19);
    if c1 then L39() else L10();
  D2():
    deopt 9 [x3];
  D4():
    deopt 14 [r18];
  L10():
    goto L11();
  L11():
    rnk2 = ld rnk;
    check L43() else D8();
  L35():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r17 = dyn dim(x4);
    check L36() else D3();
  L37():
    goto L8(r18);
  L39():
    stop = ldf stop;
    check L40() else D6();
  D3():
    deopt 12 [r17];
  D6():
    deopt 21 [];
  D8():
    deopt 26 [rnk2];
  L36():
    goto L9(r17);
  L40():
    r20 = dyn stop("invalid table 'x'");
    check L41() else D7();
  L43():
    rnk3 = force? rnk2;
    checkMissing(rnk3);
    r22 = `==`(rnk3, 1);
    c2 = `as.logical`(r22);
    if c2 then L44() else L12();
  D7():
    deopt 23 [r20];
  L12():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L84() else L85();
  L41():
    goto L11();
  L44():
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L45() else L46();
  L13(r24):
    st dn = r24;
    dn = ld dn;
    check L49() else D11();
  L24(r77):
    c11 = `as.logical`(r77);
    if c11 then L91() else L26(c11);
  L45():
    x5 = ld x;
    check L47() else D9();
  L46():
    r23 = dyn base5(<sym x>);
    goto L13(r23);
  L84():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L86() else L87();
  L85():
    r76 = dyn base15(<lang `<-`(dots, list(...))>);
    goto L24(r76);
  D9():
    deopt 32 [x5];
  D11():
    deopt 37 [dn];
  L25(r79):
    st dots = r79;
    length1 = ldf length in base;
    r81 = dyn length1(r79);
    check L90() else D30();
  L26(c13):
    c26 = `as.logical`(c13);
    if c26 then L100() else L28();
  L47():
    x6 = force? x5;
    checkMissing(x6);
    dimnames = ldf dimnames in base;
    r25 = dyn dimnames(x6);
    check L48() else D10();
  L49():
    dn1 = force? dn;
    checkMissing(dn1);
    c3 = `is.object`(dn1);
    if c3 then L50() else L51(dn1);
  L86():
    list1 = ldf list;
    check L88() else D28();
  L87():
    r78 = dyn base16(<sym ...>);
    goto L25(r78);
  L91():
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L92() else L93();
  D10():
    deopt 35 [r25];
  D28():
    deopt 122 [];
  D30():
    deopt 127 [r81];
  L14(dx1):
    st nx = dx1;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L53() else L54();
  L27(c16, r83):
    r85 = `!`(r83);
    c23 = `as.logical`(r85);
    c24 = `&&`(c16, c23);
    goto L26(c24);
  L28():
    mosaicplot1 = ldf mosaicplot;
    check L104() else D34();
  L48():
    goto L13(r25);
  L50():
    dr = tryDispatchBuiltin.1("[[", dn1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L52() else L51(dr);
  L51(dn3):
    __ = ldf `[[` in base;
    r26 = dyn __(dn3, 1);
    goto L14(r26);
  L88():
    ddd4 = ld `...`;
    r80 = dyn list1[`...`](ddd4);
    check L89() else D29();
  L90():
    goto L24(r81);
  L92():
    dots = ld dots;
    check L94() else D31();
  L93():
    r82 = dyn base17(<lang `$`(dots, main)>);
    goto L27(c11, r82);
  L100():
    mosaicplot = ldf mosaicplot;
    check L101() else D32();
  D29():
    deopt 124 [r80];
  D31():
    deopt 129 [c11, dots];
  D32():
    deopt 136 [];
  D34():
    deopt 145 [];
  L15(r28):
    c5 = `as.logical`(r28);
    if c5 then L56() else L16();
  L52():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L53():
    xlab1 = ld xlab;
    check L55() else D12();
  L54():
    r27 = dyn base6(<sym xlab>);
    goto L15(r27);
  L89():
    goto L25(r80);
  L94():
    dots1 = force? dots;
    checkMissing(dots1);
    c17 = `is.object`(dots1);
    if c17 then L96() else L97(c11, dots1);
  L101():
    p16 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p17 = prom<V +>{
      xlab5 = ld xlab;
      xlab6 = force? xlab5;
      checkMissing(xlab6);
      return xlab6;
    };
    p18 = prom<V +>{
      ylab5 = ld ylab;
      ylab6 = force? ylab5;
      checkMissing(ylab6);
      return ylab6;
    };
    ddd5 = ld `...`;
    r89 = dyn mosaicplot[, xlab, ylab, `...`](p16, p17, p18, ddd5);
    check L102() else D33();
  L104():
    p19 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p20 = prom<V +>{
      xlab7 = ld xlab;
      xlab8 = force? xlab7;
      checkMissing(xlab8);
      return xlab8;
    };
    p21 = prom<V +>{
      ylab7 = ld ylab;
      ylab8 = force? ylab7;
      checkMissing(ylab8);
      return ylab8;
    };
    p22 = prom<V +>{
      xnam3 = ld xnam;
      xnam4 = force? xnam3;
      checkMissing(xnam4);
      return xnam4;
    };
    ddd6 = ld `...`;
    r94 = dyn mosaicplot1[, xlab, ylab, main, `...`](p19, p20, p21, p22, ddd6);
    check L105() else D35();
  D12():
    deopt 44 [xlab1];
  D33():
    deopt 143 [r89];
  D35():
    deopt 154 [r94];
  L16():
    goto L17();
  L17():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L55():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c4 = `==`(xlab2, NULL);
    goto L15(c4);
  L56():
    ____ = ldf `%||%`;
    check L57() else D13();
  L95(c21, dx5):
    c22 = `==`(dx5, NULL);
    goto L27(c21, c22);
  L96():
    dr4 = tryDispatchBuiltin.1("$", dots1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L98() else L97(c11, dr4);
  L97(c19, dots3):
    r84 = `$`(dots3, <sym main>);
    goto L95(c19, r84);
  L102():
    popenv;
    return r89;
  L105():
    popenv;
    return r94;
  D13():
    deopt 48 [];
  L18(r36):
    c7 = `as.logical`(r36);
    if c7 then L63() else L19();
  L57():
    p3 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      dn4 = ld dn;
      dn5 = force? dn4;
      checkMissing(dn5);
      names = ldf names in base;
      r31 = dyn names(dn5);
      goto L0(r31);
    L2():
      r29 = dyn base7(<sym dn>);
      goto L0(r29);
    };
    r33 = dyn ____(p3, "");
    check L58() else D14();
  L60():
    ylab1 = ld ylab;
    check L62() else D15();
  L61():
    r35 = dyn base8(<sym ylab>);
    goto L18(r35);
  L98():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L95(c11, dx4);
  D14():
    deopt 51 [r33];
  D15():
    deopt 56 [ylab1];
  L19():
    goto L20();
  L20():
    suppressWarnings = ldf suppressWarnings;
    check L66() else D17();
  L58():
    st xlab = r33;
    goto L17();
  L62():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c6 = `==`(ylab2, NULL);
    goto L18(c6);
  L63():
    xnam = ld xnam;
    check L64() else D16();
  D16():
    deopt 59 [xnam];
  D17():
    deopt 65 [];
  L64():
    xnam1 = force? xnam;
    checkMissing(xnam1);
    st ylab = xnam1;
    goto L20();
  L66():
    p4 = prom<V +>{
      sym9 = ldf any;
      base9 = ldf any in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L3() else L4();
    L0(r38):
      r46 = `!`(r38);
      return r46;
    L3():
      sym10 = ldf `is.na`;
      base10 = ldf `is.na` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L5() else L6();
    L4():
      r37 = dyn base9(<lang is.na(`<-`(xx, as.numeric(nx)))>);
      goto L0(r37);
    L1(r40):
      any = ldf any in base;
      r45 = dyn any(r40);
      goto L0(r45);
    L5():
      sym11 = ldf `as.numeric`;
      base11 = ldf `as.numeric` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L7() else L8();
    L6():
      r39 = dyn base10(<lang `<-`(xx, as.numeric(nx))>);
      goto L1(r39);
    L2(r42):
      st xx = r42;
      is_na = ldf `is.na` in base;
      r44 = dyn is_na(r42);
      goto L1(r44);
    L7():
      nx = ld nx;
      nx1 = force? nx;
      checkMissing(nx1);
      as_numeric = ldf `as.numeric` in base;
      r43 = dyn as_numeric(nx1);
      goto L2(r43);
    L8():
      r41 = dyn base11(<sym nx>);
      goto L2(r41);
    };
    r48 = dyn suppressWarnings(p4);
    check L67() else D18();
  D18():
    deopt 67 [r48];
  L67():
    st `is.num` = r48;
    is_num2 = ld `is.num`;
    check L68() else D19();
  D19():
    deopt 69 [is_num2];
  L68():
    is_num3 = force? is_num2;
    checkMissing(is_num3);
    c8 = `as.logical`(is_num3);
    if c8 then L69() else L21();
  L21():
    sym12 = ldf seq_along;
    base12 = ldf seq_along in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L72() else L73();
  L22(xx2):
    st x0 = xx2;
    plot = ldf plot;
    check L75() else D22();
  L69():
    xx = ld xx;
    check L70() else D20();
  D20():
    deopt 71 [xx];
  D22():
    deopt 79 [];
  L70():
    xx1 = force? xx;
    checkMissing(xx1);
    goto L22(xx1);
  L72():
    x7 = ld x;
    check L74() else D21();
  L73():
    r49 = dyn base12(<sym x>);
    goto L22(r49);
  L75():
    p5 = prom<V +>{
      x9 = ld x0;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p6 = prom<V +>{
      sym13 = ldf unclass;
      base13 = ldf unclass in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      unclass = ldf unclass in base;
      r54 = dyn unclass(x12);
      goto L0(r54);
    L2():
      r52 = dyn base13(<sym x>);
      goto L0(r52);
    };
    p7 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p8 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p9 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p10 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p11 = prom<V +>{
      frame_plot1 = ld `frame.plot`;
      frame_plot2 = force? frame_plot1;
      checkMissing(frame_plot2);
      return frame_plot2;
    };
    p12 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    ddd1 = ld `...`;
    r62 = dyn plot[, , type, ylim, xlab, ylab, `frame.plot`, lwd, `...`, xaxt](p5, p6, p7, p8, p9, p10, p11, p12, ddd1, "n");
    check L76() else D23();
  D21():
    deopt 74 [x7];
  D23():
    deopt 97 [r62];
  L74():
    x8 = force? x7;
    checkMissing(x8);
    r50 = seq_along(x8);
    goto L22(r50);
  L76():
    r63 = clos inner1575439435;
    st localaxis = r63;
    isFALSE = ldf isFALSE;
    check L77() else D24();
  D24():
    deopt 102 [];
  L77():
    p13 = prom<V +>{
      sym14 = ldf list;
      base14 = ldf list in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r65):
      c9 = `is.object`(r65);
      if c9 then L4() else L5(r65);
    L1():
      list = ldf list;
      ddd2 = ld `...`;
      r66 = dyn list[`...`](ddd2);
      goto L0(r66);
    L2():
      r64 = dyn base14(<sym ...>);
      goto L0(r64);
    L3(dx3):
      return dx3;
    L4():
      dr2 = tryDispatchBuiltin.1("$", r65);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r68):
      r69 = `$`(r68, <sym axes>);
      goto L3(r69);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    r71 = dyn isFALSE(p13);
    check L78() else D25();
  D25():
    deopt 104 [r71];
  L78():
    r72 = `!`(r71);
    c10 = `as.logical`(r72);
    if c10 then L79() else L23();
  L23():
    invisible.0();
    popenv;
    return NULL;
  L79():
    localaxis = ldf localaxis;
    check L80() else D26();
  D26():
    deopt 107 [];
  L80():
    p14 = prom<V +>{
      x13 = ld x0;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p15 = prom<V +>{
      nx2 = ld nx;
      nx3 = force? nx2;
      checkMissing(nx3);
      return nx3;
    };
    ddd3 = ld `...`;
    r75 = dyn localaxis[, at, labels, `...`](1.0, p14, p15, ddd3);
    check L81() else D27();
  D27():
    deopt 114 [r75];
  L81():
    popenv;
    return r75;
  }
}
fun inner1575439435(`...`, col, bg, pch, cex, lty, log) {
  (reg ddd:dots, reg col:*, reg bg:*, reg pch:*, reg cex:*, reg lty:*, reg log:*) -+> V { var `...`:dots?, var col:*, var bg:*, var pch:*, var cex:*, var lty:*, var log:*, reg axis:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st `...` = ddd;
    st col = col;
    st bg = bg;
    st pch = pch;
    st cex = cex;
    st lty = lty;
    st log = log;
    axis = ldf axis;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn axis[`...`](ddd1);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}