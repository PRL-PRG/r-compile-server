fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2218052147;
    st `cdplot.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2218052147(formula, data, plot, `tol.ylab`, ylevels, bw, n, from, to, col, border, main, xlab, ylab, yaxlabels, xlim, ylim, `...`, subset, weights) {
  (reg formula:*, reg data:*, reg plot:*, reg tol_ylab:*, reg ylevels:*, reg bw:*, reg n:*, reg from:*, reg to:*, reg col:*, reg border:*, reg main:*, reg xlab:*, reg ylab:*, reg yaxlabels:*, reg xlim:*, reg ylim:*, reg ddd:dots, reg subset:*, reg weights:*) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var `tol.ylab`:*, reg tol_ylab_isMissing:L, reg tol_ylab_orDefault:*, var ylevels:*, reg ylevels_isMissing:L, reg ylevels_orDefault:*, var bw:*, reg bw_isMissing:L, reg bw_orDefault:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var from:*, reg from_isMissing:L, reg from_orDefault:*, var to:*, reg to_isMissing:L, reg to_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var yaxlabels:*, reg yaxlabels_isMissing:L, reg yaxlabels_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p1:p(V +), var `...`:dots?, var subset:*, reg subset_isMissing:L, reg subset_orDefault:*, var weights:*, reg weights_isMissing:L, reg weights_orDefault:*, reg match_call:cls, reg r8:V, reg m:*, reg m1:V, reg c1:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg m6:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg m9:V, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg m12:V, reg r14:V, reg c2:cls, reg r15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg m15:V, reg r17:V, reg m16:*, reg m17:V, reg names:cls, reg r18:V, reg match:cls, reg r19:V, reg c3:cls, reg r20:V, reg __:cls, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg quote:cls, reg r24:V, reg l:*, reg c4:L, reg r26:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r29:V, reg eval_parent:cls, reg m18:*, reg m19:V, reg p2:p(V +), reg r31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg setdiff:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg r35:V, reg mf:*, reg mf1:V, reg names1:cls, reg r36:V, reg p3:p(V +), reg r38:V, reg length:cls, reg r39:V, reg r40:V, reg c5:L, reg stop:cls, reg r41:V, reg mf2:*, reg mf3:V, reg c6:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r43:V, reg is_factor:cls, reg y:*, reg y1:V, reg p4:p(V +), reg r45:V, reg r46:V, reg c7:L, reg stop1:cls, reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg ylevels1:*, reg ylevels2:V, reg c8:V, reg r51:V, reg c9:L, reg factor:cls, reg y2:*, reg y3:V, reg p5:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r53:V, reg r54:V, reg ylevels3:*, reg ylevels4:V, reg is_numeric:cls, reg r55:V, reg c10:L, reg levels:cls, reg y4:*, reg y5:V, reg p6:p(V +), reg r57:V, reg c11:L, reg r59:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ylevels5:*, reg ylevels6:V, reg __2:cls, reg r60:V, reg ylevels7:*, reg ylevels8:V, reg p7:p(V +), reg r62:V, reg mf6:*, reg mf7:V, reg c12:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r64:V, reg _in_:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r65:V, reg r66:V, reg mf10:*, reg mf11:V, reg names2:cls, reg r67:V, reg p8:p(V +), reg r69:V, reg c13:L, reg mf12:*, reg mf13:V, reg c14:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r70:V, reg dx12:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r71:V, reg r72:V, reg xlab1:*, reg xlab2:V, reg c15:V, reg c16:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r73:V, reg r74:V, reg mf16:*, reg mf17:V, reg names3:cls, reg r75:V, reg c17:L, reg r77:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg __5:cls, reg r78:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r79:V, reg r80:V, reg ylab1:*, reg ylab2:V, reg c18:V, reg c19:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r81:V, reg r82:V, reg mf18:*, reg mf19:V, reg names4:cls, reg r83:V, reg c20:L, reg r85:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __6:cls, reg r86:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r87:V, reg r88:V, reg yaxlabels1:*, reg yaxlabels2:V, reg c21:V, reg c22:L, reg levels1:cls, reg y6:*, reg y7:V, reg p9:p(V +), reg r90:V, reg cdplot:cls, reg x:*, reg x1:V, reg p10:p(V +), reg y8:*, reg y9:V, reg p11:p(V +), reg plot1:*, reg plot2:V, reg p12:p(V +), reg tol_ylab1:*, reg tol_ylab2:V, reg p13:p(V +), reg bw1:*, reg bw2:V, reg p14:p(V +), reg n1:*, reg n2:V, reg p15:p(V +), reg from1:*, reg from2:V, reg p16:p(V +), reg to1:*, reg to2:V, reg p17:p(V +), reg col1:*, reg col2:V, reg p18:p(V +), reg border1:*, reg border2:V, reg p19:p(V +), reg main1:*, reg main2:V, reg p20:p(V +), reg xlab3:*, reg xlab4:V, reg p21:p(V +), reg ylab3:*, reg ylab4:V, reg p22:p(V +), reg yaxlabels3:*, reg yaxlabels4:V, reg p23:p(V +), reg xlim1:*, reg xlim2:V, reg p24:p(V +), reg ylim1:*, reg ylim2:V, reg p25:p(V +), reg w:*, reg w1:V, reg p26:p(V +), reg ddd1:dots?, reg r109:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0() else L1(data);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(data_orDefault):
    st data = data_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L2(TRUE) else L2(plot);
  L2(plot_orDefault):
    st plot = plot_orDefault;
    tol_ylab_isMissing = missing.0(tol_ylab);
    if tol_ylab_isMissing then L3(0.05) else L3(tol_ylab);
  L3(tol_ylab_orDefault):
    st `tol.ylab` = tol_ylab_orDefault;
    ylevels_isMissing = missing.0(ylevels);
    if ylevels_isMissing then L4(NULL) else L4(ylevels);
  L4(ylevels_orDefault):
    st ylevels = ylevels_orDefault;
    bw_isMissing = missing.0(bw);
    if bw_isMissing then L5("nrd0") else L5(bw);
  L5(bw_orDefault):
    st bw = bw_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L6(512.0) else L6(n);
  L6(n_orDefault):
    st n = n_orDefault;
    from_isMissing = missing.0(from);
    if from_isMissing then L7(NULL) else L7(from);
  L7(from_orDefault):
    st from = from_orDefault;
    to_isMissing = missing.0(to);
    if to_isMissing then L8(NULL) else L8(to);
  L8(to_orDefault):
    st to = to_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L9(NULL) else L9(col);
  L9(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L10(1.0) else L10(border);
  L10(border_orDefault):
    st border = border_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L11("") else L11(main);
  L11(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L12(NULL) else L12(xlab);
  L12(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L13(NULL) else L13(ylab);
  L13(ylab_orDefault):
    st ylab = ylab_orDefault;
    yaxlabels_isMissing = missing.0(yaxlabels);
    if yaxlabels_isMissing then L14(NULL) else L14(yaxlabels);
  L14(yaxlabels_orDefault):
    st yaxlabels = yaxlabels_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L15(NULL) else L15(xlim);
  L15(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L16() else L17(ylim);
  L16():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c = ldf c in base;
      r6 = dyn c(0.0, 1.0);
      goto L0(r6);
    L2():
      r4 = dyn base1(0.0, 1.0);
      goto L0(r4);
    };
    goto L17(p1);
  L17(ylim_orDefault):
    st ylim = ylim_orDefault;
    st `...` = ddd;
    subset_isMissing = missing.0(subset);
    if subset_isMissing then L18(NULL) else L18(subset);
  L18(subset_orDefault):
    st subset = subset_orDefault;
    weights_isMissing = missing.0(weights);
    if weights_isMissing then L19(NULL) else L19(weights);
  L19(weights_orDefault):
    st weights = weights_orDefault;
    match_call = ldf `match.call`;
    check L53() else D0();
  D0():
    deopt 1 [];
  L53():
    r8 = dyn match_call[`expand.dots`](FALSE);
    check L54() else D1();
  D1():
    deopt 4 [r8];
  L54():
    st m = r8;
    m = ld m;
    check L55() else D2();
  D2():
    deopt 6 [m];
  L55():
    m1 = force? m;
    checkMissing(m1);
    c1 = `is.object`(m1);
    if c1 then L56() else L57(m1);
  L20(dx1):
    st m = dx1;
    sym6 = ldf quote;
    base6 = ldf quote in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L56():
    dr = tryDispatchBuiltin.1("[", m1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L58() else L57(dr);
  L57(m3):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L21(m6, r10):
    __ = ldf `[` in base;
    r21 = dyn __(m6, r10);
    goto L20(r21);
  L25(r23):
    l = ld m;
    c4 = `is.object`(l);
    if c4 then L74() else L75(r23, l);
  L58():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L59():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L60():
    r9 = dyn base2(1, <lang match(c("formula", "data", "subset", "weights"), names(m), 0)>);
    goto L21(m3, r9);
  L72():
    quote = ldf quote in base;
    r24 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L25(r24);
  L73():
    r22 = dyn base6(<lang `::`(stats, model.frame)>);
    goto L25(r22);
  L22(m9, r12):
    c3 = ldf c in base;
    r20 = dyn c3(1, r12);
    check L71() else D7();
  L26(dx3):
    st m = dx3;
    eval_parent = ldf `eval.parent`;
    check L77() else D8();
  L61():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L62():
    r11 = dyn base3(<lang c("formula", "data", "subset", "weights")>, <lang names(m)>, 0);
    goto L22(m3, r11);
  L74():
    dr2 = tryDispatchBuiltin.0("[[<-", l, r23);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L76() else L75(r23, dr2);
  L75(r26, l2):
    ____ = ldf `[[<-` in base;
    r29 = dyn ____(l2, r23, 1);
    goto L26(r29);
  D7():
    deopt 32 [m9, r20];
  D8():
    deopt 44 [];
  L23(m12, r14):
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L63():
    c2 = ldf c in base;
    r15 = dyn c2("formula", "data", "subset", "weights");
    check L65() else D3();
  L64():
    r13 = dyn base4("formula", "data", "subset", "weights");
    goto L23(m3, r13);
  L71():
    goto L21(m9, r20);
  L76():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(dx2);
  L77():
    p2 = prom<V +>{
      m18 = ld m;
      m19 = force? m18;
      checkMissing(m19);
      return m19;
    };
    r31 = dyn eval_parent(p2);
    check L78() else D9();
  D3():
    deopt 20 [m3, r15];
  D9():
    deopt 46 [r31];
  L24(m15, r17):
    match = ldf match in base;
    r19 = dyn match(r14, r17, 0, NULL);
    check L70() else D6();
  L65():
    goto L23(m3, r15);
  L66():
    m16 = ld m;
    check L68() else D4();
  L67():
    r16 = dyn base5(<sym m>);
    goto L24(m12, r16);
  L78():
    st mf = r31;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  D4():
    deopt 23 [m12, m16];
  D6():
    deopt 30 [m15, r19];
  L27(r33):
    r40 = `!=`(r33, 2);
    c5 = `as.logical`(r40);
    if c5 then L84() else L28();
  L68():
    m17 = force? m16;
    checkMissing(m17);
    names = ldf names in base;
    r18 = dyn names(m17);
    check L69() else D5();
  L70():
    goto L22(m15, r19);
  L79():
    setdiff = ldf setdiff;
    check L81() else D10();
  L80():
    r32 = dyn base7(<lang setdiff(names(mf), "(weights)")>);
    goto L27(r32);
  D5():
    deopt 26 [m12, r18];
  D10():
    deopt 51 [];
  L28():
    goto L29();
  L29():
    mf2 = ld mf;
    check L88() else D15();
  L69():
    goto L24(m12, r18);
  L81():
    p3 = prom<V +>{
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      names1 = ldf names in base;
      r36 = dyn names1(mf1);
      goto L0(r36);
    L2():
      r34 = dyn base8(<sym mf>);
      goto L0(r34);
    };
    r38 = dyn setdiff(p3, "(weights)");
    check L82() else D11();
  L84():
    stop = ldf stop;
    check L85() else D13();
  D11():
    deopt 54 [r38];
  D13():
    deopt 60 [];
  D15():
    deopt 65 [mf2];
  L82():
    length = ldf length in base;
    r39 = dyn length(r38);
    check L83() else D12();
  L85():
    r41 = dyn stop("'formula' should specify exactly two variables");
    check L86() else D14();
  L88():
    mf3 = force? mf2;
    checkMissing(mf3);
    c6 = `is.object`(mf3);
    if c6 then L89() else L90();
  D12():
    deopt 56 [r39];
  D14():
    deopt 62 [r41];
  L30(dx5):
    st y = dx5;
    is_factor = ldf `is.factor`;
    check L92() else D16();
  L83():
    goto L27(r39);
  L86():
    goto L29();
  L89():
    dr4 = tryDispatchBuiltin.1("[", mf3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L91() else L90();
  L90():
    __1 = ldf `[` in base;
    r43 = dyn __1(mf3, <missing>, 1);
    goto L30(r43);
  D16():
    deopt 73 [];
  L91():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx4);
  L92():
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r45 = dyn is_factor(p4);
    check L93() else D17();
  D17():
    deopt 75 [r45];
  L93():
    r46 = `!`(r45);
    c7 = `as.logical`(r46);
    if c7 then L94() else L31();
  L31():
    goto L32();
  L32():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L98() else L99();
  L94():
    stop1 = ldf stop;
    check L95() else D18();
  D18():
    deopt 78 [];
  L33(r50):
    r51 = `!`(r50);
    c9 = `as.logical`(r51);
    if c9 then L101() else L34();
  L95():
    r47 = dyn stop1("dependent variable should be a factor");
    check L96() else D19();
  L98():
    ylevels1 = ld ylevels;
    check L100() else D20();
  L99():
    r49 = dyn base9(<sym ylevels>);
    goto L33(r49);
  D19():
    deopt 80 [r47];
  D20():
    deopt 84 [ylevels1];
  L34():
    goto L35();
  L35():
    mf6 = ld mf;
    check L105() else D23();
  L96():
    goto L32();
  L100():
    ylevels2 = force? ylevels1;
    checkMissing(ylevels2);
    c8 = `==`(ylevels2, NULL);
    goto L33(c8);
  L101():
    factor = ldf factor;
    check L102() else D21();
  D21():
    deopt 89 [];
  D23():
    deopt 97 [mf6];
  L102():
    p5 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p7 = prom<V +>{
      sym10 = ldf `is.numeric`;
      base10 = ldf `is.numeric` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L3() else L4();
    L0(r54):
      c10 = `as.logical`(r54);
      if c10 then L5() else L1();
    L3():
      ylevels3 = ld ylevels;
      ylevels4 = force? ylevels3;
      checkMissing(ylevels4);
      is_numeric = ldf `is.numeric` in base;
      r55 = dyn is_numeric(ylevels4);
      goto L0(r55);
    L4():
      r53 = dyn base10(<sym ylevels>);
      goto L0(r53);
    L1():
      ylevels7 = ld ylevels;
      ylevels8 = force? ylevels7;
      checkMissing(ylevels8);
      return ylevels8;
    L5():
      levels = ldf levels;
      p6 = prom<V +>{
        y4 = ld y;
        y5 = force? y4;
        checkMissing(y5);
        return y5;
      };
      r57 = dyn levels(p6);
      c11 = `is.object`(r57);
      if c11 then L6() else L7(r57);
    L2(dx7):
      return dx7;
    L6():
      dr6 = tryDispatchBuiltin.1("[", r57);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L8() else L7(dr6);
    L7(r59):
      ylevels5 = ld ylevels;
      ylevels6 = force? ylevels5;
      __2 = ldf `[` in base;
      r60 = dyn __2(r59, ylevels6);
      goto L2(r60);
    L8():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx6);
    };
    r62 = dyn factor[, levels](p5, p7);
    check L103() else D22();
  L105():
    mf7 = force? mf6;
    checkMissing(mf7);
    c12 = `is.object`(mf7);
    if c12 then L106() else L107();
  D22():
    deopt 93 [r62];
  L36(dx9):
    st x = dx9;
    _in_ = ldf `%in%`;
    check L109() else D24();
  L103():
    st y = r62;
    goto L35();
  L106():
    dr8 = tryDispatchBuiltin.1("[", mf7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L108() else L107();
  L107():
    __3 = ldf `[` in base;
    r64 = dyn __3(mf7, <missing>, 2);
    goto L36(r64);
  D24():
    deopt 105 [];
  L108():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L36(dx8);
  L109():
    p8 = prom<V +>{
      sym11 = ldf names;
      base11 = ldf names in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      mf10 = ld mf;
      mf11 = force? mf10;
      checkMissing(mf11);
      names2 = ldf names in base;
      r67 = dyn names2(mf11);
      goto L0(r67);
    L2():
      r65 = dyn base11(<sym mf>);
      goto L0(r65);
    };
    r69 = dyn _in_("(weights)", p8);
    check L110() else D25();
  D25():
    deopt 108 [r69];
  L110():
    c13 = `as.logical`(r69);
    if c13 then L111() else L37();
  L37():
    goto L39(NULL);
  L39(dx12):
    st w = dx12;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L117() else L118();
  L111():
    mf12 = ld mf;
    check L112() else D26();
  D26():
    deopt 109 [mf12];
  L40(r72):
    c16 = `as.logical`(r72);
    if c16 then L120() else L41();
  L112():
    mf13 = force? mf12;
    checkMissing(mf13);
    c14 = `is.object`(mf13);
    if c14 then L113() else L114();
  L117():
    xlab1 = ld xlab;
    check L119() else D27();
  L118():
    r71 = dyn base12(<sym xlab>);
    goto L40(r71);
  D27():
    deopt 119 [xlab1];
  L38(dx11):
    goto L39(dx11);
  L41():
    goto L44();
  L44():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L129() else L130();
  L113():
    dr10 = tryDispatchBuiltin.1("[", mf13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L115() else L114();
  L114():
    __4 = ldf `[` in base;
    r70 = dyn __4(mf13, <missing>, "(weights)");
    goto L38(r70);
  L119():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c15 = `==`(xlab2, NULL);
    goto L40(c15);
  L120():
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L121() else L122();
  L42(r74):
    c17 = `is.object`(r74);
    if c17 then L125() else L126(r74);
  L45(r80):
    c19 = `as.logical`(r80);
    if c19 then L132() else L46();
  L115():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L38(dx10);
  L121():
    mf16 = ld mf;
    check L123() else D28();
  L122():
    r73 = dyn base13(<sym mf>);
    goto L42(r73);
  L129():
    ylab1 = ld ylab;
    check L131() else D30();
  L130():
    r79 = dyn base14(<sym ylab>);
    goto L45(r79);
  D28():
    deopt 124 [mf16];
  D30():
    deopt 135 [ylab1];
  L43(dx14):
    st xlab = dx14;
    goto L44();
  L46():
    goto L49();
  L49():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L141() else L142();
  L123():
    mf17 = force? mf16;
    checkMissing(mf17);
    names3 = ldf names in base;
    r75 = dyn names3(mf17);
    check L124() else D29();
  L125():
    dr12 = tryDispatchBuiltin.1("[", r74);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L127() else L126(dr12);
  L126(r77):
    __5 = ldf `[` in base;
    r78 = dyn __5(r77, 2);
    goto L43(r78);
  L131():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c18 = `==`(ylab2, NULL);
    goto L45(c18);
  L132():
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L133() else L134();
  D29():
    deopt 127 [r75];
  L47(r82):
    c20 = `is.object`(r82);
    if c20 then L137() else L138(r82);
  L50(r88):
    c22 = `as.logical`(r88);
    if c22 then L144() else L51();
  L124():
    goto L42(r75);
  L127():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L43(dx13);
  L133():
    mf18 = ld mf;
    check L135() else D31();
  L134():
    r81 = dyn base15(<sym mf>);
    goto L47(r81);
  L141():
    yaxlabels1 = ld yaxlabels;
    check L143() else D33();
  L142():
    r87 = dyn base16(<sym yaxlabels>);
    goto L50(r87);
  D31():
    deopt 140 [mf18];
  D33():
    deopt 151 [yaxlabels1];
  L48(dx17):
    st ylab = dx17;
    goto L49();
  L51():
    goto L52();
  L52():
    cdplot = ldf cdplot;
    check L148() else D36();
  L135():
    mf19 = force? mf18;
    checkMissing(mf19);
    names4 = ldf names in base;
    r83 = dyn names4(mf19);
    check L136() else D32();
  L137():
    dr14 = tryDispatchBuiltin.1("[", r82);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L139() else L138(dr14);
  L138(r85):
    __6 = ldf `[` in base;
    r86 = dyn __6(r85, 1);
    goto L48(r86);
  L143():
    yaxlabels2 = force? yaxlabels1;
    checkMissing(yaxlabels2);
    c21 = `==`(yaxlabels2, NULL);
    goto L50(c21);
  L144():
    levels1 = ldf levels;
    check L145() else D34();
  D32():
    deopt 143 [r83];
  D34():
    deopt 155 [];
  D36():
    deopt 162 [];
  L136():
    goto L47(r83);
  L139():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L48(dx16);
  L145():
    p9 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r90 = dyn levels1(p9);
    check L146() else D35();
  L148():
    p10 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p11 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    p12 = prom<V +>{
      plot1 = ld plot;
      plot2 = force? plot1;
      checkMissing(plot2);
      return plot2;
    };
    p13 = prom<V +>{
      tol_ylab1 = ld `tol.ylab`;
      tol_ylab2 = force? tol_ylab1;
      checkMissing(tol_ylab2);
      return tol_ylab2;
    };
    p14 = prom<V +>{
      bw1 = ld bw;
      bw2 = force? bw1;
      checkMissing(bw2);
      return bw2;
    };
    p15 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p16 = prom<V +>{
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      return from2;
    };
    p17 = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    p18 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p19 = prom<V +>{
      border1 = ld border;
      border2 = force? border1;
      checkMissing(border2);
      return border2;
    };
    p20 = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    p21 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p22 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p23 = prom<V +>{
      yaxlabels3 = ld yaxlabels;
      yaxlabels4 = force? yaxlabels3;
      checkMissing(yaxlabels4);
      return yaxlabels4;
    };
    p24 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p25 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p26 = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    ddd1 = ld `...`;
    r109 = dyn cdplot[, , plot, `tol.ylab`, bw, n, from, to, col, border, main, xlab, ylab, yaxlabels, xlim, ylim, weights, `...`](p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, ddd1);
    check L149() else D37();
  D35():
    deopt 157 [r90];
  D37():
    deopt 196 [r109];
  L146():
    st yaxlabels = r90;
    goto L52();
  L149():
    popenv;
    return r109;
  }
}