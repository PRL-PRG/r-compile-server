fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1502511915;
    st `spineplot.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1502511915(formula, data, breaks, `tol.ylab`, off, ylevels, col, main, xlab, ylab, xaxlabels, yaxlabels, xlim, ylim, axes, `...`, subset, weights, `drop.unused.levels`) {
  (reg formula:*, reg data:*, reg breaks:*, reg tol_ylab:*, reg off:*, reg ylevels:*, reg col:*, reg main:*, reg xlab:*, reg ylab:*, reg xaxlabels:*, reg yaxlabels:*, reg xlim:*, reg ylim:*, reg axes:*, reg ddd:dots, reg subset:*, reg weights:*, reg drop_unused_levels:*) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var breaks:*, reg breaks_isMissing:L, reg breaks_orDefault:*, var `tol.ylab`:*, reg tol_ylab_isMissing:L, reg tol_ylab_orDefault:*, var off:*, reg off_isMissing:L, reg off_orDefault:*, var ylevels:*, reg ylevels_isMissing:L, reg ylevels_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var xaxlabels:*, reg xaxlabels_isMissing:L, reg xaxlabels_orDefault:*, var yaxlabels:*, reg yaxlabels_isMissing:L, reg yaxlabels_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `...`:dots?, var subset:*, reg subset_isMissing:L, reg subset_orDefault:*, var weights:*, reg weights_isMissing:L, reg weights_orDefault:*, var `drop.unused.levels`:*, reg drop_unused_levels_isMissing:L, reg drop_unused_levels_orDefault:*, reg match_call:cls, reg r4:V, reg m:*, reg m1:V, reg c1:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg m6:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg m9:V, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg m12:V, reg r10:V, reg c2:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg m15:V, reg r13:V, reg m16:*, reg m17:V, reg names:cls, reg r14:V, reg match:cls, reg r15:V, reg c3:cls, reg r16:V, reg __:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg quote:cls, reg r20:V, reg l:*, reg c4:L, reg r22:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r25:V, reg eval_parent:cls, reg m18:*, reg m19:V, reg p1:p(V +), reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg setdiff:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg mf:*, reg mf1:V, reg names1:cls, reg r32:V, reg p2:p(V +), reg r34:V, reg length:cls, reg r35:V, reg r36:V, reg c5:L, reg stop:cls, reg r37:V, reg mf2:*, reg mf3:V, reg c6:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r39:V, reg is_factor:cls, reg y:*, reg y1:V, reg p3:p(V +), reg r41:V, reg r42:V, reg c7:L, reg stop1:cls, reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg ylevels1:*, reg ylevels2:V, reg c8:V, reg r47:V, reg c9:L, reg factor:cls, reg y2:*, reg y3:V, reg p4:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg ylevels3:*, reg ylevels4:V, reg is_numeric:cls, reg r51:V, reg c10:L, reg levels:cls, reg y4:*, reg y5:V, reg p5:p(V +), reg r53:V, reg c11:L, reg r55:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ylevels5:*, reg ylevels6:V, reg __2:cls, reg r56:V, reg ylevels7:*, reg ylevels8:V, reg p6:p(V +), reg r58:V, reg mf6:*, reg mf7:V, reg c12:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r60:V, reg _in_:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r61:V, reg r62:V, reg mf10:*, reg mf11:V, reg names2:cls, reg r63:V, reg p7:p(V +), reg r65:V, reg c13:L, reg mf12:*, reg mf13:V, reg c14:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r66:V, reg dx12:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg xlab1:*, reg xlab2:V, reg c15:V, reg c16:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r69:V, reg r70:V, reg mf16:*, reg mf17:V, reg names3:cls, reg r71:V, reg c17:L, reg r73:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __5:cls, reg r74:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r75:V, reg r76:V, reg ylab1:*, reg ylab2:V, reg c18:V, reg c19:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r77:V, reg r78:V, reg mf18:*, reg mf19:V, reg names4:cls, reg r79:V, reg c20:L, reg r81:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __6:cls, reg r82:V, reg spineplot:cls, reg x:*, reg x1:V, reg p8:p(V +), reg y6:*, reg y7:V, reg p9:p(V +), reg breaks1:*, reg breaks2:V, reg p10:p(V +), reg tol_ylab1:*, reg tol_ylab2:V, reg p11:p(V +), reg off1:*, reg off2:V, reg p12:p(V +), reg col1:*, reg col2:V, reg p13:p(V +), reg main1:*, reg main2:V, reg p14:p(V +), reg xlab3:*, reg xlab4:V, reg p15:p(V +), reg ylab3:*, reg ylab4:V, reg p16:p(V +), reg xaxlabels1:*, reg xaxlabels2:V, reg p17:p(V +), reg yaxlabels1:*, reg yaxlabels2:V, reg p18:p(V +), reg xlim1:*, reg xlim2:V, reg p19:p(V +), reg ylim1:*, reg ylim2:V, reg p20:p(V +), reg axes1:*, reg axes2:V, reg p21:p(V +), reg w:*, reg w1:V, reg p22:p(V +), reg ddd1:dots?, reg r98:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    breaks_isMissing = missing.0(breaks);
    if breaks_isMissing then L1(NULL) else L1(breaks);
  L1(breaks_orDefault):
    st breaks = breaks_orDefault;
    tol_ylab_isMissing = missing.0(tol_ylab);
    if tol_ylab_isMissing then L2(0.05) else L2(tol_ylab);
  L2(tol_ylab_orDefault):
    st `tol.ylab` = tol_ylab_orDefault;
    off_isMissing = missing.0(off);
    if off_isMissing then L3(NULL) else L3(off);
  L3(off_orDefault):
    st off = off_orDefault;
    ylevels_isMissing = missing.0(ylevels);
    if ylevels_isMissing then L4(NULL) else L4(ylevels);
  L4(ylevels_orDefault):
    st ylevels = ylevels_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L5(NULL) else L5(col);
  L5(col_orDefault):
    st col = col_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L6("") else L6(main);
  L6(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L7(NULL) else L7(xlab);
  L7(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L8(NULL) else L8(ylab);
  L8(ylab_orDefault):
    st ylab = ylab_orDefault;
    xaxlabels_isMissing = missing.0(xaxlabels);
    if xaxlabels_isMissing then L9(NULL) else L9(xaxlabels);
  L9(xaxlabels_orDefault):
    st xaxlabels = xaxlabels_orDefault;
    yaxlabels_isMissing = missing.0(yaxlabels);
    if yaxlabels_isMissing then L10(NULL) else L10(yaxlabels);
  L10(yaxlabels_orDefault):
    st yaxlabels = yaxlabels_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L11(NULL) else L11(xlim);
  L11(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L12() else L13(ylim);
  L12():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(0.0, 1.0);
      goto L0(r2);
    L2():
      r = dyn base(0.0, 1.0);
      goto L0(r);
    };
    goto L13(p);
  L13(ylim_orDefault):
    st ylim = ylim_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L14(TRUE) else L14(axes);
  L14(axes_orDefault):
    st axes = axes_orDefault;
    st `...` = ddd;
    subset_isMissing = missing.0(subset);
    if subset_isMissing then L15(NULL) else L15(subset);
  L15(subset_orDefault):
    st subset = subset_orDefault;
    weights_isMissing = missing.0(weights);
    if weights_isMissing then L16(NULL) else L16(weights);
  L16(weights_orDefault):
    st weights = weights_orDefault;
    drop_unused_levels_isMissing = missing.0(drop_unused_levels);
    if drop_unused_levels_isMissing then L17(FALSE) else L17(drop_unused_levels);
  L17(drop_unused_levels_orDefault):
    st `drop.unused.levels` = drop_unused_levels_orDefault;
    match_call = ldf `match.call`;
    check L48() else D0();
  D0():
    deopt 1 [];
  L48():
    r4 = dyn match_call[`expand.dots`](FALSE);
    check L49() else D1();
  D1():
    deopt 4 [r4];
  L49():
    st m = r4;
    m = ld m;
    check L50() else D2();
  D2():
    deopt 6 [m];
  L50():
    m1 = force? m;
    checkMissing(m1);
    c1 = `is.object`(m1);
    if c1 then L51() else L52(m1);
  L18(dx1):
    st m = dx1;
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L51():
    dr = tryDispatchBuiltin.1("[", m1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(m3):
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L19(m6, r6):
    __ = ldf `[` in base;
    r17 = dyn __(m6, r6);
    goto L18(r17);
  L23(r19):
    l = ld m;
    c4 = `is.object`(l);
    if c4 then L69() else L70(r19, l);
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L54():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L56() else L57();
  L55():
    r5 = dyn base1(1, <lang match(c("formula", "data", "subset", "weights", "drop.unused.levels"), names(m), 0)>);
    goto L19(m3, r5);
  L67():
    quote = ldf quote in base;
    r20 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L23(r20);
  L68():
    r18 = dyn base5(<lang `::`(stats, model.frame)>);
    goto L23(r18);
  L20(m9, r8):
    c3 = ldf c in base;
    r16 = dyn c3(1, r8);
    check L66() else D7();
  L24(dx3):
    st m = dx3;
    eval_parent = ldf `eval.parent`;
    check L72() else D8();
  L56():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L57():
    r7 = dyn base2(<lang c("formula", "data", "subset", "weights", "drop.unused.levels")>, <lang names(m)>, 0);
    goto L20(m3, r7);
  L69():
    dr2 = tryDispatchBuiltin.0("[[<-", l, r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L71() else L70(r19, dr2);
  L70(r22, l2):
    ____ = ldf `[[<-` in base;
    r25 = dyn ____(l2, r19, 1);
    goto L24(r25);
  D7():
    deopt 33 [m9, r16];
  D8():
    deopt 45 [];
  L21(m12, r10):
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L58():
    c2 = ldf c in base;
    r11 = dyn c2("formula", "data", "subset", "weights", "drop.unused.levels");
    check L60() else D3();
  L59():
    r9 = dyn base3("formula", "data", "subset", "weights", "drop.unused.levels");
    goto L21(m3, r9);
  L66():
    goto L19(m9, r16);
  L71():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L72():
    p1 = prom<V +>{
      m18 = ld m;
      m19 = force? m18;
      checkMissing(m19);
      return m19;
    };
    r27 = dyn eval_parent(p1);
    check L73() else D9();
  D3():
    deopt 21 [m3, r11];
  D9():
    deopt 47 [r27];
  L22(m15, r13):
    match = ldf match in base;
    r15 = dyn match(r10, r13, 0, NULL);
    check L65() else D6();
  L60():
    goto L21(m3, r11);
  L61():
    m16 = ld m;
    check L63() else D4();
  L62():
    r12 = dyn base4(<sym m>);
    goto L22(m12, r12);
  L73():
    st mf = r27;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  D4():
    deopt 24 [m12, m16];
  D6():
    deopt 31 [m15, r15];
  L25(r29):
    r36 = `!=`(r29, 2);
    c5 = `as.logical`(r36);
    if c5 then L79() else L26();
  L63():
    m17 = force? m16;
    checkMissing(m17);
    names = ldf names in base;
    r14 = dyn names(m17);
    check L64() else D5();
  L65():
    goto L20(m15, r15);
  L74():
    setdiff = ldf setdiff;
    check L76() else D10();
  L75():
    r28 = dyn base6(<lang setdiff(names(mf), "(weights)")>);
    goto L25(r28);
  D5():
    deopt 27 [m12, r14];
  D10():
    deopt 52 [];
  L26():
    goto L27();
  L27():
    mf2 = ld mf;
    check L83() else D15();
  L64():
    goto L22(m12, r14);
  L76():
    p2 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      names1 = ldf names in base;
      r32 = dyn names1(mf1);
      goto L0(r32);
    L2():
      r30 = dyn base7(<sym mf>);
      goto L0(r30);
    };
    r34 = dyn setdiff(p2, "(weights)");
    check L77() else D11();
  L79():
    stop = ldf stop;
    check L80() else D13();
  D11():
    deopt 55 [r34];
  D13():
    deopt 61 [];
  D15():
    deopt 66 [mf2];
  L77():
    length = ldf length in base;
    r35 = dyn length(r34);
    check L78() else D12();
  L80():
    r37 = dyn stop("'formula' should specify exactly two variables");
    check L81() else D14();
  L83():
    mf3 = force? mf2;
    checkMissing(mf3);
    c6 = `is.object`(mf3);
    if c6 then L84() else L85();
  D12():
    deopt 57 [r35];
  D14():
    deopt 63 [r37];
  L28(dx5):
    st y = dx5;
    is_factor = ldf `is.factor`;
    check L87() else D16();
  L78():
    goto L25(r35);
  L81():
    goto L27();
  L84():
    dr4 = tryDispatchBuiltin.1("[", mf3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L86() else L85();
  L85():
    __1 = ldf `[` in base;
    r39 = dyn __1(mf3, <missing>, 1);
    goto L28(r39);
  D16():
    deopt 74 [];
  L86():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L28(dx4);
  L87():
    p3 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r41 = dyn is_factor(p3);
    check L88() else D17();
  D17():
    deopt 76 [r41];
  L88():
    r42 = `!`(r41);
    c7 = `as.logical`(r42);
    if c7 then L89() else L29();
  L29():
    goto L30();
  L30():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L89():
    stop1 = ldf stop;
    check L90() else D18();
  D18():
    deopt 79 [];
  L31(r46):
    r47 = `!`(r46);
    c9 = `as.logical`(r47);
    if c9 then L96() else L32();
  L90():
    r43 = dyn stop1("dependent variable should be a factor");
    check L91() else D19();
  L93():
    ylevels1 = ld ylevels;
    check L95() else D20();
  L94():
    r45 = dyn base8(<sym ylevels>);
    goto L31(r45);
  D19():
    deopt 81 [r43];
  D20():
    deopt 85 [ylevels1];
  L32():
    goto L33();
  L33():
    mf6 = ld mf;
    check L100() else D23();
  L91():
    goto L30();
  L95():
    ylevels2 = force? ylevels1;
    checkMissing(ylevels2);
    c8 = `==`(ylevels2, NULL);
    goto L31(c8);
  L96():
    factor = ldf factor;
    check L97() else D21();
  D21():
    deopt 90 [];
  D23():
    deopt 98 [mf6];
  L97():
    p4 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p6 = prom<V +>{
      sym9 = ldf `is.numeric`;
      base9 = ldf `is.numeric` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L3() else L4();
    L0(r50):
      c10 = `as.logical`(r50);
      if c10 then L5() else L1();
    L3():
      ylevels3 = ld ylevels;
      ylevels4 = force? ylevels3;
      checkMissing(ylevels4);
      is_numeric = ldf `is.numeric` in base;
      r51 = dyn is_numeric(ylevels4);
      goto L0(r51);
    L4():
      r49 = dyn base9(<sym ylevels>);
      goto L0(r49);
    L1():
      ylevels7 = ld ylevels;
      ylevels8 = force? ylevels7;
      checkMissing(ylevels8);
      return ylevels8;
    L5():
      levels = ldf levels;
      p5 = prom<V +>{
        y4 = ld y;
        y5 = force? y4;
        checkMissing(y5);
        return y5;
      };
      r53 = dyn levels(p5);
      c11 = `is.object`(r53);
      if c11 then L6() else L7(r53);
    L2(dx7):
      return dx7;
    L6():
      dr6 = tryDispatchBuiltin.1("[", r53);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L8() else L7(dr6);
    L7(r55):
      ylevels5 = ld ylevels;
      ylevels6 = force? ylevels5;
      __2 = ldf `[` in base;
      r56 = dyn __2(r55, ylevels6);
      goto L2(r56);
    L8():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx6);
    };
    r58 = dyn factor[, levels](p4, p6);
    check L98() else D22();
  L100():
    mf7 = force? mf6;
    checkMissing(mf7);
    c12 = `is.object`(mf7);
    if c12 then L101() else L102();
  D22():
    deopt 94 [r58];
  L34(dx9):
    st x = dx9;
    _in_ = ldf `%in%`;
    check L104() else D24();
  L98():
    st y = r58;
    goto L33();
  L101():
    dr8 = tryDispatchBuiltin.1("[", mf7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L103() else L102();
  L102():
    __3 = ldf `[` in base;
    r60 = dyn __3(mf7, <missing>, 2);
    goto L34(r60);
  D24():
    deopt 106 [];
  L103():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L34(dx8);
  L104():
    p7 = prom<V +>{
      sym10 = ldf names;
      base10 = ldf names in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      mf10 = ld mf;
      mf11 = force? mf10;
      checkMissing(mf11);
      names2 = ldf names in base;
      r63 = dyn names2(mf11);
      goto L0(r63);
    L2():
      r61 = dyn base10(<sym mf>);
      goto L0(r61);
    };
    r65 = dyn _in_("(weights)", p7);
    check L105() else D25();
  D25():
    deopt 109 [r65];
  L105():
    c13 = `as.logical`(r65);
    if c13 then L106() else L35();
  L35():
    goto L37(NULL);
  L37(dx12):
    st w = dx12;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L112() else L113();
  L106():
    mf12 = ld mf;
    check L107() else D26();
  D26():
    deopt 110 [mf12];
  L38(r68):
    c16 = `as.logical`(r68);
    if c16 then L115() else L39();
  L107():
    mf13 = force? mf12;
    checkMissing(mf13);
    c14 = `is.object`(mf13);
    if c14 then L108() else L109();
  L112():
    xlab1 = ld xlab;
    check L114() else D27();
  L113():
    r67 = dyn base11(<sym xlab>);
    goto L38(r67);
  D27():
    deopt 120 [xlab1];
  L36(dx11):
    goto L37(dx11);
  L39():
    goto L42();
  L42():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L124() else L125();
  L108():
    dr10 = tryDispatchBuiltin.1("[", mf13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L110() else L109();
  L109():
    __4 = ldf `[` in base;
    r66 = dyn __4(mf13, <missing>, "(weights)");
    goto L36(r66);
  L114():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c15 = `==`(xlab2, NULL);
    goto L38(c15);
  L115():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L116() else L117();
  L40(r70):
    c17 = `is.object`(r70);
    if c17 then L120() else L121(r70);
  L43(r76):
    c19 = `as.logical`(r76);
    if c19 then L127() else L44();
  L110():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L36(dx10);
  L116():
    mf16 = ld mf;
    check L118() else D28();
  L117():
    r69 = dyn base12(<sym mf>);
    goto L40(r69);
  L124():
    ylab1 = ld ylab;
    check L126() else D30();
  L125():
    r75 = dyn base13(<sym ylab>);
    goto L43(r75);
  D28():
    deopt 125 [mf16];
  D30():
    deopt 136 [ylab1];
  L41(dx14):
    st xlab = dx14;
    goto L42();
  L44():
    goto L47();
  L47():
    spineplot = ldf spineplot;
    check L136() else D33();
  L118():
    mf17 = force? mf16;
    checkMissing(mf17);
    names3 = ldf names in base;
    r71 = dyn names3(mf17);
    check L119() else D29();
  L120():
    dr12 = tryDispatchBuiltin.1("[", r70);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L122() else L121(dr12);
  L121(r73):
    __5 = ldf `[` in base;
    r74 = dyn __5(r73, 2);
    goto L41(r74);
  L126():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c18 = `==`(ylab2, NULL);
    goto L43(c18);
  L127():
    sym14 = ldf names;
    base14 = ldf names in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L128() else L129();
  D29():
    deopt 128 [r71];
  D33():
    deopt 152 [];
  L45(r78):
    c20 = `is.object`(r78);
    if c20 then L132() else L133(r78);
  L119():
    goto L40(r71);
  L122():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L41(dx13);
  L128():
    mf18 = ld mf;
    check L130() else D31();
  L129():
    r77 = dyn base14(<sym mf>);
    goto L45(r77);
  L136():
    p8 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p9 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p10 = prom<V +>{
      breaks1 = ld breaks;
      breaks2 = force? breaks1;
      checkMissing(breaks2);
      return breaks2;
    };
    p11 = prom<V +>{
      tol_ylab1 = ld `tol.ylab`;
      tol_ylab2 = force? tol_ylab1;
      checkMissing(tol_ylab2);
      return tol_ylab2;
    };
    p12 = prom<V +>{
      off1 = ld off;
      off2 = force? off1;
      checkMissing(off2);
      return off2;
    };
    p13 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p14 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p15 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p16 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p17 = prom<V +>{
      xaxlabels1 = ld xaxlabels;
      xaxlabels2 = force? xaxlabels1;
      checkMissing(xaxlabels2);
      return xaxlabels2;
    };
    p18 = prom<V +>{
      yaxlabels1 = ld yaxlabels;
      yaxlabels2 = force? yaxlabels1;
      checkMissing(yaxlabels2);
      return yaxlabels2;
    };
    p19 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p20 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p21 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    p22 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    ddd1 = ld `...`;
    r98 = dyn spineplot[, , breaks, `tol.ylab`, off, ylevels, col, main, xlab, ylab, xaxlabels, yaxlabels, xlim, ylim, axes, weights, `...`](p8, p9, p10, p11, p12, NULL, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, ddd1);
    check L137() else D34();
  D31():
    deopt 141 [mf18];
  D34():
    deopt 184 [r98];
  L46(dx17):
    st ylab = dx17;
    goto L47();
  L130():
    mf19 = force? mf18;
    checkMissing(mf19);
    names4 = ldf names in base;
    r79 = dyn names4(mf19);
    check L131() else D32();
  L132():
    dr14 = tryDispatchBuiltin.1("[", r78);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L134() else L133(dr14);
  L133(r81):
    __6 = ldf `[` in base;
    r82 = dyn __6(r81, 1);
    goto L46(r82);
  L137():
    popenv;
    return r98;
  D32():
    deopt 144 [r79];
  L131():
    goto L45(r79);
  L134():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L46(dx16);
  }
}